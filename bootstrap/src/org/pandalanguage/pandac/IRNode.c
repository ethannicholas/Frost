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

typedef org$pandalanguage$pandac$Type* (*$fn84)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn87)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn101)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn164)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn190)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn222)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn225)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn233)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn386)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn400)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn408)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn506)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn618)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn621)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn643)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn647)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn671)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn678)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn689)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn691)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn729)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn736)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn747)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn749)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn794)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn820)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn833)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn846)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn853)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn864)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn866)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn900)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn913)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn920)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn931)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn933)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn942)(org$pandalanguage$pandac$IRNode*);
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
typedef panda$core$Bit (*$fn1128)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1142)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1155)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1162)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1173)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1175)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1198)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1215)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1246)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1249)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1253)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1339)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1346)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1357)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1359)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1392)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1399)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1410)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1412)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1429)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1436)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1447)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1449)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1469)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1482)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1489)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1500)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1502)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1575)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1618)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1625)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1636)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1674)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1681)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1692)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1708)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1715)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1726)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1776)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1794)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1827)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1867)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1918)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1923)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1938)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn1943)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1979)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1986)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1997)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2028)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2036)(panda$collections$ListView*, panda$core$String*);
typedef panda$core$String* (*$fn2054)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2074)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn2112)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2119)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2130)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2214)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2221)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2232)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2277)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2284)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2295)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2311)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2318)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2329)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2356)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2399)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn2449)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2456)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2467)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2624)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2631)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2653)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2691)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2713)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2731)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2815)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2846)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2855)(panda$collections$ListView*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2896)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2903)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2914)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x4e\x6f\x64\x65", 31, -8857975469778350849, NULL };
static panda$core$String $s230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s296 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1517 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1536 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s1538 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1541 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s1550 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1557 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s1577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1609 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s1639 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1665 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x79\x20\x7b\x0a", 6, 2292679699717, NULL };
static panda$core$String $s1695 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1699 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x66\x69\x6e\x61\x6c\x6c\x79\x20\x7b\x0a", 12, -1355183944487068280, NULL };
static panda$core$String $s1729 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1749 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s1751 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1756 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s1771 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1779 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1796 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1799 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1829 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1832 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1837 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s1862 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1870 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1878 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };
static panda$core$String $s1885 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x65\x64\x20\x6f\x62\x6a\x65\x63\x74\x20\x2a\x2d", 24, 1541443738414735436, NULL };
static panda$core$String $s1895 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s1897 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1902 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s1920 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1926 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s1929 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1940 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1946 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1968 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1970 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s2000 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2006 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x77\x68\x69\x6c\x65\x20", 8, 24265489235972527, NULL };
static panda$core$String $s2008 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2030 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2033 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2039 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2056 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x2a\x20\x61\x6e\x64\x20\x74\x68\x65\x6e\x3a\x20", 14, -3277098584181619124, NULL };
static panda$core$String $s2059 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s2076 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2079 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s2102 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s2133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s2143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2170 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x6e\x75\x6c\x6c\x29", 9, 1443802565768004343, NULL };
static panda$core$String $s2181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x29", 8, 14324500803727910, NULL };
static panda$core$String $s2203 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s2235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s2267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2302 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x3a\x0a", 11, 7948234111488089839, NULL };
static panda$core$String $s2332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2374 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s2401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s2436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s2439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s2501 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s2518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s2522 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2537 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s2541 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s2544 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2551 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s2560 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s2567 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s2585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3f\x20", 3, 1363128, NULL };
static panda$core$String $s2590 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s2593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s2634 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s2649 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2656 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static panda$core$String $s2659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2678 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x55\x4e\x52\x45\x53\x4f\x4c\x56\x45\x44\x2a\x2d", 14, -8805999466873262330, NULL };
static panda$core$String $s2680 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2686 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2694 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2703 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x55\x4e\x52\x45\x53\x4f\x4c\x56\x45\x44\x2a\x2d", 14, -8805999466873262330, NULL };
static panda$core$String $s2708 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2716 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2733 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2739 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2750 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2771 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s2772 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s2775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s2777 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2802 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s2805 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s2808 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s2811 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s2842 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s2849 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x0a", 2, 16069, NULL };
static panda$core$String $s2852 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2858 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2880 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2884 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s2886 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2917 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2933 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };

