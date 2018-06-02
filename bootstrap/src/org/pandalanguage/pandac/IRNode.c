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
typedef panda$core$String* (*$fn1916)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1927)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1960)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1967)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1978)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2009)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2017)(panda$collections$ListView*, panda$core$String*);
typedef panda$core$String* (*$fn2035)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2055)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn2093)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2100)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2111)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2195)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2202)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2213)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2258)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2265)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2276)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2292)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2299)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2310)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2337)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2380)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn2430)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2437)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2448)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2605)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2612)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2634)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2672)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2694)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2712)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2796)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2827)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2836)(panda$collections$ListView*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2877)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2884)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2895)(panda$collections$Iterator*);

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
static panda$core$String $s1918 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s1921 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1949 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1951 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s1981 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1987 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x77\x68\x69\x6c\x65\x20", 8, 24265489235972527, NULL };
static panda$core$String $s1989 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2011 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2014 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s2020 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2037 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x2a\x20\x61\x6e\x64\x20\x74\x68\x65\x6e\x3a\x20", 14, -3277098584181619124, NULL };
static panda$core$String $s2040 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s2057 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2060 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2081 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s2083 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s2114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2122 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s2124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x6e\x75\x6c\x6c\x29", 9, 1443802565768004343, NULL };
static panda$core$String $s2162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x29", 8, 14324500803727910, NULL };
static panda$core$String $s2184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s2216 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2246 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s2248 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x3a\x0a", 11, 7948234111488089839, NULL };
static panda$core$String $s2313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s2382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2409 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s2417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s2420 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2480 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s2482 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s2499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s2503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s2522 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s2525 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s2541 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s2548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s2566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2568 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3f\x20", 3, 1363128, NULL };
static panda$core$String $s2571 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s2574 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2607 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s2615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s2630 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2637 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static panda$core$String $s2640 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x55\x4e\x52\x45\x53\x4f\x4c\x56\x45\x44\x2a\x2d", 14, -8805999466873262330, NULL };
static panda$core$String $s2661 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2667 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2684 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x55\x4e\x52\x45\x53\x4f\x4c\x56\x45\x44\x2a\x2d", 14, -8805999466873262330, NULL };
static panda$core$String $s2689 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2697 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2714 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2720 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2731 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2752 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s2753 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s2756 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s2758 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2783 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s2786 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s2789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s2792 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s2823 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s2830 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x0a", 2, 16069, NULL };
static panda$core$String $s2833 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2839 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2861 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2865 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s2867 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2898 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2914 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x52\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 12, -3799524160724529804, NULL };

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
    panda$core$String* $tmp1925;
    panda$core$String* $tmp1926;
    panda$core$Int64 $tmp1931;
    panda$core$String* label1933 = NULL;
    panda$collections$ImmutableArray* statements1935 = NULL;
    org$pandalanguage$pandac$IRNode* test1937 = NULL;
    panda$core$MutableString* result1942 = NULL;
    panda$core$MutableString* $tmp1943;
    panda$core$MutableString* $tmp1944;
    panda$core$String* $tmp1946;
    panda$core$String* $tmp1947;
    panda$collections$Iterator* Iter$502$171955 = NULL;
    panda$collections$Iterator* $tmp1956;
    panda$collections$Iterator* $tmp1957;
    org$pandalanguage$pandac$IRNode* s1973 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1974;
    panda$core$Object* $tmp1975;
    panda$core$String* $tmp1980;
    panda$core$String* $tmp1985;
    panda$core$String* $tmp1986;
    panda$core$String* $tmp1991;
    panda$core$String* $tmp1992;
    panda$core$Int64 $tmp1998;
    org$pandalanguage$pandac$IRNode* m2000 = NULL;
    panda$collections$ImmutableArray* args2002 = NULL;
    panda$core$String* $tmp2004;
    panda$core$String* $tmp2005;
    panda$core$String* $tmp2006;
    panda$core$String* $tmp2007;
    panda$core$String* $tmp2008;
    panda$core$String* $tmp2013;
    panda$core$Int64 $tmp2024;
    org$pandalanguage$pandac$IRNode* expr2026 = NULL;
    org$pandalanguage$pandac$IRNode* stmt2028 = NULL;
    panda$core$String* $tmp2030;
    panda$core$String* $tmp2031;
    panda$core$String* $tmp2032;
    panda$core$String* $tmp2033;
    panda$core$String* $tmp2034;
    panda$core$Int64 $tmp2044;
    org$pandalanguage$pandac$IRNode* base2046 = NULL;
    org$pandalanguage$pandac$FieldDecl* field2048 = NULL;
    panda$core$String* $tmp2050;
    panda$core$String* $tmp2051;
    panda$core$String* $tmp2052;
    panda$core$String* $tmp2053;
    panda$core$String* $tmp2054;
    panda$core$Int64 $tmp2064;
    org$pandalanguage$pandac$IRNode* test2066 = NULL;
    panda$collections$ImmutableArray* ifTrue2068 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse2070 = NULL;
    panda$core$MutableString* result2075 = NULL;
    panda$core$MutableString* $tmp2076;
    panda$core$MutableString* $tmp2077;
    panda$core$String* $tmp2079;
    panda$core$String* $tmp2080;
    panda$collections$Iterator* Iter$515$172088 = NULL;
    panda$collections$Iterator* $tmp2089;
    panda$collections$Iterator* $tmp2090;
    org$pandalanguage$pandac$IRNode* s2106 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2107;
    panda$core$Object* $tmp2108;
    panda$core$String* $tmp2113;
    panda$core$Char8 $tmp2118;
    panda$core$UInt8 $tmp2119;
    panda$core$String* $tmp2120;
    panda$core$String* $tmp2121;
    panda$core$String* $tmp2126;
    panda$core$String* $tmp2127;
    panda$core$Int64 $tmp2133;
    panda$core$UInt64 value2135;
    panda$core$String* $tmp2137;
    panda$core$String* $tmp2138;
    panda$core$Int64 $tmp2142;
    org$pandalanguage$pandac$IRNode* value2144 = NULL;
    panda$core$String* $tmp2146;
    panda$core$String* $tmp2147;
    panda$core$String* $tmp2148;
    panda$core$Int64 $tmp2155;
    org$pandalanguage$pandac$IRNode* value2157 = NULL;
    panda$core$String* $tmp2159;
    panda$core$String* $tmp2160;
    panda$core$String* $tmp2161;
    panda$core$Int64 $tmp2168;
    panda$core$String* label2170 = NULL;
    panda$collections$ImmutableArray* statements2172 = NULL;
    panda$core$MutableString* result2177 = NULL;
    panda$core$MutableString* $tmp2178;
    panda$core$MutableString* $tmp2179;
    panda$core$String* $tmp2181;
    panda$core$String* $tmp2182;
    panda$collections$Iterator* Iter$535$172190 = NULL;
    panda$collections$Iterator* $tmp2191;
    panda$collections$Iterator* $tmp2192;
    org$pandalanguage$pandac$IRNode* s2208 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2209;
    panda$core$Object* $tmp2210;
    panda$core$String* $tmp2215;
    panda$core$Char8 $tmp2220;
    panda$core$UInt8 $tmp2221;
    panda$core$String* $tmp2222;
    panda$core$String* $tmp2223;
    panda$core$Int64 $tmp2229;
    org$pandalanguage$pandac$IRNode* value2231 = NULL;
    panda$collections$ImmutableArray* whens2233 = NULL;
    panda$collections$ImmutableArray* other2235 = NULL;
    panda$core$MutableString* result2240 = NULL;
    panda$core$MutableString* $tmp2241;
    panda$core$MutableString* $tmp2242;
    panda$core$String* $tmp2244;
    panda$core$String* $tmp2245;
    panda$collections$Iterator* Iter$542$172253 = NULL;
    panda$collections$Iterator* $tmp2254;
    panda$collections$Iterator* $tmp2255;
    org$pandalanguage$pandac$IRNode* w2271 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2272;
    panda$core$Object* $tmp2273;
    panda$core$String* $tmp2278;
    panda$collections$Iterator* Iter$547$212287 = NULL;
    panda$collections$Iterator* $tmp2288;
    panda$collections$Iterator* $tmp2289;
    org$pandalanguage$pandac$IRNode* s2305 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2306;
    panda$core$Object* $tmp2307;
    panda$core$String* $tmp2312;
    panda$core$Char8 $tmp2317;
    panda$core$UInt8 $tmp2318;
    panda$core$String* $tmp2319;
    panda$core$String* $tmp2320;
    panda$core$Int64 $tmp2326;
    org$pandalanguage$pandac$IRNode* target2328 = NULL;
    org$pandalanguage$pandac$MethodRef* m2330 = NULL;
    panda$core$String* $tmp2332;
    panda$core$String* $tmp2333;
    panda$core$String* $tmp2334;
    panda$core$String* $tmp2335;
    panda$core$String* $tmp2336;
    panda$core$String* $tmp2346;
    panda$core$Int64 $tmp2349;
    panda$core$UInt64 value2351;
    panda$core$String* $tmp2353;
    panda$core$String* $tmp2354;
    panda$core$Object* $tmp2356;
    panda$core$Int64 $tmp2361;
    panda$core$String* $tmp2363;
    panda$core$Int64 $tmp2367;
    org$pandalanguage$pandac$parser$Token$Kind op2369;
    org$pandalanguage$pandac$IRNode* base2371 = NULL;
    panda$core$String* $tmp2373;
    panda$core$String* $tmp2374;
    panda$core$String* $tmp2375;
    panda$core$String* $tmp2376;
    panda$core$String* $tmp2377;
    panda$core$Object* $tmp2378;
    panda$core$Int64 $tmp2389;
    panda$core$String* label2391 = NULL;
    org$pandalanguage$pandac$IRNode* target2393 = NULL;
    org$pandalanguage$pandac$IRNode* list2395 = NULL;
    panda$collections$ImmutableArray* statements2397 = NULL;
    panda$core$MutableString* result2402 = NULL;
    panda$core$MutableString* $tmp2403;
    panda$core$MutableString* $tmp2404;
    panda$core$String* $tmp2406;
    panda$core$String* $tmp2407;
    panda$core$String* $tmp2411;
    panda$core$String* $tmp2412;
    panda$core$String* $tmp2413;
    panda$core$String* $tmp2414;
    panda$collections$Iterator* Iter$570$172425 = NULL;
    panda$collections$Iterator* $tmp2426;
    panda$collections$Iterator* $tmp2427;
    org$pandalanguage$pandac$IRNode* s2443 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2444;
    panda$core$Object* $tmp2445;
    panda$core$String* $tmp2450;
    panda$core$Char8 $tmp2455;
    panda$core$UInt8 $tmp2456;
    panda$core$String* $tmp2457;
    panda$core$String* $tmp2458;
    panda$core$Int64 $tmp2464;
    panda$core$Real64 value2466;
    panda$core$String* $tmp2468;
    panda$core$String* $tmp2469;
    panda$core$Int64 $tmp2473;
    org$pandalanguage$pandac$IRNode* value2475 = NULL;
    panda$core$String* $tmp2477;
    panda$core$String* $tmp2478;
    panda$core$String* $tmp2479;
    panda$core$String* $tmp2486;
    panda$core$Int64 $tmp2490;
    org$pandalanguage$pandac$Type* type2492 = NULL;
    panda$core$Int64 id2494;
    panda$core$String* $tmp2496;
    panda$core$String* $tmp2497;
    panda$core$String* $tmp2498;
    panda$core$Object* $tmp2500;
    panda$core$Int64 $tmp2507;
    org$pandalanguage$pandac$IRNode* base2509 = NULL;
    panda$core$Int64 id2511;
    panda$core$String* $tmp2513;
    panda$core$String* $tmp2514;
    panda$core$String* $tmp2515;
    panda$core$String* $tmp2516;
    panda$core$String* $tmp2517;
    panda$core$Object* $tmp2519;
    panda$core$Int64 $tmp2529;
    panda$core$String* $tmp2531;
    panda$core$Int64 $tmp2535;
    panda$core$String* str2537 = NULL;
    panda$core$String* $tmp2539;
    panda$core$String* $tmp2540;
    panda$core$Int64 $tmp2545;
    panda$core$String* $tmp2547;
    panda$core$Int64 $tmp2551;
    org$pandalanguage$pandac$IRNode* test2553 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue2555 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse2557 = NULL;
    panda$core$String* $tmp2559;
    panda$core$String* $tmp2560;
    panda$core$String* $tmp2561;
    panda$core$String* $tmp2562;
    panda$core$String* $tmp2563;
    panda$core$String* $tmp2564;
    panda$core$String* $tmp2565;
    panda$core$Int64 $tmp2578;
    org$pandalanguage$pandac$Type* type2580 = NULL;
    panda$core$String* $tmp2582;
    panda$core$String* $tmp2583;
    panda$core$Int64 $tmp2587;
    panda$core$String* name2589 = NULL;
    panda$core$String* $tmp2591;
    panda$core$Int64 $tmp2594;
    org$pandalanguage$pandac$IRNode* base2596 = NULL;
    panda$collections$ImmutableArray* args2598 = NULL;
    panda$core$String* $tmp2600;
    panda$core$String* $tmp2601;
    panda$core$String* $tmp2602;
    panda$core$String* $tmp2603;
    panda$core$String* $tmp2604;
    panda$core$String* $tmp2609;
    panda$core$Int64 $tmp2619;
    panda$collections$ImmutableArray* params2621 = NULL;
    org$pandalanguage$pandac$ASTNode* body2623 = NULL;
    panda$core$String* $tmp2625;
    panda$core$String* $tmp2626;
    panda$core$String* $tmp2627;
    panda$core$String* $tmp2628;
    panda$core$String* $tmp2629;
    panda$core$String* $tmp2631;
    panda$core$Int64 $tmp2644;
    org$pandalanguage$pandac$IRNode* target2646 = NULL;
    panda$collections$ImmutableArray* methods2648 = NULL;
    panda$collections$ImmutableArray* args2650 = NULL;
    panda$core$String* $tmp2652;
    panda$core$String* $tmp2653;
    panda$core$String* $tmp2654;
    panda$core$String* $tmp2655;
    panda$core$String* $tmp2656;
    panda$core$String* $tmp2657;
    panda$core$String* $tmp2658;
    panda$core$Object* $tmp2663;
    panda$core$Int64 $tmp2664;
    panda$core$String* $tmp2669;
    panda$core$String* $tmp2679;
    panda$core$String* $tmp2680;
    panda$core$String* $tmp2681;
    panda$core$String* $tmp2682;
    panda$core$String* $tmp2683;
    panda$core$Object* $tmp2685;
    panda$core$Int64 $tmp2686;
    panda$core$String* $tmp2691;
    panda$core$Int64 $tmp2701;
    org$pandalanguage$pandac$IRNode* target2703 = NULL;
    panda$collections$ImmutableArray* methods2705 = NULL;
    panda$core$String* $tmp2707;
    panda$core$String* $tmp2708;
    panda$core$String* $tmp2709;
    panda$core$String* $tmp2710;
    panda$core$String* $tmp2711;
    panda$core$Object* $tmp2716;
    panda$core$Int64 $tmp2717;
    panda$core$String* $tmp2724;
    panda$core$String* $tmp2725;
    panda$core$String* $tmp2726;
    panda$core$Object* $tmp2727;
    panda$core$Int64 $tmp2728;
    panda$core$Int64 $tmp2735;
    org$pandalanguage$pandac$IRNode* start2737 = NULL;
    org$pandalanguage$pandac$IRNode* end2739 = NULL;
    panda$core$Bit inclusive2741;
    org$pandalanguage$pandac$IRNode* step2743 = NULL;
    panda$core$MutableString* result2748 = NULL;
    panda$core$MutableString* $tmp2749;
    panda$core$MutableString* $tmp2750;
    panda$core$String* $tmp2754;
    panda$core$String* $tmp2755;
    panda$core$String* $tmp2760;
    panda$core$String* $tmp2761;
    panda$core$Int64 $tmp2767;
    org$pandalanguage$pandac$Variable$Kind kind2769;
    panda$collections$ImmutableArray* decls2771 = NULL;
    panda$core$MutableString* result2776 = NULL;
    panda$core$MutableString* $tmp2777;
    panda$core$MutableString* $tmp2778;
    org$pandalanguage$pandac$Variable$Kind $match$636_172780;
    panda$core$Int64 $tmp2781;
    panda$core$Int64 $tmp2784;
    panda$core$Int64 $tmp2787;
    panda$core$Int64 $tmp2790;
    panda$core$String* $tmp2793;
    panda$core$String* $tmp2798;
    panda$core$String* $tmp2799;
    panda$core$Int64 $tmp2805;
    org$pandalanguage$pandac$Variable* variable2807 = NULL;
    panda$core$String* $tmp2809;
    panda$core$Int64 $tmp2812;
    panda$collections$ImmutableArray* tests2814 = NULL;
    panda$collections$ImmutableArray* statements2816 = NULL;
    panda$core$String* $tmp2818;
    panda$core$String* $tmp2819;
    panda$core$String* $tmp2820;
    panda$core$String* $tmp2821;
    panda$core$String* $tmp2822;
    panda$core$String* $tmp2824;
    panda$core$String* $tmp2832;
    panda$core$Int64 $tmp2843;
    panda$core$String* label2845 = NULL;
    org$pandalanguage$pandac$IRNode* test2847 = NULL;
    panda$collections$ImmutableArray* statements2849 = NULL;
    panda$core$MutableString* result2854 = NULL;
    panda$core$MutableString* $tmp2855;
    panda$core$MutableString* $tmp2856;
    panda$core$String* $tmp2858;
    panda$core$String* $tmp2859;
    panda$core$String* $tmp2863;
    panda$core$String* $tmp2864;
    panda$collections$Iterator* Iter$654$172872 = NULL;
    panda$collections$Iterator* $tmp2873;
    panda$collections$Iterator* $tmp2874;
    org$pandalanguage$pandac$IRNode* s2890 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2891;
    panda$core$Object* $tmp2892;
    panda$core$String* $tmp2897;
    panda$core$Char8 $tmp2902;
    panda$core$UInt8 $tmp2903;
    panda$core$String* $tmp2904;
    panda$core$String* $tmp2905;
    panda$core$Bit $tmp2911;
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
                panda$core$String* $tmp1917 = (($fn1916) target1907->$class->vtable[0])(target1907);
                $tmp1915 = $tmp1917;
                panda$core$String* $tmp1919 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1915, &$s1918);
                $tmp1914 = $tmp1919;
                panda$core$String* $tmp1920 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1914, ((panda$core$Object*) value1909));
                $tmp1913 = $tmp1920;
                panda$core$String* $tmp1922 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1913, &$s1921);
                $tmp1912 = $tmp1922;
                $tmp1911 = $tmp1912;
                $returnValue1530 = $tmp1911;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1911));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1912));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1913));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1914));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1915));
                $tmp1521 = 17;
                goto $l1519;
                $l1923:;
                return $returnValue1530;
            }
            }
            panda$core$String* $tmp1928 = (($fn1927) target1907->$class->vtable[0])(target1907);
            $tmp1926 = $tmp1928;
            $tmp1925 = $tmp1926;
            $returnValue1530 = $tmp1925;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1925));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1926));
            $tmp1521 = 18;
            goto $l1519;
            $l1929:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1931, 15);
        panda$core$Bit $tmp1932 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp1931);
        if ($tmp1932.value) {
        {
            panda$core$String** $tmp1934 = ((panda$core$String**) ((char*) $match$434_91522->$data + 16));
            label1933 = *$tmp1934;
            panda$collections$ImmutableArray** $tmp1936 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 24));
            statements1935 = *$tmp1936;
            org$pandalanguage$pandac$IRNode** $tmp1938 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 32));
            test1937 = *$tmp1938;
            int $tmp1941;
            {
                panda$core$MutableString* $tmp1945 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1945);
                $tmp1944 = $tmp1945;
                $tmp1943 = $tmp1944;
                result1942 = $tmp1943;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1943));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1944));
                if (((panda$core$Bit) { label1933 != NULL }).value) {
                {
                    panda$core$String* $tmp1948 = panda$core$String$convert$R$panda$core$String(label1933);
                    $tmp1947 = $tmp1948;
                    panda$core$String* $tmp1950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1947, &$s1949);
                    $tmp1946 = $tmp1950;
                    panda$core$MutableString$append$panda$core$String(result1942, $tmp1946);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1946));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1947));
                }
                }
                panda$core$MutableString$append$panda$core$String(result1942, &$s1951);
                {
                    int $tmp1954;
                    {
                        ITable* $tmp1958 = ((panda$collections$Iterable*) statements1935)->$class->itable;
                        while ($tmp1958->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1958 = $tmp1958->next;
                        }
                        $fn1960 $tmp1959 = $tmp1958->methods[0];
                        panda$collections$Iterator* $tmp1961 = $tmp1959(((panda$collections$Iterable*) statements1935));
                        $tmp1957 = $tmp1961;
                        $tmp1956 = $tmp1957;
                        Iter$502$171955 = $tmp1956;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1956));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1957));
                        $l1962:;
                        ITable* $tmp1965 = Iter$502$171955->$class->itable;
                        while ($tmp1965->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1965 = $tmp1965->next;
                        }
                        $fn1967 $tmp1966 = $tmp1965->methods[0];
                        panda$core$Bit $tmp1968 = $tmp1966(Iter$502$171955);
                        panda$core$Bit $tmp1969 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1968);
                        bool $tmp1964 = $tmp1969.value;
                        if (!$tmp1964) goto $l1963;
                        {
                            int $tmp1972;
                            {
                                ITable* $tmp1976 = Iter$502$171955->$class->itable;
                                while ($tmp1976->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1976 = $tmp1976->next;
                                }
                                $fn1978 $tmp1977 = $tmp1976->methods[1];
                                panda$core$Object* $tmp1979 = $tmp1977(Iter$502$171955);
                                $tmp1975 = $tmp1979;
                                $tmp1974 = ((org$pandalanguage$pandac$IRNode*) $tmp1975);
                                s1973 = $tmp1974;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1974));
                                panda$core$Panda$unref$panda$core$Object($tmp1975);
                                panda$core$String* $tmp1982 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1973), &$s1981);
                                $tmp1980 = $tmp1982;
                                panda$core$MutableString$append$panda$core$String(result1942, $tmp1980);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1980));
                            }
                            $tmp1972 = -1;
                            goto $l1970;
                            $l1970:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1973));
                            s1973 = NULL;
                            switch ($tmp1972) {
                                case -1: goto $l1983;
                            }
                            $l1983:;
                        }
                        goto $l1962;
                        $l1963:;
                    }
                    $tmp1954 = -1;
                    goto $l1952;
                    $l1952:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$502$171955));
                    Iter$502$171955 = NULL;
                    switch ($tmp1954) {
                        case -1: goto $l1984;
                    }
                    $l1984:;
                }
                panda$core$String* $tmp1988 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1987, ((panda$core$Object*) test1937));
                $tmp1986 = $tmp1988;
                panda$core$String* $tmp1990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1986, &$s1989);
                $tmp1985 = $tmp1990;
                panda$core$MutableString$append$panda$core$String(result1942, $tmp1985);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1985));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1986));
                panda$core$String* $tmp1993 = panda$core$MutableString$finish$R$panda$core$String(result1942);
                $tmp1992 = $tmp1993;
                $tmp1991 = $tmp1992;
                $returnValue1530 = $tmp1991;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1991));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1992));
                $tmp1941 = 0;
                goto $l1939;
                $l1994:;
                $tmp1521 = 19;
                goto $l1519;
                $l1995:;
                return $returnValue1530;
            }
            $l1939:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1942));
            result1942 = NULL;
            switch ($tmp1941) {
                case 0: goto $l1994;
            }
            $l1997:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1998, 16);
        panda$core$Bit $tmp1999 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp1998);
        if ($tmp1999.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2001 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 0));
            m2000 = *$tmp2001;
            panda$collections$ImmutableArray** $tmp2003 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 8));
            args2002 = *$tmp2003;
            panda$core$String* $tmp2010 = (($fn2009) m2000->$class->vtable[0])(m2000);
            $tmp2008 = $tmp2010;
            panda$core$String* $tmp2012 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2008, &$s2011);
            $tmp2007 = $tmp2012;
            ITable* $tmp2015 = ((panda$collections$ListView*) args2002)->$class->itable;
            while ($tmp2015->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2015 = $tmp2015->next;
            }
            $fn2017 $tmp2016 = $tmp2015->methods[5];
            panda$core$String* $tmp2018 = $tmp2016(((panda$collections$ListView*) args2002), &$s2014);
            $tmp2013 = $tmp2018;
            panda$core$String* $tmp2019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2007, $tmp2013);
            $tmp2006 = $tmp2019;
            panda$core$String* $tmp2021 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2006, &$s2020);
            $tmp2005 = $tmp2021;
            $tmp2004 = $tmp2005;
            $returnValue1530 = $tmp2004;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2004));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2005));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2006));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2013));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2007));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2008));
            $tmp1521 = 20;
            goto $l1519;
            $l2022:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2024, 17);
        panda$core$Bit $tmp2025 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2024);
        if ($tmp2025.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2027 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 0));
            expr2026 = *$tmp2027;
            org$pandalanguage$pandac$IRNode** $tmp2029 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 8));
            stmt2028 = *$tmp2029;
            panda$core$String* $tmp2036 = (($fn2035) expr2026->$class->vtable[0])(expr2026);
            $tmp2034 = $tmp2036;
            panda$core$String* $tmp2038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2034, &$s2037);
            $tmp2033 = $tmp2038;
            panda$core$String* $tmp2039 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2033, ((panda$core$Object*) stmt2028));
            $tmp2032 = $tmp2039;
            panda$core$String* $tmp2041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2032, &$s2040);
            $tmp2031 = $tmp2041;
            $tmp2030 = $tmp2031;
            $returnValue1530 = $tmp2030;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2030));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2031));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2032));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2033));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2034));
            $tmp1521 = 21;
            goto $l1519;
            $l2042:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2044, 18);
        panda$core$Bit $tmp2045 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2044);
        if ($tmp2045.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2047 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 24));
            base2046 = *$tmp2047;
            org$pandalanguage$pandac$FieldDecl** $tmp2049 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$434_91522->$data + 32));
            field2048 = *$tmp2049;
            panda$core$String* $tmp2056 = (($fn2055) base2046->$class->vtable[0])(base2046);
            $tmp2054 = $tmp2056;
            panda$core$String* $tmp2058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2054, &$s2057);
            $tmp2053 = $tmp2058;
            panda$core$String* $tmp2059 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2053, ((org$pandalanguage$pandac$Symbol*) field2048)->name);
            $tmp2052 = $tmp2059;
            panda$core$String* $tmp2061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2052, &$s2060);
            $tmp2051 = $tmp2061;
            $tmp2050 = $tmp2051;
            $returnValue1530 = $tmp2050;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2050));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2051));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2052));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2053));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2054));
            $tmp1521 = 22;
            goto $l1519;
            $l2062:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2064, 19);
        panda$core$Bit $tmp2065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2064);
        if ($tmp2065.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2067 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 16));
            test2066 = *$tmp2067;
            panda$collections$ImmutableArray** $tmp2069 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 24));
            ifTrue2068 = *$tmp2069;
            org$pandalanguage$pandac$IRNode** $tmp2071 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 32));
            ifFalse2070 = *$tmp2071;
            int $tmp2074;
            {
                panda$core$MutableString* $tmp2078 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp2082 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2081, ((panda$core$Object*) test2066));
                $tmp2080 = $tmp2082;
                panda$core$String* $tmp2084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2080, &$s2083);
                $tmp2079 = $tmp2084;
                panda$core$MutableString$init$panda$core$String($tmp2078, $tmp2079);
                $tmp2077 = $tmp2078;
                $tmp2076 = $tmp2077;
                result2075 = $tmp2076;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2076));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2077));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2079));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2080));
                {
                    int $tmp2087;
                    {
                        ITable* $tmp2091 = ((panda$collections$Iterable*) ifTrue2068)->$class->itable;
                        while ($tmp2091->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2091 = $tmp2091->next;
                        }
                        $fn2093 $tmp2092 = $tmp2091->methods[0];
                        panda$collections$Iterator* $tmp2094 = $tmp2092(((panda$collections$Iterable*) ifTrue2068));
                        $tmp2090 = $tmp2094;
                        $tmp2089 = $tmp2090;
                        Iter$515$172088 = $tmp2089;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2089));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2090));
                        $l2095:;
                        ITable* $tmp2098 = Iter$515$172088->$class->itable;
                        while ($tmp2098->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2098 = $tmp2098->next;
                        }
                        $fn2100 $tmp2099 = $tmp2098->methods[0];
                        panda$core$Bit $tmp2101 = $tmp2099(Iter$515$172088);
                        panda$core$Bit $tmp2102 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2101);
                        bool $tmp2097 = $tmp2102.value;
                        if (!$tmp2097) goto $l2096;
                        {
                            int $tmp2105;
                            {
                                ITable* $tmp2109 = Iter$515$172088->$class->itable;
                                while ($tmp2109->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2109 = $tmp2109->next;
                                }
                                $fn2111 $tmp2110 = $tmp2109->methods[1];
                                panda$core$Object* $tmp2112 = $tmp2110(Iter$515$172088);
                                $tmp2108 = $tmp2112;
                                $tmp2107 = ((org$pandalanguage$pandac$IRNode*) $tmp2108);
                                s2106 = $tmp2107;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2107));
                                panda$core$Panda$unref$panda$core$Object($tmp2108);
                                panda$core$String* $tmp2115 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2106), &$s2114);
                                $tmp2113 = $tmp2115;
                                panda$core$MutableString$append$panda$core$String(result2075, $tmp2113);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2113));
                            }
                            $tmp2105 = -1;
                            goto $l2103;
                            $l2103:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2106));
                            s2106 = NULL;
                            switch ($tmp2105) {
                                case -1: goto $l2116;
                            }
                            $l2116:;
                        }
                        goto $l2095;
                        $l2096:;
                    }
                    $tmp2087 = -1;
                    goto $l2085;
                    $l2085:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$515$172088));
                    Iter$515$172088 = NULL;
                    switch ($tmp2087) {
                        case -1: goto $l2117;
                    }
                    $l2117:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp2119, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp2118, $tmp2119);
                panda$core$MutableString$append$panda$core$Char8(result2075, $tmp2118);
                if (((panda$core$Bit) { ifFalse2070 != NULL }).value) {
                {
                    panda$core$String* $tmp2123 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2122, ((panda$core$Object*) ifFalse2070));
                    $tmp2121 = $tmp2123;
                    panda$core$String* $tmp2125 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2121, &$s2124);
                    $tmp2120 = $tmp2125;
                    panda$core$MutableString$append$panda$core$String(result2075, $tmp2120);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2120));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2121));
                }
                }
                panda$core$String* $tmp2128 = panda$core$MutableString$finish$R$panda$core$String(result2075);
                $tmp2127 = $tmp2128;
                $tmp2126 = $tmp2127;
                $returnValue1530 = $tmp2126;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2126));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2127));
                $tmp2074 = 0;
                goto $l2072;
                $l2129:;
                $tmp1521 = 23;
                goto $l1519;
                $l2130:;
                return $returnValue1530;
            }
            $l2072:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2075));
            result2075 = NULL;
            switch ($tmp2074) {
                case 0: goto $l2129;
            }
            $l2132:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2133, 20);
        panda$core$Bit $tmp2134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2133);
        if ($tmp2134.value) {
        {
            panda$core$UInt64* $tmp2136 = ((panda$core$UInt64*) ((char*) $match$434_91522->$data + 24));
            value2135 = *$tmp2136;
            panda$core$String* $tmp2139 = panda$core$UInt64$convert$R$panda$core$String(value2135);
            $tmp2138 = $tmp2139;
            $tmp2137 = $tmp2138;
            $returnValue1530 = $tmp2137;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2137));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2138));
            $tmp1521 = 24;
            goto $l1519;
            $l2140:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2142, 21);
        panda$core$Bit $tmp2143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2142);
        if ($tmp2143.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2145 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 16));
            value2144 = *$tmp2145;
            panda$core$String* $tmp2150 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2149, ((panda$core$Object*) value2144));
            $tmp2148 = $tmp2150;
            panda$core$String* $tmp2152 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2148, &$s2151);
            $tmp2147 = $tmp2152;
            $tmp2146 = $tmp2147;
            $returnValue1530 = $tmp2146;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2146));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2147));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2148));
            $tmp1521 = 25;
            goto $l1519;
            $l2153:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2155, 22);
        panda$core$Bit $tmp2156 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2155);
        if ($tmp2156.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2158 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 16));
            value2157 = *$tmp2158;
            panda$core$String* $tmp2163 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2162, ((panda$core$Object*) value2157));
            $tmp2161 = $tmp2163;
            panda$core$String* $tmp2165 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2161, &$s2164);
            $tmp2160 = $tmp2165;
            $tmp2159 = $tmp2160;
            $returnValue1530 = $tmp2159;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2159));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2160));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2161));
            $tmp1521 = 26;
            goto $l1519;
            $l2166:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2168, 23);
        panda$core$Bit $tmp2169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2168);
        if ($tmp2169.value) {
        {
            panda$core$String** $tmp2171 = ((panda$core$String**) ((char*) $match$434_91522->$data + 16));
            label2170 = *$tmp2171;
            panda$collections$ImmutableArray** $tmp2173 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 24));
            statements2172 = *$tmp2173;
            int $tmp2176;
            {
                panda$core$MutableString* $tmp2180 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2180);
                $tmp2179 = $tmp2180;
                $tmp2178 = $tmp2179;
                result2177 = $tmp2178;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2178));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2179));
                if (((panda$core$Bit) { label2170 != NULL }).value) {
                {
                    panda$core$String* $tmp2183 = panda$core$String$convert$R$panda$core$String(label2170);
                    $tmp2182 = $tmp2183;
                    panda$core$String* $tmp2185 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2182, &$s2184);
                    $tmp2181 = $tmp2185;
                    panda$core$MutableString$append$panda$core$String(result2177, $tmp2181);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2181));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2182));
                }
                }
                panda$core$MutableString$append$panda$core$String(result2177, &$s2186);
                {
                    int $tmp2189;
                    {
                        ITable* $tmp2193 = ((panda$collections$Iterable*) statements2172)->$class->itable;
                        while ($tmp2193->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2193 = $tmp2193->next;
                        }
                        $fn2195 $tmp2194 = $tmp2193->methods[0];
                        panda$collections$Iterator* $tmp2196 = $tmp2194(((panda$collections$Iterable*) statements2172));
                        $tmp2192 = $tmp2196;
                        $tmp2191 = $tmp2192;
                        Iter$535$172190 = $tmp2191;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2191));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2192));
                        $l2197:;
                        ITable* $tmp2200 = Iter$535$172190->$class->itable;
                        while ($tmp2200->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2200 = $tmp2200->next;
                        }
                        $fn2202 $tmp2201 = $tmp2200->methods[0];
                        panda$core$Bit $tmp2203 = $tmp2201(Iter$535$172190);
                        panda$core$Bit $tmp2204 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2203);
                        bool $tmp2199 = $tmp2204.value;
                        if (!$tmp2199) goto $l2198;
                        {
                            int $tmp2207;
                            {
                                ITable* $tmp2211 = Iter$535$172190->$class->itable;
                                while ($tmp2211->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2211 = $tmp2211->next;
                                }
                                $fn2213 $tmp2212 = $tmp2211->methods[1];
                                panda$core$Object* $tmp2214 = $tmp2212(Iter$535$172190);
                                $tmp2210 = $tmp2214;
                                $tmp2209 = ((org$pandalanguage$pandac$IRNode*) $tmp2210);
                                s2208 = $tmp2209;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2209));
                                panda$core$Panda$unref$panda$core$Object($tmp2210);
                                panda$core$String* $tmp2217 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2208), &$s2216);
                                $tmp2215 = $tmp2217;
                                panda$core$MutableString$append$panda$core$String(result2177, $tmp2215);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2215));
                            }
                            $tmp2207 = -1;
                            goto $l2205;
                            $l2205:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2208));
                            s2208 = NULL;
                            switch ($tmp2207) {
                                case -1: goto $l2218;
                            }
                            $l2218:;
                        }
                        goto $l2197;
                        $l2198:;
                    }
                    $tmp2189 = -1;
                    goto $l2187;
                    $l2187:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$535$172190));
                    Iter$535$172190 = NULL;
                    switch ($tmp2189) {
                        case -1: goto $l2219;
                    }
                    $l2219:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp2221, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp2220, $tmp2221);
                panda$core$MutableString$append$panda$core$Char8(result2177, $tmp2220);
                panda$core$String* $tmp2224 = panda$core$MutableString$finish$R$panda$core$String(result2177);
                $tmp2223 = $tmp2224;
                $tmp2222 = $tmp2223;
                $returnValue1530 = $tmp2222;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2222));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2223));
                $tmp2176 = 0;
                goto $l2174;
                $l2225:;
                $tmp1521 = 27;
                goto $l1519;
                $l2226:;
                return $returnValue1530;
            }
            $l2174:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2177));
            result2177 = NULL;
            switch ($tmp2176) {
                case 0: goto $l2225;
            }
            $l2228:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2229, 24);
        panda$core$Bit $tmp2230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2229);
        if ($tmp2230.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2232 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 16));
            value2231 = *$tmp2232;
            panda$collections$ImmutableArray** $tmp2234 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 24));
            whens2233 = *$tmp2234;
            panda$collections$ImmutableArray** $tmp2236 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 32));
            other2235 = *$tmp2236;
            int $tmp2239;
            {
                panda$core$MutableString* $tmp2243 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp2247 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2246, ((panda$core$Object*) value2231));
                $tmp2245 = $tmp2247;
                panda$core$String* $tmp2249 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2245, &$s2248);
                $tmp2244 = $tmp2249;
                panda$core$MutableString$init$panda$core$String($tmp2243, $tmp2244);
                $tmp2242 = $tmp2243;
                $tmp2241 = $tmp2242;
                result2240 = $tmp2241;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2241));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2242));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2244));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2245));
                {
                    int $tmp2252;
                    {
                        ITable* $tmp2256 = ((panda$collections$Iterable*) whens2233)->$class->itable;
                        while ($tmp2256->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2256 = $tmp2256->next;
                        }
                        $fn2258 $tmp2257 = $tmp2256->methods[0];
                        panda$collections$Iterator* $tmp2259 = $tmp2257(((panda$collections$Iterable*) whens2233));
                        $tmp2255 = $tmp2259;
                        $tmp2254 = $tmp2255;
                        Iter$542$172253 = $tmp2254;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2254));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2255));
                        $l2260:;
                        ITable* $tmp2263 = Iter$542$172253->$class->itable;
                        while ($tmp2263->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2263 = $tmp2263->next;
                        }
                        $fn2265 $tmp2264 = $tmp2263->methods[0];
                        panda$core$Bit $tmp2266 = $tmp2264(Iter$542$172253);
                        panda$core$Bit $tmp2267 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2266);
                        bool $tmp2262 = $tmp2267.value;
                        if (!$tmp2262) goto $l2261;
                        {
                            int $tmp2270;
                            {
                                ITable* $tmp2274 = Iter$542$172253->$class->itable;
                                while ($tmp2274->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2274 = $tmp2274->next;
                                }
                                $fn2276 $tmp2275 = $tmp2274->methods[1];
                                panda$core$Object* $tmp2277 = $tmp2275(Iter$542$172253);
                                $tmp2273 = $tmp2277;
                                $tmp2272 = ((org$pandalanguage$pandac$IRNode*) $tmp2273);
                                w2271 = $tmp2272;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2272));
                                panda$core$Panda$unref$panda$core$Object($tmp2273);
                                panda$core$String* $tmp2280 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w2271), &$s2279);
                                $tmp2278 = $tmp2280;
                                panda$core$MutableString$append$panda$core$String(result2240, $tmp2278);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2278));
                            }
                            $tmp2270 = -1;
                            goto $l2268;
                            $l2268:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w2271));
                            w2271 = NULL;
                            switch ($tmp2270) {
                                case -1: goto $l2281;
                            }
                            $l2281:;
                        }
                        goto $l2260;
                        $l2261:;
                    }
                    $tmp2252 = -1;
                    goto $l2250;
                    $l2250:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$542$172253));
                    Iter$542$172253 = NULL;
                    switch ($tmp2252) {
                        case -1: goto $l2282;
                    }
                    $l2282:;
                }
                if (((panda$core$Bit) { other2235 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$String(result2240, &$s2283);
                    {
                        int $tmp2286;
                        {
                            ITable* $tmp2290 = ((panda$collections$Iterable*) other2235)->$class->itable;
                            while ($tmp2290->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp2290 = $tmp2290->next;
                            }
                            $fn2292 $tmp2291 = $tmp2290->methods[0];
                            panda$collections$Iterator* $tmp2293 = $tmp2291(((panda$collections$Iterable*) other2235));
                            $tmp2289 = $tmp2293;
                            $tmp2288 = $tmp2289;
                            Iter$547$212287 = $tmp2288;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2288));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2289));
                            $l2294:;
                            ITable* $tmp2297 = Iter$547$212287->$class->itable;
                            while ($tmp2297->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2297 = $tmp2297->next;
                            }
                            $fn2299 $tmp2298 = $tmp2297->methods[0];
                            panda$core$Bit $tmp2300 = $tmp2298(Iter$547$212287);
                            panda$core$Bit $tmp2301 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2300);
                            bool $tmp2296 = $tmp2301.value;
                            if (!$tmp2296) goto $l2295;
                            {
                                int $tmp2304;
                                {
                                    ITable* $tmp2308 = Iter$547$212287->$class->itable;
                                    while ($tmp2308->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp2308 = $tmp2308->next;
                                    }
                                    $fn2310 $tmp2309 = $tmp2308->methods[1];
                                    panda$core$Object* $tmp2311 = $tmp2309(Iter$547$212287);
                                    $tmp2307 = $tmp2311;
                                    $tmp2306 = ((org$pandalanguage$pandac$IRNode*) $tmp2307);
                                    s2305 = $tmp2306;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2306));
                                    panda$core$Panda$unref$panda$core$Object($tmp2307);
                                    panda$core$String* $tmp2314 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2305), &$s2313);
                                    $tmp2312 = $tmp2314;
                                    panda$core$MutableString$append$panda$core$String(result2240, $tmp2312);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2312));
                                }
                                $tmp2304 = -1;
                                goto $l2302;
                                $l2302:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2305));
                                s2305 = NULL;
                                switch ($tmp2304) {
                                    case -1: goto $l2315;
                                }
                                $l2315:;
                            }
                            goto $l2294;
                            $l2295:;
                        }
                        $tmp2286 = -1;
                        goto $l2284;
                        $l2284:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$547$212287));
                        Iter$547$212287 = NULL;
                        switch ($tmp2286) {
                            case -1: goto $l2316;
                        }
                        $l2316:;
                    }
                }
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp2318, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp2317, $tmp2318);
                panda$core$MutableString$append$panda$core$Char8(result2240, $tmp2317);
                panda$core$String* $tmp2321 = panda$core$MutableString$finish$R$panda$core$String(result2240);
                $tmp2320 = $tmp2321;
                $tmp2319 = $tmp2320;
                $returnValue1530 = $tmp2319;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2319));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2320));
                $tmp2239 = 0;
                goto $l2237;
                $l2322:;
                $tmp1521 = 28;
                goto $l1519;
                $l2323:;
                return $returnValue1530;
            }
            $l2237:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2240));
            result2240 = NULL;
            switch ($tmp2239) {
                case 0: goto $l2322;
            }
            $l2325:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2326, 25);
        panda$core$Bit $tmp2327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2326);
        if ($tmp2327.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2329 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 24));
            target2328 = *$tmp2329;
            org$pandalanguage$pandac$MethodRef** $tmp2331 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$434_91522->$data + 32));
            m2330 = *$tmp2331;
            if (((panda$core$Bit) { target2328 != NULL }).value) {
            {
                panda$core$String* $tmp2338 = (($fn2337) target2328->$class->vtable[0])(target2328);
                $tmp2336 = $tmp2338;
                panda$core$String* $tmp2340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2336, &$s2339);
                $tmp2335 = $tmp2340;
                panda$core$String* $tmp2341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2335, ((org$pandalanguage$pandac$Symbol*) m2330->value)->name);
                $tmp2334 = $tmp2341;
                panda$core$String* $tmp2343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2334, &$s2342);
                $tmp2333 = $tmp2343;
                $tmp2332 = $tmp2333;
                $returnValue1530 = $tmp2332;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2332));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2333));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2334));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2335));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2336));
                $tmp1521 = 29;
                goto $l1519;
                $l2344:;
                return $returnValue1530;
            }
            }
            $tmp2346 = ((org$pandalanguage$pandac$Symbol*) m2330->value)->name;
            $returnValue1530 = $tmp2346;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2346));
            $tmp1521 = 30;
            goto $l1519;
            $l2347:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2349, 26);
        panda$core$Bit $tmp2350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2349);
        if ($tmp2350.value) {
        {
            panda$core$UInt64* $tmp2352 = ((panda$core$UInt64*) ((char*) $match$434_91522->$data + 24));
            value2351 = *$tmp2352;
            panda$core$UInt64$wrapper* $tmp2357;
            $tmp2357 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
            $tmp2357->value = value2351;
            $tmp2356 = ((panda$core$Object*) $tmp2357);
            panda$core$String* $tmp2358 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2355, $tmp2356);
            $tmp2354 = $tmp2358;
            $tmp2353 = $tmp2354;
            $returnValue1530 = $tmp2353;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2353));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2354));
            panda$core$Panda$unref$panda$core$Object($tmp2356);
            $tmp1521 = 31;
            goto $l1519;
            $l2359:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2361, 27);
        panda$core$Bit $tmp2362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2361);
        if ($tmp2362.value) {
        {
            $tmp2363 = &$s2364;
            $returnValue1530 = $tmp2363;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2363));
            $tmp1521 = 32;
            goto $l1519;
            $l2365:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2367, 28);
        panda$core$Bit $tmp2368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2367);
        if ($tmp2368.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2370 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$434_91522->$data + 16));
            op2369 = *$tmp2370;
            org$pandalanguage$pandac$IRNode** $tmp2372 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 24));
            base2371 = *$tmp2372;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2379;
            $tmp2379 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp2379->value = op2369;
            $tmp2378 = ((panda$core$Object*) $tmp2379);
            panda$core$String* $tmp2381 = (($fn2380) $tmp2378->$class->vtable[0])($tmp2378);
            $tmp2377 = $tmp2381;
            panda$core$String* $tmp2383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2377, &$s2382);
            $tmp2376 = $tmp2383;
            panda$core$String* $tmp2384 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2376, ((panda$core$Object*) base2371));
            $tmp2375 = $tmp2384;
            panda$core$String* $tmp2386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2375, &$s2385);
            $tmp2374 = $tmp2386;
            $tmp2373 = $tmp2374;
            $returnValue1530 = $tmp2373;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2373));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2374));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2375));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2376));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2377));
            panda$core$Panda$unref$panda$core$Object($tmp2378);
            $tmp1521 = 33;
            goto $l1519;
            $l2387:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2389, 29);
        panda$core$Bit $tmp2390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2389);
        if ($tmp2390.value) {
        {
            panda$core$String** $tmp2392 = ((panda$core$String**) ((char*) $match$434_91522->$data + 16));
            label2391 = *$tmp2392;
            org$pandalanguage$pandac$IRNode** $tmp2394 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 24));
            target2393 = *$tmp2394;
            org$pandalanguage$pandac$IRNode** $tmp2396 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 32));
            list2395 = *$tmp2396;
            panda$collections$ImmutableArray** $tmp2398 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 40));
            statements2397 = *$tmp2398;
            int $tmp2401;
            {
                panda$core$MutableString* $tmp2405 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2405);
                $tmp2404 = $tmp2405;
                $tmp2403 = $tmp2404;
                result2402 = $tmp2403;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2403));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2404));
                if (((panda$core$Bit) { label2391 != NULL }).value) {
                {
                    panda$core$String* $tmp2408 = panda$core$String$convert$R$panda$core$String(label2391);
                    $tmp2407 = $tmp2408;
                    panda$core$String* $tmp2410 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2407, &$s2409);
                    $tmp2406 = $tmp2410;
                    panda$core$MutableString$append$panda$core$String(result2402, $tmp2406);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2406));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2407));
                }
                }
                panda$core$String* $tmp2416 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2415, ((panda$core$Object*) target2393));
                $tmp2414 = $tmp2416;
                panda$core$String* $tmp2418 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2414, &$s2417);
                $tmp2413 = $tmp2418;
                panda$core$String* $tmp2419 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2413, ((panda$core$Object*) list2395));
                $tmp2412 = $tmp2419;
                panda$core$String* $tmp2421 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2412, &$s2420);
                $tmp2411 = $tmp2421;
                panda$core$MutableString$append$panda$core$String(result2402, $tmp2411);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2411));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2412));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2413));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2414));
                {
                    int $tmp2424;
                    {
                        ITable* $tmp2428 = ((panda$collections$Iterable*) statements2397)->$class->itable;
                        while ($tmp2428->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2428 = $tmp2428->next;
                        }
                        $fn2430 $tmp2429 = $tmp2428->methods[0];
                        panda$collections$Iterator* $tmp2431 = $tmp2429(((panda$collections$Iterable*) statements2397));
                        $tmp2427 = $tmp2431;
                        $tmp2426 = $tmp2427;
                        Iter$570$172425 = $tmp2426;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2426));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2427));
                        $l2432:;
                        ITable* $tmp2435 = Iter$570$172425->$class->itable;
                        while ($tmp2435->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2435 = $tmp2435->next;
                        }
                        $fn2437 $tmp2436 = $tmp2435->methods[0];
                        panda$core$Bit $tmp2438 = $tmp2436(Iter$570$172425);
                        panda$core$Bit $tmp2439 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2438);
                        bool $tmp2434 = $tmp2439.value;
                        if (!$tmp2434) goto $l2433;
                        {
                            int $tmp2442;
                            {
                                ITable* $tmp2446 = Iter$570$172425->$class->itable;
                                while ($tmp2446->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2446 = $tmp2446->next;
                                }
                                $fn2448 $tmp2447 = $tmp2446->methods[1];
                                panda$core$Object* $tmp2449 = $tmp2447(Iter$570$172425);
                                $tmp2445 = $tmp2449;
                                $tmp2444 = ((org$pandalanguage$pandac$IRNode*) $tmp2445);
                                s2443 = $tmp2444;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2444));
                                panda$core$Panda$unref$panda$core$Object($tmp2445);
                                panda$core$String* $tmp2452 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2443), &$s2451);
                                $tmp2450 = $tmp2452;
                                panda$core$MutableString$append$panda$core$String(result2402, $tmp2450);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2450));
                            }
                            $tmp2442 = -1;
                            goto $l2440;
                            $l2440:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2443));
                            s2443 = NULL;
                            switch ($tmp2442) {
                                case -1: goto $l2453;
                            }
                            $l2453:;
                        }
                        goto $l2432;
                        $l2433:;
                    }
                    $tmp2424 = -1;
                    goto $l2422;
                    $l2422:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$570$172425));
                    Iter$570$172425 = NULL;
                    switch ($tmp2424) {
                        case -1: goto $l2454;
                    }
                    $l2454:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp2456, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp2455, $tmp2456);
                panda$core$MutableString$append$panda$core$Char8(result2402, $tmp2455);
                panda$core$String* $tmp2459 = panda$core$MutableString$finish$R$panda$core$String(result2402);
                $tmp2458 = $tmp2459;
                $tmp2457 = $tmp2458;
                $returnValue1530 = $tmp2457;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2457));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2458));
                $tmp2401 = 0;
                goto $l2399;
                $l2460:;
                $tmp1521 = 34;
                goto $l1519;
                $l2461:;
                return $returnValue1530;
            }
            $l2399:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2402));
            result2402 = NULL;
            switch ($tmp2401) {
                case 0: goto $l2460;
            }
            $l2463:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2464, 30);
        panda$core$Bit $tmp2465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2464);
        if ($tmp2465.value) {
        {
            panda$core$Real64* $tmp2467 = ((panda$core$Real64*) ((char*) $match$434_91522->$data + 24));
            value2466 = *$tmp2467;
            panda$core$String* $tmp2470 = panda$core$Real64$convert$R$panda$core$String(value2466);
            $tmp2469 = $tmp2470;
            $tmp2468 = $tmp2469;
            $returnValue1530 = $tmp2468;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2468));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2469));
            $tmp1521 = 35;
            goto $l1519;
            $l2471:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2473, 31);
        panda$core$Bit $tmp2474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2473);
        if ($tmp2474.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2476 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 16));
            value2475 = *$tmp2476;
            if (((panda$core$Bit) { value2475 != NULL }).value) {
            {
                panda$core$String* $tmp2481 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2480, ((panda$core$Object*) value2475));
                $tmp2479 = $tmp2481;
                panda$core$String* $tmp2483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2479, &$s2482);
                $tmp2478 = $tmp2483;
                $tmp2477 = $tmp2478;
                $returnValue1530 = $tmp2477;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2477));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2478));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2479));
                $tmp1521 = 36;
                goto $l1519;
                $l2484:;
                return $returnValue1530;
            }
            }
            $tmp2486 = &$s2487;
            $returnValue1530 = $tmp2486;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2486));
            $tmp1521 = 37;
            goto $l1519;
            $l2488:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2490, 32);
        panda$core$Bit $tmp2491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2490);
        if ($tmp2491.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2493 = ((org$pandalanguage$pandac$Type**) ((char*) $match$434_91522->$data + 16));
            type2492 = *$tmp2493;
            panda$core$Int64* $tmp2495 = ((panda$core$Int64*) ((char*) $match$434_91522->$data + 24));
            id2494 = *$tmp2495;
            panda$core$Int64$wrapper* $tmp2501;
            $tmp2501 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2501->value = id2494;
            $tmp2500 = ((panda$core$Object*) $tmp2501);
            panda$core$String* $tmp2502 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2499, $tmp2500);
            $tmp2498 = $tmp2502;
            panda$core$String* $tmp2504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2498, &$s2503);
            $tmp2497 = $tmp2504;
            $tmp2496 = $tmp2497;
            $returnValue1530 = $tmp2496;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2496));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2497));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2498));
            panda$core$Panda$unref$panda$core$Object($tmp2500);
            $tmp1521 = 38;
            goto $l1519;
            $l2505:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2507, 33);
        panda$core$Bit $tmp2508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2507);
        if ($tmp2508.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2510 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 0));
            base2509 = *$tmp2510;
            panda$core$Int64* $tmp2512 = ((panda$core$Int64*) ((char*) $match$434_91522->$data + 8));
            id2511 = *$tmp2512;
            panda$core$Int64$wrapper* $tmp2520;
            $tmp2520 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2520->value = id2511;
            $tmp2519 = ((panda$core$Object*) $tmp2520);
            panda$core$String* $tmp2521 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2518, $tmp2519);
            $tmp2517 = $tmp2521;
            panda$core$String* $tmp2523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2517, &$s2522);
            $tmp2516 = $tmp2523;
            panda$core$String* $tmp2524 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2516, ((panda$core$Object*) base2509));
            $tmp2515 = $tmp2524;
            panda$core$String* $tmp2526 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2515, &$s2525);
            $tmp2514 = $tmp2526;
            $tmp2513 = $tmp2514;
            $returnValue1530 = $tmp2513;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2513));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2514));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2515));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2516));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2517));
            panda$core$Panda$unref$panda$core$Object($tmp2519);
            $tmp1521 = 39;
            goto $l1519;
            $l2527:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2529, 34);
        panda$core$Bit $tmp2530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2529);
        if ($tmp2530.value) {
        {
            $tmp2531 = &$s2532;
            $returnValue1530 = $tmp2531;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2531));
            $tmp1521 = 40;
            goto $l1519;
            $l2533:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2535, 35);
        panda$core$Bit $tmp2536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2535);
        if ($tmp2536.value) {
        {
            panda$core$String** $tmp2538 = ((panda$core$String**) ((char*) $match$434_91522->$data + 16));
            str2537 = *$tmp2538;
            panda$core$String* $tmp2542 = panda$core$String$format$panda$core$String$R$panda$core$String(str2537, &$s2541);
            $tmp2540 = $tmp2542;
            $tmp2539 = $tmp2540;
            $returnValue1530 = $tmp2539;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2539));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2540));
            $tmp1521 = 41;
            goto $l1519;
            $l2543:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2545, 36);
        panda$core$Bit $tmp2546 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2545);
        if ($tmp2546.value) {
        {
            $tmp2547 = &$s2548;
            $returnValue1530 = $tmp2547;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2547));
            $tmp1521 = 42;
            goto $l1519;
            $l2549:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2551, 37);
        panda$core$Bit $tmp2552 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2551);
        if ($tmp2552.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2554 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 16));
            test2553 = *$tmp2554;
            org$pandalanguage$pandac$IRNode** $tmp2556 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 24));
            ifTrue2555 = *$tmp2556;
            org$pandalanguage$pandac$IRNode** $tmp2558 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 32));
            ifFalse2557 = *$tmp2558;
            panda$core$String* $tmp2567 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2566, ((panda$core$Object*) test2553));
            $tmp2565 = $tmp2567;
            panda$core$String* $tmp2569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2565, &$s2568);
            $tmp2564 = $tmp2569;
            panda$core$String* $tmp2570 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2564, ((panda$core$Object*) ifTrue2555));
            $tmp2563 = $tmp2570;
            panda$core$String* $tmp2572 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2563, &$s2571);
            $tmp2562 = $tmp2572;
            panda$core$String* $tmp2573 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2562, ((panda$core$Object*) ifFalse2557));
            $tmp2561 = $tmp2573;
            panda$core$String* $tmp2575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2561, &$s2574);
            $tmp2560 = $tmp2575;
            $tmp2559 = $tmp2560;
            $returnValue1530 = $tmp2559;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2559));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2560));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2561));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2562));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2563));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2564));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2565));
            $tmp1521 = 43;
            goto $l1519;
            $l2576:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2578, 38);
        panda$core$Bit $tmp2579 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2578);
        if ($tmp2579.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2581 = ((org$pandalanguage$pandac$Type**) ((char*) $match$434_91522->$data + 16));
            type2580 = *$tmp2581;
            panda$core$String* $tmp2584 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type2580);
            $tmp2583 = $tmp2584;
            $tmp2582 = $tmp2583;
            $returnValue1530 = $tmp2582;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2582));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2583));
            $tmp1521 = 44;
            goto $l1519;
            $l2585:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2587, 39);
        panda$core$Bit $tmp2588 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2587);
        if ($tmp2588.value) {
        {
            panda$core$String** $tmp2590 = ((panda$core$String**) ((char*) $match$434_91522->$data + 16));
            name2589 = *$tmp2590;
            $tmp2591 = name2589;
            $returnValue1530 = $tmp2591;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2591));
            $tmp1521 = 45;
            goto $l1519;
            $l2592:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2594, 40);
        panda$core$Bit $tmp2595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2594);
        if ($tmp2595.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2597 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 24));
            base2596 = *$tmp2597;
            panda$collections$ImmutableArray** $tmp2599 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 32));
            args2598 = *$tmp2599;
            panda$core$String* $tmp2606 = (($fn2605) base2596->$class->vtable[0])(base2596);
            $tmp2604 = $tmp2606;
            panda$core$String* $tmp2608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2604, &$s2607);
            $tmp2603 = $tmp2608;
            ITable* $tmp2610 = ((panda$collections$ListView*) args2598)->$class->itable;
            while ($tmp2610->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2610 = $tmp2610->next;
            }
            $fn2612 $tmp2611 = $tmp2610->methods[4];
            panda$core$String* $tmp2613 = $tmp2611(((panda$collections$ListView*) args2598));
            $tmp2609 = $tmp2613;
            panda$core$String* $tmp2614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2603, $tmp2609);
            $tmp2602 = $tmp2614;
            panda$core$String* $tmp2616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2602, &$s2615);
            $tmp2601 = $tmp2616;
            $tmp2600 = $tmp2601;
            $returnValue1530 = $tmp2600;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2600));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2601));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2602));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2609));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2603));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2604));
            $tmp1521 = 46;
            goto $l1519;
            $l2617:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2619, 41);
        panda$core$Bit $tmp2620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2619);
        if ($tmp2620.value) {
        {
            panda$collections$ImmutableArray** $tmp2622 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 16));
            params2621 = *$tmp2622;
            org$pandalanguage$pandac$ASTNode** $tmp2624 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$434_91522->$data + 24));
            body2623 = *$tmp2624;
            ITable* $tmp2632 = ((panda$collections$ListView*) params2621)->$class->itable;
            while ($tmp2632->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2632 = $tmp2632->next;
            }
            $fn2634 $tmp2633 = $tmp2632->methods[4];
            panda$core$String* $tmp2635 = $tmp2633(((panda$collections$ListView*) params2621));
            $tmp2631 = $tmp2635;
            panda$core$String* $tmp2636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2630, $tmp2631);
            $tmp2629 = $tmp2636;
            panda$core$String* $tmp2638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2629, &$s2637);
            $tmp2628 = $tmp2638;
            panda$core$String* $tmp2639 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2628, ((panda$core$Object*) body2623));
            $tmp2627 = $tmp2639;
            panda$core$String* $tmp2641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2627, &$s2640);
            $tmp2626 = $tmp2641;
            $tmp2625 = $tmp2626;
            $returnValue1530 = $tmp2625;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2625));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2626));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2627));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2628));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2629));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2631));
            $tmp1521 = 47;
            goto $l1519;
            $l2642:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2644, 42);
        panda$core$Bit $tmp2645 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2644);
        if ($tmp2645.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2647 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 24));
            target2646 = *$tmp2647;
            panda$collections$ImmutableArray** $tmp2649 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 32));
            methods2648 = *$tmp2649;
            panda$collections$ImmutableArray** $tmp2651 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 40));
            args2650 = *$tmp2651;
            if (((panda$core$Bit) { target2646 != NULL }).value) {
            {
                panda$core$String* $tmp2660 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2659, ((panda$core$Object*) target2646));
                $tmp2658 = $tmp2660;
                panda$core$String* $tmp2662 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2658, &$s2661);
                $tmp2657 = $tmp2662;
                panda$core$Int64$init$builtin_int64(&$tmp2664, 0);
                panda$core$Object* $tmp2665 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2648, $tmp2664);
                $tmp2663 = $tmp2665;
                panda$core$String* $tmp2666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2657, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2663)->value)->name);
                $tmp2656 = $tmp2666;
                panda$core$String* $tmp2668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2656, &$s2667);
                $tmp2655 = $tmp2668;
                ITable* $tmp2670 = ((panda$collections$ListView*) args2650)->$class->itable;
                while ($tmp2670->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2670 = $tmp2670->next;
                }
                $fn2672 $tmp2671 = $tmp2670->methods[4];
                panda$core$String* $tmp2673 = $tmp2671(((panda$collections$ListView*) args2650));
                $tmp2669 = $tmp2673;
                panda$core$String* $tmp2674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2655, $tmp2669);
                $tmp2654 = $tmp2674;
                panda$core$String* $tmp2676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2654, &$s2675);
                $tmp2653 = $tmp2676;
                $tmp2652 = $tmp2653;
                $returnValue1530 = $tmp2652;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2652));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2653));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2654));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2669));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2655));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2656));
                panda$core$Panda$unref$panda$core$Object($tmp2663);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2657));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2658));
                $tmp1521 = 48;
                goto $l1519;
                $l2677:;
                return $returnValue1530;
            }
            }
            else {
            {
                panda$core$Int64$init$builtin_int64(&$tmp2686, 0);
                panda$core$Object* $tmp2687 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2648, $tmp2686);
                $tmp2685 = $tmp2687;
                panda$core$String* $tmp2688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2684, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2685)->value)->name);
                $tmp2683 = $tmp2688;
                panda$core$String* $tmp2690 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2683, &$s2689);
                $tmp2682 = $tmp2690;
                ITable* $tmp2692 = ((panda$collections$ListView*) args2650)->$class->itable;
                while ($tmp2692->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2692 = $tmp2692->next;
                }
                $fn2694 $tmp2693 = $tmp2692->methods[4];
                panda$core$String* $tmp2695 = $tmp2693(((panda$collections$ListView*) args2650));
                $tmp2691 = $tmp2695;
                panda$core$String* $tmp2696 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2682, $tmp2691);
                $tmp2681 = $tmp2696;
                panda$core$String* $tmp2698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2681, &$s2697);
                $tmp2680 = $tmp2698;
                $tmp2679 = $tmp2680;
                $returnValue1530 = $tmp2679;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2679));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2680));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2681));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2691));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2682));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2683));
                panda$core$Panda$unref$panda$core$Object($tmp2685);
                $tmp1521 = 49;
                goto $l1519;
                $l2699:;
                return $returnValue1530;
            }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2701, 43);
        panda$core$Bit $tmp2702 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2701);
        if ($tmp2702.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2704 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 16));
            target2703 = *$tmp2704;
            panda$collections$ImmutableArray** $tmp2706 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 24));
            methods2705 = *$tmp2706;
            if (((panda$core$Bit) { target2703 != NULL }).value) {
            {
                panda$core$String* $tmp2713 = (($fn2712) target2703->$class->vtable[0])(target2703);
                $tmp2711 = $tmp2713;
                panda$core$String* $tmp2715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2711, &$s2714);
                $tmp2710 = $tmp2715;
                panda$core$Int64$init$builtin_int64(&$tmp2717, 0);
                panda$core$Object* $tmp2718 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2705, $tmp2717);
                $tmp2716 = $tmp2718;
                panda$core$String* $tmp2719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2710, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2716)->value)->name);
                $tmp2709 = $tmp2719;
                panda$core$String* $tmp2721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2709, &$s2720);
                $tmp2708 = $tmp2721;
                $tmp2707 = $tmp2708;
                $returnValue1530 = $tmp2707;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2707));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2708));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2709));
                panda$core$Panda$unref$panda$core$Object($tmp2716);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2710));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2711));
                $tmp1521 = 50;
                goto $l1519;
                $l2722:;
                return $returnValue1530;
            }
            }
            else {
            {
                panda$core$Int64$init$builtin_int64(&$tmp2728, 0);
                panda$core$Object* $tmp2729 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2705, $tmp2728);
                $tmp2727 = $tmp2729;
                panda$core$String* $tmp2730 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2727)->value)->name);
                $tmp2726 = $tmp2730;
                panda$core$String* $tmp2732 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2726, &$s2731);
                $tmp2725 = $tmp2732;
                $tmp2724 = $tmp2725;
                $returnValue1530 = $tmp2724;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2724));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2725));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2726));
                panda$core$Panda$unref$panda$core$Object($tmp2727);
                $tmp1521 = 51;
                goto $l1519;
                $l2733:;
                return $returnValue1530;
            }
            }
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2735, 44);
        panda$core$Bit $tmp2736 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2735);
        if ($tmp2736.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2738 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 16));
            start2737 = *$tmp2738;
            org$pandalanguage$pandac$IRNode** $tmp2740 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 24));
            end2739 = *$tmp2740;
            panda$core$Bit* $tmp2742 = ((panda$core$Bit*) ((char*) $match$434_91522->$data + 32));
            inclusive2741 = *$tmp2742;
            org$pandalanguage$pandac$IRNode** $tmp2744 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 33));
            step2743 = *$tmp2744;
            int $tmp2747;
            {
                panda$core$MutableString* $tmp2751 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2751);
                $tmp2750 = $tmp2751;
                $tmp2749 = $tmp2750;
                result2748 = $tmp2749;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2749));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2750));
                if (((panda$core$Bit) { start2737 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result2748, ((panda$core$Object*) start2737));
                }
                }
                if (inclusive2741.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result2748, &$s2752);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(result2748, &$s2753);
                }
                }
                if (((panda$core$Bit) { end2739 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result2748, ((panda$core$Object*) end2739));
                }
                }
                if (((panda$core$Bit) { step2743 != NULL }).value) {
                {
                    panda$core$String* $tmp2757 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2756, ((panda$core$Object*) step2743));
                    $tmp2755 = $tmp2757;
                    panda$core$String* $tmp2759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2755, &$s2758);
                    $tmp2754 = $tmp2759;
                    panda$core$MutableString$append$panda$core$String(result2748, $tmp2754);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2754));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2755));
                }
                }
                panda$core$String* $tmp2762 = panda$core$MutableString$finish$R$panda$core$String(result2748);
                $tmp2761 = $tmp2762;
                $tmp2760 = $tmp2761;
                $returnValue1530 = $tmp2760;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2760));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2761));
                $tmp2747 = 0;
                goto $l2745;
                $l2763:;
                $tmp1521 = 52;
                goto $l1519;
                $l2764:;
                return $returnValue1530;
            }
            $l2745:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2748));
            result2748 = NULL;
            switch ($tmp2747) {
                case 0: goto $l2763;
            }
            $l2766:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2767, 45);
        panda$core$Bit $tmp2768 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2767);
        if ($tmp2768.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp2770 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$434_91522->$data + 16));
            kind2769 = *$tmp2770;
            panda$collections$ImmutableArray** $tmp2772 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 24));
            decls2771 = *$tmp2772;
            int $tmp2775;
            {
                panda$core$MutableString* $tmp2779 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2779);
                $tmp2778 = $tmp2779;
                $tmp2777 = $tmp2778;
                result2776 = $tmp2777;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2777));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2778));
                {
                    $match$636_172780 = kind2769;
                    panda$core$Int64$init$builtin_int64(&$tmp2781, 0);
                    panda$core$Bit $tmp2782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$636_172780.$rawValue, $tmp2781);
                    if ($tmp2782.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2776, &$s2783);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp2784, 1);
                    panda$core$Bit $tmp2785 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$636_172780.$rawValue, $tmp2784);
                    if ($tmp2785.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2776, &$s2786);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp2787, 2);
                    panda$core$Bit $tmp2788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$636_172780.$rawValue, $tmp2787);
                    if ($tmp2788.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2776, &$s2789);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp2790, 3);
                    panda$core$Bit $tmp2791 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$636_172780.$rawValue, $tmp2790);
                    if ($tmp2791.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2776, &$s2792);
                    }
                    }
                    }
                    }
                    }
                }
                ITable* $tmp2794 = ((panda$collections$ListView*) decls2771)->$class->itable;
                while ($tmp2794->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2794 = $tmp2794->next;
                }
                $fn2796 $tmp2795 = $tmp2794->methods[4];
                panda$core$String* $tmp2797 = $tmp2795(((panda$collections$ListView*) decls2771));
                $tmp2793 = $tmp2797;
                panda$core$MutableString$append$panda$core$String(result2776, $tmp2793);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2793));
                panda$core$String* $tmp2800 = panda$core$MutableString$finish$R$panda$core$String(result2776);
                $tmp2799 = $tmp2800;
                $tmp2798 = $tmp2799;
                $returnValue1530 = $tmp2798;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2798));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2799));
                $tmp2775 = 0;
                goto $l2773;
                $l2801:;
                $tmp1521 = 53;
                goto $l1519;
                $l2802:;
                return $returnValue1530;
            }
            $l2773:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2776));
            result2776 = NULL;
            switch ($tmp2775) {
                case 0: goto $l2801;
            }
            $l2804:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2805, 46);
        panda$core$Bit $tmp2806 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2805);
        if ($tmp2806.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2808 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$434_91522->$data + 16));
            variable2807 = *$tmp2808;
            $tmp2809 = ((org$pandalanguage$pandac$Symbol*) variable2807)->name;
            $returnValue1530 = $tmp2809;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2809));
            $tmp1521 = 54;
            goto $l1519;
            $l2810:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2812, 47);
        panda$core$Bit $tmp2813 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2812);
        if ($tmp2813.value) {
        {
            panda$collections$ImmutableArray** $tmp2815 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 16));
            tests2814 = *$tmp2815;
            panda$collections$ImmutableArray** $tmp2817 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 24));
            statements2816 = *$tmp2817;
            ITable* $tmp2825 = ((panda$collections$ListView*) tests2814)->$class->itable;
            while ($tmp2825->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2825 = $tmp2825->next;
            }
            $fn2827 $tmp2826 = $tmp2825->methods[4];
            panda$core$String* $tmp2828 = $tmp2826(((panda$collections$ListView*) tests2814));
            $tmp2824 = $tmp2828;
            panda$core$String* $tmp2829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2823, $tmp2824);
            $tmp2822 = $tmp2829;
            panda$core$String* $tmp2831 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2822, &$s2830);
            $tmp2821 = $tmp2831;
            ITable* $tmp2834 = ((panda$collections$ListView*) statements2816)->$class->itable;
            while ($tmp2834->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2834 = $tmp2834->next;
            }
            $fn2836 $tmp2835 = $tmp2834->methods[5];
            panda$core$String* $tmp2837 = $tmp2835(((panda$collections$ListView*) statements2816), &$s2833);
            $tmp2832 = $tmp2837;
            panda$core$String* $tmp2838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2821, $tmp2832);
            $tmp2820 = $tmp2838;
            panda$core$String* $tmp2840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2820, &$s2839);
            $tmp2819 = $tmp2840;
            $tmp2818 = $tmp2819;
            $returnValue1530 = $tmp2818;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2818));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2819));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2820));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2832));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2821));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2822));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2824));
            $tmp1521 = 55;
            goto $l1519;
            $l2841:;
            return $returnValue1530;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp2843, 48);
        panda$core$Bit $tmp2844 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$434_91522->$rawValue, $tmp2843);
        if ($tmp2844.value) {
        {
            panda$core$String** $tmp2846 = ((panda$core$String**) ((char*) $match$434_91522->$data + 16));
            label2845 = *$tmp2846;
            org$pandalanguage$pandac$IRNode** $tmp2848 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$434_91522->$data + 24));
            test2847 = *$tmp2848;
            panda$collections$ImmutableArray** $tmp2850 = ((panda$collections$ImmutableArray**) ((char*) $match$434_91522->$data + 32));
            statements2849 = *$tmp2850;
            int $tmp2853;
            {
                panda$core$MutableString* $tmp2857 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2857);
                $tmp2856 = $tmp2857;
                $tmp2855 = $tmp2856;
                result2854 = $tmp2855;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2855));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2856));
                if (((panda$core$Bit) { label2845 != NULL }).value) {
                {
                    panda$core$String* $tmp2860 = panda$core$String$convert$R$panda$core$String(label2845);
                    $tmp2859 = $tmp2860;
                    panda$core$String* $tmp2862 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2859, &$s2861);
                    $tmp2858 = $tmp2862;
                    panda$core$MutableString$append$panda$core$String(result2854, $tmp2858);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2858));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2859));
                }
                }
                panda$core$String* $tmp2866 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2865, ((panda$core$Object*) test2847));
                $tmp2864 = $tmp2866;
                panda$core$String* $tmp2868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2864, &$s2867);
                $tmp2863 = $tmp2868;
                panda$core$MutableString$append$panda$core$String(result2854, $tmp2863);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2863));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2864));
                {
                    int $tmp2871;
                    {
                        ITable* $tmp2875 = ((panda$collections$Iterable*) statements2849)->$class->itable;
                        while ($tmp2875->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2875 = $tmp2875->next;
                        }
                        $fn2877 $tmp2876 = $tmp2875->methods[0];
                        panda$collections$Iterator* $tmp2878 = $tmp2876(((panda$collections$Iterable*) statements2849));
                        $tmp2874 = $tmp2878;
                        $tmp2873 = $tmp2874;
                        Iter$654$172872 = $tmp2873;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2873));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2874));
                        $l2879:;
                        ITable* $tmp2882 = Iter$654$172872->$class->itable;
                        while ($tmp2882->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2882 = $tmp2882->next;
                        }
                        $fn2884 $tmp2883 = $tmp2882->methods[0];
                        panda$core$Bit $tmp2885 = $tmp2883(Iter$654$172872);
                        panda$core$Bit $tmp2886 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2885);
                        bool $tmp2881 = $tmp2886.value;
                        if (!$tmp2881) goto $l2880;
                        {
                            int $tmp2889;
                            {
                                ITable* $tmp2893 = Iter$654$172872->$class->itable;
                                while ($tmp2893->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2893 = $tmp2893->next;
                                }
                                $fn2895 $tmp2894 = $tmp2893->methods[1];
                                panda$core$Object* $tmp2896 = $tmp2894(Iter$654$172872);
                                $tmp2892 = $tmp2896;
                                $tmp2891 = ((org$pandalanguage$pandac$IRNode*) $tmp2892);
                                s2890 = $tmp2891;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2891));
                                panda$core$Panda$unref$panda$core$Object($tmp2892);
                                panda$core$String* $tmp2899 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2890), &$s2898);
                                $tmp2897 = $tmp2899;
                                panda$core$MutableString$append$panda$core$String(result2854, $tmp2897);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2897));
                            }
                            $tmp2889 = -1;
                            goto $l2887;
                            $l2887:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2890));
                            s2890 = NULL;
                            switch ($tmp2889) {
                                case -1: goto $l2900;
                            }
                            $l2900:;
                        }
                        goto $l2879;
                        $l2880:;
                    }
                    $tmp2871 = -1;
                    goto $l2869;
                    $l2869:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$654$172872));
                    Iter$654$172872 = NULL;
                    switch ($tmp2871) {
                        case -1: goto $l2901;
                    }
                    $l2901:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp2903, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp2902, $tmp2903);
                panda$core$MutableString$append$panda$core$Char8(result2854, $tmp2902);
                panda$core$String* $tmp2906 = panda$core$MutableString$finish$R$panda$core$String(result2854);
                $tmp2905 = $tmp2906;
                $tmp2904 = $tmp2905;
                $returnValue1530 = $tmp2904;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2904));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2905));
                $tmp2853 = 0;
                goto $l2851;
                $l2907:;
                $tmp1521 = 56;
                goto $l1519;
                $l2908:;
                return $returnValue1530;
            }
            $l2851:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2854));
            result2854 = NULL;
            switch ($tmp2853) {
                case 0: goto $l2907;
            }
            $l2910:;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp2911, false);
            if ($tmp2911.value) goto $l2912; else goto $l2913;
            $l2913:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s2914, (panda$core$Int64) { 660 });
            abort();
            $l2912:;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
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
        case 27: goto $l2226;
        case 10: goto $l1801;
        case 46: goto $l2617;
        case 25: goto $l2153;
        case 2: goto $l1558;
        case 17: goto $l1923;
        case 51: goto $l2733;
        case 40: goto $l2533;
        case 50: goto $l2722;
        case 0: goto $l1543;
        case 8: goto $l1757;
        case 14: goto $l1886;
        case 30: goto $l2347;
        case 9: goto $l1781;
        case 31: goto $l2359;
        case 13: goto $l1873;
        case 21: goto $l2042;
        case 43: goto $l2576;
        case 56: goto $l2908;
        case 38: goto $l2505;
        case 5: goto $l1649;
        case 11: goto $l1810;
        case 37: goto $l2488;
        case 19: goto $l1995;
        case 42: goto $l2549;
        case 20: goto $l2022;
        case 24: goto $l2140;
        case 48: goto $l2677;
        case 41: goto $l2543;
        case 36: goto $l2484;
        case 47: goto $l2642;
        case 12: goto $l1839;
        case 15: goto $l1899;
        case 16: goto $l1903;
        case 55: goto $l2841;
        case 4: goto $l1596;
        case 7: goto $l1753;
        case -1: goto $l2915;
        case 32: goto $l2365;
        case 52: goto $l2764;
        case 39: goto $l2527;
        case 45: goto $l2592;
        case 23: goto $l2130;
        case 35: goto $l2471;
        case 18: goto $l1929;
        case 53: goto $l2802;
        case 54: goto $l2810;
        case 49: goto $l2699;
        case 6: goto $l1739;
        case 33: goto $l2387;
        case 34: goto $l2461;
        case 1: goto $l1552;
        case 29: goto $l2344;
        case 44: goto $l2585;
        case 3: goto $l1587;
        case 22: goto $l2062;
        case 28: goto $l2323;
        case 26: goto $l2166;
    }
    $l2915:;
    abort();
}
void org$pandalanguage$pandac$IRNode$cleanup(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$5_12922 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2923;
    panda$core$Int64 $tmp2924;
    org$pandalanguage$pandac$Position _f02926;
    org$pandalanguage$pandac$IRNode* _f12928 = NULL;
    org$pandalanguage$pandac$IRNode* _f22930 = NULL;
    panda$core$Int64 $tmp2932;
    org$pandalanguage$pandac$Position _f02934;
    org$pandalanguage$pandac$Type* _f12936 = NULL;
    panda$core$Int64 $tmp2938;
    org$pandalanguage$pandac$Position _f02940;
    org$pandalanguage$pandac$Type* _f12942 = NULL;
    org$pandalanguage$pandac$IRNode* _f22944 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind _f32946;
    org$pandalanguage$pandac$IRNode* _f42948 = NULL;
    panda$core$Int64 $tmp2950;
    org$pandalanguage$pandac$Position _f02952;
    org$pandalanguage$pandac$Type* _f12954 = NULL;
    panda$core$Bit _f22956;
    panda$core$Int64 $tmp2958;
    org$pandalanguage$pandac$Position _f02960;
    panda$collections$ImmutableArray* _f12962 = NULL;
    panda$core$Int64 $tmp2964;
    org$pandalanguage$pandac$Position _f02966;
    panda$collections$ImmutableArray* _f12968 = NULL;
    panda$collections$ImmutableArray* _f22970 = NULL;
    panda$core$Int64 $tmp2972;
    org$pandalanguage$pandac$Position _f02974;
    panda$core$String* _f12976 = NULL;
    panda$core$Int64 $tmp2978;
    org$pandalanguage$pandac$Position _f02980;
    org$pandalanguage$pandac$Type* _f12982 = NULL;
    org$pandalanguage$pandac$MethodRef* _f22984 = NULL;
    panda$collections$ImmutableArray* _f32986 = NULL;
    panda$core$Int64 $tmp2988;
    org$pandalanguage$pandac$Position _f02990;
    org$pandalanguage$pandac$IRNode* _f12992 = NULL;
    org$pandalanguage$pandac$Type* _f22994 = NULL;
    panda$core$Bit _f32996;
    panda$core$Int64 $tmp2998;
    org$pandalanguage$pandac$Position _f03000;
    org$pandalanguage$pandac$ChoiceEntry* _f13002 = NULL;
    panda$core$Int64 $tmp3004;
    org$pandalanguage$pandac$Position _f03006;
    org$pandalanguage$pandac$IRNode* _f13008 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* _f23010 = NULL;
    panda$core$Int64 _f33012;
    panda$core$Int64 $tmp3014;
    org$pandalanguage$pandac$Position _f03016;
    org$pandalanguage$pandac$Type* _f13018 = NULL;
    org$pandalanguage$pandac$IRNode* _f23020 = NULL;
    panda$core$Int64 $tmp3022;
    org$pandalanguage$pandac$Position _f03024;
    org$pandalanguage$pandac$Type* _f13026 = NULL;
    panda$core$Int64 $tmp3028;
    org$pandalanguage$pandac$Position _f03030;
    panda$core$String* _f13032 = NULL;
    panda$core$Int64 $tmp3034;
    org$pandalanguage$pandac$IRNode* _f03036 = NULL;
    org$pandalanguage$pandac$IRNode* _f13038 = NULL;
    panda$core$Int64 $tmp3040;
    org$pandalanguage$pandac$Position _f03042;
    panda$core$String* _f13044 = NULL;
    panda$collections$ImmutableArray* _f23046 = NULL;
    org$pandalanguage$pandac$IRNode* _f33048 = NULL;
    panda$core$Int64 $tmp3050;
    org$pandalanguage$pandac$IRNode* _f03052 = NULL;
    panda$collections$ImmutableArray* _f13054 = NULL;
    panda$core$Int64 $tmp3056;
    org$pandalanguage$pandac$IRNode* _f03058 = NULL;
    org$pandalanguage$pandac$IRNode* _f13060 = NULL;
    panda$core$Int64 $tmp3062;
    org$pandalanguage$pandac$Position _f03064;
    org$pandalanguage$pandac$Type* _f13066 = NULL;
    org$pandalanguage$pandac$IRNode* _f23068 = NULL;
    org$pandalanguage$pandac$FieldDecl* _f33070 = NULL;
    panda$core$Int64 $tmp3072;
    org$pandalanguage$pandac$Position _f03074;
    org$pandalanguage$pandac$IRNode* _f13076 = NULL;
    panda$collections$ImmutableArray* _f23078 = NULL;
    org$pandalanguage$pandac$IRNode* _f33080 = NULL;
    panda$core$Int64 $tmp3082;
    org$pandalanguage$pandac$Position _f03084;
    org$pandalanguage$pandac$Type* _f13086 = NULL;
    panda$core$UInt64 _f23088;
    panda$core$Int64 $tmp3090;
    org$pandalanguage$pandac$Position _f03092;
    org$pandalanguage$pandac$IRNode* _f13094 = NULL;
    panda$core$Int64 $tmp3096;
    org$pandalanguage$pandac$Position _f03098;
    org$pandalanguage$pandac$IRNode* _f13100 = NULL;
    panda$core$Int64 $tmp3102;
    org$pandalanguage$pandac$Position _f03104;
    panda$core$String* _f13106 = NULL;
    panda$collections$ImmutableArray* _f23108 = NULL;
    panda$core$Int64 $tmp3110;
    org$pandalanguage$pandac$Position _f03112;
    org$pandalanguage$pandac$IRNode* _f13114 = NULL;
    panda$collections$ImmutableArray* _f23116 = NULL;
    panda$collections$ImmutableArray* _f33118 = NULL;
    panda$core$Int64 $tmp3120;
    org$pandalanguage$pandac$Position _f03122;
    org$pandalanguage$pandac$Type* _f13124 = NULL;
    org$pandalanguage$pandac$IRNode* _f23126 = NULL;
    org$pandalanguage$pandac$MethodRef* _f33128 = NULL;
    panda$core$Int64 $tmp3130;
    org$pandalanguage$pandac$Position _f03132;
    org$pandalanguage$pandac$Type* _f13134 = NULL;
    panda$core$UInt64 _f23136;
    panda$core$Int64 $tmp3138;
    org$pandalanguage$pandac$Position _f03140;
    org$pandalanguage$pandac$Type* _f13142 = NULL;
    panda$core$Int64 $tmp3144;
    org$pandalanguage$pandac$Position _f03146;
    org$pandalanguage$pandac$parser$Token$Kind _f13148;
    org$pandalanguage$pandac$IRNode* _f23150 = NULL;
    panda$core$Int64 $tmp3152;
    org$pandalanguage$pandac$Position _f03154;
    panda$core$String* _f13156 = NULL;
    org$pandalanguage$pandac$IRNode* _f23158 = NULL;
    org$pandalanguage$pandac$IRNode* _f33160 = NULL;
    panda$collections$ImmutableArray* _f43162 = NULL;
    panda$core$Int64 $tmp3164;
    org$pandalanguage$pandac$Position _f03166;
    org$pandalanguage$pandac$Type* _f13168 = NULL;
    panda$core$Real64 _f23170;
    panda$core$Int64 $tmp3172;
    org$pandalanguage$pandac$Position _f03174;
    org$pandalanguage$pandac$IRNode* _f13176 = NULL;
    panda$core$Int64 $tmp3178;
    org$pandalanguage$pandac$Position _f03180;
    org$pandalanguage$pandac$Type* _f13182 = NULL;
    panda$core$Int64 _f23184;
    panda$core$Int64 $tmp3186;
    org$pandalanguage$pandac$IRNode* _f03188 = NULL;
    panda$core$Int64 _f13190;
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
    org$pandalanguage$pandac$Variable* _f13294 = NULL;
    panda$core$Int64 $tmp3296;
    org$pandalanguage$pandac$Position _f03298;
    panda$collections$ImmutableArray* _f13300 = NULL;
    panda$collections$ImmutableArray* _f23302 = NULL;
    panda$core$Int64 $tmp3304;
    org$pandalanguage$pandac$Position _f03306;
    panda$core$String* _f13308 = NULL;
    org$pandalanguage$pandac$IRNode* _f23310 = NULL;
    panda$collections$ImmutableArray* _f33312 = NULL;
    int $tmp2918;
    {
        int $tmp2921;
        {
            $tmp2923 = self;
            $match$5_12922 = $tmp2923;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2923));
            panda$core$Int64$init$builtin_int64(&$tmp2924, 0);
            panda$core$Bit $tmp2925 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp2924);
            if ($tmp2925.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2927 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f02926 = *$tmp2927;
                org$pandalanguage$pandac$IRNode** $tmp2929 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 16));
                _f12928 = *$tmp2929;
                org$pandalanguage$pandac$IRNode** $tmp2931 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 24));
                _f22930 = *$tmp2931;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12928));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22930));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2932, 1);
            panda$core$Bit $tmp2933 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp2932);
            if ($tmp2933.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2935 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f02934 = *$tmp2935;
                org$pandalanguage$pandac$Type** $tmp2937 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12922->$data + 16));
                _f12936 = *$tmp2937;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12936));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2938, 2);
            panda$core$Bit $tmp2939 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp2938);
            if ($tmp2939.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2941 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f02940 = *$tmp2941;
                org$pandalanguage$pandac$Type** $tmp2943 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12922->$data + 16));
                _f12942 = *$tmp2943;
                org$pandalanguage$pandac$IRNode** $tmp2945 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 24));
                _f22944 = *$tmp2945;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2947 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12922->$data + 32));
                _f32946 = *$tmp2947;
                org$pandalanguage$pandac$IRNode** $tmp2949 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 40));
                _f42948 = *$tmp2949;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12942));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22944));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42948));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2950, 3);
            panda$core$Bit $tmp2951 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp2950);
            if ($tmp2951.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2953 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f02952 = *$tmp2953;
                org$pandalanguage$pandac$Type** $tmp2955 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12922->$data + 16));
                _f12954 = *$tmp2955;
                panda$core$Bit* $tmp2957 = ((panda$core$Bit*) ((char*) $match$5_12922->$data + 24));
                _f22956 = *$tmp2957;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12954));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2958, 4);
            panda$core$Bit $tmp2959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp2958);
            if ($tmp2959.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2961 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f02960 = *$tmp2961;
                panda$collections$ImmutableArray** $tmp2963 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12922->$data + 16));
                _f12962 = *$tmp2963;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12962));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2964, 5);
            panda$core$Bit $tmp2965 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp2964);
            if ($tmp2965.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2967 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f02966 = *$tmp2967;
                panda$collections$ImmutableArray** $tmp2969 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12922->$data + 16));
                _f12968 = *$tmp2969;
                panda$collections$ImmutableArray** $tmp2971 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12922->$data + 24));
                _f22970 = *$tmp2971;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12968));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22970));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2972, 6);
            panda$core$Bit $tmp2973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp2972);
            if ($tmp2973.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2975 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f02974 = *$tmp2975;
                panda$core$String** $tmp2977 = ((panda$core$String**) ((char*) $match$5_12922->$data + 16));
                _f12976 = *$tmp2977;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12976));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2978, 7);
            panda$core$Bit $tmp2979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp2978);
            if ($tmp2979.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2981 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f02980 = *$tmp2981;
                org$pandalanguage$pandac$Type** $tmp2983 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12922->$data + 16));
                _f12982 = *$tmp2983;
                org$pandalanguage$pandac$MethodRef** $tmp2985 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_12922->$data + 24));
                _f22984 = *$tmp2985;
                panda$collections$ImmutableArray** $tmp2987 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12922->$data + 32));
                _f32986 = *$tmp2987;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12982));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22984));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32986));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2988, 8);
            panda$core$Bit $tmp2989 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp2988);
            if ($tmp2989.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2991 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f02990 = *$tmp2991;
                org$pandalanguage$pandac$IRNode** $tmp2993 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 16));
                _f12992 = *$tmp2993;
                org$pandalanguage$pandac$Type** $tmp2995 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12922->$data + 24));
                _f22994 = *$tmp2995;
                panda$core$Bit* $tmp2997 = ((panda$core$Bit*) ((char*) $match$5_12922->$data + 32));
                _f32996 = *$tmp2997;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12992));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22994));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2998, 9);
            panda$core$Bit $tmp2999 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp2998);
            if ($tmp2999.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3001 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03000 = *$tmp3001;
                org$pandalanguage$pandac$ChoiceEntry** $tmp3003 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_12922->$data + 16));
                _f13002 = *$tmp3003;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13002));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3004, 10);
            panda$core$Bit $tmp3005 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3004);
            if ($tmp3005.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3007 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03006 = *$tmp3007;
                org$pandalanguage$pandac$IRNode** $tmp3009 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 16));
                _f13008 = *$tmp3009;
                org$pandalanguage$pandac$ChoiceEntry** $tmp3011 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_12922->$data + 24));
                _f23010 = *$tmp3011;
                panda$core$Int64* $tmp3013 = ((panda$core$Int64*) ((char*) $match$5_12922->$data + 32));
                _f33012 = *$tmp3013;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13008));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23010));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3014, 11);
            panda$core$Bit $tmp3015 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3014);
            if ($tmp3015.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3017 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03016 = *$tmp3017;
                org$pandalanguage$pandac$Type** $tmp3019 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12922->$data + 16));
                _f13018 = *$tmp3019;
                org$pandalanguage$pandac$IRNode** $tmp3021 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 24));
                _f23020 = *$tmp3021;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13018));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23020));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3022, 12);
            panda$core$Bit $tmp3023 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3022);
            if ($tmp3023.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3025 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03024 = *$tmp3025;
                org$pandalanguage$pandac$Type** $tmp3027 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12922->$data + 16));
                _f13026 = *$tmp3027;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13026));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3028, 13);
            panda$core$Bit $tmp3029 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3028);
            if ($tmp3029.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3031 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03030 = *$tmp3031;
                panda$core$String** $tmp3033 = ((panda$core$String**) ((char*) $match$5_12922->$data + 16));
                _f13032 = *$tmp3033;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13032));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3034, 14);
            panda$core$Bit $tmp3035 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3034);
            if ($tmp3035.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp3037 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 0));
                _f03036 = *$tmp3037;
                org$pandalanguage$pandac$IRNode** $tmp3039 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 8));
                _f13038 = *$tmp3039;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f03036));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13038));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3040, 15);
            panda$core$Bit $tmp3041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3040);
            if ($tmp3041.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3043 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03042 = *$tmp3043;
                panda$core$String** $tmp3045 = ((panda$core$String**) ((char*) $match$5_12922->$data + 16));
                _f13044 = *$tmp3045;
                panda$collections$ImmutableArray** $tmp3047 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12922->$data + 24));
                _f23046 = *$tmp3047;
                org$pandalanguage$pandac$IRNode** $tmp3049 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 32));
                _f33048 = *$tmp3049;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13044));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23046));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33048));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3050, 16);
            panda$core$Bit $tmp3051 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3050);
            if ($tmp3051.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp3053 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 0));
                _f03052 = *$tmp3053;
                panda$collections$ImmutableArray** $tmp3055 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12922->$data + 8));
                _f13054 = *$tmp3055;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f03052));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13054));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3056, 17);
            panda$core$Bit $tmp3057 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3056);
            if ($tmp3057.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp3059 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 0));
                _f03058 = *$tmp3059;
                org$pandalanguage$pandac$IRNode** $tmp3061 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 8));
                _f13060 = *$tmp3061;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f03058));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13060));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3062, 18);
            panda$core$Bit $tmp3063 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3062);
            if ($tmp3063.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3065 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03064 = *$tmp3065;
                org$pandalanguage$pandac$Type** $tmp3067 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12922->$data + 16));
                _f13066 = *$tmp3067;
                org$pandalanguage$pandac$IRNode** $tmp3069 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 24));
                _f23068 = *$tmp3069;
                org$pandalanguage$pandac$FieldDecl** $tmp3071 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$5_12922->$data + 32));
                _f33070 = *$tmp3071;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13066));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23068));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33070));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3072, 19);
            panda$core$Bit $tmp3073 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3072);
            if ($tmp3073.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3075 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03074 = *$tmp3075;
                org$pandalanguage$pandac$IRNode** $tmp3077 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 16));
                _f13076 = *$tmp3077;
                panda$collections$ImmutableArray** $tmp3079 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12922->$data + 24));
                _f23078 = *$tmp3079;
                org$pandalanguage$pandac$IRNode** $tmp3081 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 32));
                _f33080 = *$tmp3081;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13076));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23078));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33080));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3082, 20);
            panda$core$Bit $tmp3083 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3082);
            if ($tmp3083.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3085 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03084 = *$tmp3085;
                org$pandalanguage$pandac$Type** $tmp3087 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12922->$data + 16));
                _f13086 = *$tmp3087;
                panda$core$UInt64* $tmp3089 = ((panda$core$UInt64*) ((char*) $match$5_12922->$data + 24));
                _f23088 = *$tmp3089;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13086));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3090, 21);
            panda$core$Bit $tmp3091 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3090);
            if ($tmp3091.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3093 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03092 = *$tmp3093;
                org$pandalanguage$pandac$IRNode** $tmp3095 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 16));
                _f13094 = *$tmp3095;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13094));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3096, 22);
            panda$core$Bit $tmp3097 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3096);
            if ($tmp3097.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3099 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03098 = *$tmp3099;
                org$pandalanguage$pandac$IRNode** $tmp3101 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 16));
                _f13100 = *$tmp3101;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13100));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3102, 23);
            panda$core$Bit $tmp3103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3102);
            if ($tmp3103.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3105 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03104 = *$tmp3105;
                panda$core$String** $tmp3107 = ((panda$core$String**) ((char*) $match$5_12922->$data + 16));
                _f13106 = *$tmp3107;
                panda$collections$ImmutableArray** $tmp3109 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12922->$data + 24));
                _f23108 = *$tmp3109;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13106));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23108));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3110, 24);
            panda$core$Bit $tmp3111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3110);
            if ($tmp3111.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3113 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03112 = *$tmp3113;
                org$pandalanguage$pandac$IRNode** $tmp3115 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 16));
                _f13114 = *$tmp3115;
                panda$collections$ImmutableArray** $tmp3117 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12922->$data + 24));
                _f23116 = *$tmp3117;
                panda$collections$ImmutableArray** $tmp3119 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12922->$data + 32));
                _f33118 = *$tmp3119;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13114));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23116));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33118));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3120, 25);
            panda$core$Bit $tmp3121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3120);
            if ($tmp3121.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3123 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03122 = *$tmp3123;
                org$pandalanguage$pandac$Type** $tmp3125 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12922->$data + 16));
                _f13124 = *$tmp3125;
                org$pandalanguage$pandac$IRNode** $tmp3127 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 24));
                _f23126 = *$tmp3127;
                org$pandalanguage$pandac$MethodRef** $tmp3129 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_12922->$data + 32));
                _f33128 = *$tmp3129;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13124));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23126));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33128));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3130, 26);
            panda$core$Bit $tmp3131 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3130);
            if ($tmp3131.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3133 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03132 = *$tmp3133;
                org$pandalanguage$pandac$Type** $tmp3135 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12922->$data + 16));
                _f13134 = *$tmp3135;
                panda$core$UInt64* $tmp3137 = ((panda$core$UInt64*) ((char*) $match$5_12922->$data + 24));
                _f23136 = *$tmp3137;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13134));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3138, 27);
            panda$core$Bit $tmp3139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3138);
            if ($tmp3139.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3141 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03140 = *$tmp3141;
                org$pandalanguage$pandac$Type** $tmp3143 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12922->$data + 16));
                _f13142 = *$tmp3143;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13142));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3144, 28);
            panda$core$Bit $tmp3145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3144);
            if ($tmp3145.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3147 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03146 = *$tmp3147;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp3149 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12922->$data + 16));
                _f13148 = *$tmp3149;
                org$pandalanguage$pandac$IRNode** $tmp3151 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 24));
                _f23150 = *$tmp3151;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23150));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3152, 29);
            panda$core$Bit $tmp3153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3152);
            if ($tmp3153.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3155 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03154 = *$tmp3155;
                panda$core$String** $tmp3157 = ((panda$core$String**) ((char*) $match$5_12922->$data + 16));
                _f13156 = *$tmp3157;
                org$pandalanguage$pandac$IRNode** $tmp3159 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 24));
                _f23158 = *$tmp3159;
                org$pandalanguage$pandac$IRNode** $tmp3161 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 32));
                _f33160 = *$tmp3161;
                panda$collections$ImmutableArray** $tmp3163 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12922->$data + 40));
                _f43162 = *$tmp3163;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13156));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23158));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33160));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f43162));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3164, 30);
            panda$core$Bit $tmp3165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3164);
            if ($tmp3165.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3167 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03166 = *$tmp3167;
                org$pandalanguage$pandac$Type** $tmp3169 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12922->$data + 16));
                _f13168 = *$tmp3169;
                panda$core$Real64* $tmp3171 = ((panda$core$Real64*) ((char*) $match$5_12922->$data + 24));
                _f23170 = *$tmp3171;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13168));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3172, 31);
            panda$core$Bit $tmp3173 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3172);
            if ($tmp3173.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3175 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03174 = *$tmp3175;
                org$pandalanguage$pandac$IRNode** $tmp3177 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 16));
                _f13176 = *$tmp3177;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13176));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3178, 32);
            panda$core$Bit $tmp3179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3178);
            if ($tmp3179.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3181 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03180 = *$tmp3181;
                org$pandalanguage$pandac$Type** $tmp3183 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12922->$data + 16));
                _f13182 = *$tmp3183;
                panda$core$Int64* $tmp3185 = ((panda$core$Int64*) ((char*) $match$5_12922->$data + 24));
                _f23184 = *$tmp3185;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13182));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3186, 33);
            panda$core$Bit $tmp3187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3186);
            if ($tmp3187.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp3189 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 0));
                _f03188 = *$tmp3189;
                panda$core$Int64* $tmp3191 = ((panda$core$Int64*) ((char*) $match$5_12922->$data + 8));
                _f13190 = *$tmp3191;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f03188));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3192, 34);
            panda$core$Bit $tmp3193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3192);
            if ($tmp3193.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3195 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03194 = *$tmp3195;
                org$pandalanguage$pandac$Type** $tmp3197 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12922->$data + 16));
                _f13196 = *$tmp3197;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13196));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3198, 35);
            panda$core$Bit $tmp3199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3198);
            if ($tmp3199.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3201 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03200 = *$tmp3201;
                panda$core$String** $tmp3203 = ((panda$core$String**) ((char*) $match$5_12922->$data + 16));
                _f13202 = *$tmp3203;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13202));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3204, 36);
            panda$core$Bit $tmp3205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3204);
            if ($tmp3205.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3207 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03206 = *$tmp3207;
                org$pandalanguage$pandac$Type** $tmp3209 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12922->$data + 16));
                _f13208 = *$tmp3209;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13208));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3210, 37);
            panda$core$Bit $tmp3211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3210);
            if ($tmp3211.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3213 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03212 = *$tmp3213;
                org$pandalanguage$pandac$IRNode** $tmp3215 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 16));
                _f13214 = *$tmp3215;
                org$pandalanguage$pandac$IRNode** $tmp3217 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 24));
                _f23216 = *$tmp3217;
                org$pandalanguage$pandac$IRNode** $tmp3219 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 32));
                _f33218 = *$tmp3219;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13214));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23216));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33218));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3220, 38);
            panda$core$Bit $tmp3221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3220);
            if ($tmp3221.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3223 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03222 = *$tmp3223;
                org$pandalanguage$pandac$Type** $tmp3225 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12922->$data + 16));
                _f13224 = *$tmp3225;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13224));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3226, 39);
            panda$core$Bit $tmp3227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3226);
            if ($tmp3227.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3229 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03228 = *$tmp3229;
                panda$core$String** $tmp3231 = ((panda$core$String**) ((char*) $match$5_12922->$data + 16));
                _f13230 = *$tmp3231;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13230));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3232, 40);
            panda$core$Bit $tmp3233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3232);
            if ($tmp3233.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3235 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03234 = *$tmp3235;
                org$pandalanguage$pandac$Type** $tmp3237 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12922->$data + 16));
                _f13236 = *$tmp3237;
                org$pandalanguage$pandac$IRNode** $tmp3239 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 24));
                _f23238 = *$tmp3239;
                panda$collections$ImmutableArray** $tmp3241 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12922->$data + 32));
                _f33240 = *$tmp3241;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13236));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23238));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33240));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3242, 41);
            panda$core$Bit $tmp3243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3242);
            if ($tmp3243.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3245 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03244 = *$tmp3245;
                panda$collections$ImmutableArray** $tmp3247 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12922->$data + 16));
                _f13246 = *$tmp3247;
                org$pandalanguage$pandac$ASTNode** $tmp3249 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12922->$data + 24));
                _f23248 = *$tmp3249;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13246));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23248));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3250, 42);
            panda$core$Bit $tmp3251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3250);
            if ($tmp3251.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3253 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03252 = *$tmp3253;
                org$pandalanguage$pandac$Type** $tmp3255 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12922->$data + 16));
                _f13254 = *$tmp3255;
                org$pandalanguage$pandac$IRNode** $tmp3257 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 24));
                _f23256 = *$tmp3257;
                panda$collections$ImmutableArray** $tmp3259 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12922->$data + 32));
                _f33258 = *$tmp3259;
                panda$collections$ImmutableArray** $tmp3261 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12922->$data + 40));
                _f43260 = *$tmp3261;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13254));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23256));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33258));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f43260));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3262, 43);
            panda$core$Bit $tmp3263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3262);
            if ($tmp3263.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3265 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03264 = *$tmp3265;
                org$pandalanguage$pandac$IRNode** $tmp3267 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 16));
                _f13266 = *$tmp3267;
                panda$collections$ImmutableArray** $tmp3269 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12922->$data + 24));
                _f23268 = *$tmp3269;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13266));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23268));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3270, 44);
            panda$core$Bit $tmp3271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3270);
            if ($tmp3271.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3273 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03272 = *$tmp3273;
                org$pandalanguage$pandac$IRNode** $tmp3275 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 16));
                _f13274 = *$tmp3275;
                org$pandalanguage$pandac$IRNode** $tmp3277 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 24));
                _f23276 = *$tmp3277;
                panda$core$Bit* $tmp3279 = ((panda$core$Bit*) ((char*) $match$5_12922->$data + 32));
                _f33278 = *$tmp3279;
                org$pandalanguage$pandac$IRNode** $tmp3281 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 33));
                _f43280 = *$tmp3281;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13274));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23276));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f43280));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3282, 45);
            panda$core$Bit $tmp3283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3282);
            if ($tmp3283.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3285 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03284 = *$tmp3285;
                org$pandalanguage$pandac$Variable$Kind* $tmp3287 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_12922->$data + 16));
                _f13286 = *$tmp3287;
                panda$collections$ImmutableArray** $tmp3289 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12922->$data + 24));
                _f23288 = *$tmp3289;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23288));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3290, 46);
            panda$core$Bit $tmp3291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3290);
            if ($tmp3291.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3293 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03292 = *$tmp3293;
                org$pandalanguage$pandac$Variable** $tmp3295 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$5_12922->$data + 16));
                _f13294 = *$tmp3295;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13294));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3296, 47);
            panda$core$Bit $tmp3297 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3296);
            if ($tmp3297.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3299 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03298 = *$tmp3299;
                panda$collections$ImmutableArray** $tmp3301 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12922->$data + 16));
                _f13300 = *$tmp3301;
                panda$collections$ImmutableArray** $tmp3303 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12922->$data + 24));
                _f23302 = *$tmp3303;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13300));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23302));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp3304, 48);
            panda$core$Bit $tmp3305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12922->$rawValue, $tmp3304);
            if ($tmp3305.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3307 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12922->$data + 0));
                _f03306 = *$tmp3307;
                panda$core$String** $tmp3309 = ((panda$core$String**) ((char*) $match$5_12922->$data + 16));
                _f13308 = *$tmp3309;
                org$pandalanguage$pandac$IRNode** $tmp3311 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12922->$data + 24));
                _f23310 = *$tmp3311;
                panda$collections$ImmutableArray** $tmp3313 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12922->$data + 32));
                _f33312 = *$tmp3313;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13308));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23310));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33312));
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
        }
        $tmp2921 = -1;
        goto $l2919;
        $l2919:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2923));
        switch ($tmp2921) {
            case -1: goto $l3314;
        }
        $l3314:;
    }
    $tmp2918 = -1;
    goto $l2916;
    $l2916:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2918) {
        case -1: goto $l3315;
    }
    $l3315:;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3317;
    org$pandalanguage$pandac$IRNode* $tmp3320;
    org$pandalanguage$pandac$IRNode* $tmp3321;
    org$pandalanguage$pandac$IRNode* $tmp3324;
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
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1) {
    org$pandalanguage$pandac$Type* $tmp3326;
    org$pandalanguage$pandac$Type* $tmp3329;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3325 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3325 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3327 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3326 = *$tmp3327;
        org$pandalanguage$pandac$Type** $tmp3328 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3329 = p_f1;
        *$tmp3328 = $tmp3329;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3329));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3326));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$parser$Token$Kind p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$Type* $tmp3331;
    org$pandalanguage$pandac$Type* $tmp3334;
    org$pandalanguage$pandac$IRNode* $tmp3335;
    org$pandalanguage$pandac$IRNode* $tmp3338;
    org$pandalanguage$pandac$IRNode* $tmp3340;
    org$pandalanguage$pandac$IRNode* $tmp3343;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3330 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3330 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3332 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3331 = *$tmp3332;
        org$pandalanguage$pandac$Type** $tmp3333 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
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
    org$pandalanguage$pandac$parser$Token$Kind* $tmp3339 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 32));
    *$tmp3339 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp3341 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        $tmp3340 = *$tmp3341;
        org$pandalanguage$pandac$IRNode** $tmp3342 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        $tmp3343 = p_f4;
        *$tmp3342 = $tmp3343;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3343));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3340));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Bit p_f2) {
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
    panda$core$Bit* $tmp3349 = ((panda$core$Bit*) ((char*) self->$data + 24));
    *$tmp3349 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    panda$collections$ImmutableArray* $tmp3351;
    panda$collections$ImmutableArray* $tmp3354;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3350 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3350 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp3352 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3351 = *$tmp3352;
        panda$collections$ImmutableArray** $tmp3353 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3354 = p_f1;
        *$tmp3353 = $tmp3354;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3354));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3351));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp3356;
    panda$collections$ImmutableArray* $tmp3359;
    panda$collections$ImmutableArray* $tmp3360;
    panda$collections$ImmutableArray* $tmp3363;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3355 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3355 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp3357 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3356 = *$tmp3357;
        panda$collections$ImmutableArray** $tmp3358 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3359 = p_f1;
        *$tmp3358 = $tmp3359;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3359));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3356));
    }
    {
        panda$collections$ImmutableArray** $tmp3361 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3360 = *$tmp3361;
        panda$collections$ImmutableArray** $tmp3362 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3363 = p_f2;
        *$tmp3362 = $tmp3363;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3363));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3360));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp3365;
    panda$core$String* $tmp3368;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3364 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3364 = p_f0;
    {
        panda$core$String** $tmp3366 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3365 = *$tmp3366;
        panda$core$String** $tmp3367 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3368 = p_f1;
        *$tmp3367 = $tmp3368;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3368));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3365));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$MethodRef* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3370;
    org$pandalanguage$pandac$Type* $tmp3373;
    org$pandalanguage$pandac$MethodRef* $tmp3374;
    org$pandalanguage$pandac$MethodRef* $tmp3377;
    panda$collections$ImmutableArray* $tmp3378;
    panda$collections$ImmutableArray* $tmp3381;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3369 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3369 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3371 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3370 = *$tmp3371;
        org$pandalanguage$pandac$Type** $tmp3372 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3373 = p_f1;
        *$tmp3372 = $tmp3373;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3373));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3370));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp3375 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp3374 = *$tmp3375;
        org$pandalanguage$pandac$MethodRef** $tmp3376 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp3377 = p_f2;
        *$tmp3376 = $tmp3377;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3377));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3374));
    }
    {
        panda$collections$ImmutableArray** $tmp3379 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3378 = *$tmp3379;
        panda$collections$ImmutableArray** $tmp3380 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3381 = p_f3;
        *$tmp3380 = $tmp3381;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3381));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3378));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$Type* p_f2, panda$core$Bit p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3383;
    org$pandalanguage$pandac$IRNode* $tmp3386;
    org$pandalanguage$pandac$Type* $tmp3387;
    org$pandalanguage$pandac$Type* $tmp3390;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3382 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3382 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3384 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3383 = *$tmp3384;
        org$pandalanguage$pandac$IRNode** $tmp3385 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3386 = p_f1;
        *$tmp3385 = $tmp3386;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3386));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3383));
    }
    {
        org$pandalanguage$pandac$Type** $tmp3388 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp3387 = *$tmp3388;
        org$pandalanguage$pandac$Type** $tmp3389 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp3390 = p_f2;
        *$tmp3389 = $tmp3390;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3390));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3387));
    }
    panda$core$Bit* $tmp3391 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp3391 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ChoiceEntry(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ChoiceEntry* p_f1) {
    org$pandalanguage$pandac$ChoiceEntry* $tmp3393;
    org$pandalanguage$pandac$ChoiceEntry* $tmp3396;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3392 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3392 = p_f0;
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp3394 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        $tmp3393 = *$tmp3394;
        org$pandalanguage$pandac$ChoiceEntry** $tmp3395 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        $tmp3396 = p_f1;
        *$tmp3395 = $tmp3396;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3396));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3393));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3398;
    org$pandalanguage$pandac$IRNode* $tmp3401;
    org$pandalanguage$pandac$ChoiceEntry* $tmp3402;
    org$pandalanguage$pandac$ChoiceEntry* $tmp3405;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3397 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3397 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3399 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3398 = *$tmp3399;
        org$pandalanguage$pandac$IRNode** $tmp3400 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3401 = p_f1;
        *$tmp3400 = $tmp3401;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3401));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3398));
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp3403 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp3402 = *$tmp3403;
        org$pandalanguage$pandac$ChoiceEntry** $tmp3404 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp3405 = p_f2;
        *$tmp3404 = $tmp3405;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3405));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3402));
    }
    panda$core$Int64* $tmp3406 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp3406 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$Type* $tmp3408;
    org$pandalanguage$pandac$Type* $tmp3411;
    org$pandalanguage$pandac$IRNode* $tmp3412;
    org$pandalanguage$pandac$IRNode* $tmp3415;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3407 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3407 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3409 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3408 = *$tmp3409;
        org$pandalanguage$pandac$Type** $tmp3410 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3411 = p_f1;
        *$tmp3410 = $tmp3411;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3411));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3408));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3413 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3412 = *$tmp3413;
        org$pandalanguage$pandac$IRNode** $tmp3414 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3415 = p_f2;
        *$tmp3414 = $tmp3415;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3415));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3412));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3416;
    org$pandalanguage$pandac$IRNode* $tmp3419;
    org$pandalanguage$pandac$IRNode* $tmp3420;
    org$pandalanguage$pandac$IRNode* $tmp3423;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3417 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3416 = *$tmp3417;
        org$pandalanguage$pandac$IRNode** $tmp3418 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3419 = p_f0;
        *$tmp3418 = $tmp3419;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3419));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3416));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3421 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3420 = *$tmp3421;
        org$pandalanguage$pandac$IRNode** $tmp3422 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3423 = p_f1;
        *$tmp3422 = $tmp3423;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3423));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3420));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    panda$core$String* $tmp3425;
    panda$core$String* $tmp3428;
    panda$collections$ImmutableArray* $tmp3429;
    panda$collections$ImmutableArray* $tmp3432;
    org$pandalanguage$pandac$IRNode* $tmp3433;
    org$pandalanguage$pandac$IRNode* $tmp3436;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3424 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3424 = p_f0;
    {
        panda$core$String** $tmp3426 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3425 = *$tmp3426;
        panda$core$String** $tmp3427 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3428 = p_f1;
        *$tmp3427 = $tmp3428;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3428));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3425));
    }
    {
        panda$collections$ImmutableArray** $tmp3430 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3429 = *$tmp3430;
        panda$collections$ImmutableArray** $tmp3431 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3432 = p_f2;
        *$tmp3431 = $tmp3432;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3432));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3429));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3434 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3433 = *$tmp3434;
        org$pandalanguage$pandac$IRNode** $tmp3435 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3436 = p_f3;
        *$tmp3435 = $tmp3436;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3436));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3433));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$collections$ImmutableArray* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3437;
    org$pandalanguage$pandac$IRNode* $tmp3440;
    panda$collections$ImmutableArray* $tmp3441;
    panda$collections$ImmutableArray* $tmp3444;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3438 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3437 = *$tmp3438;
        org$pandalanguage$pandac$IRNode** $tmp3439 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3440 = p_f0;
        *$tmp3439 = $tmp3440;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3440));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3437));
    }
    {
        panda$collections$ImmutableArray** $tmp3442 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 8));
        $tmp3441 = *$tmp3442;
        panda$collections$ImmutableArray** $tmp3443 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 8));
        $tmp3444 = p_f1;
        *$tmp3443 = $tmp3444;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3444));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3441));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3445;
    org$pandalanguage$pandac$IRNode* $tmp3448;
    org$pandalanguage$pandac$IRNode* $tmp3449;
    org$pandalanguage$pandac$IRNode* $tmp3452;
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
        org$pandalanguage$pandac$IRNode** $tmp3450 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3449 = *$tmp3450;
        org$pandalanguage$pandac$IRNode** $tmp3451 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3452 = p_f1;
        *$tmp3451 = $tmp3452;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3452));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3449));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$FieldDecl* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3454;
    org$pandalanguage$pandac$Type* $tmp3457;
    org$pandalanguage$pandac$IRNode* $tmp3458;
    org$pandalanguage$pandac$IRNode* $tmp3461;
    org$pandalanguage$pandac$FieldDecl* $tmp3462;
    org$pandalanguage$pandac$FieldDecl* $tmp3465;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3453 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3453 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3455 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3454 = *$tmp3455;
        org$pandalanguage$pandac$Type** $tmp3456 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3457 = p_f1;
        *$tmp3456 = $tmp3457;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3457));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3454));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3459 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3458 = *$tmp3459;
        org$pandalanguage$pandac$IRNode** $tmp3460 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3461 = p_f2;
        *$tmp3460 = $tmp3461;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3461));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3458));
    }
    {
        org$pandalanguage$pandac$FieldDecl** $tmp3463 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp3462 = *$tmp3463;
        org$pandalanguage$pandac$FieldDecl** $tmp3464 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp3465 = p_f3;
        *$tmp3464 = $tmp3465;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3465));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3462));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3467;
    org$pandalanguage$pandac$IRNode* $tmp3470;
    panda$collections$ImmutableArray* $tmp3471;
    panda$collections$ImmutableArray* $tmp3474;
    org$pandalanguage$pandac$IRNode* $tmp3475;
    org$pandalanguage$pandac$IRNode* $tmp3478;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3466 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3466 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3468 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3467 = *$tmp3468;
        org$pandalanguage$pandac$IRNode** $tmp3469 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3470 = p_f1;
        *$tmp3469 = $tmp3470;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3470));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3467));
    }
    {
        panda$collections$ImmutableArray** $tmp3472 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3471 = *$tmp3472;
        panda$collections$ImmutableArray** $tmp3473 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3474 = p_f2;
        *$tmp3473 = $tmp3474;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3474));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3471));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3476 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3475 = *$tmp3476;
        org$pandalanguage$pandac$IRNode** $tmp3477 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3478 = p_f3;
        *$tmp3477 = $tmp3478;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3478));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3475));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$UInt64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3480;
    org$pandalanguage$pandac$Type* $tmp3483;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3479 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3479 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3481 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3480 = *$tmp3481;
        org$pandalanguage$pandac$Type** $tmp3482 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3483 = p_f1;
        *$tmp3482 = $tmp3483;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3483));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3480));
    }
    panda$core$UInt64* $tmp3484 = ((panda$core$UInt64*) ((char*) self->$data + 24));
    *$tmp3484 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3486;
    org$pandalanguage$pandac$IRNode* $tmp3489;
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
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp3491;
    panda$core$String* $tmp3494;
    panda$collections$ImmutableArray* $tmp3495;
    panda$collections$ImmutableArray* $tmp3498;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3490 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3490 = p_f0;
    {
        panda$core$String** $tmp3492 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3491 = *$tmp3492;
        panda$core$String** $tmp3493 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3494 = p_f1;
        *$tmp3493 = $tmp3494;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3494));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3491));
    }
    {
        panda$collections$ImmutableArray** $tmp3496 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3495 = *$tmp3496;
        panda$collections$ImmutableArray** $tmp3497 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3498 = p_f2;
        *$tmp3497 = $tmp3498;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3498));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3495));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3500;
    org$pandalanguage$pandac$IRNode* $tmp3503;
    panda$collections$ImmutableArray* $tmp3504;
    panda$collections$ImmutableArray* $tmp3507;
    panda$collections$ImmutableArray* $tmp3508;
    panda$collections$ImmutableArray* $tmp3511;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3499 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3499 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3501 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3500 = *$tmp3501;
        org$pandalanguage$pandac$IRNode** $tmp3502 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3503 = p_f1;
        *$tmp3502 = $tmp3503;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3503));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3500));
    }
    {
        panda$collections$ImmutableArray** $tmp3505 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3504 = *$tmp3505;
        panda$collections$ImmutableArray** $tmp3506 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3507 = p_f2;
        *$tmp3506 = $tmp3507;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3507));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3504));
    }
    {
        panda$collections$ImmutableArray** $tmp3509 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3508 = *$tmp3509;
        panda$collections$ImmutableArray** $tmp3510 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3511 = p_f3;
        *$tmp3510 = $tmp3511;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3511));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3508));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$MethodRef* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3513;
    org$pandalanguage$pandac$Type* $tmp3516;
    org$pandalanguage$pandac$IRNode* $tmp3517;
    org$pandalanguage$pandac$IRNode* $tmp3520;
    org$pandalanguage$pandac$MethodRef* $tmp3521;
    org$pandalanguage$pandac$MethodRef* $tmp3524;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3512 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3512 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3514 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3513 = *$tmp3514;
        org$pandalanguage$pandac$Type** $tmp3515 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3516 = p_f1;
        *$tmp3515 = $tmp3516;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3516));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3513));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3518 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3517 = *$tmp3518;
        org$pandalanguage$pandac$IRNode** $tmp3519 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3520 = p_f2;
        *$tmp3519 = $tmp3520;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3520));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3517));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp3522 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 32));
        $tmp3521 = *$tmp3522;
        org$pandalanguage$pandac$MethodRef** $tmp3523 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 32));
        $tmp3524 = p_f3;
        *$tmp3523 = $tmp3524;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3524));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3521));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3527;
    org$pandalanguage$pandac$IRNode* $tmp3530;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3525 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3525 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp3526 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp3526 = p_f1;
    {
        org$pandalanguage$pandac$IRNode** $tmp3528 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3527 = *$tmp3528;
        org$pandalanguage$pandac$IRNode** $tmp3529 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3530 = p_f2;
        *$tmp3529 = $tmp3530;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3530));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3527));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    panda$core$String* $tmp3532;
    panda$core$String* $tmp3535;
    org$pandalanguage$pandac$IRNode* $tmp3536;
    org$pandalanguage$pandac$IRNode* $tmp3539;
    org$pandalanguage$pandac$IRNode* $tmp3540;
    org$pandalanguage$pandac$IRNode* $tmp3543;
    panda$collections$ImmutableArray* $tmp3544;
    panda$collections$ImmutableArray* $tmp3547;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3531 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3531 = p_f0;
    {
        panda$core$String** $tmp3533 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3532 = *$tmp3533;
        panda$core$String** $tmp3534 = ((panda$core$String**) ((char*) self->$data + 16));
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
        org$pandalanguage$pandac$IRNode** $tmp3541 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3540 = *$tmp3541;
        org$pandalanguage$pandac$IRNode** $tmp3542 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3543 = p_f3;
        *$tmp3542 = $tmp3543;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3543));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3540));
    }
    {
        panda$collections$ImmutableArray** $tmp3545 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3544 = *$tmp3545;
        panda$collections$ImmutableArray** $tmp3546 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3547 = p_f4;
        *$tmp3546 = $tmp3547;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3547));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3544));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Real64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3549;
    org$pandalanguage$pandac$Type* $tmp3552;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3548 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3548 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3550 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3549 = *$tmp3550;
        org$pandalanguage$pandac$Type** $tmp3551 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3552 = p_f1;
        *$tmp3551 = $tmp3552;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3552));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3549));
    }
    panda$core$Real64* $tmp3553 = ((panda$core$Real64*) ((char*) self->$data + 24));
    *$tmp3553 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3555;
    org$pandalanguage$pandac$IRNode* $tmp3558;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3554 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3554 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3556 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3555 = *$tmp3556;
        org$pandalanguage$pandac$IRNode** $tmp3557 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3558 = p_f1;
        *$tmp3557 = $tmp3558;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3558));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3555));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Int64 p_f2) {
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
    panda$core$Int64* $tmp3564 = ((panda$core$Int64*) ((char*) self->$data + 24));
    *$tmp3564 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$core$Int64 p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3565;
    org$pandalanguage$pandac$IRNode* $tmp3568;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3566 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3565 = *$tmp3566;
        org$pandalanguage$pandac$IRNode** $tmp3567 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3568 = p_f0;
        *$tmp3567 = $tmp3568;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3568));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3565));
    }
    panda$core$Int64* $tmp3569 = ((panda$core$Int64*) ((char*) self->$data + 8));
    *$tmp3569 = p_f1;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp3571;
    panda$core$String* $tmp3574;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3570 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3570 = p_f0;
    {
        panda$core$String** $tmp3572 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3571 = *$tmp3572;
        panda$core$String** $tmp3573 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3574 = p_f1;
        *$tmp3573 = $tmp3574;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3574));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3571));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3576;
    org$pandalanguage$pandac$IRNode* $tmp3579;
    org$pandalanguage$pandac$IRNode* $tmp3580;
    org$pandalanguage$pandac$IRNode* $tmp3583;
    org$pandalanguage$pandac$IRNode* $tmp3584;
    org$pandalanguage$pandac$IRNode* $tmp3587;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3575 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3575 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3577 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3576 = *$tmp3577;
        org$pandalanguage$pandac$IRNode** $tmp3578 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3579 = p_f1;
        *$tmp3578 = $tmp3579;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3579));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3576));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3581 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3580 = *$tmp3581;
        org$pandalanguage$pandac$IRNode** $tmp3582 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3583 = p_f2;
        *$tmp3582 = $tmp3583;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3583));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3580));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3585 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3584 = *$tmp3585;
        org$pandalanguage$pandac$IRNode** $tmp3586 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3587 = p_f3;
        *$tmp3586 = $tmp3587;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3587));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3584));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3589;
    org$pandalanguage$pandac$Type* $tmp3592;
    org$pandalanguage$pandac$IRNode* $tmp3593;
    org$pandalanguage$pandac$IRNode* $tmp3596;
    panda$collections$ImmutableArray* $tmp3597;
    panda$collections$ImmutableArray* $tmp3600;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3588 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3588 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3590 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3589 = *$tmp3590;
        org$pandalanguage$pandac$Type** $tmp3591 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3592 = p_f1;
        *$tmp3591 = $tmp3592;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3592));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3589));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3594 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3593 = *$tmp3594;
        org$pandalanguage$pandac$IRNode** $tmp3595 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3596 = p_f2;
        *$tmp3595 = $tmp3596;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3596));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3593));
    }
    {
        panda$collections$ImmutableArray** $tmp3598 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3597 = *$tmp3598;
        panda$collections$ImmutableArray** $tmp3599 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3600 = p_f3;
        *$tmp3599 = $tmp3600;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3600));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3597));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTpanda$core$String$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$collections$ImmutableArray* $tmp3602;
    panda$collections$ImmutableArray* $tmp3605;
    org$pandalanguage$pandac$ASTNode* $tmp3606;
    org$pandalanguage$pandac$ASTNode* $tmp3609;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3601 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3601 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp3603 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3602 = *$tmp3603;
        panda$collections$ImmutableArray** $tmp3604 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp3605 = p_f1;
        *$tmp3604 = $tmp3605;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3605));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3602));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp3607 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp3606 = *$tmp3607;
        org$pandalanguage$pandac$ASTNode** $tmp3608 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp3609 = p_f2;
        *$tmp3608 = $tmp3609;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3609));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3606));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3, panda$collections$ImmutableArray* p_f4) {
    org$pandalanguage$pandac$Type* $tmp3611;
    org$pandalanguage$pandac$Type* $tmp3614;
    org$pandalanguage$pandac$IRNode* $tmp3615;
    org$pandalanguage$pandac$IRNode* $tmp3618;
    panda$collections$ImmutableArray* $tmp3619;
    panda$collections$ImmutableArray* $tmp3622;
    panda$collections$ImmutableArray* $tmp3623;
    panda$collections$ImmutableArray* $tmp3626;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3610 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3610 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3612 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3611 = *$tmp3612;
        org$pandalanguage$pandac$Type** $tmp3613 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3614 = p_f1;
        *$tmp3613 = $tmp3614;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3614));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3611));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3616 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3615 = *$tmp3616;
        org$pandalanguage$pandac$IRNode** $tmp3617 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3618 = p_f2;
        *$tmp3617 = $tmp3618;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3618));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3615));
    }
    {
        panda$collections$ImmutableArray** $tmp3620 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3619 = *$tmp3620;
        panda$collections$ImmutableArray** $tmp3621 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3622 = p_f3;
        *$tmp3621 = $tmp3622;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3622));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3619));
    }
    {
        panda$collections$ImmutableArray** $tmp3624 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3623 = *$tmp3624;
        panda$collections$ImmutableArray** $tmp3625 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3626 = p_f4;
        *$tmp3625 = $tmp3626;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3626));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3623));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3628;
    org$pandalanguage$pandac$IRNode* $tmp3631;
    panda$collections$ImmutableArray* $tmp3632;
    panda$collections$ImmutableArray* $tmp3635;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3627 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3627 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3629 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3628 = *$tmp3629;
        org$pandalanguage$pandac$IRNode** $tmp3630 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3631 = p_f1;
        *$tmp3630 = $tmp3631;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3631));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3628));
    }
    {
        panda$collections$ImmutableArray** $tmp3633 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3632 = *$tmp3633;
        panda$collections$ImmutableArray** $tmp3634 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3635 = p_f2;
        *$tmp3634 = $tmp3635;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3635));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3632));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$core$Bit$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$IRNode* $tmp3637;
    org$pandalanguage$pandac$IRNode* $tmp3640;
    org$pandalanguage$pandac$IRNode* $tmp3641;
    org$pandalanguage$pandac$IRNode* $tmp3644;
    org$pandalanguage$pandac$IRNode* $tmp3646;
    org$pandalanguage$pandac$IRNode* $tmp3649;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3636 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3636 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3638 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3637 = *$tmp3638;
        org$pandalanguage$pandac$IRNode** $tmp3639 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3640 = p_f1;
        *$tmp3639 = $tmp3640;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3640));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3637));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3642 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3641 = *$tmp3642;
        org$pandalanguage$pandac$IRNode** $tmp3643 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3644 = p_f2;
        *$tmp3643 = $tmp3644;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3644));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3641));
    }
    panda$core$Bit* $tmp3645 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp3645 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp3647 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp3646 = *$tmp3647;
        org$pandalanguage$pandac$IRNode** $tmp3648 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp3649 = p_f4;
        *$tmp3648 = $tmp3649;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3649));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3646));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp3652;
    panda$collections$ImmutableArray* $tmp3655;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3650 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3650 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp3651 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp3651 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp3653 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3652 = *$tmp3653;
        panda$collections$ImmutableArray** $tmp3654 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3655 = p_f2;
        *$tmp3654 = $tmp3655;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3655));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3652));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable* p_f1) {
    org$pandalanguage$pandac$Variable* $tmp3657;
    org$pandalanguage$pandac$Variable* $tmp3660;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3656 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3656 = p_f0;
    {
        org$pandalanguage$pandac$Variable** $tmp3658 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp3657 = *$tmp3658;
        org$pandalanguage$pandac$Variable** $tmp3659 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp3660 = p_f1;
        *$tmp3659 = $tmp3660;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3660));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3657));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    panda$core$String* $tmp3662;
    panda$core$String* $tmp3665;
    org$pandalanguage$pandac$IRNode* $tmp3666;
    org$pandalanguage$pandac$IRNode* $tmp3669;
    panda$collections$ImmutableArray* $tmp3670;
    panda$collections$ImmutableArray* $tmp3673;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3661 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3661 = p_f0;
    {
        panda$core$String** $tmp3663 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3662 = *$tmp3663;
        panda$core$String** $tmp3664 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3665 = p_f1;
        *$tmp3664 = $tmp3665;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3665));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3662));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3667 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3666 = *$tmp3667;
        org$pandalanguage$pandac$IRNode** $tmp3668 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3669 = p_f2;
        *$tmp3668 = $tmp3669;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3669));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3666));
    }
    {
        panda$collections$ImmutableArray** $tmp3671 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3670 = *$tmp3671;
        panda$collections$ImmutableArray** $tmp3672 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3673 = p_f3;
        *$tmp3672 = $tmp3673;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3673));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3670));
    }
}

