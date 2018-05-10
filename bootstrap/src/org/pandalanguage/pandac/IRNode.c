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

typedef org$pandalanguage$pandac$Type* (*$fn412)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn475)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn501)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn532)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn535)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn541)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn676)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn690)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn788)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn889)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn892)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn909)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn913)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn935)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn942)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn953)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn955)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn990)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn997)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1008)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1010)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1052)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1076)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1088)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1101)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1108)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1119)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1121)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1152)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1165)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1172)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1183)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1185)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1195)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1209)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1217)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1234)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1241)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1252)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1254)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1273)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1286)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1293)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1304)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1306)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1323)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1330)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1341)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1343)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1379)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1392)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1405)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1412)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1423)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1425)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1447)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1463)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1491)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1494)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1498)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1551)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1558)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1569)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1571)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1602)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1609)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1620)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1622)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1639)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1646)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1657)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1659)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1678)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1691)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1698)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1709)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1711)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1774)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1816)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1823)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1834)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1871)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1878)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1889)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1905)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1912)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1923)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn1984)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2010)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2043)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2125)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2137)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn2169)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2176)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2187)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2219)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2239)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn2276)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2283)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2294)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2377)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2384)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2395)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2439)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2446)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2457)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2473)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2480)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2491)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2518)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2562)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn2611)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2618)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2629)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2784)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2810)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2837)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn2976)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2983)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2994)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x4e\x6f\x64\x65", 31, -8857975469778350849, NULL };
static panda$core$String $s451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6d\x65\x74\x68\x6f\x64\x3e", 8, 17378158564789264, NULL };
static panda$core$String $s1740 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s1742 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1745 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1753 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s1755 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1776 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1784 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1807 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s1837 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1862 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x79\x20\x7b\x0a", 6, 2292679699717, NULL };
static panda$core$String $s1892 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1896 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x66\x69\x6e\x61\x6c\x6c\x79\x20\x7b\x0a", 12, -1355183944487068280, NULL };
static panda$core$String $s1926 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1946 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s1948 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1954 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s1969 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1974 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1995 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x4e\x54\x36\x34\x5f\x57\x52\x41\x50\x28", 11, -7093166379287162761, NULL };
static panda$core$String $s1997 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s2000 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2012 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s2015 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2045 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2048 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s2053 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s2077 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2082 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2093 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x65\x64\x20\x6f\x62\x6a\x65\x63\x74\x20\x2a\x2d", 24, 1541443738414735436, NULL };
static panda$core$String $s2103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s2105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s2127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s2130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2160 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s2190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x77\x68\x69\x6c\x65\x20", 8, 24265489235972527, NULL };
static panda$core$String $s2198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x2a\x20\x61\x6e\x64\x20\x74\x68\x65\x6e\x3a\x20", 14, -3277098584181619124, NULL };
static panda$core$String $s2224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s2241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2244 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s2266 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s2297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2304 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s2306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x6e\x75\x6c\x6c\x29", 9, 1443802565768004343, NULL };
static panda$core$String $s2345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x29", 8, 14324500803727910, NULL };
static panda$core$String $s2366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s2398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s2429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x3a\x0a", 11, 7948234111488089839, NULL };
static panda$core$String $s2494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2520 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2523 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2537 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2546 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s2564 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2567 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2590 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2596 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s2598 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s2601 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2632 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2661 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s2663 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2669 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s2681 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s2685 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2700 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s2704 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s2707 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2714 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s2727 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s2745 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2747 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3f\x20", 3, 1363128, NULL };
static panda$core$String $s2750 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s2753 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2786 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s2791 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s2812 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2817 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2822 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2839 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2844 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2864 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s2865 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s2868 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s2870 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2894 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s2896 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s2898 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s2900 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s2929 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s2933 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x0a", 2, 16069, NULL };
static panda$core$String $s2936 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2939 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2960 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2964 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s2966 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2997 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3;
    org$pandalanguage$pandac$IRNode* $tmp6;
    org$pandalanguage$pandac$IRNode* $tmp7;
    org$pandalanguage$pandac$IRNode* $tmp10;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp4 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3 = *$tmp4;
        org$pandalanguage$pandac$IRNode** $tmp5 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp6 = p_f1;
        *$tmp5 = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp8 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp7 = *$tmp8;
        org$pandalanguage$pandac$IRNode** $tmp9 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp10 = p_f2;
        *$tmp9 = $tmp10;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp10));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp7));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$parser$Token$Kind p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$Type* $tmp12;
    org$pandalanguage$pandac$Type* $tmp15;
    org$pandalanguage$pandac$IRNode* $tmp16;
    org$pandalanguage$pandac$IRNode* $tmp19;
    org$pandalanguage$pandac$IRNode* $tmp21;
    org$pandalanguage$pandac$IRNode* $tmp24;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp11 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp11 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp13 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp12 = *$tmp13;
        org$pandalanguage$pandac$Type** $tmp14 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp15 = p_f1;
        *$tmp14 = $tmp15;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp15));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp17 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp16 = *$tmp17;
        org$pandalanguage$pandac$IRNode** $tmp18 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp19 = p_f2;
        *$tmp18 = $tmp19;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp19));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp16));
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp20 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 32));
    *$tmp20 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp22 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        $tmp21 = *$tmp22;
        org$pandalanguage$pandac$IRNode** $tmp23 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        $tmp24 = p_f4;
        *$tmp23 = $tmp24;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp24));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp21));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Bit p_f2) {
    org$pandalanguage$pandac$Type* $tmp26;
    org$pandalanguage$pandac$Type* $tmp29;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp25 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp25 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp27 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp26 = *$tmp27;
        org$pandalanguage$pandac$Type** $tmp28 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp29 = p_f1;
        *$tmp28 = $tmp29;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp29));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp26));
    }
    panda$core$Bit* $tmp30 = ((panda$core$Bit*) ((char*) self->$data + 24));
    *$tmp30 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    panda$collections$ImmutableArray* $tmp32;
    panda$collections$ImmutableArray* $tmp35;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp31 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp31 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp33 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp32 = *$tmp33;
        panda$collections$ImmutableArray** $tmp34 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp35 = p_f1;
        *$tmp34 = $tmp35;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp35));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp32));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp37;
    panda$collections$ImmutableArray* $tmp40;
    panda$collections$ImmutableArray* $tmp41;
    panda$collections$ImmutableArray* $tmp44;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp36 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp36 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp38 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp37 = *$tmp38;
        panda$collections$ImmutableArray** $tmp39 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp40 = p_f1;
        *$tmp39 = $tmp40;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp40));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp37));
    }
    {
        panda$collections$ImmutableArray** $tmp42 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp41 = *$tmp42;
        panda$collections$ImmutableArray** $tmp43 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp44 = p_f2;
        *$tmp43 = $tmp44;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp44));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp41));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp46;
    panda$core$String* $tmp49;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp45 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp45 = p_f0;
    {
        panda$core$String** $tmp47 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp46 = *$tmp47;
        panda$core$String** $tmp48 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp49 = p_f1;
        *$tmp48 = $tmp49;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp49));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp46));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$MethodRef* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp51;
    org$pandalanguage$pandac$Type* $tmp54;
    org$pandalanguage$pandac$MethodRef* $tmp55;
    org$pandalanguage$pandac$MethodRef* $tmp58;
    panda$collections$ImmutableArray* $tmp59;
    panda$collections$ImmutableArray* $tmp62;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp50 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp50 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp52 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp51 = *$tmp52;
        org$pandalanguage$pandac$Type** $tmp53 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp54 = p_f1;
        *$tmp53 = $tmp54;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp54));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp51));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp56 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp55 = *$tmp56;
        org$pandalanguage$pandac$MethodRef** $tmp57 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp58 = p_f2;
        *$tmp57 = $tmp58;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp58));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp55));
    }
    {
        panda$collections$ImmutableArray** $tmp60 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp59 = *$tmp60;
        panda$collections$ImmutableArray** $tmp61 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp62 = p_f3;
        *$tmp61 = $tmp62;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp62));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp59));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$Type* p_f2, panda$core$Bit p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp64;
    org$pandalanguage$pandac$IRNode* $tmp67;
    org$pandalanguage$pandac$Type* $tmp68;
    org$pandalanguage$pandac$Type* $tmp71;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp63 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp63 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp65 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp64 = *$tmp65;
        org$pandalanguage$pandac$IRNode** $tmp66 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp67 = p_f1;
        *$tmp66 = $tmp67;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp67));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp64));
    }
    {
        org$pandalanguage$pandac$Type** $tmp69 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp68 = *$tmp69;
        org$pandalanguage$pandac$Type** $tmp70 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp71 = p_f2;
        *$tmp70 = $tmp71;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp71));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp68));
    }
    panda$core$Bit* $tmp72 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp72 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ChoiceEntry(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ChoiceEntry* p_f1) {
    org$pandalanguage$pandac$ChoiceEntry* $tmp74;
    org$pandalanguage$pandac$ChoiceEntry* $tmp77;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp73 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp73 = p_f0;
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp75 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        $tmp74 = *$tmp75;
        org$pandalanguage$pandac$ChoiceEntry** $tmp76 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        $tmp77 = p_f1;
        *$tmp76 = $tmp77;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp77));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp74));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp79;
    org$pandalanguage$pandac$IRNode* $tmp82;
    org$pandalanguage$pandac$ChoiceEntry* $tmp83;
    org$pandalanguage$pandac$ChoiceEntry* $tmp86;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp78 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp78 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp80 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp79 = *$tmp80;
        org$pandalanguage$pandac$IRNode** $tmp81 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp82 = p_f1;
        *$tmp81 = $tmp82;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp82));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp79));
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp84 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp83 = *$tmp84;
        org$pandalanguage$pandac$ChoiceEntry** $tmp85 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp86 = p_f2;
        *$tmp85 = $tmp86;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp86));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp83));
    }
    panda$core$Int64* $tmp87 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp87 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$Type* $tmp89;
    org$pandalanguage$pandac$Type* $tmp92;
    org$pandalanguage$pandac$IRNode* $tmp93;
    org$pandalanguage$pandac$IRNode* $tmp96;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp88 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp88 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp90 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp89 = *$tmp90;
        org$pandalanguage$pandac$Type** $tmp91 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp92 = p_f1;
        *$tmp91 = $tmp92;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp92));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp89));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp94 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp93 = *$tmp94;
        org$pandalanguage$pandac$IRNode** $tmp95 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp96 = p_f2;
        *$tmp95 = $tmp96;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp96));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp93));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1) {
    org$pandalanguage$pandac$Type* $tmp98;
    org$pandalanguage$pandac$Type* $tmp101;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp97 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp97 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp99 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp98 = *$tmp99;
        org$pandalanguage$pandac$Type** $tmp100 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp101 = p_f1;
        *$tmp100 = $tmp101;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp101));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp98));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp102;
    org$pandalanguage$pandac$IRNode* $tmp105;
    org$pandalanguage$pandac$IRNode* $tmp106;
    org$pandalanguage$pandac$IRNode* $tmp109;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp103 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp102 = *$tmp103;
        org$pandalanguage$pandac$IRNode** $tmp104 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp105 = p_f0;
        *$tmp104 = $tmp105;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp105));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp102));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp107 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp106 = *$tmp107;
        org$pandalanguage$pandac$IRNode** $tmp108 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp109 = p_f1;
        *$tmp108 = $tmp109;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp109));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp106));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    panda$core$String* $tmp111;
    panda$core$String* $tmp114;
    panda$collections$ImmutableArray* $tmp115;
    panda$collections$ImmutableArray* $tmp118;
    org$pandalanguage$pandac$IRNode* $tmp119;
    org$pandalanguage$pandac$IRNode* $tmp122;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp110 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp110 = p_f0;
    {
        panda$core$String** $tmp112 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp111 = *$tmp112;
        panda$core$String** $tmp113 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp114 = p_f1;
        *$tmp113 = $tmp114;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp114));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp111));
    }
    {
        panda$collections$ImmutableArray** $tmp116 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp115 = *$tmp116;
        panda$collections$ImmutableArray** $tmp117 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp118 = p_f2;
        *$tmp117 = $tmp118;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp118));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp115));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp120 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp119 = *$tmp120;
        org$pandalanguage$pandac$IRNode** $tmp121 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp122 = p_f3;
        *$tmp121 = $tmp122;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp122));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp119));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp123;
    org$pandalanguage$pandac$IRNode* $tmp126;
    org$pandalanguage$pandac$IRNode* $tmp127;
    org$pandalanguage$pandac$IRNode* $tmp130;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp124 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp123 = *$tmp124;
        org$pandalanguage$pandac$IRNode** $tmp125 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp126 = p_f0;
        *$tmp125 = $tmp126;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp126));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp123));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp128 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp127 = *$tmp128;
        org$pandalanguage$pandac$IRNode** $tmp129 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp130 = p_f1;
        *$tmp129 = $tmp130;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp130));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp127));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$FieldDecl* p_f3) {
    org$pandalanguage$pandac$Type* $tmp132;
    org$pandalanguage$pandac$Type* $tmp135;
    org$pandalanguage$pandac$IRNode* $tmp136;
    org$pandalanguage$pandac$IRNode* $tmp139;
    org$pandalanguage$pandac$FieldDecl* $tmp140;
    org$pandalanguage$pandac$FieldDecl* $tmp143;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp131 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp131 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp133 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp132 = *$tmp133;
        org$pandalanguage$pandac$Type** $tmp134 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp135 = p_f1;
        *$tmp134 = $tmp135;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp135));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp132));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp137 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp136 = *$tmp137;
        org$pandalanguage$pandac$IRNode** $tmp138 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp139 = p_f2;
        *$tmp138 = $tmp139;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp139));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp136));
    }
    {
        org$pandalanguage$pandac$FieldDecl** $tmp141 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp140 = *$tmp141;
        org$pandalanguage$pandac$FieldDecl** $tmp142 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp143 = p_f3;
        *$tmp142 = $tmp143;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp143));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp140));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp145;
    org$pandalanguage$pandac$IRNode* $tmp148;
    panda$collections$ImmutableArray* $tmp149;
    panda$collections$ImmutableArray* $tmp152;
    org$pandalanguage$pandac$IRNode* $tmp153;
    org$pandalanguage$pandac$IRNode* $tmp156;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp144 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp144 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp146 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp145 = *$tmp146;
        org$pandalanguage$pandac$IRNode** $tmp147 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp148 = p_f1;
        *$tmp147 = $tmp148;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp148));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp145));
    }
    {
        panda$collections$ImmutableArray** $tmp150 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp149 = *$tmp150;
        panda$collections$ImmutableArray** $tmp151 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp152 = p_f2;
        *$tmp151 = $tmp152;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp152));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp149));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp154 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp153 = *$tmp154;
        org$pandalanguage$pandac$IRNode** $tmp155 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp156 = p_f3;
        *$tmp155 = $tmp156;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp156));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp153));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$UInt64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp158;
    org$pandalanguage$pandac$Type* $tmp161;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp157 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp157 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp159 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp158 = *$tmp159;
        org$pandalanguage$pandac$Type** $tmp160 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp161 = p_f1;
        *$tmp160 = $tmp161;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp161));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp158));
    }
    panda$core$UInt64* $tmp162 = ((panda$core$UInt64*) ((char*) self->$data + 24));
    *$tmp162 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp164;
    org$pandalanguage$pandac$IRNode* $tmp167;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp163 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp163 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp165 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp164 = *$tmp165;
        org$pandalanguage$pandac$IRNode** $tmp166 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp167 = p_f1;
        *$tmp166 = $tmp167;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp167));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp164));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp169;
    panda$core$String* $tmp172;
    panda$collections$ImmutableArray* $tmp173;
    panda$collections$ImmutableArray* $tmp176;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp168 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp168 = p_f0;
    {
        panda$core$String** $tmp170 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp169 = *$tmp170;
        panda$core$String** $tmp171 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp172 = p_f1;
        *$tmp171 = $tmp172;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp172));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp169));
    }
    {
        panda$collections$ImmutableArray** $tmp174 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp173 = *$tmp174;
        panda$collections$ImmutableArray** $tmp175 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp176 = p_f2;
        *$tmp175 = $tmp176;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp176));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp173));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp178;
    org$pandalanguage$pandac$IRNode* $tmp181;
    panda$collections$ImmutableArray* $tmp182;
    panda$collections$ImmutableArray* $tmp185;
    panda$collections$ImmutableArray* $tmp186;
    panda$collections$ImmutableArray* $tmp189;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp177 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp177 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp179 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp178 = *$tmp179;
        org$pandalanguage$pandac$IRNode** $tmp180 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp181 = p_f1;
        *$tmp180 = $tmp181;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp181));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp178));
    }
    {
        panda$collections$ImmutableArray** $tmp183 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp182 = *$tmp183;
        panda$collections$ImmutableArray** $tmp184 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp185 = p_f2;
        *$tmp184 = $tmp185;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp185));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp182));
    }
    {
        panda$collections$ImmutableArray** $tmp187 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp186 = *$tmp187;
        panda$collections$ImmutableArray** $tmp188 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp189 = p_f3;
        *$tmp188 = $tmp189;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp189));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp186));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$MethodRef* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp191;
    org$pandalanguage$pandac$IRNode* $tmp194;
    org$pandalanguage$pandac$MethodRef* $tmp195;
    org$pandalanguage$pandac$MethodRef* $tmp198;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp190 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp190 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp192 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp191 = *$tmp192;
        org$pandalanguage$pandac$IRNode** $tmp193 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp194 = p_f1;
        *$tmp193 = $tmp194;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp194));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp191));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp196 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp195 = *$tmp196;
        org$pandalanguage$pandac$MethodRef** $tmp197 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp198 = p_f2;
        *$tmp197 = $tmp198;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp198));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp195));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp201;
    org$pandalanguage$pandac$IRNode* $tmp204;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp199 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp199 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp200 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp200 = p_f1;
    {
        org$pandalanguage$pandac$IRNode** $tmp202 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp201 = *$tmp202;
        org$pandalanguage$pandac$IRNode** $tmp203 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp204 = p_f2;
        *$tmp203 = $tmp204;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp204));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp201));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    panda$core$String* $tmp206;
    panda$core$String* $tmp209;
    org$pandalanguage$pandac$IRNode* $tmp210;
    org$pandalanguage$pandac$IRNode* $tmp213;
    org$pandalanguage$pandac$IRNode* $tmp214;
    org$pandalanguage$pandac$IRNode* $tmp217;
    panda$collections$ImmutableArray* $tmp218;
    panda$collections$ImmutableArray* $tmp221;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp205 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp205 = p_f0;
    {
        panda$core$String** $tmp207 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp206 = *$tmp207;
        panda$core$String** $tmp208 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp209 = p_f1;
        *$tmp208 = $tmp209;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp209));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp206));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp211 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp210 = *$tmp211;
        org$pandalanguage$pandac$IRNode** $tmp212 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp213 = p_f2;
        *$tmp212 = $tmp213;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp213));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp210));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp215 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp214 = *$tmp215;
        org$pandalanguage$pandac$IRNode** $tmp216 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp217 = p_f3;
        *$tmp216 = $tmp217;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp217));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp214));
    }
    {
        panda$collections$ImmutableArray** $tmp219 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp218 = *$tmp219;
        panda$collections$ImmutableArray** $tmp220 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp221 = p_f4;
        *$tmp220 = $tmp221;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp221));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp218));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Real64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp223;
    org$pandalanguage$pandac$Type* $tmp226;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp222 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp222 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp224 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp223 = *$tmp224;
        org$pandalanguage$pandac$Type** $tmp225 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp226 = p_f1;
        *$tmp225 = $tmp226;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp226));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp223));
    }
    panda$core$Real64* $tmp227 = ((panda$core$Real64*) ((char*) self->$data + 24));
    *$tmp227 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp229;
    org$pandalanguage$pandac$IRNode* $tmp232;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp228 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp228 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp230 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp229 = *$tmp230;
        org$pandalanguage$pandac$IRNode** $tmp231 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp232 = p_f1;
        *$tmp231 = $tmp232;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp232));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp229));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Int64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp234;
    org$pandalanguage$pandac$Type* $tmp237;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp233 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp233 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp235 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp234 = *$tmp235;
        org$pandalanguage$pandac$Type** $tmp236 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp237 = p_f1;
        *$tmp236 = $tmp237;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp237));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp234));
    }
    panda$core$Int64* $tmp238 = ((panda$core$Int64*) ((char*) self->$data + 24));
    *$tmp238 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$core$Int64 p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp239;
    org$pandalanguage$pandac$IRNode* $tmp242;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp240 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp239 = *$tmp240;
        org$pandalanguage$pandac$IRNode** $tmp241 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp242 = p_f0;
        *$tmp241 = $tmp242;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp242));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp239));
    }
    panda$core$Int64* $tmp243 = ((panda$core$Int64*) ((char*) self->$data + 8));
    *$tmp243 = p_f1;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp245;
    panda$core$String* $tmp248;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp244 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp244 = p_f0;
    {
        panda$core$String** $tmp246 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp245 = *$tmp246;
        panda$core$String** $tmp247 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp248 = p_f1;
        *$tmp247 = $tmp248;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp248));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp245));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp250;
    org$pandalanguage$pandac$IRNode* $tmp253;
    org$pandalanguage$pandac$IRNode* $tmp254;
    org$pandalanguage$pandac$IRNode* $tmp257;
    org$pandalanguage$pandac$IRNode* $tmp258;
    org$pandalanguage$pandac$IRNode* $tmp261;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp249 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp249 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp251 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp250 = *$tmp251;
        org$pandalanguage$pandac$IRNode** $tmp252 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp253 = p_f1;
        *$tmp252 = $tmp253;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp253));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp250));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp255 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp254 = *$tmp255;
        org$pandalanguage$pandac$IRNode** $tmp256 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp257 = p_f2;
        *$tmp256 = $tmp257;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp257));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp254));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp259 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp258 = *$tmp259;
        org$pandalanguage$pandac$IRNode** $tmp260 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp261 = p_f3;
        *$tmp260 = $tmp261;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp261));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp258));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp263;
    org$pandalanguage$pandac$Type* $tmp266;
    org$pandalanguage$pandac$IRNode* $tmp267;
    org$pandalanguage$pandac$IRNode* $tmp270;
    panda$collections$ImmutableArray* $tmp271;
    panda$collections$ImmutableArray* $tmp274;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp262 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp262 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp264 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp263 = *$tmp264;
        org$pandalanguage$pandac$Type** $tmp265 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp266 = p_f1;
        *$tmp265 = $tmp266;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp266));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp263));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp268 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp267 = *$tmp268;
        org$pandalanguage$pandac$IRNode** $tmp269 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp270 = p_f2;
        *$tmp269 = $tmp270;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp270));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp267));
    }
    {
        panda$collections$ImmutableArray** $tmp272 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp271 = *$tmp272;
        panda$collections$ImmutableArray** $tmp273 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp274 = p_f3;
        *$tmp273 = $tmp274;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp274));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp271));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3, panda$collections$ImmutableArray* p_f4) {
    org$pandalanguage$pandac$Type* $tmp276;
    org$pandalanguage$pandac$Type* $tmp279;
    org$pandalanguage$pandac$IRNode* $tmp280;
    org$pandalanguage$pandac$IRNode* $tmp283;
    panda$collections$ImmutableArray* $tmp284;
    panda$collections$ImmutableArray* $tmp287;
    panda$collections$ImmutableArray* $tmp288;
    panda$collections$ImmutableArray* $tmp291;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp275 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp275 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp277 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp276 = *$tmp277;
        org$pandalanguage$pandac$Type** $tmp278 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp279 = p_f1;
        *$tmp278 = $tmp279;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp279));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp276));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp281 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp280 = *$tmp281;
        org$pandalanguage$pandac$IRNode** $tmp282 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp283 = p_f2;
        *$tmp282 = $tmp283;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp283));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp280));
    }
    {
        panda$collections$ImmutableArray** $tmp285 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp284 = *$tmp285;
        panda$collections$ImmutableArray** $tmp286 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp287 = p_f3;
        *$tmp286 = $tmp287;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp287));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp284));
    }
    {
        panda$collections$ImmutableArray** $tmp289 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp288 = *$tmp289;
        panda$collections$ImmutableArray** $tmp290 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp291 = p_f4;
        *$tmp290 = $tmp291;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp291));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp288));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp293;
    org$pandalanguage$pandac$IRNode* $tmp296;
    panda$collections$ImmutableArray* $tmp297;
    panda$collections$ImmutableArray* $tmp300;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp292 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp292 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp294 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp293 = *$tmp294;
        org$pandalanguage$pandac$IRNode** $tmp295 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp296 = p_f1;
        *$tmp295 = $tmp296;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp296));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp293));
    }
    {
        panda$collections$ImmutableArray** $tmp298 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp297 = *$tmp298;
        panda$collections$ImmutableArray** $tmp299 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp300 = p_f2;
        *$tmp299 = $tmp300;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp300));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp297));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$core$Bit$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$IRNode* $tmp302;
    org$pandalanguage$pandac$IRNode* $tmp305;
    org$pandalanguage$pandac$IRNode* $tmp306;
    org$pandalanguage$pandac$IRNode* $tmp309;
    org$pandalanguage$pandac$IRNode* $tmp311;
    org$pandalanguage$pandac$IRNode* $tmp314;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp301 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp301 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp303 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp302 = *$tmp303;
        org$pandalanguage$pandac$IRNode** $tmp304 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp305 = p_f1;
        *$tmp304 = $tmp305;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp305));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp302));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp307 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp306 = *$tmp307;
        org$pandalanguage$pandac$IRNode** $tmp308 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp309 = p_f2;
        *$tmp308 = $tmp309;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp309));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp306));
    }
    panda$core$Bit* $tmp310 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp310 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp312 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp311 = *$tmp312;
        org$pandalanguage$pandac$IRNode** $tmp313 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp314 = p_f4;
        *$tmp313 = $tmp314;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp314));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp311));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp317;
    panda$collections$ImmutableArray* $tmp320;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp315 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp315 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp316 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp316 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp318 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp317 = *$tmp318;
        panda$collections$ImmutableArray** $tmp319 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp320 = p_f2;
        *$tmp319 = $tmp320;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp320));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp317));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable* p_f1) {
    org$pandalanguage$pandac$Variable* $tmp322;
    org$pandalanguage$pandac$Variable* $tmp325;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp321 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp321 = p_f0;
    {
        org$pandalanguage$pandac$Variable** $tmp323 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp322 = *$tmp323;
        org$pandalanguage$pandac$Variable** $tmp324 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp325 = p_f1;
        *$tmp324 = $tmp325;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp325));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp322));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    panda$core$String* $tmp327;
    panda$core$String* $tmp330;
    org$pandalanguage$pandac$IRNode* $tmp331;
    org$pandalanguage$pandac$IRNode* $tmp334;
    panda$collections$ImmutableArray* $tmp335;
    panda$collections$ImmutableArray* $tmp338;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp326 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp326 = p_f0;
    {
        panda$core$String** $tmp328 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp327 = *$tmp328;
        panda$core$String** $tmp329 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp330 = p_f1;
        *$tmp329 = $tmp330;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp330));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp327));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp332 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp331 = *$tmp332;
        org$pandalanguage$pandac$IRNode** $tmp333 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp334 = p_f2;
        *$tmp333 = $tmp334;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp334));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp331));
    }
    {
        panda$collections$ImmutableArray** $tmp336 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp335 = *$tmp336;
        panda$collections$ImmutableArray** $tmp337 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp338 = p_f3;
        *$tmp337 = $tmp338;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp338));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp335));
    }
}
org$pandalanguage$pandac$Type* org$pandalanguage$pandac$IRNode$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$71_9342;
    org$pandalanguage$pandac$IRNode* $tmp343;
    org$pandalanguage$pandac$Type* type345;
    org$pandalanguage$pandac$Type* $finallyReturn346;
    org$pandalanguage$pandac$Type* $tmp348;
    org$pandalanguage$pandac$Type* type352;
    org$pandalanguage$pandac$Type* $finallyReturn353;
    org$pandalanguage$pandac$Type* $tmp355;
    org$pandalanguage$pandac$Type* type359;
    org$pandalanguage$pandac$Type* $finallyReturn360;
    org$pandalanguage$pandac$Type* $tmp362;
    org$pandalanguage$pandac$Type* type366;
    org$pandalanguage$pandac$Type* $finallyReturn367;
    org$pandalanguage$pandac$Type* $tmp369;
    org$pandalanguage$pandac$ChoiceEntry* ce373;
    org$pandalanguage$pandac$Type* $finallyReturn374;
    org$pandalanguage$pandac$Type* $tmp376;
    org$pandalanguage$pandac$Type* $tmp377;
    org$pandalanguage$pandac$ChoiceEntry* ce382;
    panda$core$Int64 field384;
    org$pandalanguage$pandac$Type* $finallyReturn385;
    org$pandalanguage$pandac$Type* $tmp387;
    panda$core$Object* $tmp388;
    org$pandalanguage$pandac$Type* type393;
    org$pandalanguage$pandac$Type* $finallyReturn394;
    org$pandalanguage$pandac$Type* $tmp396;
    org$pandalanguage$pandac$Type* type400;
    org$pandalanguage$pandac$Type* $finallyReturn401;
    org$pandalanguage$pandac$Type* $tmp403;
    org$pandalanguage$pandac$IRNode* expr407;
    org$pandalanguage$pandac$Type* $finallyReturn408;
    org$pandalanguage$pandac$Type* $tmp410;
    org$pandalanguage$pandac$Type* $tmp411;
    org$pandalanguage$pandac$Type* type417;
    org$pandalanguage$pandac$Type* $finallyReturn418;
    org$pandalanguage$pandac$Type* $tmp420;
    org$pandalanguage$pandac$Type* type424;
    org$pandalanguage$pandac$Type* $finallyReturn425;
    org$pandalanguage$pandac$Type* $tmp427;
    org$pandalanguage$pandac$Type* $finallyReturn430;
    org$pandalanguage$pandac$Type* $tmp432;
    org$pandalanguage$pandac$Type* $tmp433;
    org$pandalanguage$pandac$Type* $finallyReturn437;
    org$pandalanguage$pandac$Type* $tmp439;
    org$pandalanguage$pandac$Type* $tmp440;
    org$pandalanguage$pandac$IRNode* ref445;
    org$pandalanguage$pandac$Type* $finallyReturn446;
    org$pandalanguage$pandac$Type* $tmp448;
    org$pandalanguage$pandac$Type* $tmp449;
    org$pandalanguage$pandac$Position $tmp452;
    org$pandalanguage$pandac$Type* type456;
    org$pandalanguage$pandac$Type* $finallyReturn457;
    org$pandalanguage$pandac$Type* $tmp459;
    org$pandalanguage$pandac$Type* type463;
    org$pandalanguage$pandac$Type* $finallyReturn464;
    org$pandalanguage$pandac$Type* $tmp466;
    org$pandalanguage$pandac$IRNode* base470;
    org$pandalanguage$pandac$Type* $finallyReturn471;
    org$pandalanguage$pandac$Type* $tmp473;
    org$pandalanguage$pandac$Type* $tmp474;
    org$pandalanguage$pandac$Type* type480;
    org$pandalanguage$pandac$Type* $finallyReturn481;
    org$pandalanguage$pandac$Type* $tmp483;
    org$pandalanguage$pandac$Type* type487;
    panda$core$Int64 id489;
    org$pandalanguage$pandac$Type* $finallyReturn490;
    org$pandalanguage$pandac$Type* $tmp492;
    org$pandalanguage$pandac$IRNode* base496;
    org$pandalanguage$pandac$Type* $finallyReturn497;
    org$pandalanguage$pandac$Type* $tmp499;
    org$pandalanguage$pandac$Type* $tmp500;
    org$pandalanguage$pandac$Type* type506;
    org$pandalanguage$pandac$Type* $finallyReturn507;
    org$pandalanguage$pandac$Type* $tmp509;
    org$pandalanguage$pandac$Type* $finallyReturn512;
    org$pandalanguage$pandac$Type* $tmp514;
    org$pandalanguage$pandac$Type* $tmp515;
    org$pandalanguage$pandac$Type* type520;
    org$pandalanguage$pandac$Type* $finallyReturn521;
    org$pandalanguage$pandac$Type* $tmp523;
    org$pandalanguage$pandac$IRNode* ifTrue527;
    org$pandalanguage$pandac$IRNode* ifFalse529;
    org$pandalanguage$pandac$Type* $tmp531;
    org$pandalanguage$pandac$Type* $tmp534;
    org$pandalanguage$pandac$Type* $finallyReturn537;
    org$pandalanguage$pandac$Type* $tmp539;
    org$pandalanguage$pandac$Type* $tmp540;
    org$pandalanguage$pandac$Type* $finallyReturn545;
    org$pandalanguage$pandac$Type* $tmp547;
    org$pandalanguage$pandac$Type* $tmp548;
    org$pandalanguage$pandac$Type* $finallyReturn552;
    org$pandalanguage$pandac$Type* $tmp554;
    org$pandalanguage$pandac$Type* $tmp555;
    org$pandalanguage$pandac$Type* type560;
    org$pandalanguage$pandac$Type* $finallyReturn561;
    org$pandalanguage$pandac$Type* $tmp563;
    org$pandalanguage$pandac$Type* type567;
    org$pandalanguage$pandac$Type* $finallyReturn568;
    org$pandalanguage$pandac$Type* $tmp570;
    org$pandalanguage$pandac$Type* $finallyReturn573;
    org$pandalanguage$pandac$Type* $tmp575;
    org$pandalanguage$pandac$Type* $tmp576;
    org$pandalanguage$pandac$Type* $finallyReturn580;
    org$pandalanguage$pandac$Type* $tmp582;
    org$pandalanguage$pandac$Type* $tmp583;
    org$pandalanguage$pandac$Variable* variable588;
    org$pandalanguage$pandac$Type* $finallyReturn589;
    org$pandalanguage$pandac$Type* $tmp591;
    int $tmp341;
    {
        $tmp343 = self;
        $match$71_9342 = $tmp343;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp343));
        panda$core$Bit $tmp344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_9342->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp344.value) {
        {
            org$pandalanguage$pandac$Type** $tmp346 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_9342->$data + 16));
            type345 = *$tmp346;
            $tmp348 = type345;
            $finallyReturn346 = $tmp348;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp348));
            $tmp341 = 0;
            goto $l339;
            $l349:;
            return $finallyReturn346;
        }
        }
        else {
        panda$core$Bit $tmp351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_9342->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp351.value) {
        {
            org$pandalanguage$pandac$Type** $tmp353 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_9342->$data + 16));
            type352 = *$tmp353;
            $tmp355 = type352;
            $finallyReturn353 = $tmp355;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp355));
            $tmp341 = 1;
            goto $l339;
            $l356:;
            return $finallyReturn353;
        }
        }
        else {
        panda$core$Bit $tmp358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_9342->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp358.value) {
        {
            org$pandalanguage$pandac$Type** $tmp360 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_9342->$data + 16));
            type359 = *$tmp360;
            $tmp362 = type359;
            $finallyReturn360 = $tmp362;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp362));
            $tmp341 = 2;
            goto $l339;
            $l363:;
            return $finallyReturn360;
        }
        }
        else {
        panda$core$Bit $tmp365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_9342->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp365.value) {
        {
            org$pandalanguage$pandac$Type** $tmp367 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_9342->$data + 24));
            type366 = *$tmp367;
            $tmp369 = type366;
            $finallyReturn367 = $tmp369;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp369));
            $tmp341 = 3;
            goto $l339;
            $l370:;
            return $finallyReturn367;
        }
        }
        else {
        panda$core$Bit $tmp372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_9342->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp372.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp374 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$71_9342->$data + 16));
            ce373 = *$tmp374;
            org$pandalanguage$pandac$Type* $tmp378 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp377 = $tmp378;
            $tmp376 = $tmp377;
            $finallyReturn374 = $tmp376;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp376));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp377));
            $tmp341 = 4;
            goto $l339;
            $l379:;
            return $finallyReturn374;
        }
        }
        else {
        panda$core$Bit $tmp381 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_9342->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp381.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp383 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$71_9342->$data + 24));
            ce382 = *$tmp383;
            panda$core$Int64* $tmp385 = ((panda$core$Int64*) ((char*) $match$71_9342->$data + 32));
            field384 = *$tmp385;
            panda$core$Object* $tmp389 = panda$collections$Array$$IDX$panda$core$Int64$R$panda$collections$Array$T(ce382->fields, field384);
            $tmp388 = $tmp389;
            $tmp387 = ((org$pandalanguage$pandac$Type*) $tmp388);
            $finallyReturn385 = $tmp387;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp387));
            panda$core$Panda$unref$panda$core$Object($tmp388);
            $tmp341 = 5;
            goto $l339;
            $l390:;
            return $finallyReturn385;
        }
        }
        else {
        panda$core$Bit $tmp392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_9342->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp392.value) {
        {
            org$pandalanguage$pandac$Type** $tmp394 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_9342->$data + 16));
            type393 = *$tmp394;
            $tmp396 = type393;
            $finallyReturn394 = $tmp396;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp396));
            $tmp341 = 6;
            goto $l339;
            $l397:;
            return $finallyReturn394;
        }
        }
        else {
        panda$core$Bit $tmp399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_9342->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp399.value) {
        {
            org$pandalanguage$pandac$Type** $tmp401 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_9342->$data + 16));
            type400 = *$tmp401;
            $tmp403 = type400;
            $finallyReturn401 = $tmp403;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp403));
            $tmp341 = 7;
            goto $l339;
            $l404:;
            return $finallyReturn401;
        }
        }
        else {
        panda$core$Bit $tmp406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_9342->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp406.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp408 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$71_9342->$data + 0));
            expr407 = *$tmp408;
            org$pandalanguage$pandac$Type* $tmp413 = (($fn412) expr407->$class->vtable[2])(expr407);
            $tmp411 = $tmp413;
            $tmp410 = $tmp411;
            $finallyReturn408 = $tmp410;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp410));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp411));
            $tmp341 = 8;
            goto $l339;
            $l414:;
            return $finallyReturn408;
        }
        }
        else {
        panda$core$Bit $tmp416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_9342->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp416.value) {
        {
            org$pandalanguage$pandac$Type** $tmp418 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_9342->$data + 16));
            type417 = *$tmp418;
            $tmp420 = type417;
            $finallyReturn418 = $tmp420;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp420));
            $tmp341 = 9;
            goto $l339;
            $l421:;
            return $finallyReturn418;
        }
        }
        else {
        panda$core$Bit $tmp423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_9342->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp423.value) {
        {
            org$pandalanguage$pandac$Type** $tmp425 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_9342->$data + 16));
            type424 = *$tmp425;
            $tmp427 = type424;
            $finallyReturn425 = $tmp427;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp427));
            $tmp341 = 10;
            goto $l339;
            $l428:;
            return $finallyReturn425;
        }
        }
        else {
        panda$core$Bit $tmp430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_9342->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp430.value) {
        {
            org$pandalanguage$pandac$Type* $tmp434 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            $tmp433 = $tmp434;
            $tmp432 = $tmp433;
            $finallyReturn430 = $tmp432;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp432));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp433));
            $tmp341 = 11;
            goto $l339;
            $l435:;
            return $finallyReturn430;
        }
        }
        else {
        panda$core$Bit $tmp437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_9342->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp437.value) {
        {
            org$pandalanguage$pandac$Type* $tmp441 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            $tmp440 = $tmp441;
            $tmp439 = $tmp440;
            $finallyReturn437 = $tmp439;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp439));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp440));
            $tmp341 = 12;
            goto $l339;
            $l442:;
            return $finallyReturn437;
        }
        }
        else {
        panda$core$Bit $tmp444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_9342->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp444.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp446 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$71_9342->$data + 16));
            ref445 = *$tmp446;
            org$pandalanguage$pandac$Type* $tmp450 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(96, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
            org$pandalanguage$pandac$Position$init(&$tmp452);
            org$pandalanguage$pandac$Type$init$panda$core$String$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit($tmp450, &$s451, ((panda$core$Int64) { 16 }), $tmp452, ((panda$core$Bit) { true }));
            $tmp449 = $tmp450;
            $tmp448 = $tmp449;
            $finallyReturn446 = $tmp448;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp448));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp449));
            $tmp341 = 13;
            goto $l339;
            $l453:;
            return $finallyReturn446;
        }
        }
        else {
        panda$core$Bit $tmp455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_9342->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp455.value) {
        {
            org$pandalanguage$pandac$Type** $tmp457 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_9342->$data + 16));
            type456 = *$tmp457;
            $tmp459 = type456;
            $finallyReturn457 = $tmp459;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp459));
            $tmp341 = 14;
            goto $l339;
            $l460:;
            return $finallyReturn457;
        }
        }
        else {
        panda$core$Bit $tmp462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_9342->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp462.value) {
        {
            org$pandalanguage$pandac$Type** $tmp464 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_9342->$data + 16));
            type463 = *$tmp464;
            $tmp466 = type463;
            $finallyReturn464 = $tmp466;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp466));
            $tmp341 = 15;
            goto $l339;
            $l467:;
            return $finallyReturn464;
        }
        }
        else {
        panda$core$Bit $tmp469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_9342->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp469.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp471 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$71_9342->$data + 24));
            base470 = *$tmp471;
            org$pandalanguage$pandac$Type* $tmp476 = (($fn475) base470->$class->vtable[2])(base470);
            $tmp474 = $tmp476;
            $tmp473 = $tmp474;
            $finallyReturn471 = $tmp473;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp473));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp474));
            $tmp341 = 16;
            goto $l339;
            $l477:;
            return $finallyReturn471;
        }
        }
        else {
        panda$core$Bit $tmp479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_9342->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp479.value) {
        {
            org$pandalanguage$pandac$Type** $tmp481 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_9342->$data + 16));
            type480 = *$tmp481;
            $tmp483 = type480;
            $finallyReturn481 = $tmp483;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp483));
            $tmp341 = 17;
            goto $l339;
            $l484:;
            return $finallyReturn481;
        }
        }
        else {
        panda$core$Bit $tmp486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_9342->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp486.value) {
        {
            org$pandalanguage$pandac$Type** $tmp488 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_9342->$data + 16));
            type487 = *$tmp488;
            panda$core$Int64* $tmp490 = ((panda$core$Int64*) ((char*) $match$71_9342->$data + 24));
            id489 = *$tmp490;
            $tmp492 = type487;
            $finallyReturn490 = $tmp492;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp492));
            $tmp341 = 18;
            goto $l339;
            $l493:;
            return $finallyReturn490;
        }
        }
        else {
        panda$core$Bit $tmp495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_9342->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp495.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp497 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$71_9342->$data + 0));
            base496 = *$tmp497;
            org$pandalanguage$pandac$Type* $tmp502 = (($fn501) base496->$class->vtable[2])(base496);
            $tmp500 = $tmp502;
            $tmp499 = $tmp500;
            $finallyReturn497 = $tmp499;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp499));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp500));
            $tmp341 = 19;
            goto $l339;
            $l503:;
            return $finallyReturn497;
        }
        }
        else {
        panda$core$Bit $tmp505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_9342->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp505.value) {
        {
            org$pandalanguage$pandac$Type** $tmp507 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_9342->$data + 16));
            type506 = *$tmp507;
            $tmp509 = type506;
            $finallyReturn507 = $tmp509;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp509));
            $tmp341 = 20;
            goto $l339;
            $l510:;
            return $finallyReturn507;
        }
        }
        else {
        panda$core$Bit $tmp512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_9342->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp512.value) {
        {
            org$pandalanguage$pandac$Type* $tmp516 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
            $tmp515 = $tmp516;
            $tmp514 = $tmp515;
            $finallyReturn512 = $tmp514;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp514));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp515));
            $tmp341 = 21;
            goto $l339;
            $l517:;
            return $finallyReturn512;
        }
        }
        else {
        panda$core$Bit $tmp519 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_9342->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp519.value) {
        {
            org$pandalanguage$pandac$Type** $tmp521 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_9342->$data + 16));
            type520 = *$tmp521;
            $tmp523 = type520;
            $finallyReturn521 = $tmp523;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp523));
            $tmp341 = 22;
            goto $l339;
            $l524:;
            return $finallyReturn521;
        }
        }
        else {
        panda$core$Bit $tmp526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_9342->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp526.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp528 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$71_9342->$data + 24));
            ifTrue527 = *$tmp528;
            org$pandalanguage$pandac$IRNode** $tmp530 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$71_9342->$data + 32));
            ifFalse529 = *$tmp530;
            org$pandalanguage$pandac$Type* $tmp533 = (($fn532) ifTrue527->$class->vtable[2])(ifTrue527);
            $tmp531 = $tmp533;
            org$pandalanguage$pandac$Type* $tmp536 = (($fn535) ifFalse529->$class->vtable[2])(ifFalse529);
            $tmp534 = $tmp536;
            panda$core$Bit $tmp537 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp531, $tmp534);
            PANDA_ASSERT($tmp537.value);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp534));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp531));
            org$pandalanguage$pandac$Type* $tmp542 = (($fn541) ifTrue527->$class->vtable[2])(ifTrue527);
            $tmp540 = $tmp542;
            $tmp539 = $tmp540;
            $finallyReturn537 = $tmp539;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp539));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp540));
            $tmp341 = 23;
            goto $l339;
            $l543:;
            return $finallyReturn537;
        }
        }
        else {
        panda$core$Bit $tmp545 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_9342->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp545.value) {
        {
            org$pandalanguage$pandac$Type* $tmp549 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            $tmp548 = $tmp549;
            $tmp547 = $tmp548;
            $finallyReturn545 = $tmp547;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp547));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp548));
            $tmp341 = 24;
            goto $l339;
            $l550:;
            return $finallyReturn545;
        }
        }
        else {
        panda$core$Bit $tmp552 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_9342->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp552.value) {
        {
            org$pandalanguage$pandac$Type* $tmp556 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp555 = $tmp556;
            $tmp554 = $tmp555;
            $finallyReturn552 = $tmp554;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp554));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp555));
            $tmp341 = 25;
            goto $l339;
            $l557:;
            return $finallyReturn552;
        }
        }
        else {
        panda$core$Bit $tmp559 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_9342->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp559.value) {
        {
            org$pandalanguage$pandac$Type** $tmp561 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_9342->$data + 16));
            type560 = *$tmp561;
            $tmp563 = type560;
            $finallyReturn561 = $tmp563;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp563));
            $tmp341 = 26;
            goto $l339;
            $l564:;
            return $finallyReturn561;
        }
        }
        else {
        panda$core$Bit $tmp566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_9342->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp566.value) {
        {
            org$pandalanguage$pandac$Type** $tmp568 = ((org$pandalanguage$pandac$Type**) ((char*) $match$71_9342->$data + 16));
            type567 = *$tmp568;
            $tmp570 = type567;
            $finallyReturn568 = $tmp570;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp570));
            $tmp341 = 27;
            goto $l339;
            $l571:;
            return $finallyReturn568;
        }
        }
        else {
        panda$core$Bit $tmp573 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_9342->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp573.value) {
        {
            org$pandalanguage$pandac$Type* $tmp577 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp576 = $tmp577;
            $tmp575 = $tmp576;
            $finallyReturn573 = $tmp575;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp575));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp576));
            $tmp341 = 28;
            goto $l339;
            $l578:;
            return $finallyReturn573;
        }
        }
        else {
        panda$core$Bit $tmp580 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_9342->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp580.value) {
        {
            org$pandalanguage$pandac$Type* $tmp584 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp583 = $tmp584;
            $tmp582 = $tmp583;
            $finallyReturn580 = $tmp582;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp582));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp583));
            $tmp341 = 29;
            goto $l339;
            $l585:;
            return $finallyReturn580;
        }
        }
        else {
        panda$core$Bit $tmp587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$71_9342->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp587.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp589 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$71_9342->$data + 16));
            variable588 = *$tmp589;
            $tmp591 = variable588->type;
            $finallyReturn589 = $tmp591;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp591));
            $tmp341 = 30;
            goto $l339;
            $l592:;
            return $finallyReturn589;
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
    $tmp341 = -1;
    goto $l339;
    $l339:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp343));
    switch ($tmp341) {
        case 24: goto $l550;
        case 26: goto $l564;
        case 23: goto $l543;
        case 5: goto $l390;
        case 1: goto $l356;
        case 9: goto $l421;
        case 21: goto $l517;
        case 4: goto $l379;
        case 22: goto $l524;
        case 10: goto $l428;
        case 6: goto $l397;
        case 3: goto $l370;
        case 13: goto $l453;
        case 14: goto $l460;
        case 30: goto $l592;
        case 0: goto $l349;
        case 11: goto $l435;
        case 18: goto $l493;
        case 27: goto $l571;
        case 7: goto $l404;
        case 20: goto $l510;
        case -1: goto $l594;
        case 2: goto $l363;
        case 17: goto $l484;
        case 8: goto $l414;
        case 12: goto $l442;
        case 19: goto $l503;
        case 28: goto $l578;
        case 16: goto $l477;
        case 29: goto $l585;
        case 15: goto $l467;
        case 25: goto $l557;
    }
    $l594:;
}
org$pandalanguage$pandac$Position org$pandalanguage$pandac$IRNode$position$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$141_9598;
    org$pandalanguage$pandac$IRNode* $tmp599;
    org$pandalanguage$pandac$Position position601;
    org$pandalanguage$pandac$Position $finallyReturn602;
    org$pandalanguage$pandac$Position position607;
    org$pandalanguage$pandac$Position $finallyReturn608;
    org$pandalanguage$pandac$Position position613;
    org$pandalanguage$pandac$Position $finallyReturn614;
    org$pandalanguage$pandac$Position position619;
    org$pandalanguage$pandac$Position $finallyReturn620;
    org$pandalanguage$pandac$Position position625;
    org$pandalanguage$pandac$Position $finallyReturn626;
    org$pandalanguage$pandac$Position position631;
    org$pandalanguage$pandac$Position $finallyReturn632;
    org$pandalanguage$pandac$Position position637;
    org$pandalanguage$pandac$Position $finallyReturn638;
    org$pandalanguage$pandac$Position position643;
    org$pandalanguage$pandac$Position $finallyReturn644;
    org$pandalanguage$pandac$Position position649;
    org$pandalanguage$pandac$Position $finallyReturn650;
    org$pandalanguage$pandac$Position position655;
    org$pandalanguage$pandac$Position $finallyReturn656;
    org$pandalanguage$pandac$Position position661;
    org$pandalanguage$pandac$Position $finallyReturn662;
    org$pandalanguage$pandac$Position position667;
    org$pandalanguage$pandac$Position $finallyReturn668;
    org$pandalanguage$pandac$IRNode* target673;
    org$pandalanguage$pandac$Position $finallyReturn674;
    org$pandalanguage$pandac$Position position681;
    org$pandalanguage$pandac$Position $finallyReturn682;
    org$pandalanguage$pandac$IRNode* expr687;
    org$pandalanguage$pandac$Position $finallyReturn688;
    org$pandalanguage$pandac$Position position695;
    org$pandalanguage$pandac$Position $finallyReturn696;
    org$pandalanguage$pandac$Position position701;
    org$pandalanguage$pandac$Position $finallyReturn702;
    org$pandalanguage$pandac$Position position707;
    org$pandalanguage$pandac$Position $finallyReturn708;
    org$pandalanguage$pandac$Position position713;
    org$pandalanguage$pandac$Position $finallyReturn714;
    org$pandalanguage$pandac$Position position719;
    org$pandalanguage$pandac$Position $finallyReturn720;
    org$pandalanguage$pandac$Position position725;
    org$pandalanguage$pandac$Position $finallyReturn726;
    org$pandalanguage$pandac$Position position731;
    org$pandalanguage$pandac$Position $finallyReturn732;
    org$pandalanguage$pandac$Position position737;
    org$pandalanguage$pandac$Position $finallyReturn738;
    org$pandalanguage$pandac$Position position743;
    org$pandalanguage$pandac$Position $finallyReturn744;
    org$pandalanguage$pandac$Position position749;
    org$pandalanguage$pandac$Position $finallyReturn750;
    org$pandalanguage$pandac$Position position755;
    org$pandalanguage$pandac$Position $finallyReturn756;
    org$pandalanguage$pandac$Position position761;
    org$pandalanguage$pandac$Position $finallyReturn762;
    org$pandalanguage$pandac$Position position767;
    org$pandalanguage$pandac$Position $finallyReturn768;
    org$pandalanguage$pandac$Position position773;
    org$pandalanguage$pandac$Position $finallyReturn774;
    org$pandalanguage$pandac$Position position779;
    org$pandalanguage$pandac$Position $finallyReturn780;
    org$pandalanguage$pandac$IRNode* base785;
    org$pandalanguage$pandac$Position $finallyReturn786;
    org$pandalanguage$pandac$Position position793;
    org$pandalanguage$pandac$Position $finallyReturn794;
    org$pandalanguage$pandac$Position position799;
    org$pandalanguage$pandac$Position $finallyReturn800;
    org$pandalanguage$pandac$Position position805;
    org$pandalanguage$pandac$Position $finallyReturn806;
    org$pandalanguage$pandac$Position position811;
    org$pandalanguage$pandac$Position $finallyReturn812;
    org$pandalanguage$pandac$Position position817;
    org$pandalanguage$pandac$Position $finallyReturn818;
    org$pandalanguage$pandac$Position position823;
    org$pandalanguage$pandac$Position $finallyReturn824;
    org$pandalanguage$pandac$Position position829;
    org$pandalanguage$pandac$Position $finallyReturn830;
    org$pandalanguage$pandac$Position position835;
    org$pandalanguage$pandac$Position $finallyReturn836;
    org$pandalanguage$pandac$Position position841;
    org$pandalanguage$pandac$Position $finallyReturn842;
    org$pandalanguage$pandac$Position position847;
    org$pandalanguage$pandac$Position $finallyReturn848;
    org$pandalanguage$pandac$Position position853;
    org$pandalanguage$pandac$Position $finallyReturn854;
    org$pandalanguage$pandac$Position position859;
    org$pandalanguage$pandac$Position $finallyReturn860;
    org$pandalanguage$pandac$Position position865;
    org$pandalanguage$pandac$Position $finallyReturn866;
    org$pandalanguage$pandac$Position position871;
    org$pandalanguage$pandac$Position $finallyReturn872;
    int $tmp597;
    {
        $tmp599 = self;
        $match$141_9598 = $tmp599;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp599));
        panda$core$Bit $tmp600 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp600.value) {
        {
            org$pandalanguage$pandac$Position* $tmp602 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position601 = *$tmp602;
            $finallyReturn602 = position601;
            $tmp597 = 0;
            goto $l595;
            $l604:;
            return $finallyReturn602;
        }
        }
        else {
        panda$core$Bit $tmp606 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp606.value) {
        {
            org$pandalanguage$pandac$Position* $tmp608 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position607 = *$tmp608;
            $finallyReturn608 = position607;
            $tmp597 = 1;
            goto $l595;
            $l610:;
            return $finallyReturn608;
        }
        }
        else {
        panda$core$Bit $tmp612 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp612.value) {
        {
            org$pandalanguage$pandac$Position* $tmp614 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position613 = *$tmp614;
            $finallyReturn614 = position613;
            $tmp597 = 2;
            goto $l595;
            $l616:;
            return $finallyReturn614;
        }
        }
        else {
        panda$core$Bit $tmp618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp618.value) {
        {
            org$pandalanguage$pandac$Position* $tmp620 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position619 = *$tmp620;
            $finallyReturn620 = position619;
            $tmp597 = 3;
            goto $l595;
            $l622:;
            return $finallyReturn620;
        }
        }
        else {
        panda$core$Bit $tmp624 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp624.value) {
        {
            org$pandalanguage$pandac$Position* $tmp626 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position625 = *$tmp626;
            $finallyReturn626 = position625;
            $tmp597 = 4;
            goto $l595;
            $l628:;
            return $finallyReturn626;
        }
        }
        else {
        panda$core$Bit $tmp630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp630.value) {
        {
            org$pandalanguage$pandac$Position* $tmp632 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position631 = *$tmp632;
            $finallyReturn632 = position631;
            $tmp597 = 5;
            goto $l595;
            $l634:;
            return $finallyReturn632;
        }
        }
        else {
        panda$core$Bit $tmp636 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp636.value) {
        {
            org$pandalanguage$pandac$Position* $tmp638 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position637 = *$tmp638;
            $finallyReturn638 = position637;
            $tmp597 = 6;
            goto $l595;
            $l640:;
            return $finallyReturn638;
        }
        }
        else {
        panda$core$Bit $tmp642 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp642.value) {
        {
            org$pandalanguage$pandac$Position* $tmp644 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position643 = *$tmp644;
            $finallyReturn644 = position643;
            $tmp597 = 7;
            goto $l595;
            $l646:;
            return $finallyReturn644;
        }
        }
        else {
        panda$core$Bit $tmp648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp648.value) {
        {
            org$pandalanguage$pandac$Position* $tmp650 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position649 = *$tmp650;
            $finallyReturn650 = position649;
            $tmp597 = 8;
            goto $l595;
            $l652:;
            return $finallyReturn650;
        }
        }
        else {
        panda$core$Bit $tmp654 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp654.value) {
        {
            org$pandalanguage$pandac$Position* $tmp656 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position655 = *$tmp656;
            $finallyReturn656 = position655;
            $tmp597 = 9;
            goto $l595;
            $l658:;
            return $finallyReturn656;
        }
        }
        else {
        panda$core$Bit $tmp660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp660.value) {
        {
            org$pandalanguage$pandac$Position* $tmp662 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position661 = *$tmp662;
            $finallyReturn662 = position661;
            $tmp597 = 10;
            goto $l595;
            $l664:;
            return $finallyReturn662;
        }
        }
        else {
        panda$core$Bit $tmp666 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp666.value) {
        {
            org$pandalanguage$pandac$Position* $tmp668 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position667 = *$tmp668;
            $finallyReturn668 = position667;
            $tmp597 = 11;
            goto $l595;
            $l670:;
            return $finallyReturn668;
        }
        }
        else {
        panda$core$Bit $tmp672 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp672.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp674 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$141_9598->$data + 0));
            target673 = *$tmp674;
            org$pandalanguage$pandac$Position $tmp677 = (($fn676) target673->$class->vtable[3])(target673);
            $finallyReturn674 = $tmp677;
            $tmp597 = 12;
            goto $l595;
            $l678:;
            return $finallyReturn674;
        }
        }
        else {
        panda$core$Bit $tmp680 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp680.value) {
        {
            org$pandalanguage$pandac$Position* $tmp682 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position681 = *$tmp682;
            $finallyReturn682 = position681;
            $tmp597 = 13;
            goto $l595;
            $l684:;
            return $finallyReturn682;
        }
        }
        else {
        panda$core$Bit $tmp686 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp686.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp688 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$141_9598->$data + 0));
            expr687 = *$tmp688;
            org$pandalanguage$pandac$Position $tmp691 = (($fn690) expr687->$class->vtable[3])(expr687);
            $finallyReturn688 = $tmp691;
            $tmp597 = 14;
            goto $l595;
            $l692:;
            return $finallyReturn688;
        }
        }
        else {
        panda$core$Bit $tmp694 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp694.value) {
        {
            org$pandalanguage$pandac$Position* $tmp696 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position695 = *$tmp696;
            $finallyReturn696 = position695;
            $tmp597 = 15;
            goto $l595;
            $l698:;
            return $finallyReturn696;
        }
        }
        else {
        panda$core$Bit $tmp700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp700.value) {
        {
            org$pandalanguage$pandac$Position* $tmp702 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position701 = *$tmp702;
            $finallyReturn702 = position701;
            $tmp597 = 16;
            goto $l595;
            $l704:;
            return $finallyReturn702;
        }
        }
        else {
        panda$core$Bit $tmp706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp706.value) {
        {
            org$pandalanguage$pandac$Position* $tmp708 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position707 = *$tmp708;
            $finallyReturn708 = position707;
            $tmp597 = 17;
            goto $l595;
            $l710:;
            return $finallyReturn708;
        }
        }
        else {
        panda$core$Bit $tmp712 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp712.value) {
        {
            org$pandalanguage$pandac$Position* $tmp714 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position713 = *$tmp714;
            $finallyReturn714 = position713;
            $tmp597 = 18;
            goto $l595;
            $l716:;
            return $finallyReturn714;
        }
        }
        else {
        panda$core$Bit $tmp718 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp718.value) {
        {
            org$pandalanguage$pandac$Position* $tmp720 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position719 = *$tmp720;
            $finallyReturn720 = position719;
            $tmp597 = 19;
            goto $l595;
            $l722:;
            return $finallyReturn720;
        }
        }
        else {
        panda$core$Bit $tmp724 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp724.value) {
        {
            org$pandalanguage$pandac$Position* $tmp726 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position725 = *$tmp726;
            $finallyReturn726 = position725;
            $tmp597 = 20;
            goto $l595;
            $l728:;
            return $finallyReturn726;
        }
        }
        else {
        panda$core$Bit $tmp730 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp730.value) {
        {
            org$pandalanguage$pandac$Position* $tmp732 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position731 = *$tmp732;
            $finallyReturn732 = position731;
            $tmp597 = 21;
            goto $l595;
            $l734:;
            return $finallyReturn732;
        }
        }
        else {
        panda$core$Bit $tmp736 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp736.value) {
        {
            org$pandalanguage$pandac$Position* $tmp738 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position737 = *$tmp738;
            $finallyReturn738 = position737;
            $tmp597 = 22;
            goto $l595;
            $l740:;
            return $finallyReturn738;
        }
        }
        else {
        panda$core$Bit $tmp742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp742.value) {
        {
            org$pandalanguage$pandac$Position* $tmp744 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position743 = *$tmp744;
            $finallyReturn744 = position743;
            $tmp597 = 23;
            goto $l595;
            $l746:;
            return $finallyReturn744;
        }
        }
        else {
        panda$core$Bit $tmp748 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp748.value) {
        {
            org$pandalanguage$pandac$Position* $tmp750 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position749 = *$tmp750;
            $finallyReturn750 = position749;
            $tmp597 = 24;
            goto $l595;
            $l752:;
            return $finallyReturn750;
        }
        }
        else {
        panda$core$Bit $tmp754 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp754.value) {
        {
            org$pandalanguage$pandac$Position* $tmp756 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position755 = *$tmp756;
            $finallyReturn756 = position755;
            $tmp597 = 25;
            goto $l595;
            $l758:;
            return $finallyReturn756;
        }
        }
        else {
        panda$core$Bit $tmp760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp760.value) {
        {
            org$pandalanguage$pandac$Position* $tmp762 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position761 = *$tmp762;
            $finallyReturn762 = position761;
            $tmp597 = 26;
            goto $l595;
            $l764:;
            return $finallyReturn762;
        }
        }
        else {
        panda$core$Bit $tmp766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp766.value) {
        {
            org$pandalanguage$pandac$Position* $tmp768 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position767 = *$tmp768;
            $finallyReturn768 = position767;
            $tmp597 = 27;
            goto $l595;
            $l770:;
            return $finallyReturn768;
        }
        }
        else {
        panda$core$Bit $tmp772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp772.value) {
        {
            org$pandalanguage$pandac$Position* $tmp774 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position773 = *$tmp774;
            $finallyReturn774 = position773;
            $tmp597 = 28;
            goto $l595;
            $l776:;
            return $finallyReturn774;
        }
        }
        else {
        panda$core$Bit $tmp778 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp778.value) {
        {
            org$pandalanguage$pandac$Position* $tmp780 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position779 = *$tmp780;
            $finallyReturn780 = position779;
            $tmp597 = 29;
            goto $l595;
            $l782:;
            return $finallyReturn780;
        }
        }
        else {
        panda$core$Bit $tmp784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp784.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp786 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$141_9598->$data + 0));
            base785 = *$tmp786;
            org$pandalanguage$pandac$Position $tmp789 = (($fn788) base785->$class->vtable[3])(base785);
            $finallyReturn786 = $tmp789;
            $tmp597 = 30;
            goto $l595;
            $l790:;
            return $finallyReturn786;
        }
        }
        else {
        panda$core$Bit $tmp792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp792.value) {
        {
            org$pandalanguage$pandac$Position* $tmp794 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position793 = *$tmp794;
            $finallyReturn794 = position793;
            $tmp597 = 31;
            goto $l595;
            $l796:;
            return $finallyReturn794;
        }
        }
        else {
        panda$core$Bit $tmp798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp798.value) {
        {
            org$pandalanguage$pandac$Position* $tmp800 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position799 = *$tmp800;
            $finallyReturn800 = position799;
            $tmp597 = 32;
            goto $l595;
            $l802:;
            return $finallyReturn800;
        }
        }
        else {
        panda$core$Bit $tmp804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp804.value) {
        {
            org$pandalanguage$pandac$Position* $tmp806 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position805 = *$tmp806;
            $finallyReturn806 = position805;
            $tmp597 = 33;
            goto $l595;
            $l808:;
            return $finallyReturn806;
        }
        }
        else {
        panda$core$Bit $tmp810 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp810.value) {
        {
            org$pandalanguage$pandac$Position* $tmp812 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position811 = *$tmp812;
            $finallyReturn812 = position811;
            $tmp597 = 34;
            goto $l595;
            $l814:;
            return $finallyReturn812;
        }
        }
        else {
        panda$core$Bit $tmp816 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp816.value) {
        {
            org$pandalanguage$pandac$Position* $tmp818 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position817 = *$tmp818;
            $finallyReturn818 = position817;
            $tmp597 = 35;
            goto $l595;
            $l820:;
            return $finallyReturn818;
        }
        }
        else {
        panda$core$Bit $tmp822 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp822.value) {
        {
            org$pandalanguage$pandac$Position* $tmp824 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position823 = *$tmp824;
            $finallyReturn824 = position823;
            $tmp597 = 36;
            goto $l595;
            $l826:;
            return $finallyReturn824;
        }
        }
        else {
        panda$core$Bit $tmp828 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp828.value) {
        {
            org$pandalanguage$pandac$Position* $tmp830 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position829 = *$tmp830;
            $finallyReturn830 = position829;
            $tmp597 = 37;
            goto $l595;
            $l832:;
            return $finallyReturn830;
        }
        }
        else {
        panda$core$Bit $tmp834 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp834.value) {
        {
            org$pandalanguage$pandac$Position* $tmp836 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position835 = *$tmp836;
            $finallyReturn836 = position835;
            $tmp597 = 38;
            goto $l595;
            $l838:;
            return $finallyReturn836;
        }
        }
        else {
        panda$core$Bit $tmp840 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp840.value) {
        {
            org$pandalanguage$pandac$Position* $tmp842 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position841 = *$tmp842;
            $finallyReturn842 = position841;
            $tmp597 = 39;
            goto $l595;
            $l844:;
            return $finallyReturn842;
        }
        }
        else {
        panda$core$Bit $tmp846 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp846.value) {
        {
            org$pandalanguage$pandac$Position* $tmp848 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position847 = *$tmp848;
            $finallyReturn848 = position847;
            $tmp597 = 40;
            goto $l595;
            $l850:;
            return $finallyReturn848;
        }
        }
        else {
        panda$core$Bit $tmp852 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp852.value) {
        {
            org$pandalanguage$pandac$Position* $tmp854 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position853 = *$tmp854;
            $finallyReturn854 = position853;
            $tmp597 = 41;
            goto $l595;
            $l856:;
            return $finallyReturn854;
        }
        }
        else {
        panda$core$Bit $tmp858 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp858.value) {
        {
            org$pandalanguage$pandac$Position* $tmp860 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position859 = *$tmp860;
            $finallyReturn860 = position859;
            $tmp597 = 42;
            goto $l595;
            $l862:;
            return $finallyReturn860;
        }
        }
        else {
        panda$core$Bit $tmp864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp864.value) {
        {
            org$pandalanguage$pandac$Position* $tmp866 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position865 = *$tmp866;
            $finallyReturn866 = position865;
            $tmp597 = 43;
            goto $l595;
            $l868:;
            return $finallyReturn866;
        }
        }
        else {
        panda$core$Bit $tmp870 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$141_9598->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp870.value) {
        {
            org$pandalanguage$pandac$Position* $tmp872 = ((org$pandalanguage$pandac$Position*) ((char*) $match$141_9598->$data + 0));
            position871 = *$tmp872;
            $finallyReturn872 = position871;
            $tmp597 = 44;
            goto $l595;
            $l874:;
            return $finallyReturn872;
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
    $tmp597 = -1;
    goto $l595;
    $l595:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp599));
    switch ($tmp597) {
        case 12: goto $l678;
        case 9: goto $l658;
        case 15: goto $l698;
        case 24: goto $l752;
        case 6: goto $l640;
        case 10: goto $l664;
        case 27: goto $l770;
        case 23: goto $l746;
        case -1: goto $l876;
        case 38: goto $l838;
        case 17: goto $l710;
        case 4: goto $l628;
        case 41: goto $l856;
        case 35: goto $l820;
        case 39: goto $l844;
        case 42: goto $l862;
        case 0: goto $l604;
        case 16: goto $l704;
        case 5: goto $l634;
        case 43: goto $l868;
        case 28: goto $l776;
        case 31: goto $l796;
        case 1: goto $l610;
        case 32: goto $l802;
        case 14: goto $l692;
        case 7: goto $l646;
        case 34: goto $l814;
        case 19: goto $l722;
        case 29: goto $l782;
        case 11: goto $l670;
        case 22: goto $l740;
        case 18: goto $l716;
        case 25: goto $l758;
        case 33: goto $l808;
        case 3: goto $l622;
        case 2: goto $l616;
        case 30: goto $l790;
        case 26: goto $l764;
        case 37: goto $l832;
        case 13: goto $l684;
        case 21: goto $l734;
        case 8: goto $l652;
        case 36: goto $l826;
        case 20: goto $l728;
        case 44: goto $l874;
        case 40: goto $l850;
    }
    $l876:;
}
panda$core$Bit org$pandalanguage$pandac$IRNode$hasSideEffects$R$panda$core$Bit(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$238_9880;
    org$pandalanguage$pandac$IRNode* $tmp881;
    org$pandalanguage$pandac$IRNode* test883;
    org$pandalanguage$pandac$IRNode* msg885;
    panda$core$Bit $finallyReturn886;
    org$pandalanguage$pandac$IRNode* left898;
    org$pandalanguage$pandac$parser$Token$Kind op900;
    org$pandalanguage$pandac$IRNode* right902;
    panda$core$Bit $finallyReturn903;
    panda$core$Bit bit919;
    panda$core$Bit $finallyReturn920;
    panda$collections$ImmutableArray* statements925;
    panda$collections$Iterator* Iter$246$17930;
    panda$collections$Iterator* $tmp931;
    panda$collections$Iterator* $tmp932;
    org$pandalanguage$pandac$IRNode* s948;
    org$pandalanguage$pandac$IRNode* $tmp949;
    panda$core$Object* $tmp950;
    panda$core$Bit $finallyReturn956;
    panda$core$Bit $finallyReturn963;
    panda$core$String* label968;
    panda$core$Bit $finallyReturn969;
    org$pandalanguage$pandac$MethodRef* m974;
    panda$collections$ImmutableArray* args976;
    panda$core$Bit $finallyReturn978;
    panda$collections$Iterator* Iter$258$17985;
    panda$collections$Iterator* $tmp986;
    panda$collections$Iterator* $tmp987;
    org$pandalanguage$pandac$IRNode* arg1003;
    org$pandalanguage$pandac$IRNode* $tmp1004;
    panda$core$Object* $tmp1005;
    panda$core$Bit $finallyReturn1011;
    panda$core$Bit $finallyReturn1018;
    org$pandalanguage$pandac$IRNode* value1023;
    org$pandalanguage$pandac$Type* type1025;
    panda$core$Bit $finallyReturn1026;
    org$pandalanguage$pandac$ChoiceEntry* ce1031;
    panda$core$Bit $finallyReturn1032;
    org$pandalanguage$pandac$IRNode* base1037;
    org$pandalanguage$pandac$ChoiceEntry* ce1039;
    panda$core$Int64 field1041;
    panda$core$Bit $finallyReturn1042;
    org$pandalanguage$pandac$Type* type1047;
    org$pandalanguage$pandac$IRNode* call1049;
    panda$core$Bit $finallyReturn1050;
    org$pandalanguage$pandac$Type* Type1057;
    panda$core$Bit $finallyReturn1058;
    panda$core$String* label1063;
    panda$core$Bit $finallyReturn1064;
    org$pandalanguage$pandac$IRNode* target1069;
    org$pandalanguage$pandac$IRNode* value1071;
    panda$core$Bit $finallyReturn1072;
    panda$core$String* label1082;
    panda$collections$ImmutableArray* statements1084;
    org$pandalanguage$pandac$IRNode* test1086;
    panda$core$Bit $finallyReturn1089;
    panda$collections$Iterator* Iter$282$171096;
    panda$collections$Iterator* $tmp1097;
    panda$collections$Iterator* $tmp1098;
    org$pandalanguage$pandac$IRNode* s1114;
    org$pandalanguage$pandac$IRNode* $tmp1115;
    panda$core$Object* $tmp1116;
    panda$core$Bit $finallyReturn1122;
    panda$core$Bit $finallyReturn1129;
    panda$core$Bit $finallyReturn1133;
    org$pandalanguage$pandac$IRNode* base1138;
    org$pandalanguage$pandac$FieldDecl* field1140;
    panda$core$Bit $finallyReturn1141;
    org$pandalanguage$pandac$IRNode* test1146;
    panda$collections$ImmutableArray* ifTrue1148;
    org$pandalanguage$pandac$IRNode* ifFalse1150;
    panda$core$Bit $finallyReturn1153;
    panda$collections$Iterator* Iter$296$171160;
    panda$collections$Iterator* $tmp1161;
    panda$collections$Iterator* $tmp1162;
    org$pandalanguage$pandac$IRNode* s1178;
    org$pandalanguage$pandac$IRNode* $tmp1179;
    panda$core$Object* $tmp1180;
    panda$core$Bit $finallyReturn1186;
    panda$core$Bit $finallyReturn1193;
    panda$core$UInt64 value1200;
    panda$core$Bit $finallyReturn1201;
    org$pandalanguage$pandac$IRNode* value1206;
    panda$core$Bit $finallyReturn1207;
    org$pandalanguage$pandac$IRNode* value1214;
    panda$core$Bit $finallyReturn1215;
    panda$core$String* label1222;
    panda$collections$ImmutableArray* statements1224;
    panda$collections$Iterator* Iter$309$171229;
    panda$collections$Iterator* $tmp1230;
    panda$collections$Iterator* $tmp1231;
    org$pandalanguage$pandac$IRNode* s1247;
    org$pandalanguage$pandac$IRNode* $tmp1248;
    panda$core$Object* $tmp1249;
    panda$core$Bit $finallyReturn1255;
    panda$core$Bit $finallyReturn1262;
    org$pandalanguage$pandac$IRNode* value1267;
    panda$collections$ImmutableArray* whens1269;
    panda$collections$ImmutableArray* other1271;
    panda$core$Bit $finallyReturn1274;
    panda$collections$Iterator* Iter$319$171281;
    panda$collections$Iterator* $tmp1282;
    panda$collections$Iterator* $tmp1283;
    org$pandalanguage$pandac$IRNode* w1299;
    org$pandalanguage$pandac$IRNode* $tmp1300;
    panda$core$Object* $tmp1301;
    panda$core$Bit $finallyReturn1307;
    panda$collections$Iterator* Iter$324$171318;
    panda$collections$Iterator* $tmp1319;
    panda$collections$Iterator* $tmp1320;
    org$pandalanguage$pandac$IRNode* s1336;
    org$pandalanguage$pandac$IRNode* $tmp1337;
    panda$core$Object* $tmp1338;
    panda$core$Bit $finallyReturn1344;
    panda$core$Bit $finallyReturn1351;
    org$pandalanguage$pandac$IRNode* target1356;
    org$pandalanguage$pandac$MethodRef* m1358;
    panda$core$Bit $finallyReturn1359;
    panda$core$UInt64 value1364;
    panda$core$Bit $finallyReturn1365;
    panda$core$Bit $finallyReturn1369;
    org$pandalanguage$pandac$parser$Token$Kind op1374;
    org$pandalanguage$pandac$IRNode* base1376;
    panda$core$Bit $finallyReturn1377;
    panda$core$String* label1384;
    org$pandalanguage$pandac$IRNode* target1386;
    org$pandalanguage$pandac$IRNode* list1388;
    panda$collections$ImmutableArray* statements1390;
    panda$core$Bit $finallyReturn1393;
    panda$collections$Iterator* Iter$343$171400;
    panda$collections$Iterator* $tmp1401;
    panda$collections$Iterator* $tmp1402;
    org$pandalanguage$pandac$IRNode* s1418;
    org$pandalanguage$pandac$IRNode* $tmp1419;
    panda$core$Object* $tmp1420;
    panda$core$Bit $finallyReturn1426;
    panda$core$Bit $finallyReturn1433;
    panda$core$Real64 value1438;
    panda$core$Bit $finallyReturn1439;
    org$pandalanguage$pandac$IRNode* value1444;
    panda$core$Bit $finallyReturn1445;
    panda$core$Int64 id1452;
    panda$core$Bit $finallyReturn1453;
    org$pandalanguage$pandac$IRNode* base1458;
    panda$core$Int64 id1460;
    panda$core$Bit $finallyReturn1461;
    panda$core$Bit $finallyReturn1467;
    panda$core$String* str1472;
    panda$core$Bit $finallyReturn1473;
    panda$core$Bit $finallyReturn1477;
    org$pandalanguage$pandac$IRNode* test1482;
    org$pandalanguage$pandac$IRNode* ifTrue1484;
    org$pandalanguage$pandac$IRNode* ifFalse1486;
    panda$core$Bit $finallyReturn1487;
    org$pandalanguage$pandac$Type* type1504;
    panda$core$Bit $finallyReturn1505;
    panda$core$String* name1510;
    org$pandalanguage$pandac$IRNode* base1513;
    panda$collections$ImmutableArray* args1515;
    org$pandalanguage$pandac$IRNode* target1518;
    panda$collections$ImmutableArray* methods1520;
    panda$collections$ImmutableArray* args1522;
    org$pandalanguage$pandac$IRNode* target1525;
    panda$collections$ImmutableArray* methods1527;
    org$pandalanguage$pandac$IRNode* start1530;
    org$pandalanguage$pandac$IRNode* end1532;
    panda$core$Bit inclusive1534;
    org$pandalanguage$pandac$IRNode* step1536;
    org$pandalanguage$pandac$Variable$Kind kind1539;
    panda$collections$ImmutableArray* decls1541;
    panda$collections$Iterator* Iter$378$171546;
    panda$collections$Iterator* $tmp1547;
    panda$collections$Iterator* $tmp1548;
    org$pandalanguage$pandac$IRNode* d1564;
    org$pandalanguage$pandac$IRNode* $tmp1565;
    panda$core$Object* $tmp1566;
    panda$core$Bit $finallyReturn1572;
    panda$core$Bit $finallyReturn1579;
    org$pandalanguage$pandac$Variable* variable1584;
    panda$core$Bit $finallyReturn1585;
    panda$collections$ImmutableArray* tests1590;
    panda$collections$ImmutableArray* statements1592;
    panda$collections$Iterator* Iter$387$171597;
    panda$collections$Iterator* $tmp1598;
    panda$collections$Iterator* $tmp1599;
    org$pandalanguage$pandac$IRNode* t1615;
    org$pandalanguage$pandac$IRNode* $tmp1616;
    panda$core$Object* $tmp1617;
    panda$core$Bit $finallyReturn1623;
    panda$collections$Iterator* Iter$392$171634;
    panda$collections$Iterator* $tmp1635;
    panda$collections$Iterator* $tmp1636;
    org$pandalanguage$pandac$IRNode* s1652;
    org$pandalanguage$pandac$IRNode* $tmp1653;
    panda$core$Object* $tmp1654;
    panda$core$Bit $finallyReturn1660;
    panda$core$Bit $finallyReturn1667;
    panda$core$String* label1672;
    org$pandalanguage$pandac$IRNode* test1674;
    panda$collections$ImmutableArray* statements1676;
    panda$core$Bit $finallyReturn1679;
    panda$collections$Iterator* Iter$402$171686;
    panda$collections$Iterator* $tmp1687;
    panda$collections$Iterator* $tmp1688;
    org$pandalanguage$pandac$IRNode* s1704;
    org$pandalanguage$pandac$IRNode* $tmp1705;
    panda$core$Object* $tmp1706;
    panda$core$Bit $finallyReturn1712;
    panda$core$Bit $finallyReturn1719;
    int $tmp879;
    {
        $tmp881 = self;
        $match$238_9880 = $tmp881;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp881));
        panda$core$Bit $tmp882 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp882.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp884 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9880->$data + 16));
            test883 = *$tmp884;
            org$pandalanguage$pandac$IRNode** $tmp886 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9880->$data + 24));
            msg885 = *$tmp886;
            panda$core$Bit $tmp890 = (($fn889) test883->$class->vtable[4])(test883);
            bool $tmp888 = $tmp890.value;
            if ($tmp888) goto $l891;
            panda$core$Bit $tmp893 = (($fn892) msg885->$class->vtable[4])(msg885);
            $tmp888 = $tmp893.value;
            $l891:;
            panda$core$Bit $tmp894 = { $tmp888 };
            $finallyReturn886 = $tmp894;
            $tmp879 = 0;
            goto $l877;
            $l895:;
            return $finallyReturn886;
        }
        }
        else {
        panda$core$Bit $tmp897 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp897.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp899 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9880->$data + 24));
            left898 = *$tmp899;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp901 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$238_9880->$data + 32));
            op900 = *$tmp901;
            org$pandalanguage$pandac$IRNode** $tmp903 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9880->$data + 40));
            right902 = *$tmp903;
            panda$core$Bit $tmp907 = org$pandalanguage$pandac$Compiler$isAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$Bit(op900);
            bool $tmp906 = $tmp907.value;
            if ($tmp906) goto $l908;
            panda$core$Bit $tmp910 = (($fn909) left898->$class->vtable[4])(left898);
            $tmp906 = $tmp910.value;
            $l908:;
            panda$core$Bit $tmp911 = { $tmp906 };
            bool $tmp905 = $tmp911.value;
            if ($tmp905) goto $l912;
            panda$core$Bit $tmp914 = (($fn913) right902->$class->vtable[4])(right902);
            $tmp905 = $tmp914.value;
            $l912:;
            panda$core$Bit $tmp915 = { $tmp905 };
            $finallyReturn903 = $tmp915;
            $tmp879 = 1;
            goto $l877;
            $l916:;
            return $finallyReturn903;
        }
        }
        else {
        panda$core$Bit $tmp918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp918.value) {
        {
            panda$core$Bit* $tmp920 = ((panda$core$Bit*) ((char*) $match$238_9880->$data + 24));
            bit919 = *$tmp920;
            $finallyReturn920 = ((panda$core$Bit) { false });
            $tmp879 = 2;
            goto $l877;
            $l922:;
            return $finallyReturn920;
        }
        }
        else {
        panda$core$Bit $tmp924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp924.value) {
        {
            panda$collections$ImmutableArray** $tmp926 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9880->$data + 16));
            statements925 = *$tmp926;
            {
                int $tmp929;
                {
                    ITable* $tmp933 = ((panda$collections$Iterable*) statements925)->$class->itable;
                    while ($tmp933->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp933 = $tmp933->next;
                    }
                    $fn935 $tmp934 = $tmp933->methods[0];
                    panda$collections$Iterator* $tmp936 = $tmp934(((panda$collections$Iterable*) statements925));
                    $tmp932 = $tmp936;
                    $tmp931 = $tmp932;
                    Iter$246$17930 = $tmp931;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp931));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp932));
                    $l937:;
                    ITable* $tmp940 = Iter$246$17930->$class->itable;
                    while ($tmp940->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp940 = $tmp940->next;
                    }
                    $fn942 $tmp941 = $tmp940->methods[0];
                    panda$core$Bit $tmp943 = $tmp941(Iter$246$17930);
                    panda$core$Bit $tmp944 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp943);
                    bool $tmp939 = $tmp944.value;
                    if (!$tmp939) goto $l938;
                    {
                        int $tmp947;
                        {
                            ITable* $tmp951 = Iter$246$17930->$class->itable;
                            while ($tmp951->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp951 = $tmp951->next;
                            }
                            $fn953 $tmp952 = $tmp951->methods[1];
                            panda$core$Object* $tmp954 = $tmp952(Iter$246$17930);
                            $tmp950 = $tmp954;
                            $tmp949 = ((org$pandalanguage$pandac$IRNode*) $tmp950);
                            s948 = $tmp949;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp949));
                            panda$core$Panda$unref$panda$core$Object($tmp950);
                            panda$core$Bit $tmp956 = (($fn955) s948->$class->vtable[4])(s948);
                            if ($tmp956.value) {
                            {
                                $finallyReturn956 = ((panda$core$Bit) { true });
                                $tmp947 = 0;
                                goto $l945;
                                $l958:;
                                $tmp929 = 0;
                                goto $l927;
                                $l959:;
                                $tmp879 = 3;
                                goto $l877;
                                $l960:;
                                return $finallyReturn956;
                            }
                            }
                        }
                        $tmp947 = -1;
                        goto $l945;
                        $l945:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s948));
                        switch ($tmp947) {
                            case 0: goto $l958;
                            case -1: goto $l962;
                        }
                        $l962:;
                    }
                    goto $l937;
                    $l938:;
                }
                $tmp929 = -1;
                goto $l927;
                $l927:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$246$17930));
                switch ($tmp929) {
                    case -1: goto $l963;
                    case 0: goto $l959;
                }
                $l963:;
            }
            $finallyReturn963 = ((panda$core$Bit) { false });
            $tmp879 = 4;
            goto $l877;
            $l965:;
            return $finallyReturn963;
        }
        }
        else {
        panda$core$Bit $tmp967 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp967.value) {
        {
            panda$core$String** $tmp969 = ((panda$core$String**) ((char*) $match$238_9880->$data + 16));
            label968 = *$tmp969;
            $finallyReturn969 = ((panda$core$Bit) { false });
            $tmp879 = 5;
            goto $l877;
            $l971:;
            return $finallyReturn969;
        }
        }
        else {
        panda$core$Bit $tmp973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp973.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp975 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$238_9880->$data + 24));
            m974 = *$tmp975;
            panda$collections$ImmutableArray** $tmp977 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9880->$data + 32));
            args976 = *$tmp977;
            panda$core$Bit $tmp978 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m974->value->methodKind.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp978.value) {
            {
                $finallyReturn978 = ((panda$core$Bit) { true });
                $tmp879 = 6;
                goto $l877;
                $l980:;
                return $finallyReturn978;
            }
            }
            {
                int $tmp984;
                {
                    ITable* $tmp988 = ((panda$collections$Iterable*) args976)->$class->itable;
                    while ($tmp988->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp988 = $tmp988->next;
                    }
                    $fn990 $tmp989 = $tmp988->methods[0];
                    panda$collections$Iterator* $tmp991 = $tmp989(((panda$collections$Iterable*) args976));
                    $tmp987 = $tmp991;
                    $tmp986 = $tmp987;
                    Iter$258$17985 = $tmp986;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp986));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp987));
                    $l992:;
                    ITable* $tmp995 = Iter$258$17985->$class->itable;
                    while ($tmp995->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp995 = $tmp995->next;
                    }
                    $fn997 $tmp996 = $tmp995->methods[0];
                    panda$core$Bit $tmp998 = $tmp996(Iter$258$17985);
                    panda$core$Bit $tmp999 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp998);
                    bool $tmp994 = $tmp999.value;
                    if (!$tmp994) goto $l993;
                    {
                        int $tmp1002;
                        {
                            ITable* $tmp1006 = Iter$258$17985->$class->itable;
                            while ($tmp1006->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1006 = $tmp1006->next;
                            }
                            $fn1008 $tmp1007 = $tmp1006->methods[1];
                            panda$core$Object* $tmp1009 = $tmp1007(Iter$258$17985);
                            $tmp1005 = $tmp1009;
                            $tmp1004 = ((org$pandalanguage$pandac$IRNode*) $tmp1005);
                            arg1003 = $tmp1004;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1004));
                            panda$core$Panda$unref$panda$core$Object($tmp1005);
                            panda$core$Bit $tmp1011 = (($fn1010) arg1003->$class->vtable[4])(arg1003);
                            if ($tmp1011.value) {
                            {
                                $finallyReturn1011 = ((panda$core$Bit) { true });
                                $tmp1002 = 0;
                                goto $l1000;
                                $l1013:;
                                $tmp984 = 0;
                                goto $l982;
                                $l1014:;
                                $tmp879 = 7;
                                goto $l877;
                                $l1015:;
                                return $finallyReturn1011;
                            }
                            }
                        }
                        $tmp1002 = -1;
                        goto $l1000;
                        $l1000:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg1003));
                        switch ($tmp1002) {
                            case 0: goto $l1013;
                            case -1: goto $l1017;
                        }
                        $l1017:;
                    }
                    goto $l992;
                    $l993:;
                }
                $tmp984 = -1;
                goto $l982;
                $l982:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$258$17985));
                switch ($tmp984) {
                    case 0: goto $l1014;
                    case -1: goto $l1018;
                }
                $l1018:;
            }
            $finallyReturn1018 = ((panda$core$Bit) { false });
            $tmp879 = 8;
            goto $l877;
            $l1020:;
            return $finallyReturn1018;
        }
        }
        else {
        panda$core$Bit $tmp1022 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp1022.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1024 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9880->$data + 16));
            value1023 = *$tmp1024;
            org$pandalanguage$pandac$Type** $tmp1026 = ((org$pandalanguage$pandac$Type**) ((char*) $match$238_9880->$data + 24));
            type1025 = *$tmp1026;
            $finallyReturn1026 = ((panda$core$Bit) { false });
            $tmp879 = 9;
            goto $l877;
            $l1028:;
            return $finallyReturn1026;
        }
        }
        else {
        panda$core$Bit $tmp1030 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp1030.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp1032 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$238_9880->$data + 16));
            ce1031 = *$tmp1032;
            $finallyReturn1032 = ((panda$core$Bit) { false });
            $tmp879 = 10;
            goto $l877;
            $l1034:;
            return $finallyReturn1032;
        }
        }
        else {
        panda$core$Bit $tmp1036 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp1036.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1038 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9880->$data + 16));
            base1037 = *$tmp1038;
            org$pandalanguage$pandac$ChoiceEntry** $tmp1040 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$238_9880->$data + 24));
            ce1039 = *$tmp1040;
            panda$core$Int64* $tmp1042 = ((panda$core$Int64*) ((char*) $match$238_9880->$data + 32));
            field1041 = *$tmp1042;
            $finallyReturn1042 = ((panda$core$Bit) { false });
            $tmp879 = 11;
            goto $l877;
            $l1044:;
            return $finallyReturn1042;
        }
        }
        else {
        panda$core$Bit $tmp1046 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp1046.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1048 = ((org$pandalanguage$pandac$Type**) ((char*) $match$238_9880->$data + 16));
            type1047 = *$tmp1048;
            org$pandalanguage$pandac$IRNode** $tmp1050 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9880->$data + 24));
            call1049 = *$tmp1050;
            panda$core$Bit $tmp1053 = (($fn1052) call1049->$class->vtable[4])(call1049);
            $finallyReturn1050 = $tmp1053;
            $tmp879 = 12;
            goto $l877;
            $l1054:;
            return $finallyReturn1050;
        }
        }
        else {
        panda$core$Bit $tmp1056 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1056.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1058 = ((org$pandalanguage$pandac$Type**) ((char*) $match$238_9880->$data + 16));
            Type1057 = *$tmp1058;
            $finallyReturn1058 = ((panda$core$Bit) { false });
            $tmp879 = 13;
            goto $l877;
            $l1060:;
            return $finallyReturn1058;
        }
        }
        else {
        panda$core$Bit $tmp1062 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp1062.value) {
        {
            panda$core$String** $tmp1064 = ((panda$core$String**) ((char*) $match$238_9880->$data + 16));
            label1063 = *$tmp1064;
            $finallyReturn1064 = ((panda$core$Bit) { false });
            $tmp879 = 14;
            goto $l877;
            $l1066:;
            return $finallyReturn1064;
        }
        }
        else {
        panda$core$Bit $tmp1068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp1068.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1070 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9880->$data + 0));
            target1069 = *$tmp1070;
            org$pandalanguage$pandac$IRNode** $tmp1072 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9880->$data + 8));
            value1071 = *$tmp1072;
            bool $tmp1074 = ((panda$core$Bit) { value1071 != NULL }).value;
            if (!$tmp1074) goto $l1075;
            panda$core$Bit $tmp1077 = (($fn1076) value1071->$class->vtable[4])(value1071);
            $tmp1074 = $tmp1077.value;
            $l1075:;
            panda$core$Bit $tmp1078 = { $tmp1074 };
            $finallyReturn1072 = $tmp1078;
            $tmp879 = 15;
            goto $l877;
            $l1079:;
            return $finallyReturn1072;
        }
        }
        else {
        panda$core$Bit $tmp1081 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp1081.value) {
        {
            panda$core$String** $tmp1083 = ((panda$core$String**) ((char*) $match$238_9880->$data + 16));
            label1082 = *$tmp1083;
            panda$collections$ImmutableArray** $tmp1085 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9880->$data + 24));
            statements1084 = *$tmp1085;
            org$pandalanguage$pandac$IRNode** $tmp1087 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9880->$data + 32));
            test1086 = *$tmp1087;
            panda$core$Bit $tmp1089 = (($fn1088) test1086->$class->vtable[4])(test1086);
            if ($tmp1089.value) {
            {
                $finallyReturn1089 = ((panda$core$Bit) { true });
                $tmp879 = 16;
                goto $l877;
                $l1091:;
                return $finallyReturn1089;
            }
            }
            {
                int $tmp1095;
                {
                    ITable* $tmp1099 = ((panda$collections$Iterable*) statements1084)->$class->itable;
                    while ($tmp1099->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1099 = $tmp1099->next;
                    }
                    $fn1101 $tmp1100 = $tmp1099->methods[0];
                    panda$collections$Iterator* $tmp1102 = $tmp1100(((panda$collections$Iterable*) statements1084));
                    $tmp1098 = $tmp1102;
                    $tmp1097 = $tmp1098;
                    Iter$282$171096 = $tmp1097;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1097));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1098));
                    $l1103:;
                    ITable* $tmp1106 = Iter$282$171096->$class->itable;
                    while ($tmp1106->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1106 = $tmp1106->next;
                    }
                    $fn1108 $tmp1107 = $tmp1106->methods[0];
                    panda$core$Bit $tmp1109 = $tmp1107(Iter$282$171096);
                    panda$core$Bit $tmp1110 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1109);
                    bool $tmp1105 = $tmp1110.value;
                    if (!$tmp1105) goto $l1104;
                    {
                        int $tmp1113;
                        {
                            ITable* $tmp1117 = Iter$282$171096->$class->itable;
                            while ($tmp1117->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1117 = $tmp1117->next;
                            }
                            $fn1119 $tmp1118 = $tmp1117->methods[1];
                            panda$core$Object* $tmp1120 = $tmp1118(Iter$282$171096);
                            $tmp1116 = $tmp1120;
                            $tmp1115 = ((org$pandalanguage$pandac$IRNode*) $tmp1116);
                            s1114 = $tmp1115;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1115));
                            panda$core$Panda$unref$panda$core$Object($tmp1116);
                            panda$core$Bit $tmp1122 = (($fn1121) s1114->$class->vtable[4])(s1114);
                            if ($tmp1122.value) {
                            {
                                $finallyReturn1122 = ((panda$core$Bit) { true });
                                $tmp1113 = 0;
                                goto $l1111;
                                $l1124:;
                                $tmp1095 = 0;
                                goto $l1093;
                                $l1125:;
                                $tmp879 = 17;
                                goto $l877;
                                $l1126:;
                                return $finallyReturn1122;
                            }
                            }
                        }
                        $tmp1113 = -1;
                        goto $l1111;
                        $l1111:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1114));
                        switch ($tmp1113) {
                            case 0: goto $l1124;
                            case -1: goto $l1128;
                        }
                        $l1128:;
                    }
                    goto $l1103;
                    $l1104:;
                }
                $tmp1095 = -1;
                goto $l1093;
                $l1093:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$282$171096));
                switch ($tmp1095) {
                    case 0: goto $l1125;
                    case -1: goto $l1129;
                }
                $l1129:;
            }
            $finallyReturn1129 = ((panda$core$Bit) { false });
            $tmp879 = 18;
            goto $l877;
            $l1131:;
            return $finallyReturn1129;
        }
        }
        else {
        panda$core$Bit $tmp1133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1133.value) {
        {
            $finallyReturn1133 = ((panda$core$Bit) { true });
            $tmp879 = 19;
            goto $l877;
            $l1135:;
            return $finallyReturn1133;
        }
        }
        else {
        panda$core$Bit $tmp1137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp1137.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1139 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9880->$data + 24));
            base1138 = *$tmp1139;
            org$pandalanguage$pandac$FieldDecl** $tmp1141 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$238_9880->$data + 32));
            field1140 = *$tmp1141;
            $finallyReturn1141 = ((panda$core$Bit) { false });
            $tmp879 = 20;
            goto $l877;
            $l1143:;
            return $finallyReturn1141;
        }
        }
        else {
        panda$core$Bit $tmp1145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp1145.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1147 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9880->$data + 16));
            test1146 = *$tmp1147;
            panda$collections$ImmutableArray** $tmp1149 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9880->$data + 24));
            ifTrue1148 = *$tmp1149;
            org$pandalanguage$pandac$IRNode** $tmp1151 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9880->$data + 32));
            ifFalse1150 = *$tmp1151;
            panda$core$Bit $tmp1153 = (($fn1152) test1146->$class->vtable[4])(test1146);
            if ($tmp1153.value) {
            {
                $finallyReturn1153 = ((panda$core$Bit) { true });
                $tmp879 = 21;
                goto $l877;
                $l1155:;
                return $finallyReturn1153;
            }
            }
            {
                int $tmp1159;
                {
                    ITable* $tmp1163 = ((panda$collections$Iterable*) ifTrue1148)->$class->itable;
                    while ($tmp1163->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1163 = $tmp1163->next;
                    }
                    $fn1165 $tmp1164 = $tmp1163->methods[0];
                    panda$collections$Iterator* $tmp1166 = $tmp1164(((panda$collections$Iterable*) ifTrue1148));
                    $tmp1162 = $tmp1166;
                    $tmp1161 = $tmp1162;
                    Iter$296$171160 = $tmp1161;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1161));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1162));
                    $l1167:;
                    ITable* $tmp1170 = Iter$296$171160->$class->itable;
                    while ($tmp1170->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1170 = $tmp1170->next;
                    }
                    $fn1172 $tmp1171 = $tmp1170->methods[0];
                    panda$core$Bit $tmp1173 = $tmp1171(Iter$296$171160);
                    panda$core$Bit $tmp1174 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1173);
                    bool $tmp1169 = $tmp1174.value;
                    if (!$tmp1169) goto $l1168;
                    {
                        int $tmp1177;
                        {
                            ITable* $tmp1181 = Iter$296$171160->$class->itable;
                            while ($tmp1181->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1181 = $tmp1181->next;
                            }
                            $fn1183 $tmp1182 = $tmp1181->methods[1];
                            panda$core$Object* $tmp1184 = $tmp1182(Iter$296$171160);
                            $tmp1180 = $tmp1184;
                            $tmp1179 = ((org$pandalanguage$pandac$IRNode*) $tmp1180);
                            s1178 = $tmp1179;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1179));
                            panda$core$Panda$unref$panda$core$Object($tmp1180);
                            panda$core$Bit $tmp1186 = (($fn1185) s1178->$class->vtable[4])(s1178);
                            if ($tmp1186.value) {
                            {
                                $finallyReturn1186 = ((panda$core$Bit) { true });
                                $tmp1177 = 0;
                                goto $l1175;
                                $l1188:;
                                $tmp1159 = 0;
                                goto $l1157;
                                $l1189:;
                                $tmp879 = 22;
                                goto $l877;
                                $l1190:;
                                return $finallyReturn1186;
                            }
                            }
                        }
                        $tmp1177 = -1;
                        goto $l1175;
                        $l1175:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1178));
                        switch ($tmp1177) {
                            case -1: goto $l1192;
                            case 0: goto $l1188;
                        }
                        $l1192:;
                    }
                    goto $l1167;
                    $l1168:;
                }
                $tmp1159 = -1;
                goto $l1157;
                $l1157:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$296$171160));
                switch ($tmp1159) {
                    case 0: goto $l1189;
                    case -1: goto $l1193;
                }
                $l1193:;
            }
            panda$core$Bit $tmp1196 = (($fn1195) ifFalse1150->$class->vtable[4])(ifFalse1150);
            $finallyReturn1193 = $tmp1196;
            $tmp879 = 23;
            goto $l877;
            $l1197:;
            return $finallyReturn1193;
        }
        }
        else {
        panda$core$Bit $tmp1199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp1199.value) {
        {
            panda$core$UInt64* $tmp1201 = ((panda$core$UInt64*) ((char*) $match$238_9880->$data + 24));
            value1200 = *$tmp1201;
            $finallyReturn1201 = ((panda$core$Bit) { false });
            $tmp879 = 24;
            goto $l877;
            $l1203:;
            return $finallyReturn1201;
        }
        }
        else {
        panda$core$Bit $tmp1205 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp1205.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1207 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9880->$data + 16));
            value1206 = *$tmp1207;
            panda$core$Bit $tmp1210 = (($fn1209) value1206->$class->vtable[4])(value1206);
            $finallyReturn1207 = $tmp1210;
            $tmp879 = 25;
            goto $l877;
            $l1211:;
            return $finallyReturn1207;
        }
        }
        else {
        panda$core$Bit $tmp1213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp1213.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1215 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9880->$data + 16));
            value1214 = *$tmp1215;
            panda$core$Bit $tmp1218 = (($fn1217) value1214->$class->vtable[4])(value1214);
            $finallyReturn1215 = $tmp1218;
            $tmp879 = 26;
            goto $l877;
            $l1219:;
            return $finallyReturn1215;
        }
        }
        else {
        panda$core$Bit $tmp1221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp1221.value) {
        {
            panda$core$String** $tmp1223 = ((panda$core$String**) ((char*) $match$238_9880->$data + 16));
            label1222 = *$tmp1223;
            panda$collections$ImmutableArray** $tmp1225 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9880->$data + 24));
            statements1224 = *$tmp1225;
            {
                int $tmp1228;
                {
                    ITable* $tmp1232 = ((panda$collections$Iterable*) statements1224)->$class->itable;
                    while ($tmp1232->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1232 = $tmp1232->next;
                    }
                    $fn1234 $tmp1233 = $tmp1232->methods[0];
                    panda$collections$Iterator* $tmp1235 = $tmp1233(((panda$collections$Iterable*) statements1224));
                    $tmp1231 = $tmp1235;
                    $tmp1230 = $tmp1231;
                    Iter$309$171229 = $tmp1230;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1230));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1231));
                    $l1236:;
                    ITable* $tmp1239 = Iter$309$171229->$class->itable;
                    while ($tmp1239->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1239 = $tmp1239->next;
                    }
                    $fn1241 $tmp1240 = $tmp1239->methods[0];
                    panda$core$Bit $tmp1242 = $tmp1240(Iter$309$171229);
                    panda$core$Bit $tmp1243 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1242);
                    bool $tmp1238 = $tmp1243.value;
                    if (!$tmp1238) goto $l1237;
                    {
                        int $tmp1246;
                        {
                            ITable* $tmp1250 = Iter$309$171229->$class->itable;
                            while ($tmp1250->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1250 = $tmp1250->next;
                            }
                            $fn1252 $tmp1251 = $tmp1250->methods[1];
                            panda$core$Object* $tmp1253 = $tmp1251(Iter$309$171229);
                            $tmp1249 = $tmp1253;
                            $tmp1248 = ((org$pandalanguage$pandac$IRNode*) $tmp1249);
                            s1247 = $tmp1248;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1248));
                            panda$core$Panda$unref$panda$core$Object($tmp1249);
                            panda$core$Bit $tmp1255 = (($fn1254) s1247->$class->vtable[4])(s1247);
                            if ($tmp1255.value) {
                            {
                                $finallyReturn1255 = ((panda$core$Bit) { true });
                                $tmp1246 = 0;
                                goto $l1244;
                                $l1257:;
                                $tmp1228 = 0;
                                goto $l1226;
                                $l1258:;
                                $tmp879 = 27;
                                goto $l877;
                                $l1259:;
                                return $finallyReturn1255;
                            }
                            }
                        }
                        $tmp1246 = -1;
                        goto $l1244;
                        $l1244:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1247));
                        switch ($tmp1246) {
                            case 0: goto $l1257;
                            case -1: goto $l1261;
                        }
                        $l1261:;
                    }
                    goto $l1236;
                    $l1237:;
                }
                $tmp1228 = -1;
                goto $l1226;
                $l1226:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$309$171229));
                switch ($tmp1228) {
                    case -1: goto $l1262;
                    case 0: goto $l1258;
                }
                $l1262:;
            }
            $finallyReturn1262 = ((panda$core$Bit) { false });
            $tmp879 = 28;
            goto $l877;
            $l1264:;
            return $finallyReturn1262;
        }
        }
        else {
        panda$core$Bit $tmp1266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1266.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1268 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9880->$data + 16));
            value1267 = *$tmp1268;
            panda$collections$ImmutableArray** $tmp1270 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9880->$data + 24));
            whens1269 = *$tmp1270;
            panda$collections$ImmutableArray** $tmp1272 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9880->$data + 32));
            other1271 = *$tmp1272;
            panda$core$Bit $tmp1274 = (($fn1273) value1267->$class->vtable[4])(value1267);
            if ($tmp1274.value) {
            {
                $finallyReturn1274 = ((panda$core$Bit) { true });
                $tmp879 = 29;
                goto $l877;
                $l1276:;
                return $finallyReturn1274;
            }
            }
            {
                int $tmp1280;
                {
                    ITable* $tmp1284 = ((panda$collections$Iterable*) whens1269)->$class->itable;
                    while ($tmp1284->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1284 = $tmp1284->next;
                    }
                    $fn1286 $tmp1285 = $tmp1284->methods[0];
                    panda$collections$Iterator* $tmp1287 = $tmp1285(((panda$collections$Iterable*) whens1269));
                    $tmp1283 = $tmp1287;
                    $tmp1282 = $tmp1283;
                    Iter$319$171281 = $tmp1282;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1282));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1283));
                    $l1288:;
                    ITable* $tmp1291 = Iter$319$171281->$class->itable;
                    while ($tmp1291->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1291 = $tmp1291->next;
                    }
                    $fn1293 $tmp1292 = $tmp1291->methods[0];
                    panda$core$Bit $tmp1294 = $tmp1292(Iter$319$171281);
                    panda$core$Bit $tmp1295 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1294);
                    bool $tmp1290 = $tmp1295.value;
                    if (!$tmp1290) goto $l1289;
                    {
                        int $tmp1298;
                        {
                            ITable* $tmp1302 = Iter$319$171281->$class->itable;
                            while ($tmp1302->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1302 = $tmp1302->next;
                            }
                            $fn1304 $tmp1303 = $tmp1302->methods[1];
                            panda$core$Object* $tmp1305 = $tmp1303(Iter$319$171281);
                            $tmp1301 = $tmp1305;
                            $tmp1300 = ((org$pandalanguage$pandac$IRNode*) $tmp1301);
                            w1299 = $tmp1300;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1300));
                            panda$core$Panda$unref$panda$core$Object($tmp1301);
                            panda$core$Bit $tmp1307 = (($fn1306) w1299->$class->vtable[4])(w1299);
                            if ($tmp1307.value) {
                            {
                                $finallyReturn1307 = ((panda$core$Bit) { true });
                                $tmp1298 = 0;
                                goto $l1296;
                                $l1309:;
                                $tmp1280 = 0;
                                goto $l1278;
                                $l1310:;
                                $tmp879 = 30;
                                goto $l877;
                                $l1311:;
                                return $finallyReturn1307;
                            }
                            }
                        }
                        $tmp1298 = -1;
                        goto $l1296;
                        $l1296:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w1299));
                        switch ($tmp1298) {
                            case 0: goto $l1309;
                            case -1: goto $l1313;
                        }
                        $l1313:;
                    }
                    goto $l1288;
                    $l1289:;
                }
                $tmp1280 = -1;
                goto $l1278;
                $l1278:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$319$171281));
                switch ($tmp1280) {
                    case -1: goto $l1314;
                    case 0: goto $l1310;
                }
                $l1314:;
            }
            {
                int $tmp1317;
                {
                    ITable* $tmp1321 = ((panda$collections$Iterable*) other1271)->$class->itable;
                    while ($tmp1321->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1321 = $tmp1321->next;
                    }
                    $fn1323 $tmp1322 = $tmp1321->methods[0];
                    panda$collections$Iterator* $tmp1324 = $tmp1322(((panda$collections$Iterable*) other1271));
                    $tmp1320 = $tmp1324;
                    $tmp1319 = $tmp1320;
                    Iter$324$171318 = $tmp1319;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1319));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1320));
                    $l1325:;
                    ITable* $tmp1328 = Iter$324$171318->$class->itable;
                    while ($tmp1328->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1328 = $tmp1328->next;
                    }
                    $fn1330 $tmp1329 = $tmp1328->methods[0];
                    panda$core$Bit $tmp1331 = $tmp1329(Iter$324$171318);
                    panda$core$Bit $tmp1332 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1331);
                    bool $tmp1327 = $tmp1332.value;
                    if (!$tmp1327) goto $l1326;
                    {
                        int $tmp1335;
                        {
                            ITable* $tmp1339 = Iter$324$171318->$class->itable;
                            while ($tmp1339->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1339 = $tmp1339->next;
                            }
                            $fn1341 $tmp1340 = $tmp1339->methods[1];
                            panda$core$Object* $tmp1342 = $tmp1340(Iter$324$171318);
                            $tmp1338 = $tmp1342;
                            $tmp1337 = ((org$pandalanguage$pandac$IRNode*) $tmp1338);
                            s1336 = $tmp1337;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1337));
                            panda$core$Panda$unref$panda$core$Object($tmp1338);
                            panda$core$Bit $tmp1344 = (($fn1343) s1336->$class->vtable[4])(s1336);
                            if ($tmp1344.value) {
                            {
                                $finallyReturn1344 = ((panda$core$Bit) { true });
                                $tmp1335 = 0;
                                goto $l1333;
                                $l1346:;
                                $tmp1317 = 0;
                                goto $l1315;
                                $l1347:;
                                $tmp879 = 31;
                                goto $l877;
                                $l1348:;
                                return $finallyReturn1344;
                            }
                            }
                        }
                        $tmp1335 = -1;
                        goto $l1333;
                        $l1333:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1336));
                        switch ($tmp1335) {
                            case -1: goto $l1350;
                            case 0: goto $l1346;
                        }
                        $l1350:;
                    }
                    goto $l1325;
                    $l1326:;
                }
                $tmp1317 = -1;
                goto $l1315;
                $l1315:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$324$171318));
                switch ($tmp1317) {
                    case -1: goto $l1351;
                    case 0: goto $l1347;
                }
                $l1351:;
            }
            $finallyReturn1351 = ((panda$core$Bit) { false });
            $tmp879 = 32;
            goto $l877;
            $l1353:;
            return $finallyReturn1351;
        }
        }
        else {
        panda$core$Bit $tmp1355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1355.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1357 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9880->$data + 16));
            target1356 = *$tmp1357;
            org$pandalanguage$pandac$MethodRef** $tmp1359 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$238_9880->$data + 24));
            m1358 = *$tmp1359;
            $finallyReturn1359 = ((panda$core$Bit) { false });
            $tmp879 = 33;
            goto $l877;
            $l1361:;
            return $finallyReturn1359;
        }
        }
        else {
        panda$core$Bit $tmp1363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1363.value) {
        {
            panda$core$UInt64* $tmp1365 = ((panda$core$UInt64*) ((char*) $match$238_9880->$data + 24));
            value1364 = *$tmp1365;
            $finallyReturn1365 = ((panda$core$Bit) { false });
            $tmp879 = 34;
            goto $l877;
            $l1367:;
            return $finallyReturn1365;
        }
        }
        else {
        panda$core$Bit $tmp1369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1369.value) {
        {
            $finallyReturn1369 = ((panda$core$Bit) { false });
            $tmp879 = 35;
            goto $l877;
            $l1371:;
            return $finallyReturn1369;
        }
        }
        else {
        panda$core$Bit $tmp1373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1373.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1375 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$238_9880->$data + 16));
            op1374 = *$tmp1375;
            org$pandalanguage$pandac$IRNode** $tmp1377 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9880->$data + 24));
            base1376 = *$tmp1377;
            panda$core$Bit $tmp1380 = (($fn1379) base1376->$class->vtable[4])(base1376);
            $finallyReturn1377 = $tmp1380;
            $tmp879 = 36;
            goto $l877;
            $l1381:;
            return $finallyReturn1377;
        }
        }
        else {
        panda$core$Bit $tmp1383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1383.value) {
        {
            panda$core$String** $tmp1385 = ((panda$core$String**) ((char*) $match$238_9880->$data + 16));
            label1384 = *$tmp1385;
            org$pandalanguage$pandac$IRNode** $tmp1387 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9880->$data + 24));
            target1386 = *$tmp1387;
            org$pandalanguage$pandac$IRNode** $tmp1389 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9880->$data + 32));
            list1388 = *$tmp1389;
            panda$collections$ImmutableArray** $tmp1391 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9880->$data + 40));
            statements1390 = *$tmp1391;
            panda$core$Bit $tmp1393 = (($fn1392) list1388->$class->vtable[4])(list1388);
            if ($tmp1393.value) {
            {
                $finallyReturn1393 = ((panda$core$Bit) { true });
                $tmp879 = 37;
                goto $l877;
                $l1395:;
                return $finallyReturn1393;
            }
            }
            {
                int $tmp1399;
                {
                    ITable* $tmp1403 = ((panda$collections$Iterable*) statements1390)->$class->itable;
                    while ($tmp1403->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1403 = $tmp1403->next;
                    }
                    $fn1405 $tmp1404 = $tmp1403->methods[0];
                    panda$collections$Iterator* $tmp1406 = $tmp1404(((panda$collections$Iterable*) statements1390));
                    $tmp1402 = $tmp1406;
                    $tmp1401 = $tmp1402;
                    Iter$343$171400 = $tmp1401;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1401));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1402));
                    $l1407:;
                    ITable* $tmp1410 = Iter$343$171400->$class->itable;
                    while ($tmp1410->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1410 = $tmp1410->next;
                    }
                    $fn1412 $tmp1411 = $tmp1410->methods[0];
                    panda$core$Bit $tmp1413 = $tmp1411(Iter$343$171400);
                    panda$core$Bit $tmp1414 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1413);
                    bool $tmp1409 = $tmp1414.value;
                    if (!$tmp1409) goto $l1408;
                    {
                        int $tmp1417;
                        {
                            ITable* $tmp1421 = Iter$343$171400->$class->itable;
                            while ($tmp1421->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1421 = $tmp1421->next;
                            }
                            $fn1423 $tmp1422 = $tmp1421->methods[1];
                            panda$core$Object* $tmp1424 = $tmp1422(Iter$343$171400);
                            $tmp1420 = $tmp1424;
                            $tmp1419 = ((org$pandalanguage$pandac$IRNode*) $tmp1420);
                            s1418 = $tmp1419;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1419));
                            panda$core$Panda$unref$panda$core$Object($tmp1420);
                            panda$core$Bit $tmp1426 = (($fn1425) s1418->$class->vtable[4])(s1418);
                            if ($tmp1426.value) {
                            {
                                $finallyReturn1426 = ((panda$core$Bit) { true });
                                $tmp1417 = 0;
                                goto $l1415;
                                $l1428:;
                                $tmp1399 = 0;
                                goto $l1397;
                                $l1429:;
                                $tmp879 = 38;
                                goto $l877;
                                $l1430:;
                                return $finallyReturn1426;
                            }
                            }
                        }
                        $tmp1417 = -1;
                        goto $l1415;
                        $l1415:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1418));
                        switch ($tmp1417) {
                            case 0: goto $l1428;
                            case -1: goto $l1432;
                        }
                        $l1432:;
                    }
                    goto $l1407;
                    $l1408:;
                }
                $tmp1399 = -1;
                goto $l1397;
                $l1397:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$343$171400));
                switch ($tmp1399) {
                    case -1: goto $l1433;
                    case 0: goto $l1429;
                }
                $l1433:;
            }
            $finallyReturn1433 = ((panda$core$Bit) { false });
            $tmp879 = 39;
            goto $l877;
            $l1435:;
            return $finallyReturn1433;
        }
        }
        else {
        panda$core$Bit $tmp1437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1437.value) {
        {
            panda$core$Real64* $tmp1439 = ((panda$core$Real64*) ((char*) $match$238_9880->$data + 24));
            value1438 = *$tmp1439;
            $finallyReturn1439 = ((panda$core$Bit) { false });
            $tmp879 = 40;
            goto $l877;
            $l1441:;
            return $finallyReturn1439;
        }
        }
        else {
        panda$core$Bit $tmp1443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1443.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1445 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9880->$data + 16));
            value1444 = *$tmp1445;
            panda$core$Bit $tmp1448 = (($fn1447) value1444->$class->vtable[4])(value1444);
            $finallyReturn1445 = $tmp1448;
            $tmp879 = 41;
            goto $l877;
            $l1449:;
            return $finallyReturn1445;
        }
        }
        else {
        panda$core$Bit $tmp1451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1451.value) {
        {
            panda$core$Int64* $tmp1453 = ((panda$core$Int64*) ((char*) $match$238_9880->$data + 24));
            id1452 = *$tmp1453;
            $finallyReturn1453 = ((panda$core$Bit) { false });
            $tmp879 = 42;
            goto $l877;
            $l1455:;
            return $finallyReturn1453;
        }
        }
        else {
        panda$core$Bit $tmp1457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1457.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1459 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9880->$data + 0));
            base1458 = *$tmp1459;
            panda$core$Int64* $tmp1461 = ((panda$core$Int64*) ((char*) $match$238_9880->$data + 8));
            id1460 = *$tmp1461;
            panda$core$Bit $tmp1464 = (($fn1463) base1458->$class->vtable[4])(base1458);
            $finallyReturn1461 = $tmp1464;
            $tmp879 = 43;
            goto $l877;
            $l1465:;
            return $finallyReturn1461;
        }
        }
        else {
        panda$core$Bit $tmp1467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1467.value) {
        {
            $finallyReturn1467 = ((panda$core$Bit) { false });
            $tmp879 = 44;
            goto $l877;
            $l1469:;
            return $finallyReturn1467;
        }
        }
        else {
        panda$core$Bit $tmp1471 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1471.value) {
        {
            panda$core$String** $tmp1473 = ((panda$core$String**) ((char*) $match$238_9880->$data + 16));
            str1472 = *$tmp1473;
            $finallyReturn1473 = ((panda$core$Bit) { false });
            $tmp879 = 45;
            goto $l877;
            $l1475:;
            return $finallyReturn1473;
        }
        }
        else {
        panda$core$Bit $tmp1477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1477.value) {
        {
            $finallyReturn1477 = ((panda$core$Bit) { false });
            $tmp879 = 46;
            goto $l877;
            $l1479:;
            return $finallyReturn1477;
        }
        }
        else {
        panda$core$Bit $tmp1481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1481.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1483 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9880->$data + 16));
            test1482 = *$tmp1483;
            org$pandalanguage$pandac$IRNode** $tmp1485 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9880->$data + 24));
            ifTrue1484 = *$tmp1485;
            org$pandalanguage$pandac$IRNode** $tmp1487 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9880->$data + 32));
            ifFalse1486 = *$tmp1487;
            panda$core$Bit $tmp1492 = (($fn1491) test1482->$class->vtable[4])(test1482);
            bool $tmp1490 = $tmp1492.value;
            if ($tmp1490) goto $l1493;
            panda$core$Bit $tmp1495 = (($fn1494) ifTrue1484->$class->vtable[4])(ifTrue1484);
            $tmp1490 = $tmp1495.value;
            $l1493:;
            panda$core$Bit $tmp1496 = { $tmp1490 };
            bool $tmp1489 = $tmp1496.value;
            if ($tmp1489) goto $l1497;
            panda$core$Bit $tmp1499 = (($fn1498) ifFalse1486->$class->vtable[4])(ifFalse1486);
            $tmp1489 = $tmp1499.value;
            $l1497:;
            panda$core$Bit $tmp1500 = { $tmp1489 };
            $finallyReturn1487 = $tmp1500;
            $tmp879 = 47;
            goto $l877;
            $l1501:;
            return $finallyReturn1487;
        }
        }
        else {
        panda$core$Bit $tmp1503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1503.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1505 = ((org$pandalanguage$pandac$Type**) ((char*) $match$238_9880->$data + 16));
            type1504 = *$tmp1505;
            $finallyReturn1505 = ((panda$core$Bit) { false });
            $tmp879 = 48;
            goto $l877;
            $l1507:;
            return $finallyReturn1505;
        }
        }
        else {
        panda$core$Bit $tmp1509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1509.value) {
        {
            panda$core$String** $tmp1511 = ((panda$core$String**) ((char*) $match$238_9880->$data + 16));
            name1510 = *$tmp1511;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1512.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1514 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9880->$data + 24));
            base1513 = *$tmp1514;
            panda$collections$ImmutableArray** $tmp1516 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9880->$data + 32));
            args1515 = *$tmp1516;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1517.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1519 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9880->$data + 24));
            target1518 = *$tmp1519;
            panda$collections$ImmutableArray** $tmp1521 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9880->$data + 32));
            methods1520 = *$tmp1521;
            panda$collections$ImmutableArray** $tmp1523 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9880->$data + 40));
            args1522 = *$tmp1523;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1524 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1524.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1526 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9880->$data + 16));
            target1525 = *$tmp1526;
            panda$collections$ImmutableArray** $tmp1528 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9880->$data + 24));
            methods1527 = *$tmp1528;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1529.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1531 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9880->$data + 16));
            start1530 = *$tmp1531;
            org$pandalanguage$pandac$IRNode** $tmp1533 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9880->$data + 24));
            end1532 = *$tmp1533;
            panda$core$Bit* $tmp1535 = ((panda$core$Bit*) ((char*) $match$238_9880->$data + 32));
            inclusive1534 = *$tmp1535;
            org$pandalanguage$pandac$IRNode** $tmp1537 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9880->$data + 33));
            step1536 = *$tmp1537;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1538 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp1538.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp1540 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$238_9880->$data + 16));
            kind1539 = *$tmp1540;
            panda$collections$ImmutableArray** $tmp1542 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9880->$data + 24));
            decls1541 = *$tmp1542;
            {
                int $tmp1545;
                {
                    ITable* $tmp1549 = ((panda$collections$Iterable*) decls1541)->$class->itable;
                    while ($tmp1549->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1549 = $tmp1549->next;
                    }
                    $fn1551 $tmp1550 = $tmp1549->methods[0];
                    panda$collections$Iterator* $tmp1552 = $tmp1550(((panda$collections$Iterable*) decls1541));
                    $tmp1548 = $tmp1552;
                    $tmp1547 = $tmp1548;
                    Iter$378$171546 = $tmp1547;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1547));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1548));
                    $l1553:;
                    ITable* $tmp1556 = Iter$378$171546->$class->itable;
                    while ($tmp1556->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1556 = $tmp1556->next;
                    }
                    $fn1558 $tmp1557 = $tmp1556->methods[0];
                    panda$core$Bit $tmp1559 = $tmp1557(Iter$378$171546);
                    panda$core$Bit $tmp1560 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1559);
                    bool $tmp1555 = $tmp1560.value;
                    if (!$tmp1555) goto $l1554;
                    {
                        int $tmp1563;
                        {
                            ITable* $tmp1567 = Iter$378$171546->$class->itable;
                            while ($tmp1567->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1567 = $tmp1567->next;
                            }
                            $fn1569 $tmp1568 = $tmp1567->methods[1];
                            panda$core$Object* $tmp1570 = $tmp1568(Iter$378$171546);
                            $tmp1566 = $tmp1570;
                            $tmp1565 = ((org$pandalanguage$pandac$IRNode*) $tmp1566);
                            d1564 = $tmp1565;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1565));
                            panda$core$Panda$unref$panda$core$Object($tmp1566);
                            panda$core$Bit $tmp1572 = (($fn1571) d1564->$class->vtable[4])(d1564);
                            if ($tmp1572.value) {
                            {
                                $finallyReturn1572 = ((panda$core$Bit) { true });
                                $tmp1563 = 0;
                                goto $l1561;
                                $l1574:;
                                $tmp1545 = 0;
                                goto $l1543;
                                $l1575:;
                                $tmp879 = 49;
                                goto $l877;
                                $l1576:;
                                return $finallyReturn1572;
                            }
                            }
                        }
                        $tmp1563 = -1;
                        goto $l1561;
                        $l1561:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) d1564));
                        switch ($tmp1563) {
                            case -1: goto $l1578;
                            case 0: goto $l1574;
                        }
                        $l1578:;
                    }
                    goto $l1553;
                    $l1554:;
                }
                $tmp1545 = -1;
                goto $l1543;
                $l1543:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$378$171546));
                switch ($tmp1545) {
                    case -1: goto $l1579;
                    case 0: goto $l1575;
                }
                $l1579:;
            }
            $finallyReturn1579 = ((panda$core$Bit) { false });
            $tmp879 = 50;
            goto $l877;
            $l1581:;
            return $finallyReturn1579;
        }
        }
        else {
        panda$core$Bit $tmp1583 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp1583.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp1585 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$238_9880->$data + 16));
            variable1584 = *$tmp1585;
            $finallyReturn1585 = ((panda$core$Bit) { false });
            $tmp879 = 51;
            goto $l877;
            $l1587:;
            return $finallyReturn1585;
        }
        }
        else {
        panda$core$Bit $tmp1589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp1589.value) {
        {
            panda$collections$ImmutableArray** $tmp1591 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9880->$data + 16));
            tests1590 = *$tmp1591;
            panda$collections$ImmutableArray** $tmp1593 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9880->$data + 24));
            statements1592 = *$tmp1593;
            {
                int $tmp1596;
                {
                    ITable* $tmp1600 = ((panda$collections$Iterable*) tests1590)->$class->itable;
                    while ($tmp1600->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1600 = $tmp1600->next;
                    }
                    $fn1602 $tmp1601 = $tmp1600->methods[0];
                    panda$collections$Iterator* $tmp1603 = $tmp1601(((panda$collections$Iterable*) tests1590));
                    $tmp1599 = $tmp1603;
                    $tmp1598 = $tmp1599;
                    Iter$387$171597 = $tmp1598;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1598));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1599));
                    $l1604:;
                    ITable* $tmp1607 = Iter$387$171597->$class->itable;
                    while ($tmp1607->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1607 = $tmp1607->next;
                    }
                    $fn1609 $tmp1608 = $tmp1607->methods[0];
                    panda$core$Bit $tmp1610 = $tmp1608(Iter$387$171597);
                    panda$core$Bit $tmp1611 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1610);
                    bool $tmp1606 = $tmp1611.value;
                    if (!$tmp1606) goto $l1605;
                    {
                        int $tmp1614;
                        {
                            ITable* $tmp1618 = Iter$387$171597->$class->itable;
                            while ($tmp1618->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1618 = $tmp1618->next;
                            }
                            $fn1620 $tmp1619 = $tmp1618->methods[1];
                            panda$core$Object* $tmp1621 = $tmp1619(Iter$387$171597);
                            $tmp1617 = $tmp1621;
                            $tmp1616 = ((org$pandalanguage$pandac$IRNode*) $tmp1617);
                            t1615 = $tmp1616;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1616));
                            panda$core$Panda$unref$panda$core$Object($tmp1617);
                            panda$core$Bit $tmp1623 = (($fn1622) t1615->$class->vtable[4])(t1615);
                            if ($tmp1623.value) {
                            {
                                $finallyReturn1623 = ((panda$core$Bit) { true });
                                $tmp1614 = 0;
                                goto $l1612;
                                $l1625:;
                                $tmp1596 = 0;
                                goto $l1594;
                                $l1626:;
                                $tmp879 = 52;
                                goto $l877;
                                $l1627:;
                                return $finallyReturn1623;
                            }
                            }
                        }
                        $tmp1614 = -1;
                        goto $l1612;
                        $l1612:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1615));
                        switch ($tmp1614) {
                            case 0: goto $l1625;
                            case -1: goto $l1629;
                        }
                        $l1629:;
                    }
                    goto $l1604;
                    $l1605:;
                }
                $tmp1596 = -1;
                goto $l1594;
                $l1594:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$387$171597));
                switch ($tmp1596) {
                    case -1: goto $l1630;
                    case 0: goto $l1626;
                }
                $l1630:;
            }
            {
                int $tmp1633;
                {
                    ITable* $tmp1637 = ((panda$collections$Iterable*) statements1592)->$class->itable;
                    while ($tmp1637->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1637 = $tmp1637->next;
                    }
                    $fn1639 $tmp1638 = $tmp1637->methods[0];
                    panda$collections$Iterator* $tmp1640 = $tmp1638(((panda$collections$Iterable*) statements1592));
                    $tmp1636 = $tmp1640;
                    $tmp1635 = $tmp1636;
                    Iter$392$171634 = $tmp1635;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1635));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1636));
                    $l1641:;
                    ITable* $tmp1644 = Iter$392$171634->$class->itable;
                    while ($tmp1644->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1644 = $tmp1644->next;
                    }
                    $fn1646 $tmp1645 = $tmp1644->methods[0];
                    panda$core$Bit $tmp1647 = $tmp1645(Iter$392$171634);
                    panda$core$Bit $tmp1648 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1647);
                    bool $tmp1643 = $tmp1648.value;
                    if (!$tmp1643) goto $l1642;
                    {
                        int $tmp1651;
                        {
                            ITable* $tmp1655 = Iter$392$171634->$class->itable;
                            while ($tmp1655->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1655 = $tmp1655->next;
                            }
                            $fn1657 $tmp1656 = $tmp1655->methods[1];
                            panda$core$Object* $tmp1658 = $tmp1656(Iter$392$171634);
                            $tmp1654 = $tmp1658;
                            $tmp1653 = ((org$pandalanguage$pandac$IRNode*) $tmp1654);
                            s1652 = $tmp1653;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1653));
                            panda$core$Panda$unref$panda$core$Object($tmp1654);
                            panda$core$Bit $tmp1660 = (($fn1659) s1652->$class->vtable[4])(s1652);
                            if ($tmp1660.value) {
                            {
                                $finallyReturn1660 = ((panda$core$Bit) { true });
                                $tmp1651 = 0;
                                goto $l1649;
                                $l1662:;
                                $tmp1633 = 0;
                                goto $l1631;
                                $l1663:;
                                $tmp879 = 53;
                                goto $l877;
                                $l1664:;
                                return $finallyReturn1660;
                            }
                            }
                        }
                        $tmp1651 = -1;
                        goto $l1649;
                        $l1649:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1652));
                        switch ($tmp1651) {
                            case -1: goto $l1666;
                            case 0: goto $l1662;
                        }
                        $l1666:;
                    }
                    goto $l1641;
                    $l1642:;
                }
                $tmp1633 = -1;
                goto $l1631;
                $l1631:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$392$171634));
                switch ($tmp1633) {
                    case 0: goto $l1663;
                    case -1: goto $l1667;
                }
                $l1667:;
            }
            $finallyReturn1667 = ((panda$core$Bit) { false });
            $tmp879 = 54;
            goto $l877;
            $l1669:;
            return $finallyReturn1667;
        }
        }
        else {
        panda$core$Bit $tmp1671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$238_9880->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp1671.value) {
        {
            panda$core$String** $tmp1673 = ((panda$core$String**) ((char*) $match$238_9880->$data + 16));
            label1672 = *$tmp1673;
            org$pandalanguage$pandac$IRNode** $tmp1675 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$238_9880->$data + 24));
            test1674 = *$tmp1675;
            panda$collections$ImmutableArray** $tmp1677 = ((panda$collections$ImmutableArray**) ((char*) $match$238_9880->$data + 32));
            statements1676 = *$tmp1677;
            panda$core$Bit $tmp1679 = (($fn1678) test1674->$class->vtable[4])(test1674);
            if ($tmp1679.value) {
            {
                $finallyReturn1679 = ((panda$core$Bit) { true });
                $tmp879 = 55;
                goto $l877;
                $l1681:;
                return $finallyReturn1679;
            }
            }
            {
                int $tmp1685;
                {
                    ITable* $tmp1689 = ((panda$collections$Iterable*) statements1676)->$class->itable;
                    while ($tmp1689->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1689 = $tmp1689->next;
                    }
                    $fn1691 $tmp1690 = $tmp1689->methods[0];
                    panda$collections$Iterator* $tmp1692 = $tmp1690(((panda$collections$Iterable*) statements1676));
                    $tmp1688 = $tmp1692;
                    $tmp1687 = $tmp1688;
                    Iter$402$171686 = $tmp1687;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1687));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1688));
                    $l1693:;
                    ITable* $tmp1696 = Iter$402$171686->$class->itable;
                    while ($tmp1696->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1696 = $tmp1696->next;
                    }
                    $fn1698 $tmp1697 = $tmp1696->methods[0];
                    panda$core$Bit $tmp1699 = $tmp1697(Iter$402$171686);
                    panda$core$Bit $tmp1700 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1699);
                    bool $tmp1695 = $tmp1700.value;
                    if (!$tmp1695) goto $l1694;
                    {
                        int $tmp1703;
                        {
                            ITable* $tmp1707 = Iter$402$171686->$class->itable;
                            while ($tmp1707->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1707 = $tmp1707->next;
                            }
                            $fn1709 $tmp1708 = $tmp1707->methods[1];
                            panda$core$Object* $tmp1710 = $tmp1708(Iter$402$171686);
                            $tmp1706 = $tmp1710;
                            $tmp1705 = ((org$pandalanguage$pandac$IRNode*) $tmp1706);
                            s1704 = $tmp1705;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1705));
                            panda$core$Panda$unref$panda$core$Object($tmp1706);
                            panda$core$Bit $tmp1712 = (($fn1711) s1704->$class->vtable[4])(s1704);
                            if ($tmp1712.value) {
                            {
                                $finallyReturn1712 = ((panda$core$Bit) { true });
                                $tmp1703 = 0;
                                goto $l1701;
                                $l1714:;
                                $tmp1685 = 0;
                                goto $l1683;
                                $l1715:;
                                $tmp879 = 56;
                                goto $l877;
                                $l1716:;
                                return $finallyReturn1712;
                            }
                            }
                        }
                        $tmp1703 = -1;
                        goto $l1701;
                        $l1701:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1704));
                        switch ($tmp1703) {
                            case -1: goto $l1718;
                            case 0: goto $l1714;
                        }
                        $l1718:;
                    }
                    goto $l1693;
                    $l1694:;
                }
                $tmp1685 = -1;
                goto $l1683;
                $l1683:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$402$171686));
                switch ($tmp1685) {
                    case 0: goto $l1715;
                    case -1: goto $l1719;
                }
                $l1719:;
            }
            $finallyReturn1719 = ((panda$core$Bit) { false });
            $tmp879 = 57;
            goto $l877;
            $l1721:;
            return $finallyReturn1719;
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
    $tmp879 = -1;
    goto $l877;
    $l877:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp881));
    switch ($tmp879) {
        case -1: goto $l1723;
        case 15: goto $l1079;
        case 2: goto $l922;
        case 11: goto $l1044;
        case 21: goto $l1155;
        case 6: goto $l980;
        case 56: goto $l1716;
        case 27: goto $l1259;
        case 41: goto $l1449;
        case 53: goto $l1664;
        case 1: goto $l916;
        case 36: goto $l1381;
        case 16: goto $l1091;
        case 14: goto $l1066;
        case 35: goto $l1371;
        case 34: goto $l1367;
        case 57: goto $l1721;
        case 24: goto $l1203;
        case 46: goto $l1479;
        case 50: goto $l1581;
        case 23: goto $l1197;
        case 31: goto $l1348;
        case 49: goto $l1576;
        case 28: goto $l1264;
        case 29: goto $l1276;
        case 38: goto $l1430;
        case 17: goto $l1126;
        case 26: goto $l1219;
        case 3: goto $l960;
        case 8: goto $l1020;
        case 44: goto $l1469;
        case 51: goto $l1587;
        case 12: goto $l1054;
        case 32: goto $l1353;
        case 7: goto $l1015;
        case 45: goto $l1475;
        case 33: goto $l1361;
        case 13: goto $l1060;
        case 18: goto $l1131;
        case 55: goto $l1681;
        case 9: goto $l1028;
        case 54: goto $l1669;
        case 0: goto $l895;
        case 43: goto $l1465;
        case 25: goto $l1211;
        case 19: goto $l1135;
        case 10: goto $l1034;
        case 42: goto $l1455;
        case 48: goto $l1507;
        case 47: goto $l1501;
        case 5: goto $l971;
        case 37: goto $l1395;
        case 22: goto $l1190;
        case 20: goto $l1143;
        case 40: goto $l1441;
        case 39: goto $l1435;
        case 52: goto $l1627;
        case 4: goto $l965;
        case 30: goto $l1311;
    }
    $l1723:;
}
panda$core$String* org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$415_91727;
    org$pandalanguage$pandac$IRNode* $tmp1728;
    org$pandalanguage$pandac$IRNode* test1730;
    org$pandalanguage$pandac$IRNode* msg1732;
    panda$core$String* $finallyReturn1733;
    panda$core$String* $tmp1735;
    panda$core$String* $tmp1736;
    panda$core$String* $tmp1737;
    panda$core$String* $tmp1738;
    panda$core$String* $tmp1739;
    panda$core$String* $finallyReturn1748;
    panda$core$String* $tmp1750;
    panda$core$String* $tmp1751;
    panda$core$String* $tmp1752;
    org$pandalanguage$pandac$IRNode* left1760;
    org$pandalanguage$pandac$parser$Token$Kind op1762;
    org$pandalanguage$pandac$IRNode* right1764;
    panda$core$String* $finallyReturn1765;
    panda$core$String* $tmp1767;
    panda$core$String* $tmp1768;
    panda$core$String* $tmp1769;
    panda$core$String* $tmp1770;
    panda$core$String* $tmp1771;
    panda$core$String* $tmp1772;
    panda$core$String* $tmp1773;
    panda$core$Object* $tmp1778;
    panda$core$Bit bit1789;
    panda$core$String* $finallyReturn1790;
    panda$core$String* $tmp1792;
    panda$core$String* $tmp1793;
    panda$collections$ImmutableArray* statements1798;
    panda$core$MutableString* result1803;
    panda$core$MutableString* $tmp1804;
    panda$core$MutableString* $tmp1805;
    panda$collections$Iterator* Iter$427$171811;
    panda$collections$Iterator* $tmp1812;
    panda$collections$Iterator* $tmp1813;
    org$pandalanguage$pandac$IRNode* s1829;
    org$pandalanguage$pandac$IRNode* $tmp1830;
    panda$core$Object* $tmp1831;
    panda$core$String* $tmp1836;
    panda$core$Char8 $tmp1841;
    panda$core$String* $finallyReturn1841;
    panda$core$String* $tmp1843;
    panda$core$String* $tmp1844;
    panda$collections$ImmutableArray* statements1851;
    panda$collections$ImmutableArray* finally1853;
    panda$core$MutableString* result1858;
    panda$core$MutableString* $tmp1859;
    panda$core$MutableString* $tmp1860;
    panda$collections$Iterator* Iter$434$171866;
    panda$collections$Iterator* $tmp1867;
    panda$collections$Iterator* $tmp1868;
    org$pandalanguage$pandac$IRNode* s1884;
    org$pandalanguage$pandac$IRNode* $tmp1885;
    panda$core$Object* $tmp1886;
    panda$core$String* $tmp1891;
    panda$collections$Iterator* Iter$438$171900;
    panda$collections$Iterator* $tmp1901;
    panda$collections$Iterator* $tmp1902;
    org$pandalanguage$pandac$IRNode* s1918;
    org$pandalanguage$pandac$IRNode* $tmp1919;
    panda$core$Object* $tmp1920;
    panda$core$String* $tmp1925;
    panda$core$Char8 $tmp1930;
    panda$core$String* $finallyReturn1930;
    panda$core$String* $tmp1932;
    panda$core$String* $tmp1933;
    panda$core$String* label1940;
    panda$core$String* $finallyReturn1941;
    panda$core$String* $tmp1943;
    panda$core$String* $tmp1944;
    panda$core$String* $tmp1945;
    panda$core$String* $finallyReturn1951;
    panda$core$String* $tmp1953;
    org$pandalanguage$pandac$MethodRef* m1958;
    panda$collections$ImmutableArray* args1960;
    panda$core$String* $finallyReturn1961;
    panda$core$String* $tmp1963;
    panda$core$String* $tmp1964;
    panda$core$String* $tmp1965;
    panda$core$String* $tmp1966;
    panda$core$String* $tmp1967;
    panda$core$String* $tmp1971;
    org$pandalanguage$pandac$IRNode* value1979;
    org$pandalanguage$pandac$Type* type1981;
    org$pandalanguage$pandac$Type* $tmp1983;
    org$pandalanguage$pandac$Type* $tmp1986;
    panda$core$String* $finallyReturn1988;
    panda$core$String* $tmp1990;
    panda$core$String* $tmp1991;
    panda$core$String* $tmp1992;
    panda$core$String* $tmp1993;
    panda$core$String* $tmp1994;
    panda$core$String* $finallyReturn2003;
    panda$core$String* $tmp2005;
    panda$core$String* $tmp2006;
    panda$core$String* $tmp2007;
    panda$core$String* $tmp2008;
    panda$core$String* $tmp2009;
    org$pandalanguage$pandac$ChoiceEntry* ce2020;
    panda$core$String* $finallyReturn2021;
    panda$core$String* $tmp2023;
    panda$core$String* $tmp2024;
    org$pandalanguage$pandac$IRNode* base2029;
    org$pandalanguage$pandac$ChoiceEntry* ce2031;
    panda$core$Int64 field2033;
    panda$core$String* $finallyReturn2034;
    panda$core$String* $tmp2036;
    panda$core$String* $tmp2037;
    panda$core$String* $tmp2038;
    panda$core$String* $tmp2039;
    panda$core$String* $tmp2040;
    panda$core$String* $tmp2041;
    panda$core$String* $tmp2042;
    panda$core$Object* $tmp2050;
    org$pandalanguage$pandac$Type* type2058;
    org$pandalanguage$pandac$IRNode* call2060;
    org$pandalanguage$pandac$IRNode* $match$460_172065;
    org$pandalanguage$pandac$IRNode* $tmp2066;
    panda$collections$ImmutableArray* args2068;
    panda$core$String* $finallyReturn2069;
    panda$core$String* $tmp2071;
    panda$core$String* $tmp2072;
    panda$core$String* $tmp2073;
    panda$core$String* $tmp2074;
    panda$core$String* $tmp2075;
    panda$core$String* $tmp2079;
    org$pandalanguage$pandac$Type* Type2089;
    panda$core$String* $finallyReturn2090;
    panda$core$String* $tmp2092;
    panda$core$String* label2097;
    panda$core$String* $finallyReturn2098;
    panda$core$String* $tmp2100;
    panda$core$String* $tmp2101;
    panda$core$String* $tmp2102;
    panda$core$String* $finallyReturn2108;
    panda$core$String* $tmp2110;
    org$pandalanguage$pandac$IRNode* target2115;
    org$pandalanguage$pandac$IRNode* value2117;
    panda$core$String* $finallyReturn2118;
    panda$core$String* $tmp2120;
    panda$core$String* $tmp2121;
    panda$core$String* $tmp2122;
    panda$core$String* $tmp2123;
    panda$core$String* $tmp2124;
    panda$core$String* $finallyReturn2133;
    panda$core$String* $tmp2135;
    panda$core$String* $tmp2136;
    panda$core$String* label2142;
    panda$collections$ImmutableArray* statements2144;
    org$pandalanguage$pandac$IRNode* test2146;
    panda$core$MutableString* result2151;
    panda$core$MutableString* $tmp2152;
    panda$core$MutableString* $tmp2153;
    panda$core$String* $tmp2155;
    panda$core$String* $tmp2156;
    panda$collections$Iterator* Iter$484$172164;
    panda$collections$Iterator* $tmp2165;
    panda$collections$Iterator* $tmp2166;
    org$pandalanguage$pandac$IRNode* s2182;
    org$pandalanguage$pandac$IRNode* $tmp2183;
    panda$core$Object* $tmp2184;
    panda$core$String* $tmp2189;
    panda$core$String* $tmp2194;
    panda$core$String* $tmp2195;
    panda$core$String* $finallyReturn2199;
    panda$core$String* $tmp2201;
    panda$core$String* $tmp2202;
    org$pandalanguage$pandac$IRNode* expr2209;
    org$pandalanguage$pandac$IRNode* stmt2211;
    panda$core$String* $finallyReturn2212;
    panda$core$String* $tmp2214;
    panda$core$String* $tmp2215;
    panda$core$String* $tmp2216;
    panda$core$String* $tmp2217;
    panda$core$String* $tmp2218;
    org$pandalanguage$pandac$IRNode* base2229;
    org$pandalanguage$pandac$FieldDecl* field2231;
    panda$core$String* $finallyReturn2232;
    panda$core$String* $tmp2234;
    panda$core$String* $tmp2235;
    panda$core$String* $tmp2236;
    panda$core$String* $tmp2237;
    panda$core$String* $tmp2238;
    org$pandalanguage$pandac$IRNode* test2249;
    panda$collections$ImmutableArray* ifTrue2251;
    org$pandalanguage$pandac$IRNode* ifFalse2253;
    panda$core$MutableString* result2258;
    panda$core$MutableString* $tmp2259;
    panda$core$MutableString* $tmp2260;
    panda$core$String* $tmp2262;
    panda$core$String* $tmp2263;
    panda$collections$Iterator* Iter$495$172271;
    panda$collections$Iterator* $tmp2272;
    panda$collections$Iterator* $tmp2273;
    org$pandalanguage$pandac$IRNode* s2289;
    org$pandalanguage$pandac$IRNode* $tmp2290;
    panda$core$Object* $tmp2291;
    panda$core$String* $tmp2296;
    panda$core$Char8 $tmp2301;
    panda$core$String* $tmp2302;
    panda$core$String* $tmp2303;
    panda$core$String* $finallyReturn2307;
    panda$core$String* $tmp2309;
    panda$core$String* $tmp2310;
    panda$core$UInt64 value2317;
    panda$core$String* $finallyReturn2318;
    panda$core$String* $tmp2320;
    panda$core$String* $tmp2321;
    org$pandalanguage$pandac$IRNode* value2326;
    panda$core$String* $finallyReturn2327;
    panda$core$String* $tmp2329;
    panda$core$String* $tmp2330;
    panda$core$String* $tmp2331;
    org$pandalanguage$pandac$IRNode* value2339;
    panda$core$String* $finallyReturn2340;
    panda$core$String* $tmp2342;
    panda$core$String* $tmp2343;
    panda$core$String* $tmp2344;
    panda$core$String* label2352;
    panda$collections$ImmutableArray* statements2354;
    panda$core$MutableString* result2359;
    panda$core$MutableString* $tmp2360;
    panda$core$MutableString* $tmp2361;
    panda$core$String* $tmp2363;
    panda$core$String* $tmp2364;
    panda$collections$Iterator* Iter$515$172372;
    panda$collections$Iterator* $tmp2373;
    panda$collections$Iterator* $tmp2374;
    org$pandalanguage$pandac$IRNode* s2390;
    org$pandalanguage$pandac$IRNode* $tmp2391;
    panda$core$Object* $tmp2392;
    panda$core$String* $tmp2397;
    panda$core$Char8 $tmp2402;
    panda$core$String* $finallyReturn2402;
    panda$core$String* $tmp2404;
    panda$core$String* $tmp2405;
    org$pandalanguage$pandac$IRNode* value2412;
    panda$collections$ImmutableArray* whens2414;
    panda$collections$ImmutableArray* other2416;
    panda$core$MutableString* result2421;
    panda$core$MutableString* $tmp2422;
    panda$core$MutableString* $tmp2423;
    panda$core$String* $tmp2425;
    panda$core$String* $tmp2426;
    panda$collections$Iterator* Iter$522$172434;
    panda$collections$Iterator* $tmp2435;
    panda$collections$Iterator* $tmp2436;
    org$pandalanguage$pandac$IRNode* w2452;
    org$pandalanguage$pandac$IRNode* $tmp2453;
    panda$core$Object* $tmp2454;
    panda$core$String* $tmp2459;
    panda$collections$Iterator* Iter$527$212468;
    panda$collections$Iterator* $tmp2469;
    panda$collections$Iterator* $tmp2470;
    org$pandalanguage$pandac$IRNode* s2486;
    org$pandalanguage$pandac$IRNode* $tmp2487;
    panda$core$Object* $tmp2488;
    panda$core$String* $tmp2493;
    panda$core$Char8 $tmp2498;
    panda$core$String* $finallyReturn2498;
    panda$core$String* $tmp2500;
    panda$core$String* $tmp2501;
    org$pandalanguage$pandac$IRNode* target2508;
    org$pandalanguage$pandac$MethodRef* m2510;
    panda$core$String* $finallyReturn2511;
    panda$core$String* $tmp2513;
    panda$core$String* $tmp2514;
    panda$core$String* $tmp2515;
    panda$core$String* $tmp2516;
    panda$core$String* $tmp2517;
    panda$core$String* $finallyReturn2526;
    panda$core$String* $tmp2528;
    panda$core$UInt64 value2532;
    panda$core$String* $finallyReturn2533;
    panda$core$String* $tmp2535;
    panda$core$String* $tmp2536;
    panda$core$Object* $tmp2538;
    panda$core$String* $finallyReturn2543;
    panda$core$String* $tmp2545;
    org$pandalanguage$pandac$parser$Token$Kind op2550;
    org$pandalanguage$pandac$IRNode* base2552;
    panda$core$String* $finallyReturn2553;
    panda$core$String* $tmp2555;
    panda$core$String* $tmp2556;
    panda$core$String* $tmp2557;
    panda$core$String* $tmp2558;
    panda$core$String* $tmp2559;
    panda$core$Object* $tmp2560;
    panda$core$String* label2572;
    org$pandalanguage$pandac$IRNode* target2574;
    org$pandalanguage$pandac$IRNode* list2576;
    panda$collections$ImmutableArray* statements2578;
    panda$core$MutableString* result2583;
    panda$core$MutableString* $tmp2584;
    panda$core$MutableString* $tmp2585;
    panda$core$String* $tmp2587;
    panda$core$String* $tmp2588;
    panda$core$String* $tmp2592;
    panda$core$String* $tmp2593;
    panda$core$String* $tmp2594;
    panda$core$String* $tmp2595;
    panda$collections$Iterator* Iter$550$172606;
    panda$collections$Iterator* $tmp2607;
    panda$collections$Iterator* $tmp2608;
    org$pandalanguage$pandac$IRNode* s2624;
    org$pandalanguage$pandac$IRNode* $tmp2625;
    panda$core$Object* $tmp2626;
    panda$core$String* $tmp2631;
    panda$core$Char8 $tmp2636;
    panda$core$String* $finallyReturn2636;
    panda$core$String* $tmp2638;
    panda$core$String* $tmp2639;
    panda$core$Real64 value2646;
    panda$core$String* $finallyReturn2647;
    panda$core$String* $tmp2649;
    panda$core$String* $tmp2650;
    org$pandalanguage$pandac$IRNode* value2655;
    panda$core$String* $finallyReturn2656;
    panda$core$String* $tmp2658;
    panda$core$String* $tmp2659;
    panda$core$String* $tmp2660;
    panda$core$String* $finallyReturn2666;
    panda$core$String* $tmp2668;
    org$pandalanguage$pandac$Type* type2673;
    panda$core$Int64 id2675;
    panda$core$String* $finallyReturn2676;
    panda$core$String* $tmp2678;
    panda$core$String* $tmp2679;
    panda$core$String* $tmp2680;
    panda$core$Object* $tmp2682;
    org$pandalanguage$pandac$IRNode* base2690;
    panda$core$Int64 id2692;
    panda$core$String* $finallyReturn2693;
    panda$core$String* $tmp2695;
    panda$core$String* $tmp2696;
    panda$core$String* $tmp2697;
    panda$core$String* $tmp2698;
    panda$core$String* $tmp2699;
    panda$core$Object* $tmp2701;
    panda$core$String* $finallyReturn2711;
    panda$core$String* $tmp2713;
    panda$core$String* str2718;
    panda$core$String* $finallyReturn2719;
    panda$core$String* $tmp2721;
    panda$core$String* $finallyReturn2724;
    panda$core$String* $tmp2726;
    org$pandalanguage$pandac$IRNode* test2731;
    org$pandalanguage$pandac$IRNode* ifTrue2733;
    org$pandalanguage$pandac$IRNode* ifFalse2735;
    panda$core$String* $finallyReturn2736;
    panda$core$String* $tmp2738;
    panda$core$String* $tmp2739;
    panda$core$String* $tmp2740;
    panda$core$String* $tmp2741;
    panda$core$String* $tmp2742;
    panda$core$String* $tmp2743;
    panda$core$String* $tmp2744;
    org$pandalanguage$pandac$Type* type2758;
    panda$core$String* $finallyReturn2759;
    panda$core$String* $tmp2761;
    panda$core$String* $tmp2762;
    panda$core$String* name2767;
    panda$core$String* $finallyReturn2768;
    panda$core$String* $tmp2770;
    org$pandalanguage$pandac$IRNode* base2774;
    panda$collections$ImmutableArray* args2776;
    panda$core$String* $finallyReturn2777;
    panda$core$String* $tmp2779;
    panda$core$String* $tmp2780;
    panda$core$String* $tmp2781;
    panda$core$String* $tmp2782;
    panda$core$String* $tmp2783;
    panda$core$String* $tmp2788;
    org$pandalanguage$pandac$IRNode* target2796;
    panda$collections$ImmutableArray* methods2798;
    panda$collections$ImmutableArray* args2800;
    panda$core$String* $finallyReturn2801;
    panda$core$String* $tmp2803;
    panda$core$String* $tmp2804;
    panda$core$String* $tmp2805;
    panda$core$String* $tmp2806;
    panda$core$String* $tmp2807;
    panda$core$String* $tmp2808;
    panda$core$String* $tmp2809;
    panda$core$Object* $tmp2814;
    panda$core$String* $tmp2819;
    org$pandalanguage$pandac$IRNode* target2827;
    panda$collections$ImmutableArray* methods2829;
    panda$core$String* $finallyReturn2830;
    panda$core$String* $tmp2832;
    panda$core$String* $tmp2833;
    panda$core$String* $tmp2834;
    panda$core$String* $tmp2835;
    panda$core$String* $tmp2836;
    panda$core$Object* $tmp2841;
    org$pandalanguage$pandac$IRNode* start2849;
    org$pandalanguage$pandac$IRNode* end2851;
    panda$core$Bit inclusive2853;
    org$pandalanguage$pandac$IRNode* step2855;
    panda$core$MutableString* result2860;
    panda$core$MutableString* $tmp2861;
    panda$core$MutableString* $tmp2862;
    panda$core$String* $tmp2866;
    panda$core$String* $tmp2867;
    panda$core$String* $finallyReturn2871;
    panda$core$String* $tmp2873;
    panda$core$String* $tmp2874;
    org$pandalanguage$pandac$Variable$Kind kind2881;
    panda$collections$ImmutableArray* decls2883;
    panda$core$MutableString* result2888;
    panda$core$MutableString* $tmp2889;
    panda$core$MutableString* $tmp2890;
    org$pandalanguage$pandac$Variable$Kind $match$604_172892;
    panda$core$String* $tmp2901;
    panda$core$String* $finallyReturn2902;
    panda$core$String* $tmp2904;
    panda$core$String* $tmp2905;
    org$pandalanguage$pandac$Variable* variable2912;
    panda$core$String* $finallyReturn2913;
    panda$core$String* $tmp2915;
    panda$collections$ImmutableArray* tests2919;
    panda$collections$ImmutableArray* statements2921;
    panda$core$String* $finallyReturn2922;
    panda$core$String* $tmp2924;
    panda$core$String* $tmp2925;
    panda$core$String* $tmp2926;
    panda$core$String* $tmp2927;
    panda$core$String* $tmp2928;
    panda$core$String* $tmp2930;
    panda$core$String* $tmp2935;
    panda$core$String* label2944;
    org$pandalanguage$pandac$IRNode* test2946;
    panda$collections$ImmutableArray* statements2948;
    panda$core$MutableString* result2953;
    panda$core$MutableString* $tmp2954;
    panda$core$MutableString* $tmp2955;
    panda$core$String* $tmp2957;
    panda$core$String* $tmp2958;
    panda$core$String* $tmp2962;
    panda$core$String* $tmp2963;
    panda$collections$Iterator* Iter$622$172971;
    panda$collections$Iterator* $tmp2972;
    panda$collections$Iterator* $tmp2973;
    org$pandalanguage$pandac$IRNode* s2989;
    org$pandalanguage$pandac$IRNode* $tmp2990;
    panda$core$Object* $tmp2991;
    panda$core$String* $tmp2996;
    panda$core$Char8 $tmp3001;
    panda$core$String* $finallyReturn3001;
    panda$core$String* $tmp3003;
    panda$core$String* $tmp3004;
    int $tmp1726;
    {
        $tmp1728 = self;
        $match$415_91727 = $tmp1728;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1728));
        panda$core$Bit $tmp1729 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp1729.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1731 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91727->$data + 16));
            test1730 = *$tmp1731;
            org$pandalanguage$pandac$IRNode** $tmp1733 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91727->$data + 24));
            msg1732 = *$tmp1733;
            if (((panda$core$Bit) { msg1732 != NULL }).value) {
            {
                panda$core$String* $tmp1741 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1740, ((panda$core$Object*) test1730));
                $tmp1739 = $tmp1741;
                panda$core$String* $tmp1743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1739, &$s1742);
                $tmp1738 = $tmp1743;
                panda$core$String* $tmp1744 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1738, ((panda$core$Object*) msg1732));
                $tmp1737 = $tmp1744;
                panda$core$String* $tmp1746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1737, &$s1745);
                $tmp1736 = $tmp1746;
                $tmp1735 = $tmp1736;
                $finallyReturn1733 = $tmp1735;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1735));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1736));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1737));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1738));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1739));
                $tmp1726 = 0;
                goto $l1724;
                $l1747:;
                return $finallyReturn1733;
            }
            }
            panda$core$String* $tmp1754 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1753, ((panda$core$Object*) test1730));
            $tmp1752 = $tmp1754;
            panda$core$String* $tmp1756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1752, &$s1755);
            $tmp1751 = $tmp1756;
            $tmp1750 = $tmp1751;
            $finallyReturn1748 = $tmp1750;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1750));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1751));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1752));
            $tmp1726 = 1;
            goto $l1724;
            $l1757:;
            return $finallyReturn1748;
        }
        }
        else {
        panda$core$Bit $tmp1759 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1759.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1761 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91727->$data + 24));
            left1760 = *$tmp1761;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1763 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$415_91727->$data + 32));
            op1762 = *$tmp1763;
            org$pandalanguage$pandac$IRNode** $tmp1765 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91727->$data + 40));
            right1764 = *$tmp1765;
            panda$core$String* $tmp1775 = (($fn1774) left1760->$class->vtable[0])(left1760);
            $tmp1773 = $tmp1775;
            panda$core$String* $tmp1777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1773, &$s1776);
            $tmp1772 = $tmp1777;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1779;
            $tmp1779 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp1779->value = op1762;
            $tmp1778 = ((panda$core$Object*) $tmp1779);
            panda$core$String* $tmp1780 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1772, $tmp1778);
            $tmp1771 = $tmp1780;
            panda$core$String* $tmp1782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1771, &$s1781);
            $tmp1770 = $tmp1782;
            panda$core$String* $tmp1783 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1770, ((panda$core$Object*) right1764));
            $tmp1769 = $tmp1783;
            panda$core$String* $tmp1785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1769, &$s1784);
            $tmp1768 = $tmp1785;
            $tmp1767 = $tmp1768;
            $finallyReturn1765 = $tmp1767;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1767));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1768));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1769));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1770));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1771));
            panda$core$Panda$unref$panda$core$Object($tmp1778);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1772));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1773));
            $tmp1726 = 2;
            goto $l1724;
            $l1786:;
            return $finallyReturn1765;
        }
        }
        else {
        panda$core$Bit $tmp1788 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1788.value) {
        {
            panda$core$Bit* $tmp1790 = ((panda$core$Bit*) ((char*) $match$415_91727->$data + 24));
            bit1789 = *$tmp1790;
            panda$core$String* $tmp1794 = panda$core$Bit$convert$R$panda$core$String(bit1789);
            $tmp1793 = $tmp1794;
            $tmp1792 = $tmp1793;
            $finallyReturn1790 = $tmp1792;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1792));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1793));
            $tmp1726 = 3;
            goto $l1724;
            $l1795:;
            return $finallyReturn1790;
        }
        }
        else {
        panda$core$Bit $tmp1797 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp1797.value) {
        {
            panda$collections$ImmutableArray** $tmp1799 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91727->$data + 16));
            statements1798 = *$tmp1799;
            int $tmp1802;
            {
                panda$core$MutableString* $tmp1806 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1806, &$s1807);
                $tmp1805 = $tmp1806;
                $tmp1804 = $tmp1805;
                result1803 = $tmp1804;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1804));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1805));
                {
                    int $tmp1810;
                    {
                        ITable* $tmp1814 = ((panda$collections$Iterable*) statements1798)->$class->itable;
                        while ($tmp1814->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1814 = $tmp1814->next;
                        }
                        $fn1816 $tmp1815 = $tmp1814->methods[0];
                        panda$collections$Iterator* $tmp1817 = $tmp1815(((panda$collections$Iterable*) statements1798));
                        $tmp1813 = $tmp1817;
                        $tmp1812 = $tmp1813;
                        Iter$427$171811 = $tmp1812;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1812));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1813));
                        $l1818:;
                        ITable* $tmp1821 = Iter$427$171811->$class->itable;
                        while ($tmp1821->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1821 = $tmp1821->next;
                        }
                        $fn1823 $tmp1822 = $tmp1821->methods[0];
                        panda$core$Bit $tmp1824 = $tmp1822(Iter$427$171811);
                        panda$core$Bit $tmp1825 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1824);
                        bool $tmp1820 = $tmp1825.value;
                        if (!$tmp1820) goto $l1819;
                        {
                            int $tmp1828;
                            {
                                ITable* $tmp1832 = Iter$427$171811->$class->itable;
                                while ($tmp1832->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1832 = $tmp1832->next;
                                }
                                $fn1834 $tmp1833 = $tmp1832->methods[1];
                                panda$core$Object* $tmp1835 = $tmp1833(Iter$427$171811);
                                $tmp1831 = $tmp1835;
                                $tmp1830 = ((org$pandalanguage$pandac$IRNode*) $tmp1831);
                                s1829 = $tmp1830;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1830));
                                panda$core$Panda$unref$panda$core$Object($tmp1831);
                                panda$core$String* $tmp1838 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1829), &$s1837);
                                $tmp1836 = $tmp1838;
                                panda$core$MutableString$append$panda$core$String(result1803, $tmp1836);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1836));
                            }
                            $tmp1828 = -1;
                            goto $l1826;
                            $l1826:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1829));
                            switch ($tmp1828) {
                                case -1: goto $l1839;
                            }
                            $l1839:;
                        }
                        goto $l1818;
                        $l1819:;
                    }
                    $tmp1810 = -1;
                    goto $l1808;
                    $l1808:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$427$171811));
                    switch ($tmp1810) {
                        case -1: goto $l1840;
                    }
                    $l1840:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1841, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1803, $tmp1841);
                panda$core$String* $tmp1845 = panda$core$MutableString$finish$R$panda$core$String(result1803);
                $tmp1844 = $tmp1845;
                $tmp1843 = $tmp1844;
                $finallyReturn1841 = $tmp1843;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1843));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1844));
                $tmp1802 = 0;
                goto $l1800;
                $l1846:;
                $tmp1726 = 4;
                goto $l1724;
                $l1847:;
                return $finallyReturn1841;
            }
            $l1800:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1803));
            switch ($tmp1802) {
                case 0: goto $l1846;
            }
            $l1849:;
        }
        }
        else {
        panda$core$Bit $tmp1850 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp1850.value) {
        {
            panda$collections$ImmutableArray** $tmp1852 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91727->$data + 16));
            statements1851 = *$tmp1852;
            panda$collections$ImmutableArray** $tmp1854 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91727->$data + 24));
            finally1853 = *$tmp1854;
            int $tmp1857;
            {
                panda$core$MutableString* $tmp1861 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1861, &$s1862);
                $tmp1860 = $tmp1861;
                $tmp1859 = $tmp1860;
                result1858 = $tmp1859;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1859));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1860));
                {
                    int $tmp1865;
                    {
                        ITable* $tmp1869 = ((panda$collections$Iterable*) statements1851)->$class->itable;
                        while ($tmp1869->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1869 = $tmp1869->next;
                        }
                        $fn1871 $tmp1870 = $tmp1869->methods[0];
                        panda$collections$Iterator* $tmp1872 = $tmp1870(((panda$collections$Iterable*) statements1851));
                        $tmp1868 = $tmp1872;
                        $tmp1867 = $tmp1868;
                        Iter$434$171866 = $tmp1867;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1867));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1868));
                        $l1873:;
                        ITable* $tmp1876 = Iter$434$171866->$class->itable;
                        while ($tmp1876->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1876 = $tmp1876->next;
                        }
                        $fn1878 $tmp1877 = $tmp1876->methods[0];
                        panda$core$Bit $tmp1879 = $tmp1877(Iter$434$171866);
                        panda$core$Bit $tmp1880 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1879);
                        bool $tmp1875 = $tmp1880.value;
                        if (!$tmp1875) goto $l1874;
                        {
                            int $tmp1883;
                            {
                                ITable* $tmp1887 = Iter$434$171866->$class->itable;
                                while ($tmp1887->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1887 = $tmp1887->next;
                                }
                                $fn1889 $tmp1888 = $tmp1887->methods[1];
                                panda$core$Object* $tmp1890 = $tmp1888(Iter$434$171866);
                                $tmp1886 = $tmp1890;
                                $tmp1885 = ((org$pandalanguage$pandac$IRNode*) $tmp1886);
                                s1884 = $tmp1885;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1885));
                                panda$core$Panda$unref$panda$core$Object($tmp1886);
                                panda$core$String* $tmp1893 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1884), &$s1892);
                                $tmp1891 = $tmp1893;
                                panda$core$MutableString$append$panda$core$String(result1858, $tmp1891);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1891));
                            }
                            $tmp1883 = -1;
                            goto $l1881;
                            $l1881:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1884));
                            switch ($tmp1883) {
                                case -1: goto $l1894;
                            }
                            $l1894:;
                        }
                        goto $l1873;
                        $l1874:;
                    }
                    $tmp1865 = -1;
                    goto $l1863;
                    $l1863:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$434$171866));
                    switch ($tmp1865) {
                        case -1: goto $l1895;
                    }
                    $l1895:;
                }
                panda$core$MutableString$append$panda$core$String(result1858, &$s1896);
                {
                    int $tmp1899;
                    {
                        ITable* $tmp1903 = ((panda$collections$Iterable*) finally1853)->$class->itable;
                        while ($tmp1903->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1903 = $tmp1903->next;
                        }
                        $fn1905 $tmp1904 = $tmp1903->methods[0];
                        panda$collections$Iterator* $tmp1906 = $tmp1904(((panda$collections$Iterable*) finally1853));
                        $tmp1902 = $tmp1906;
                        $tmp1901 = $tmp1902;
                        Iter$438$171900 = $tmp1901;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1901));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1902));
                        $l1907:;
                        ITable* $tmp1910 = Iter$438$171900->$class->itable;
                        while ($tmp1910->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1910 = $tmp1910->next;
                        }
                        $fn1912 $tmp1911 = $tmp1910->methods[0];
                        panda$core$Bit $tmp1913 = $tmp1911(Iter$438$171900);
                        panda$core$Bit $tmp1914 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1913);
                        bool $tmp1909 = $tmp1914.value;
                        if (!$tmp1909) goto $l1908;
                        {
                            int $tmp1917;
                            {
                                ITable* $tmp1921 = Iter$438$171900->$class->itable;
                                while ($tmp1921->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1921 = $tmp1921->next;
                                }
                                $fn1923 $tmp1922 = $tmp1921->methods[1];
                                panda$core$Object* $tmp1924 = $tmp1922(Iter$438$171900);
                                $tmp1920 = $tmp1924;
                                $tmp1919 = ((org$pandalanguage$pandac$IRNode*) $tmp1920);
                                s1918 = $tmp1919;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1919));
                                panda$core$Panda$unref$panda$core$Object($tmp1920);
                                panda$core$String* $tmp1927 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1918), &$s1926);
                                $tmp1925 = $tmp1927;
                                panda$core$MutableString$append$panda$core$String(result1858, $tmp1925);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1925));
                            }
                            $tmp1917 = -1;
                            goto $l1915;
                            $l1915:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1918));
                            switch ($tmp1917) {
                                case -1: goto $l1928;
                            }
                            $l1928:;
                        }
                        goto $l1907;
                        $l1908:;
                    }
                    $tmp1899 = -1;
                    goto $l1897;
                    $l1897:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$438$171900));
                    switch ($tmp1899) {
                        case -1: goto $l1929;
                    }
                    $l1929:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1930, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1858, $tmp1930);
                panda$core$String* $tmp1934 = panda$core$MutableString$finish$R$panda$core$String(result1858);
                $tmp1933 = $tmp1934;
                $tmp1932 = $tmp1933;
                $finallyReturn1930 = $tmp1932;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1932));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1933));
                $tmp1857 = 0;
                goto $l1855;
                $l1935:;
                $tmp1726 = 5;
                goto $l1724;
                $l1936:;
                return $finallyReturn1930;
            }
            $l1855:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1858));
            switch ($tmp1857) {
                case 0: goto $l1935;
            }
            $l1938:;
        }
        }
        else {
        panda$core$Bit $tmp1939 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp1939.value) {
        {
            panda$core$String** $tmp1941 = ((panda$core$String**) ((char*) $match$415_91727->$data + 16));
            label1940 = *$tmp1941;
            if (((panda$core$Bit) { label1940 != NULL }).value) {
            {
                panda$core$String* $tmp1947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1946, label1940);
                $tmp1945 = $tmp1947;
                panda$core$String* $tmp1949 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1945, &$s1948);
                $tmp1944 = $tmp1949;
                $tmp1943 = $tmp1944;
                $finallyReturn1941 = $tmp1943;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1943));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1944));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1945));
                $tmp1726 = 6;
                goto $l1724;
                $l1950:;
                return $finallyReturn1941;
            }
            }
            $tmp1953 = &$s1954;
            $finallyReturn1951 = $tmp1953;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1953));
            $tmp1726 = 7;
            goto $l1724;
            $l1955:;
            return $finallyReturn1951;
        }
        }
        else {
        panda$core$Bit $tmp1957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp1957.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp1959 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$415_91727->$data + 24));
            m1958 = *$tmp1959;
            panda$collections$ImmutableArray** $tmp1961 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91727->$data + 32));
            args1960 = *$tmp1961;
            panda$core$String* $tmp1968 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) m1958->value)->name);
            $tmp1967 = $tmp1968;
            panda$core$String* $tmp1970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1967, &$s1969);
            $tmp1966 = $tmp1970;
            panda$core$String* $tmp1972 = panda$collections$ImmutableArray$join$R$panda$core$String(args1960);
            $tmp1971 = $tmp1972;
            panda$core$String* $tmp1973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1966, $tmp1971);
            $tmp1965 = $tmp1973;
            panda$core$String* $tmp1975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1965, &$s1974);
            $tmp1964 = $tmp1975;
            $tmp1963 = $tmp1964;
            $finallyReturn1961 = $tmp1963;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1963));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1964));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1965));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1971));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1966));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1967));
            $tmp1726 = 8;
            goto $l1724;
            $l1976:;
            return $finallyReturn1961;
        }
        }
        else {
        panda$core$Bit $tmp1978 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp1978.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1980 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91727->$data + 16));
            value1979 = *$tmp1980;
            org$pandalanguage$pandac$Type** $tmp1982 = ((org$pandalanguage$pandac$Type**) ((char*) $match$415_91727->$data + 24));
            type1981 = *$tmp1982;
            org$pandalanguage$pandac$Type* $tmp1985 = (($fn1984) value1979->$class->vtable[2])(value1979);
            $tmp1983 = $tmp1985;
            org$pandalanguage$pandac$Type* $tmp1987 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            $tmp1986 = $tmp1987;
            panda$core$Bit $tmp1988 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1983, $tmp1986);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1986));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1983));
            if ($tmp1988.value) {
            {
                panda$core$String* $tmp1996 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1995, ((panda$core$Object*) value1979));
                $tmp1994 = $tmp1996;
                panda$core$String* $tmp1998 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1994, &$s1997);
                $tmp1993 = $tmp1998;
                panda$core$String* $tmp1999 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1993, ((panda$core$Object*) type1981));
                $tmp1992 = $tmp1999;
                panda$core$String* $tmp2001 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1992, &$s2000);
                $tmp1991 = $tmp2001;
                $tmp1990 = $tmp1991;
                $finallyReturn1988 = $tmp1990;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1990));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1991));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1992));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1993));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1994));
                $tmp1726 = 9;
                goto $l1724;
                $l2002:;
                return $finallyReturn1988;
            }
            }
            panda$core$String* $tmp2011 = (($fn2010) value1979->$class->vtable[0])(value1979);
            $tmp2009 = $tmp2011;
            panda$core$String* $tmp2013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2009, &$s2012);
            $tmp2008 = $tmp2013;
            panda$core$String* $tmp2014 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2008, ((panda$core$Object*) type1981));
            $tmp2007 = $tmp2014;
            panda$core$String* $tmp2016 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2007, &$s2015);
            $tmp2006 = $tmp2016;
            $tmp2005 = $tmp2006;
            $finallyReturn2003 = $tmp2005;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2005));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2006));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2007));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2008));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2009));
            $tmp1726 = 10;
            goto $l1724;
            $l2017:;
            return $finallyReturn2003;
        }
        }
        else {
        panda$core$Bit $tmp2019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp2019.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp2021 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$415_91727->$data + 16));
            ce2020 = *$tmp2021;
            panda$core$String* $tmp2025 = org$pandalanguage$pandac$ChoiceEntry$convert$R$panda$core$String(ce2020);
            $tmp2024 = $tmp2025;
            $tmp2023 = $tmp2024;
            $finallyReturn2021 = $tmp2023;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2023));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2024));
            $tmp1726 = 11;
            goto $l1724;
            $l2026:;
            return $finallyReturn2021;
        }
        }
        else {
        panda$core$Bit $tmp2028 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp2028.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2030 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91727->$data + 16));
            base2029 = *$tmp2030;
            org$pandalanguage$pandac$ChoiceEntry** $tmp2032 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$415_91727->$data + 24));
            ce2031 = *$tmp2032;
            panda$core$Int64* $tmp2034 = ((panda$core$Int64*) ((char*) $match$415_91727->$data + 32));
            field2033 = *$tmp2034;
            panda$core$String* $tmp2044 = (($fn2043) base2029->$class->vtable[0])(base2029);
            $tmp2042 = $tmp2044;
            panda$core$String* $tmp2046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2042, &$s2045);
            $tmp2041 = $tmp2046;
            panda$core$String* $tmp2047 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2041, ((panda$core$Object*) ce2031));
            $tmp2040 = $tmp2047;
            panda$core$String* $tmp2049 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2040, &$s2048);
            $tmp2039 = $tmp2049;
            panda$core$Int64$wrapper* $tmp2051;
            $tmp2051 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2051->value = field2033;
            $tmp2050 = ((panda$core$Object*) $tmp2051);
            panda$core$String* $tmp2052 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2039, $tmp2050);
            $tmp2038 = $tmp2052;
            panda$core$String* $tmp2054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2038, &$s2053);
            $tmp2037 = $tmp2054;
            $tmp2036 = $tmp2037;
            $finallyReturn2034 = $tmp2036;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2036));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2037));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2038));
            panda$core$Panda$unref$panda$core$Object($tmp2050);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2039));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2040));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2041));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2042));
            $tmp1726 = 12;
            goto $l1724;
            $l2055:;
            return $finallyReturn2034;
        }
        }
        else {
        panda$core$Bit $tmp2057 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp2057.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2059 = ((org$pandalanguage$pandac$Type**) ((char*) $match$415_91727->$data + 16));
            type2058 = *$tmp2059;
            org$pandalanguage$pandac$IRNode** $tmp2061 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91727->$data + 24));
            call2060 = *$tmp2061;
            int $tmp2064;
            {
                $tmp2066 = call2060;
                $match$460_172065 = $tmp2066;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2066));
                panda$core$Bit $tmp2067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$460_172065->$rawValue, ((panda$core$Int64) { 6 }));
                if ($tmp2067.value) {
                {
                    panda$collections$ImmutableArray** $tmp2069 = ((panda$collections$ImmutableArray**) ((char*) $match$460_172065->$data + 32));
                    args2068 = *$tmp2069;
                    panda$core$String* $tmp2076 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type2058);
                    $tmp2075 = $tmp2076;
                    panda$core$String* $tmp2078 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2075, &$s2077);
                    $tmp2074 = $tmp2078;
                    panda$core$String* $tmp2080 = panda$collections$ImmutableArray$join$R$panda$core$String(args2068);
                    $tmp2079 = $tmp2080;
                    panda$core$String* $tmp2081 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2074, $tmp2079);
                    $tmp2073 = $tmp2081;
                    panda$core$String* $tmp2083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2073, &$s2082);
                    $tmp2072 = $tmp2083;
                    $tmp2071 = $tmp2072;
                    $finallyReturn2069 = $tmp2071;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2071));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2072));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2073));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2079));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2074));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2075));
                    $tmp2064 = 0;
                    goto $l2062;
                    $l2084:;
                    $tmp1726 = 13;
                    goto $l1724;
                    $l2085:;
                    return $finallyReturn2069;
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp2064 = -1;
            goto $l2062;
            $l2062:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2066));
            switch ($tmp2064) {
                case 0: goto $l2084;
                case -1: goto $l2087;
            }
            $l2087:;
        }
        }
        else {
        panda$core$Bit $tmp2088 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp2088.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2090 = ((org$pandalanguage$pandac$Type**) ((char*) $match$415_91727->$data + 16));
            Type2089 = *$tmp2090;
            $tmp2092 = &$s2093;
            $finallyReturn2090 = $tmp2092;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2092));
            $tmp1726 = 14;
            goto $l1724;
            $l2094:;
            return $finallyReturn2090;
        }
        }
        else {
        panda$core$Bit $tmp2096 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp2096.value) {
        {
            panda$core$String** $tmp2098 = ((panda$core$String**) ((char*) $match$415_91727->$data + 16));
            label2097 = *$tmp2098;
            if (((panda$core$Bit) { label2097 != NULL }).value) {
            {
                panda$core$String* $tmp2104 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2103, label2097);
                $tmp2102 = $tmp2104;
                panda$core$String* $tmp2106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2102, &$s2105);
                $tmp2101 = $tmp2106;
                $tmp2100 = $tmp2101;
                $finallyReturn2098 = $tmp2100;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2100));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2101));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2102));
                $tmp1726 = 15;
                goto $l1724;
                $l2107:;
                return $finallyReturn2098;
            }
            }
            $tmp2110 = &$s2111;
            $finallyReturn2108 = $tmp2110;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2110));
            $tmp1726 = 16;
            goto $l1724;
            $l2112:;
            return $finallyReturn2108;
        }
        }
        else {
        panda$core$Bit $tmp2114 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp2114.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2116 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91727->$data + 0));
            target2115 = *$tmp2116;
            org$pandalanguage$pandac$IRNode** $tmp2118 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91727->$data + 8));
            value2117 = *$tmp2118;
            if (((panda$core$Bit) { value2117 != NULL }).value) {
            {
                panda$core$String* $tmp2126 = (($fn2125) target2115->$class->vtable[0])(target2115);
                $tmp2124 = $tmp2126;
                panda$core$String* $tmp2128 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2124, &$s2127);
                $tmp2123 = $tmp2128;
                panda$core$String* $tmp2129 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2123, ((panda$core$Object*) value2117));
                $tmp2122 = $tmp2129;
                panda$core$String* $tmp2131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2122, &$s2130);
                $tmp2121 = $tmp2131;
                $tmp2120 = $tmp2121;
                $finallyReturn2118 = $tmp2120;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2120));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2121));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2122));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2123));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2124));
                $tmp1726 = 17;
                goto $l1724;
                $l2132:;
                return $finallyReturn2118;
            }
            }
            panda$core$String* $tmp2138 = (($fn2137) target2115->$class->vtable[0])(target2115);
            $tmp2136 = $tmp2138;
            $tmp2135 = $tmp2136;
            $finallyReturn2133 = $tmp2135;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2135));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2136));
            $tmp1726 = 18;
            goto $l1724;
            $l2139:;
            return $finallyReturn2133;
        }
        }
        else {
        panda$core$Bit $tmp2141 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp2141.value) {
        {
            panda$core$String** $tmp2143 = ((panda$core$String**) ((char*) $match$415_91727->$data + 16));
            label2142 = *$tmp2143;
            panda$collections$ImmutableArray** $tmp2145 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91727->$data + 24));
            statements2144 = *$tmp2145;
            org$pandalanguage$pandac$IRNode** $tmp2147 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91727->$data + 32));
            test2146 = *$tmp2147;
            int $tmp2150;
            {
                panda$core$MutableString* $tmp2154 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2154);
                $tmp2153 = $tmp2154;
                $tmp2152 = $tmp2153;
                result2151 = $tmp2152;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2152));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2153));
                if (((panda$core$Bit) { label2142 != NULL }).value) {
                {
                    panda$core$String* $tmp2157 = panda$core$String$convert$R$panda$core$String(label2142);
                    $tmp2156 = $tmp2157;
                    panda$core$String* $tmp2159 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2156, &$s2158);
                    $tmp2155 = $tmp2159;
                    panda$core$MutableString$append$panda$core$String(result2151, $tmp2155);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2155));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2156));
                }
                }
                panda$core$MutableString$append$panda$core$String(result2151, &$s2160);
                {
                    int $tmp2163;
                    {
                        ITable* $tmp2167 = ((panda$collections$Iterable*) statements2144)->$class->itable;
                        while ($tmp2167->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2167 = $tmp2167->next;
                        }
                        $fn2169 $tmp2168 = $tmp2167->methods[0];
                        panda$collections$Iterator* $tmp2170 = $tmp2168(((panda$collections$Iterable*) statements2144));
                        $tmp2166 = $tmp2170;
                        $tmp2165 = $tmp2166;
                        Iter$484$172164 = $tmp2165;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2165));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2166));
                        $l2171:;
                        ITable* $tmp2174 = Iter$484$172164->$class->itable;
                        while ($tmp2174->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2174 = $tmp2174->next;
                        }
                        $fn2176 $tmp2175 = $tmp2174->methods[0];
                        panda$core$Bit $tmp2177 = $tmp2175(Iter$484$172164);
                        panda$core$Bit $tmp2178 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2177);
                        bool $tmp2173 = $tmp2178.value;
                        if (!$tmp2173) goto $l2172;
                        {
                            int $tmp2181;
                            {
                                ITable* $tmp2185 = Iter$484$172164->$class->itable;
                                while ($tmp2185->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2185 = $tmp2185->next;
                                }
                                $fn2187 $tmp2186 = $tmp2185->methods[1];
                                panda$core$Object* $tmp2188 = $tmp2186(Iter$484$172164);
                                $tmp2184 = $tmp2188;
                                $tmp2183 = ((org$pandalanguage$pandac$IRNode*) $tmp2184);
                                s2182 = $tmp2183;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2183));
                                panda$core$Panda$unref$panda$core$Object($tmp2184);
                                panda$core$String* $tmp2191 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2182), &$s2190);
                                $tmp2189 = $tmp2191;
                                panda$core$MutableString$append$panda$core$String(result2151, $tmp2189);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2189));
                            }
                            $tmp2181 = -1;
                            goto $l2179;
                            $l2179:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2182));
                            switch ($tmp2181) {
                                case -1: goto $l2192;
                            }
                            $l2192:;
                        }
                        goto $l2171;
                        $l2172:;
                    }
                    $tmp2163 = -1;
                    goto $l2161;
                    $l2161:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$484$172164));
                    switch ($tmp2163) {
                        case -1: goto $l2193;
                    }
                    $l2193:;
                }
                panda$core$String* $tmp2197 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2196, ((panda$core$Object*) test2146));
                $tmp2195 = $tmp2197;
                panda$core$String* $tmp2199 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2195, &$s2198);
                $tmp2194 = $tmp2199;
                panda$core$MutableString$append$panda$core$String(result2151, $tmp2194);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2194));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2195));
                panda$core$String* $tmp2203 = panda$core$MutableString$finish$R$panda$core$String(result2151);
                $tmp2202 = $tmp2203;
                $tmp2201 = $tmp2202;
                $finallyReturn2199 = $tmp2201;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2201));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2202));
                $tmp2150 = 0;
                goto $l2148;
                $l2204:;
                $tmp1726 = 19;
                goto $l1724;
                $l2205:;
                return $finallyReturn2199;
            }
            $l2148:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2151));
            switch ($tmp2150) {
                case 0: goto $l2204;
            }
            $l2207:;
        }
        }
        else {
        panda$core$Bit $tmp2208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp2208.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2210 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91727->$data + 0));
            expr2209 = *$tmp2210;
            org$pandalanguage$pandac$IRNode** $tmp2212 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91727->$data + 8));
            stmt2211 = *$tmp2212;
            panda$core$String* $tmp2220 = (($fn2219) expr2209->$class->vtable[0])(expr2209);
            $tmp2218 = $tmp2220;
            panda$core$String* $tmp2222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2218, &$s2221);
            $tmp2217 = $tmp2222;
            panda$core$String* $tmp2223 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2217, ((panda$core$Object*) stmt2211));
            $tmp2216 = $tmp2223;
            panda$core$String* $tmp2225 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2216, &$s2224);
            $tmp2215 = $tmp2225;
            $tmp2214 = $tmp2215;
            $finallyReturn2212 = $tmp2214;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2214));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2215));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2216));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2217));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2218));
            $tmp1726 = 20;
            goto $l1724;
            $l2226:;
            return $finallyReturn2212;
        }
        }
        else {
        panda$core$Bit $tmp2228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp2228.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2230 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91727->$data + 24));
            base2229 = *$tmp2230;
            org$pandalanguage$pandac$FieldDecl** $tmp2232 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$415_91727->$data + 32));
            field2231 = *$tmp2232;
            panda$core$String* $tmp2240 = (($fn2239) base2229->$class->vtable[0])(base2229);
            $tmp2238 = $tmp2240;
            panda$core$String* $tmp2242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2238, &$s2241);
            $tmp2237 = $tmp2242;
            panda$core$String* $tmp2243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2237, ((org$pandalanguage$pandac$Symbol*) field2231)->name);
            $tmp2236 = $tmp2243;
            panda$core$String* $tmp2245 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2236, &$s2244);
            $tmp2235 = $tmp2245;
            $tmp2234 = $tmp2235;
            $finallyReturn2232 = $tmp2234;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2234));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2235));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2236));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2237));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2238));
            $tmp1726 = 21;
            goto $l1724;
            $l2246:;
            return $finallyReturn2232;
        }
        }
        else {
        panda$core$Bit $tmp2248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp2248.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2250 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91727->$data + 16));
            test2249 = *$tmp2250;
            panda$collections$ImmutableArray** $tmp2252 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91727->$data + 24));
            ifTrue2251 = *$tmp2252;
            org$pandalanguage$pandac$IRNode** $tmp2254 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91727->$data + 32));
            ifFalse2253 = *$tmp2254;
            int $tmp2257;
            {
                panda$core$MutableString* $tmp2261 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp2265 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2264, ((panda$core$Object*) test2249));
                $tmp2263 = $tmp2265;
                panda$core$String* $tmp2267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2263, &$s2266);
                $tmp2262 = $tmp2267;
                panda$core$MutableString$init$panda$core$String($tmp2261, $tmp2262);
                $tmp2260 = $tmp2261;
                $tmp2259 = $tmp2260;
                result2258 = $tmp2259;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2259));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2260));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2262));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2263));
                {
                    int $tmp2270;
                    {
                        ITable* $tmp2274 = ((panda$collections$Iterable*) ifTrue2251)->$class->itable;
                        while ($tmp2274->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2274 = $tmp2274->next;
                        }
                        $fn2276 $tmp2275 = $tmp2274->methods[0];
                        panda$collections$Iterator* $tmp2277 = $tmp2275(((panda$collections$Iterable*) ifTrue2251));
                        $tmp2273 = $tmp2277;
                        $tmp2272 = $tmp2273;
                        Iter$495$172271 = $tmp2272;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2272));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2273));
                        $l2278:;
                        ITable* $tmp2281 = Iter$495$172271->$class->itable;
                        while ($tmp2281->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2281 = $tmp2281->next;
                        }
                        $fn2283 $tmp2282 = $tmp2281->methods[0];
                        panda$core$Bit $tmp2284 = $tmp2282(Iter$495$172271);
                        panda$core$Bit $tmp2285 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2284);
                        bool $tmp2280 = $tmp2285.value;
                        if (!$tmp2280) goto $l2279;
                        {
                            int $tmp2288;
                            {
                                ITable* $tmp2292 = Iter$495$172271->$class->itable;
                                while ($tmp2292->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2292 = $tmp2292->next;
                                }
                                $fn2294 $tmp2293 = $tmp2292->methods[1];
                                panda$core$Object* $tmp2295 = $tmp2293(Iter$495$172271);
                                $tmp2291 = $tmp2295;
                                $tmp2290 = ((org$pandalanguage$pandac$IRNode*) $tmp2291);
                                s2289 = $tmp2290;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2290));
                                panda$core$Panda$unref$panda$core$Object($tmp2291);
                                panda$core$String* $tmp2298 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2289), &$s2297);
                                $tmp2296 = $tmp2298;
                                panda$core$MutableString$append$panda$core$String(result2258, $tmp2296);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2296));
                            }
                            $tmp2288 = -1;
                            goto $l2286;
                            $l2286:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2289));
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$495$172271));
                    switch ($tmp2270) {
                        case -1: goto $l2300;
                    }
                    $l2300:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2301, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result2258, $tmp2301);
                if (((panda$core$Bit) { ifFalse2253 != NULL }).value) {
                {
                    panda$core$String* $tmp2305 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2304, ((panda$core$Object*) ifFalse2253));
                    $tmp2303 = $tmp2305;
                    panda$core$String* $tmp2307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2303, &$s2306);
                    $tmp2302 = $tmp2307;
                    panda$core$MutableString$append$panda$core$String(result2258, $tmp2302);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2302));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2303));
                }
                }
                panda$core$String* $tmp2311 = panda$core$MutableString$finish$R$panda$core$String(result2258);
                $tmp2310 = $tmp2311;
                $tmp2309 = $tmp2310;
                $finallyReturn2307 = $tmp2309;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2309));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2310));
                $tmp2257 = 0;
                goto $l2255;
                $l2312:;
                $tmp1726 = 22;
                goto $l1724;
                $l2313:;
                return $finallyReturn2307;
            }
            $l2255:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2258));
            switch ($tmp2257) {
                case 0: goto $l2312;
            }
            $l2315:;
        }
        }
        else {
        panda$core$Bit $tmp2316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp2316.value) {
        {
            panda$core$UInt64* $tmp2318 = ((panda$core$UInt64*) ((char*) $match$415_91727->$data + 24));
            value2317 = *$tmp2318;
            panda$core$String* $tmp2322 = panda$core$UInt64$convert$R$panda$core$String(value2317);
            $tmp2321 = $tmp2322;
            $tmp2320 = $tmp2321;
            $finallyReturn2318 = $tmp2320;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2320));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2321));
            $tmp1726 = 23;
            goto $l1724;
            $l2323:;
            return $finallyReturn2318;
        }
        }
        else {
        panda$core$Bit $tmp2325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp2325.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2327 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91727->$data + 16));
            value2326 = *$tmp2327;
            panda$core$String* $tmp2333 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2332, ((panda$core$Object*) value2326));
            $tmp2331 = $tmp2333;
            panda$core$String* $tmp2335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2331, &$s2334);
            $tmp2330 = $tmp2335;
            $tmp2329 = $tmp2330;
            $finallyReturn2327 = $tmp2329;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2329));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2330));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2331));
            $tmp1726 = 24;
            goto $l1724;
            $l2336:;
            return $finallyReturn2327;
        }
        }
        else {
        panda$core$Bit $tmp2338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp2338.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2340 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91727->$data + 16));
            value2339 = *$tmp2340;
            panda$core$String* $tmp2346 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2345, ((panda$core$Object*) value2339));
            $tmp2344 = $tmp2346;
            panda$core$String* $tmp2348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2344, &$s2347);
            $tmp2343 = $tmp2348;
            $tmp2342 = $tmp2343;
            $finallyReturn2340 = $tmp2342;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2342));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2343));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2344));
            $tmp1726 = 25;
            goto $l1724;
            $l2349:;
            return $finallyReturn2340;
        }
        }
        else {
        panda$core$Bit $tmp2351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp2351.value) {
        {
            panda$core$String** $tmp2353 = ((panda$core$String**) ((char*) $match$415_91727->$data + 16));
            label2352 = *$tmp2353;
            panda$collections$ImmutableArray** $tmp2355 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91727->$data + 24));
            statements2354 = *$tmp2355;
            int $tmp2358;
            {
                panda$core$MutableString* $tmp2362 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2362);
                $tmp2361 = $tmp2362;
                $tmp2360 = $tmp2361;
                result2359 = $tmp2360;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2360));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2361));
                if (((panda$core$Bit) { label2352 != NULL }).value) {
                {
                    panda$core$String* $tmp2365 = panda$core$String$convert$R$panda$core$String(label2352);
                    $tmp2364 = $tmp2365;
                    panda$core$String* $tmp2367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2364, &$s2366);
                    $tmp2363 = $tmp2367;
                    panda$core$MutableString$append$panda$core$String(result2359, $tmp2363);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2363));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2364));
                }
                }
                panda$core$MutableString$append$panda$core$String(result2359, &$s2368);
                {
                    int $tmp2371;
                    {
                        ITable* $tmp2375 = ((panda$collections$Iterable*) statements2354)->$class->itable;
                        while ($tmp2375->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2375 = $tmp2375->next;
                        }
                        $fn2377 $tmp2376 = $tmp2375->methods[0];
                        panda$collections$Iterator* $tmp2378 = $tmp2376(((panda$collections$Iterable*) statements2354));
                        $tmp2374 = $tmp2378;
                        $tmp2373 = $tmp2374;
                        Iter$515$172372 = $tmp2373;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2373));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2374));
                        $l2379:;
                        ITable* $tmp2382 = Iter$515$172372->$class->itable;
                        while ($tmp2382->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2382 = $tmp2382->next;
                        }
                        $fn2384 $tmp2383 = $tmp2382->methods[0];
                        panda$core$Bit $tmp2385 = $tmp2383(Iter$515$172372);
                        panda$core$Bit $tmp2386 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2385);
                        bool $tmp2381 = $tmp2386.value;
                        if (!$tmp2381) goto $l2380;
                        {
                            int $tmp2389;
                            {
                                ITable* $tmp2393 = Iter$515$172372->$class->itable;
                                while ($tmp2393->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2393 = $tmp2393->next;
                                }
                                $fn2395 $tmp2394 = $tmp2393->methods[1];
                                panda$core$Object* $tmp2396 = $tmp2394(Iter$515$172372);
                                $tmp2392 = $tmp2396;
                                $tmp2391 = ((org$pandalanguage$pandac$IRNode*) $tmp2392);
                                s2390 = $tmp2391;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2391));
                                panda$core$Panda$unref$panda$core$Object($tmp2392);
                                panda$core$String* $tmp2399 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2390), &$s2398);
                                $tmp2397 = $tmp2399;
                                panda$core$MutableString$append$panda$core$String(result2359, $tmp2397);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2397));
                            }
                            $tmp2389 = -1;
                            goto $l2387;
                            $l2387:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2390));
                            switch ($tmp2389) {
                                case -1: goto $l2400;
                            }
                            $l2400:;
                        }
                        goto $l2379;
                        $l2380:;
                    }
                    $tmp2371 = -1;
                    goto $l2369;
                    $l2369:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$515$172372));
                    switch ($tmp2371) {
                        case -1: goto $l2401;
                    }
                    $l2401:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2402, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result2359, $tmp2402);
                panda$core$String* $tmp2406 = panda$core$MutableString$finish$R$panda$core$String(result2359);
                $tmp2405 = $tmp2406;
                $tmp2404 = $tmp2405;
                $finallyReturn2402 = $tmp2404;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2404));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2405));
                $tmp2358 = 0;
                goto $l2356;
                $l2407:;
                $tmp1726 = 26;
                goto $l1724;
                $l2408:;
                return $finallyReturn2402;
            }
            $l2356:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2359));
            switch ($tmp2358) {
                case 0: goto $l2407;
            }
            $l2410:;
        }
        }
        else {
        panda$core$Bit $tmp2411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp2411.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2413 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91727->$data + 16));
            value2412 = *$tmp2413;
            panda$collections$ImmutableArray** $tmp2415 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91727->$data + 24));
            whens2414 = *$tmp2415;
            panda$collections$ImmutableArray** $tmp2417 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91727->$data + 32));
            other2416 = *$tmp2417;
            int $tmp2420;
            {
                panda$core$MutableString* $tmp2424 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp2428 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2427, ((panda$core$Object*) value2412));
                $tmp2426 = $tmp2428;
                panda$core$String* $tmp2430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2426, &$s2429);
                $tmp2425 = $tmp2430;
                panda$core$MutableString$init$panda$core$String($tmp2424, $tmp2425);
                $tmp2423 = $tmp2424;
                $tmp2422 = $tmp2423;
                result2421 = $tmp2422;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2422));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2423));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2425));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2426));
                {
                    int $tmp2433;
                    {
                        ITable* $tmp2437 = ((panda$collections$Iterable*) whens2414)->$class->itable;
                        while ($tmp2437->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2437 = $tmp2437->next;
                        }
                        $fn2439 $tmp2438 = $tmp2437->methods[0];
                        panda$collections$Iterator* $tmp2440 = $tmp2438(((panda$collections$Iterable*) whens2414));
                        $tmp2436 = $tmp2440;
                        $tmp2435 = $tmp2436;
                        Iter$522$172434 = $tmp2435;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2435));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2436));
                        $l2441:;
                        ITable* $tmp2444 = Iter$522$172434->$class->itable;
                        while ($tmp2444->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2444 = $tmp2444->next;
                        }
                        $fn2446 $tmp2445 = $tmp2444->methods[0];
                        panda$core$Bit $tmp2447 = $tmp2445(Iter$522$172434);
                        panda$core$Bit $tmp2448 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2447);
                        bool $tmp2443 = $tmp2448.value;
                        if (!$tmp2443) goto $l2442;
                        {
                            int $tmp2451;
                            {
                                ITable* $tmp2455 = Iter$522$172434->$class->itable;
                                while ($tmp2455->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2455 = $tmp2455->next;
                                }
                                $fn2457 $tmp2456 = $tmp2455->methods[1];
                                panda$core$Object* $tmp2458 = $tmp2456(Iter$522$172434);
                                $tmp2454 = $tmp2458;
                                $tmp2453 = ((org$pandalanguage$pandac$IRNode*) $tmp2454);
                                w2452 = $tmp2453;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2453));
                                panda$core$Panda$unref$panda$core$Object($tmp2454);
                                panda$core$String* $tmp2461 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w2452), &$s2460);
                                $tmp2459 = $tmp2461;
                                panda$core$MutableString$append$panda$core$String(result2421, $tmp2459);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2459));
                            }
                            $tmp2451 = -1;
                            goto $l2449;
                            $l2449:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w2452));
                            switch ($tmp2451) {
                                case -1: goto $l2462;
                            }
                            $l2462:;
                        }
                        goto $l2441;
                        $l2442:;
                    }
                    $tmp2433 = -1;
                    goto $l2431;
                    $l2431:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$522$172434));
                    switch ($tmp2433) {
                        case -1: goto $l2463;
                    }
                    $l2463:;
                }
                if (((panda$core$Bit) { other2416 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$String(result2421, &$s2464);
                    {
                        int $tmp2467;
                        {
                            ITable* $tmp2471 = ((panda$collections$Iterable*) other2416)->$class->itable;
                            while ($tmp2471->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp2471 = $tmp2471->next;
                            }
                            $fn2473 $tmp2472 = $tmp2471->methods[0];
                            panda$collections$Iterator* $tmp2474 = $tmp2472(((panda$collections$Iterable*) other2416));
                            $tmp2470 = $tmp2474;
                            $tmp2469 = $tmp2470;
                            Iter$527$212468 = $tmp2469;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2469));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2470));
                            $l2475:;
                            ITable* $tmp2478 = Iter$527$212468->$class->itable;
                            while ($tmp2478->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2478 = $tmp2478->next;
                            }
                            $fn2480 $tmp2479 = $tmp2478->methods[0];
                            panda$core$Bit $tmp2481 = $tmp2479(Iter$527$212468);
                            panda$core$Bit $tmp2482 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2481);
                            bool $tmp2477 = $tmp2482.value;
                            if (!$tmp2477) goto $l2476;
                            {
                                int $tmp2485;
                                {
                                    ITable* $tmp2489 = Iter$527$212468->$class->itable;
                                    while ($tmp2489->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp2489 = $tmp2489->next;
                                    }
                                    $fn2491 $tmp2490 = $tmp2489->methods[1];
                                    panda$core$Object* $tmp2492 = $tmp2490(Iter$527$212468);
                                    $tmp2488 = $tmp2492;
                                    $tmp2487 = ((org$pandalanguage$pandac$IRNode*) $tmp2488);
                                    s2486 = $tmp2487;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2487));
                                    panda$core$Panda$unref$panda$core$Object($tmp2488);
                                    panda$core$String* $tmp2495 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2486), &$s2494);
                                    $tmp2493 = $tmp2495;
                                    panda$core$MutableString$append$panda$core$String(result2421, $tmp2493);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2493));
                                }
                                $tmp2485 = -1;
                                goto $l2483;
                                $l2483:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2486));
                                switch ($tmp2485) {
                                    case -1: goto $l2496;
                                }
                                $l2496:;
                            }
                            goto $l2475;
                            $l2476:;
                        }
                        $tmp2467 = -1;
                        goto $l2465;
                        $l2465:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$527$212468));
                        switch ($tmp2467) {
                            case -1: goto $l2497;
                        }
                        $l2497:;
                    }
                }
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2498, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result2421, $tmp2498);
                panda$core$String* $tmp2502 = panda$core$MutableString$finish$R$panda$core$String(result2421);
                $tmp2501 = $tmp2502;
                $tmp2500 = $tmp2501;
                $finallyReturn2498 = $tmp2500;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2500));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2501));
                $tmp2420 = 0;
                goto $l2418;
                $l2503:;
                $tmp1726 = 27;
                goto $l1724;
                $l2504:;
                return $finallyReturn2498;
            }
            $l2418:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2421));
            switch ($tmp2420) {
                case 0: goto $l2503;
            }
            $l2506:;
        }
        }
        else {
        panda$core$Bit $tmp2507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp2507.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2509 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91727->$data + 16));
            target2508 = *$tmp2509;
            org$pandalanguage$pandac$MethodRef** $tmp2511 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$415_91727->$data + 24));
            m2510 = *$tmp2511;
            if (((panda$core$Bit) { target2508 != NULL }).value) {
            {
                panda$core$String* $tmp2519 = (($fn2518) target2508->$class->vtable[0])(target2508);
                $tmp2517 = $tmp2519;
                panda$core$String* $tmp2521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2517, &$s2520);
                $tmp2516 = $tmp2521;
                panda$core$String* $tmp2522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2516, ((org$pandalanguage$pandac$Symbol*) m2510->value)->name);
                $tmp2515 = $tmp2522;
                panda$core$String* $tmp2524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2515, &$s2523);
                $tmp2514 = $tmp2524;
                $tmp2513 = $tmp2514;
                $finallyReturn2511 = $tmp2513;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2513));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2514));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2515));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2516));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2517));
                $tmp1726 = 28;
                goto $l1724;
                $l2525:;
                return $finallyReturn2511;
            }
            }
            $tmp2528 = ((org$pandalanguage$pandac$Symbol*) m2510->value)->name;
            $finallyReturn2526 = $tmp2528;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2528));
            $tmp1726 = 29;
            goto $l1724;
            $l2529:;
            return $finallyReturn2526;
        }
        }
        else {
        panda$core$Bit $tmp2531 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp2531.value) {
        {
            panda$core$UInt64* $tmp2533 = ((panda$core$UInt64*) ((char*) $match$415_91727->$data + 24));
            value2532 = *$tmp2533;
            panda$core$UInt64$wrapper* $tmp2539;
            $tmp2539 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
            $tmp2539->value = value2532;
            $tmp2538 = ((panda$core$Object*) $tmp2539);
            panda$core$String* $tmp2540 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2537, $tmp2538);
            $tmp2536 = $tmp2540;
            $tmp2535 = $tmp2536;
            $finallyReturn2533 = $tmp2535;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2535));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2536));
            panda$core$Panda$unref$panda$core$Object($tmp2538);
            $tmp1726 = 30;
            goto $l1724;
            $l2541:;
            return $finallyReturn2533;
        }
        }
        else {
        panda$core$Bit $tmp2543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp2543.value) {
        {
            $tmp2545 = &$s2546;
            $finallyReturn2543 = $tmp2545;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2545));
            $tmp1726 = 31;
            goto $l1724;
            $l2547:;
            return $finallyReturn2543;
        }
        }
        else {
        panda$core$Bit $tmp2549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp2549.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2551 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$415_91727->$data + 16));
            op2550 = *$tmp2551;
            org$pandalanguage$pandac$IRNode** $tmp2553 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91727->$data + 24));
            base2552 = *$tmp2553;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2561;
            $tmp2561 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp2561->value = op2550;
            $tmp2560 = ((panda$core$Object*) $tmp2561);
            panda$core$String* $tmp2563 = (($fn2562) $tmp2560->$class->vtable[0])($tmp2560);
            $tmp2559 = $tmp2563;
            panda$core$String* $tmp2565 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2559, &$s2564);
            $tmp2558 = $tmp2565;
            panda$core$String* $tmp2566 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2558, ((panda$core$Object*) base2552));
            $tmp2557 = $tmp2566;
            panda$core$String* $tmp2568 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2557, &$s2567);
            $tmp2556 = $tmp2568;
            $tmp2555 = $tmp2556;
            $finallyReturn2553 = $tmp2555;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2555));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2556));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2557));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2558));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2559));
            panda$core$Panda$unref$panda$core$Object($tmp2560);
            $tmp1726 = 32;
            goto $l1724;
            $l2569:;
            return $finallyReturn2553;
        }
        }
        else {
        panda$core$Bit $tmp2571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp2571.value) {
        {
            panda$core$String** $tmp2573 = ((panda$core$String**) ((char*) $match$415_91727->$data + 16));
            label2572 = *$tmp2573;
            org$pandalanguage$pandac$IRNode** $tmp2575 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91727->$data + 24));
            target2574 = *$tmp2575;
            org$pandalanguage$pandac$IRNode** $tmp2577 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91727->$data + 32));
            list2576 = *$tmp2577;
            panda$collections$ImmutableArray** $tmp2579 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91727->$data + 40));
            statements2578 = *$tmp2579;
            int $tmp2582;
            {
                panda$core$MutableString* $tmp2586 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2586);
                $tmp2585 = $tmp2586;
                $tmp2584 = $tmp2585;
                result2583 = $tmp2584;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2584));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2585));
                if (((panda$core$Bit) { label2572 != NULL }).value) {
                {
                    panda$core$String* $tmp2589 = panda$core$String$convert$R$panda$core$String(label2572);
                    $tmp2588 = $tmp2589;
                    panda$core$String* $tmp2591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2588, &$s2590);
                    $tmp2587 = $tmp2591;
                    panda$core$MutableString$append$panda$core$String(result2583, $tmp2587);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2587));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2588));
                }
                }
                panda$core$String* $tmp2597 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2596, ((panda$core$Object*) target2574));
                $tmp2595 = $tmp2597;
                panda$core$String* $tmp2599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2595, &$s2598);
                $tmp2594 = $tmp2599;
                panda$core$String* $tmp2600 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2594, ((panda$core$Object*) list2576));
                $tmp2593 = $tmp2600;
                panda$core$String* $tmp2602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2593, &$s2601);
                $tmp2592 = $tmp2602;
                panda$core$MutableString$append$panda$core$String(result2583, $tmp2592);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2592));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2593));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2594));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2595));
                {
                    int $tmp2605;
                    {
                        ITable* $tmp2609 = ((panda$collections$Iterable*) statements2578)->$class->itable;
                        while ($tmp2609->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2609 = $tmp2609->next;
                        }
                        $fn2611 $tmp2610 = $tmp2609->methods[0];
                        panda$collections$Iterator* $tmp2612 = $tmp2610(((panda$collections$Iterable*) statements2578));
                        $tmp2608 = $tmp2612;
                        $tmp2607 = $tmp2608;
                        Iter$550$172606 = $tmp2607;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2607));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2608));
                        $l2613:;
                        ITable* $tmp2616 = Iter$550$172606->$class->itable;
                        while ($tmp2616->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2616 = $tmp2616->next;
                        }
                        $fn2618 $tmp2617 = $tmp2616->methods[0];
                        panda$core$Bit $tmp2619 = $tmp2617(Iter$550$172606);
                        panda$core$Bit $tmp2620 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2619);
                        bool $tmp2615 = $tmp2620.value;
                        if (!$tmp2615) goto $l2614;
                        {
                            int $tmp2623;
                            {
                                ITable* $tmp2627 = Iter$550$172606->$class->itable;
                                while ($tmp2627->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2627 = $tmp2627->next;
                                }
                                $fn2629 $tmp2628 = $tmp2627->methods[1];
                                panda$core$Object* $tmp2630 = $tmp2628(Iter$550$172606);
                                $tmp2626 = $tmp2630;
                                $tmp2625 = ((org$pandalanguage$pandac$IRNode*) $tmp2626);
                                s2624 = $tmp2625;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2625));
                                panda$core$Panda$unref$panda$core$Object($tmp2626);
                                panda$core$String* $tmp2633 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2624), &$s2632);
                                $tmp2631 = $tmp2633;
                                panda$core$MutableString$append$panda$core$String(result2583, $tmp2631);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2631));
                            }
                            $tmp2623 = -1;
                            goto $l2621;
                            $l2621:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2624));
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$550$172606));
                    switch ($tmp2605) {
                        case -1: goto $l2635;
                    }
                    $l2635:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2636, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result2583, $tmp2636);
                panda$core$String* $tmp2640 = panda$core$MutableString$finish$R$panda$core$String(result2583);
                $tmp2639 = $tmp2640;
                $tmp2638 = $tmp2639;
                $finallyReturn2636 = $tmp2638;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2638));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2639));
                $tmp2582 = 0;
                goto $l2580;
                $l2641:;
                $tmp1726 = 33;
                goto $l1724;
                $l2642:;
                return $finallyReturn2636;
            }
            $l2580:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2583));
            switch ($tmp2582) {
                case 0: goto $l2641;
            }
            $l2644:;
        }
        }
        else {
        panda$core$Bit $tmp2645 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp2645.value) {
        {
            panda$core$Real64* $tmp2647 = ((panda$core$Real64*) ((char*) $match$415_91727->$data + 24));
            value2646 = *$tmp2647;
            panda$core$String* $tmp2651 = panda$core$Real64$convert$R$panda$core$String(value2646);
            $tmp2650 = $tmp2651;
            $tmp2649 = $tmp2650;
            $finallyReturn2647 = $tmp2649;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2649));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2650));
            $tmp1726 = 34;
            goto $l1724;
            $l2652:;
            return $finallyReturn2647;
        }
        }
        else {
        panda$core$Bit $tmp2654 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp2654.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2656 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91727->$data + 16));
            value2655 = *$tmp2656;
            if (((panda$core$Bit) { value2655 != NULL }).value) {
            {
                panda$core$String* $tmp2662 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2661, ((panda$core$Object*) value2655));
                $tmp2660 = $tmp2662;
                panda$core$String* $tmp2664 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2660, &$s2663);
                $tmp2659 = $tmp2664;
                $tmp2658 = $tmp2659;
                $finallyReturn2656 = $tmp2658;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2658));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2659));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2660));
                $tmp1726 = 35;
                goto $l1724;
                $l2665:;
                return $finallyReturn2656;
            }
            }
            $tmp2668 = &$s2669;
            $finallyReturn2666 = $tmp2668;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2668));
            $tmp1726 = 36;
            goto $l1724;
            $l2670:;
            return $finallyReturn2666;
        }
        }
        else {
        panda$core$Bit $tmp2672 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp2672.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2674 = ((org$pandalanguage$pandac$Type**) ((char*) $match$415_91727->$data + 16));
            type2673 = *$tmp2674;
            panda$core$Int64* $tmp2676 = ((panda$core$Int64*) ((char*) $match$415_91727->$data + 24));
            id2675 = *$tmp2676;
            panda$core$Int64$wrapper* $tmp2683;
            $tmp2683 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2683->value = id2675;
            $tmp2682 = ((panda$core$Object*) $tmp2683);
            panda$core$String* $tmp2684 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2681, $tmp2682);
            $tmp2680 = $tmp2684;
            panda$core$String* $tmp2686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2680, &$s2685);
            $tmp2679 = $tmp2686;
            $tmp2678 = $tmp2679;
            $finallyReturn2676 = $tmp2678;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2678));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2679));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2680));
            panda$core$Panda$unref$panda$core$Object($tmp2682);
            $tmp1726 = 37;
            goto $l1724;
            $l2687:;
            return $finallyReturn2676;
        }
        }
        else {
        panda$core$Bit $tmp2689 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2689.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2691 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91727->$data + 0));
            base2690 = *$tmp2691;
            panda$core$Int64* $tmp2693 = ((panda$core$Int64*) ((char*) $match$415_91727->$data + 8));
            id2692 = *$tmp2693;
            panda$core$Int64$wrapper* $tmp2702;
            $tmp2702 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2702->value = id2692;
            $tmp2701 = ((panda$core$Object*) $tmp2702);
            panda$core$String* $tmp2703 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2700, $tmp2701);
            $tmp2699 = $tmp2703;
            panda$core$String* $tmp2705 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2699, &$s2704);
            $tmp2698 = $tmp2705;
            panda$core$String* $tmp2706 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2698, ((panda$core$Object*) base2690));
            $tmp2697 = $tmp2706;
            panda$core$String* $tmp2708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2697, &$s2707);
            $tmp2696 = $tmp2708;
            $tmp2695 = $tmp2696;
            $finallyReturn2693 = $tmp2695;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2695));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2696));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2697));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2698));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2699));
            panda$core$Panda$unref$panda$core$Object($tmp2701);
            $tmp1726 = 38;
            goto $l1724;
            $l2709:;
            return $finallyReturn2693;
        }
        }
        else {
        panda$core$Bit $tmp2711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp2711.value) {
        {
            $tmp2713 = &$s2714;
            $finallyReturn2711 = $tmp2713;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2713));
            $tmp1726 = 39;
            goto $l1724;
            $l2715:;
            return $finallyReturn2711;
        }
        }
        else {
        panda$core$Bit $tmp2717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp2717.value) {
        {
            panda$core$String** $tmp2719 = ((panda$core$String**) ((char*) $match$415_91727->$data + 16));
            str2718 = *$tmp2719;
            $tmp2721 = str2718;
            $finallyReturn2719 = $tmp2721;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2721));
            $tmp1726 = 40;
            goto $l1724;
            $l2722:;
            return $finallyReturn2719;
        }
        }
        else {
        panda$core$Bit $tmp2724 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp2724.value) {
        {
            $tmp2726 = &$s2727;
            $finallyReturn2724 = $tmp2726;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2726));
            $tmp1726 = 41;
            goto $l1724;
            $l2728:;
            return $finallyReturn2724;
        }
        }
        else {
        panda$core$Bit $tmp2730 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp2730.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2732 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91727->$data + 16));
            test2731 = *$tmp2732;
            org$pandalanguage$pandac$IRNode** $tmp2734 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91727->$data + 24));
            ifTrue2733 = *$tmp2734;
            org$pandalanguage$pandac$IRNode** $tmp2736 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91727->$data + 32));
            ifFalse2735 = *$tmp2736;
            panda$core$String* $tmp2746 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2745, ((panda$core$Object*) test2731));
            $tmp2744 = $tmp2746;
            panda$core$String* $tmp2748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2744, &$s2747);
            $tmp2743 = $tmp2748;
            panda$core$String* $tmp2749 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2743, ((panda$core$Object*) ifTrue2733));
            $tmp2742 = $tmp2749;
            panda$core$String* $tmp2751 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2742, &$s2750);
            $tmp2741 = $tmp2751;
            panda$core$String* $tmp2752 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2741, ((panda$core$Object*) ifFalse2735));
            $tmp2740 = $tmp2752;
            panda$core$String* $tmp2754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2740, &$s2753);
            $tmp2739 = $tmp2754;
            $tmp2738 = $tmp2739;
            $finallyReturn2736 = $tmp2738;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2738));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2739));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2740));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2741));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2742));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2743));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2744));
            $tmp1726 = 42;
            goto $l1724;
            $l2755:;
            return $finallyReturn2736;
        }
        }
        else {
        panda$core$Bit $tmp2757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp2757.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2759 = ((org$pandalanguage$pandac$Type**) ((char*) $match$415_91727->$data + 16));
            type2758 = *$tmp2759;
            panda$core$String* $tmp2763 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type2758);
            $tmp2762 = $tmp2763;
            $tmp2761 = $tmp2762;
            $finallyReturn2759 = $tmp2761;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2761));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2762));
            $tmp1726 = 43;
            goto $l1724;
            $l2764:;
            return $finallyReturn2759;
        }
        }
        else {
        panda$core$Bit $tmp2766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp2766.value) {
        {
            panda$core$String** $tmp2768 = ((panda$core$String**) ((char*) $match$415_91727->$data + 16));
            name2767 = *$tmp2768;
            $tmp2770 = name2767;
            $finallyReturn2768 = $tmp2770;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2770));
            $tmp1726 = 44;
            goto $l1724;
            $l2771:;
            return $finallyReturn2768;
        }
        }
        else {
        panda$core$Bit $tmp2773 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp2773.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2775 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91727->$data + 24));
            base2774 = *$tmp2775;
            panda$collections$ImmutableArray** $tmp2777 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91727->$data + 32));
            args2776 = *$tmp2777;
            panda$core$String* $tmp2785 = (($fn2784) base2774->$class->vtable[0])(base2774);
            $tmp2783 = $tmp2785;
            panda$core$String* $tmp2787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2783, &$s2786);
            $tmp2782 = $tmp2787;
            panda$core$String* $tmp2789 = panda$collections$ImmutableArray$join$R$panda$core$String(args2776);
            $tmp2788 = $tmp2789;
            panda$core$String* $tmp2790 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2782, $tmp2788);
            $tmp2781 = $tmp2790;
            panda$core$String* $tmp2792 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2781, &$s2791);
            $tmp2780 = $tmp2792;
            $tmp2779 = $tmp2780;
            $finallyReturn2777 = $tmp2779;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2779));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2780));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2781));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2788));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2782));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2783));
            $tmp1726 = 45;
            goto $l1724;
            $l2793:;
            return $finallyReturn2777;
        }
        }
        else {
        panda$core$Bit $tmp2795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp2795.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2797 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91727->$data + 24));
            target2796 = *$tmp2797;
            panda$collections$ImmutableArray** $tmp2799 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91727->$data + 32));
            methods2798 = *$tmp2799;
            panda$collections$ImmutableArray** $tmp2801 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91727->$data + 40));
            args2800 = *$tmp2801;
            panda$core$String* $tmp2811 = (($fn2810) target2796->$class->vtable[0])(target2796);
            $tmp2809 = $tmp2811;
            panda$core$String* $tmp2813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2809, &$s2812);
            $tmp2808 = $tmp2813;
            panda$core$Object* $tmp2815 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2798, ((panda$core$Int64) { 0 }));
            $tmp2814 = $tmp2815;
            panda$core$String* $tmp2816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2808, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2814)->value)->name);
            $tmp2807 = $tmp2816;
            panda$core$String* $tmp2818 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2807, &$s2817);
            $tmp2806 = $tmp2818;
            panda$core$String* $tmp2820 = panda$collections$ImmutableArray$join$R$panda$core$String(args2800);
            $tmp2819 = $tmp2820;
            panda$core$String* $tmp2821 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2806, $tmp2819);
            $tmp2805 = $tmp2821;
            panda$core$String* $tmp2823 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2805, &$s2822);
            $tmp2804 = $tmp2823;
            $tmp2803 = $tmp2804;
            $finallyReturn2801 = $tmp2803;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2803));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2804));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2805));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2819));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2806));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2807));
            panda$core$Panda$unref$panda$core$Object($tmp2814);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2808));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2809));
            $tmp1726 = 46;
            goto $l1724;
            $l2824:;
            return $finallyReturn2801;
        }
        }
        else {
        panda$core$Bit $tmp2826 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp2826.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2828 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91727->$data + 16));
            target2827 = *$tmp2828;
            panda$collections$ImmutableArray** $tmp2830 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91727->$data + 24));
            methods2829 = *$tmp2830;
            panda$core$String* $tmp2838 = (($fn2837) target2827->$class->vtable[0])(target2827);
            $tmp2836 = $tmp2838;
            panda$core$String* $tmp2840 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2836, &$s2839);
            $tmp2835 = $tmp2840;
            panda$core$Object* $tmp2842 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2829, ((panda$core$Int64) { 0 }));
            $tmp2841 = $tmp2842;
            panda$core$String* $tmp2843 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2835, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2841)->value)->name);
            $tmp2834 = $tmp2843;
            panda$core$String* $tmp2845 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2834, &$s2844);
            $tmp2833 = $tmp2845;
            $tmp2832 = $tmp2833;
            $finallyReturn2830 = $tmp2832;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2832));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2833));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2834));
            panda$core$Panda$unref$panda$core$Object($tmp2841);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2835));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2836));
            $tmp1726 = 47;
            goto $l1724;
            $l2846:;
            return $finallyReturn2830;
        }
        }
        else {
        panda$core$Bit $tmp2848 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp2848.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2850 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91727->$data + 16));
            start2849 = *$tmp2850;
            org$pandalanguage$pandac$IRNode** $tmp2852 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91727->$data + 24));
            end2851 = *$tmp2852;
            panda$core$Bit* $tmp2854 = ((panda$core$Bit*) ((char*) $match$415_91727->$data + 32));
            inclusive2853 = *$tmp2854;
            org$pandalanguage$pandac$IRNode** $tmp2856 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91727->$data + 33));
            step2855 = *$tmp2856;
            int $tmp2859;
            {
                panda$core$MutableString* $tmp2863 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2863);
                $tmp2862 = $tmp2863;
                $tmp2861 = $tmp2862;
                result2860 = $tmp2861;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2861));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2862));
                if (((panda$core$Bit) { start2849 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result2860, ((panda$core$Object*) start2849));
                }
                }
                if (inclusive2853.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result2860, &$s2864);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(result2860, &$s2865);
                }
                }
                if (((panda$core$Bit) { end2851 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result2860, ((panda$core$Object*) end2851));
                }
                }
                if (((panda$core$Bit) { step2855 != NULL }).value) {
                {
                    panda$core$String* $tmp2869 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2868, ((panda$core$Object*) step2855));
                    $tmp2867 = $tmp2869;
                    panda$core$String* $tmp2871 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2867, &$s2870);
                    $tmp2866 = $tmp2871;
                    panda$core$MutableString$append$panda$core$String(result2860, $tmp2866);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2866));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2867));
                }
                }
                panda$core$String* $tmp2875 = panda$core$MutableString$finish$R$panda$core$String(result2860);
                $tmp2874 = $tmp2875;
                $tmp2873 = $tmp2874;
                $finallyReturn2871 = $tmp2873;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2873));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2874));
                $tmp2859 = 0;
                goto $l2857;
                $l2876:;
                $tmp1726 = 48;
                goto $l1724;
                $l2877:;
                return $finallyReturn2871;
            }
            $l2857:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2860));
            switch ($tmp2859) {
                case 0: goto $l2876;
            }
            $l2879:;
        }
        }
        else {
        panda$core$Bit $tmp2880 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp2880.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp2882 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$415_91727->$data + 16));
            kind2881 = *$tmp2882;
            panda$collections$ImmutableArray** $tmp2884 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91727->$data + 24));
            decls2883 = *$tmp2884;
            int $tmp2887;
            {
                panda$core$MutableString* $tmp2891 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2891);
                $tmp2890 = $tmp2891;
                $tmp2889 = $tmp2890;
                result2888 = $tmp2889;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2889));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2890));
                {
                    $match$604_172892 = kind2881;
                    panda$core$Bit $tmp2893 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$604_172892.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp2893.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2888, &$s2894);
                    }
                    }
                    else {
                    panda$core$Bit $tmp2895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$604_172892.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp2895.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2888, &$s2896);
                    }
                    }
                    else {
                    panda$core$Bit $tmp2897 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$604_172892.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp2897.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2888, &$s2898);
                    }
                    }
                    else {
                    panda$core$Bit $tmp2899 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$604_172892.$rawValue, ((panda$core$Int64) { 3 }));
                    if ($tmp2899.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2888, &$s2900);
                    }
                    }
                    }
                    }
                    }
                }
                panda$core$String* $tmp2902 = panda$collections$ImmutableArray$join$R$panda$core$String(decls2883);
                $tmp2901 = $tmp2902;
                panda$core$MutableString$append$panda$core$String(result2888, $tmp2901);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2901));
                panda$core$String* $tmp2906 = panda$core$MutableString$finish$R$panda$core$String(result2888);
                $tmp2905 = $tmp2906;
                $tmp2904 = $tmp2905;
                $finallyReturn2902 = $tmp2904;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2904));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2905));
                $tmp2887 = 0;
                goto $l2885;
                $l2907:;
                $tmp1726 = 49;
                goto $l1724;
                $l2908:;
                return $finallyReturn2902;
            }
            $l2885:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2888));
            switch ($tmp2887) {
                case 0: goto $l2907;
            }
            $l2910:;
        }
        }
        else {
        panda$core$Bit $tmp2911 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp2911.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2913 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$415_91727->$data + 16));
            variable2912 = *$tmp2913;
            $tmp2915 = ((org$pandalanguage$pandac$Symbol*) variable2912)->name;
            $finallyReturn2913 = $tmp2915;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2915));
            $tmp1726 = 50;
            goto $l1724;
            $l2916:;
            return $finallyReturn2913;
        }
        }
        else {
        panda$core$Bit $tmp2918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp2918.value) {
        {
            panda$collections$ImmutableArray** $tmp2920 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91727->$data + 16));
            tests2919 = *$tmp2920;
            panda$collections$ImmutableArray** $tmp2922 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91727->$data + 24));
            statements2921 = *$tmp2922;
            panda$core$String* $tmp2931 = panda$collections$ImmutableArray$join$R$panda$core$String(tests2919);
            $tmp2930 = $tmp2931;
            panda$core$String* $tmp2932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2929, $tmp2930);
            $tmp2928 = $tmp2932;
            panda$core$String* $tmp2934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2928, &$s2933);
            $tmp2927 = $tmp2934;
            panda$core$String* $tmp2937 = panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(statements2921, &$s2936);
            $tmp2935 = $tmp2937;
            panda$core$String* $tmp2938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2927, $tmp2935);
            $tmp2926 = $tmp2938;
            panda$core$String* $tmp2940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2926, &$s2939);
            $tmp2925 = $tmp2940;
            $tmp2924 = $tmp2925;
            $finallyReturn2922 = $tmp2924;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2924));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2925));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2926));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2935));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2927));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2928));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2930));
            $tmp1726 = 51;
            goto $l1724;
            $l2941:;
            return $finallyReturn2922;
        }
        }
        else {
        panda$core$Bit $tmp2943 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$415_91727->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp2943.value) {
        {
            panda$core$String** $tmp2945 = ((panda$core$String**) ((char*) $match$415_91727->$data + 16));
            label2944 = *$tmp2945;
            org$pandalanguage$pandac$IRNode** $tmp2947 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$415_91727->$data + 24));
            test2946 = *$tmp2947;
            panda$collections$ImmutableArray** $tmp2949 = ((panda$collections$ImmutableArray**) ((char*) $match$415_91727->$data + 32));
            statements2948 = *$tmp2949;
            int $tmp2952;
            {
                panda$core$MutableString* $tmp2956 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2956);
                $tmp2955 = $tmp2956;
                $tmp2954 = $tmp2955;
                result2953 = $tmp2954;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2954));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2955));
                if (((panda$core$Bit) { label2944 != NULL }).value) {
                {
                    panda$core$String* $tmp2959 = panda$core$String$convert$R$panda$core$String(label2944);
                    $tmp2958 = $tmp2959;
                    panda$core$String* $tmp2961 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2958, &$s2960);
                    $tmp2957 = $tmp2961;
                    panda$core$MutableString$append$panda$core$String(result2953, $tmp2957);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2957));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2958));
                }
                }
                panda$core$String* $tmp2965 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2964, ((panda$core$Object*) test2946));
                $tmp2963 = $tmp2965;
                panda$core$String* $tmp2967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2963, &$s2966);
                $tmp2962 = $tmp2967;
                panda$core$MutableString$append$panda$core$String(result2953, $tmp2962);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2962));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2963));
                {
                    int $tmp2970;
                    {
                        ITable* $tmp2974 = ((panda$collections$Iterable*) statements2948)->$class->itable;
                        while ($tmp2974->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2974 = $tmp2974->next;
                        }
                        $fn2976 $tmp2975 = $tmp2974->methods[0];
                        panda$collections$Iterator* $tmp2977 = $tmp2975(((panda$collections$Iterable*) statements2948));
                        $tmp2973 = $tmp2977;
                        $tmp2972 = $tmp2973;
                        Iter$622$172971 = $tmp2972;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2972));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2973));
                        $l2978:;
                        ITable* $tmp2981 = Iter$622$172971->$class->itable;
                        while ($tmp2981->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2981 = $tmp2981->next;
                        }
                        $fn2983 $tmp2982 = $tmp2981->methods[0];
                        panda$core$Bit $tmp2984 = $tmp2982(Iter$622$172971);
                        panda$core$Bit $tmp2985 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2984);
                        bool $tmp2980 = $tmp2985.value;
                        if (!$tmp2980) goto $l2979;
                        {
                            int $tmp2988;
                            {
                                ITable* $tmp2992 = Iter$622$172971->$class->itable;
                                while ($tmp2992->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2992 = $tmp2992->next;
                                }
                                $fn2994 $tmp2993 = $tmp2992->methods[1];
                                panda$core$Object* $tmp2995 = $tmp2993(Iter$622$172971);
                                $tmp2991 = $tmp2995;
                                $tmp2990 = ((org$pandalanguage$pandac$IRNode*) $tmp2991);
                                s2989 = $tmp2990;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2990));
                                panda$core$Panda$unref$panda$core$Object($tmp2991);
                                panda$core$String* $tmp2998 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2989), &$s2997);
                                $tmp2996 = $tmp2998;
                                panda$core$MutableString$append$panda$core$String(result2953, $tmp2996);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2996));
                            }
                            $tmp2988 = -1;
                            goto $l2986;
                            $l2986:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2989));
                            switch ($tmp2988) {
                                case -1: goto $l2999;
                            }
                            $l2999:;
                        }
                        goto $l2978;
                        $l2979:;
                    }
                    $tmp2970 = -1;
                    goto $l2968;
                    $l2968:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$622$172971));
                    switch ($tmp2970) {
                        case -1: goto $l3000;
                    }
                    $l3000:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp3001, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result2953, $tmp3001);
                panda$core$String* $tmp3005 = panda$core$MutableString$finish$R$panda$core$String(result2953);
                $tmp3004 = $tmp3005;
                $tmp3003 = $tmp3004;
                $finallyReturn3001 = $tmp3003;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3003));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3004));
                $tmp2952 = 0;
                goto $l2950;
                $l3006:;
                $tmp1726 = 52;
                goto $l1724;
                $l3007:;
                return $finallyReturn3001;
            }
            $l2950:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2953));
            switch ($tmp2952) {
                case 0: goto $l3006;
            }
            $l3009:;
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
    $tmp1726 = -1;
    goto $l1724;
    $l1724:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1728));
    switch ($tmp1726) {
        case 21: goto $l2246;
        case 38: goto $l2709;
        case 29: goto $l2529;
        case 25: goto $l2349;
        case 11: goto $l2026;
        case 41: goto $l2728;
        case 30: goto $l2541;
        case 22: goto $l2313;
        case 17: goto $l2132;
        case 23: goto $l2323;
        case 0: goto $l1747;
        case 37: goto $l2687;
        case 46: goto $l2824;
        case 13: goto $l2085;
        case 7: goto $l1955;
        case 34: goto $l2652;
        case 8: goto $l1976;
        case 2: goto $l1786;
        case 42: goto $l2755;
        case 40: goto $l2722;
        case 10: goto $l2017;
        case -1: goto $l3010;
        case 12: goto $l2055;
        case 49: goto $l2908;
        case 43: goto $l2764;
        case 32: goto $l2569;
        case 31: goto $l2547;
        case 3: goto $l1795;
        case 18: goto $l2139;
        case 14: goto $l2094;
        case 47: goto $l2846;
        case 33: goto $l2642;
        case 52: goto $l3007;
        case 4: goto $l1847;
        case 35: goto $l2665;
        case 6: goto $l1950;
        case 39: goto $l2715;
        case 5: goto $l1936;
        case 26: goto $l2408;
        case 1: goto $l1757;
        case 51: goto $l2941;
        case 50: goto $l2916;
        case 27: goto $l2504;
        case 15: goto $l2107;
        case 28: goto $l2525;
        case 44: goto $l2771;
        case 36: goto $l2670;
        case 45: goto $l2793;
        case 48: goto $l2877;
        case 19: goto $l2205;
        case 24: goto $l2336;
        case 20: goto $l2226;
        case 16: goto $l2112;
        case 9: goto $l2002;
    }
    $l3010:;
}
void org$pandalanguage$pandac$IRNode$cleanup(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$5_13017;
    org$pandalanguage$pandac$IRNode* $tmp3018;
    org$pandalanguage$pandac$Position _f03020;
    org$pandalanguage$pandac$IRNode* _f13022;
    org$pandalanguage$pandac$IRNode* _f23024;
    org$pandalanguage$pandac$Position _f03027;
    org$pandalanguage$pandac$Type* _f13029;
    org$pandalanguage$pandac$IRNode* _f23031;
    org$pandalanguage$pandac$parser$Token$Kind _f33033;
    org$pandalanguage$pandac$IRNode* _f43035;
    org$pandalanguage$pandac$Position _f03038;
    org$pandalanguage$pandac$Type* _f13040;
    panda$core$Bit _f23042;
    org$pandalanguage$pandac$Position _f03045;
    panda$collections$ImmutableArray* _f13047;
    org$pandalanguage$pandac$Position _f03050;
    panda$collections$ImmutableArray* _f13052;
    panda$collections$ImmutableArray* _f23054;
    org$pandalanguage$pandac$Position _f03057;
    panda$core$String* _f13059;
    org$pandalanguage$pandac$Position _f03062;
    org$pandalanguage$pandac$Type* _f13064;
    org$pandalanguage$pandac$MethodRef* _f23066;
    panda$collections$ImmutableArray* _f33068;
    org$pandalanguage$pandac$Position _f03071;
    org$pandalanguage$pandac$IRNode* _f13073;
    org$pandalanguage$pandac$Type* _f23075;
    panda$core$Bit _f33077;
    org$pandalanguage$pandac$Position _f03080;
    org$pandalanguage$pandac$ChoiceEntry* _f13082;
    org$pandalanguage$pandac$Position _f03085;
    org$pandalanguage$pandac$IRNode* _f13087;
    org$pandalanguage$pandac$ChoiceEntry* _f23089;
    panda$core$Int64 _f33091;
    org$pandalanguage$pandac$Position _f03094;
    org$pandalanguage$pandac$Type* _f13096;
    org$pandalanguage$pandac$IRNode* _f23098;
    org$pandalanguage$pandac$Position _f03101;
    org$pandalanguage$pandac$Type* _f13103;
    org$pandalanguage$pandac$Position _f03106;
    panda$core$String* _f13108;
    org$pandalanguage$pandac$IRNode* _f03111;
    org$pandalanguage$pandac$IRNode* _f13113;
    org$pandalanguage$pandac$Position _f03116;
    panda$core$String* _f13118;
    panda$collections$ImmutableArray* _f23120;
    org$pandalanguage$pandac$IRNode* _f33122;
    org$pandalanguage$pandac$IRNode* _f03125;
    org$pandalanguage$pandac$IRNode* _f13127;
    org$pandalanguage$pandac$Position _f03130;
    org$pandalanguage$pandac$Type* _f13132;
    org$pandalanguage$pandac$IRNode* _f23134;
    org$pandalanguage$pandac$FieldDecl* _f33136;
    org$pandalanguage$pandac$Position _f03139;
    org$pandalanguage$pandac$IRNode* _f13141;
    panda$collections$ImmutableArray* _f23143;
    org$pandalanguage$pandac$IRNode* _f33145;
    org$pandalanguage$pandac$Position _f03148;
    org$pandalanguage$pandac$Type* _f13150;
    panda$core$UInt64 _f23152;
    org$pandalanguage$pandac$Position _f03155;
    org$pandalanguage$pandac$IRNode* _f13157;
    org$pandalanguage$pandac$Position _f03160;
    org$pandalanguage$pandac$IRNode* _f13162;
    org$pandalanguage$pandac$Position _f03165;
    panda$core$String* _f13167;
    panda$collections$ImmutableArray* _f23169;
    org$pandalanguage$pandac$Position _f03172;
    org$pandalanguage$pandac$IRNode* _f13174;
    panda$collections$ImmutableArray* _f23176;
    panda$collections$ImmutableArray* _f33178;
    org$pandalanguage$pandac$Position _f03181;
    org$pandalanguage$pandac$IRNode* _f13183;
    org$pandalanguage$pandac$MethodRef* _f23185;
    org$pandalanguage$pandac$Position _f03188;
    org$pandalanguage$pandac$Type* _f13190;
    panda$core$UInt64 _f23192;
    org$pandalanguage$pandac$Position _f03195;
    org$pandalanguage$pandac$Type* _f13197;
    org$pandalanguage$pandac$Position _f03200;
    org$pandalanguage$pandac$parser$Token$Kind _f13202;
    org$pandalanguage$pandac$IRNode* _f23204;
    org$pandalanguage$pandac$Position _f03207;
    panda$core$String* _f13209;
    org$pandalanguage$pandac$IRNode* _f23211;
    org$pandalanguage$pandac$IRNode* _f33213;
    panda$collections$ImmutableArray* _f43215;
    org$pandalanguage$pandac$Position _f03218;
    org$pandalanguage$pandac$Type* _f13220;
    panda$core$Real64 _f23222;
    org$pandalanguage$pandac$Position _f03225;
    org$pandalanguage$pandac$IRNode* _f13227;
    org$pandalanguage$pandac$Position _f03230;
    org$pandalanguage$pandac$Type* _f13232;
    panda$core$Int64 _f23234;
    org$pandalanguage$pandac$IRNode* _f03237;
    panda$core$Int64 _f13239;
    org$pandalanguage$pandac$Position _f03242;
    org$pandalanguage$pandac$Type* _f13244;
    org$pandalanguage$pandac$Position _f03247;
    panda$core$String* _f13249;
    org$pandalanguage$pandac$Position _f03252;
    org$pandalanguage$pandac$Type* _f13254;
    org$pandalanguage$pandac$Position _f03257;
    org$pandalanguage$pandac$IRNode* _f13259;
    org$pandalanguage$pandac$IRNode* _f23261;
    org$pandalanguage$pandac$IRNode* _f33263;
    org$pandalanguage$pandac$Position _f03266;
    org$pandalanguage$pandac$Type* _f13268;
    org$pandalanguage$pandac$Position _f03271;
    panda$core$String* _f13273;
    org$pandalanguage$pandac$Position _f03276;
    org$pandalanguage$pandac$Type* _f13278;
    org$pandalanguage$pandac$IRNode* _f23280;
    panda$collections$ImmutableArray* _f33282;
    org$pandalanguage$pandac$Position _f03285;
    org$pandalanguage$pandac$Type* _f13287;
    org$pandalanguage$pandac$IRNode* _f23289;
    panda$collections$ImmutableArray* _f33291;
    panda$collections$ImmutableArray* _f43293;
    org$pandalanguage$pandac$Position _f03296;
    org$pandalanguage$pandac$IRNode* _f13298;
    panda$collections$ImmutableArray* _f23300;
    org$pandalanguage$pandac$Position _f03303;
    org$pandalanguage$pandac$IRNode* _f13305;
    org$pandalanguage$pandac$IRNode* _f23307;
    panda$core$Bit _f33309;
    org$pandalanguage$pandac$IRNode* _f43311;
    org$pandalanguage$pandac$Position _f03314;
    org$pandalanguage$pandac$Variable$Kind _f13316;
    panda$collections$ImmutableArray* _f23318;
    org$pandalanguage$pandac$Position _f03321;
    org$pandalanguage$pandac$Variable* _f13323;
    org$pandalanguage$pandac$Position _f03326;
    panda$collections$ImmutableArray* _f13328;
    panda$collections$ImmutableArray* _f23330;
    org$pandalanguage$pandac$Position _f03333;
    panda$core$String* _f13335;
    org$pandalanguage$pandac$IRNode* _f23337;
    panda$collections$ImmutableArray* _f33339;
    int $tmp3013;
    {
        int $tmp3016;
        {
            $tmp3018 = self;
            $match$5_13017 = $tmp3018;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3018));
            panda$core$Bit $tmp3019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp3019.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3021 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03020 = *$tmp3021;
                org$pandalanguage$pandac$IRNode** $tmp3023 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13017->$data + 16));
                _f13022 = *$tmp3023;
                org$pandalanguage$pandac$IRNode** $tmp3025 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13017->$data + 24));
                _f23024 = *$tmp3025;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13022));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23024));
            }
            }
            else {
            panda$core$Bit $tmp3026 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp3026.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3028 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03027 = *$tmp3028;
                org$pandalanguage$pandac$Type** $tmp3030 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13017->$data + 16));
                _f13029 = *$tmp3030;
                org$pandalanguage$pandac$IRNode** $tmp3032 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13017->$data + 24));
                _f23031 = *$tmp3032;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp3034 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_13017->$data + 32));
                _f33033 = *$tmp3034;
                org$pandalanguage$pandac$IRNode** $tmp3036 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13017->$data + 40));
                _f43035 = *$tmp3036;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13029));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23031));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f43035));
            }
            }
            else {
            panda$core$Bit $tmp3037 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp3037.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3039 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03038 = *$tmp3039;
                org$pandalanguage$pandac$Type** $tmp3041 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13017->$data + 16));
                _f13040 = *$tmp3041;
                panda$core$Bit* $tmp3043 = ((panda$core$Bit*) ((char*) $match$5_13017->$data + 24));
                _f23042 = *$tmp3043;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13040));
            }
            }
            else {
            panda$core$Bit $tmp3044 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp3044.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3046 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03045 = *$tmp3046;
                panda$collections$ImmutableArray** $tmp3048 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13017->$data + 16));
                _f13047 = *$tmp3048;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13047));
            }
            }
            else {
            panda$core$Bit $tmp3049 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 4 }));
            if ($tmp3049.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3051 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03050 = *$tmp3051;
                panda$collections$ImmutableArray** $tmp3053 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13017->$data + 16));
                _f13052 = *$tmp3053;
                panda$collections$ImmutableArray** $tmp3055 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13017->$data + 24));
                _f23054 = *$tmp3055;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13052));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23054));
            }
            }
            else {
            panda$core$Bit $tmp3056 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 5 }));
            if ($tmp3056.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3058 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03057 = *$tmp3058;
                panda$core$String** $tmp3060 = ((panda$core$String**) ((char*) $match$5_13017->$data + 16));
                _f13059 = *$tmp3060;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13059));
            }
            }
            else {
            panda$core$Bit $tmp3061 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 6 }));
            if ($tmp3061.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3063 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03062 = *$tmp3063;
                org$pandalanguage$pandac$Type** $tmp3065 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13017->$data + 16));
                _f13064 = *$tmp3065;
                org$pandalanguage$pandac$MethodRef** $tmp3067 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_13017->$data + 24));
                _f23066 = *$tmp3067;
                panda$collections$ImmutableArray** $tmp3069 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13017->$data + 32));
                _f33068 = *$tmp3069;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13064));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23066));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33068));
            }
            }
            else {
            panda$core$Bit $tmp3070 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 7 }));
            if ($tmp3070.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3072 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03071 = *$tmp3072;
                org$pandalanguage$pandac$IRNode** $tmp3074 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13017->$data + 16));
                _f13073 = *$tmp3074;
                org$pandalanguage$pandac$Type** $tmp3076 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13017->$data + 24));
                _f23075 = *$tmp3076;
                panda$core$Bit* $tmp3078 = ((panda$core$Bit*) ((char*) $match$5_13017->$data + 32));
                _f33077 = *$tmp3078;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13073));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23075));
            }
            }
            else {
            panda$core$Bit $tmp3079 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 8 }));
            if ($tmp3079.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3081 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03080 = *$tmp3081;
                org$pandalanguage$pandac$ChoiceEntry** $tmp3083 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_13017->$data + 16));
                _f13082 = *$tmp3083;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13082));
            }
            }
            else {
            panda$core$Bit $tmp3084 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 9 }));
            if ($tmp3084.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3086 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03085 = *$tmp3086;
                org$pandalanguage$pandac$IRNode** $tmp3088 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13017->$data + 16));
                _f13087 = *$tmp3088;
                org$pandalanguage$pandac$ChoiceEntry** $tmp3090 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_13017->$data + 24));
                _f23089 = *$tmp3090;
                panda$core$Int64* $tmp3092 = ((panda$core$Int64*) ((char*) $match$5_13017->$data + 32));
                _f33091 = *$tmp3092;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13087));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23089));
            }
            }
            else {
            panda$core$Bit $tmp3093 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 10 }));
            if ($tmp3093.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3095 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03094 = *$tmp3095;
                org$pandalanguage$pandac$Type** $tmp3097 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13017->$data + 16));
                _f13096 = *$tmp3097;
                org$pandalanguage$pandac$IRNode** $tmp3099 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13017->$data + 24));
                _f23098 = *$tmp3099;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13096));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23098));
            }
            }
            else {
            panda$core$Bit $tmp3100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp3100.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3102 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03101 = *$tmp3102;
                org$pandalanguage$pandac$Type** $tmp3104 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13017->$data + 16));
                _f13103 = *$tmp3104;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13103));
            }
            }
            else {
            panda$core$Bit $tmp3105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp3105.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3107 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03106 = *$tmp3107;
                panda$core$String** $tmp3109 = ((panda$core$String**) ((char*) $match$5_13017->$data + 16));
                _f13108 = *$tmp3109;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13108));
            }
            }
            else {
            panda$core$Bit $tmp3110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp3110.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp3112 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13017->$data + 0));
                _f03111 = *$tmp3112;
                org$pandalanguage$pandac$IRNode** $tmp3114 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13017->$data + 8));
                _f13113 = *$tmp3114;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f03111));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13113));
            }
            }
            else {
            panda$core$Bit $tmp3115 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 14 }));
            if ($tmp3115.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3117 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03116 = *$tmp3117;
                panda$core$String** $tmp3119 = ((panda$core$String**) ((char*) $match$5_13017->$data + 16));
                _f13118 = *$tmp3119;
                panda$collections$ImmutableArray** $tmp3121 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13017->$data + 24));
                _f23120 = *$tmp3121;
                org$pandalanguage$pandac$IRNode** $tmp3123 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13017->$data + 32));
                _f33122 = *$tmp3123;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13118));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23120));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33122));
            }
            }
            else {
            panda$core$Bit $tmp3124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 15 }));
            if ($tmp3124.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp3126 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13017->$data + 0));
                _f03125 = *$tmp3126;
                org$pandalanguage$pandac$IRNode** $tmp3128 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13017->$data + 8));
                _f13127 = *$tmp3128;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f03125));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13127));
            }
            }
            else {
            panda$core$Bit $tmp3129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 16 }));
            if ($tmp3129.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3131 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03130 = *$tmp3131;
                org$pandalanguage$pandac$Type** $tmp3133 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13017->$data + 16));
                _f13132 = *$tmp3133;
                org$pandalanguage$pandac$IRNode** $tmp3135 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13017->$data + 24));
                _f23134 = *$tmp3135;
                org$pandalanguage$pandac$FieldDecl** $tmp3137 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$5_13017->$data + 32));
                _f33136 = *$tmp3137;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13132));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23134));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33136));
            }
            }
            else {
            panda$core$Bit $tmp3138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp3138.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3140 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03139 = *$tmp3140;
                org$pandalanguage$pandac$IRNode** $tmp3142 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13017->$data + 16));
                _f13141 = *$tmp3142;
                panda$collections$ImmutableArray** $tmp3144 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13017->$data + 24));
                _f23143 = *$tmp3144;
                org$pandalanguage$pandac$IRNode** $tmp3146 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13017->$data + 32));
                _f33145 = *$tmp3146;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13141));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23143));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33145));
            }
            }
            else {
            panda$core$Bit $tmp3147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp3147.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3149 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03148 = *$tmp3149;
                org$pandalanguage$pandac$Type** $tmp3151 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13017->$data + 16));
                _f13150 = *$tmp3151;
                panda$core$UInt64* $tmp3153 = ((panda$core$UInt64*) ((char*) $match$5_13017->$data + 24));
                _f23152 = *$tmp3153;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13150));
            }
            }
            else {
            panda$core$Bit $tmp3154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp3154.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3156 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03155 = *$tmp3156;
                org$pandalanguage$pandac$IRNode** $tmp3158 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13017->$data + 16));
                _f13157 = *$tmp3158;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13157));
            }
            }
            else {
            panda$core$Bit $tmp3159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 20 }));
            if ($tmp3159.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3161 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03160 = *$tmp3161;
                org$pandalanguage$pandac$IRNode** $tmp3163 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13017->$data + 16));
                _f13162 = *$tmp3163;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13162));
            }
            }
            else {
            panda$core$Bit $tmp3164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 21 }));
            if ($tmp3164.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3166 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03165 = *$tmp3166;
                panda$core$String** $tmp3168 = ((panda$core$String**) ((char*) $match$5_13017->$data + 16));
                _f13167 = *$tmp3168;
                panda$collections$ImmutableArray** $tmp3170 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13017->$data + 24));
                _f23169 = *$tmp3170;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13167));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23169));
            }
            }
            else {
            panda$core$Bit $tmp3171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 22 }));
            if ($tmp3171.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3173 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03172 = *$tmp3173;
                org$pandalanguage$pandac$IRNode** $tmp3175 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13017->$data + 16));
                _f13174 = *$tmp3175;
                panda$collections$ImmutableArray** $tmp3177 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13017->$data + 24));
                _f23176 = *$tmp3177;
                panda$collections$ImmutableArray** $tmp3179 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13017->$data + 32));
                _f33178 = *$tmp3179;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13174));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23176));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33178));
            }
            }
            else {
            panda$core$Bit $tmp3180 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 23 }));
            if ($tmp3180.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3182 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03181 = *$tmp3182;
                org$pandalanguage$pandac$IRNode** $tmp3184 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13017->$data + 16));
                _f13183 = *$tmp3184;
                org$pandalanguage$pandac$MethodRef** $tmp3186 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_13017->$data + 24));
                _f23185 = *$tmp3186;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13183));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23185));
            }
            }
            else {
            panda$core$Bit $tmp3187 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 24 }));
            if ($tmp3187.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3189 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03188 = *$tmp3189;
                org$pandalanguage$pandac$Type** $tmp3191 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13017->$data + 16));
                _f13190 = *$tmp3191;
                panda$core$UInt64* $tmp3193 = ((panda$core$UInt64*) ((char*) $match$5_13017->$data + 24));
                _f23192 = *$tmp3193;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13190));
            }
            }
            else {
            panda$core$Bit $tmp3194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 25 }));
            if ($tmp3194.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3196 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03195 = *$tmp3196;
                org$pandalanguage$pandac$Type** $tmp3198 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13017->$data + 16));
                _f13197 = *$tmp3198;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13197));
            }
            }
            else {
            panda$core$Bit $tmp3199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 26 }));
            if ($tmp3199.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3201 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03200 = *$tmp3201;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp3203 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_13017->$data + 16));
                _f13202 = *$tmp3203;
                org$pandalanguage$pandac$IRNode** $tmp3205 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13017->$data + 24));
                _f23204 = *$tmp3205;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23204));
            }
            }
            else {
            panda$core$Bit $tmp3206 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 27 }));
            if ($tmp3206.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3208 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03207 = *$tmp3208;
                panda$core$String** $tmp3210 = ((panda$core$String**) ((char*) $match$5_13017->$data + 16));
                _f13209 = *$tmp3210;
                org$pandalanguage$pandac$IRNode** $tmp3212 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13017->$data + 24));
                _f23211 = *$tmp3212;
                org$pandalanguage$pandac$IRNode** $tmp3214 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13017->$data + 32));
                _f33213 = *$tmp3214;
                panda$collections$ImmutableArray** $tmp3216 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13017->$data + 40));
                _f43215 = *$tmp3216;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13209));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23211));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33213));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f43215));
            }
            }
            else {
            panda$core$Bit $tmp3217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 28 }));
            if ($tmp3217.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3219 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03218 = *$tmp3219;
                org$pandalanguage$pandac$Type** $tmp3221 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13017->$data + 16));
                _f13220 = *$tmp3221;
                panda$core$Real64* $tmp3223 = ((panda$core$Real64*) ((char*) $match$5_13017->$data + 24));
                _f23222 = *$tmp3223;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13220));
            }
            }
            else {
            panda$core$Bit $tmp3224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 29 }));
            if ($tmp3224.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3226 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03225 = *$tmp3226;
                org$pandalanguage$pandac$IRNode** $tmp3228 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13017->$data + 16));
                _f13227 = *$tmp3228;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13227));
            }
            }
            else {
            panda$core$Bit $tmp3229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 30 }));
            if ($tmp3229.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3231 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03230 = *$tmp3231;
                org$pandalanguage$pandac$Type** $tmp3233 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13017->$data + 16));
                _f13232 = *$tmp3233;
                panda$core$Int64* $tmp3235 = ((panda$core$Int64*) ((char*) $match$5_13017->$data + 24));
                _f23234 = *$tmp3235;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13232));
            }
            }
            else {
            panda$core$Bit $tmp3236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 31 }));
            if ($tmp3236.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp3238 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13017->$data + 0));
                _f03237 = *$tmp3238;
                panda$core$Int64* $tmp3240 = ((panda$core$Int64*) ((char*) $match$5_13017->$data + 8));
                _f13239 = *$tmp3240;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f03237));
            }
            }
            else {
            panda$core$Bit $tmp3241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 32 }));
            if ($tmp3241.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3243 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03242 = *$tmp3243;
                org$pandalanguage$pandac$Type** $tmp3245 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13017->$data + 16));
                _f13244 = *$tmp3245;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13244));
            }
            }
            else {
            panda$core$Bit $tmp3246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp3246.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3248 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03247 = *$tmp3248;
                panda$core$String** $tmp3250 = ((panda$core$String**) ((char*) $match$5_13017->$data + 16));
                _f13249 = *$tmp3250;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13249));
            }
            }
            else {
            panda$core$Bit $tmp3251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp3251.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3253 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03252 = *$tmp3253;
                org$pandalanguage$pandac$Type** $tmp3255 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13017->$data + 16));
                _f13254 = *$tmp3255;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13254));
            }
            }
            else {
            panda$core$Bit $tmp3256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 35 }));
            if ($tmp3256.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3258 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03257 = *$tmp3258;
                org$pandalanguage$pandac$IRNode** $tmp3260 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13017->$data + 16));
                _f13259 = *$tmp3260;
                org$pandalanguage$pandac$IRNode** $tmp3262 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13017->$data + 24));
                _f23261 = *$tmp3262;
                org$pandalanguage$pandac$IRNode** $tmp3264 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13017->$data + 32));
                _f33263 = *$tmp3264;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13259));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23261));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33263));
            }
            }
            else {
            panda$core$Bit $tmp3265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 36 }));
            if ($tmp3265.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3267 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03266 = *$tmp3267;
                org$pandalanguage$pandac$Type** $tmp3269 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13017->$data + 16));
                _f13268 = *$tmp3269;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13268));
            }
            }
            else {
            panda$core$Bit $tmp3270 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 37 }));
            if ($tmp3270.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3272 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03271 = *$tmp3272;
                panda$core$String** $tmp3274 = ((panda$core$String**) ((char*) $match$5_13017->$data + 16));
                _f13273 = *$tmp3274;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13273));
            }
            }
            else {
            panda$core$Bit $tmp3275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 38 }));
            if ($tmp3275.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3277 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03276 = *$tmp3277;
                org$pandalanguage$pandac$Type** $tmp3279 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13017->$data + 16));
                _f13278 = *$tmp3279;
                org$pandalanguage$pandac$IRNode** $tmp3281 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13017->$data + 24));
                _f23280 = *$tmp3281;
                panda$collections$ImmutableArray** $tmp3283 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13017->$data + 32));
                _f33282 = *$tmp3283;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13278));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23280));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33282));
            }
            }
            else {
            panda$core$Bit $tmp3284 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp3284.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3286 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03285 = *$tmp3286;
                org$pandalanguage$pandac$Type** $tmp3288 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_13017->$data + 16));
                _f13287 = *$tmp3288;
                org$pandalanguage$pandac$IRNode** $tmp3290 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13017->$data + 24));
                _f23289 = *$tmp3290;
                panda$collections$ImmutableArray** $tmp3292 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13017->$data + 32));
                _f33291 = *$tmp3292;
                panda$collections$ImmutableArray** $tmp3294 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13017->$data + 40));
                _f43293 = *$tmp3294;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13287));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23289));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33291));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f43293));
            }
            }
            else {
            panda$core$Bit $tmp3295 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 40 }));
            if ($tmp3295.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3297 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03296 = *$tmp3297;
                org$pandalanguage$pandac$IRNode** $tmp3299 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13017->$data + 16));
                _f13298 = *$tmp3299;
                panda$collections$ImmutableArray** $tmp3301 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13017->$data + 24));
                _f23300 = *$tmp3301;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13298));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23300));
            }
            }
            else {
            panda$core$Bit $tmp3302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 41 }));
            if ($tmp3302.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3304 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03303 = *$tmp3304;
                org$pandalanguage$pandac$IRNode** $tmp3306 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13017->$data + 16));
                _f13305 = *$tmp3306;
                org$pandalanguage$pandac$IRNode** $tmp3308 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13017->$data + 24));
                _f23307 = *$tmp3308;
                panda$core$Bit* $tmp3310 = ((panda$core$Bit*) ((char*) $match$5_13017->$data + 32));
                _f33309 = *$tmp3310;
                org$pandalanguage$pandac$IRNode** $tmp3312 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13017->$data + 33));
                _f43311 = *$tmp3312;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13305));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23307));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f43311));
            }
            }
            else {
            panda$core$Bit $tmp3313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 42 }));
            if ($tmp3313.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3315 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03314 = *$tmp3315;
                org$pandalanguage$pandac$Variable$Kind* $tmp3317 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_13017->$data + 16));
                _f13316 = *$tmp3317;
                panda$collections$ImmutableArray** $tmp3319 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13017->$data + 24));
                _f23318 = *$tmp3319;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23318));
            }
            }
            else {
            panda$core$Bit $tmp3320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 43 }));
            if ($tmp3320.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3322 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03321 = *$tmp3322;
                org$pandalanguage$pandac$Variable** $tmp3324 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$5_13017->$data + 16));
                _f13323 = *$tmp3324;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13323));
            }
            }
            else {
            panda$core$Bit $tmp3325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 44 }));
            if ($tmp3325.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3327 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03326 = *$tmp3327;
                panda$collections$ImmutableArray** $tmp3329 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13017->$data + 16));
                _f13328 = *$tmp3329;
                panda$collections$ImmutableArray** $tmp3331 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13017->$data + 24));
                _f23330 = *$tmp3331;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13328));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23330));
            }
            }
            else {
            panda$core$Bit $tmp3332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_13017->$rawValue, ((panda$core$Int64) { 45 }));
            if ($tmp3332.value) {
            {
                org$pandalanguage$pandac$Position* $tmp3334 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_13017->$data + 0));
                _f03333 = *$tmp3334;
                panda$core$String** $tmp3336 = ((panda$core$String**) ((char*) $match$5_13017->$data + 16));
                _f13335 = *$tmp3336;
                org$pandalanguage$pandac$IRNode** $tmp3338 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_13017->$data + 24));
                _f23337 = *$tmp3338;
                panda$collections$ImmutableArray** $tmp3340 = ((panda$collections$ImmutableArray**) ((char*) $match$5_13017->$data + 32));
                _f33339 = *$tmp3340;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f13335));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f23337));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f33339));
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
        }
        $tmp3016 = -1;
        goto $l3014;
        $l3014:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3018));
        switch ($tmp3016) {
            case -1: goto $l3341;
        }
        $l3341:;
    }
    $tmp3013 = -1;
    goto $l3011;
    $l3011:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp3013) {
        case -1: goto $l3342;
    }
    $l3342:;
}