org$pandalanguage$pandac$Type* org$pandalanguage$pandac$IRNode$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$74_95 = NULL;
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
    org$pandalanguage$pandac$Type* $tmp203;
    org$pandalanguage$pandac$Type* $tmp204;
    panda$core$Int64 $tmp208;
    org$pandalanguage$pandac$Type* type210 = NULL;
    org$pandalanguage$pandac$Type* $tmp212;
    panda$core$Int64 $tmp215;
    org$pandalanguage$pandac$IRNode* ifTrue217 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse219 = NULL;
    org$pandalanguage$pandac$Type* $tmp221;
    org$pandalanguage$pandac$Type* $tmp224;
    org$pandalanguage$pandac$Type* $tmp231;
    org$pandalanguage$pandac$Type* $tmp232;
    panda$core$Int64 $tmp237;
    org$pandalanguage$pandac$Type* $tmp239;
    org$pandalanguage$pandac$Type* $tmp240;
    panda$core$Int64 $tmp244;
    org$pandalanguage$pandac$Type* $tmp246;
    org$pandalanguage$pandac$Type* $tmp247;
    panda$core$Int64 $tmp251;
    org$pandalanguage$pandac$Type* type253 = NULL;
    org$pandalanguage$pandac$Type* $tmp255;
    panda$core$Int64 $tmp258;
    org$pandalanguage$pandac$Type* $tmp260;
    org$pandalanguage$pandac$Type* $tmp261;
    panda$core$Int64 $tmp265;
    org$pandalanguage$pandac$Type* type267 = NULL;
    org$pandalanguage$pandac$Type* $tmp269;
    panda$core$Int64 $tmp272;
    org$pandalanguage$pandac$Type* $tmp274;
    org$pandalanguage$pandac$Type* $tmp275;
    panda$core$Int64 $tmp279;
    org$pandalanguage$pandac$Type* $tmp281;
    org$pandalanguage$pandac$Type* $tmp282;
    panda$core$Int64 $tmp286;
    org$pandalanguage$pandac$Variable* variable288 = NULL;
    org$pandalanguage$pandac$Type* $tmp290;
    panda$core$Bit $tmp293;
    int $tmp4;
    {
        $tmp6 = self;
        $match$74_95 = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Int64$init$builtin_int64(&$tmp7, 1);
        panda$core$Bit $tmp8 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, $tmp7);
        if ($tmp8.value) {
        {
            org$pandalanguage$pandac$Type** $tmp10 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
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
        panda$core$Bit $tmp16 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, $tmp15);
        if ($tmp16.value) {
        {
            org$pandalanguage$pandac$Type** $tmp18 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
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
        panda$core$Bit $tmp23 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, $tmp22);
        if ($tmp23.value) {
        {
            org$pandalanguage$pandac$Type** $tmp25 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
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
        panda$core$Bit $tmp30 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, $tmp29);
        if ($tmp30.value) {
        {
            org$pandalanguage$pandac$Type** $tmp32 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
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
        panda$core$Bit $tmp37 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, $tmp36);
        if ($tmp37.value) {
        {
            org$pandalanguage$pandac$Type** $tmp39 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 24));
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
        panda$core$Bit $tmp44 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, $tmp43);
        if ($tmp44.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp46 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$74_95->$data + 16));
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
        panda$core$Bit $tmp53 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, $tmp52);
        if ($tmp53.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp55 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$74_95->$data + 24));
            ce54 = *$tmp55;
            panda$core$Int64* $tmp57 = ((panda$core$Int64*) ((char*) $match$74_95->$data + 32));
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
        panda$core$Bit $tmp64 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, $tmp63);
        if ($tmp64.value) {
        {
            org$pandalanguage$pandac$Type** $tmp66 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
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
        panda$core$Bit $tmp71 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, $tmp70);
        if ($tmp71.value) {
        {
            org$pandalanguage$pandac$Type** $tmp73 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
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
        panda$core$Bit $tmp78 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, $tmp77);
        if ($tmp78.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp80 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$74_95->$data + 0));
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
        panda$core$Bit $tmp96 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, $tmp95);
        if ($tmp96.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp98 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$74_95->$data + 0));
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
        panda$core$Bit $tmp106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, $tmp105);
        if ($tmp106.value) {
        {
            org$pandalanguage$pandac$Type** $tmp108 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
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
        panda$core$Bit $tmp113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, $tmp112);
        if ($tmp113.value) {
        {
            org$pandalanguage$pandac$Type** $tmp115 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
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
        panda$core$Bit $tmp120 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, $tmp119);
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
        panda$core$Bit $tmp127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, $tmp126);
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
        panda$core$Bit $tmp134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, $tmp133);
        if ($tmp134.value) {
        {
            org$pandalanguage$pandac$Type** $tmp136 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
            type135 = *$tmp136;
            org$pandalanguage$pandac$IRNode** $tmp138 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$74_95->$data + 24));
            target137 = *$tmp138;
            org$pandalanguage$pandac$MethodRef** $tmp140 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$74_95->$data + 32));
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
        panda$core$Bit $tmp145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, $tmp144);
        if ($tmp145.value) {
        {
            org$pandalanguage$pandac$Type** $tmp147 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
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
        panda$core$Bit $tmp152 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, $tmp151);
        if ($tmp152.value) {
        {
            org$pandalanguage$pandac$Type** $tmp154 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
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
        panda$core$Bit $tmp159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, $tmp158);
        if ($tmp159.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp161 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$74_95->$data + 24));
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
        panda$core$Bit $tmp169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, $tmp168);
        if ($tmp169.value) {
        {
            org$pandalanguage$pandac$Type** $tmp171 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
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
        panda$core$Bit $tmp176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, $tmp175);
        if ($tmp176.value) {
        {
            org$pandalanguage$pandac$Type** $tmp178 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
            type177 = *$tmp178;
            panda$core$Int64* $tmp180 = ((panda$core$Int64*) ((char*) $match$74_95->$data + 24));
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
        panda$core$Bit $tmp185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, $tmp184);
        if ($tmp185.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp187 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$74_95->$data + 0));
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
        panda$core$Bit $tmp195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, $tmp194);
        if ($tmp195.value) {
        {
            org$pandalanguage$pandac$Type** $tmp197 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
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
        panda$core$Bit $tmp202 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, $tmp201);
        if ($tmp202.value) {
        {
            org$pandalanguage$pandac$Type* $tmp205 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
            $tmp204 = $tmp205;
            $tmp203 = $tmp204;
            $returnValue11 = $tmp203;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp203));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp204));
            $tmp4 = 23;
            goto $l2;
            $l206:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp208, 36);
        panda$core$Bit $tmp209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, $tmp208);
        if ($tmp209.value) {
        {
            org$pandalanguage$pandac$Type** $tmp211 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
            type210 = *$tmp211;
            $tmp212 = type210;
            $returnValue11 = $tmp212;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp212));
            $tmp4 = 24;
            goto $l2;
            $l213:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp215, 37);
        panda$core$Bit $tmp216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, $tmp215);
        if ($tmp216.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp218 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$74_95->$data + 24));
            ifTrue217 = *$tmp218;
            org$pandalanguage$pandac$IRNode** $tmp220 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$74_95->$data + 32));
            ifFalse219 = *$tmp220;
            org$pandalanguage$pandac$Type* $tmp223 = (($fn222) ifTrue217->$class->vtable[2])(ifTrue217);
            $tmp221 = $tmp223;
            org$pandalanguage$pandac$Type* $tmp226 = (($fn225) ifFalse219->$class->vtable[2])(ifFalse219);
            $tmp224 = $tmp226;
            panda$core$Bit $tmp227 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp221, $tmp224);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp224));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp221));
            if ($tmp227.value) goto $l228; else goto $l229;
            $l229:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s230, (panda$core$Int64) { 126 });
            abort();
            $l228:;
            org$pandalanguage$pandac$Type* $tmp234 = (($fn233) ifTrue217->$class->vtable[2])(ifTrue217);
            $tmp232 = $tmp234;
            $tmp231 = $tmp232;
            $returnValue11 = $tmp231;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp231));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp232));
            $tmp4 = 25;
            goto $l2;
            $l235:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp237, 38);
        panda$core$Bit $tmp238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, $tmp237);
        if ($tmp238.value) {
        {
            org$pandalanguage$pandac$Type* $tmp241 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            $tmp240 = $tmp241;
            $tmp239 = $tmp240;
            $returnValue11 = $tmp239;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp239));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp240));
            $tmp4 = 26;
            goto $l2;
            $l242:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp244, 39);
        panda$core$Bit $tmp245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, $tmp244);
        if ($tmp245.value) {
        {
            org$pandalanguage$pandac$Type* $tmp248 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
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
        panda$core$Bit $tmp252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, $tmp251);
        if ($tmp252.value) {
        {
            org$pandalanguage$pandac$Type** $tmp254 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
            type253 = *$tmp254;
            $tmp255 = type253;
            $returnValue11 = $tmp255;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp255));
            $tmp4 = 28;
            goto $l2;
            $l256:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp258, 41);
        panda$core$Bit $tmp259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, $tmp258);
        if ($tmp259.value) {
        {
            org$pandalanguage$pandac$Type* $tmp262 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp261 = $tmp262;
            $tmp260 = $tmp261;
            $returnValue11 = $tmp260;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp260));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp261));
            $tmp4 = 29;
            goto $l2;
            $l263:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp265, 42);
        panda$core$Bit $tmp266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, $tmp265);
        if ($tmp266.value) {
        {
            org$pandalanguage$pandac$Type** $tmp268 = ((org$pandalanguage$pandac$Type**) ((char*) $match$74_95->$data + 16));
            type267 = *$tmp268;
            $tmp269 = type267;
            $returnValue11 = $tmp269;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp269));
            $tmp4 = 30;
            goto $l2;
            $l270:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp272, 43);
        panda$core$Bit $tmp273 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, $tmp272);
        if ($tmp273.value) {
        {
            org$pandalanguage$pandac$Type* $tmp276 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp275 = $tmp276;
            $tmp274 = $tmp275;
            $returnValue11 = $tmp274;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp274));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp275));
            $tmp4 = 31;
            goto $l2;
            $l277:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp279, 44);
        panda$core$Bit $tmp280 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, $tmp279);
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
        panda$core$Int64$init$builtin_int64(&$tmp286, 46);
        panda$core$Bit $tmp287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$74_95->$rawValue, $tmp286);
        if ($tmp287.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp289 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$74_95->$data + 16));
            variable288 = *$tmp289;
            $tmp290 = variable288->type;
            $returnValue11 = $tmp290;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp290));
            $tmp4 = 33;
            goto $l2;
            $l291:;
            return $returnValue11;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp293, false);
            if ($tmp293.value) goto $l294; else goto $l295;
            $l295:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s296, (panda$core$Int64) { 145 });
            abort();
            $l294:;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
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
        case 25: goto $l235;
        case 28: goto $l256;
        case 5: goto $l50;
        case 11: goto $l110;
        case 7: goto $l68;
        case 13: goto $l124;
        case 31: goto $l277;
        case 20: goto $l182;
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
        case -1: goto $l297;
        case 14: goto $l131;
        case 19: goto $l173;
        case 16: goto $l149;
        case 2: goto $l27;
    }
    $l297:;
    abort();
}
org$pandalanguage$pandac$Position org$pandalanguage$pandac$IRNode$position$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$150_9301 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp302;
    panda$core$Int64 $tmp303;
    org$pandalanguage$pandac$Position position305;
    org$pandalanguage$pandac$Position $returnValue307;
    panda$core$Int64 $tmp310;
    org$pandalanguage$pandac$Position position312;
    panda$core$Int64 $tmp316;
    org$pandalanguage$pandac$Position position318;
    panda$core$Int64 $tmp322;
    org$pandalanguage$pandac$Position position324;
    panda$core$Int64 $tmp328;
    org$pandalanguage$pandac$Position position330;
    panda$core$Int64 $tmp334;
    org$pandalanguage$pandac$Position position336;
    panda$core$Int64 $tmp340;
    org$pandalanguage$pandac$Position position342;
    panda$core$Int64 $tmp346;
    org$pandalanguage$pandac$Position position348;
    panda$core$Int64 $tmp352;
    org$pandalanguage$pandac$Position position354;
    panda$core$Int64 $tmp358;
    org$pandalanguage$pandac$Position position360;
    panda$core$Int64 $tmp364;
    org$pandalanguage$pandac$Position position366;
    panda$core$Int64 $tmp370;
    org$pandalanguage$pandac$Position position372;
    panda$core$Int64 $tmp376;
    org$pandalanguage$pandac$Position position378;
    panda$core$Int64 $tmp382;
    org$pandalanguage$pandac$IRNode* target384 = NULL;
    panda$core$Int64 $tmp390;
    org$pandalanguage$pandac$Position position392;
    panda$core$Int64 $tmp396;
    org$pandalanguage$pandac$IRNode* m398 = NULL;
    panda$core$Int64 $tmp404;
    org$pandalanguage$pandac$IRNode* expr406 = NULL;
    panda$core$Int64 $tmp412;
    org$pandalanguage$pandac$Position position414;
    panda$core$Int64 $tmp418;
    org$pandalanguage$pandac$Position position420;
    panda$core$Int64 $tmp424;
    org$pandalanguage$pandac$Position position426;
    panda$core$Int64 $tmp430;
    org$pandalanguage$pandac$Position position432;
    panda$core$Int64 $tmp436;
    org$pandalanguage$pandac$Position position438;
    panda$core$Int64 $tmp442;
    org$pandalanguage$pandac$Position position444;
    panda$core$Int64 $tmp448;
    org$pandalanguage$pandac$Position position450;
    panda$core$Int64 $tmp454;
    org$pandalanguage$pandac$Position position456;
    panda$core$Int64 $tmp460;
    org$pandalanguage$pandac$Position position462;
    panda$core$Int64 $tmp466;
    org$pandalanguage$pandac$Position position468;
    panda$core$Int64 $tmp472;
    org$pandalanguage$pandac$Position position474;
    panda$core$Int64 $tmp478;
    org$pandalanguage$pandac$Position position480;
    panda$core$Int64 $tmp484;
    org$pandalanguage$pandac$Position position486;
    panda$core$Int64 $tmp490;
    org$pandalanguage$pandac$Position position492;
    panda$core$Int64 $tmp496;
    org$pandalanguage$pandac$Position position498;
    panda$core$Int64 $tmp502;
    org$pandalanguage$pandac$IRNode* base504 = NULL;
    panda$core$Int64 $tmp510;
    org$pandalanguage$pandac$Position position512;
    panda$core$Int64 $tmp516;
    org$pandalanguage$pandac$Position position518;
    panda$core$Int64 $tmp522;
    org$pandalanguage$pandac$Position position524;
    panda$core$Int64 $tmp528;
    org$pandalanguage$pandac$Position position530;
    panda$core$Int64 $tmp534;
    org$pandalanguage$pandac$Position position536;
    panda$core$Int64 $tmp540;
    org$pandalanguage$pandac$Position position542;
    panda$core$Int64 $tmp546;
    org$pandalanguage$pandac$Position position548;
    panda$core$Int64 $tmp552;
    org$pandalanguage$pandac$Position position554;
    panda$core$Int64 $tmp558;
    org$pandalanguage$pandac$Position position560;
    panda$core$Int64 $tmp564;
    org$pandalanguage$pandac$Position position566;
    panda$core$Int64 $tmp570;
    org$pandalanguage$pandac$Position position572;
    panda$core$Int64 $tmp576;
    org$pandalanguage$pandac$Position position578;
    panda$core$Int64 $tmp582;
    org$pandalanguage$pandac$Position position584;
    panda$core$Int64 $tmp588;
    org$pandalanguage$pandac$Position position590;
    panda$core$Int64 $tmp594;
    org$pandalanguage$pandac$Position position596;
    panda$core$Bit $tmp600;
    int $tmp300;
    {
        $tmp302 = self;
        $match$150_9301 = $tmp302;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp302));
        panda$core$Int64$init$builtin_int64(&$tmp303, 0);
        panda$core$Bit $tmp304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp303);
        if ($tmp304.value) {
        {
            org$pandalanguage$pandac$Position* $tmp306 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position305 = *$tmp306;
            $returnValue307 = position305;
            $tmp300 = 0;
            goto $l298;
            $l308:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp310, 1);
        panda$core$Bit $tmp311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp310);
        if ($tmp311.value) {
        {
            org$pandalanguage$pandac$Position* $tmp313 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position312 = *$tmp313;
            $returnValue307 = position312;
            $tmp300 = 1;
            goto $l298;
            $l314:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp316, 2);
        panda$core$Bit $tmp317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp316);
        if ($tmp317.value) {
        {
            org$pandalanguage$pandac$Position* $tmp319 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position318 = *$tmp319;
            $returnValue307 = position318;
            $tmp300 = 2;
            goto $l298;
            $l320:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp322, 3);
        panda$core$Bit $tmp323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp322);
        if ($tmp323.value) {
        {
            org$pandalanguage$pandac$Position* $tmp325 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position324 = *$tmp325;
            $returnValue307 = position324;
            $tmp300 = 3;
            goto $l298;
            $l326:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp328, 4);
        panda$core$Bit $tmp329 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp328);
        if ($tmp329.value) {
        {
            org$pandalanguage$pandac$Position* $tmp331 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position330 = *$tmp331;
            $returnValue307 = position330;
            $tmp300 = 4;
            goto $l298;
            $l332:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp334, 6);
        panda$core$Bit $tmp335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp334);
        if ($tmp335.value) {
        {
            org$pandalanguage$pandac$Position* $tmp337 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position336 = *$tmp337;
            $returnValue307 = position336;
            $tmp300 = 5;
            goto $l298;
            $l338:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp340, 7);
        panda$core$Bit $tmp341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp340);
        if ($tmp341.value) {
        {
            org$pandalanguage$pandac$Position* $tmp343 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position342 = *$tmp343;
            $returnValue307 = position342;
            $tmp300 = 6;
            goto $l298;
            $l344:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp346, 8);
        panda$core$Bit $tmp347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp346);
        if ($tmp347.value) {
        {
            org$pandalanguage$pandac$Position* $tmp349 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position348 = *$tmp349;
            $returnValue307 = position348;
            $tmp300 = 7;
            goto $l298;
            $l350:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp352, 9);
        panda$core$Bit $tmp353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp352);
        if ($tmp353.value) {
        {
            org$pandalanguage$pandac$Position* $tmp355 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position354 = *$tmp355;
            $returnValue307 = position354;
            $tmp300 = 8;
            goto $l298;
            $l356:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp358, 10);
        panda$core$Bit $tmp359 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp358);
        if ($tmp359.value) {
        {
            org$pandalanguage$pandac$Position* $tmp361 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position360 = *$tmp361;
            $returnValue307 = position360;
            $tmp300 = 9;
            goto $l298;
            $l362:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp364, 11);
        panda$core$Bit $tmp365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp364);
        if ($tmp365.value) {
        {
            org$pandalanguage$pandac$Position* $tmp367 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position366 = *$tmp367;
            $returnValue307 = position366;
            $tmp300 = 10;
            goto $l298;
            $l368:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp370, 12);
        panda$core$Bit $tmp371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp370);
        if ($tmp371.value) {
        {
            org$pandalanguage$pandac$Position* $tmp373 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position372 = *$tmp373;
            $returnValue307 = position372;
            $tmp300 = 11;
            goto $l298;
            $l374:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp376, 13);
        panda$core$Bit $tmp377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp376);
        if ($tmp377.value) {
        {
            org$pandalanguage$pandac$Position* $tmp379 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position378 = *$tmp379;
            $returnValue307 = position378;
            $tmp300 = 12;
            goto $l298;
            $l380:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp382, 14);
        panda$core$Bit $tmp383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp382);
        if ($tmp383.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp385 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$150_9301->$data + 0));
            target384 = *$tmp385;
            org$pandalanguage$pandac$Position $tmp387 = (($fn386) target384->$class->vtable[3])(target384);
            $returnValue307 = $tmp387;
            $tmp300 = 13;
            goto $l298;
            $l388:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp390, 15);
        panda$core$Bit $tmp391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp390);
        if ($tmp391.value) {
        {
            org$pandalanguage$pandac$Position* $tmp393 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position392 = *$tmp393;
            $returnValue307 = position392;
            $tmp300 = 14;
            goto $l298;
            $l394:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp396, 16);
        panda$core$Bit $tmp397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp396);
        if ($tmp397.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp399 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$150_9301->$data + 0));
            m398 = *$tmp399;
            org$pandalanguage$pandac$Position $tmp401 = (($fn400) m398->$class->vtable[3])(m398);
            $returnValue307 = $tmp401;
            $tmp300 = 15;
            goto $l298;
            $l402:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp404, 17);
        panda$core$Bit $tmp405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp404);
        if ($tmp405.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp407 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$150_9301->$data + 0));
            expr406 = *$tmp407;
            org$pandalanguage$pandac$Position $tmp409 = (($fn408) expr406->$class->vtable[3])(expr406);
            $returnValue307 = $tmp409;
            $tmp300 = 16;
            goto $l298;
            $l410:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp412, 18);
        panda$core$Bit $tmp413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp412);
        if ($tmp413.value) {
        {
            org$pandalanguage$pandac$Position* $tmp415 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position414 = *$tmp415;
            $returnValue307 = position414;
            $tmp300 = 17;
            goto $l298;
            $l416:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp418, 19);
        panda$core$Bit $tmp419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp418);
        if ($tmp419.value) {
        {
            org$pandalanguage$pandac$Position* $tmp421 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position420 = *$tmp421;
            $returnValue307 = position420;
            $tmp300 = 18;
            goto $l298;
            $l422:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp424, 20);
        panda$core$Bit $tmp425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp424);
        if ($tmp425.value) {
        {
            org$pandalanguage$pandac$Position* $tmp427 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position426 = *$tmp427;
            $returnValue307 = position426;
            $tmp300 = 19;
            goto $l298;
            $l428:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp430, 21);
        panda$core$Bit $tmp431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp430);
        if ($tmp431.value) {
        {
            org$pandalanguage$pandac$Position* $tmp433 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position432 = *$tmp433;
            $returnValue307 = position432;
            $tmp300 = 20;
            goto $l298;
            $l434:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp436, 22);
        panda$core$Bit $tmp437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp436);
        if ($tmp437.value) {
        {
            org$pandalanguage$pandac$Position* $tmp439 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position438 = *$tmp439;
            $returnValue307 = position438;
            $tmp300 = 21;
            goto $l298;
            $l440:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp442, 23);
        panda$core$Bit $tmp443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp442);
        if ($tmp443.value) {
        {
            org$pandalanguage$pandac$Position* $tmp445 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position444 = *$tmp445;
            $returnValue307 = position444;
            $tmp300 = 22;
            goto $l298;
            $l446:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp448, 24);
        panda$core$Bit $tmp449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp448);
        if ($tmp449.value) {
        {
            org$pandalanguage$pandac$Position* $tmp451 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position450 = *$tmp451;
            $returnValue307 = position450;
            $tmp300 = 23;
            goto $l298;
            $l452:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp454, 25);
        panda$core$Bit $tmp455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp454);
        if ($tmp455.value) {
        {
            org$pandalanguage$pandac$Position* $tmp457 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position456 = *$tmp457;
            $returnValue307 = position456;
            $tmp300 = 24;
            goto $l298;
            $l458:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp460, 26);
        panda$core$Bit $tmp461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp460);
        if ($tmp461.value) {
        {
            org$pandalanguage$pandac$Position* $tmp463 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position462 = *$tmp463;
            $returnValue307 = position462;
            $tmp300 = 25;
            goto $l298;
            $l464:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp466, 27);
        panda$core$Bit $tmp467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp466);
        if ($tmp467.value) {
        {
            org$pandalanguage$pandac$Position* $tmp469 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position468 = *$tmp469;
            $returnValue307 = position468;
            $tmp300 = 26;
            goto $l298;
            $l470:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp472, 28);
        panda$core$Bit $tmp473 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp472);
        if ($tmp473.value) {
        {
            org$pandalanguage$pandac$Position* $tmp475 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position474 = *$tmp475;
            $returnValue307 = position474;
            $tmp300 = 27;
            goto $l298;
            $l476:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp478, 29);
        panda$core$Bit $tmp479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp478);
        if ($tmp479.value) {
        {
            org$pandalanguage$pandac$Position* $tmp481 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position480 = *$tmp481;
            $returnValue307 = position480;
            $tmp300 = 28;
            goto $l298;
            $l482:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp484, 30);
        panda$core$Bit $tmp485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp484);
        if ($tmp485.value) {
        {
            org$pandalanguage$pandac$Position* $tmp487 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position486 = *$tmp487;
            $returnValue307 = position486;
            $tmp300 = 29;
            goto $l298;
            $l488:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp490, 31);
        panda$core$Bit $tmp491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp490);
        if ($tmp491.value) {
        {
            org$pandalanguage$pandac$Position* $tmp493 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position492 = *$tmp493;
            $returnValue307 = position492;
            $tmp300 = 30;
            goto $l298;
            $l494:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp496, 32);
        panda$core$Bit $tmp497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp496);
        if ($tmp497.value) {
        {
            org$pandalanguage$pandac$Position* $tmp499 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position498 = *$tmp499;
            $returnValue307 = position498;
            $tmp300 = 31;
            goto $l298;
            $l500:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp502, 33);
        panda$core$Bit $tmp503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp502);
        if ($tmp503.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp505 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$150_9301->$data + 0));
            base504 = *$tmp505;
            org$pandalanguage$pandac$Position $tmp507 = (($fn506) base504->$class->vtable[3])(base504);
            $returnValue307 = $tmp507;
            $tmp300 = 32;
            goto $l298;
            $l508:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp510, 34);
        panda$core$Bit $tmp511 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp510);
        if ($tmp511.value) {
        {
            org$pandalanguage$pandac$Position* $tmp513 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position512 = *$tmp513;
            $returnValue307 = position512;
            $tmp300 = 33;
            goto $l298;
            $l514:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp516, 35);
        panda$core$Bit $tmp517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp516);
        if ($tmp517.value) {
        {
            org$pandalanguage$pandac$Position* $tmp519 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position518 = *$tmp519;
            $returnValue307 = position518;
            $tmp300 = 34;
            goto $l298;
            $l520:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp522, 36);
        panda$core$Bit $tmp523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp522);
        if ($tmp523.value) {
        {
            org$pandalanguage$pandac$Position* $tmp525 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position524 = *$tmp525;
            $returnValue307 = position524;
            $tmp300 = 35;
            goto $l298;
            $l526:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp528, 37);
        panda$core$Bit $tmp529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp528);
        if ($tmp529.value) {
        {
            org$pandalanguage$pandac$Position* $tmp531 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position530 = *$tmp531;
            $returnValue307 = position530;
            $tmp300 = 36;
            goto $l298;
            $l532:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp534, 38);
        panda$core$Bit $tmp535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp534);
        if ($tmp535.value) {
        {
            org$pandalanguage$pandac$Position* $tmp537 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position536 = *$tmp537;
            $returnValue307 = position536;
            $tmp300 = 37;
            goto $l298;
            $l538:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp540, 39);
        panda$core$Bit $tmp541 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp540);
        if ($tmp541.value) {
        {
            org$pandalanguage$pandac$Position* $tmp543 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position542 = *$tmp543;
            $returnValue307 = position542;
            $tmp300 = 38;
            goto $l298;
            $l544:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp546, 40);
        panda$core$Bit $tmp547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp546);
        if ($tmp547.value) {
        {
            org$pandalanguage$pandac$Position* $tmp549 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position548 = *$tmp549;
            $returnValue307 = position548;
            $tmp300 = 39;
            goto $l298;
            $l550:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp552, 41);
        panda$core$Bit $tmp553 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp552);
        if ($tmp553.value) {
        {
            org$pandalanguage$pandac$Position* $tmp555 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position554 = *$tmp555;
            $returnValue307 = position554;
            $tmp300 = 40;
            goto $l298;
            $l556:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp558, 42);
        panda$core$Bit $tmp559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp558);
        if ($tmp559.value) {
        {
            org$pandalanguage$pandac$Position* $tmp561 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position560 = *$tmp561;
            $returnValue307 = position560;
            $tmp300 = 41;
            goto $l298;
            $l562:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp564, 43);
        panda$core$Bit $tmp565 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp564);
        if ($tmp565.value) {
        {
            org$pandalanguage$pandac$Position* $tmp567 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position566 = *$tmp567;
            $returnValue307 = position566;
            $tmp300 = 42;
            goto $l298;
            $l568:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp570, 44);
        panda$core$Bit $tmp571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp570);
        if ($tmp571.value) {
        {
            org$pandalanguage$pandac$Position* $tmp573 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position572 = *$tmp573;
            $returnValue307 = position572;
            $tmp300 = 43;
            goto $l298;
            $l574:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp576, 45);
        panda$core$Bit $tmp577 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp576);
        if ($tmp577.value) {
        {
            org$pandalanguage$pandac$Position* $tmp579 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position578 = *$tmp579;
            $returnValue307 = position578;
            $tmp300 = 44;
            goto $l298;
            $l580:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp582, 46);
        panda$core$Bit $tmp583 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp582);
        if ($tmp583.value) {
        {
            org$pandalanguage$pandac$Position* $tmp585 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position584 = *$tmp585;
            $returnValue307 = position584;
            $tmp300 = 45;
            goto $l298;
            $l586:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp588, 47);
        panda$core$Bit $tmp589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp588);
        if ($tmp589.value) {
        {
            org$pandalanguage$pandac$Position* $tmp591 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position590 = *$tmp591;
            $returnValue307 = position590;
            $tmp300 = 46;
            goto $l298;
            $l592:;
            return $returnValue307;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp594, 48);
        panda$core$Bit $tmp595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$150_9301->$rawValue, $tmp594);
        if ($tmp595.value) {
        {
            org$pandalanguage$pandac$Position* $tmp597 = ((org$pandalanguage$pandac$Position*) ((char*) $match$150_9301->$data + 0));
            position596 = *$tmp597;
            $returnValue307 = position596;
            $tmp300 = 47;
            goto $l298;
            $l598:;
            return $returnValue307;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp600, false);
            if ($tmp600.value) goto $l601; else goto $l602;
            $l602:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s603, (panda$core$Int64) { 248 });
            abort();
            $l601:;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
    $tmp300 = -1;
    goto $l298;
    $l298:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp302));
    switch ($tmp300) {
        case 18: goto $l422;
        case 41: goto $l562;
        case 39: goto $l550;
        case 46: goto $l592;
        case 34: goto $l520;
        case 12: goto $l380;
        case 19: goto $l428;
        case 14: goto $l394;
        case 11: goto $l374;
        case 30: goto $l494;
        case 10: goto $l368;
        case 1: goto $l314;
        case 29: goto $l488;
        case 17: goto $l416;
        case 0: goto $l308;
        case 45: goto $l586;
        case 20: goto $l434;
        case 4: goto $l332;
        case 37: goto $l538;
        case 3: goto $l326;
        case 38: goto $l544;
        case 27: goto $l476;
        case 47: goto $l598;
        case 21: goto $l440;
        case 6: goto $l344;
        case 28: goto $l482;
        case 5: goto $l338;
        case 16: goto $l410;
        case 23: goto $l452;
        case 7: goto $l350;
        case 36: goto $l532;
        case 22: goto $l446;
        case 24: goto $l458;
        case 25: goto $l464;
        case 35: goto $l526;
        case -1: goto $l604;
        case 43: goto $l574;
        case 33: goto $l514;
        case 8: goto $l356;
        case 9: goto $l362;
        case 15: goto $l402;
        case 32: goto $l508;
        case 13: goto $l388;
        case 42: goto $l568;
        case 2: goto $l320;
        case 26: goto $l470;
        case 31: goto $l500;
        case 44: goto $l580;
        case 40: goto $l556;
    }
    $l604:;
    abort();
}
panda$core$Bit org$pandalanguage$pandac$IRNode$hasSideEffects$R$panda$core$Bit(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$253_9608 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp609;
    panda$core$Int64 $tmp610;
    org$pandalanguage$pandac$IRNode* test612 = NULL;
    org$pandalanguage$pandac$IRNode* msg614 = NULL;
    panda$core$Bit $returnValue616;
    panda$core$Int64 $tmp626;
    panda$core$Bit $tmp628;
    panda$core$Int64 $tmp631;
    org$pandalanguage$pandac$IRNode* left633 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op635;
    org$pandalanguage$pandac$IRNode* right637 = NULL;
    panda$core$Int64 $tmp652;
    panda$core$Bit bit654;
    panda$core$Bit $tmp656;
    panda$core$Int64 $tmp659;
    panda$collections$ImmutableArray* statements661 = NULL;
    panda$collections$Iterator* Iter$263$17666 = NULL;
    panda$collections$Iterator* $tmp667;
    panda$collections$Iterator* $tmp668;
    org$pandalanguage$pandac$IRNode* s684 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp685;
    panda$core$Object* $tmp686;
    panda$core$Bit $tmp693;
    panda$core$Bit $tmp700;
    panda$core$Int64 $tmp703;
    panda$core$String* label705 = NULL;
    panda$core$Bit $tmp707;
    panda$core$Int64 $tmp710;
    org$pandalanguage$pandac$MethodRef* m712 = NULL;
    panda$collections$ImmutableArray* args714 = NULL;
    panda$core$Int64 $tmp716;
    panda$core$Bit $tmp718;
    panda$collections$Iterator* Iter$275$17724 = NULL;
    panda$collections$Iterator* $tmp725;
    panda$collections$Iterator* $tmp726;
    org$pandalanguage$pandac$IRNode* arg742 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp743;
    panda$core$Object* $tmp744;
    panda$core$Bit $tmp751;
    panda$core$Bit $tmp758;
    panda$core$Int64 $tmp761;
    org$pandalanguage$pandac$IRNode* value763 = NULL;
    org$pandalanguage$pandac$Type* type765 = NULL;
    panda$core$Bit $tmp767;
    panda$core$Int64 $tmp770;
    org$pandalanguage$pandac$ChoiceEntry* ce772 = NULL;
    panda$core$Bit $tmp774;
    panda$core$Int64 $tmp777;
    org$pandalanguage$pandac$IRNode* base779 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce781 = NULL;
    panda$core$Int64 field783;
    panda$core$Bit $tmp785;
    panda$core$Int64 $tmp788;
    org$pandalanguage$pandac$Type* type790 = NULL;
    org$pandalanguage$pandac$IRNode* call792 = NULL;
    panda$core$Int64 $tmp798;
    org$pandalanguage$pandac$Type* Type800 = NULL;
    panda$core$Bit $tmp802;
    panda$core$Int64 $tmp805;
    panda$core$String* label807 = NULL;
    panda$core$Bit $tmp809;
    panda$core$Int64 $tmp812;
    org$pandalanguage$pandac$IRNode* target814 = NULL;
    org$pandalanguage$pandac$IRNode* value816 = NULL;
    panda$core$Int64 $tmp825;
    panda$core$String* label827 = NULL;
    panda$collections$ImmutableArray* statements829 = NULL;
    org$pandalanguage$pandac$IRNode* test831 = NULL;
    panda$core$Bit $tmp835;
    panda$collections$Iterator* Iter$299$17841 = NULL;
    panda$collections$Iterator* $tmp842;
    panda$collections$Iterator* $tmp843;
    org$pandalanguage$pandac$IRNode* s859 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp860;
    panda$core$Object* $tmp861;
    panda$core$Bit $tmp868;
    panda$core$Bit $tmp875;
    panda$core$Int64 $tmp878;
    panda$core$Bit $tmp880;
    panda$core$Int64 $tmp883;
    org$pandalanguage$pandac$IRNode* base885 = NULL;
    org$pandalanguage$pandac$FieldDecl* field887 = NULL;
    panda$core$Bit $tmp889;
    panda$core$Int64 $tmp892;
    org$pandalanguage$pandac$IRNode* test894 = NULL;
    panda$collections$ImmutableArray* ifTrue896 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse898 = NULL;
    panda$core$Bit $tmp902;
    panda$collections$Iterator* Iter$313$17908 = NULL;
    panda$collections$Iterator* $tmp909;
    panda$collections$Iterator* $tmp910;
    org$pandalanguage$pandac$IRNode* s926 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp927;
    panda$core$Object* $tmp928;
    panda$core$Bit $tmp935;
    panda$core$Int64 $tmp946;
    panda$core$UInt64 value948;
    panda$core$Bit $tmp950;
    panda$core$Int64 $tmp953;
    org$pandalanguage$pandac$IRNode* value955 = NULL;
    panda$core$Int64 $tmp961;
    org$pandalanguage$pandac$IRNode* value963 = NULL;
    panda$core$Int64 $tmp969;
    panda$core$String* label971 = NULL;
    panda$collections$ImmutableArray* statements973 = NULL;
    panda$collections$Iterator* Iter$326$17978 = NULL;
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
    panda$collections$Iterator* Iter$336$171031 = NULL;
    panda$collections$Iterator* $tmp1032;
    panda$collections$Iterator* $tmp1033;
    org$pandalanguage$pandac$IRNode* w1049 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1050;
    panda$core$Object* $tmp1051;
    panda$core$Bit $tmp1058;
    panda$collections$Iterator* Iter$341$171068 = NULL;
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
    panda$core$UInt64 value1112;
    panda$core$Bit $tmp1114;
    panda$core$Int64 $tmp1117;
    panda$core$Bit $tmp1119;
    panda$core$Int64 $tmp1122;
    org$pandalanguage$pandac$parser$Token$Kind op1124;
    org$pandalanguage$pandac$IRNode* base1126 = NULL;
    panda$core$Int64 $tmp1132;
    panda$core$String* label1134 = NULL;
    org$pandalanguage$pandac$IRNode* target1136 = NULL;
    org$pandalanguage$pandac$IRNode* list1138 = NULL;
    panda$collections$ImmutableArray* statements1140 = NULL;
    panda$core$Bit $tmp1144;
    panda$collections$Iterator* Iter$360$171150 = NULL;
    panda$collections$Iterator* $tmp1151;
    panda$collections$Iterator* $tmp1152;
    org$pandalanguage$pandac$IRNode* s1168 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1169;
    panda$core$Object* $tmp1170;
    panda$core$Bit $tmp1177;
    panda$core$Bit $tmp1184;
    panda$core$Int64 $tmp1187;
    panda$core$Real64 value1189;
    panda$core$Bit $tmp1191;
    panda$core$Int64 $tmp1194;
    org$pandalanguage$pandac$IRNode* value1196 = NULL;
    panda$core$Int64 $tmp1202;
    panda$core$Int64 id1204;
    panda$core$Bit $tmp1206;
    panda$core$Int64 $tmp1209;
    org$pandalanguage$pandac$IRNode* base1211 = NULL;
    panda$core$Int64 id1213;
    panda$core$Int64 $tmp1219;
    panda$core$Bit $tmp1221;
    panda$core$Int64 $tmp1224;
    panda$core$String* str1226 = NULL;
    panda$core$Bit $tmp1228;
    panda$core$Int64 $tmp1231;
    panda$core$Bit $tmp1233;
    panda$core$Int64 $tmp1236;
    org$pandalanguage$pandac$IRNode* test1238 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue1240 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse1242 = NULL;
    panda$core$Int64 $tmp1258;
    org$pandalanguage$pandac$Type* type1260 = NULL;
    panda$core$Bit $tmp1262;
    panda$core$Int64 $tmp1265;
    panda$core$String* name1267 = NULL;
    panda$core$Bit $tmp1269;
    panda$core$Int64 $tmp1273;
    org$pandalanguage$pandac$IRNode* base1275 = NULL;
    panda$collections$ImmutableArray* args1277 = NULL;
    panda$core$Bit $tmp1279;
    panda$core$Int64 $tmp1283;
    panda$core$Bit $tmp1285;
    panda$core$Int64 $tmp1289;
    org$pandalanguage$pandac$IRNode* target1291 = NULL;
    panda$collections$ImmutableArray* methods1293 = NULL;
    panda$collections$ImmutableArray* args1295 = NULL;
    panda$core$Bit $tmp1297;
    panda$core$Int64 $tmp1301;
    org$pandalanguage$pandac$IRNode* target1303 = NULL;
    panda$collections$ImmutableArray* methods1305 = NULL;
    panda$core$Bit $tmp1307;
    panda$core$Int64 $tmp1311;
    org$pandalanguage$pandac$IRNode* start1313 = NULL;
    org$pandalanguage$pandac$IRNode* end1315 = NULL;
    panda$core$Bit inclusive1317;
    org$pandalanguage$pandac$IRNode* step1319 = NULL;
    panda$core$Bit $tmp1321;
    panda$core$Int64 $tmp1325;
    org$pandalanguage$pandac$Variable$Kind kind1327;
    panda$collections$ImmutableArray* decls1329 = NULL;
    panda$collections$Iterator* Iter$397$171334 = NULL;
    panda$collections$Iterator* $tmp1335;
    panda$collections$Iterator* $tmp1336;
    org$pandalanguage$pandac$IRNode* d1352 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1353;
    panda$core$Object* $tmp1354;
    panda$core$Bit $tmp1361;
    panda$core$Bit $tmp1368;
    panda$core$Int64 $tmp1371;
    org$pandalanguage$pandac$Variable* variable1373 = NULL;
    panda$core$Bit $tmp1375;
    panda$core$Int64 $tmp1378;
    panda$collections$ImmutableArray* tests1380 = NULL;
    panda$collections$ImmutableArray* statements1382 = NULL;
    panda$collections$Iterator* Iter$406$171387 = NULL;
    panda$collections$Iterator* $tmp1388;
    panda$collections$Iterator* $tmp1389;
    org$pandalanguage$pandac$IRNode* t1405 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1406;
    panda$core$Object* $tmp1407;
    panda$core$Bit $tmp1414;
    panda$collections$Iterator* Iter$411$171424 = NULL;
    panda$collections$Iterator* $tmp1425;
    panda$collections$Iterator* $tmp1426;
    org$pandalanguage$pandac$IRNode* s1442 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1443;
    panda$core$Object* $tmp1444;
    panda$core$Bit $tmp1451;
    panda$core$Bit $tmp1458;
    panda$core$Int64 $tmp1461;
    panda$core$String* label1463 = NULL;
    org$pandalanguage$pandac$IRNode* test1465 = NULL;
    panda$collections$ImmutableArray* statements1467 = NULL;
    panda$core$Bit $tmp1471;
    panda$collections$Iterator* Iter$421$171477 = NULL;
    panda$collections$Iterator* $tmp1478;
    panda$collections$Iterator* $tmp1479;
    org$pandalanguage$pandac$IRNode* s1495 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1496;
    panda$core$Object* $tmp1497;
    panda$core$Bit $tmp1504;
    panda$core$Bit $tmp1511;
    panda$core$Bit $tmp1514;
    int $tmp607;
    {
        $tmp609 = self;
        $match$253_9608 = $tmp609;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp609));
        panda$core$Int64$init$builtin_int64(&$tmp610, 0);
        panda$core$Bit $tmp611 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp610);
        if ($tmp611.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp613 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9608->$data + 16));
            test612 = *$tmp613;
            org$pandalanguage$pandac$IRNode** $tmp615 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9608->$data + 24));
            msg614 = *$tmp615;
            panda$core$Bit $tmp619 = (($fn618) test612->$class->vtable[4])(test612);
            bool $tmp617 = $tmp619.value;
            if ($tmp617) goto $l620;
            panda$core$Bit $tmp622 = (($fn621) msg614->$class->vtable[4])(msg614);
            $tmp617 = $tmp622.value;
            $l620:;
            panda$core$Bit $tmp623 = { $tmp617 };
            $returnValue616 = $tmp623;
            $tmp607 = 0;
            goto $l605;
            $l624:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp626, 1);
        panda$core$Bit $tmp627 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp626);
        if ($tmp627.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp628, false);
            $returnValue616 = $tmp628;
            $tmp607 = 1;
            goto $l605;
            $l629:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp631, 2);
        panda$core$Bit $tmp632 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp631);
        if ($tmp632.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp634 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9608->$data + 24));
            left633 = *$tmp634;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp636 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$253_9608->$data + 32));
            op635 = *$tmp636;
            org$pandalanguage$pandac$IRNode** $tmp638 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9608->$data + 40));
            right637 = *$tmp638;
            panda$core$Bit $tmp641 = org$pandalanguage$pandac$Compiler$isAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$Bit(op635);
            bool $tmp640 = $tmp641.value;
            if ($tmp640) goto $l642;
            panda$core$Bit $tmp644 = (($fn643) left633->$class->vtable[4])(left633);
            $tmp640 = $tmp644.value;
            $l642:;
            panda$core$Bit $tmp645 = { $tmp640 };
            bool $tmp639 = $tmp645.value;
            if ($tmp639) goto $l646;
            panda$core$Bit $tmp648 = (($fn647) right637->$class->vtable[4])(right637);
            $tmp639 = $tmp648.value;
            $l646:;
            panda$core$Bit $tmp649 = { $tmp639 };
            $returnValue616 = $tmp649;
            $tmp607 = 2;
            goto $l605;
            $l650:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp652, 3);
        panda$core$Bit $tmp653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp652);
        if ($tmp653.value) {
        {
            panda$core$Bit* $tmp655 = ((panda$core$Bit*) ((char*) $match$253_9608->$data + 24));
            bit654 = *$tmp655;
            panda$core$Bit$init$builtin_bit(&$tmp656, false);
            $returnValue616 = $tmp656;
            $tmp607 = 3;
            goto $l605;
            $l657:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp659, 4);
        panda$core$Bit $tmp660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp659);
        if ($tmp660.value) {
        {
            panda$collections$ImmutableArray** $tmp662 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9608->$data + 16));
            statements661 = *$tmp662;
            {
                int $tmp665;
                {
                    ITable* $tmp669 = ((panda$collections$Iterable*) statements661)->$class->itable;
                    while ($tmp669->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp669 = $tmp669->next;
                    }
                    $fn671 $tmp670 = $tmp669->methods[0];
                    panda$collections$Iterator* $tmp672 = $tmp670(((panda$collections$Iterable*) statements661));
                    $tmp668 = $tmp672;
                    $tmp667 = $tmp668;
                    Iter$263$17666 = $tmp667;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp667));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp668));
                    $l673:;
                    ITable* $tmp676 = Iter$263$17666->$class->itable;
                    while ($tmp676->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp676 = $tmp676->next;
                    }
                    $fn678 $tmp677 = $tmp676->methods[0];
                    panda$core$Bit $tmp679 = $tmp677(Iter$263$17666);
                    panda$core$Bit $tmp680 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp679);
                    bool $tmp675 = $tmp680.value;
                    if (!$tmp675) goto $l674;
                    {
                        int $tmp683;
                        {
                            ITable* $tmp687 = Iter$263$17666->$class->itable;
                            while ($tmp687->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp687 = $tmp687->next;
                            }
                            $fn689 $tmp688 = $tmp687->methods[1];
                            panda$core$Object* $tmp690 = $tmp688(Iter$263$17666);
                            $tmp686 = $tmp690;
                            $tmp685 = ((org$pandalanguage$pandac$IRNode*) $tmp686);
                            s684 = $tmp685;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp685));
                            panda$core$Panda$unref$panda$core$Object($tmp686);
                            panda$core$Bit $tmp692 = (($fn691) s684->$class->vtable[4])(s684);
                            if ($tmp692.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp693, true);
                                $returnValue616 = $tmp693;
                                $tmp683 = 0;
                                goto $l681;
                                $l694:;
                                $tmp665 = 0;
                                goto $l663;
                                $l695:;
                                $tmp607 = 4;
                                goto $l605;
                                $l696:;
                                return $returnValue616;
                            }
                            }
                        }
                        $tmp683 = -1;
                        goto $l681;
                        $l681:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s684));
                        s684 = NULL;
                        switch ($tmp683) {
                            case -1: goto $l698;
                            case 0: goto $l694;
                        }
                        $l698:;
                    }
                    goto $l673;
                    $l674:;
                }
                $tmp665 = -1;
                goto $l663;
                $l663:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$263$17666));
                Iter$263$17666 = NULL;
                switch ($tmp665) {
                    case 0: goto $l695;
                    case -1: goto $l699;
                }
                $l699:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp700, false);
            $returnValue616 = $tmp700;
            $tmp607 = 5;
            goto $l605;
            $l701:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp703, 6);
        panda$core$Bit $tmp704 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp703);
        if ($tmp704.value) {
        {
            panda$core$String** $tmp706 = ((panda$core$String**) ((char*) $match$253_9608->$data + 16));
            label705 = *$tmp706;
            panda$core$Bit$init$builtin_bit(&$tmp707, false);
            $returnValue616 = $tmp707;
            $tmp607 = 6;
            goto $l605;
            $l708:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp710, 7);
        panda$core$Bit $tmp711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp710);
        if ($tmp711.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp713 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$253_9608->$data + 24));
            m712 = *$tmp713;
            panda$collections$ImmutableArray** $tmp715 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9608->$data + 32));
            args714 = *$tmp715;
            panda$core$Int64$init$builtin_int64(&$tmp716, 0);
            panda$core$Bit $tmp717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m712->value->methodKind.$rawValue, $tmp716);
            if ($tmp717.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp718, true);
                $returnValue616 = $tmp718;
                $tmp607 = 7;
                goto $l605;
                $l719:;
                return $returnValue616;
            }
            }
            {
                int $tmp723;
                {
                    ITable* $tmp727 = ((panda$collections$Iterable*) args714)->$class->itable;
                    while ($tmp727->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp727 = $tmp727->next;
                    }
                    $fn729 $tmp728 = $tmp727->methods[0];
                    panda$collections$Iterator* $tmp730 = $tmp728(((panda$collections$Iterable*) args714));
                    $tmp726 = $tmp730;
                    $tmp725 = $tmp726;
                    Iter$275$17724 = $tmp725;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp725));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp726));
                    $l731:;
                    ITable* $tmp734 = Iter$275$17724->$class->itable;
                    while ($tmp734->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp734 = $tmp734->next;
                    }
                    $fn736 $tmp735 = $tmp734->methods[0];
                    panda$core$Bit $tmp737 = $tmp735(Iter$275$17724);
                    panda$core$Bit $tmp738 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp737);
                    bool $tmp733 = $tmp738.value;
                    if (!$tmp733) goto $l732;
                    {
                        int $tmp741;
                        {
                            ITable* $tmp745 = Iter$275$17724->$class->itable;
                            while ($tmp745->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp745 = $tmp745->next;
                            }
                            $fn747 $tmp746 = $tmp745->methods[1];
                            panda$core$Object* $tmp748 = $tmp746(Iter$275$17724);
                            $tmp744 = $tmp748;
                            $tmp743 = ((org$pandalanguage$pandac$IRNode*) $tmp744);
                            arg742 = $tmp743;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp743));
                            panda$core$Panda$unref$panda$core$Object($tmp744);
                            panda$core$Bit $tmp750 = (($fn749) arg742->$class->vtable[4])(arg742);
                            if ($tmp750.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp751, true);
                                $returnValue616 = $tmp751;
                                $tmp741 = 0;
                                goto $l739;
                                $l752:;
                                $tmp723 = 0;
                                goto $l721;
                                $l753:;
                                $tmp607 = 8;
                                goto $l605;
                                $l754:;
                                return $returnValue616;
                            }
                            }
                        }
                        $tmp741 = -1;
                        goto $l739;
                        $l739:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg742));
                        arg742 = NULL;
                        switch ($tmp741) {
                            case -1: goto $l756;
                            case 0: goto $l752;
                        }
                        $l756:;
                    }
                    goto $l731;
                    $l732:;
                }
                $tmp723 = -1;
                goto $l721;
                $l721:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$275$17724));
                Iter$275$17724 = NULL;
                switch ($tmp723) {
                    case -1: goto $l757;
                    case 0: goto $l753;
                }
                $l757:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp758, false);
            $returnValue616 = $tmp758;
            $tmp607 = 9;
            goto $l605;
            $l759:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp761, 8);
        panda$core$Bit $tmp762 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp761);
        if ($tmp762.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp764 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9608->$data + 16));
            value763 = *$tmp764;
            org$pandalanguage$pandac$Type** $tmp766 = ((org$pandalanguage$pandac$Type**) ((char*) $match$253_9608->$data + 24));
            type765 = *$tmp766;
            panda$core$Bit$init$builtin_bit(&$tmp767, false);
            $returnValue616 = $tmp767;
            $tmp607 = 10;
            goto $l605;
            $l768:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp770, 9);
        panda$core$Bit $tmp771 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp770);
        if ($tmp771.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp773 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$253_9608->$data + 16));
            ce772 = *$tmp773;
            panda$core$Bit$init$builtin_bit(&$tmp774, false);
            $returnValue616 = $tmp774;
            $tmp607 = 11;
            goto $l605;
            $l775:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp777, 10);
        panda$core$Bit $tmp778 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp777);
        if ($tmp778.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp780 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9608->$data + 16));
            base779 = *$tmp780;
            org$pandalanguage$pandac$ChoiceEntry** $tmp782 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$253_9608->$data + 24));
            ce781 = *$tmp782;
            panda$core$Int64* $tmp784 = ((panda$core$Int64*) ((char*) $match$253_9608->$data + 32));
            field783 = *$tmp784;
            panda$core$Bit$init$builtin_bit(&$tmp785, false);
            $returnValue616 = $tmp785;
            $tmp607 = 12;
            goto $l605;
            $l786:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp788, 11);
        panda$core$Bit $tmp789 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp788);
        if ($tmp789.value) {
        {
            org$pandalanguage$pandac$Type** $tmp791 = ((org$pandalanguage$pandac$Type**) ((char*) $match$253_9608->$data + 16));
            type790 = *$tmp791;
            org$pandalanguage$pandac$IRNode** $tmp793 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9608->$data + 24));
            call792 = *$tmp793;
            panda$core$Bit $tmp795 = (($fn794) call792->$class->vtable[4])(call792);
            $returnValue616 = $tmp795;
            $tmp607 = 13;
            goto $l605;
            $l796:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp798, 12);
        panda$core$Bit $tmp799 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp798);
        if ($tmp799.value) {
        {
            org$pandalanguage$pandac$Type** $tmp801 = ((org$pandalanguage$pandac$Type**) ((char*) $match$253_9608->$data + 16));
            Type800 = *$tmp801;
            panda$core$Bit$init$builtin_bit(&$tmp802, false);
            $returnValue616 = $tmp802;
            $tmp607 = 14;
            goto $l605;
            $l803:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp805, 13);
        panda$core$Bit $tmp806 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp805);
        if ($tmp806.value) {
        {
            panda$core$String** $tmp808 = ((panda$core$String**) ((char*) $match$253_9608->$data + 16));
            label807 = *$tmp808;
            panda$core$Bit$init$builtin_bit(&$tmp809, false);
            $returnValue616 = $tmp809;
            $tmp607 = 15;
            goto $l605;
            $l810:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp812, 14);
        panda$core$Bit $tmp813 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp812);
        if ($tmp813.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp815 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9608->$data + 0));
            target814 = *$tmp815;
            org$pandalanguage$pandac$IRNode** $tmp817 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9608->$data + 8));
            value816 = *$tmp817;
            bool $tmp818 = ((panda$core$Bit) { value816 != NULL }).value;
            if (!$tmp818) goto $l819;
            panda$core$Bit $tmp821 = (($fn820) value816->$class->vtable[4])(value816);
            $tmp818 = $tmp821.value;
            $l819:;
            panda$core$Bit $tmp822 = { $tmp818 };
            $returnValue616 = $tmp822;
            $tmp607 = 16;
            goto $l605;
            $l823:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp825, 15);
        panda$core$Bit $tmp826 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp825);
        if ($tmp826.value) {
        {
            panda$core$String** $tmp828 = ((panda$core$String**) ((char*) $match$253_9608->$data + 16));
            label827 = *$tmp828;
            panda$collections$ImmutableArray** $tmp830 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9608->$data + 24));
            statements829 = *$tmp830;
            org$pandalanguage$pandac$IRNode** $tmp832 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9608->$data + 32));
            test831 = *$tmp832;
            panda$core$Bit $tmp834 = (($fn833) test831->$class->vtable[4])(test831);
            if ($tmp834.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp835, true);
                $returnValue616 = $tmp835;
                $tmp607 = 17;
                goto $l605;
                $l836:;
                return $returnValue616;
            }
            }
            {
                int $tmp840;
                {
                    ITable* $tmp844 = ((panda$collections$Iterable*) statements829)->$class->itable;
                    while ($tmp844->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp844 = $tmp844->next;
                    }
                    $fn846 $tmp845 = $tmp844->methods[0];
                    panda$collections$Iterator* $tmp847 = $tmp845(((panda$collections$Iterable*) statements829));
                    $tmp843 = $tmp847;
                    $tmp842 = $tmp843;
                    Iter$299$17841 = $tmp842;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp842));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp843));
                    $l848:;
                    ITable* $tmp851 = Iter$299$17841->$class->itable;
                    while ($tmp851->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp851 = $tmp851->next;
                    }
                    $fn853 $tmp852 = $tmp851->methods[0];
                    panda$core$Bit $tmp854 = $tmp852(Iter$299$17841);
                    panda$core$Bit $tmp855 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp854);
                    bool $tmp850 = $tmp855.value;
                    if (!$tmp850) goto $l849;
                    {
                        int $tmp858;
                        {
                            ITable* $tmp862 = Iter$299$17841->$class->itable;
                            while ($tmp862->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp862 = $tmp862->next;
                            }
                            $fn864 $tmp863 = $tmp862->methods[1];
                            panda$core$Object* $tmp865 = $tmp863(Iter$299$17841);
                            $tmp861 = $tmp865;
                            $tmp860 = ((org$pandalanguage$pandac$IRNode*) $tmp861);
                            s859 = $tmp860;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp860));
                            panda$core$Panda$unref$panda$core$Object($tmp861);
                            panda$core$Bit $tmp867 = (($fn866) s859->$class->vtable[4])(s859);
                            if ($tmp867.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp868, true);
                                $returnValue616 = $tmp868;
                                $tmp858 = 0;
                                goto $l856;
                                $l869:;
                                $tmp840 = 0;
                                goto $l838;
                                $l870:;
                                $tmp607 = 18;
                                goto $l605;
                                $l871:;
                                return $returnValue616;
                            }
                            }
                        }
                        $tmp858 = -1;
                        goto $l856;
                        $l856:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s859));
                        s859 = NULL;
                        switch ($tmp858) {
                            case 0: goto $l869;
                            case -1: goto $l873;
                        }
                        $l873:;
                    }
                    goto $l848;
                    $l849:;
                }
                $tmp840 = -1;
                goto $l838;
                $l838:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$299$17841));
                Iter$299$17841 = NULL;
                switch ($tmp840) {
                    case -1: goto $l874;
                    case 0: goto $l870;
                }
                $l874:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp875, false);
            $returnValue616 = $tmp875;
            $tmp607 = 19;
            goto $l605;
            $l876:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp878, 17);
        panda$core$Bit $tmp879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp878);
        if ($tmp879.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp880, true);
            $returnValue616 = $tmp880;
            $tmp607 = 20;
            goto $l605;
            $l881:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp883, 18);
        panda$core$Bit $tmp884 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp883);
        if ($tmp884.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp886 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9608->$data + 24));
            base885 = *$tmp886;
            org$pandalanguage$pandac$FieldDecl** $tmp888 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$253_9608->$data + 32));
            field887 = *$tmp888;
            panda$core$Bit$init$builtin_bit(&$tmp889, false);
            $returnValue616 = $tmp889;
            $tmp607 = 21;
            goto $l605;
            $l890:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp892, 19);
        panda$core$Bit $tmp893 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp892);
        if ($tmp893.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp895 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9608->$data + 16));
            test894 = *$tmp895;
            panda$collections$ImmutableArray** $tmp897 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9608->$data + 24));
            ifTrue896 = *$tmp897;
            org$pandalanguage$pandac$IRNode** $tmp899 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9608->$data + 32));
            ifFalse898 = *$tmp899;
            panda$core$Bit $tmp901 = (($fn900) test894->$class->vtable[4])(test894);
            if ($tmp901.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp902, true);
                $returnValue616 = $tmp902;
                $tmp607 = 22;
                goto $l605;
                $l903:;
                return $returnValue616;
            }
            }
            {
                int $tmp907;
                {
                    ITable* $tmp911 = ((panda$collections$Iterable*) ifTrue896)->$class->itable;
                    while ($tmp911->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp911 = $tmp911->next;
                    }
                    $fn913 $tmp912 = $tmp911->methods[0];
                    panda$collections$Iterator* $tmp914 = $tmp912(((panda$collections$Iterable*) ifTrue896));
                    $tmp910 = $tmp914;
                    $tmp909 = $tmp910;
                    Iter$313$17908 = $tmp909;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp909));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp910));
                    $l915:;
                    ITable* $tmp918 = Iter$313$17908->$class->itable;
                    while ($tmp918->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp918 = $tmp918->next;
                    }
                    $fn920 $tmp919 = $tmp918->methods[0];
                    panda$core$Bit $tmp921 = $tmp919(Iter$313$17908);
                    panda$core$Bit $tmp922 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp921);
                    bool $tmp917 = $tmp922.value;
                    if (!$tmp917) goto $l916;
                    {
                        int $tmp925;
                        {
                            ITable* $tmp929 = Iter$313$17908->$class->itable;
                            while ($tmp929->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp929 = $tmp929->next;
                            }
                            $fn931 $tmp930 = $tmp929->methods[1];
                            panda$core$Object* $tmp932 = $tmp930(Iter$313$17908);
                            $tmp928 = $tmp932;
                            $tmp927 = ((org$pandalanguage$pandac$IRNode*) $tmp928);
                            s926 = $tmp927;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp927));
                            panda$core$Panda$unref$panda$core$Object($tmp928);
                            panda$core$Bit $tmp934 = (($fn933) s926->$class->vtable[4])(s926);
                            if ($tmp934.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp935, true);
                                $returnValue616 = $tmp935;
                                $tmp925 = 0;
                                goto $l923;
                                $l936:;
                                $tmp907 = 0;
                                goto $l905;
                                $l937:;
                                $tmp607 = 23;
                                goto $l605;
                                $l938:;
                                return $returnValue616;
                            }
                            }
                        }
                        $tmp925 = -1;
                        goto $l923;
                        $l923:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s926));
                        s926 = NULL;
                        switch ($tmp925) {
                            case -1: goto $l940;
                            case 0: goto $l936;
                        }
                        $l940:;
                    }
                    goto $l915;
                    $l916:;
                }
                $tmp907 = -1;
                goto $l905;
                $l905:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$313$17908));
                Iter$313$17908 = NULL;
                switch ($tmp907) {
                    case 0: goto $l937;
                    case -1: goto $l941;
                }
                $l941:;
            }
            panda$core$Bit $tmp943 = (($fn942) ifFalse898->$class->vtable[4])(ifFalse898);
            $returnValue616 = $tmp943;
            $tmp607 = 24;
            goto $l605;
            $l944:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp946, 20);
        panda$core$Bit $tmp947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp946);
        if ($tmp947.value) {
        {
            panda$core$UInt64* $tmp949 = ((panda$core$UInt64*) ((char*) $match$253_9608->$data + 24));
            value948 = *$tmp949;
            panda$core$Bit$init$builtin_bit(&$tmp950, false);
            $returnValue616 = $tmp950;
            $tmp607 = 25;
            goto $l605;
            $l951:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp953, 21);
        panda$core$Bit $tmp954 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp953);
        if ($tmp954.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp956 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9608->$data + 16));
            value955 = *$tmp956;
            panda$core$Bit $tmp958 = (($fn957) value955->$class->vtable[4])(value955);
            $returnValue616 = $tmp958;
            $tmp607 = 26;
            goto $l605;
            $l959:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp961, 22);
        panda$core$Bit $tmp962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp961);
        if ($tmp962.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp964 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9608->$data + 16));
            value963 = *$tmp964;
            panda$core$Bit $tmp966 = (($fn965) value963->$class->vtable[4])(value963);
            $returnValue616 = $tmp966;
            $tmp607 = 27;
            goto $l605;
            $l967:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp969, 23);
        panda$core$Bit $tmp970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp969);
        if ($tmp970.value) {
        {
            panda$core$String** $tmp972 = ((panda$core$String**) ((char*) $match$253_9608->$data + 16));
            label971 = *$tmp972;
            panda$collections$ImmutableArray** $tmp974 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9608->$data + 24));
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
                    Iter$326$17978 = $tmp979;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp979));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp980));
                    $l985:;
                    ITable* $tmp988 = Iter$326$17978->$class->itable;
                    while ($tmp988->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp988 = $tmp988->next;
                    }
                    $fn990 $tmp989 = $tmp988->methods[0];
                    panda$core$Bit $tmp991 = $tmp989(Iter$326$17978);
                    panda$core$Bit $tmp992 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp991);
                    bool $tmp987 = $tmp992.value;
                    if (!$tmp987) goto $l986;
                    {
                        int $tmp995;
                        {
                            ITable* $tmp999 = Iter$326$17978->$class->itable;
                            while ($tmp999->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp999 = $tmp999->next;
                            }
                            $fn1001 $tmp1000 = $tmp999->methods[1];
                            panda$core$Object* $tmp1002 = $tmp1000(Iter$326$17978);
                            $tmp998 = $tmp1002;
                            $tmp997 = ((org$pandalanguage$pandac$IRNode*) $tmp998);
                            s996 = $tmp997;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp997));
                            panda$core$Panda$unref$panda$core$Object($tmp998);
                            panda$core$Bit $tmp1004 = (($fn1003) s996->$class->vtable[4])(s996);
                            if ($tmp1004.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1005, true);
                                $returnValue616 = $tmp1005;
                                $tmp995 = 0;
                                goto $l993;
                                $l1006:;
                                $tmp977 = 0;
                                goto $l975;
                                $l1007:;
                                $tmp607 = 28;
                                goto $l605;
                                $l1008:;
                                return $returnValue616;
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$326$17978));
                Iter$326$17978 = NULL;
                switch ($tmp977) {
                    case -1: goto $l1011;
                    case 0: goto $l1007;
                }
                $l1011:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1012, false);
            $returnValue616 = $tmp1012;
            $tmp607 = 29;
            goto $l605;
            $l1013:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1015, 24);
        panda$core$Bit $tmp1016 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp1015);
        if ($tmp1016.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1018 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9608->$data + 16));
            value1017 = *$tmp1018;
            panda$collections$ImmutableArray** $tmp1020 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9608->$data + 24));
            whens1019 = *$tmp1020;
            panda$collections$ImmutableArray** $tmp1022 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9608->$data + 32));
            other1021 = *$tmp1022;
            panda$core$Bit $tmp1024 = (($fn1023) value1017->$class->vtable[4])(value1017);
            if ($tmp1024.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1025, true);
                $returnValue616 = $tmp1025;
                $tmp607 = 30;
                goto $l605;
                $l1026:;
                return $returnValue616;
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
                    Iter$336$171031 = $tmp1032;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1032));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1033));
                    $l1038:;
                    ITable* $tmp1041 = Iter$336$171031->$class->itable;
                    while ($tmp1041->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1041 = $tmp1041->next;
                    }
                    $fn1043 $tmp1042 = $tmp1041->methods[0];
                    panda$core$Bit $tmp1044 = $tmp1042(Iter$336$171031);
                    panda$core$Bit $tmp1045 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1044);
                    bool $tmp1040 = $tmp1045.value;
                    if (!$tmp1040) goto $l1039;
                    {
                        int $tmp1048;
                        {
                            ITable* $tmp1052 = Iter$336$171031->$class->itable;
                            while ($tmp1052->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1052 = $tmp1052->next;
                            }
                            $fn1054 $tmp1053 = $tmp1052->methods[1];
                            panda$core$Object* $tmp1055 = $tmp1053(Iter$336$171031);
                            $tmp1051 = $tmp1055;
                            $tmp1050 = ((org$pandalanguage$pandac$IRNode*) $tmp1051);
                            w1049 = $tmp1050;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1050));
                            panda$core$Panda$unref$panda$core$Object($tmp1051);
                            panda$core$Bit $tmp1057 = (($fn1056) w1049->$class->vtable[4])(w1049);
                            if ($tmp1057.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1058, true);
                                $returnValue616 = $tmp1058;
                                $tmp1048 = 0;
                                goto $l1046;
                                $l1059:;
                                $tmp1030 = 0;
                                goto $l1028;
                                $l1060:;
                                $tmp607 = 31;
                                goto $l605;
                                $l1061:;
                                return $returnValue616;
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$336$171031));
                Iter$336$171031 = NULL;
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
                    Iter$341$171068 = $tmp1069;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1069));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1070));
                    $l1075:;
                    ITable* $tmp1078 = Iter$341$171068->$class->itable;
                    while ($tmp1078->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1078 = $tmp1078->next;
                    }
                    $fn1080 $tmp1079 = $tmp1078->methods[0];
                    panda$core$Bit $tmp1081 = $tmp1079(Iter$341$171068);
                    panda$core$Bit $tmp1082 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1081);
                    bool $tmp1077 = $tmp1082.value;
                    if (!$tmp1077) goto $l1076;
                    {
                        int $tmp1085;
                        {
                            ITable* $tmp1089 = Iter$341$171068->$class->itable;
                            while ($tmp1089->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1089 = $tmp1089->next;
                            }
                            $fn1091 $tmp1090 = $tmp1089->methods[1];
                            panda$core$Object* $tmp1092 = $tmp1090(Iter$341$171068);
                            $tmp1088 = $tmp1092;
                            $tmp1087 = ((org$pandalanguage$pandac$IRNode*) $tmp1088);
                            s1086 = $tmp1087;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1087));
                            panda$core$Panda$unref$panda$core$Object($tmp1088);
                            panda$core$Bit $tmp1094 = (($fn1093) s1086->$class->vtable[4])(s1086);
                            if ($tmp1094.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1095, true);
                                $returnValue616 = $tmp1095;
                                $tmp1085 = 0;
                                goto $l1083;
                                $l1096:;
                                $tmp1067 = 0;
                                goto $l1065;
                                $l1097:;
                                $tmp607 = 32;
                                goto $l605;
                                $l1098:;
                                return $returnValue616;
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
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$341$171068));
                Iter$341$171068 = NULL;
                switch ($tmp1067) {
                    case -1: goto $l1101;
                    case 0: goto $l1097;
                }
                $l1101:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1102, false);
            $returnValue616 = $tmp1102;
            $tmp607 = 33;
            goto $l605;
            $l1103:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1105, 25);
        panda$core$Bit $tmp1106 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp1105);
        if ($tmp1106.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1107, false);
            $returnValue616 = $tmp1107;
            $tmp607 = 34;
            goto $l605;
            $l1108:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1110, 26);
        panda$core$Bit $tmp1111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp1110);
        if ($tmp1111.value) {
        {
            panda$core$UInt64* $tmp1113 = ((panda$core$UInt64*) ((char*) $match$253_9608->$data + 24));
            value1112 = *$tmp1113;
            panda$core$Bit$init$builtin_bit(&$tmp1114, false);
            $returnValue616 = $tmp1114;
            $tmp607 = 35;
            goto $l605;
            $l1115:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1117, 27);
        panda$core$Bit $tmp1118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp1117);
        if ($tmp1118.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1119, false);
            $returnValue616 = $tmp1119;
            $tmp607 = 36;
            goto $l605;
            $l1120:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1122, 28);
        panda$core$Bit $tmp1123 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp1122);
        if ($tmp1123.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1125 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$253_9608->$data + 16));
            op1124 = *$tmp1125;
            org$pandalanguage$pandac$IRNode** $tmp1127 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9608->$data + 24));
            base1126 = *$tmp1127;
            panda$core$Bit $tmp1129 = (($fn1128) base1126->$class->vtable[4])(base1126);
            $returnValue616 = $tmp1129;
            $tmp607 = 37;
            goto $l605;
            $l1130:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1132, 29);
        panda$core$Bit $tmp1133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp1132);
        if ($tmp1133.value) {
        {
            panda$core$String** $tmp1135 = ((panda$core$String**) ((char*) $match$253_9608->$data + 16));
            label1134 = *$tmp1135;
            org$pandalanguage$pandac$IRNode** $tmp1137 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9608->$data + 24));
            target1136 = *$tmp1137;
            org$pandalanguage$pandac$IRNode** $tmp1139 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9608->$data + 32));
            list1138 = *$tmp1139;
            panda$collections$ImmutableArray** $tmp1141 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9608->$data + 40));
            statements1140 = *$tmp1141;
            panda$core$Bit $tmp1143 = (($fn1142) list1138->$class->vtable[4])(list1138);
            if ($tmp1143.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1144, true);
                $returnValue616 = $tmp1144;
                $tmp607 = 38;
                goto $l605;
                $l1145:;
                return $returnValue616;
            }
            }
            {
                int $tmp1149;
                {
                    ITable* $tmp1153 = ((panda$collections$Iterable*) statements1140)->$class->itable;
                    while ($tmp1153->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1153 = $tmp1153->next;
                    }
                    $fn1155 $tmp1154 = $tmp1153->methods[0];
                    panda$collections$Iterator* $tmp1156 = $tmp1154(((panda$collections$Iterable*) statements1140));
                    $tmp1152 = $tmp1156;
                    $tmp1151 = $tmp1152;
                    Iter$360$171150 = $tmp1151;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1151));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1152));
                    $l1157:;
                    ITable* $tmp1160 = Iter$360$171150->$class->itable;
                    while ($tmp1160->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1160 = $tmp1160->next;
                    }
                    $fn1162 $tmp1161 = $tmp1160->methods[0];
                    panda$core$Bit $tmp1163 = $tmp1161(Iter$360$171150);
                    panda$core$Bit $tmp1164 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1163);
                    bool $tmp1159 = $tmp1164.value;
                    if (!$tmp1159) goto $l1158;
                    {
                        int $tmp1167;
                        {
                            ITable* $tmp1171 = Iter$360$171150->$class->itable;
                            while ($tmp1171->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1171 = $tmp1171->next;
                            }
                            $fn1173 $tmp1172 = $tmp1171->methods[1];
                            panda$core$Object* $tmp1174 = $tmp1172(Iter$360$171150);
                            $tmp1170 = $tmp1174;
                            $tmp1169 = ((org$pandalanguage$pandac$IRNode*) $tmp1170);
                            s1168 = $tmp1169;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1169));
                            panda$core$Panda$unref$panda$core$Object($tmp1170);
                            panda$core$Bit $tmp1176 = (($fn1175) s1168->$class->vtable[4])(s1168);
                            if ($tmp1176.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1177, true);
                                $returnValue616 = $tmp1177;
                                $tmp1167 = 0;
                                goto $l1165;
                                $l1178:;
                                $tmp1149 = 0;
                                goto $l1147;
                                $l1179:;
                                $tmp607 = 39;
                                goto $l605;
                                $l1180:;
                                return $returnValue616;
                            }
                            }
                        }
                        $tmp1167 = -1;
                        goto $l1165;
                        $l1165:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1168));
                        s1168 = NULL;
                        switch ($tmp1167) {
                            case -1: goto $l1182;
                            case 0: goto $l1178;
                        }
                        $l1182:;
                    }
                    goto $l1157;
                    $l1158:;
                }
                $tmp1149 = -1;
                goto $l1147;
                $l1147:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$360$171150));
                Iter$360$171150 = NULL;
                switch ($tmp1149) {
                    case -1: goto $l1183;
                    case 0: goto $l1179;
                }
                $l1183:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1184, false);
            $returnValue616 = $tmp1184;
            $tmp607 = 40;
            goto $l605;
            $l1185:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1187, 30);
        panda$core$Bit $tmp1188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp1187);
        if ($tmp1188.value) {
        {
            panda$core$Real64* $tmp1190 = ((panda$core$Real64*) ((char*) $match$253_9608->$data + 24));
            value1189 = *$tmp1190;
            panda$core$Bit$init$builtin_bit(&$tmp1191, false);
            $returnValue616 = $tmp1191;
            $tmp607 = 41;
            goto $l605;
            $l1192:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1194, 31);
        panda$core$Bit $tmp1195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp1194);
        if ($tmp1195.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1197 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9608->$data + 16));
            value1196 = *$tmp1197;
            panda$core$Bit $tmp1199 = (($fn1198) value1196->$class->vtable[4])(value1196);
            $returnValue616 = $tmp1199;
            $tmp607 = 42;
            goto $l605;
            $l1200:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1202, 32);
        panda$core$Bit $tmp1203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp1202);
        if ($tmp1203.value) {
        {
            panda$core$Int64* $tmp1205 = ((panda$core$Int64*) ((char*) $match$253_9608->$data + 24));
            id1204 = *$tmp1205;
            panda$core$Bit$init$builtin_bit(&$tmp1206, false);
            $returnValue616 = $tmp1206;
            $tmp607 = 43;
            goto $l605;
            $l1207:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1209, 33);
        panda$core$Bit $tmp1210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp1209);
        if ($tmp1210.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1212 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9608->$data + 0));
            base1211 = *$tmp1212;
            panda$core$Int64* $tmp1214 = ((panda$core$Int64*) ((char*) $match$253_9608->$data + 8));
            id1213 = *$tmp1214;
            panda$core$Bit $tmp1216 = (($fn1215) base1211->$class->vtable[4])(base1211);
            $returnValue616 = $tmp1216;
            $tmp607 = 44;
            goto $l605;
            $l1217:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1219, 34);
        panda$core$Bit $tmp1220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp1219);
        if ($tmp1220.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1221, false);
            $returnValue616 = $tmp1221;
            $tmp607 = 45;
            goto $l605;
            $l1222:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1224, 35);
        panda$core$Bit $tmp1225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp1224);
        if ($tmp1225.value) {
        {
            panda$core$String** $tmp1227 = ((panda$core$String**) ((char*) $match$253_9608->$data + 16));
            str1226 = *$tmp1227;
            panda$core$Bit$init$builtin_bit(&$tmp1228, false);
            $returnValue616 = $tmp1228;
            $tmp607 = 46;
            goto $l605;
            $l1229:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1231, 36);
        panda$core$Bit $tmp1232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp1231);
        if ($tmp1232.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1233, false);
            $returnValue616 = $tmp1233;
            $tmp607 = 47;
            goto $l605;
            $l1234:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1236, 37);
        panda$core$Bit $tmp1237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp1236);
        if ($tmp1237.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1239 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9608->$data + 16));
            test1238 = *$tmp1239;
            org$pandalanguage$pandac$IRNode** $tmp1241 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9608->$data + 24));
            ifTrue1240 = *$tmp1241;
            org$pandalanguage$pandac$IRNode** $tmp1243 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9608->$data + 32));
            ifFalse1242 = *$tmp1243;
            panda$core$Bit $tmp1247 = (($fn1246) test1238->$class->vtable[4])(test1238);
            bool $tmp1245 = $tmp1247.value;
            if ($tmp1245) goto $l1248;
            panda$core$Bit $tmp1250 = (($fn1249) ifTrue1240->$class->vtable[4])(ifTrue1240);
            $tmp1245 = $tmp1250.value;
            $l1248:;
            panda$core$Bit $tmp1251 = { $tmp1245 };
            bool $tmp1244 = $tmp1251.value;
            if ($tmp1244) goto $l1252;
            panda$core$Bit $tmp1254 = (($fn1253) ifFalse1242->$class->vtable[4])(ifFalse1242);
            $tmp1244 = $tmp1254.value;
            $l1252:;
            panda$core$Bit $tmp1255 = { $tmp1244 };
            $returnValue616 = $tmp1255;
            $tmp607 = 48;
            goto $l605;
            $l1256:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1258, 38);
        panda$core$Bit $tmp1259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp1258);
        if ($tmp1259.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1261 = ((org$pandalanguage$pandac$Type**) ((char*) $match$253_9608->$data + 16));
            type1260 = *$tmp1261;
            panda$core$Bit$init$builtin_bit(&$tmp1262, false);
            $returnValue616 = $tmp1262;
            $tmp607 = 49;
            goto $l605;
            $l1263:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1265, 39);
        panda$core$Bit $tmp1266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp1265);
        if ($tmp1266.value) {
        {
            panda$core$String** $tmp1268 = ((panda$core$String**) ((char*) $match$253_9608->$data + 16));
            name1267 = *$tmp1268;
            panda$core$Bit$init$builtin_bit(&$tmp1269, false);
            if ($tmp1269.value) goto $l1270; else goto $l1271;
            $l1271:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1272, (panda$core$Int64) { 385 });
            abort();
            $l1270:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1273, 40);
        panda$core$Bit $tmp1274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp1273);
        if ($tmp1274.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1276 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9608->$data + 24));
            base1275 = *$tmp1276;
            panda$collections$ImmutableArray** $tmp1278 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9608->$data + 32));
            args1277 = *$tmp1278;
            panda$core$Bit$init$builtin_bit(&$tmp1279, false);
            if ($tmp1279.value) goto $l1280; else goto $l1281;
            $l1281:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1282, (panda$core$Int64) { 387 });
            abort();
            $l1280:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1283, 41);
        panda$core$Bit $tmp1284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp1283);
        if ($tmp1284.value) {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1285, false);
            if ($tmp1285.value) goto $l1286; else goto $l1287;
            $l1287:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1288, (panda$core$Int64) { 389 });
            abort();
            $l1286:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1289, 42);
        panda$core$Bit $tmp1290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp1289);
        if ($tmp1290.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1292 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9608->$data + 24));
            target1291 = *$tmp1292;
            panda$collections$ImmutableArray** $tmp1294 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9608->$data + 32));
            methods1293 = *$tmp1294;
            panda$collections$ImmutableArray** $tmp1296 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9608->$data + 40));
            args1295 = *$tmp1296;
            panda$core$Bit$init$builtin_bit(&$tmp1297, false);
            if ($tmp1297.value) goto $l1298; else goto $l1299;
            $l1299:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1300, (panda$core$Int64) { 391 });
            abort();
            $l1298:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1301, 43);
        panda$core$Bit $tmp1302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp1301);
        if ($tmp1302.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1304 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9608->$data + 16));
            target1303 = *$tmp1304;
            panda$collections$ImmutableArray** $tmp1306 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9608->$data + 24));
            methods1305 = *$tmp1306;
            panda$core$Bit$init$builtin_bit(&$tmp1307, false);
            if ($tmp1307.value) goto $l1308; else goto $l1309;
            $l1309:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1310, (panda$core$Int64) { 393 });
            abort();
            $l1308:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1311, 44);
        panda$core$Bit $tmp1312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp1311);
        if ($tmp1312.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1314 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9608->$data + 16));
            start1313 = *$tmp1314;
            org$pandalanguage$pandac$IRNode** $tmp1316 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9608->$data + 24));
            end1315 = *$tmp1316;
            panda$core$Bit* $tmp1318 = ((panda$core$Bit*) ((char*) $match$253_9608->$data + 32));
            inclusive1317 = *$tmp1318;
            org$pandalanguage$pandac$IRNode** $tmp1320 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9608->$data + 33));
            step1319 = *$tmp1320;
            panda$core$Bit$init$builtin_bit(&$tmp1321, false);
            if ($tmp1321.value) goto $l1322; else goto $l1323;
            $l1323:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1324, (panda$core$Int64) { 395 });
            abort();
            $l1322:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1325, 45);
        panda$core$Bit $tmp1326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp1325);
        if ($tmp1326.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp1328 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$253_9608->$data + 16));
            kind1327 = *$tmp1328;
            panda$collections$ImmutableArray** $tmp1330 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9608->$data + 24));
            decls1329 = *$tmp1330;
            {
                int $tmp1333;
                {
                    ITable* $tmp1337 = ((panda$collections$Iterable*) decls1329)->$class->itable;
                    while ($tmp1337->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1337 = $tmp1337->next;
                    }
                    $fn1339 $tmp1338 = $tmp1337->methods[0];
                    panda$collections$Iterator* $tmp1340 = $tmp1338(((panda$collections$Iterable*) decls1329));
                    $tmp1336 = $tmp1340;
                    $tmp1335 = $tmp1336;
                    Iter$397$171334 = $tmp1335;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1335));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1336));
                    $l1341:;
                    ITable* $tmp1344 = Iter$397$171334->$class->itable;
                    while ($tmp1344->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1344 = $tmp1344->next;
                    }
                    $fn1346 $tmp1345 = $tmp1344->methods[0];
                    panda$core$Bit $tmp1347 = $tmp1345(Iter$397$171334);
                    panda$core$Bit $tmp1348 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1347);
                    bool $tmp1343 = $tmp1348.value;
                    if (!$tmp1343) goto $l1342;
                    {
                        int $tmp1351;
                        {
                            ITable* $tmp1355 = Iter$397$171334->$class->itable;
                            while ($tmp1355->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1355 = $tmp1355->next;
                            }
                            $fn1357 $tmp1356 = $tmp1355->methods[1];
                            panda$core$Object* $tmp1358 = $tmp1356(Iter$397$171334);
                            $tmp1354 = $tmp1358;
                            $tmp1353 = ((org$pandalanguage$pandac$IRNode*) $tmp1354);
                            d1352 = $tmp1353;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1353));
                            panda$core$Panda$unref$panda$core$Object($tmp1354);
                            panda$core$Bit $tmp1360 = (($fn1359) d1352->$class->vtable[4])(d1352);
                            if ($tmp1360.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1361, true);
                                $returnValue616 = $tmp1361;
                                $tmp1351 = 0;
                                goto $l1349;
                                $l1362:;
                                $tmp1333 = 0;
                                goto $l1331;
                                $l1363:;
                                $tmp607 = 50;
                                goto $l605;
                                $l1364:;
                                return $returnValue616;
                            }
                            }
                        }
                        $tmp1351 = -1;
                        goto $l1349;
                        $l1349:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) d1352));
                        d1352 = NULL;
                        switch ($tmp1351) {
                            case -1: goto $l1366;
                            case 0: goto $l1362;
                        }
                        $l1366:;
                    }
                    goto $l1341;
                    $l1342:;
                }
                $tmp1333 = -1;
                goto $l1331;
                $l1331:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$397$171334));
                Iter$397$171334 = NULL;
                switch ($tmp1333) {
                    case 0: goto $l1363;
                    case -1: goto $l1367;
                }
                $l1367:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1368, false);
            $returnValue616 = $tmp1368;
            $tmp607 = 51;
            goto $l605;
            $l1369:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1371, 46);
        panda$core$Bit $tmp1372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp1371);
        if ($tmp1372.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp1374 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$253_9608->$data + 16));
            variable1373 = *$tmp1374;
            panda$core$Bit$init$builtin_bit(&$tmp1375, false);
            $returnValue616 = $tmp1375;
            $tmp607 = 52;
            goto $l605;
            $l1376:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1378, 47);
        panda$core$Bit $tmp1379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp1378);
        if ($tmp1379.value) {
        {
            panda$collections$ImmutableArray** $tmp1381 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9608->$data + 16));
            tests1380 = *$tmp1381;
            panda$collections$ImmutableArray** $tmp1383 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9608->$data + 24));
            statements1382 = *$tmp1383;
            {
                int $tmp1386;
                {
                    ITable* $tmp1390 = ((panda$collections$Iterable*) tests1380)->$class->itable;
                    while ($tmp1390->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1390 = $tmp1390->next;
                    }
                    $fn1392 $tmp1391 = $tmp1390->methods[0];
                    panda$collections$Iterator* $tmp1393 = $tmp1391(((panda$collections$Iterable*) tests1380));
                    $tmp1389 = $tmp1393;
                    $tmp1388 = $tmp1389;
                    Iter$406$171387 = $tmp1388;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1388));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1389));
                    $l1394:;
                    ITable* $tmp1397 = Iter$406$171387->$class->itable;
                    while ($tmp1397->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1397 = $tmp1397->next;
                    }
                    $fn1399 $tmp1398 = $tmp1397->methods[0];
                    panda$core$Bit $tmp1400 = $tmp1398(Iter$406$171387);
                    panda$core$Bit $tmp1401 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1400);
                    bool $tmp1396 = $tmp1401.value;
                    if (!$tmp1396) goto $l1395;
                    {
                        int $tmp1404;
                        {
                            ITable* $tmp1408 = Iter$406$171387->$class->itable;
                            while ($tmp1408->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1408 = $tmp1408->next;
                            }
                            $fn1410 $tmp1409 = $tmp1408->methods[1];
                            panda$core$Object* $tmp1411 = $tmp1409(Iter$406$171387);
                            $tmp1407 = $tmp1411;
                            $tmp1406 = ((org$pandalanguage$pandac$IRNode*) $tmp1407);
                            t1405 = $tmp1406;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1406));
                            panda$core$Panda$unref$panda$core$Object($tmp1407);
                            panda$core$Bit $tmp1413 = (($fn1412) t1405->$class->vtable[4])(t1405);
                            if ($tmp1413.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1414, true);
                                $returnValue616 = $tmp1414;
                                $tmp1404 = 0;
                                goto $l1402;
                                $l1415:;
                                $tmp1386 = 0;
                                goto $l1384;
                                $l1416:;
                                $tmp607 = 53;
                                goto $l605;
                                $l1417:;
                                return $returnValue616;
                            }
                            }
                        }
                        $tmp1404 = -1;
                        goto $l1402;
                        $l1402:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1405));
                        t1405 = NULL;
                        switch ($tmp1404) {
                            case 0: goto $l1415;
                            case -1: goto $l1419;
                        }
                        $l1419:;
                    }
                    goto $l1394;
                    $l1395:;
                }
                $tmp1386 = -1;
                goto $l1384;
                $l1384:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$406$171387));
                Iter$406$171387 = NULL;
                switch ($tmp1386) {
                    case -1: goto $l1420;
                    case 0: goto $l1416;
                }
                $l1420:;
            }
            {
                int $tmp1423;
                {
                    ITable* $tmp1427 = ((panda$collections$Iterable*) statements1382)->$class->itable;
                    while ($tmp1427->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1427 = $tmp1427->next;
                    }
                    $fn1429 $tmp1428 = $tmp1427->methods[0];
                    panda$collections$Iterator* $tmp1430 = $tmp1428(((panda$collections$Iterable*) statements1382));
                    $tmp1426 = $tmp1430;
                    $tmp1425 = $tmp1426;
                    Iter$411$171424 = $tmp1425;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1425));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1426));
                    $l1431:;
                    ITable* $tmp1434 = Iter$411$171424->$class->itable;
                    while ($tmp1434->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1434 = $tmp1434->next;
                    }
                    $fn1436 $tmp1435 = $tmp1434->methods[0];
                    panda$core$Bit $tmp1437 = $tmp1435(Iter$411$171424);
                    panda$core$Bit $tmp1438 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1437);
                    bool $tmp1433 = $tmp1438.value;
                    if (!$tmp1433) goto $l1432;
                    {
                        int $tmp1441;
                        {
                            ITable* $tmp1445 = Iter$411$171424->$class->itable;
                            while ($tmp1445->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1445 = $tmp1445->next;
                            }
                            $fn1447 $tmp1446 = $tmp1445->methods[1];
                            panda$core$Object* $tmp1448 = $tmp1446(Iter$411$171424);
                            $tmp1444 = $tmp1448;
                            $tmp1443 = ((org$pandalanguage$pandac$IRNode*) $tmp1444);
                            s1442 = $tmp1443;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1443));
                            panda$core$Panda$unref$panda$core$Object($tmp1444);
                            panda$core$Bit $tmp1450 = (($fn1449) s1442->$class->vtable[4])(s1442);
                            if ($tmp1450.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1451, true);
                                $returnValue616 = $tmp1451;
                                $tmp1441 = 0;
                                goto $l1439;
                                $l1452:;
                                $tmp1423 = 0;
                                goto $l1421;
                                $l1453:;
                                $tmp607 = 54;
                                goto $l605;
                                $l1454:;
                                return $returnValue616;
                            }
                            }
                        }
                        $tmp1441 = -1;
                        goto $l1439;
                        $l1439:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1442));
                        s1442 = NULL;
                        switch ($tmp1441) {
                            case -1: goto $l1456;
                            case 0: goto $l1452;
                        }
                        $l1456:;
                    }
                    goto $l1431;
                    $l1432:;
                }
                $tmp1423 = -1;
                goto $l1421;
                $l1421:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$411$171424));
                Iter$411$171424 = NULL;
                switch ($tmp1423) {
                    case 0: goto $l1453;
                    case -1: goto $l1457;
                }
                $l1457:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1458, false);
            $returnValue616 = $tmp1458;
            $tmp607 = 55;
            goto $l605;
            $l1459:;
            return $returnValue616;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1461, 48);
        panda$core$Bit $tmp1462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$253_9608->$rawValue, $tmp1461);
        if ($tmp1462.value) {
        {
            panda$core$String** $tmp1464 = ((panda$core$String**) ((char*) $match$253_9608->$data + 16));
            label1463 = *$tmp1464;
            org$pandalanguage$pandac$IRNode** $tmp1466 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$253_9608->$data + 24));
            test1465 = *$tmp1466;
            panda$collections$ImmutableArray** $tmp1468 = ((panda$collections$ImmutableArray**) ((char*) $match$253_9608->$data + 32));
            statements1467 = *$tmp1468;
            panda$core$Bit $tmp1470 = (($fn1469) test1465->$class->vtable[4])(test1465);
            if ($tmp1470.value) {
            {
                panda$core$Bit$init$builtin_bit(&$tmp1471, true);
                $returnValue616 = $tmp1471;
                $tmp607 = 56;
                goto $l605;
                $l1472:;
                return $returnValue616;
            }
            }
            {
                int $tmp1476;
                {
                    ITable* $tmp1480 = ((panda$collections$Iterable*) statements1467)->$class->itable;
                    while ($tmp1480->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1480 = $tmp1480->next;
                    }
                    $fn1482 $tmp1481 = $tmp1480->methods[0];
                    panda$collections$Iterator* $tmp1483 = $tmp1481(((panda$collections$Iterable*) statements1467));
                    $tmp1479 = $tmp1483;
                    $tmp1478 = $tmp1479;
                    Iter$421$171477 = $tmp1478;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1478));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1479));
                    $l1484:;
                    ITable* $tmp1487 = Iter$421$171477->$class->itable;
                    while ($tmp1487->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1487 = $tmp1487->next;
                    }
                    $fn1489 $tmp1488 = $tmp1487->methods[0];
                    panda$core$Bit $tmp1490 = $tmp1488(Iter$421$171477);
                    panda$core$Bit $tmp1491 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1490);
                    bool $tmp1486 = $tmp1491.value;
                    if (!$tmp1486) goto $l1485;
                    {
                        int $tmp1494;
                        {
                            ITable* $tmp1498 = Iter$421$171477->$class->itable;
                            while ($tmp1498->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1498 = $tmp1498->next;
                            }
                            $fn1500 $tmp1499 = $tmp1498->methods[1];
                            panda$core$Object* $tmp1501 = $tmp1499(Iter$421$171477);
                            $tmp1497 = $tmp1501;
                            $tmp1496 = ((org$pandalanguage$pandac$IRNode*) $tmp1497);
                            s1495 = $tmp1496;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1496));
                            panda$core$Panda$unref$panda$core$Object($tmp1497);
                            panda$core$Bit $tmp1503 = (($fn1502) s1495->$class->vtable[4])(s1495);
                            if ($tmp1503.value) {
                            {
                                panda$core$Bit$init$builtin_bit(&$tmp1504, true);
                                $returnValue616 = $tmp1504;
                                $tmp1494 = 0;
                                goto $l1492;
                                $l1505:;
                                $tmp1476 = 0;
                                goto $l1474;
                                $l1506:;
                                $tmp607 = 57;
                                goto $l605;
                                $l1507:;
                                return $returnValue616;
                            }
                            }
                        }
                        $tmp1494 = -1;
                        goto $l1492;
                        $l1492:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1495));
                        s1495 = NULL;
                        switch ($tmp1494) {
                            case -1: goto $l1509;
                            case 0: goto $l1505;
                        }
                        $l1509:;
                    }
                    goto $l1484;
                    $l1485:;
                }
                $tmp1476 = -1;
                goto $l1474;
                $l1474:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$421$171477));
                Iter$421$171477 = NULL;
                switch ($tmp1476) {
                    case 0: goto $l1506;
                    case -1: goto $l1510;
                }
                $l1510:;
            }
            panda$core$Bit$init$builtin_bit(&$tmp1511, false);
            $returnValue616 = $tmp1511;
            $tmp607 = 58;
            goto $l605;
            $l1512:;
            return $returnValue616;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1514, false);
            if ($tmp1514.value) goto $l1515; else goto $l1516;
            $l1516:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1517, (panda$core$Int64) { 428 });
            abort();
            $l1515:;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
    $tmp607 = -1;
    goto $l605;
    $l605:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp609));
    switch ($tmp607) {
        case 58: goto $l1512;
        case 4: goto $l696;
        case 11: goto $l775;
        case -1: goto $l1518;
        case 3: goto $l657;
        case 20: goto $l881;
        case 34: goto $l1108;
        case 19: goto $l876;
        case 33: goto $l1103;
        case 35: goto $l1115;
        case 18: goto $l871;
        case 0: goto $l624;
        case 49: goto $l1263;
        case 1: goto $l629;
        case 48: goto $l1256;
        case 5: goto $l701;
        case 36: goto $l1120;
        case 51: goto $l1369;
        case 31: goto $l1061;
        case 50: goto $l1364;
        case 28: goto $l1008;
        case 53: goto $l1417;
        case 15: goto $l810;
        case 52: goto $l1376;
        case 8: goto $l754;
        case 42: goto $l1200;
        case 9: goto $l759;
        case 10: goto $l768;
        case 2: goto $l650;
        case 26: goto $l959;
        case 37: goto $l1130;
        case 23: goto $l938;
        case 39: goto $l1180;
        case 46: goto $l1229;
        case 27: goto $l967;
        case 47: goto $l1234;
        case 13: goto $l796;
        case 7: goto $l719;
        case 24: goto $l944;
        case 30: goto $l1026;
        case 25: goto $l951;
        case 29: goto $l1013;
        case 6: goto $l708;
        case 16: goto $l823;
        case 56: goto $l1472;
        case 14: goto $l803;
        case 55: goto $l1459;
        case 57: goto $l1507;
        case 22: goto $l903;
        case 38: goto $l1145;
        case 54: goto $l1454;
        case 41: goto $l1192;
        case 12: goto $l786;
        case 43: goto $l1207;
        case 32: goto $l1098;
        case 44: goto $l1217;
        case 40: goto $l1185;
        case 17: goto $l836;
        case 21: goto $l890;
        case 45: goto $l1222;
    }
    $l1518:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$434_91522 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1523;
    panda$core$Int64 $tmp1524;
    org$pandalanguage$pandac$IRNode* test1526 = NULL;
    org$pandalanguage$pandac$IRNode* msg1528 = NULL;
    panda$core$String* $returnValue1530;
    panda$core$String* $tmp1531;
    panda$core$String* $tmp1532;
    panda$core$String* $tmp1533;
    panda$core$String* $tmp1534;
    panda$core$String* $tmp1535;
    panda$core$String* $tmp1545;
    panda$core$String* $tmp1546;
    panda$core$String* $tmp1547;
    panda$core$Int64 $tmp1554;
    panda$core$String* $tmp1556;
    panda$core$Int64 $tmp1560;
    org$pandalanguage$pandac$IRNode* left1562 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op1564;
    org$pandalanguage$pandac$IRNode* right1566 = NULL;
    panda$core$String* $tmp1568;
    panda$core$String* $tmp1569;
    panda$core$String* $tmp1570;
    panda$core$String* $tmp1571;
    panda$core$String* $tmp1572;
    panda$core$String* $tmp1573;
    panda$core$String* $tmp1574;
    panda$core$Object* $tmp1579;
    panda$core$Int64 $tmp1589;
    panda$core$Bit bit1591;
    panda$core$String* $tmp1593;
    panda$core$String* $tmp1594;
    panda$core$Int64 $tmp1598;
    panda$collections$ImmutableArray* statements1600 = NULL;
    panda$core$MutableString* result1605 = NULL;
    panda$core$MutableString* $tmp1606;
    panda$core$MutableString* $tmp1607;
    panda$collections$Iterator* Iter$448$171613 = NULL;
    panda$collections$Iterator* $tmp1614;
    panda$collections$Iterator* $tmp1615;
    org$pandalanguage$pandac$IRNode* s1631 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1632;
    panda$core$Object* $tmp1633;
    panda$core$String* $tmp1638;
    panda$core$Char8 $tmp1643;
    panda$core$UInt8 $tmp1644;
    panda$core$String* $tmp1645;
    panda$core$String* $tmp1646;
    panda$core$Int64 $tmp1652;
    panda$collections$ImmutableArray* statements1654 = NULL;
    panda$collections$ImmutableArray* finally1656 = NULL;
    panda$core$MutableString* result1661 = NULL;
    panda$core$MutableString* $tmp1662;
    panda$core$MutableString* $tmp1663;
    panda$collections$Iterator* Iter$455$171669 = NULL;
    panda$collections$Iterator* $tmp1670;
    panda$collections$Iterator* $tmp1671;
    org$pandalanguage$pandac$IRNode* s1687 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1688;
    panda$core$Object* $tmp1689;
    panda$core$String* $tmp1694;
    panda$collections$Iterator* Iter$459$171703 = NULL;
    panda$collections$Iterator* $tmp1704;
    panda$collections$Iterator* $tmp1705;
    org$pandalanguage$pandac$IRNode* s1721 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1722;
    panda$core$Object* $tmp1723;
    panda$core$String* $tmp1728;
    panda$core$Char8 $tmp1733;
    panda$core$UInt8 $tmp1734;
    panda$core$String* $tmp1735;
    panda$core$String* $tmp1736;
    panda$core$Int64 $tmp1742;
    panda$core$String* label1744 = NULL;
    panda$core$String* $tmp1746;
    panda$core$String* $tmp1747;
    panda$core$String* $tmp1748;
    panda$core$String* $tmp1755;
    panda$core$Int64 $tmp1759;
    org$pandalanguage$pandac$MethodRef* m1761 = NULL;
    panda$collections$ImmutableArray* args1763 = NULL;
    panda$core$String* $tmp1765;
    panda$core$String* $tmp1766;
    panda$core$String* $tmp1767;
    panda$core$String* $tmp1768;
    panda$core$String* $tmp1769;
    panda$core$String* $tmp1773;
    panda$core$Int64 $tmp1783;
    org$pandalanguage$pandac$IRNode* value1785 = NULL;
    org$pandalanguage$pandac$Type* type1787 = NULL;
    panda$core$String* $tmp1789;
    panda$core$String* $tmp1790;
    panda$core$String* $tmp1791;
    panda$core$String* $tmp1792;
    panda$core$String* $tmp1793;
    panda$core$Int64 $tmp1803;
    org$pandalanguage$pandac$ChoiceEntry* ce1805 = NULL;
    panda$core$String* $tmp1807;
    panda$core$String* $tmp1808;
    panda$core$Int64 $tmp1812;
    org$pandalanguage$pandac$IRNode* base1814 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce1816 = NULL;
    panda$core$Int64 field1818;
    panda$core$String* $tmp1820;
    panda$core$String* $tmp1821;
    panda$core$String* $tmp1822;
    panda$core$String* $tmp1823;
    panda$core$String* $tmp1824;
    panda$core$String* $tmp1825;
    panda$core$String* $tmp1826;
    panda$core$Object* $tmp1834;
    panda$core$Int64 $tmp1841;
    org$pandalanguage$pandac$Type* type1843 = NULL;
    org$pandalanguage$pandac$IRNode* call1845 = NULL;
    org$pandalanguage$pandac$IRNode* $match$478_171850 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1851;
    panda$core$Int64 $tmp1852;
    panda$collections$ImmutableArray* args1854 = NULL;
    panda$core$String* $tmp1856;
    panda$core$String* $tmp1857;
    panda$core$String* $tmp1858;
    panda$core$String* $tmp1859;
    panda$core$String* $tmp1860;
    panda$core$String* $tmp1864;
    panda$core$Bit $tmp1875;
    panda$core$Int64 $tmp1880;
    org$pandalanguage$pandac$Type* Type1882 = NULL;
    panda$core$String* $tmp1884;
    panda$core$Int64 $tmp1888;
    panda$core$String* label1890 = NULL;
    panda$core$String* $tmp1892;
    panda$core$String* $tmp1893;
    panda$core$String* $tmp1894;
    panda$core$String* $tmp1901;
    panda$core$Int64 $tmp1905;
    org$pandalanguage$pandac$IRNode* target1907 = NULL;
    org$pandalanguage$pandac$IRNode* value1909 = NULL;
    panda$core$String* $tmp1911;
    panda$core$String* $tmp1912;
    panda$core$String* $tmp1913;
    panda$core$String* $tmp1914;
    panda$core$String* $tmp1915;
    panda$core$String* $tmp1916;
    panda$core$String* $tmp1917;
    org$pandalanguage$pandac$Type* $tmp1922;
    panda$core$String* $tmp1933;
    panda$core$String* $tmp1934;
    panda$core$String* $tmp1935;
    panda$core$String* $tmp1936;
    panda$core$String* $tmp1937;
    org$pandalanguage$pandac$Type* $tmp1942;
    panda$core$Int64 $tmp1950;
    panda$core$String* label1952 = NULL;
    panda$collections$ImmutableArray* statements1954 = NULL;
    org$pandalanguage$pandac$IRNode* test1956 = NULL;
    panda$core$MutableString* result1961 = NULL;
    panda$core$MutableString* $tmp1962;
    panda$core$MutableString* $tmp1963;
    panda$core$String* $tmp1965;
    panda$core$String* $tmp1966;
    panda$collections$Iterator* Iter$502$171974 = NULL;
    panda$collections$Iterator* $tmp1975;
    panda$collections$Iterator* $tmp1976;
    org$pandalanguage$pandac$IRNode* s1992 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1993;
    panda$core$Object* $tmp1994;
    panda$core$String* $tmp1999;
    panda$core$String* $tmp2004;
    panda$core$String* $tmp2005;
    panda$core$String* $tmp2010;
    panda$core$String* $tmp2011;
    panda$core$Int64 $tmp2017;
    org$pandalanguage$pandac$IRNode* m2019 = NULL;
    panda$collections$ImmutableArray* args2021 = NULL;
    panda$core$String* $tmp2023;
    panda$core$String* $tmp2024;
    panda$core$String* $tmp2025;
    panda$core$String* $tmp2026;
    panda$core$String* $tmp2027;
    panda$core$String* $tmp2032;
    panda$core$Int64 $tmp2043;
    org$pandalanguage$pandac$IRNode* expr2045 = NULL;
    org$pandalanguage$pandac$IRNode* stmt2047 = NULL;
    panda$core$String* $tmp2049;
    panda$core$String* $tmp2050;
    panda$core$String* $tmp2051;
    panda$core$String* $tmp2052;
    panda$core$String* $tmp2053;
    panda$core$Int64 $tmp2063;
    org$pandalanguage$pandac$IRNode* base2065 = NULL;
    org$pandalanguage$pandac$FieldDecl* field2067 = NULL;
    panda$core$String* $tmp2069;
    panda$core$String* $tmp2070;
    panda$core$String* $tmp2071;
    panda$core$String* $tmp2072;
    panda$core$String* $tmp2073;
    panda$core$Int64 $tmp2083;
    org$pandalanguage$pandac$IRNode* test2085 = NULL;
    panda$collections$ImmutableArray* ifTrue2087 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse2089 = NULL;
    panda$core$MutableString* result2094 = NULL;
    panda$core$MutableString* $tmp2095;
    panda$core$MutableString* $tmp2096;
    panda$core$String* $tmp2098;
    panda$core$String* $tmp2099;
    panda$collections$Iterator* Iter$515$172107 = NULL;
    panda$collections$Iterator* $tmp2108;
    panda$collections$Iterator* $tmp2109;
    org$pandalanguage$pandac$IRNode* s2125 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2126;
    panda$core$Object* $tmp2127;
    panda$core$String* $tmp2132;
    panda$core$Char8 $tmp2137;
    panda$core$UInt8 $tmp2138;
    panda$core$String* $tmp2139;
    panda$core$String* $tmp2140;
    panda$core$String* $tmp2145;
    panda$core$String* $tmp2146;
    panda$core$Int64 $tmp2152;
    panda$core$UInt64 value2154;
    panda$core$String* $tmp2156;
    panda$core$String* $tmp2157;
    panda$core$Int64 $tmp2161;
    org$pandalanguage$pandac$IRNode* value2163 = NULL;
    panda$core$String* $tmp2165;
    panda$core$String* $tmp2166;
    panda$core$String* $tmp2167;
    panda$core$Int64 $tmp2174;
    org$pandalanguage$pandac$IRNode* value2176 = NULL;
    panda$core$String* $tmp2178;
    panda$core$String* $tmp2179;
    panda$core$String* $tmp2180;
    panda$core$Int64 $tmp2187;
    panda$core$String* label2189 = NULL;
    panda$collections$ImmutableArray* statements2191 = NULL;
    panda$core$MutableString* result2196 = NULL;
    panda$core$MutableString* $tmp2197;
    panda$core$MutableString* $tmp2198;
    panda$core$String* $tmp2200;
    panda$core$String* $tmp2201;
    panda$collections$Iterator* Iter$535$172209 = NULL;
    panda$collections$Iterator* $tmp2210;
    panda$collections$Iterator* $tmp2211;
    org$pandalanguage$pandac$IRNode* s2227 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2228;
    panda$core$Object* $tmp2229;
    panda$core$String* $tmp2234;
    panda$core$Char8 $tmp2239;
    panda$core$UInt8 $tmp2240;
    panda$core$String* $tmp2241;
    panda$core$String* $tmp2242;
    panda$core$Int64 $tmp2248;
    org$pandalanguage$pandac$IRNode* value2250 = NULL;
    panda$collections$ImmutableArray* whens2252 = NULL;
    panda$collections$ImmutableArray* other2254 = NULL;
    panda$core$MutableString* result2259 = NULL;
    panda$core$MutableString* $tmp2260;
    panda$core$MutableString* $tmp2261;
    panda$core$String* $tmp2263;
    panda$core$String* $tmp2264;
    panda$collections$Iterator* Iter$542$172272 = NULL;
    panda$collections$Iterator* $tmp2273;
    panda$collections$Iterator* $tmp2274;
    org$pandalanguage$pandac$IRNode* w2290 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2291;
    panda$core$Object* $tmp2292;
    panda$core$String* $tmp2297;
    panda$collections$Iterator* Iter$547$212306 = NULL;
    panda$collections$Iterator* $tmp2307;
    panda$collections$Iterator* $tmp2308;
    org$pandalanguage$pandac$IRNode* s2324 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2325;
    panda$core$Object* $tmp2326;
    panda$core$String* $tmp2331;
    panda$core$Char8 $tmp2336;
    panda$core$UInt8 $tmp2337;
    panda$core$String* $tmp2338;
    panda$core$String* $tmp2339;
    panda$core$Int64 $tmp2345;
    org$pandalanguage$pandac$IRNode* target2347 = NULL;
    org$pandalanguage$pandac$MethodRef* m2349 = NULL;
    panda$core$String* $tmp2351;
    panda$core$String* $tmp2352;
    panda$core$String* $tmp2353;
    panda$core$String* $tmp2354;
    panda$core$String* $tmp2355;
    panda$core$String* $tmp2365;
    panda$core$Int64 $tmp2368;
    panda$core$UInt64 value2370;
    panda$core$String* $tmp2372;
    panda$core$String* $tmp2373;
    panda$core$Object* $tmp2375;
    panda$core$Int64 $tmp2380;
    panda$core$String* $tmp2382;
    panda$core$Int64 $tmp2386;
    org$pandalanguage$pandac$parser$Token$Kind op2388;
    org$pandalanguage$pandac$IRNode* base2390 = NULL;
    panda$core$String* $tmp2392;
    panda$core$String* $tmp2393;
    panda$core$String* $tmp2394;
    panda$core$String* $tmp2395;
    panda$core$String* $tmp2396;
    panda$core$Object* $tmp2397;
    panda$core$Int64 $tmp2408;
    panda$core$String* label2410 = NULL;
    org$pandalanguage$pandac$IRNode* target2412 = NULL;
    org$pandalanguage$pandac$IRNode* list2414 = NULL;
    panda$collections$ImmutableArray* statements2416 = NULL;
    panda$core$MutableString* result2421 = NULL;
    panda$core$MutableString* $tmp2422;
    panda$core$MutableString* $tmp2423;
    panda$core$String* $tmp2425;
    panda$core$String* $tmp2426;
    panda$core$String* $tmp2430;
    panda$core$String* $tmp2431;
    panda$core$String* $tmp2432;
    panda$core$String* $tmp2433;
    panda$collections$Iterator* Iter$570$172444 = NULL;
    panda$collections$Iterator* $tmp2445;
    panda$collections$Iterator* $tmp2446;
    org$pandalanguage$pandac$IRNode* s2462 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2463;
    panda$core$Object* $tmp2464;
    panda$core$String* $tmp2469;
    panda$core$Char8 $tmp2474;
    panda$core$UInt8 $tmp2475;
    panda$core$String* $tmp2476;
    panda$core$String* $tmp2477;
    panda$core$Int64 $tmp2483;
    panda$core$Real64 value2485;
    panda$core$String* $tmp2487;
    panda$core$String* $tmp2488;
    panda$core$Int64 $tmp2492;
    org$pandalanguage$pandac$IRNode* value2494 = NULL;
    panda$core$String* $tmp2496;
    panda$core$String* $tmp2497;
    panda$core$String* $tmp2498;
    panda$core$String* $tmp2505;
    panda$core$Int64 $tmp2509;
    org$pandalanguage$pandac$Type* type2511 = NULL;
    panda$core$Int64 id2513;
    panda$core$String* $tmp2515;
    panda$core$String* $tmp2516;
    panda$core$String* $tmp2517;
    panda$core$Object* $tmp2519;
    panda$core$Int64 $tmp2526;
    org$pandalanguage$pandac$IRNode* base2528 = NULL;
    panda$core$Int64 id2530;
    panda$core$String* $tmp2532;
    panda$core$String* $tmp2533;
    panda$core$String* $tmp2534;
    panda$core$String* $tmp2535;
    panda$core$String* $tmp2536;
    panda$core$Object* $tmp2538;
    panda$core$Int64 $tmp2548;
    panda$core$String* $tmp2550;
    panda$core$Int64 $tmp2554;
    panda$core$String* str2556 = NULL;
    panda$core$String* $tmp2558;
    panda$core$String* $tmp2559;
    panda$core$Int64 $tmp2564;
    panda$core$String* $tmp2566;
    panda$core$Int64 $tmp2570;
    org$pandalanguage$pandac$IRNode* test2572 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue2574 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse2576 = NULL;
    panda$core$String* $tmp2578;
    panda$core$String* $tmp2579;
    panda$core$String* $tmp2580;
    panda$core$String* $tmp2581;
    panda$core$String* $tmp2582;
    panda$core$String* $tmp2583;
    panda$core$String* $tmp2584;
    panda$core$Int64 $tmp2597;
    org$pandalanguage$pandac$Type* type2599 = NULL;
    panda$core$String* $tmp2601;
    panda$core$String* $tmp2602;
    panda$core$Int64 $tmp2606;
    panda$core$String* name2608 = NULL;
    panda$core$String* $tmp2610;
    panda$core$Int64 $tmp2613;
    org$pandalanguage$pandac$IRNode* base2615 = NULL;
    panda$collections$ImmutableArray* args2617 = NULL;
    panda$core$String* $tmp2619;
    panda$core$String* $tmp2620;
    panda$core$String* $tmp2621;
    panda$core$String* $tmp2622;
    panda$core$String* $tmp2623;
    panda$core$String* $tmp2628;
    panda$core$Int64 $tmp2638;
    panda$collections$ImmutableArray* params2640 = NULL;
    org$pandalanguage$pandac$ASTNode* body2642 = NULL;
    panda$core$String* $tmp2644;
    panda$core$String* $tmp2645;
    panda$core$String* $tmp2646;
    panda$core$String* $tmp2647;
    panda$core$String* $tmp2648;
    panda$core$String* $tmp2650;
    panda$core$Int64 $tmp2663;
    org$pandalanguage$pandac$IRNode* target2665 = NULL;
    panda$collections$ImmutableArray* methods2667 = NULL;
    panda$collections$ImmutableArray* args2669 = NULL;
    panda$core$String* $tmp2671;
    panda$core$String* $tmp2672;
    panda$core$String* $tmp2673;
    panda$core$String* $tmp2674;
    panda$core$String* $tmp2675;
    panda$core$String* $tmp2676;
    panda$core$String* $tmp2677;
    panda$core$Object* $tmp2682;
    panda$core$Int64 $tmp2683;
    panda$core$String* $tmp2688;
    panda$core$String* $tmp2698;
    panda$core$String* $tmp2699;
    panda$core$String* $tmp2700;
    panda$core$String* $tmp2701;
    panda$core$String* $tmp2702;
    panda$core$Object* $tmp2704;
    panda$core$Int64 $tmp2705;
    panda$core$String* $tmp2710;
    panda$core$Int64 $tmp2720;
    org$pandalanguage$pandac$IRNode* target2722 = NULL;
    panda$collections$ImmutableArray* methods2724 = NULL;
    panda$core$String* $tmp2726;
    panda$core$String* $tmp2727;
    panda$core$String* $tmp2728;
    panda$core$String* $tmp2729;
    panda$core$String* $tmp2730;
    panda$core$Object* $tmp2735;
    panda$core$Int64 $tmp2736;
    panda$core$String* $tmp2743;
    panda$core$String* $tmp2744;
    panda$core$String* $tmp2745;
    panda$core$Object* $tmp2746;
    panda$core$Int64 $tmp2747;
    panda$core$Int64 $tmp2754;
    org$pandalanguage$pandac$IRNode* start2756 = NULL;
    org$pandalanguage$pandac$IRNode* end2758 = NULL;
    panda$core$Bit inclusive2760;
    org$pandalanguage$pandac$IRNode* step2762 = NULL;
    panda$core$MutableString* result2767 = NULL;
    panda$core$MutableString* $tmp2768;
    panda$core$MutableString* $tmp2769;
    panda$core$String* $tmp2773;
    panda$core$String* $tmp2774;
    panda$core$String* $tmp2779;
    panda$core$String* $tmp2780;
    panda$core$Int64 $tmp2786;
    org$pandalanguage$pandac$Variable$Kind kind2788;
    panda$collections$ImmutableArray* decls2790 = NULL;
    panda$core$MutableString* result2795 = NULL;
    panda$core$MutableString* $tmp2796;
    panda$core$MutableString* $tmp2797;
    org$pandalanguage$pandac$Variable$Kind $match$636_172799;
    panda$core$Int64 $tmp2800;
    panda$core$Int64 $tmp2803;
    panda$core$Int64 $tmp2806;
    panda$core$Int64 $tmp2809;
    panda$core$String* $tmp2812;
    panda$core$String* $tmp2817;
    panda$core$String* $tmp2818;
    panda$core$Int64 $tmp2824;
    org$pandalanguage$pandac$Variable* variable2826 = NULL;
    panda$core$String* $tmp2828;
    panda$core$Int64 $tmp2831;
    panda$collections$ImmutableArray* tests2833 = NULL;
    panda$collections$ImmutableArray* statements2835 = NULL;
    panda$core$String* $tmp2837;
    panda$core$String* $tmp2838;
    panda$core$String* $tmp2839;
    panda$core$String* $tmp2840;
    panda$core$String* $tmp2841;
    panda$core$String* $tmp2843;
    panda$core$String* $tmp2851;
    panda$core$Int64 $tmp2862;
    panda$core$String* label2864 = NULL;
    org$pandalanguage$pandac$IRNode* test2866 = NULL;
    panda$collections$ImmutableArray* statements2868 = NULL;
    panda$core$MutableString* result2873 = NULL;
    panda$core$MutableString* $tmp2874;
    panda$core$MutableString* $tmp2875;
    panda$core$String* $tmp2877;
    panda$core$String* $tmp2878;
    panda$core$String* $tmp2882;
    panda$core$String* $tmp2883;
    panda$collections$Iterator* Iter$654$172891 = NULL;
    panda$collections$Iterator* $tmp2892;
    panda$collections$Iterator* $tmp2893;
    org$pandalanguage$pandac$IRNode* s2909 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2910;
    panda$core$Object* $tmp2911;
    panda$core$String* $tmp2916;
    panda$core$Char8 $tmp2921;
    panda$core$UInt8 $tmp2922;
    panda$core$String* $tmp2923;
    panda$core$String* $tmp2924;
    panda$core$Bit $tmp2930;
    int $tmp1521;
    {
        $tmp1523 = self;
        $match$434_91522 = $tmp1523;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1523));
        panda$core$Int64$init$builtin_int64(&$tmp1524, 0);
        panda$core$Bit $tmp1525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp1524);
        if ($tmp1525.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1527 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 16));
            test1526 = *$tmp1527;
            org$pandalanguage$pandac$IRNode** $tmp1529 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 24));
            msg1528 = *$tmp1529;
            if (((panda$core$Bit) { msg1528 != NULL }).value) {
            {
                panda$core$String* $tmp1537 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1536, ((panda$core$Object*) test1526));
                $tmp1535 = $tmp1537;
                panda$core$String* $tmp1539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1535, &$s1538);
                $tmp1534 = $tmp1539;
                panda$core$String* $tmp1540 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1534, ((panda$core$Object*) msg1528));
                $tmp1533 = $tmp1540;
                panda$core$String* $tmp1542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1533, &$s1541);
                $tmp1532 = $tmp1542;
                $tmp1531 = $tmp1532;
                $returnValue1530 = $tmp1531;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1531));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1532));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1533));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1534));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1535));
                $tmp1521 = 0;
                goto $l1519;
                $l1543:;
                return $returnValue1530;
            }
            }
            panda$core$String* $tmp1549 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1548, ((panda$core$Object*) test1526));
            $tmp1547 = $tmp1549;
            panda$core$String* $tmp1551 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1547, &$s1550);
            $tmp1546 = $tmp1551;
            $tmp1545 = $tmp1546;
            $returnValue1530 = $tmp1545;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1545));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1546));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1547));
            $tmp1521 = 1;
            goto $l1519;
            $l1552:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1554, 1);
        panda$core$Bit $tmp1555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp1554);
        if ($tmp1555.value) {
        {
            $tmp1556 = &$s1557;
            $returnValue1530 = $tmp1556;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1556));
            $tmp1521 = 2;
            goto $l1519;
            $l1558:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1560, 2);
        panda$core$Bit $tmp1561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp1560);
        if ($tmp1561.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1563 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 24));
            left1562 = *$tmp1563;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1565 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$434_91522->$data + 32));
            op1564 = *$tmp1565;
            org$pandalanguage$pandac$IRNode** $tmp1567 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 40));
            right1566 = *$tmp1567;
            panda$core$String* $tmp1576 = (($fn1575) left1562->$class->vtable[0])(left1562);
            $tmp1574 = $tmp1576;
            panda$core$String* $tmp1578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1574, &$s1577);
            $tmp1573 = $tmp1578;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1580;
            $tmp1580 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp1580->value = op1564;
            $tmp1579 = ((panda$core$Object*) $tmp1580);
            panda$core$String* $tmp1581 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1573, $tmp1579);
            $tmp1572 = $tmp1581;
            panda$core$String* $tmp1583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1572, &$s1582);
            $tmp1571 = $tmp1583;
            panda$core$String* $tmp1584 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1571, ((panda$core$Object*) right1566));
            $tmp1570 = $tmp1584;
            panda$core$String* $tmp1586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1570, &$s1585);
            $tmp1569 = $tmp1586;
            $tmp1568 = $tmp1569;
            $returnValue1530 = $tmp1568;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1568));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1569));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1570));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1571));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1572));
            panda$core$Panda$unref$panda$core$Object($tmp1579);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1573));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1574));
            $tmp1521 = 3;
            goto $l1519;
            $l1587:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1589, 3);
        panda$core$Bit $tmp1590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp1589);
        if ($tmp1590.value) {
        {
            panda$core$Bit* $tmp1592 = ((panda$core$Bit*) ((char*) $match$434_91522->$data + 24));
            bit1591 = *$tmp1592;
            panda$core$String* $tmp1595 = panda$core$Bit$convert$R$panda$core$String(bit1591);
            $tmp1594 = $tmp1595;
            $tmp1593 = $tmp1594;
            $returnValue1530 = $tmp1593;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1593));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1594));
            $tmp1521 = 4;
            goto $l1519;
            $l1596:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1598, 4);
        panda$core$Bit $tmp1599 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp1598);
        if ($tmp1599.value) {
        {
            panda$collections$ImmutableArray** $tmp1601 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 16));
            statements1600 = *$tmp1601;
            int $tmp1604;
            {
                panda$core$MutableString* $tmp1608 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1608, &$s1609);
                $tmp1607 = $tmp1608;
                $tmp1606 = $tmp1607;
                result1605 = $tmp1606;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1606));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1607));
                {
                    int $tmp1612;
                    {
                        ITable* $tmp1616 = ((panda$collections$Iterable*) statements1600)->$class->itable;
                        while ($tmp1616->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1616 = $tmp1616->next;
                        }
                        $fn1618 $tmp1617 = $tmp1616->methods[0];
                        panda$collections$Iterator* $tmp1619 = $tmp1617(((panda$collections$Iterable*) statements1600));
                        $tmp1615 = $tmp1619;
                        $tmp1614 = $tmp1615;
                        Iter$448$171613 = $tmp1614;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1614));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1615));
                        $l1620:;
                        ITable* $tmp1623 = Iter$448$171613->$class->itable;
                        while ($tmp1623->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1623 = $tmp1623->next;
                        }
                        $fn1625 $tmp1624 = $tmp1623->methods[0];
                        panda$core$Bit $tmp1626 = $tmp1624(Iter$448$171613);
                        panda$core$Bit $tmp1627 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1626);
                        bool $tmp1622 = $tmp1627.value;
                        if (!$tmp1622) goto $l1621;
                        {
                            int $tmp1630;
                            {
                                ITable* $tmp1634 = Iter$448$171613->$class->itable;
                                while ($tmp1634->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1634 = $tmp1634->next;
                                }
                                $fn1636 $tmp1635 = $tmp1634->methods[1];
                                panda$core$Object* $tmp1637 = $tmp1635(Iter$448$171613);
                                $tmp1633 = $tmp1637;
                                $tmp1632 = ((org$pandalanguage$pandac$IRNode*) $tmp1633);
                                s1631 = $tmp1632;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1632));
                                panda$core$Panda$unref$panda$core$Object($tmp1633);
                                panda$core$String* $tmp1640 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1631), &$s1639);
                                $tmp1638 = $tmp1640;
                                panda$core$MutableString$append$panda$core$String(result1605, $tmp1638);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1638));
                            }
                            $tmp1630 = -1;
                            goto $l1628;
                            $l1628:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1631));
                            s1631 = NULL;
                            switch ($tmp1630) {
                                case -1: goto $l1641;
                            }
                            $l1641:;
                        }
                        goto $l1620;
                        $l1621:;
                    }
                    $tmp1612 = -1;
                    goto $l1610;
                    $l1610:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$448$171613));
                    Iter$448$171613 = NULL;
                    switch ($tmp1612) {
                        case -1: goto $l1642;
                    }
                    $l1642:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp1644, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp1643, $tmp1644);
                panda$core$MutableString$append$panda$core$Char8(result1605, $tmp1643);
                panda$core$String* $tmp1647 = panda$core$MutableString$finish$R$panda$core$String(result1605);
                $tmp1646 = $tmp1647;
                $tmp1645 = $tmp1646;
                $returnValue1530 = $tmp1645;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1645));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1646));
                $tmp1604 = 0;
                goto $l1602;
                $l1648:;
                $tmp1521 = 5;
                goto $l1519;
                $l1649:;
                return $returnValue1530;
            }
            $l1602:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1605));
            result1605 = NULL;
            switch ($tmp1604) {
                case 0: goto $l1648;
            }
            $l1651:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1652, 5);
        panda$core$Bit $tmp1653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp1652);
        if ($tmp1653.value) {
        {
            panda$collections$ImmutableArray** $tmp1655 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 16));
            statements1654 = *$tmp1655;
            panda$collections$ImmutableArray** $tmp1657 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 24));
            finally1656 = *$tmp1657;
            int $tmp1660;
            {
                panda$core$MutableString* $tmp1664 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1664, &$s1665);
                $tmp1663 = $tmp1664;
                $tmp1662 = $tmp1663;
                result1661 = $tmp1662;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1662));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1663));
                {
                    int $tmp1668;
                    {
                        ITable* $tmp1672 = ((panda$collections$Iterable*) statements1654)->$class->itable;
                        while ($tmp1672->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1672 = $tmp1672->next;
                        }
                        $fn1674 $tmp1673 = $tmp1672->methods[0];
                        panda$collections$Iterator* $tmp1675 = $tmp1673(((panda$collections$Iterable*) statements1654));
                        $tmp1671 = $tmp1675;
                        $tmp1670 = $tmp1671;
                        Iter$455$171669 = $tmp1670;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1670));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1671));
                        $l1676:;
                        ITable* $tmp1679 = Iter$455$171669->$class->itable;
                        while ($tmp1679->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1679 = $tmp1679->next;
                        }
                        $fn1681 $tmp1680 = $tmp1679->methods[0];
                        panda$core$Bit $tmp1682 = $tmp1680(Iter$455$171669);
                        panda$core$Bit $tmp1683 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1682);
                        bool $tmp1678 = $tmp1683.value;
                        if (!$tmp1678) goto $l1677;
                        {
                            int $tmp1686;
                            {
                                ITable* $tmp1690 = Iter$455$171669->$class->itable;
                                while ($tmp1690->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1690 = $tmp1690->next;
                                }
                                $fn1692 $tmp1691 = $tmp1690->methods[1];
                                panda$core$Object* $tmp1693 = $tmp1691(Iter$455$171669);
                                $tmp1689 = $tmp1693;
                                $tmp1688 = ((org$pandalanguage$pandac$IRNode*) $tmp1689);
                                s1687 = $tmp1688;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1688));
                                panda$core$Panda$unref$panda$core$Object($tmp1689);
                                panda$core$String* $tmp1696 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1687), &$s1695);
                                $tmp1694 = $tmp1696;
                                panda$core$MutableString$append$panda$core$String(result1661, $tmp1694);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1694));
                            }
                            $tmp1686 = -1;
                            goto $l1684;
                            $l1684:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1687));
                            s1687 = NULL;
                            switch ($tmp1686) {
                                case -1: goto $l1697;
                            }
                            $l1697:;
                        }
                        goto $l1676;
                        $l1677:;
                    }
                    $tmp1668 = -1;
                    goto $l1666;
                    $l1666:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$455$171669));
                    Iter$455$171669 = NULL;
                    switch ($tmp1668) {
                        case -1: goto $l1698;
                    }
                    $l1698:;
                }
                panda$core$MutableString$append$panda$core$String(result1661, &$s1699);
                {
                    int $tmp1702;
                    {
                        ITable* $tmp1706 = ((panda$collections$Iterable*) finally1656)->$class->itable;
                        while ($tmp1706->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1706 = $tmp1706->next;
                        }
                        $fn1708 $tmp1707 = $tmp1706->methods[0];
                        panda$collections$Iterator* $tmp1709 = $tmp1707(((panda$collections$Iterable*) finally1656));
                        $tmp1705 = $tmp1709;
                        $tmp1704 = $tmp1705;
                        Iter$459$171703 = $tmp1704;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1704));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1705));
                        $l1710:;
                        ITable* $tmp1713 = Iter$459$171703->$class->itable;
                        while ($tmp1713->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1713 = $tmp1713->next;
                        }
                        $fn1715 $tmp1714 = $tmp1713->methods[0];
                        panda$core$Bit $tmp1716 = $tmp1714(Iter$459$171703);
                        panda$core$Bit $tmp1717 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1716);
                        bool $tmp1712 = $tmp1717.value;
                        if (!$tmp1712) goto $l1711;
                        {
                            int $tmp1720;
                            {
                                ITable* $tmp1724 = Iter$459$171703->$class->itable;
                                while ($tmp1724->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1724 = $tmp1724->next;
                                }
                                $fn1726 $tmp1725 = $tmp1724->methods[1];
                                panda$core$Object* $tmp1727 = $tmp1725(Iter$459$171703);
                                $tmp1723 = $tmp1727;
                                $tmp1722 = ((org$pandalanguage$pandac$IRNode*) $tmp1723);
                                s1721 = $tmp1722;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1722));
                                panda$core$Panda$unref$panda$core$Object($tmp1723);
                                panda$core$String* $tmp1730 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1721), &$s1729);
                                $tmp1728 = $tmp1730;
                                panda$core$MutableString$append$panda$core$String(result1661, $tmp1728);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1728));
                            }
                            $tmp1720 = -1;
                            goto $l1718;
                            $l1718:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1721));
                            s1721 = NULL;
                            switch ($tmp1720) {
                                case -1: goto $l1731;
                            }
                            $l1731:;
                        }
                        goto $l1710;
                        $l1711:;
                    }
                    $tmp1702 = -1;
                    goto $l1700;
                    $l1700:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$459$171703));
                    Iter$459$171703 = NULL;
                    switch ($tmp1702) {
                        case -1: goto $l1732;
                    }
                    $l1732:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp1734, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp1733, $tmp1734);
                panda$core$MutableString$append$panda$core$Char8(result1661, $tmp1733);
                panda$core$String* $tmp1737 = panda$core$MutableString$finish$R$panda$core$String(result1661);
                $tmp1736 = $tmp1737;
                $tmp1735 = $tmp1736;
                $returnValue1530 = $tmp1735;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1735));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1736));
                $tmp1660 = 0;
                goto $l1658;
                $l1738:;
                $tmp1521 = 6;
                goto $l1519;
                $l1739:;
                return $returnValue1530;
            }
            $l1658:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1661));
            result1661 = NULL;
            switch ($tmp1660) {
                case 0: goto $l1738;
            }
            $l1741:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1742, 6);
        panda$core$Bit $tmp1743 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp1742);
        if ($tmp1743.value) {
        {
            panda$core$String** $tmp1745 = ((panda$core$String**) ((char*) $match$434_91522->$data + 16));
            label1744 = *$tmp1745;
            if (((panda$core$Bit) { label1744 != NULL }).value) {
            {
                panda$core$String* $tmp1750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1749, label1744);
                $tmp1748 = $tmp1750;
                panda$core$String* $tmp1752 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1748, &$s1751);
                $tmp1747 = $tmp1752;
                $tmp1746 = $tmp1747;
                $returnValue1530 = $tmp1746;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1746));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1747));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1748));
                $tmp1521 = 7;
                goto $l1519;
                $l1753:;
                return $returnValue1530;
            }
            }
            $tmp1755 = &$s1756;
            $returnValue1530 = $tmp1755;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1755));
            $tmp1521 = 8;
            goto $l1519;
            $l1757:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1759, 7);
        panda$core$Bit $tmp1760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp1759);
        if ($tmp1760.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp1762 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$434_91522->$data + 24));
            m1761 = *$tmp1762;
            panda$collections$ImmutableArray** $tmp1764 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 32));
            args1763 = *$tmp1764;
            panda$core$String* $tmp1770 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) m1761->value)->name);
            $tmp1769 = $tmp1770;
            panda$core$String* $tmp1772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1769, &$s1771);
            $tmp1768 = $tmp1772;
            ITable* $tmp1774 = ((panda$collections$ListView*) args1763)->$class->itable;
            while ($tmp1774->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1774 = $tmp1774->next;
            }
            $fn1776 $tmp1775 = $tmp1774->methods[4];
            panda$core$String* $tmp1777 = $tmp1775(((panda$collections$ListView*) args1763));
            $tmp1773 = $tmp1777;
            panda$core$String* $tmp1778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1768, $tmp1773);
            $tmp1767 = $tmp1778;
            panda$core$String* $tmp1780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1767, &$s1779);
            $tmp1766 = $tmp1780;
            $tmp1765 = $tmp1766;
            $returnValue1530 = $tmp1765;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1765));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1766));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1767));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1773));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1768));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1769));
            $tmp1521 = 9;
            goto $l1519;
            $l1781:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1783, 8);
        panda$core$Bit $tmp1784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp1783);
        if ($tmp1784.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1786 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 16));
            value1785 = *$tmp1786;
            org$pandalanguage$pandac$Type** $tmp1788 = ((org$pandalanguage$pandac$Type**) ((char*) $match$434_91522->$data + 24));
            type1787 = *$tmp1788;
            panda$core$String* $tmp1795 = (($fn1794) value1785->$class->vtable[0])(value1785);
            $tmp1793 = $tmp1795;
            panda$core$String* $tmp1797 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1793, &$s1796);
            $tmp1792 = $tmp1797;
            panda$core$String* $tmp1798 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1792, ((panda$core$Object*) type1787));
            $tmp1791 = $tmp1798;
            panda$core$String* $tmp1800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1791, &$s1799);
            $tmp1790 = $tmp1800;
            $tmp1789 = $tmp1790;
            $returnValue1530 = $tmp1789;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1789));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1790));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1791));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1792));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1793));
            $tmp1521 = 10;
            goto $l1519;
            $l1801:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1803, 9);
        panda$core$Bit $tmp1804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp1803);
        if ($tmp1804.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp1806 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$434_91522->$data + 16));
            ce1805 = *$tmp1806;
            panda$core$String* $tmp1809 = org$pandalanguage$pandac$ChoiceEntry$convert$R$panda$core$String(ce1805);
            $tmp1808 = $tmp1809;
            $tmp1807 = $tmp1808;
            $returnValue1530 = $tmp1807;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1807));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1808));
            $tmp1521 = 11;
            goto $l1519;
            $l1810:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1812, 10);
        panda$core$Bit $tmp1813 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp1812);
        if ($tmp1813.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1815 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 16));
            base1814 = *$tmp1815;
            org$pandalanguage$pandac$ChoiceEntry** $tmp1817 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$434_91522->$data + 24));
            ce1816 = *$tmp1817;
            panda$core$Int64* $tmp1819 = ((panda$core$Int64*) ((char*) $match$434_91522->$data + 32));
            field1818 = *$tmp1819;
            panda$core$String* $tmp1828 = (($fn1827) base1814->$class->vtable[0])(base1814);
            $tmp1826 = $tmp1828;
            panda$core$String* $tmp1830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1826, &$s1829);
            $tmp1825 = $tmp1830;
            panda$core$String* $tmp1831 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1825, ((panda$core$Object*) ce1816));
            $tmp1824 = $tmp1831;
            panda$core$String* $tmp1833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1824, &$s1832);
            $tmp1823 = $tmp1833;
            panda$core$Int64$wrapper* $tmp1835;
            $tmp1835 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1835->value = field1818;
            $tmp1834 = ((panda$core$Object*) $tmp1835);
            panda$core$String* $tmp1836 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1823, $tmp1834);
            $tmp1822 = $tmp1836;
            panda$core$String* $tmp1838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1822, &$s1837);
            $tmp1821 = $tmp1838;
            $tmp1820 = $tmp1821;
            $returnValue1530 = $tmp1820;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1820));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1821));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1822));
            panda$core$Panda$unref$panda$core$Object($tmp1834);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1823));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1824));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1825));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1826));
            $tmp1521 = 12;
            goto $l1519;
            $l1839:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1841, 11);
        panda$core$Bit $tmp1842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp1841);
        if ($tmp1842.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1844 = ((org$pandalanguage$pandac$Type**) ((char*) $match$434_91522->$data + 16));
            type1843 = *$tmp1844;
            org$pandalanguage$pandac$IRNode** $tmp1846 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 24));
            call1845 = *$tmp1846;
            int $tmp1849;
            {
                $tmp1851 = call1845;
                $match$478_171850 = $tmp1851;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1851));
                panda$core$Int64$init$builtin_int64(&$tmp1852, 7);
                panda$core$Bit $tmp1853 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$478_171850->$rawValue, $tmp1852);
                if ($tmp1853.value) {
                {
                    panda$collections$ImmutableArray** $tmp1855 = ((panda$collections$ImmutableArray**) ((char*) $match$478_171850->$data + 32));
                    args1854 = *$tmp1855;
                    panda$core$String* $tmp1861 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type1843);
                    $tmp1860 = $tmp1861;
                    panda$core$String* $tmp1863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1860, &$s1862);
                    $tmp1859 = $tmp1863;
                    ITable* $tmp1865 = ((panda$collections$ListView*) args1854)->$class->itable;
                    while ($tmp1865->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp1865 = $tmp1865->next;
                    }
                    $fn1867 $tmp1866 = $tmp1865->methods[4];
                    panda$core$String* $tmp1868 = $tmp1866(((panda$collections$ListView*) args1854));
                    $tmp1864 = $tmp1868;
                    panda$core$String* $tmp1869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1859, $tmp1864);
                    $tmp1858 = $tmp1869;
                    panda$core$String* $tmp1871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1858, &$s1870);
                    $tmp1857 = $tmp1871;
                    $tmp1856 = $tmp1857;
                    $returnValue1530 = $tmp1856;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1856));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1857));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1858));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1864));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1859));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1860));
                    $tmp1849 = 0;
                    goto $l1847;
                    $l1872:;
                    $tmp1521 = 13;
                    goto $l1519;
                    $l1873:;
                    return $returnValue1530;
                }
                }
                else {
                {
                    panda$core$Bit$init$builtin_bit(&$tmp1875, false);
                    if ($tmp1875.value) goto $l1876; else goto $l1877;
                    $l1877:;
                    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s1878, (panda$core$Int64) { 482 });
                    abort();
                    $l1876:;
                }
                }
            }
            $tmp1849 = -1;
            goto $l1847;
            $l1847:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1851));
            switch ($tmp1849) {
                case -1: goto $l1879;
                case 0: goto $l1872;
            }
            $l1879:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1880, 12);
        panda$core$Bit $tmp1881 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp1880);
        if ($tmp1881.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1883 = ((org$pandalanguage$pandac$Type**) ((char*) $match$434_91522->$data + 16));
            Type1882 = *$tmp1883;
            $tmp1884 = &$s1885;
            $returnValue1530 = $tmp1884;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1884));
            $tmp1521 = 14;
            goto $l1519;
            $l1886:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1888, 13);
        panda$core$Bit $tmp1889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp1888);
        if ($tmp1889.value) {
        {
            panda$core$String** $tmp1891 = ((panda$core$String**) ((char*) $match$434_91522->$data + 16));
            label1890 = *$tmp1891;
            if (((panda$core$Bit) { label1890 != NULL }).value) {
            {
                panda$core$String* $tmp1896 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1895, label1890);
                $tmp1894 = $tmp1896;
                panda$core$String* $tmp1898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1894, &$s1897);
                $tmp1893 = $tmp1898;
                $tmp1892 = $tmp1893;
                $returnValue1530 = $tmp1892;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1892));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1893));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1894));
                $tmp1521 = 15;
                goto $l1519;
                $l1899:;
                return $returnValue1530;
            }
            }
            $tmp1901 = &$s1902;
            $returnValue1530 = $tmp1901;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1901));
            $tmp1521 = 16;
            goto $l1519;
            $l1903:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1905, 14);
        panda$core$Bit $tmp1906 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp1905);
        if ($tmp1906.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1908 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 0));
            target1907 = *$tmp1908;
            org$pandalanguage$pandac$IRNode** $tmp1910 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 8));
            value1909 = *$tmp1910;
            if (((panda$core$Bit) { value1909 != NULL }).value) {
            {
                panda$core$String* $tmp1919 = (($fn1918) target1907->$class->vtable[0])(target1907);
                $tmp1917 = $tmp1919;
                panda$core$String* $tmp1921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1917, &$s1920);
                $tmp1916 = $tmp1921;
                org$pandalanguage$pandac$Type* $tmp1924 = (($fn1923) target1907->$class->vtable[2])(target1907);
                $tmp1922 = $tmp1924;
                panda$core$String* $tmp1925 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1916, ((panda$core$Object*) $tmp1922));
                $tmp1915 = $tmp1925;
                panda$core$String* $tmp1927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1915, &$s1926);
                $tmp1914 = $tmp1927;
                panda$core$String* $tmp1928 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1914, ((panda$core$Object*) value1909));
                $tmp1913 = $tmp1928;
                panda$core$String* $tmp1930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1913, &$s1929);
                $tmp1912 = $tmp1930;
                $tmp1911 = $tmp1912;
                $returnValue1530 = $tmp1911;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1911));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1912));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1913));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1914));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1915));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1922));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1916));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1917));
                $tmp1521 = 17;
                goto $l1519;
                $l1931:;
                return $returnValue1530;
            }
            }
            panda$core$String* $tmp1939 = (($fn1938) target1907->$class->vtable[0])(target1907);
            $tmp1937 = $tmp1939;
            panda$core$String* $tmp1941 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1937, &$s1940);
            $tmp1936 = $tmp1941;
            org$pandalanguage$pandac$Type* $tmp1944 = (($fn1943) target1907->$class->vtable[2])(target1907);
            $tmp1942 = $tmp1944;
            panda$core$String* $tmp1945 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1936, ((panda$core$Object*) $tmp1942));
            $tmp1935 = $tmp1945;
            panda$core$String* $tmp1947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1935, &$s1946);
            $tmp1934 = $tmp1947;
            $tmp1933 = $tmp1934;
            $returnValue1530 = $tmp1933;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1933));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1934));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1935));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1942));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1936));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1937));
            $tmp1521 = 18;
            goto $l1519;
            $l1948:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1950, 15);
        panda$core$Bit $tmp1951 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp1950);
        if ($tmp1951.value) {
        {
            panda$core$String** $tmp1953 = ((panda$core$String**) ((char*) $match$434_91522->$data + 16));
            label1952 = *$tmp1953;
            panda$collections$ImmutableArray** $tmp1955 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 24));
            statements1954 = *$tmp1955;
            org$pandalanguage$pandac$IRNode** $tmp1957 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 32));
            test1956 = *$tmp1957;
            int $tmp1960;
            {
                panda$core$MutableString* $tmp1964 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1964);
                $tmp1963 = $tmp1964;
                $tmp1962 = $tmp1963;
                result1961 = $tmp1962;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1962));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1963));
                if (((panda$core$Bit) { label1952 != NULL }).value) {
                {
                    panda$core$String* $tmp1967 = panda$core$String$convert$R$panda$core$String(label1952);
                    $tmp1966 = $tmp1967;
                    panda$core$String* $tmp1969 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1966, &$s1968);
                    $tmp1965 = $tmp1969;
                    panda$core$MutableString$append$panda$core$String(result1961, $tmp1965);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1965));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1966));
                }
                }
                panda$core$MutableString$append$panda$core$String(result1961, &$s1970);
                {
                    int $tmp1973;
                    {
                        ITable* $tmp1977 = ((panda$collections$Iterable*) statements1954)->$class->itable;
                        while ($tmp1977->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1977 = $tmp1977->next;
                        }
                        $fn1979 $tmp1978 = $tmp1977->methods[0];
                        panda$collections$Iterator* $tmp1980 = $tmp1978(((panda$collections$Iterable*) statements1954));
                        $tmp1976 = $tmp1980;
                        $tmp1975 = $tmp1976;
                        Iter$502$171974 = $tmp1975;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1975));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1976));
                        $l1981:;
                        ITable* $tmp1984 = Iter$502$171974->$class->itable;
                        while ($tmp1984->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1984 = $tmp1984->next;
                        }
                        $fn1986 $tmp1985 = $tmp1984->methods[0];
                        panda$core$Bit $tmp1987 = $tmp1985(Iter$502$171974);
                        panda$core$Bit $tmp1988 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1987);
                        bool $tmp1983 = $tmp1988.value;
                        if (!$tmp1983) goto $l1982;
                        {
                            int $tmp1991;
                            {
                                ITable* $tmp1995 = Iter$502$171974->$class->itable;
                                while ($tmp1995->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1995 = $tmp1995->next;
                                }
                                $fn1997 $tmp1996 = $tmp1995->methods[1];
                                panda$core$Object* $tmp1998 = $tmp1996(Iter$502$171974);
                                $tmp1994 = $tmp1998;
                                $tmp1993 = ((org$pandalanguage$pandac$IRNode*) $tmp1994);
                                s1992 = $tmp1993;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1993));
                                panda$core$Panda$unref$panda$core$Object($tmp1994);
                                panda$core$String* $tmp2001 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1992), &$s2000);
                                $tmp1999 = $tmp2001;
                                panda$core$MutableString$append$panda$core$String(result1961, $tmp1999);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1999));
                            }
                            $tmp1991 = -1;
                            goto $l1989;
                            $l1989:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1992));
                            s1992 = NULL;
                            switch ($tmp1991) {
                                case -1: goto $l2002;
                            }
                            $l2002:;
                        }
                        goto $l1981;
                        $l1982:;
                    }
                    $tmp1973 = -1;
                    goto $l1971;
                    $l1971:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$502$171974));
                    Iter$502$171974 = NULL;
                    switch ($tmp1973) {
                        case -1: goto $l2003;
                    }
                    $l2003:;
                }
                panda$core$String* $tmp2007 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2006, ((panda$core$Object*) test1956));
                $tmp2005 = $tmp2007;
                panda$core$String* $tmp2009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2005, &$s2008);
                $tmp2004 = $tmp2009;
                panda$core$MutableString$append$panda$core$String(result1961, $tmp2004);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2004));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2005));
                panda$core$String* $tmp2012 = panda$core$MutableString$finish$R$panda$core$String(result1961);
                $tmp2011 = $tmp2012;
                $tmp2010 = $tmp2011;
                $returnValue1530 = $tmp2010;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2010));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2011));
                $tmp1960 = 0;
                goto $l1958;
                $l2013:;
                $tmp1521 = 19;
                goto $l1519;
                $l2014:;
                return $returnValue1530;
            }
            $l1958:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1961));
            result1961 = NULL;
            switch ($tmp1960) {
                case 0: goto $l2013;
            }
            $l2016:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2017, 16);
        panda$core$Bit $tmp2018 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2017);
        if ($tmp2018.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2020 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 0));
            m2019 = *$tmp2020;
            panda$collections$ImmutableArray** $tmp2022 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 8));
            args2021 = *$tmp2022;
            panda$core$String* $tmp2029 = (($fn2028) m2019->$class->vtable[0])(m2019);
            $tmp2027 = $tmp2029;
            panda$core$String* $tmp2031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2027, &$s2030);
            $tmp2026 = $tmp2031;
            ITable* $tmp2034 = ((panda$collections$ListView*) args2021)->$class->itable;
            while ($tmp2034->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2034 = $tmp2034->next;
            }
            $fn2036 $tmp2035 = $tmp2034->methods[5];
            panda$core$String* $tmp2037 = $tmp2035(((panda$collections$ListView*) args2021), &$s2033);
            $tmp2032 = $tmp2037;
            panda$core$String* $tmp2038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2026, $tmp2032);
            $tmp2025 = $tmp2038;
            panda$core$String* $tmp2040 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2025, &$s2039);
            $tmp2024 = $tmp2040;
            $tmp2023 = $tmp2024;
            $returnValue1530 = $tmp2023;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2023));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2024));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2025));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2032));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2026));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2027));
            $tmp1521 = 20;
            goto $l1519;
            $l2041:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2043, 17);
        panda$core$Bit $tmp2044 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2043);
        if ($tmp2044.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2046 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 0));
            expr2045 = *$tmp2046;
            org$pandalanguage$pandac$IRNode** $tmp2048 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 8));
            stmt2047 = *$tmp2048;
            panda$core$String* $tmp2055 = (($fn2054) expr2045->$class->vtable[0])(expr2045);
            $tmp2053 = $tmp2055;
            panda$core$String* $tmp2057 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2053, &$s2056);
            $tmp2052 = $tmp2057;
            panda$core$String* $tmp2058 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2052, ((panda$core$Object*) stmt2047));
            $tmp2051 = $tmp2058;
            panda$core$String* $tmp2060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2051, &$s2059);
            $tmp2050 = $tmp2060;
            $tmp2049 = $tmp2050;
            $returnValue1530 = $tmp2049;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2049));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2050));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2051));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2052));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2053));
            $tmp1521 = 21;
            goto $l1519;
            $l2061:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2063, 18);
        panda$core$Bit $tmp2064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2063);
        if ($tmp2064.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2066 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 24));
            base2065 = *$tmp2066;
            org$pandalanguage$pandac$FieldDecl** $tmp2068 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$434_91522->$data + 32));
            field2067 = *$tmp2068;
            panda$core$String* $tmp2075 = (($fn2074) base2065->$class->vtable[0])(base2065);
            $tmp2073 = $tmp2075;
            panda$core$String* $tmp2077 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2073, &$s2076);
            $tmp2072 = $tmp2077;
            panda$core$String* $tmp2078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2072, ((org$pandalanguage$pandac$Symbol*) field2067)->name);
            $tmp2071 = $tmp2078;
            panda$core$String* $tmp2080 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2071, &$s2079);
            $tmp2070 = $tmp2080;
            $tmp2069 = $tmp2070;
            $returnValue1530 = $tmp2069;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2069));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2070));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2071));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2072));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2073));
            $tmp1521 = 22;
            goto $l1519;
            $l2081:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2083, 19);
        panda$core$Bit $tmp2084 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2083);
        if ($tmp2084.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2086 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 16));
            test2085 = *$tmp2086;
            panda$collections$ImmutableArray** $tmp2088 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 24));
            ifTrue2087 = *$tmp2088;
            org$pandalanguage$pandac$IRNode** $tmp2090 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 32));
            ifFalse2089 = *$tmp2090;
            int $tmp2093;
            {
                panda$core$MutableString* $tmp2097 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp2101 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2100, ((panda$core$Object*) test2085));
                $tmp2099 = $tmp2101;
                panda$core$String* $tmp2103 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2099, &$s2102);
                $tmp2098 = $tmp2103;
                panda$core$MutableString$init$panda$core$String($tmp2097, $tmp2098);
                $tmp2096 = $tmp2097;
                $tmp2095 = $tmp2096;
                result2094 = $tmp2095;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2095));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2096));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2098));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2099));
                {
                    int $tmp2106;
                    {
                        ITable* $tmp2110 = ((panda$collections$Iterable*) ifTrue2087)->$class->itable;
                        while ($tmp2110->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2110 = $tmp2110->next;
                        }
                        $fn2112 $tmp2111 = $tmp2110->methods[0];
                        panda$collections$Iterator* $tmp2113 = $tmp2111(((panda$collections$Iterable*) ifTrue2087));
                        $tmp2109 = $tmp2113;
                        $tmp2108 = $tmp2109;
                        Iter$515$172107 = $tmp2108;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2108));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2109));
                        $l2114:;
                        ITable* $tmp2117 = Iter$515$172107->$class->itable;
                        while ($tmp2117->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2117 = $tmp2117->next;
                        }
                        $fn2119 $tmp2118 = $tmp2117->methods[0];
                        panda$core$Bit $tmp2120 = $tmp2118(Iter$515$172107);
                        panda$core$Bit $tmp2121 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2120);
                        bool $tmp2116 = $tmp2121.value;
                        if (!$tmp2116) goto $l2115;
                        {
                            int $tmp2124;
                            {
                                ITable* $tmp2128 = Iter$515$172107->$class->itable;
                                while ($tmp2128->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2128 = $tmp2128->next;
                                }
                                $fn2130 $tmp2129 = $tmp2128->methods[1];
                                panda$core$Object* $tmp2131 = $tmp2129(Iter$515$172107);
                                $tmp2127 = $tmp2131;
                                $tmp2126 = ((org$pandalanguage$pandac$IRNode*) $tmp2127);
                                s2125 = $tmp2126;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2126));
                                panda$core$Panda$unref$panda$core$Object($tmp2127);
                                panda$core$String* $tmp2134 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2125), &$s2133);
                                $tmp2132 = $tmp2134;
                                panda$core$MutableString$append$panda$core$String(result2094, $tmp2132);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2132));
                            }
                            $tmp2124 = -1;
                            goto $l2122;
                            $l2122:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2125));
                            s2125 = NULL;
                            switch ($tmp2124) {
                                case -1: goto $l2135;
                            }
                            $l2135:;
                        }
                        goto $l2114;
                        $l2115:;
                    }
                    $tmp2106 = -1;
                    goto $l2104;
                    $l2104:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$515$172107));
                    Iter$515$172107 = NULL;
                    switch ($tmp2106) {
                        case -1: goto $l2136;
                    }
                    $l2136:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp2138, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp2137, $tmp2138);
                panda$core$MutableString$append$panda$core$Char8(result2094, $tmp2137);
                if (((panda$core$Bit) { ifFalse2089 != NULL }).value) {
                {
                    panda$core$String* $tmp2142 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2141, ((panda$core$Object*) ifFalse2089));
                    $tmp2140 = $tmp2142;
                    panda$core$String* $tmp2144 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2140, &$s2143);
                    $tmp2139 = $tmp2144;
                    panda$core$MutableString$append$panda$core$String(result2094, $tmp2139);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2139));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2140));
                }
                }
                panda$core$String* $tmp2147 = panda$core$MutableString$finish$R$panda$core$String(result2094);
                $tmp2146 = $tmp2147;
                $tmp2145 = $tmp2146;
                $returnValue1530 = $tmp2145;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2145));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2146));
                $tmp2093 = 0;
                goto $l2091;
                $l2148:;
                $tmp1521 = 23;
                goto $l1519;
                $l2149:;
                return $returnValue1530;
            }
            $l2091:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2094));
            result2094 = NULL;
            switch ($tmp2093) {
                case 0: goto $l2148;
            }
            $l2151:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2152, 20);
        panda$core$Bit $tmp2153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2152);
        if ($tmp2153.value) {
        {
            panda$core$UInt64* $tmp2155 = ((panda$core$UInt64*) ((char*) $match$434_91522->$data + 24));
            value2154 = *$tmp2155;
            panda$core$String* $tmp2158 = panda$core$UInt64$convert$R$panda$core$String(value2154);
            $tmp2157 = $tmp2158;
            $tmp2156 = $tmp2157;
            $returnValue1530 = $tmp2156;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2156));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2157));
            $tmp1521 = 24;
            goto $l1519;
            $l2159:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2161, 21);
        panda$core$Bit $tmp2162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2161);
        if ($tmp2162.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2164 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 16));
            value2163 = *$tmp2164;
            panda$core$String* $tmp2169 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2168, ((panda$core$Object*) value2163));
            $tmp2167 = $tmp2169;
            panda$core$String* $tmp2171 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2167, &$s2170);
            $tmp2166 = $tmp2171;
            $tmp2165 = $tmp2166;
            $returnValue1530 = $tmp2165;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2165));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2166));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2167));
            $tmp1521 = 25;
            goto $l1519;
            $l2172:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2174, 22);
        panda$core$Bit $tmp2175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2174);
        if ($tmp2175.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2177 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 16));
            value2176 = *$tmp2177;
            panda$core$String* $tmp2182 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2181, ((panda$core$Object*) value2176));
            $tmp2180 = $tmp2182;
            panda$core$String* $tmp2184 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2180, &$s2183);
            $tmp2179 = $tmp2184;
            $tmp2178 = $tmp2179;
            $returnValue1530 = $tmp2178;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2178));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2179));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2180));
            $tmp1521 = 26;
            goto $l1519;
            $l2185:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2187, 23);
        panda$core$Bit $tmp2188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2187);
        if ($tmp2188.value) {
        {
            panda$core$String** $tmp2190 = ((panda$core$String**) ((char*) $match$434_91522->$data + 16));
            label2189 = *$tmp2190;
            panda$collections$ImmutableArray** $tmp2192 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 24));
            statements2191 = *$tmp2192;
            int $tmp2195;
            {
                panda$core$MutableString* $tmp2199 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2199);
                $tmp2198 = $tmp2199;
                $tmp2197 = $tmp2198;
                result2196 = $tmp2197;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2197));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2198));
                if (((panda$core$Bit) { label2189 != NULL }).value) {
                {
                    panda$core$String* $tmp2202 = panda$core$String$convert$R$panda$core$String(label2189);
                    $tmp2201 = $tmp2202;
                    panda$core$String* $tmp2204 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2201, &$s2203);
                    $tmp2200 = $tmp2204;
                    panda$core$MutableString$append$panda$core$String(result2196, $tmp2200);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2200));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2201));
                }
                }
                panda$core$MutableString$append$panda$core$String(result2196, &$s2205);
                {
                    int $tmp2208;
                    {
                        ITable* $tmp2212 = ((panda$collections$Iterable*) statements2191)->$class->itable;
                        while ($tmp2212->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2212 = $tmp2212->next;
                        }
                        $fn2214 $tmp2213 = $tmp2212->methods[0];
                        panda$collections$Iterator* $tmp2215 = $tmp2213(((panda$collections$Iterable*) statements2191));
                        $tmp2211 = $tmp2215;
                        $tmp2210 = $tmp2211;
                        Iter$535$172209 = $tmp2210;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2210));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2211));
                        $l2216:;
                        ITable* $tmp2219 = Iter$535$172209->$class->itable;
                        while ($tmp2219->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2219 = $tmp2219->next;
                        }
                        $fn2221 $tmp2220 = $tmp2219->methods[0];
                        panda$core$Bit $tmp2222 = $tmp2220(Iter$535$172209);
                        panda$core$Bit $tmp2223 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2222);
                        bool $tmp2218 = $tmp2223.value;
                        if (!$tmp2218) goto $l2217;
                        {
                            int $tmp2226;
                            {
                                ITable* $tmp2230 = Iter$535$172209->$class->itable;
                                while ($tmp2230->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2230 = $tmp2230->next;
                                }
                                $fn2232 $tmp2231 = $tmp2230->methods[1];
                                panda$core$Object* $tmp2233 = $tmp2231(Iter$535$172209);
                                $tmp2229 = $tmp2233;
                                $tmp2228 = ((org$pandalanguage$pandac$IRNode*) $tmp2229);
                                s2227 = $tmp2228;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2228));
                                panda$core$Panda$unref$panda$core$Object($tmp2229);
                                panda$core$String* $tmp2236 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2227), &$s2235);
                                $tmp2234 = $tmp2236;
                                panda$core$MutableString$append$panda$core$String(result2196, $tmp2234);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2234));
                            }
                            $tmp2226 = -1;
                            goto $l2224;
                            $l2224:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2227));
                            s2227 = NULL;
                            switch ($tmp2226) {
                                case -1: goto $l2237;
                            }
                            $l2237:;
                        }
                        goto $l2216;
                        $l2217:;
                    }
                    $tmp2208 = -1;
                    goto $l2206;
                    $l2206:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$535$172209));
                    Iter$535$172209 = NULL;
                    switch ($tmp2208) {
                        case -1: goto $l2238;
                    }
                    $l2238:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp2240, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp2239, $tmp2240);
                panda$core$MutableString$append$panda$core$Char8(result2196, $tmp2239);
                panda$core$String* $tmp2243 = panda$core$MutableString$finish$R$panda$core$String(result2196);
                $tmp2242 = $tmp2243;
                $tmp2241 = $tmp2242;
                $returnValue1530 = $tmp2241;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2241));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2242));
                $tmp2195 = 0;
                goto $l2193;
                $l2244:;
                $tmp1521 = 27;
                goto $l1519;
                $l2245:;
                return $returnValue1530;
            }
            $l2193:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2196));
            result2196 = NULL;
            switch ($tmp2195) {
                case 0: goto $l2244;
            }
            $l2247:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2248, 24);
        panda$core$Bit $tmp2249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2248);
        if ($tmp2249.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2251 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 16));
            value2250 = *$tmp2251;
            panda$collections$ImmutableArray** $tmp2253 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 24));
            whens2252 = *$tmp2253;
            panda$collections$ImmutableArray** $tmp2255 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 32));
            other2254 = *$tmp2255;
            int $tmp2258;
            {
                panda$core$MutableString* $tmp2262 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp2266 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2265, ((panda$core$Object*) value2250));
                $tmp2264 = $tmp2266;
                panda$core$String* $tmp2268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2264, &$s2267);
                $tmp2263 = $tmp2268;
                panda$core$MutableString$init$panda$core$String($tmp2262, $tmp2263);
                $tmp2261 = $tmp2262;
                $tmp2260 = $tmp2261;
                result2259 = $tmp2260;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2260));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2261));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2263));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2264));
                {
                    int $tmp2271;
                    {
                        ITable* $tmp2275 = ((panda$collections$Iterable*) whens2252)->$class->itable;
                        while ($tmp2275->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2275 = $tmp2275->next;
                        }
                        $fn2277 $tmp2276 = $tmp2275->methods[0];
                        panda$collections$Iterator* $tmp2278 = $tmp2276(((panda$collections$Iterable*) whens2252));
                        $tmp2274 = $tmp2278;
                        $tmp2273 = $tmp2274;
                        Iter$542$172272 = $tmp2273;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2273));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2274));
                        $l2279:;
                        ITable* $tmp2282 = Iter$542$172272->$class->itable;
                        while ($tmp2282->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2282 = $tmp2282->next;
                        }
                        $fn2284 $tmp2283 = $tmp2282->methods[0];
                        panda$core$Bit $tmp2285 = $tmp2283(Iter$542$172272);
                        panda$core$Bit $tmp2286 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2285);
                        bool $tmp2281 = $tmp2286.value;
                        if (!$tmp2281) goto $l2280;
                        {
                            int $tmp2289;
                            {
                                ITable* $tmp2293 = Iter$542$172272->$class->itable;
                                while ($tmp2293->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2293 = $tmp2293->next;
                                }
                                $fn2295 $tmp2294 = $tmp2293->methods[1];
                                panda$core$Object* $tmp2296 = $tmp2294(Iter$542$172272);
                                $tmp2292 = $tmp2296;
                                $tmp2291 = ((org$pandalanguage$pandac$IRNode*) $tmp2292);
                                w2290 = $tmp2291;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2291));
                                panda$core$Panda$unref$panda$core$Object($tmp2292);
                                panda$core$String* $tmp2299 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w2290), &$s2298);
                                $tmp2297 = $tmp2299;
                                panda$core$MutableString$append$panda$core$String(result2259, $tmp2297);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2297));
                            }
                            $tmp2289 = -1;
                            goto $l2287;
                            $l2287:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w2290));
                            w2290 = NULL;
                            switch ($tmp2289) {
                                case -1: goto $l2300;
                            }
                            $l2300:;
                        }
                        goto $l2279;
                        $l2280:;
                    }
                    $tmp2271 = -1;
                    goto $l2269;
                    $l2269:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$542$172272));
                    Iter$542$172272 = NULL;
                    switch ($tmp2271) {
                        case -1: goto $l2301;
                    }
                    $l2301:;
                }
                if (((panda$core$Bit) { other2254 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$String(result2259, &$s2302);
                    {
                        int $tmp2305;
                        {
                            ITable* $tmp2309 = ((panda$collections$Iterable*) other2254)->$class->itable;
                            while ($tmp2309->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp2309 = $tmp2309->next;
                            }
                            $fn2311 $tmp2310 = $tmp2309->methods[0];
                            panda$collections$Iterator* $tmp2312 = $tmp2310(((panda$collections$Iterable*) other2254));
                            $tmp2308 = $tmp2312;
                            $tmp2307 = $tmp2308;
                            Iter$547$212306 = $tmp2307;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2307));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2308));
                            $l2313:;
                            ITable* $tmp2316 = Iter$547$212306->$class->itable;
                            while ($tmp2316->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2316 = $tmp2316->next;
                            }
                            $fn2318 $tmp2317 = $tmp2316->methods[0];
                            panda$core$Bit $tmp2319 = $tmp2317(Iter$547$212306);
                            panda$core$Bit $tmp2320 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2319);
                            bool $tmp2315 = $tmp2320.value;
                            if (!$tmp2315) goto $l2314;
                            {
                                int $tmp2323;
                                {
                                    ITable* $tmp2327 = Iter$547$212306->$class->itable;
                                    while ($tmp2327->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp2327 = $tmp2327->next;
                                    }
                                    $fn2329 $tmp2328 = $tmp2327->methods[1];
                                    panda$core$Object* $tmp2330 = $tmp2328(Iter$547$212306);
                                    $tmp2326 = $tmp2330;
                                    $tmp2325 = ((org$pandalanguage$pandac$IRNode*) $tmp2326);
                                    s2324 = $tmp2325;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2325));
                                    panda$core$Panda$unref$panda$core$Object($tmp2326);
                                    panda$core$String* $tmp2333 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2324), &$s2332);
                                    $tmp2331 = $tmp2333;
                                    panda$core$MutableString$append$panda$core$String(result2259, $tmp2331);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2331));
                                }
                                $tmp2323 = -1;
                                goto $l2321;
                                $l2321:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2324));
                                s2324 = NULL;
                                switch ($tmp2323) {
                                    case -1: goto $l2334;
                                }
                                $l2334:;
                            }
                            goto $l2313;
                            $l2314:;
                        }
                        $tmp2305 = -1;
                        goto $l2303;
                        $l2303:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$547$212306));
                        Iter$547$212306 = NULL;
                        switch ($tmp2305) {
                            case -1: goto $l2335;
                        }
                        $l2335:;
                    }
                }
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp2337, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp2336, $tmp2337);
                panda$core$MutableString$append$panda$core$Char8(result2259, $tmp2336);
                panda$core$String* $tmp2340 = panda$core$MutableString$finish$R$panda$core$String(result2259);
                $tmp2339 = $tmp2340;
                $tmp2338 = $tmp2339;
                $returnValue1530 = $tmp2338;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2338));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2339));
                $tmp2258 = 0;
                goto $l2256;
                $l2341:;
                $tmp1521 = 28;
                goto $l1519;
                $l2342:;
                return $returnValue1530;
            }
            $l2256:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2259));
            result2259 = NULL;
            switch ($tmp2258) {
                case 0: goto $l2341;
            }
            $l2344:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2345, 25);
        panda$core$Bit $tmp2346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2345);
        if ($tmp2346.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2348 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 24));
            target2347 = *$tmp2348;
            org$pandalanguage$pandac$MethodRef** $tmp2350 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$434_91522->$data + 32));
            m2349 = *$tmp2350;
            if (((panda$core$Bit) { target2347 != NULL }).value) {
            {
                panda$core$String* $tmp2357 = (($fn2356) target2347->$class->vtable[0])(target2347);
                $tmp2355 = $tmp2357;
                panda$core$String* $tmp2359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2355, &$s2358);
                $tmp2354 = $tmp2359;
                panda$core$String* $tmp2360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2354, ((org$pandalanguage$pandac$Symbol*) m2349->value)->name);
                $tmp2353 = $tmp2360;
                panda$core$String* $tmp2362 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2353, &$s2361);
                $tmp2352 = $tmp2362;
                $tmp2351 = $tmp2352;
                $returnValue1530 = $tmp2351;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2351));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2352));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2353));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2354));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2355));
                $tmp1521 = 29;
                goto $l1519;
                $l2363:;
                return $returnValue1530;
            }
            }
            $tmp2365 = ((org$pandalanguage$pandac$Symbol*) m2349->value)->name;
            $returnValue1530 = $tmp2365;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2365));
            $tmp1521 = 30;
            goto $l1519;
            $l2366:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2368, 26);
        panda$core$Bit $tmp2369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2368);
        if ($tmp2369.value) {
        {
            panda$core$UInt64* $tmp2371 = ((panda$core$UInt64*) ((char*) $match$434_91522->$data + 24));
            value2370 = *$tmp2371;
            panda$core$UInt64$wrapper* $tmp2376;
            $tmp2376 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
            $tmp2376->value = value2370;
            $tmp2375 = ((panda$core$Object*) $tmp2376);
            panda$core$String* $tmp2377 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2374, $tmp2375);
            $tmp2373 = $tmp2377;
            $tmp2372 = $tmp2373;
            $returnValue1530 = $tmp2372;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2372));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2373));
            panda$core$Panda$unref$panda$core$Object($tmp2375);
            $tmp1521 = 31;
            goto $l1519;
            $l2378:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2380, 27);
        panda$core$Bit $tmp2381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2380);
        if ($tmp2381.value) {
        {
            $tmp2382 = &$s2383;
            $returnValue1530 = $tmp2382;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2382));
            $tmp1521 = 32;
            goto $l1519;
            $l2384:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2386, 28);
        panda$core$Bit $tmp2387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2386);
        if ($tmp2387.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2389 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$434_91522->$data + 16));
            op2388 = *$tmp2389;
            org$pandalanguage$pandac$IRNode** $tmp2391 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 24));
            base2390 = *$tmp2391;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2398;
            $tmp2398 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp2398->value = op2388;
            $tmp2397 = ((panda$core$Object*) $tmp2398);
            panda$core$String* $tmp2400 = (($fn2399) $tmp2397->$class->vtable[0])($tmp2397);
            $tmp2396 = $tmp2400;
            panda$core$String* $tmp2402 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2396, &$s2401);
            $tmp2395 = $tmp2402;
            panda$core$String* $tmp2403 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2395, ((panda$core$Object*) base2390));
            $tmp2394 = $tmp2403;
            panda$core$String* $tmp2405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2394, &$s2404);
            $tmp2393 = $tmp2405;
            $tmp2392 = $tmp2393;
            $returnValue1530 = $tmp2392;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2392));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2393));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2394));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2395));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2396));
            panda$core$Panda$unref$panda$core$Object($tmp2397);
            $tmp1521 = 33;
            goto $l1519;
            $l2406:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2408, 29);
        panda$core$Bit $tmp2409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2408);
        if ($tmp2409.value) {
        {
            panda$core$String** $tmp2411 = ((panda$core$String**) ((char*) $match$434_91522->$data + 16));
            label2410 = *$tmp2411;
            org$pandalanguage$pandac$IRNode** $tmp2413 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 24));
            target2412 = *$tmp2413;
            org$pandalanguage$pandac$IRNode** $tmp2415 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 32));
            list2414 = *$tmp2415;
            panda$collections$ImmutableArray** $tmp2417 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 40));
            statements2416 = *$tmp2417;
            int $tmp2420;
            {
                panda$core$MutableString* $tmp2424 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2424);
                $tmp2423 = $tmp2424;
                $tmp2422 = $tmp2423;
                result2421 = $tmp2422;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2422));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2423));
                if (((panda$core$Bit) { label2410 != NULL }).value) {
                {
                    panda$core$String* $tmp2427 = panda$core$String$convert$R$panda$core$String(label2410);
                    $tmp2426 = $tmp2427;
                    panda$core$String* $tmp2429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2426, &$s2428);
                    $tmp2425 = $tmp2429;
                    panda$core$MutableString$append$panda$core$String(result2421, $tmp2425);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2425));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2426));
                }
                }
                panda$core$String* $tmp2435 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2434, ((panda$core$Object*) target2412));
                $tmp2433 = $tmp2435;
                panda$core$String* $tmp2437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2433, &$s2436);
                $tmp2432 = $tmp2437;
                panda$core$String* $tmp2438 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2432, ((panda$core$Object*) list2414));
                $tmp2431 = $tmp2438;
                panda$core$String* $tmp2440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2431, &$s2439);
                $tmp2430 = $tmp2440;
                panda$core$MutableString$append$panda$core$String(result2421, $tmp2430);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2430));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2431));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2432));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2433));
                {
                    int $tmp2443;
                    {
                        ITable* $tmp2447 = ((panda$collections$Iterable*) statements2416)->$class->itable;
                        while ($tmp2447->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2447 = $tmp2447->next;
                        }
                        $fn2449 $tmp2448 = $tmp2447->methods[0];
                        panda$collections$Iterator* $tmp2450 = $tmp2448(((panda$collections$Iterable*) statements2416));
                        $tmp2446 = $tmp2450;
                        $tmp2445 = $tmp2446;
                        Iter$570$172444 = $tmp2445;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2445));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2446));
                        $l2451:;
                        ITable* $tmp2454 = Iter$570$172444->$class->itable;
                        while ($tmp2454->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2454 = $tmp2454->next;
                        }
                        $fn2456 $tmp2455 = $tmp2454->methods[0];
                        panda$core$Bit $tmp2457 = $tmp2455(Iter$570$172444);
                        panda$core$Bit $tmp2458 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2457);
                        bool $tmp2453 = $tmp2458.value;
                        if (!$tmp2453) goto $l2452;
                        {
                            int $tmp2461;
                            {
                                ITable* $tmp2465 = Iter$570$172444->$class->itable;
                                while ($tmp2465->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2465 = $tmp2465->next;
                                }
                                $fn2467 $tmp2466 = $tmp2465->methods[1];
                                panda$core$Object* $tmp2468 = $tmp2466(Iter$570$172444);
                                $tmp2464 = $tmp2468;
                                $tmp2463 = ((org$pandalanguage$pandac$IRNode*) $tmp2464);
                                s2462 = $tmp2463;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2463));
                                panda$core$Panda$unref$panda$core$Object($tmp2464);
                                panda$core$String* $tmp2471 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2462), &$s2470);
                                $tmp2469 = $tmp2471;
                                panda$core$MutableString$append$panda$core$String(result2421, $tmp2469);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2469));
                            }
                            $tmp2461 = -1;
                            goto $l2459;
                            $l2459:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2462));
                            s2462 = NULL;
                            switch ($tmp2461) {
                                case -1: goto $l2472;
                            }
                            $l2472:;
                        }
                        goto $l2451;
                        $l2452:;
                    }
                    $tmp2443 = -1;
                    goto $l2441;
                    $l2441:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$570$172444));
                    Iter$570$172444 = NULL;
                    switch ($tmp2443) {
                        case -1: goto $l2473;
                    }
                    $l2473:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp2475, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp2474, $tmp2475);
                panda$core$MutableString$append$panda$core$Char8(result2421, $tmp2474);
                panda$core$String* $tmp2478 = panda$core$MutableString$finish$R$panda$core$String(result2421);
                $tmp2477 = $tmp2478;
                $tmp2476 = $tmp2477;
                $returnValue1530 = $tmp2476;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2476));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2477));
                $tmp2420 = 0;
                goto $l2418;
                $l2479:;
                $tmp1521 = 34;
                goto $l1519;
                $l2480:;
                return $returnValue1530;
            }
            $l2418:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2421));
            result2421 = NULL;
            switch ($tmp2420) {
                case 0: goto $l2479;
            }
            $l2482:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2483, 30);
        panda$core$Bit $tmp2484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2483);
        if ($tmp2484.value) {
        {
            panda$core$Real64* $tmp2486 = ((panda$core$Real64*) ((char*) $match$434_91522->$data + 24));
            value2485 = *$tmp2486;
            panda$core$String* $tmp2489 = panda$core$Real64$convert$R$panda$core$String(value2485);
            $tmp2488 = $tmp2489;
            $tmp2487 = $tmp2488;
            $returnValue1530 = $tmp2487;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2487));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2488));
            $tmp1521 = 35;
            goto $l1519;
            $l2490:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2492, 31);
        panda$core$Bit $tmp2493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2492);
        if ($tmp2493.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2495 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 16));
            value2494 = *$tmp2495;
            if (((panda$core$Bit) { value2494 != NULL }).value) {
            {
                panda$core$String* $tmp2500 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2499, ((panda$core$Object*) value2494));
                $tmp2498 = $tmp2500;
                panda$core$String* $tmp2502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2498, &$s2501);
                $tmp2497 = $tmp2502;
                $tmp2496 = $tmp2497;
                $returnValue1530 = $tmp2496;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2496));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2497));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2498));
                $tmp1521 = 36;
                goto $l1519;
                $l2503:;
                return $returnValue1530;
            }
            }
            $tmp2505 = &$s2506;
            $returnValue1530 = $tmp2505;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2505));
            $tmp1521 = 37;
            goto $l1519;
            $l2507:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2509, 32);
        panda$core$Bit $tmp2510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2509);
        if ($tmp2510.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2512 = ((org$pandalanguage$pandac$Type**) ((char*) $match$434_91522->$data + 16));
            type2511 = *$tmp2512;
            panda$core$Int64* $tmp2514 = ((panda$core$Int64*) ((char*) $match$434_91522->$data + 24));
            id2513 = *$tmp2514;
            panda$core$Int64$wrapper* $tmp2520;
            $tmp2520 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2520->value = id2513;
            $tmp2519 = ((panda$core$Object*) $tmp2520);
            panda$core$String* $tmp2521 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2518, $tmp2519);
            $tmp2517 = $tmp2521;
            panda$core$String* $tmp2523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2517, &$s2522);
            $tmp2516 = $tmp2523;
            $tmp2515 = $tmp2516;
            $returnValue1530 = $tmp2515;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2515));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2516));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2517));
            panda$core$Panda$unref$panda$core$Object($tmp2519);
            $tmp1521 = 38;
            goto $l1519;
            $l2524:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2526, 33);
        panda$core$Bit $tmp2527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2526);
        if ($tmp2527.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2529 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 0));
            base2528 = *$tmp2529;
            panda$core$Int64* $tmp2531 = ((panda$core$Int64*) ((char*) $match$434_91522->$data + 8));
            id2530 = *$tmp2531;
            panda$core$Int64$wrapper* $tmp2539;
            $tmp2539 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2539->value = id2530;
            $tmp2538 = ((panda$core$Object*) $tmp2539);
            panda$core$String* $tmp2540 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2537, $tmp2538);
            $tmp2536 = $tmp2540;
            panda$core$String* $tmp2542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2536, &$s2541);
            $tmp2535 = $tmp2542;
            panda$core$String* $tmp2543 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2535, ((panda$core$Object*) base2528));
            $tmp2534 = $tmp2543;
            panda$core$String* $tmp2545 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2534, &$s2544);
            $tmp2533 = $tmp2545;
            $tmp2532 = $tmp2533;
            $returnValue1530 = $tmp2532;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2532));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2533));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2534));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2535));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2536));
            panda$core$Panda$unref$panda$core$Object($tmp2538);
            $tmp1521 = 39;
            goto $l1519;
            $l2546:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2548, 34);
        panda$core$Bit $tmp2549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2548);
        if ($tmp2549.value) {
        {
            $tmp2550 = &$s2551;
            $returnValue1530 = $tmp2550;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2550));
            $tmp1521 = 40;
            goto $l1519;
            $l2552:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2554, 35);
        panda$core$Bit $tmp2555 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2554);
        if ($tmp2555.value) {
        {
            panda$core$String** $tmp2557 = ((panda$core$String**) ((char*) $match$434_91522->$data + 16));
            str2556 = *$tmp2557;
            panda$core$String* $tmp2561 = panda$core$String$format$panda$core$String$R$panda$core$String(str2556, &$s2560);
            $tmp2559 = $tmp2561;
            $tmp2558 = $tmp2559;
            $returnValue1530 = $tmp2558;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2558));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2559));
            $tmp1521 = 41;
            goto $l1519;
            $l2562:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2564, 36);
        panda$core$Bit $tmp2565 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2564);
        if ($tmp2565.value) {
        {
            $tmp2566 = &$s2567;
            $returnValue1530 = $tmp2566;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2566));
            $tmp1521 = 42;
            goto $l1519;
            $l2568:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2570, 37);
        panda$core$Bit $tmp2571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2570);
        if ($tmp2571.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2573 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 16));
            test2572 = *$tmp2573;
            org$pandalanguage$pandac$IRNode** $tmp2575 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 24));
            ifTrue2574 = *$tmp2575;
            org$pandalanguage$pandac$IRNode** $tmp2577 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 32));
            ifFalse2576 = *$tmp2577;
            panda$core$String* $tmp2586 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2585, ((panda$core$Object*) test2572));
            $tmp2584 = $tmp2586;
            panda$core$String* $tmp2588 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2584, &$s2587);
            $tmp2583 = $tmp2588;
            panda$core$String* $tmp2589 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2583, ((panda$core$Object*) ifTrue2574));
            $tmp2582 = $tmp2589;
            panda$core$String* $tmp2591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2582, &$s2590);
            $tmp2581 = $tmp2591;
            panda$core$String* $tmp2592 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2581, ((panda$core$Object*) ifFalse2576));
            $tmp2580 = $tmp2592;
            panda$core$String* $tmp2594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2580, &$s2593);
            $tmp2579 = $tmp2594;
            $tmp2578 = $tmp2579;
            $returnValue1530 = $tmp2578;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2578));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2579));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2580));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2581));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2582));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2583));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2584));
            $tmp1521 = 43;
            goto $l1519;
            $l2595:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2597, 38);
        panda$core$Bit $tmp2598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2597);
        if ($tmp2598.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2600 = ((org$pandalanguage$pandac$Type**) ((char*) $match$434_91522->$data + 16));
            type2599 = *$tmp2600;
            panda$core$String* $tmp2603 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type2599);
            $tmp2602 = $tmp2603;
            $tmp2601 = $tmp2602;
            $returnValue1530 = $tmp2601;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2601));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2602));
            $tmp1521 = 44;
            goto $l1519;
            $l2604:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2606, 39);
        panda$core$Bit $tmp2607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2606);
        if ($tmp2607.value) {
        {
            panda$core$String** $tmp2609 = ((panda$core$String**) ((char*) $match$434_91522->$data + 16));
            name2608 = *$tmp2609;
            $tmp2610 = name2608;
            $returnValue1530 = $tmp2610;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2610));
            $tmp1521 = 45;
            goto $l1519;
            $l2611:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2613, 40);
        panda$core$Bit $tmp2614 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2613);
        if ($tmp2614.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2616 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 24));
            base2615 = *$tmp2616;
            panda$collections$ImmutableArray** $tmp2618 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 32));
            args2617 = *$tmp2618;
            panda$core$String* $tmp2625 = (($fn2624) base2615->$class->vtable[0])(base2615);
            $tmp2623 = $tmp2625;
            panda$core$String* $tmp2627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2623, &$s2626);
            $tmp2622 = $tmp2627;
            ITable* $tmp2629 = ((panda$collections$ListView*) args2617)->$class->itable;
            while ($tmp2629->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2629 = $tmp2629->next;
            }
            $fn2631 $tmp2630 = $tmp2629->methods[4];
            panda$core$String* $tmp2632 = $tmp2630(((panda$collections$ListView*) args2617));
            $tmp2628 = $tmp2632;
            panda$core$String* $tmp2633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2622, $tmp2628);
            $tmp2621 = $tmp2633;
            panda$core$String* $tmp2635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2621, &$s2634);
            $tmp2620 = $tmp2635;
            $tmp2619 = $tmp2620;
            $returnValue1530 = $tmp2619;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2619));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2620));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2621));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2628));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2622));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2623));
            $tmp1521 = 46;
            goto $l1519;
            $l2636:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2638, 41);
        panda$core$Bit $tmp2639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2638);
        if ($tmp2639.value) {
        {
            panda$collections$ImmutableArray** $tmp2641 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 16));
            params2640 = *$tmp2641;
            org$pandalanguage$pandac$ASTNode** $tmp2643 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$434_91522->$data + 24));
            body2642 = *$tmp2643;
            ITable* $tmp2651 = ((panda$collections$ListView*) params2640)->$class->itable;
            while ($tmp2651->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2651 = $tmp2651->next;
            }
            $fn2653 $tmp2652 = $tmp2651->methods[4];
            panda$core$String* $tmp2654 = $tmp2652(((panda$collections$ListView*) params2640));
            $tmp2650 = $tmp2654;
            panda$core$String* $tmp2655 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2649, $tmp2650);
            $tmp2648 = $tmp2655;
            panda$core$String* $tmp2657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2648, &$s2656);
            $tmp2647 = $tmp2657;
            panda$core$String* $tmp2658 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2647, ((panda$core$Object*) body2642));
            $tmp2646 = $tmp2658;
            panda$core$String* $tmp2660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2646, &$s2659);
            $tmp2645 = $tmp2660;
            $tmp2644 = $tmp2645;
            $returnValue1530 = $tmp2644;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2644));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2645));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2646));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2647));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2648));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2650));
            $tmp1521 = 47;
            goto $l1519;
            $l2661:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2663, 42);
        panda$core$Bit $tmp2664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2663);
        if ($tmp2664.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2666 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 24));
            target2665 = *$tmp2666;
            panda$collections$ImmutableArray** $tmp2668 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 32));
            methods2667 = *$tmp2668;
            panda$collections$ImmutableArray** $tmp2670 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 40));
            args2669 = *$tmp2670;
            if (((panda$core$Bit) { target2665 != NULL }).value) {
            {
                panda$core$String* $tmp2679 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2678, ((panda$core$Object*) target2665));
                $tmp2677 = $tmp2679;
                panda$core$String* $tmp2681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2677, &$s2680);
                $tmp2676 = $tmp2681;
                panda$core$Int64$init$builtin_int64(&$tmp2683, 0);
                panda$core$Object* $tmp2684 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2667, $tmp2683);
                $tmp2682 = $tmp2684;
                panda$core$String* $tmp2685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2676, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2682)->value)->name);
                $tmp2675 = $tmp2685;
                panda$core$String* $tmp2687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2675, &$s2686);
                $tmp2674 = $tmp2687;
                ITable* $tmp2689 = ((panda$collections$ListView*) args2669)->$class->itable;
                while ($tmp2689->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2689 = $tmp2689->next;
                }
                $fn2691 $tmp2690 = $tmp2689->methods[4];
                panda$core$String* $tmp2692 = $tmp2690(((panda$collections$ListView*) args2669));
                $tmp2688 = $tmp2692;
                panda$core$String* $tmp2693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2674, $tmp2688);
                $tmp2673 = $tmp2693;
                panda$core$String* $tmp2695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2673, &$s2694);
                $tmp2672 = $tmp2695;
                $tmp2671 = $tmp2672;
                $returnValue1530 = $tmp2671;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2671));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2672));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2673));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2688));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2674));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2675));
                panda$core$Panda$unref$panda$core$Object($tmp2682);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2676));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2677));
                $tmp1521 = 48;
                goto $l1519;
                $l2696:;
                return $returnValue1530;
            }
            }
            else {
            {
                panda$core$Int64$init$builtin_int64(&$tmp2705, 0);
                panda$core$Object* $tmp2706 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2667, $tmp2705);
                $tmp2704 = $tmp2706;
                panda$core$String* $tmp2707 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2703, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2704)->value)->name);
                $tmp2702 = $tmp2707;
                panda$core$String* $tmp2709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2702, &$s2708);
                $tmp2701 = $tmp2709;
                ITable* $tmp2711 = ((panda$collections$ListView*) args2669)->$class->itable;
                while ($tmp2711->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2711 = $tmp2711->next;
                }
                $fn2713 $tmp2712 = $tmp2711->methods[4];
                panda$core$String* $tmp2714 = $tmp2712(((panda$collections$ListView*) args2669));
                $tmp2710 = $tmp2714;
                panda$core$String* $tmp2715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2701, $tmp2710);
                $tmp2700 = $tmp2715;
                panda$core$String* $tmp2717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2700, &$s2716);
                $tmp2699 = $tmp2717;
                $tmp2698 = $tmp2699;
                $returnValue1530 = $tmp2698;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2698));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2699));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2700));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2710));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2701));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2702));
                panda$core$Panda$unref$panda$core$Object($tmp2704);
                $tmp1521 = 49;
                goto $l1519;
                $l2718:;
                return $returnValue1530;
            }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2720, 43);
        panda$core$Bit $tmp2721 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2720);
        if ($tmp2721.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2723 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 16));
            target2722 = *$tmp2723;
            panda$collections$ImmutableArray** $tmp2725 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 24));
            methods2724 = *$tmp2725;
            if (((panda$core$Bit) { target2722 != NULL }).value) {
            {
                panda$core$String* $tmp2732 = (($fn2731) target2722->$class->vtable[0])(target2722);
                $tmp2730 = $tmp2732;
                panda$core$String* $tmp2734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2730, &$s2733);
                $tmp2729 = $tmp2734;
                panda$core$Int64$init$builtin_int64(&$tmp2736, 0);
                panda$core$Object* $tmp2737 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2724, $tmp2736);
                $tmp2735 = $tmp2737;
                panda$core$String* $tmp2738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2729, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2735)->value)->name);
                $tmp2728 = $tmp2738;
                panda$core$String* $tmp2740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2728, &$s2739);
                $tmp2727 = $tmp2740;
                $tmp2726 = $tmp2727;
                $returnValue1530 = $tmp2726;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2726));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2727));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2728));
                panda$core$Panda$unref$panda$core$Object($tmp2735);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2729));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2730));
                $tmp1521 = 50;
                goto $l1519;
                $l2741:;
                return $returnValue1530;
            }
            }
            else {
            {
                panda$core$Int64$init$builtin_int64(&$tmp2747, 0);
                panda$core$Object* $tmp2748 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2724, $tmp2747);
                $tmp2746 = $tmp2748;
                panda$core$String* $tmp2749 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2746)->value)->name);
                $tmp2745 = $tmp2749;
                panda$core$String* $tmp2751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2745, &$s2750);
                $tmp2744 = $tmp2751;
                $tmp2743 = $tmp2744;
                $returnValue1530 = $tmp2743;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2743));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2744));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2745));
                panda$core$Panda$unref$panda$core$Object($tmp2746);
                $tmp1521 = 51;
                goto $l1519;
                $l2752:;
                return $returnValue1530;
            }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2754, 44);
        panda$core$Bit $tmp2755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2754);
        if ($tmp2755.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2757 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 16));
            start2756 = *$tmp2757;
            org$pandalanguage$pandac$IRNode** $tmp2759 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 24));
            end2758 = *$tmp2759;
            panda$core$Bit* $tmp2761 = ((panda$core$Bit*) ((char*) $match$434_91522->$data + 32));
            inclusive2760 = *$tmp2761;
            org$pandalanguage$pandac$IRNode** $tmp2763 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 33));
            step2762 = *$tmp2763;
            int $tmp2766;
            {
                panda$core$MutableString* $tmp2770 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2770);
                $tmp2769 = $tmp2770;
                $tmp2768 = $tmp2769;
                result2767 = $tmp2768;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2768));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2769));
                if (((panda$core$Bit) { start2756 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result2767, ((panda$core$Object*) start2756));
                }
                }
                if (inclusive2760.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result2767, &$s2771);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(result2767, &$s2772);
                }
                }
                if (((panda$core$Bit) { end2758 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result2767, ((panda$core$Object*) end2758));
                }
                }
                if (((panda$core$Bit) { step2762 != NULL }).value) {
                {
                    panda$core$String* $tmp2776 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2775, ((panda$core$Object*) step2762));
                    $tmp2774 = $tmp2776;
                    panda$core$String* $tmp2778 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2774, &$s2777);
                    $tmp2773 = $tmp2778;
                    panda$core$MutableString$append$panda$core$String(result2767, $tmp2773);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2773));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2774));
                }
                }
                panda$core$String* $tmp2781 = panda$core$MutableString$finish$R$panda$core$String(result2767);
                $tmp2780 = $tmp2781;
                $tmp2779 = $tmp2780;
                $returnValue1530 = $tmp2779;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2779));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2780));
                $tmp2766 = 0;
                goto $l2764;
                $l2782:;
                $tmp1521 = 52;
                goto $l1519;
                $l2783:;
                return $returnValue1530;
            }
            $l2764:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2767));
            result2767 = NULL;
            switch ($tmp2766) {
                case 0: goto $l2782;
            }
            $l2785:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2786, 45);
        panda$core$Bit $tmp2787 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2786);
        if ($tmp2787.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp2789 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$434_91522->$data + 16));
            kind2788 = *$tmp2789;
            panda$collections$ImmutableArray** $tmp2791 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 24));
            decls2790 = *$tmp2791;
            int $tmp2794;
            {
                panda$core$MutableString* $tmp2798 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2798);
                $tmp2797 = $tmp2798;
                $tmp2796 = $tmp2797;
                result2795 = $tmp2796;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2796));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2797));
                {
                    $match$636_172799 = kind2788;
                    panda$core$Int64$init$builtin_int64(&$tmp2800, 0);
                    panda$core$Bit $tmp2801 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$636_172799.$rawValue, $tmp2800);
                    if ($tmp2801.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2795, &$s2802);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp2803, 1);
                    panda$core$Bit $tmp2804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$636_172799.$rawValue, $tmp2803);
                    if ($tmp2804.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2795, &$s2805);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp2806, 2);
                    panda$core$Bit $tmp2807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$636_172799.$rawValue, $tmp2806);
                    if ($tmp2807.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2795, &$s2808);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp2809, 3);
                    panda$core$Bit $tmp2810 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$636_172799.$rawValue, $tmp2809);
                    if ($tmp2810.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2795, &$s2811);
                    }
                    }
                    }
                    }
                    }
                }
                ITable* $tmp2813 = ((panda$collections$ListView*) decls2790)->$class->itable;
                while ($tmp2813->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2813 = $tmp2813->next;
                }
                $fn2815 $tmp2814 = $tmp2813->methods[4];
                panda$core$String* $tmp2816 = $tmp2814(((panda$collections$ListView*) decls2790));
                $tmp2812 = $tmp2816;
                panda$core$MutableString$append$panda$core$String(result2795, $tmp2812);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2812));
                panda$core$String* $tmp2819 = panda$core$MutableString$finish$R$panda$core$String(result2795);
                $tmp2818 = $tmp2819;
                $tmp2817 = $tmp2818;
                $returnValue1530 = $tmp2817;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2817));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2818));
                $tmp2794 = 0;
                goto $l2792;
                $l2820:;
                $tmp1521 = 53;
                goto $l1519;
                $l2821:;
                return $returnValue1530;
            }
            $l2792:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2795));
            result2795 = NULL;
            switch ($tmp2794) {
                case 0: goto $l2820;
            }
            $l2823:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2824, 46);
        panda$core$Bit $tmp2825 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2824);
        if ($tmp2825.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2827 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$434_91522->$data + 16));
            variable2826 = *$tmp2827;
            $tmp2828 = ((org$pandalanguage$pandac$Symbol*) variable2826)->name;
            $returnValue1530 = $tmp2828;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2828));
            $tmp1521 = 54;
            goto $l1519;
            $l2829:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2831, 47);
        panda$core$Bit $tmp2832 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2831);
        if ($tmp2832.value) {
        {
            panda$collections$ImmutableArray** $tmp2834 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 16));
            tests2833 = *$tmp2834;
            panda$collections$ImmutableArray** $tmp2836 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 24));
            statements2835 = *$tmp2836;
            ITable* $tmp2844 = ((panda$collections$ListView*) tests2833)->$class->itable;
            while ($tmp2844->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2844 = $tmp2844->next;
            }
            $fn2846 $tmp2845 = $tmp2844->methods[4];
            panda$core$String* $tmp2847 = $tmp2845(((panda$collections$ListView*) tests2833));
            $tmp2843 = $tmp2847;
            panda$core$String* $tmp2848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2842, $tmp2843);
            $tmp2841 = $tmp2848;
            panda$core$String* $tmp2850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2841, &$s2849);
            $tmp2840 = $tmp2850;
            ITable* $tmp2853 = ((panda$collections$ListView*) statements2835)->$class->itable;
            while ($tmp2853->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2853 = $tmp2853->next;
            }
            $fn2855 $tmp2854 = $tmp2853->methods[5];
            panda$core$String* $tmp2856 = $tmp2854(((panda$collections$ListView*) statements2835), &$s2852);
            $tmp2851 = $tmp2856;
            panda$core$String* $tmp2857 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2840, $tmp2851);
            $tmp2839 = $tmp2857;
            panda$core$String* $tmp2859 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2839, &$s2858);
            $tmp2838 = $tmp2859;
            $tmp2837 = $tmp2838;
            $returnValue1530 = $tmp2837;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2837));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2838));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2839));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2851));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2840));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2841));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2843));
            $tmp1521 = 55;
            goto $l1519;
            $l2860:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2862, 48);
        panda$core$Bit $tmp2863 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2862);
        if ($tmp2863.value) {
        {
            panda$core$String** $tmp2865 = ((panda$core$String**) ((char*) $match$434_91522->$data + 16));
            label2864 = *$tmp2865;
            org$pandalanguage$pandac$IRNode** $tmp2867 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 24));
            test2866 = *$tmp2867;
            panda$collections$ImmutableArray** $tmp2869 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 32));
            statements2868 = *$tmp2869;
            int $tmp2872;
            {
                panda$core$MutableString* $tmp2876 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2876);
                $tmp2875 = $tmp2876;
                $tmp2874 = $tmp2875;
                result2873 = $tmp2874;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2874));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2875));
                if (((panda$core$Bit) { label2864 != NULL }).value) {
                {
                    panda$core$String* $tmp2879 = panda$core$String$convert$R$panda$core$String(label2864);
                    $tmp2878 = $tmp2879;
                    panda$core$String* $tmp2881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2878, &$s2880);
                    $tmp2877 = $tmp2881;
                    panda$core$MutableString$append$panda$core$String(result2873, $tmp2877);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2877));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2878));
                }
                }
                panda$core$String* $tmp2885 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2884, ((panda$core$Object*) test2866));
                $tmp2883 = $tmp2885;
                panda$core$String* $tmp2887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2883, &$s2886);
                $tmp2882 = $tmp2887;
                panda$core$MutableString$append$panda$core$String(result2873, $tmp2882);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2882));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2883));
                {
                    int $tmp2890;
                    {
                        ITable* $tmp2894 = ((panda$collections$Iterable*) statements2868)->$class->itable;
                        while ($tmp2894->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2894 = $tmp2894->next;
                        }
                        $fn2896 $tmp2895 = $tmp2894->methods[0];
                        panda$collections$Iterator* $tmp2897 = $tmp2895(((panda$collections$Iterable*) statements2868));
                        $tmp2893 = $tmp2897;
                        $tmp2892 = $tmp2893;
                        Iter$654$172891 = $tmp2892;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2892));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2893));
                        $l2898:;
                        ITable* $tmp2901 = Iter$654$172891->$class->itable;
                        while ($tmp2901->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2901 = $tmp2901->next;
                        }
                        $fn2903 $tmp2902 = $tmp2901->methods[0];
                        panda$core$Bit $tmp2904 = $tmp2902(Iter$654$172891);
                        panda$core$Bit $tmp2905 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2904);
                        bool $tmp2900 = $tmp2905.value;
                        if (!$tmp2900) goto $l2899;
                        {
                            int $tmp2908;
                            {
                                ITable* $tmp2912 = Iter$654$172891->$class->itable;
                                while ($tmp2912->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2912 = $tmp2912->next;
                                }
                                $fn2914 $tmp2913 = $tmp2912->methods[1];
                                panda$core$Object* $tmp2915 = $tmp2913(Iter$654$172891);
                                $tmp2911 = $tmp2915;
                                $tmp2910 = ((org$pandalanguage$pandac$IRNode*) $tmp2911);
                                s2909 = $tmp2910;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2910));
                                panda$core$Panda$unref$panda$core$Object($tmp2911);
                                panda$core$String* $tmp2918 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2909), &$s2917);
                                $tmp2916 = $tmp2918;
                                panda$core$MutableString$append$panda$core$String(result2873, $tmp2916);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2916));
                            }
                            $tmp2908 = -1;
                            goto $l2906;
                            $l2906:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2909));
                            s2909 = NULL;
                            switch ($tmp2908) {
                                case -1: goto $l2919;
                            }
                            $l2919:;
                        }
                        goto $l2898;
                        $l2899:;
                    }
                    $tmp2890 = -1;
                    goto $l2888;
                    $l2888:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$654$172891));
                    Iter$654$172891 = NULL;
                    switch ($tmp2890) {
                        case -1: goto $l2920;
                    }
                    $l2920:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp2922, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp2921, $tmp2922);
                panda$core$MutableString$append$panda$core$Char8(result2873, $tmp2921);
                panda$core$String* $tmp2925 = panda$core$MutableString$finish$R$panda$core$String(result2873);
                $tmp2924 = $tmp2925;
                $tmp2923 = $tmp2924;
                $returnValue1530 = $tmp2923;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2923));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2924));
                $tmp2872 = 0;
                goto $l2870;
                $l2926:;
                $tmp1521 = 56;
                goto $l1519;
                $l2927:;
                return $returnValue1530;
            }
            $l2870:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2873));
            result2873 = NULL;
            switch ($tmp2872) {
                case 0: goto $l2926;
            }
            $l2929:;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp2930, false);
            if ($tmp2930.value) goto $l2931; else goto $l2932;
            $l2932:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2933, (panda$core$Int64) { 660 });
            abort();
            $l2931:;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
    $tmp1521 = -1;
    goto $l1519;
    $l1519:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1523));
    switch ($tmp1521) {
        case 23: goto $l2149;
        case 10: goto $l1801;
        case 52: goto $l2783;
        case 39: goto $l2546;
        case 32: goto $l2384;
        case 19: goto $l2014;
        case 2: goto $l1558;
        case 20: goto $l2041;
        case 17: goto $l1931;
        case 33: goto $l2406;
        case 47: goto $l2661;
        case 43: goto $l2595;
        case 49: goto $l2718;
        case 44: goto $l2604;
        case 42: goto $l2568;
        case -1: goto $l2934;
        case 0: goto $l1543;
        case 41: goto $l2562;
        case 8: goto $l1757;
        case 28: goto $l2342;
        case 14: goto $l1886;
        case 29: goto $l2363;
        case 9: goto $l1781;
        case 50: goto $l2741;
        case 13: goto $l1873;
        case 36: goto $l2503;
        case 53: goto $l2821;
        case 35: goto $l2490;
        case 5: goto $l1649;
        case 11: goto $l1810;
        case 40: goto $l2552;
        case 55: goto $l2860;
        case 54: goto $l2829;
        case 27: goto $l2245;
        case 18: goto $l1948;
        case 12: goto $l1839;
        case 15: goto $l1899;
        case 16: goto $l1903;
        case 34: goto $l2480;
        case 4: goto $l1596;
        case 7: goto $l1753;
        case 37: goto $l2507;
        case 45: goto $l2611;
        case 38: goto $l2524;
        case 22: goto $l2081;
        case 56: goto $l2927;
        case 51: goto $l2752;
        case 48: goto $l2696;
        case 6: goto $l1739;
        case 31: goto $l2378;
        case 1: goto $l1552;
        case 30: goto $l2366;
        case 46: goto $l2636;
        case 21: goto $l2061;
        case 3: goto $l1587;
        case 26: goto $l2185;
        case 24: goto $l2159;
        case 25: goto $l2172;
    }
    $l2934:;
    abort();
}
void org$pandalanguage$pandac$IRNode$cleanup(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$5_12941 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2942;
    panda$core$Int64 $tmp2943;
    org$pandalanguage$pandac$Position _f02945;
    org$pandalanguage$pandac$IRNode* _f12947 = NULL;
    org$pandalanguage$pandac$IRNode* _f22949 = NULL;
    panda$core$Int64 $tmp2951;
    org$pandalanguage$pandac$Position _f02953;
    org$pandalanguage$pandac$Type* _f12955 = NULL;
    panda$core$Int64 $tmp2957;
    org$pandalanguage$pandac$Position _f02959;
    org$pandalanguage$pandac$Type* _f12961 = NULL;
    org$pandalanguage$pandac$IRNode* _f22963 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind _f32965;
    org$pandalanguage$pandac$IRNode* _f42967 = NULL;
    panda$core$Int64 $tmp2969;
    org$pandalanguage$pandac$Position _f02971;
    org$pandalanguage$pandac$Type* _f12973 = NULL;
    panda$core$Bit _f22975;
    panda$core$Int64 $tmp2977;
    org$pandalanguage$pandac$Position _f02979;
    panda$collections$ImmutableArray* _f12981 = NULL;
    panda$core$Int64 $tmp2983;
    org$pandalanguage$pandac$Position _f02985;
    panda$collections$ImmutableArray* _f12987 = NULL;
    panda$collections$ImmutableArray* _f22989 = NULL;
    panda$core$Int64 $tmp2991;
    org$pandalanguage$pandac$Position _f02993;
    panda$core$String* _f12995 = NULL;
    panda$core$Int64 $tmp2997;
    org$pandalanguage$pandac$Position _f02999;
    org$pandalanguage$pandac$Type* _f13001 = NULL;
    org$pandalanguage$pandac$MethodRef* _f23003 = NULL;
    panda$collections$ImmutableArray* _f33005 = NULL;
    panda$core$Int64 $tmp3007;
    org$pandalanguage$pandac$Position _f03009;
    org$pandalanguage$pandac$IRNode* _f13011 = NULL;
    org$pandalanguage$pandac$Type* _f23013 = NULL;
    panda$core$Bit _f33015;
    panda$core$Int64 $tmp3017;
    org$pandalanguage$pandac$Position _f03019;
    org$pandalanguage$pandac$ChoiceEntry* _f13021 = NULL;
    panda$core$Int64 $tmp3023;
    org$pandalanguage$pandac$Position _f03025;
    org$pandalanguage$pandac$IRNode* _f13027 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* _f23029 = NULL;
    panda$core$Int64 _f33031;
    panda$core$Int64 $tmp3033;
    org$pandalanguage$pandac$Position _f03035;
    org$pandalanguage$pandac$Type* _f13037 = NULL;
    org$pandalanguage$pandac$IRNode* _f23039 = NULL;
    panda$core$Int64 $tmp3041;
    org$pandalanguage$pandac$Position _f03043;
    org$pandalanguage$pandac$Type* _f13045 = NULL;
    panda$core$Int64 $tmp3047;
    org$pandalanguage$pandac$Position _f03049;
    panda$core$String* _f13051 = NULL;
    panda$core$Int64 $tmp3053;
    org$pandalanguage$pandac$IRNode* _f03055 = NULL;
    org$pandalanguage$pandac$IRNode* _f13057 = NULL;
    panda$core$Int64 $tmp3059;
    org$pandalanguage$pandac$Position _f03061;
    panda$core$String* _f13063 = NULL;
    panda$collections$ImmutableArray* _f23065 = NULL;
    org$pandalanguage$pandac$IRNode* _f33067 = NULL;
    panda$core$Int64 $tmp3069;
    org$pandalanguage$pandac$IRNode* _f03071 = NULL;
    panda$collections$ImmutableArray* _f13073 = NULL;
    panda$core$Int64 $tmp3075;
    org$pandalanguage$pandac$IRNode* _f03077 = NULL;
    org$pandalanguage$pandac$IRNode* _f13079 = NULL;
    panda$core$Int64 $tmp3081;
    org$pandalanguage$pandac$Position _f03083;
    org$pandalanguage$pandac$Type* _f13085 = NULL;
    org$pandalanguage$pandac$IRNode* _f23087 = NULL;
    org$pandalanguage$pandac$FieldDecl* _f33089 = NULL;
    panda$core$Int64 $tmp3091;
    org$pandalanguage$pandac$Position _f03093;
    org$pandalanguage$pandac$IRNode* _f13095 = NULL;
    panda$collections$ImmutableArray* _f23097 = NULL;
    org$pandalanguage$pandac$IRNode* _f33099 = NULL;
    panda$core$Int64 $tmp3101;
    org$pandalanguage$pandac$Position _f03103;
    org$pandalanguage$pandac$Type* _f13105 = NULL;
    panda$core$UInt64 _f23107;
    panda$core$Int64 $tmp3109;
    org$pandalanguage$pandac$Position _f03111;
    org$pandalanguage$pandac$IRNode* _f13113 = NULL;
    panda$core$Int64 $tmp3115;
    org$pandalanguage$pandac$Position _f03117;
    org$pandalanguage$pandac$IRNode* _f13119 = NULL;
    panda$core$Int64 $tmp3121;
    org$pandalanguage$pandac$Position _f03123;
    panda$core$String* _f13125 = NULL;
    panda$collections$ImmutableArray* _f23127 = NULL;
    panda$core$Int64 $tmp3129;
    org$pandalanguage$pandac$Position _f03131;
    org$pandalanguage$pandac$IRNode* _f13133 = NULL;
    panda$collections$ImmutableArray* _f23135 = NULL;
    panda$collections$ImmutableArray* _f33137 = NULL;
    panda$core$Int64 $tmp3139;
    org$pandalanguage$pandac$Position _f03141;
    org$pandalanguage$pandac$Type* _f13143 = NULL;
    org$pandalanguage$pandac$IRNode* _f23145 = NULL;
    org$pandalanguage$pandac$MethodRef* _f33147 = NULL;
    panda$core$Int64 $tmp3149;
    org$pandalanguage$pandac$Position _f03151;
    org$pandalanguage$pandac$Type* _f13153 = NULL;
    panda$core$UInt64 _f23155;
    panda$core$Int64 $tmp3157;
    org$pandalanguage$pandac$Position _f03159;
    org$pandalanguage$pandac$Type* _f13161 = NULL;
    panda$core$Int64 $tmp3163;
    org$pandalanguage$pandac$Position _f03165;
    org$pandalanguage$pandac$parser$Token$Kind _f13167;
    org$pandalanguage$pandac$IRNode* _f23169 = NULL;
    panda$core$Int64 $tmp3171;
    org$pandalanguage$pandac$Position _f03173;
    panda$core$String* _f13175 = NULL;
    org$pandalanguage$pandac$IRNode* _f23177 = NULL;
    org$pandalanguage$pandac$IRNode* _f33179 = NULL;
    panda$collections$ImmutableArray* _f43181 = NULL;
    panda$core$Int64 $tmp3183;
    org$pandalanguage$pandac$Position _f03185;
    org$pandalanguage$pandac$Type* _f13187 = NULL;
    panda$core$Real64 _f23189;
    panda$core$Int64 $tmp3191;
    org$pandalanguage$pandac$Position _f03193;
    org$pandalanguage$pandac$IRNode* _f13195 = NULL;
    panda$core$Int64 $tmp3197;
    org$pandalanguage$pandac$Position _f03199;
    org$pandalanguage$pandac$Type* _f13201 = NULL;
    panda$core$Int64 _f23203;
    panda$core$Int64 $tmp3205;
    org$pandalanguage$pandac$IRNode* _f03207 = NULL;
    panda$core$Int64 _f13209;
    panda$core$Int64 $tmp3211;
    org$pandalanguage$pandac$Position _f03213;
    org$pandalanguage$pandac$Type* _f13215 = NULL;
    panda$core$Int64 $tmp3217;
    org$pandalanguage$pandac$Position _f03219;
    panda$core$String* _f13221 = NULL;
    panda$core$Int64 $tmp3223;
    org$pandalanguage$pandac$Position _f03225;
    org$pandalanguage$pandac$Type* _f13227 = NULL;
    panda$core$Int64 $tmp3229;
    org$pandalanguage$pandac$Position _f03231;
    org$pandalanguage$pandac$IRNode* _f13233 = NULL;
    org$pandalanguage$pandac$IRNode* _f23235 = NULL;
    org$pandalanguage$pandac$IRNode* _f33237 = NULL;
    panda$core$Int64 $tmp3239;
    org$pandalanguage$pandac$Position _f03241;
    org$pandalanguage$pandac$Type* _f13243 = NULL;
    panda$core$Int64 $tmp3245;
    org$pandalanguage$pandac$Position _f03247;
    panda$core$String* _f13249 = NULL;
    panda$core$Int64 $tmp3251;
    org$pandalanguage$pandac$Position _f03253;
    org$pandalanguage$pandac$Type* _f13255 = NULL;
    org$pandalanguage$pandac$IRNode* _f23257 = NULL;
    panda$collections$ImmutableArray* _f33259 = NULL;
    panda$core$Int64 $tmp3261;
    org$pandalanguage$pandac$Position _f03263;
    panda$collections$ImmutableArray* _f13265 = NULL;
    org$pandalanguage$pandac$ASTNode* _f23267 = NULL;
    panda$core$Int64 $tmp3269;
    org$pandalanguage$pandac$Position _f03271;
    org$pandalanguage$pandac$Type* _f13273 = NULL;
    org$pandalanguage$pandac$IRNode* _f23275 = NULL;
    panda$collections$ImmutableArray* _f33277 = NULL;
    panda$collections$ImmutableArray* _f43279 = NULL;
    panda$core$Int64 $tmp3281;
    org$pandalanguage$pandac$Position _f03283;
    org$pandalanguage$pandac$IRNode* _f13285 = NULL;
    panda$collections$ImmutableArray* _f23287 = NULL;
    panda$core$Int64 $tmp3289;
    org$pandalanguage$pandac$Position _f03291;
    org$pandalanguage$pandac$IRNode* _f13293 = NULL;
    org$pandalanguage$pandac$IRNode* _f23295 = NULL;
    panda$core$Bit _f33297;
    org$pandalanguage$pandac$IRNode* _f43299 = NULL;
    panda$core$Int64 $tmp3301;
    org$pandalanguage$pandac$Position _f03303;
    org$pandalanguage$pandac$Variable$Kind _f13305;
    panda$collections$ImmutableArray* _f23307 = NULL;
    panda$core$Int64 $tmp3309;
    org$pandalanguage$pandac$Position _f03311;
    org$pandalanguage$pandac$Variable* _f13313 = NULL;
    panda$core$Int64 $tmp3315;
    org$pandalanguage$pandac$Position _f03317;
    panda$collections$ImmutableArray* _f13319 = NULL;
    panda$collections$ImmutableArray* _f23321 = NULL;
    panda$core$Int64 $tmp3323;
    org$pandalanguage$pandac$Position _f03325;
    panda$core$String* _f13327 = NULL;
    org$pandalanguage$pandac$IRNode* _f23329 = NULL;
    panda$collections$ImmutableArray* _f33331 = NULL;
    int $tmp2937;
    {
        int $tmp2940;
        {
            $tmp2942 = self;
            $match$5_12941 = $tmp2942;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2942));
            panda$core$Int64$init$builtin_int64(&$tmp2943, 0);
            panda$core$Bit $tmp2944 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp2943);
            if ($tmp2944.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2946 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f02945 = *$tmp2946;
                org$pandalanguage$pandac$IRNode** $tmp2948 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 16));
                _f12947 = *$tmp2948;
                org$pandalanguage$pandac$IRNode** $tmp2950 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 24));
                _f22949 = *$tmp2950;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12947));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22949));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2951, 1);
            panda$core$Bit $tmp2952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp2951);
            if ($tmp2952.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2954 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f02953 = *$tmp2954;
                org$pandalanguage$pandac$Type** $tmp2956 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12941->$data + 16));
                _f12955 = *$tmp2956;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12955));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2957, 2);
            panda$core$Bit $tmp2958 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp2957);
            if ($tmp2958.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2960 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f02959 = *$tmp2960;
                org$pandalanguage$pandac$Type** $tmp2962 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12941->$data + 16));
                _f12961 = *$tmp2962;
                org$pandalanguage$pandac$IRNode** $tmp2964 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 24));
                _f22963 = *$tmp2964;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2966 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12941->$data + 32));
                _f32965 = *$tmp2966;
                org$pandalanguage$pandac$IRNode** $tmp2968 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 40));
                _f42967 = *$tmp2968;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12961));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22963));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42967));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2969, 3);
            panda$core$Bit $tmp2970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp2969);
            if ($tmp2970.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2972 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f02971 = *$tmp2972;
                org$pandalanguage$pandac$Type** $tmp2974 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12941->$data + 16));
                _f12973 = *$tmp2974;
                panda$core$Bit* $tmp2976 = ((panda$core$Bit*) ((char*) $match$5_12941->$data + 24));
                _f22975 = *$tmp2976;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12973));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2977, 4);
            panda$core$Bit $tmp2978 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp2977);
            if ($tmp2978.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2980 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f02979 = *$tmp2980;
                panda$collections$ImmutableArray** $tmp2982 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12941->$data + 16));
                _f12981 = *$tmp2982;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12981));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2983, 5);
            panda$core$Bit $tmp2984 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp2983);
            if ($tmp2984.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2986 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f02985 = *$tmp2986;
                panda$collections$ImmutableArray** $tmp2988 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12941->$data + 16));
                _f12987 = *$tmp2988;
                panda$collections$ImmutableArray** $tmp2990 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12941->$data + 24));
                _f22989 = *$tmp2990;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12987));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22989));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2991, 6);
            panda$core$Bit $tmp2992 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp2991);
            if ($tmp2992.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2994 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f02993 = *$tmp2994;
                panda$core$String** $tmp2996 = ((panda$core$String**) ((char*) $match$5_12941->$data + 16));
                _f12995 = *$tmp2996;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12995));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2997, 7);
            panda$core$Bit $tmp2998 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp2997);
            if ($tmp2998.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3000 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f02999 = *$tmp3000;
                org$pandalanguage$pandac$Type** $tmp3002 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12941->$data + 16));
                _f13001 = *$tmp3002;
                org$pandalanguage$pandac$MethodRef** $tmp3004 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_12941->$data + 24));
                _f23003 = *$tmp3004;
                panda$collections$ImmutableArray** $tmp3006 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12941->$data + 32));
                _f33005 = *$tmp3006;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13001));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23003));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33005));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3007, 8);
            panda$core$Bit $tmp3008 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3007);
            if ($tmp3008.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3010 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03009 = *$tmp3010;
                org$pandalanguage$pandac$IRNode** $tmp3012 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 16));
                _f13011 = *$tmp3012;
                org$pandalanguage$pandac$Type** $tmp3014 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12941->$data + 24));
                _f23013 = *$tmp3014;
                panda$core$Bit* $tmp3016 = ((panda$core$Bit*) ((char*) $match$5_12941->$data + 32));
                _f33015 = *$tmp3016;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13011));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23013));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3017, 9);
            panda$core$Bit $tmp3018 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3017);
            if ($tmp3018.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3020 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03019 = *$tmp3020;
                org$pandalanguage$pandac$ChoiceEntry** $tmp3022 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_12941->$data + 16));
                _f13021 = *$tmp3022;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13021));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3023, 10);
            panda$core$Bit $tmp3024 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3023);
            if ($tmp3024.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3026 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03025 = *$tmp3026;
                org$pandalanguage$pandac$IRNode** $tmp3028 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 16));
                _f13027 = *$tmp3028;
                org$pandalanguage$pandac$ChoiceEntry** $tmp3030 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_12941->$data + 24));
                _f23029 = *$tmp3030;
                panda$core$Int64* $tmp3032 = ((panda$core$Int64*) ((char*) $match$5_12941->$data + 32));
                _f33031 = *$tmp3032;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13027));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23029));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3033, 11);
            panda$core$Bit $tmp3034 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3033);
            if ($tmp3034.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3036 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03035 = *$tmp3036;
                org$pandalanguage$pandac$Type** $tmp3038 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12941->$data + 16));
                _f13037 = *$tmp3038;
                org$pandalanguage$pandac$IRNode** $tmp3040 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 24));
                _f23039 = *$tmp3040;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13037));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23039));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3041, 12);
            panda$core$Bit $tmp3042 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3041);
            if ($tmp3042.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3044 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03043 = *$tmp3044;
                org$pandalanguage$pandac$Type** $tmp3046 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12941->$data + 16));
                _f13045 = *$tmp3046;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13045));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3047, 13);
            panda$core$Bit $tmp3048 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3047);
            if ($tmp3048.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3050 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03049 = *$tmp3050;
                panda$core$String** $tmp3052 = ((panda$core$String**) ((char*) $match$5_12941->$data + 16));
                _f13051 = *$tmp3052;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13051));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3053, 14);
            panda$core$Bit $tmp3054 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3053);
            if ($tmp3054.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp3056 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 0));
                _f03055 = *$tmp3056;
                org$pandalanguage$pandac$IRNode** $tmp3058 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 8));
                _f13057 = *$tmp3058;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f03055));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13057));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3059, 15);
            panda$core$Bit $tmp3060 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3059);
            if ($tmp3060.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3062 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03061 = *$tmp3062;
                panda$core$String** $tmp3064 = ((panda$core$String**) ((char*) $match$5_12941->$data + 16));
                _f13063 = *$tmp3064;
                panda$collections$ImmutableArray** $tmp3066 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12941->$data + 24));
                _f23065 = *$tmp3066;
                org$pandalanguage$pandac$IRNode** $tmp3068 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 32));
                _f33067 = *$tmp3068;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13063));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23065));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33067));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3069, 16);
            panda$core$Bit $tmp3070 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3069);
            if ($tmp3070.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp3072 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 0));
                _f03071 = *$tmp3072;
                panda$collections$ImmutableArray** $tmp3074 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12941->$data + 8));
                _f13073 = *$tmp3074;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f03071));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13073));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3075, 17);
            panda$core$Bit $tmp3076 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3075);
            if ($tmp3076.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp3078 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 0));
                _f03077 = *$tmp3078;
                org$pandalanguage$pandac$IRNode** $tmp3080 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 8));
                _f13079 = *$tmp3080;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f03077));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13079));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3081, 18);
            panda$core$Bit $tmp3082 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3081);
            if ($tmp3082.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3084 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03083 = *$tmp3084;
                org$pandalanguage$pandac$Type** $tmp3086 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12941->$data + 16));
                _f13085 = *$tmp3086;
                org$pandalanguage$pandac$IRNode** $tmp3088 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 24));
                _f23087 = *$tmp3088;
                org$pandalanguage$pandac$FieldDecl** $tmp3090 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$5_12941->$data + 32));
                _f33089 = *$tmp3090;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13085));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23087));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33089));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3091, 19);
            panda$core$Bit $tmp3092 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3091);
            if ($tmp3092.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3094 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03093 = *$tmp3094;
                org$pandalanguage$pandac$IRNode** $tmp3096 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 16));
                _f13095 = *$tmp3096;
                panda$collections$ImmutableArray** $tmp3098 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12941->$data + 24));
                _f23097 = *$tmp3098;
                org$pandalanguage$pandac$IRNode** $tmp3100 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 32));
                _f33099 = *$tmp3100;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13095));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23097));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33099));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3101, 20);
            panda$core$Bit $tmp3102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3101);
            if ($tmp3102.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3104 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03103 = *$tmp3104;
                org$pandalanguage$pandac$Type** $tmp3106 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12941->$data + 16));
                _f13105 = *$tmp3106;
                panda$core$UInt64* $tmp3108 = ((panda$core$UInt64*) ((char*) $match$5_12941->$data + 24));
                _f23107 = *$tmp3108;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13105));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3109, 21);
            panda$core$Bit $tmp3110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3109);
            if ($tmp3110.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3112 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03111 = *$tmp3112;
                org$pandalanguage$pandac$IRNode** $tmp3114 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 16));
                _f13113 = *$tmp3114;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13113));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3115, 22);
            panda$core$Bit $tmp3116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3115);
            if ($tmp3116.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3118 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03117 = *$tmp3118;
                org$pandalanguage$pandac$IRNode** $tmp3120 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 16));
                _f13119 = *$tmp3120;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13119));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3121, 23);
            panda$core$Bit $tmp3122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3121);
            if ($tmp3122.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3124 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03123 = *$tmp3124;
                panda$core$String** $tmp3126 = ((panda$core$String**) ((char*) $match$5_12941->$data + 16));
                _f13125 = *$tmp3126;
                panda$collections$ImmutableArray** $tmp3128 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12941->$data + 24));
                _f23127 = *$tmp3128;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13125));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23127));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3129, 24);
            panda$core$Bit $tmp3130 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3129);
            if ($tmp3130.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3132 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03131 = *$tmp3132;
                org$pandalanguage$pandac$IRNode** $tmp3134 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 16));
                _f13133 = *$tmp3134;
                panda$collections$ImmutableArray** $tmp3136 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12941->$data + 24));
                _f23135 = *$tmp3136;
                panda$collections$ImmutableArray** $tmp3138 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12941->$data + 32));
                _f33137 = *$tmp3138;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13133));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23135));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33137));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3139, 25);
            panda$core$Bit $tmp3140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3139);
            if ($tmp3140.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3142 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03141 = *$tmp3142;
                org$pandalanguage$pandac$Type** $tmp3144 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12941->$data + 16));
                _f13143 = *$tmp3144;
                org$pandalanguage$pandac$IRNode** $tmp3146 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 24));
                _f23145 = *$tmp3146;
                org$pandalanguage$pandac$MethodRef** $tmp3148 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_12941->$data + 32));
                _f33147 = *$tmp3148;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13143));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23145));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33147));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3149, 26);
            panda$core$Bit $tmp3150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3149);
            if ($tmp3150.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3152 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03151 = *$tmp3152;
                org$pandalanguage$pandac$Type** $tmp3154 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12941->$data + 16));
                _f13153 = *$tmp3154;
                panda$core$UInt64* $tmp3156 = ((panda$core$UInt64*) ((char*) $match$5_12941->$data + 24));
                _f23155 = *$tmp3156;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13153));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3157, 27);
            panda$core$Bit $tmp3158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3157);
            if ($tmp3158.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3160 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03159 = *$tmp3160;
                org$pandalanguage$pandac$Type** $tmp3162 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12941->$data + 16));
                _f13161 = *$tmp3162;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13161));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3163, 28);
            panda$core$Bit $tmp3164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3163);
            if ($tmp3164.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3166 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03165 = *$tmp3166;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp3168 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12941->$data + 16));
                _f13167 = *$tmp3168;
                org$pandalanguage$pandac$IRNode** $tmp3170 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 24));
                _f23169 = *$tmp3170;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23169));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3171, 29);
            panda$core$Bit $tmp3172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3171);
            if ($tmp3172.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3174 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03173 = *$tmp3174;
                panda$core$String** $tmp3176 = ((panda$core$String**) ((char*) $match$5_12941->$data + 16));
                _f13175 = *$tmp3176;
                org$pandalanguage$pandac$IRNode** $tmp3178 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 24));
                _f23177 = *$tmp3178;
                org$pandalanguage$pandac$IRNode** $tmp3180 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 32));
                _f33179 = *$tmp3180;
                panda$collections$ImmutableArray** $tmp3182 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12941->$data + 40));
                _f43181 = *$tmp3182;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13175));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23177));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33179));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f43181));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3183, 30);
            panda$core$Bit $tmp3184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3183);
            if ($tmp3184.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3186 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03185 = *$tmp3186;
                org$pandalanguage$pandac$Type** $tmp3188 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12941->$data + 16));
                _f13187 = *$tmp3188;
                panda$core$Real64* $tmp3190 = ((panda$core$Real64*) ((char*) $match$5_12941->$data + 24));
                _f23189 = *$tmp3190;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13187));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3191, 31);
            panda$core$Bit $tmp3192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3191);
            if ($tmp3192.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3194 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03193 = *$tmp3194;
                org$pandalanguage$pandac$IRNode** $tmp3196 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 16));
                _f13195 = *$tmp3196;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13195));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3197, 32);
            panda$core$Bit $tmp3198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3197);
            if ($tmp3198.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3200 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03199 = *$tmp3200;
                org$pandalanguage$pandac$Type** $tmp3202 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12941->$data + 16));
                _f13201 = *$tmp3202;
                panda$core$Int64* $tmp3204 = ((panda$core$Int64*) ((char*) $match$5_12941->$data + 24));
                _f23203 = *$tmp3204;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13201));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3205, 33);
            panda$core$Bit $tmp3206 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3205);
            if ($tmp3206.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp3208 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 0));
                _f03207 = *$tmp3208;
                panda$core$Int64* $tmp3210 = ((panda$core$Int64*) ((char*) $match$5_12941->$data + 8));
                _f13209 = *$tmp3210;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f03207));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3211, 34);
            panda$core$Bit $tmp3212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3211);
            if ($tmp3212.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3214 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03213 = *$tmp3214;
                org$pandalanguage$pandac$Type** $tmp3216 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12941->$data + 16));
                _f13215 = *$tmp3216;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13215));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3217, 35);
            panda$core$Bit $tmp3218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3217);
            if ($tmp3218.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3220 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03219 = *$tmp3220;
                panda$core$String** $tmp3222 = ((panda$core$String**) ((char*) $match$5_12941->$data + 16));
                _f13221 = *$tmp3222;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13221));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3223, 36);
            panda$core$Bit $tmp3224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3223);
            if ($tmp3224.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3226 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03225 = *$tmp3226;
                org$pandalanguage$pandac$Type** $tmp3228 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12941->$data + 16));
                _f13227 = *$tmp3228;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13227));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3229, 37);
            panda$core$Bit $tmp3230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3229);
            if ($tmp3230.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3232 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03231 = *$tmp3232;
                org$pandalanguage$pandac$IRNode** $tmp3234 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 16));
                _f13233 = *$tmp3234;
                org$pandalanguage$pandac$IRNode** $tmp3236 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 24));
                _f23235 = *$tmp3236;
                org$pandalanguage$pandac$IRNode** $tmp3238 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 32));
                _f33237 = *$tmp3238;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13233));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23235));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33237));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3239, 38);
            panda$core$Bit $tmp3240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3239);
            if ($tmp3240.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3242 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03241 = *$tmp3242;
                org$pandalanguage$pandac$Type** $tmp3244 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12941->$data + 16));
                _f13243 = *$tmp3244;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13243));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3245, 39);
            panda$core$Bit $tmp3246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3245);
            if ($tmp3246.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3248 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03247 = *$tmp3248;
                panda$core$String** $tmp3250 = ((panda$core$String**) ((char*) $match$5_12941->$data + 16));
                _f13249 = *$tmp3250;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13249));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3251, 40);
            panda$core$Bit $tmp3252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3251);
            if ($tmp3252.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3254 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03253 = *$tmp3254;
                org$pandalanguage$pandac$Type** $tmp3256 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12941->$data + 16));
                _f13255 = *$tmp3256;
                org$pandalanguage$pandac$IRNode** $tmp3258 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 24));
                _f23257 = *$tmp3258;
                panda$collections$ImmutableArray** $tmp3260 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12941->$data + 32));
                _f33259 = *$tmp3260;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13255));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23257));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33259));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3261, 41);
            panda$core$Bit $tmp3262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3261);
            if ($tmp3262.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3264 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03263 = *$tmp3264;
                panda$collections$ImmutableArray** $tmp3266 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12941->$data + 16));
                _f13265 = *$tmp3266;
                org$pandalanguage$pandac$ASTNode** $tmp3268 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12941->$data + 24));
                _f23267 = *$tmp3268;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13265));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23267));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3269, 42);
            panda$core$Bit $tmp3270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3269);
            if ($tmp3270.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3272 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03271 = *$tmp3272;
                org$pandalanguage$pandac$Type** $tmp3274 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12941->$data + 16));
                _f13273 = *$tmp3274;
                org$pandalanguage$pandac$IRNode** $tmp3276 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 24));
                _f23275 = *$tmp3276;
                panda$collections$ImmutableArray** $tmp3278 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12941->$data + 32));
                _f33277 = *$tmp3278;
                panda$collections$ImmutableArray** $tmp3280 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12941->$data + 40));
                _f43279 = *$tmp3280;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13273));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23275));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33277));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f43279));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3281, 43);
            panda$core$Bit $tmp3282 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3281);
            if ($tmp3282.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3284 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03283 = *$tmp3284;
                org$pandalanguage$pandac$IRNode** $tmp3286 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 16));
                _f13285 = *$tmp3286;
                panda$collections$ImmutableArray** $tmp3288 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12941->$data + 24));
                _f23287 = *$tmp3288;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13285));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23287));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3289, 44);
            panda$core$Bit $tmp3290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3289);
            if ($tmp3290.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3292 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03291 = *$tmp3292;
                org$pandalanguage$pandac$IRNode** $tmp3294 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 16));
                _f13293 = *$tmp3294;
                org$pandalanguage$pandac$IRNode** $tmp3296 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 24));
                _f23295 = *$tmp3296;
                panda$core$Bit* $tmp3298 = ((panda$core$Bit*) ((char*) $match$5_12941->$data + 32));
                _f33297 = *$tmp3298;
                org$pandalanguage$pandac$IRNode** $tmp3300 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 33));
                _f43299 = *$tmp3300;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13293));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23295));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f43299));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3301, 45);
            panda$core$Bit $tmp3302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3301);
            if ($tmp3302.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3304 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03303 = *$tmp3304;
                org$pandalanguage$pandac$Variable$Kind* $tmp3306 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_12941->$data + 16));
                _f13305 = *$tmp3306;
                panda$collections$ImmutableArray** $tmp3308 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12941->$data + 24));
                _f23307 = *$tmp3308;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23307));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3309, 46);
            panda$core$Bit $tmp3310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3309);
            if ($tmp3310.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3312 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03311 = *$tmp3312;
                org$pandalanguage$pandac$Variable** $tmp3314 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$5_12941->$data + 16));
                _f13313 = *$tmp3314;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13313));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3315, 47);
            panda$core$Bit $tmp3316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3315);
            if ($tmp3316.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3318 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03317 = *$tmp3318;
                panda$collections$ImmutableArray** $tmp3320 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12941->$data + 16));
                _f13319 = *$tmp3320;
                panda$collections$ImmutableArray** $tmp3322 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12941->$data + 24));
                _f23321 = *$tmp3322;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13319));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23321));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3323, 48);
            panda$core$Bit $tmp3324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12941->$rawValue, $tmp3323);
            if ($tmp3324.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3326 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12941->$data + 0));
                _f03325 = *$tmp3326;
                panda$core$String** $tmp3328 = ((panda$core$String**) ((char*) $match$5_12941->$data + 16));
                _f13327 = *$tmp3328;
                org$pandalanguage$pandac$IRNode** $tmp3330 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12941->$data + 24));
                _f23329 = *$tmp3330;
                panda$collections$ImmutableArray** $tmp3332 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12941->$data + 32));
                _f33331 = *$tmp3332;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13327));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23329));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33331));
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
        }
        $tmp2940 = -1;
        goto $l2938;
        $l2938:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2942));
        switch ($tmp2940) {
            case -1: goto $l3333;
        }
        $l3333:;
    }
    $tmp2937 = -1;
    goto $l2935;
    $l2935:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2937) {
        case -1: goto $l3334;
    }
    $l3334:;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3336;
    org$pandalanguage$pandac$IRNode* $tmp3339;
    org$pandalanguage$pandac$IRNode* $tmp3340;
    org$pandalanguage$pandac$IRNode* $tmp3343;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3335 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3335 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3337 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3336 = *$tmp3337;
        org$pandalanguage$pandac$IRNode** $tmp3338 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3339 = p_f1;
        *$tmp3338 = $tmp3339;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3339));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3336));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3341 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3340 = *$tmp3341;
        org$pandalanguage$pandac$IRNode** $tmp3342 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3343 = p_f2;
        *$tmp3342 = $tmp3343;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3343));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3340));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1) {
    org$pandalanguage$pandac$Type* $tmp3345;
    org$pandalanguage$pandac$Type* $tmp3348;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3344 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3344 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3346 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3345 = *$tmp3346;
        org$pandalanguage$pandac$Type** $tmp3347 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3348 = p_f1;
        *$tmp3347 = $tmp3348;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3348));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3345));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$parser$Token$Kind p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$Type* $tmp3350;
    org$pandalanguage$pandac$Type* $tmp3353;
    org$pandalanguage$pandac$IRNode* $tmp3354;
    org$pandalanguage$pandac$IRNode* $tmp3357;
    org$pandalanguage$pandac$IRNode* $tmp3359;
    org$pandalanguage$pandac$IRNode* $tmp3362;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3349 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3349 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3351 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3350 = *$tmp3351;
        org$pandalanguage$pandac$Type** $tmp3352 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3353 = p_f1;
        *$tmp3352 = $tmp3353;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3353));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3350));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3355 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3354 = *$tmp3355;
        org$pandalanguage$pandac$IRNode** $tmp3356 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3357 = p_f2;
        *$tmp3356 = $tmp3357;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3357));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3354));
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp3358 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 32));
    *$tmp3358 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp3360 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        $tmp3359 = *$tmp3360;
        org$pandalanguage$pandac$IRNode** $tmp3361 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        $tmp3362 = p_f4;
        *$tmp3361 = $tmp3362;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3362));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3359));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Bit p_f2) {
    org$pandalanguage$pandac$Type* $tmp3364;
    org$pandalanguage$pandac$Type* $tmp3367;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3363 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3363 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3365 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3364 = *$tmp3365;
        org$pandalanguage$pandac$Type** $tmp3366 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3367 = p_f1;
        *$tmp3366 = $tmp3367;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3367));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3364));
    }
    panda$core$Bit* $tmp3368 = ((panda$core$Bit*) ((char*) self->$data + 24));
    *$tmp3368 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    panda$collections$ImmutableArray* $tmp3370;
    panda$collections$ImmutableArray* $tmp3373;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3369 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3369 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp3371 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3370 = *$tmp3371;
        panda$collections$ImmutableArray** $tmp3372 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3373 = p_f1;
        *$tmp3372 = $tmp3373;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3373));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3370));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp3375;
    panda$collections$ImmutableArray* $tmp3378;
    panda$collections$ImmutableArray* $tmp3379;
    panda$collections$ImmutableArray* $tmp3382;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3374 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3374 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp3376 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3375 = *$tmp3376;
        panda$collections$ImmutableArray** $tmp3377 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3378 = p_f1;
        *$tmp3377 = $tmp3378;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3378));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3375));
    }
    {
        panda$collections$ImmutableArray** $tmp3380 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3379 = *$tmp3380;
        panda$collections$ImmutableArray** $tmp3381 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3382 = p_f2;
        *$tmp3381 = $tmp3382;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3382));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3379));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp3384;
    panda$core$String* $tmp3387;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3383 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3383 = p_f0;
    {
        panda$core$String** $tmp3385 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3384 = *$tmp3385;
        panda$core$String** $tmp3386 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3387 = p_f1;
        *$tmp3386 = $tmp3387;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3387));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3384));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$MethodRef* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3389;
    org$pandalanguage$pandac$Type* $tmp3392;
    org$pandalanguage$pandac$MethodRef* $tmp3393;
    org$pandalanguage$pandac$MethodRef* $tmp3396;
    panda$collections$ImmutableArray* $tmp3397;
    panda$collections$ImmutableArray* $tmp3400;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3388 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3388 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3390 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3389 = *$tmp3390;
        org$pandalanguage$pandac$Type** $tmp3391 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3392 = p_f1;
        *$tmp3391 = $tmp3392;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3392));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3389));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp3394 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp3393 = *$tmp3394;
        org$pandalanguage$pandac$MethodRef** $tmp3395 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp3396 = p_f2;
        *$tmp3395 = $tmp3396;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3396));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3393));
    }
    {
        panda$collections$ImmutableArray** $tmp3398 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3397 = *$tmp3398;
        panda$collections$ImmutableArray** $tmp3399 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3400 = p_f3;
        *$tmp3399 = $tmp3400;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3400));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3397));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$Type* p_f2, panda$core$Bit p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3402;
    org$pandalanguage$pandac$IRNode* $tmp3405;
    org$pandalanguage$pandac$Type* $tmp3406;
    org$pandalanguage$pandac$Type* $tmp3409;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3401 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3401 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3403 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3402 = *$tmp3403;
        org$pandalanguage$pandac$IRNode** $tmp3404 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3405 = p_f1;
        *$tmp3404 = $tmp3405;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3405));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3402));
    }
    {
        org$pandalanguage$pandac$Type** $tmp3407 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp3406 = *$tmp3407;
        org$pandalanguage$pandac$Type** $tmp3408 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp3409 = p_f2;
        *$tmp3408 = $tmp3409;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3409));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3406));
    }
    panda$core$Bit* $tmp3410 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp3410 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ChoiceEntry(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ChoiceEntry* p_f1) {
    org$pandalanguage$pandac$ChoiceEntry* $tmp3412;
    org$pandalanguage$pandac$ChoiceEntry* $tmp3415;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3411 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3411 = p_f0;
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp3413 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        $tmp3412 = *$tmp3413;
        org$pandalanguage$pandac$ChoiceEntry** $tmp3414 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        $tmp3415 = p_f1;
        *$tmp3414 = $tmp3415;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3415));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3412));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3417;
    org$pandalanguage$pandac$IRNode* $tmp3420;
    org$pandalanguage$pandac$ChoiceEntry* $tmp3421;
    org$pandalanguage$pandac$ChoiceEntry* $tmp3424;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3416 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3416 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3418 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3417 = *$tmp3418;
        org$pandalanguage$pandac$IRNode** $tmp3419 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3420 = p_f1;
        *$tmp3419 = $tmp3420;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3420));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3417));
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp3422 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp3421 = *$tmp3422;
        org$pandalanguage$pandac$ChoiceEntry** $tmp3423 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp3424 = p_f2;
        *$tmp3423 = $tmp3424;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3424));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3421));
    }
    panda$core$Int64* $tmp3425 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp3425 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$Type* $tmp3427;
    org$pandalanguage$pandac$Type* $tmp3430;
    org$pandalanguage$pandac$IRNode* $tmp3431;
    org$pandalanguage$pandac$IRNode* $tmp3434;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3426 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3426 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3428 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3427 = *$tmp3428;
        org$pandalanguage$pandac$Type** $tmp3429 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3430 = p_f1;
        *$tmp3429 = $tmp3430;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3430));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3427));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3432 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3431 = *$tmp3432;
        org$pandalanguage$pandac$IRNode** $tmp3433 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3434 = p_f2;
        *$tmp3433 = $tmp3434;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3434));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3431));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3435;
    org$pandalanguage$pandac$IRNode* $tmp3438;
    org$pandalanguage$pandac$IRNode* $tmp3439;
    org$pandalanguage$pandac$IRNode* $tmp3442;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3436 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3435 = *$tmp3436;
        org$pandalanguage$pandac$IRNode** $tmp3437 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3438 = p_f0;
        *$tmp3437 = $tmp3438;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3438));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3435));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3440 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3439 = *$tmp3440;
        org$pandalanguage$pandac$IRNode** $tmp3441 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3442 = p_f1;
        *$tmp3441 = $tmp3442;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3442));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3439));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    panda$core$String* $tmp3444;
    panda$core$String* $tmp3447;
    panda$collections$ImmutableArray* $tmp3448;
    panda$collections$ImmutableArray* $tmp3451;
    org$pandalanguage$pandac$IRNode* $tmp3452;
    org$pandalanguage$pandac$IRNode* $tmp3455;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3443 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3443 = p_f0;
    {
        panda$core$String** $tmp3445 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3444 = *$tmp3445;
        panda$core$String** $tmp3446 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3447 = p_f1;
        *$tmp3446 = $tmp3447;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3447));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3444));
    }
    {
        panda$collections$ImmutableArray** $tmp3449 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3448 = *$tmp3449;
        panda$collections$ImmutableArray** $tmp3450 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3451 = p_f2;
        *$tmp3450 = $tmp3451;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3451));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3448));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3453 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3452 = *$tmp3453;
        org$pandalanguage$pandac$IRNode** $tmp3454 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3455 = p_f3;
        *$tmp3454 = $tmp3455;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3455));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3452));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$collections$ImmutableArray* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3456;
    org$pandalanguage$pandac$IRNode* $tmp3459;
    panda$collections$ImmutableArray* $tmp3460;
    panda$collections$ImmutableArray* $tmp3463;
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
        panda$collections$ImmutableArray** $tmp3461 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 8));
        $tmp3460 = *$tmp3461;
        panda$collections$ImmutableArray** $tmp3462 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 8));
        $tmp3463 = p_f1;
        *$tmp3462 = $tmp3463;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3463));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3460));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3464;
    org$pandalanguage$pandac$IRNode* $tmp3467;
    org$pandalanguage$pandac$IRNode* $tmp3468;
    org$pandalanguage$pandac$IRNode* $tmp3471;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3465 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3464 = *$tmp3465;
        org$pandalanguage$pandac$IRNode** $tmp3466 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3467 = p_f0;
        *$tmp3466 = $tmp3467;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3467));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3464));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3469 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3468 = *$tmp3469;
        org$pandalanguage$pandac$IRNode** $tmp3470 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3471 = p_f1;
        *$tmp3470 = $tmp3471;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3471));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3468));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$FieldDecl* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3473;
    org$pandalanguage$pandac$Type* $tmp3476;
    org$pandalanguage$pandac$IRNode* $tmp3477;
    org$pandalanguage$pandac$IRNode* $tmp3480;
    org$pandalanguage$pandac$FieldDecl* $tmp3481;
    org$pandalanguage$pandac$FieldDecl* $tmp3484;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3472 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3472 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3474 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3473 = *$tmp3474;
        org$pandalanguage$pandac$Type** $tmp3475 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3476 = p_f1;
        *$tmp3475 = $tmp3476;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3476));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3473));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3478 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3477 = *$tmp3478;
        org$pandalanguage$pandac$IRNode** $tmp3479 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3480 = p_f2;
        *$tmp3479 = $tmp3480;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3480));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3477));
    }
    {
        org$pandalanguage$pandac$FieldDecl** $tmp3482 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp3481 = *$tmp3482;
        org$pandalanguage$pandac$FieldDecl** $tmp3483 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp3484 = p_f3;
        *$tmp3483 = $tmp3484;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3484));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3481));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3486;
    org$pandalanguage$pandac$IRNode* $tmp3489;
    panda$collections$ImmutableArray* $tmp3490;
    panda$collections$ImmutableArray* $tmp3493;
    org$pandalanguage$pandac$IRNode* $tmp3494;
    org$pandalanguage$pandac$IRNode* $tmp3497;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3485 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3485 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3487 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3486 = *$tmp3487;
        org$pandalanguage$pandac$IRNode** $tmp3488 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3489 = p_f1;
        *$tmp3488 = $tmp3489;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3489));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3486));
    }
    {
        panda$collections$ImmutableArray** $tmp3491 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3490 = *$tmp3491;
        panda$collections$ImmutableArray** $tmp3492 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3493 = p_f2;
        *$tmp3492 = $tmp3493;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3493));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3490));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3495 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3494 = *$tmp3495;
        org$pandalanguage$pandac$IRNode** $tmp3496 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3497 = p_f3;
        *$tmp3496 = $tmp3497;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3497));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3494));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$UInt64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3499;
    org$pandalanguage$pandac$Type* $tmp3502;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3498 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3498 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3500 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3499 = *$tmp3500;
        org$pandalanguage$pandac$Type** $tmp3501 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3502 = p_f1;
        *$tmp3501 = $tmp3502;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3502));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3499));
    }
    panda$core$UInt64* $tmp3503 = ((panda$core$UInt64*) ((char*) self->$data + 24));
    *$tmp3503 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3505;
    org$pandalanguage$pandac$IRNode* $tmp3508;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3504 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3504 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3506 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3505 = *$tmp3506;
        org$pandalanguage$pandac$IRNode** $tmp3507 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3508 = p_f1;
        *$tmp3507 = $tmp3508;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3508));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3505));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp3510;
    panda$core$String* $tmp3513;
    panda$collections$ImmutableArray* $tmp3514;
    panda$collections$ImmutableArray* $tmp3517;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3509 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3509 = p_f0;
    {
        panda$core$String** $tmp3511 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3510 = *$tmp3511;
        panda$core$String** $tmp3512 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3513 = p_f1;
        *$tmp3512 = $tmp3513;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3513));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3510));
    }
    {
        panda$collections$ImmutableArray** $tmp3515 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3514 = *$tmp3515;
        panda$collections$ImmutableArray** $tmp3516 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3517 = p_f2;
        *$tmp3516 = $tmp3517;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3517));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3514));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3519;
    org$pandalanguage$pandac$IRNode* $tmp3522;
    panda$collections$ImmutableArray* $tmp3523;
    panda$collections$ImmutableArray* $tmp3526;
    panda$collections$ImmutableArray* $tmp3527;
    panda$collections$ImmutableArray* $tmp3530;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3518 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3518 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3520 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3519 = *$tmp3520;
        org$pandalanguage$pandac$IRNode** $tmp3521 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3522 = p_f1;
        *$tmp3521 = $tmp3522;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3522));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3519));
    }
    {
        panda$collections$ImmutableArray** $tmp3524 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3523 = *$tmp3524;
        panda$collections$ImmutableArray** $tmp3525 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3526 = p_f2;
        *$tmp3525 = $tmp3526;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3526));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3523));
    }
    {
        panda$collections$ImmutableArray** $tmp3528 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3527 = *$tmp3528;
        panda$collections$ImmutableArray** $tmp3529 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3530 = p_f3;
        *$tmp3529 = $tmp3530;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3530));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3527));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$MethodRef* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3532;
    org$pandalanguage$pandac$Type* $tmp3535;
    org$pandalanguage$pandac$IRNode* $tmp3536;
    org$pandalanguage$pandac$IRNode* $tmp3539;
    org$pandalanguage$pandac$MethodRef* $tmp3540;
    org$pandalanguage$pandac$MethodRef* $tmp3543;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3531 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3531 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3533 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3532 = *$tmp3533;
        org$pandalanguage$pandac$Type** $tmp3534 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3535 = p_f1;
        *$tmp3534 = $tmp3535;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3535));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3532));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3537 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3536 = *$tmp3537;
        org$pandalanguage$pandac$IRNode** $tmp3538 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3539 = p_f2;
        *$tmp3538 = $tmp3539;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3539));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3536));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp3541 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 32));
        $tmp3540 = *$tmp3541;
        org$pandalanguage$pandac$MethodRef** $tmp3542 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 32));
        $tmp3543 = p_f3;
        *$tmp3542 = $tmp3543;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3543));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3540));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3546;
    org$pandalanguage$pandac$IRNode* $tmp3549;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3544 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3544 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp3545 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp3545 = p_f1;
    {
        org$pandalanguage$pandac$IRNode** $tmp3547 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3546 = *$tmp3547;
        org$pandalanguage$pandac$IRNode** $tmp3548 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3549 = p_f2;
        *$tmp3548 = $tmp3549;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3549));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3546));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    panda$core$String* $tmp3551;
    panda$core$String* $tmp3554;
    org$pandalanguage$pandac$IRNode* $tmp3555;
    org$pandalanguage$pandac$IRNode* $tmp3558;
    org$pandalanguage$pandac$IRNode* $tmp3559;
    org$pandalanguage$pandac$IRNode* $tmp3562;
    panda$collections$ImmutableArray* $tmp3563;
    panda$collections$ImmutableArray* $tmp3566;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3550 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3550 = p_f0;
    {
        panda$core$String** $tmp3552 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3551 = *$tmp3552;
        panda$core$String** $tmp3553 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3554 = p_f1;
        *$tmp3553 = $tmp3554;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3554));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3551));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3556 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3555 = *$tmp3556;
        org$pandalanguage$pandac$IRNode** $tmp3557 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3558 = p_f2;
        *$tmp3557 = $tmp3558;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3558));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3555));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3560 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3559 = *$tmp3560;
        org$pandalanguage$pandac$IRNode** $tmp3561 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3562 = p_f3;
        *$tmp3561 = $tmp3562;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3562));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3559));
    }
    {
        panda$collections$ImmutableArray** $tmp3564 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3563 = *$tmp3564;
        panda$collections$ImmutableArray** $tmp3565 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3566 = p_f4;
        *$tmp3565 = $tmp3566;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3566));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3563));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Real64 p_f2) {
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
    panda$core$Real64* $tmp3572 = ((panda$core$Real64*) ((char*) self->$data + 24));
    *$tmp3572 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3574;
    org$pandalanguage$pandac$IRNode* $tmp3577;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3573 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3573 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3575 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3574 = *$tmp3575;
        org$pandalanguage$pandac$IRNode** $tmp3576 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3577 = p_f1;
        *$tmp3576 = $tmp3577;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3577));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3574));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Int64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3579;
    org$pandalanguage$pandac$Type* $tmp3582;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3578 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3578 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3580 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3579 = *$tmp3580;
        org$pandalanguage$pandac$Type** $tmp3581 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3582 = p_f1;
        *$tmp3581 = $tmp3582;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3582));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3579));
    }
    panda$core$Int64* $tmp3583 = ((panda$core$Int64*) ((char*) self->$data + 24));
    *$tmp3583 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$core$Int64 p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3584;
    org$pandalanguage$pandac$IRNode* $tmp3587;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3585 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3584 = *$tmp3585;
        org$pandalanguage$pandac$IRNode** $tmp3586 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3587 = p_f0;
        *$tmp3586 = $tmp3587;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3587));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3584));
    }
    panda$core$Int64* $tmp3588 = ((panda$core$Int64*) ((char*) self->$data + 8));
    *$tmp3588 = p_f1;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp3590;
    panda$core$String* $tmp3593;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3589 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3589 = p_f0;
    {
        panda$core$String** $tmp3591 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3590 = *$tmp3591;
        panda$core$String** $tmp3592 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3593 = p_f1;
        *$tmp3592 = $tmp3593;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3593));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3590));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3595;
    org$pandalanguage$pandac$IRNode* $tmp3598;
    org$pandalanguage$pandac$IRNode* $tmp3599;
    org$pandalanguage$pandac$IRNode* $tmp3602;
    org$pandalanguage$pandac$IRNode* $tmp3603;
    org$pandalanguage$pandac$IRNode* $tmp3606;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3594 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3594 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3596 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3595 = *$tmp3596;
        org$pandalanguage$pandac$IRNode** $tmp3597 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3598 = p_f1;
        *$tmp3597 = $tmp3598;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3598));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3595));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3600 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3599 = *$tmp3600;
        org$pandalanguage$pandac$IRNode** $tmp3601 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3602 = p_f2;
        *$tmp3601 = $tmp3602;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3602));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3599));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3604 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3603 = *$tmp3604;
        org$pandalanguage$pandac$IRNode** $tmp3605 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3606 = p_f3;
        *$tmp3605 = $tmp3606;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3606));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3603));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3608;
    org$pandalanguage$pandac$Type* $tmp3611;
    org$pandalanguage$pandac$IRNode* $tmp3612;
    org$pandalanguage$pandac$IRNode* $tmp3615;
    panda$collections$ImmutableArray* $tmp3616;
    panda$collections$ImmutableArray* $tmp3619;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3607 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3607 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3609 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3608 = *$tmp3609;
        org$pandalanguage$pandac$Type** $tmp3610 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3611 = p_f1;
        *$tmp3610 = $tmp3611;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3611));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3608));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3613 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3612 = *$tmp3613;
        org$pandalanguage$pandac$IRNode** $tmp3614 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3615 = p_f2;
        *$tmp3614 = $tmp3615;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3615));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3612));
    }
    {
        panda$collections$ImmutableArray** $tmp3617 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3616 = *$tmp3617;
        panda$collections$ImmutableArray** $tmp3618 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3619 = p_f3;
        *$tmp3618 = $tmp3619;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3619));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3616));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTpanda$core$String$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$collections$ImmutableArray* $tmp3621;
    panda$collections$ImmutableArray* $tmp3624;
    org$pandalanguage$pandac$ASTNode* $tmp3625;
    org$pandalanguage$pandac$ASTNode* $tmp3628;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3620 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3620 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp3622 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3621 = *$tmp3622;
        panda$collections$ImmutableArray** $tmp3623 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3624 = p_f1;
        *$tmp3623 = $tmp3624;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3624));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3621));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp3626 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp3625 = *$tmp3626;
        org$pandalanguage$pandac$ASTNode** $tmp3627 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp3628 = p_f2;
        *$tmp3627 = $tmp3628;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3628));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3625));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3, panda$collections$ImmutableArray* p_f4) {
    org$pandalanguage$pandac$Type* $tmp3630;
    org$pandalanguage$pandac$Type* $tmp3633;
    org$pandalanguage$pandac$IRNode* $tmp3634;
    org$pandalanguage$pandac$IRNode* $tmp3637;
    panda$collections$ImmutableArray* $tmp3638;
    panda$collections$ImmutableArray* $tmp3641;
    panda$collections$ImmutableArray* $tmp3642;
    panda$collections$ImmutableArray* $tmp3645;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3629 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3629 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3631 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3630 = *$tmp3631;
        org$pandalanguage$pandac$Type** $tmp3632 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3633 = p_f1;
        *$tmp3632 = $tmp3633;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3633));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3630));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3635 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3634 = *$tmp3635;
        org$pandalanguage$pandac$IRNode** $tmp3636 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3637 = p_f2;
        *$tmp3636 = $tmp3637;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3637));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3634));
    }
    {
        panda$collections$ImmutableArray** $tmp3639 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3638 = *$tmp3639;
        panda$collections$ImmutableArray** $tmp3640 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3641 = p_f3;
        *$tmp3640 = $tmp3641;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3641));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3638));
    }
    {
        panda$collections$ImmutableArray** $tmp3643 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3642 = *$tmp3643;
        panda$collections$ImmutableArray** $tmp3644 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3645 = p_f4;
        *$tmp3644 = $tmp3645;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3645));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3642));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3647;
    org$pandalanguage$pandac$IRNode* $tmp3650;
    panda$collections$ImmutableArray* $tmp3651;
    panda$collections$ImmutableArray* $tmp3654;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3646 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3646 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3648 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3647 = *$tmp3648;
        org$pandalanguage$pandac$IRNode** $tmp3649 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3650 = p_f1;
        *$tmp3649 = $tmp3650;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3650));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3647));
    }
    {
        panda$collections$ImmutableArray** $tmp3652 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3651 = *$tmp3652;
        panda$collections$ImmutableArray** $tmp3653 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3654 = p_f2;
        *$tmp3653 = $tmp3654;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3654));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3651));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$core$Bit$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$IRNode* $tmp3656;
    org$pandalanguage$pandac$IRNode* $tmp3659;
    org$pandalanguage$pandac$IRNode* $tmp3660;
    org$pandalanguage$pandac$IRNode* $tmp3663;
    org$pandalanguage$pandac$IRNode* $tmp3665;
    org$pandalanguage$pandac$IRNode* $tmp3668;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3655 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3655 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3657 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3656 = *$tmp3657;
        org$pandalanguage$pandac$IRNode** $tmp3658 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3659 = p_f1;
        *$tmp3658 = $tmp3659;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3659));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3656));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3661 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3660 = *$tmp3661;
        org$pandalanguage$pandac$IRNode** $tmp3662 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3663 = p_f2;
        *$tmp3662 = $tmp3663;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3663));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3660));
    }
    panda$core$Bit* $tmp3664 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp3664 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp3666 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp3665 = *$tmp3666;
        org$pandalanguage$pandac$IRNode** $tmp3667 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp3668 = p_f4;
        *$tmp3667 = $tmp3668;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3668));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3665));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp3671;
    panda$collections$ImmutableArray* $tmp3674;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3669 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3669 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp3670 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp3670 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp3672 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3671 = *$tmp3672;
        panda$collections$ImmutableArray** $tmp3673 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3674 = p_f2;
        *$tmp3673 = $tmp3674;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3674));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3671));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable* p_f1) {
    org$pandalanguage$pandac$Variable* $tmp3676;
    org$pandalanguage$pandac$Variable* $tmp3679;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3675 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3675 = p_f0;
    {
        org$pandalanguage$pandac$Variable** $tmp3677 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp3676 = *$tmp3677;
        org$pandalanguage$pandac$Variable** $tmp3678 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp3679 = p_f1;
        *$tmp3678 = $tmp3679;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3679));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3676));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    panda$core$String* $tmp3681;
    panda$core$String* $tmp3684;
    org$pandalanguage$pandac$IRNode* $tmp3685;
    org$pandalanguage$pandac$IRNode* $tmp3688;
    panda$collections$ImmutableArray* $tmp3689;
    panda$collections$ImmutableArray* $tmp3692;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3680 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3680 = p_f0;
    {
        panda$core$String** $tmp3682 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3681 = *$tmp3682;
        panda$core$String** $tmp3683 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3684 = p_f1;
        *$tmp3683 = $tmp3684;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3684));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3681));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3686 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3685 = *$tmp3686;
        org$pandalanguage$pandac$IRNode** $tmp3687 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3688 = p_f2;
        *$tmp3687 = $tmp3688;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3688));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3685));
    }
    {
        panda$collections$ImmutableArray** $tmp3690 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3689 = *$tmp3690;
        panda$collections$ImmutableArray** $tmp3691 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3692 = p_f3;
        *$tmp3691 = $tmp3692;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3692));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3689));
    }
}

