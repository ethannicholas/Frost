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
#include "org/pandalanguage/pandac/Compiler.h"
#include "org/pandalanguage/pandac/Variable.h"
#include "org/pandalanguage/pandac/Position.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
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
typedef org$pandalanguage$pandac$Type* (*$fn144)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn167)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn195)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn198)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn203)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn324)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn336)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn343)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn425)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn512)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn515)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn534)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn538)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn559)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn566)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn577)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn579)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn610)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn617)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn628)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn630)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn666)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn687)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn699)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn711)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn718)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn729)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn731)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn758)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn770)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn777)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn788)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn790)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn798)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn810)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn817)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn834)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn841)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn852)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn854)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn871)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn883)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn890)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn901)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn903)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn919)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn926)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn937)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn939)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn969)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn982)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn994)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1001)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1012)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1014)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1032)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1046)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1070)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1073)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1077)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1129)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1136)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1147)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1149)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1177)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1184)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1195)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1197)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1213)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1220)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1231)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1233)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1250)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1262)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1269)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1280)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1282)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1346)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1387)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1394)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1405)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1441)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1448)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1459)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1475)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1482)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1493)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1540)(panda$collections$ListView*);
typedef org$pandalanguage$pandac$Type* (*$fn1553)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1577)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1608)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1646)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1688)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1699)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1731)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1738)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1749)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1779)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1787)(panda$collections$ListView*, panda$core$String*);
typedef panda$core$String* (*$fn1804)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1823)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1860)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1867)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1878)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1957)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1964)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1975)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2018)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2025)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2036)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2052)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2059)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2070)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2095)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2135)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn2184)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2191)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2202)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2344)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2351)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2372)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2384)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2401)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2467)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2496)(panda$collections$ListView*);
typedef panda$core$String* (*$fn2505)(panda$collections$ListView*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn2545)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2552)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2563)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x4e\x6f\x64\x65", 31, -8857975469778350849, NULL };
static panda$core$String $s1309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s1311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s1323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s1348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s1408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x79\x20\x7b\x0a", 6, 2292679699717, NULL };
static panda$core$String $s1462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x66\x69\x6e\x61\x6c\x6c\x79\x20\x7b\x0a", 12, -1355183944487068280, NULL };
static panda$core$String $s1496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s1516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1521 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s1535 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x4e\x54\x36\x34\x5f\x57\x52\x41\x50\x28", 11, -7093166379287162761, NULL };
static panda$core$String $s1565 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1568 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1579 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1610 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s1641 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1649 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x65\x64\x20\x6f\x62\x6a\x65\x63\x74\x20\x2a\x2d", 24, 1541443738414735436, NULL };
static panda$core$String $s1668 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s1670 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s1690 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s1693 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1720 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1722 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s1752 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1758 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x77\x68\x69\x6c\x65\x20", 8, 24265489235972527, NULL };
static panda$core$String $s1760 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1784 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1790 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1806 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x2a\x20\x61\x6e\x64\x20\x74\x68\x65\x6e\x3a\x20", 14, -3277098584181619124, NULL };
static panda$core$String $s1809 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s1825 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1828 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1848 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s1850 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s1881 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1888 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s1890 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1913 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1915 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x6e\x75\x6c\x6c\x29", 9, 1443802565768004343, NULL };
static panda$core$String $s1925 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1927 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x29", 8, 14324500803727910, NULL };
static panda$core$String $s1946 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1948 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s1978 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2006 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s2008 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2039 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2043 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x3a\x0a", 11, 7948234111488089839, NULL };
static panda$core$String $s2073 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2097 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s2137 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2140 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2163 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2169 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s2171 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s2174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s2233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s2249 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s2253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s2271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s2274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s2291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s2308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2310 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3f\x20", 3, 1363128, NULL };
static panda$core$String $s2313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s2316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s2354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s2374 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s2429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s2432 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s2434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s2459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s2461 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s2463 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s2492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s2499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x0a", 2, 16069, NULL };
static panda$core$String $s2502 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2529 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2533 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s2535 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

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
    org$pandalanguage$pandac$IRNode* target118 = NULL;
    org$pandalanguage$pandac$MethodRef* m120 = NULL;
    org$pandalanguage$pandac$Type* $tmp122;
    org$pandalanguage$pandac$Type* $tmp123;
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
    org$pandalanguage$pandac$Type* type226 = NULL;
    org$pandalanguage$pandac$Type* $tmp228;
    org$pandalanguage$pandac$Type* $tmp232;
    org$pandalanguage$pandac$Type* $tmp233;
    org$pandalanguage$pandac$Type* $tmp238;
    org$pandalanguage$pandac$Type* $tmp239;
    org$pandalanguage$pandac$Variable* variable244 = NULL;
    org$pandalanguage$pandac$Type* $tmp246;
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
            org$pandalanguage$pandac$IRNode** $tmp119 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$73_95->$data + 16));
            target118 = *$tmp119;
            org$pandalanguage$pandac$MethodRef** $tmp121 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$73_95->$data + 24));
            m120 = *$tmp121;
            org$pandalanguage$pandac$Type* $tmp124 = org$pandalanguage$pandac$Compiler$effectiveMethodType$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef$R$org$pandalanguage$pandac$Type(target118, m120);
            $tmp123 = $tmp124;
            $tmp122 = $tmp123;
            $returnValue10 = $tmp122;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp122));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp123));
            $tmp4 = 15;
            goto $l2;
            $l125:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp127.value) {
        {
            org$pandalanguage$pandac$Type** $tmp129 = ((org$pandalanguage$pandac$Type**) ((char*) $match$73_95->$data + 16));
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
        panda$core$Bit $tmp133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp133.value) {
        {
            org$pandalanguage$pandac$Type** $tmp135 = ((org$pandalanguage$pandac$Type**) ((char*) $match$73_95->$data + 16));
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
        panda$core$Bit $tmp139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp139.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp141 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$73_95->$data + 24));
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
        panda$core$Bit $tmp148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp148.value) {
        {
            org$pandalanguage$pandac$Type** $tmp150 = ((org$pandalanguage$pandac$Type**) ((char*) $match$73_95->$data + 16));
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
        panda$core$Bit $tmp154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp154.value) {
        {
            org$pandalanguage$pandac$Type** $tmp156 = ((org$pandalanguage$pandac$Type**) ((char*) $match$73_95->$data + 16));
            type155 = *$tmp156;
            panda$core$Int64* $tmp158 = ((panda$core$Int64*) ((char*) $match$73_95->$data + 24));
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
        panda$core$Bit $tmp162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp162.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp164 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$73_95->$data + 0));
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
        panda$core$Bit $tmp171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp171.value) {
        {
            org$pandalanguage$pandac$Type** $tmp173 = ((org$pandalanguage$pandac$Type**) ((char*) $match$73_95->$data + 16));
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
        panda$core$Bit $tmp177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 35 }));
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
        panda$core$Bit $tmp183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp183.value) {
        {
            org$pandalanguage$pandac$Type** $tmp185 = ((org$pandalanguage$pandac$Type**) ((char*) $match$73_95->$data + 16));
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
        panda$core$Bit $tmp189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp189.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp191 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$73_95->$data + 24));
            ifTrue190 = *$tmp191;
            org$pandalanguage$pandac$IRNode** $tmp193 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$73_95->$data + 32));
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
        panda$core$Bit $tmp207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 38 }));
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
        panda$core$Bit $tmp213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 39 }));
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
        panda$core$Bit $tmp219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp219.value) {
        {
            org$pandalanguage$pandac$Type** $tmp221 = ((org$pandalanguage$pandac$Type**) ((char*) $match$73_95->$data + 16));
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
        panda$core$Bit $tmp225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp225.value) {
        {
            org$pandalanguage$pandac$Type** $tmp227 = ((org$pandalanguage$pandac$Type**) ((char*) $match$73_95->$data + 16));
            type226 = *$tmp227;
            $tmp228 = type226;
            $returnValue10 = $tmp228;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp228));
            $tmp4 = 29;
            goto $l2;
            $l229:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp231 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp231.value) {
        {
            org$pandalanguage$pandac$Type* $tmp234 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp233 = $tmp234;
            $tmp232 = $tmp233;
            $returnValue10 = $tmp232;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp232));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp233));
            $tmp4 = 30;
            goto $l2;
            $l235:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 43 }));
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
        panda$core$Bit $tmp243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$73_95->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp243.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp245 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$73_95->$data + 16));
            variable244 = *$tmp245;
            $tmp246 = variable244->type;
            $returnValue10 = $tmp246;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp246));
            $tmp4 = 32;
            goto $l2;
            $l247:;
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
        case 29: goto $l229;
        case 6: goto $l54;
        case 17: goto $l137;
        case 21: goto $l169;
        case 26: goto $l211;
        case -1: goto $l249;
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
    $l249:;
}
org$pandalanguage$pandac$Position org$pandalanguage$pandac$IRNode$position$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$147_9253 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp254;
    org$pandalanguage$pandac$Position position256;
    org$pandalanguage$pandac$Position $returnValue258;
    org$pandalanguage$pandac$Position position262;
    org$pandalanguage$pandac$Position position267;
    org$pandalanguage$pandac$Position position272;
    org$pandalanguage$pandac$Position position277;
    org$pandalanguage$pandac$Position position282;
    org$pandalanguage$pandac$Position position287;
    org$pandalanguage$pandac$Position position292;
    org$pandalanguage$pandac$Position position297;
    org$pandalanguage$pandac$Position position302;
    org$pandalanguage$pandac$Position position307;
    org$pandalanguage$pandac$Position position312;
    org$pandalanguage$pandac$Position position317;
    org$pandalanguage$pandac$IRNode* target322 = NULL;
    org$pandalanguage$pandac$Position position329;
    org$pandalanguage$pandac$IRNode* m334 = NULL;
    org$pandalanguage$pandac$IRNode* expr341 = NULL;
    org$pandalanguage$pandac$Position position348;
    org$pandalanguage$pandac$Position position353;
    org$pandalanguage$pandac$Position position358;
    org$pandalanguage$pandac$Position position363;
    org$pandalanguage$pandac$Position position368;
    org$pandalanguage$pandac$Position position373;
    org$pandalanguage$pandac$Position position378;
    org$pandalanguage$pandac$Position position383;
    org$pandalanguage$pandac$Position position388;
    org$pandalanguage$pandac$Position position393;
    org$pandalanguage$pandac$Position position398;
    org$pandalanguage$pandac$Position position403;
    org$pandalanguage$pandac$Position position408;
    org$pandalanguage$pandac$Position position413;
    org$pandalanguage$pandac$Position position418;
    org$pandalanguage$pandac$IRNode* base423 = NULL;
    org$pandalanguage$pandac$Position position430;
    org$pandalanguage$pandac$Position position435;
    org$pandalanguage$pandac$Position position440;
    org$pandalanguage$pandac$Position position445;
    org$pandalanguage$pandac$Position position450;
    org$pandalanguage$pandac$Position position455;
    org$pandalanguage$pandac$Position position460;
    org$pandalanguage$pandac$Position position465;
    org$pandalanguage$pandac$Position position470;
    org$pandalanguage$pandac$Position position475;
    org$pandalanguage$pandac$Position position480;
    org$pandalanguage$pandac$Position position485;
    org$pandalanguage$pandac$Position position490;
    org$pandalanguage$pandac$Position position495;
    int $tmp252;
    {
        $tmp254 = self;
        $match$147_9253 = $tmp254;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp254));
        panda$core$Bit $tmp255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp255.value) {
        {
            org$pandalanguage$pandac$Position* $tmp257 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position256 = *$tmp257;
            $returnValue258 = position256;
            $tmp252 = 0;
            goto $l250;
            $l259:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp261.value) {
        {
            org$pandalanguage$pandac$Position* $tmp263 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position262 = *$tmp263;
            $returnValue258 = position262;
            $tmp252 = 1;
            goto $l250;
            $l264:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp266.value) {
        {
            org$pandalanguage$pandac$Position* $tmp268 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position267 = *$tmp268;
            $returnValue258 = position267;
            $tmp252 = 2;
            goto $l250;
            $l269:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp271.value) {
        {
            org$pandalanguage$pandac$Position* $tmp273 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position272 = *$tmp273;
            $returnValue258 = position272;
            $tmp252 = 3;
            goto $l250;
            $l274:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp276.value) {
        {
            org$pandalanguage$pandac$Position* $tmp278 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position277 = *$tmp278;
            $returnValue258 = position277;
            $tmp252 = 4;
            goto $l250;
            $l279:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp281.value) {
        {
            org$pandalanguage$pandac$Position* $tmp283 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position282 = *$tmp283;
            $returnValue258 = position282;
            $tmp252 = 5;
            goto $l250;
            $l284:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp286.value) {
        {
            org$pandalanguage$pandac$Position* $tmp288 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position287 = *$tmp288;
            $returnValue258 = position287;
            $tmp252 = 6;
            goto $l250;
            $l289:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp291.value) {
        {
            org$pandalanguage$pandac$Position* $tmp293 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position292 = *$tmp293;
            $returnValue258 = position292;
            $tmp252 = 7;
            goto $l250;
            $l294:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp296.value) {
        {
            org$pandalanguage$pandac$Position* $tmp298 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position297 = *$tmp298;
            $returnValue258 = position297;
            $tmp252 = 8;
            goto $l250;
            $l299:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp301.value) {
        {
            org$pandalanguage$pandac$Position* $tmp303 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position302 = *$tmp303;
            $returnValue258 = position302;
            $tmp252 = 9;
            goto $l250;
            $l304:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp306.value) {
        {
            org$pandalanguage$pandac$Position* $tmp308 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position307 = *$tmp308;
            $returnValue258 = position307;
            $tmp252 = 10;
            goto $l250;
            $l309:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp311.value) {
        {
            org$pandalanguage$pandac$Position* $tmp313 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position312 = *$tmp313;
            $returnValue258 = position312;
            $tmp252 = 11;
            goto $l250;
            $l314:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp316.value) {
        {
            org$pandalanguage$pandac$Position* $tmp318 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position317 = *$tmp318;
            $returnValue258 = position317;
            $tmp252 = 12;
            goto $l250;
            $l319:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp321 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp321.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp323 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$147_9253->$data + 0));
            target322 = *$tmp323;
            org$pandalanguage$pandac$Position $tmp325 = (($fn324) target322->$class->vtable[3])(target322);
            $returnValue258 = $tmp325;
            $tmp252 = 13;
            goto $l250;
            $l326:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp328.value) {
        {
            org$pandalanguage$pandac$Position* $tmp330 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position329 = *$tmp330;
            $returnValue258 = position329;
            $tmp252 = 14;
            goto $l250;
            $l331:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp333.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp335 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$147_9253->$data + 0));
            m334 = *$tmp335;
            org$pandalanguage$pandac$Position $tmp337 = (($fn336) m334->$class->vtable[3])(m334);
            $returnValue258 = $tmp337;
            $tmp252 = 15;
            goto $l250;
            $l338:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp340.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp342 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$147_9253->$data + 0));
            expr341 = *$tmp342;
            org$pandalanguage$pandac$Position $tmp344 = (($fn343) expr341->$class->vtable[3])(expr341);
            $returnValue258 = $tmp344;
            $tmp252 = 16;
            goto $l250;
            $l345:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp347.value) {
        {
            org$pandalanguage$pandac$Position* $tmp349 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position348 = *$tmp349;
            $returnValue258 = position348;
            $tmp252 = 17;
            goto $l250;
            $l350:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp352.value) {
        {
            org$pandalanguage$pandac$Position* $tmp354 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position353 = *$tmp354;
            $returnValue258 = position353;
            $tmp252 = 18;
            goto $l250;
            $l355:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp357.value) {
        {
            org$pandalanguage$pandac$Position* $tmp359 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position358 = *$tmp359;
            $returnValue258 = position358;
            $tmp252 = 19;
            goto $l250;
            $l360:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp362.value) {
        {
            org$pandalanguage$pandac$Position* $tmp364 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position363 = *$tmp364;
            $returnValue258 = position363;
            $tmp252 = 20;
            goto $l250;
            $l365:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp367.value) {
        {
            org$pandalanguage$pandac$Position* $tmp369 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position368 = *$tmp369;
            $returnValue258 = position368;
            $tmp252 = 21;
            goto $l250;
            $l370:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp372.value) {
        {
            org$pandalanguage$pandac$Position* $tmp374 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position373 = *$tmp374;
            $returnValue258 = position373;
            $tmp252 = 22;
            goto $l250;
            $l375:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp377.value) {
        {
            org$pandalanguage$pandac$Position* $tmp379 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position378 = *$tmp379;
            $returnValue258 = position378;
            $tmp252 = 23;
            goto $l250;
            $l380:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp382 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp382.value) {
        {
            org$pandalanguage$pandac$Position* $tmp384 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position383 = *$tmp384;
            $returnValue258 = position383;
            $tmp252 = 24;
            goto $l250;
            $l385:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp387.value) {
        {
            org$pandalanguage$pandac$Position* $tmp389 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position388 = *$tmp389;
            $returnValue258 = position388;
            $tmp252 = 25;
            goto $l250;
            $l390:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp392 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp392.value) {
        {
            org$pandalanguage$pandac$Position* $tmp394 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position393 = *$tmp394;
            $returnValue258 = position393;
            $tmp252 = 26;
            goto $l250;
            $l395:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp397.value) {
        {
            org$pandalanguage$pandac$Position* $tmp399 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position398 = *$tmp399;
            $returnValue258 = position398;
            $tmp252 = 27;
            goto $l250;
            $l400:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp402.value) {
        {
            org$pandalanguage$pandac$Position* $tmp404 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position403 = *$tmp404;
            $returnValue258 = position403;
            $tmp252 = 28;
            goto $l250;
            $l405:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp407.value) {
        {
            org$pandalanguage$pandac$Position* $tmp409 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position408 = *$tmp409;
            $returnValue258 = position408;
            $tmp252 = 29;
            goto $l250;
            $l410:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp412.value) {
        {
            org$pandalanguage$pandac$Position* $tmp414 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position413 = *$tmp414;
            $returnValue258 = position413;
            $tmp252 = 30;
            goto $l250;
            $l415:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp417.value) {
        {
            org$pandalanguage$pandac$Position* $tmp419 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position418 = *$tmp419;
            $returnValue258 = position418;
            $tmp252 = 31;
            goto $l250;
            $l420:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp422.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp424 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$147_9253->$data + 0));
            base423 = *$tmp424;
            org$pandalanguage$pandac$Position $tmp426 = (($fn425) base423->$class->vtable[3])(base423);
            $returnValue258 = $tmp426;
            $tmp252 = 32;
            goto $l250;
            $l427:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp429.value) {
        {
            org$pandalanguage$pandac$Position* $tmp431 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position430 = *$tmp431;
            $returnValue258 = position430;
            $tmp252 = 33;
            goto $l250;
            $l432:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp434 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp434.value) {
        {
            org$pandalanguage$pandac$Position* $tmp436 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position435 = *$tmp436;
            $returnValue258 = position435;
            $tmp252 = 34;
            goto $l250;
            $l437:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp439.value) {
        {
            org$pandalanguage$pandac$Position* $tmp441 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position440 = *$tmp441;
            $returnValue258 = position440;
            $tmp252 = 35;
            goto $l250;
            $l442:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp444.value) {
        {
            org$pandalanguage$pandac$Position* $tmp446 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position445 = *$tmp446;
            $returnValue258 = position445;
            $tmp252 = 36;
            goto $l250;
            $l447:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp449.value) {
        {
            org$pandalanguage$pandac$Position* $tmp451 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position450 = *$tmp451;
            $returnValue258 = position450;
            $tmp252 = 37;
            goto $l250;
            $l452:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp454.value) {
        {
            org$pandalanguage$pandac$Position* $tmp456 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position455 = *$tmp456;
            $returnValue258 = position455;
            $tmp252 = 38;
            goto $l250;
            $l457:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp459.value) {
        {
            org$pandalanguage$pandac$Position* $tmp461 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position460 = *$tmp461;
            $returnValue258 = position460;
            $tmp252 = 39;
            goto $l250;
            $l462:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp464.value) {
        {
            org$pandalanguage$pandac$Position* $tmp466 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position465 = *$tmp466;
            $returnValue258 = position465;
            $tmp252 = 40;
            goto $l250;
            $l467:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp469.value) {
        {
            org$pandalanguage$pandac$Position* $tmp471 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position470 = *$tmp471;
            $returnValue258 = position470;
            $tmp252 = 41;
            goto $l250;
            $l472:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp474.value) {
        {
            org$pandalanguage$pandac$Position* $tmp476 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position475 = *$tmp476;
            $returnValue258 = position475;
            $tmp252 = 42;
            goto $l250;
            $l477:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp479.value) {
        {
            org$pandalanguage$pandac$Position* $tmp481 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position480 = *$tmp481;
            $returnValue258 = position480;
            $tmp252 = 43;
            goto $l250;
            $l482:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp484.value) {
        {
            org$pandalanguage$pandac$Position* $tmp486 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position485 = *$tmp486;
            $returnValue258 = position485;
            $tmp252 = 44;
            goto $l250;
            $l487:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp489.value) {
        {
            org$pandalanguage$pandac$Position* $tmp491 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position490 = *$tmp491;
            $returnValue258 = position490;
            $tmp252 = 45;
            goto $l250;
            $l492:;
            return $returnValue258;
        }
        }
        else {
        panda$core$Bit $tmp494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$147_9253->$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp494.value) {
        {
            org$pandalanguage$pandac$Position* $tmp496 = ((org$pandalanguage$pandac$Position*) ((char*) $match$147_9253->$data + 0));
            position495 = *$tmp496;
            $returnValue258 = position495;
            $tmp252 = 46;
            goto $l250;
            $l497:;
            return $returnValue258;
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
    $tmp252 = -1;
    goto $l250;
    $l250:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp254));
    switch ($tmp252) {
        case 23: goto $l380;
        case 6: goto $l289;
        case 31: goto $l420;
        case 22: goto $l375;
        case 20: goto $l365;
        case 7: goto $l294;
        case 4: goto $l279;
        case 45: goto $l492;
        case 32: goto $l427;
        case 21: goto $l370;
        case 11: goto $l314;
        case 44: goto $l487;
        case 10: goto $l309;
        case 30: goto $l415;
        case 0: goto $l259;
        case 14: goto $l331;
        case 33: goto $l432;
        case 42: goto $l477;
        case 29: goto $l410;
        case 37: goto $l452;
        case 35: goto $l442;
        case 16: goto $l345;
        case 9: goto $l304;
        case 43: goto $l482;
        case 34: goto $l437;
        case 15: goto $l338;
        case 8: goto $l299;
        case 28: goto $l405;
        case 17: goto $l350;
        case 26: goto $l395;
        case 38: goto $l457;
        case 36: goto $l447;
        case 39: goto $l462;
        case 5: goto $l284;
        case 18: goto $l355;
        case 25: goto $l390;
        case 1: goto $l264;
        case 19: goto $l360;
        case 24: goto $l385;
        case 27: goto $l400;
        case 40: goto $l467;
        case 12: goto $l319;
        case 2: goto $l269;
        case -1: goto $l499;
        case 46: goto $l497;
        case 13: goto $l326;
        case 3: goto $l274;
        case 41: goto $l472;
    }
    $l499:;
}
panda$core$Bit org$pandalanguage$pandac$IRNode$hasSideEffects$R$panda$core$Bit(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$248_9503 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp504;
    org$pandalanguage$pandac$IRNode* test506 = NULL;
    org$pandalanguage$pandac$IRNode* msg508 = NULL;
    panda$core$Bit $returnValue510;
    org$pandalanguage$pandac$IRNode* left524 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op526;
    org$pandalanguage$pandac$IRNode* right528 = NULL;
    panda$core$Bit bit544;
    panda$collections$ImmutableArray* statements549 = NULL;
    panda$collections$Iterator* Iter$258$17554 = NULL;
    panda$collections$Iterator* $tmp555;
    panda$collections$Iterator* $tmp556;
    org$pandalanguage$pandac$IRNode* s572 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp573;
    panda$core$Object* $tmp574;
    panda$core$String* label590 = NULL;
    org$pandalanguage$pandac$MethodRef* m595 = NULL;
    panda$collections$ImmutableArray* args597 = NULL;
    panda$collections$Iterator* Iter$270$17605 = NULL;
    panda$collections$Iterator* $tmp606;
    panda$collections$Iterator* $tmp607;
    org$pandalanguage$pandac$IRNode* arg623 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp624;
    panda$core$Object* $tmp625;
    org$pandalanguage$pandac$IRNode* value641 = NULL;
    org$pandalanguage$pandac$Type* type643 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce648 = NULL;
    org$pandalanguage$pandac$IRNode* base653 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce655 = NULL;
    panda$core$Int64 field657;
    org$pandalanguage$pandac$Type* type662 = NULL;
    org$pandalanguage$pandac$IRNode* call664 = NULL;
    org$pandalanguage$pandac$Type* Type671 = NULL;
    panda$core$String* label676 = NULL;
    org$pandalanguage$pandac$IRNode* target681 = NULL;
    org$pandalanguage$pandac$IRNode* value683 = NULL;
    panda$core$String* label693 = NULL;
    panda$collections$ImmutableArray* statements695 = NULL;
    org$pandalanguage$pandac$IRNode* test697 = NULL;
    panda$collections$Iterator* Iter$294$17706 = NULL;
    panda$collections$Iterator* $tmp707;
    panda$collections$Iterator* $tmp708;
    org$pandalanguage$pandac$IRNode* s724 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp725;
    panda$core$Object* $tmp726;
    org$pandalanguage$pandac$IRNode* base745 = NULL;
    org$pandalanguage$pandac$FieldDecl* field747 = NULL;
    org$pandalanguage$pandac$IRNode* test752 = NULL;
    panda$collections$ImmutableArray* ifTrue754 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse756 = NULL;
    panda$collections$Iterator* Iter$308$17765 = NULL;
    panda$collections$Iterator* $tmp766;
    panda$collections$Iterator* $tmp767;
    org$pandalanguage$pandac$IRNode* s783 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp784;
    panda$core$Object* $tmp785;
    panda$core$UInt64 value803;
    org$pandalanguage$pandac$IRNode* value808 = NULL;
    org$pandalanguage$pandac$IRNode* value815 = NULL;
    panda$core$String* label822 = NULL;
    panda$collections$ImmutableArray* statements824 = NULL;
    panda$collections$Iterator* Iter$321$17829 = NULL;
    panda$collections$Iterator* $tmp830;
    panda$collections$Iterator* $tmp831;
    org$pandalanguage$pandac$IRNode* s847 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp848;
    panda$core$Object* $tmp849;
    org$pandalanguage$pandac$IRNode* value865 = NULL;
    panda$collections$ImmutableArray* whens867 = NULL;
    panda$collections$ImmutableArray* other869 = NULL;
    panda$collections$Iterator* Iter$331$17878 = NULL;
    panda$collections$Iterator* $tmp879;
    panda$collections$Iterator* $tmp880;
    org$pandalanguage$pandac$IRNode* w896 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp897;
    panda$core$Object* $tmp898;
    panda$collections$Iterator* Iter$336$17914 = NULL;
    panda$collections$Iterator* $tmp915;
    panda$collections$Iterator* $tmp916;
    org$pandalanguage$pandac$IRNode* s932 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp933;
    panda$core$Object* $tmp934;
    org$pandalanguage$pandac$IRNode* target950 = NULL;
    org$pandalanguage$pandac$MethodRef* m952 = NULL;
    panda$core$UInt64 value957;
    org$pandalanguage$pandac$parser$Token$Kind op965;
    org$pandalanguage$pandac$IRNode* base967 = NULL;
    panda$core$String* label974 = NULL;
    org$pandalanguage$pandac$IRNode* target976 = NULL;
    org$pandalanguage$pandac$IRNode* list978 = NULL;
    panda$collections$ImmutableArray* statements980 = NULL;
    panda$collections$Iterator* Iter$355$17989 = NULL;
    panda$collections$Iterator* $tmp990;
    panda$collections$Iterator* $tmp991;
    org$pandalanguage$pandac$IRNode* s1007 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1008;
    panda$core$Object* $tmp1009;
    panda$core$Real64 value1025;
    org$pandalanguage$pandac$IRNode* value1030 = NULL;
    panda$core$Int64 id1037;
    org$pandalanguage$pandac$IRNode* base1042 = NULL;
    panda$core$Int64 id1044;
    panda$core$String* str1054 = NULL;
    org$pandalanguage$pandac$IRNode* test1062 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue1064 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse1066 = NULL;
    org$pandalanguage$pandac$Type* type1083 = NULL;
    panda$core$String* name1088 = NULL;
    org$pandalanguage$pandac$IRNode* base1091 = NULL;
    panda$collections$ImmutableArray* args1093 = NULL;
    org$pandalanguage$pandac$IRNode* target1096 = NULL;
    panda$collections$ImmutableArray* methods1098 = NULL;
    panda$collections$ImmutableArray* args1100 = NULL;
    org$pandalanguage$pandac$IRNode* target1103 = NULL;
    panda$collections$ImmutableArray* methods1105 = NULL;
    org$pandalanguage$pandac$IRNode* start1108 = NULL;
    org$pandalanguage$pandac$IRNode* end1110 = NULL;
    panda$core$Bit inclusive1112;
    org$pandalanguage$pandac$IRNode* step1114 = NULL;
    org$pandalanguage$pandac$Variable$Kind kind1117;
    panda$collections$ImmutableArray* decls1119 = NULL;
    panda$collections$Iterator* Iter$390$171124 = NULL;
    panda$collections$Iterator* $tmp1125;
    panda$collections$Iterator* $tmp1126;
    org$pandalanguage$pandac$IRNode* d1142 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1143;
    panda$core$Object* $tmp1144;
    org$pandalanguage$pandac$Variable* variable1160 = NULL;
    panda$collections$ImmutableArray* tests1165 = NULL;
    panda$collections$ImmutableArray* statements1167 = NULL;
    panda$collections$Iterator* Iter$399$171172 = NULL;
    panda$collections$Iterator* $tmp1173;
    panda$collections$Iterator* $tmp1174;
    org$pandalanguage$pandac$IRNode* t1190 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1191;
    panda$core$Object* $tmp1192;
    panda$collections$Iterator* Iter$404$171208 = NULL;
    panda$collections$Iterator* $tmp1209;
    panda$collections$Iterator* $tmp1210;
    org$pandalanguage$pandac$IRNode* s1226 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1227;
    panda$core$Object* $tmp1228;
    panda$core$String* label1244 = NULL;
    org$pandalanguage$pandac$IRNode* test1246 = NULL;
    panda$collections$ImmutableArray* statements1248 = NULL;
    panda$collections$Iterator* Iter$414$171257 = NULL;
    panda$collections$Iterator* $tmp1258;
    panda$collections$Iterator* $tmp1259;
    org$pandalanguage$pandac$IRNode* s1275 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1276;
    panda$core$Object* $tmp1277;
    int $tmp502;
    {
        $tmp504 = self;
        $match$248_9503 = $tmp504;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp504));
        panda$core$Bit $tmp505 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp505.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp507 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 16));
            test506 = *$tmp507;
            org$pandalanguage$pandac$IRNode** $tmp509 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 24));
            msg508 = *$tmp509;
            panda$core$Bit $tmp513 = (($fn512) test506->$class->vtable[4])(test506);
            bool $tmp511 = $tmp513.value;
            if ($tmp511) goto $l514;
            panda$core$Bit $tmp516 = (($fn515) msg508->$class->vtable[4])(msg508);
            $tmp511 = $tmp516.value;
            $l514:;
            panda$core$Bit $tmp517 = { $tmp511 };
            $returnValue510 = $tmp517;
            $tmp502 = 0;
            goto $l500;
            $l518:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp520.value) {
        {
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 1;
            goto $l500;
            $l521:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp523.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp525 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 24));
            left524 = *$tmp525;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp527 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$248_9503->$data + 32));
            op526 = *$tmp527;
            org$pandalanguage$pandac$IRNode** $tmp529 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 40));
            right528 = *$tmp529;
            panda$core$Bit $tmp532 = org$pandalanguage$pandac$Compiler$isAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$Bit(op526);
            bool $tmp531 = $tmp532.value;
            if ($tmp531) goto $l533;
            panda$core$Bit $tmp535 = (($fn534) left524->$class->vtable[4])(left524);
            $tmp531 = $tmp535.value;
            $l533:;
            panda$core$Bit $tmp536 = { $tmp531 };
            bool $tmp530 = $tmp536.value;
            if ($tmp530) goto $l537;
            panda$core$Bit $tmp539 = (($fn538) right528->$class->vtable[4])(right528);
            $tmp530 = $tmp539.value;
            $l537:;
            panda$core$Bit $tmp540 = { $tmp530 };
            $returnValue510 = $tmp540;
            $tmp502 = 2;
            goto $l500;
            $l541:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp543.value) {
        {
            panda$core$Bit* $tmp545 = ((panda$core$Bit*) ((char*) $match$248_9503->$data + 24));
            bit544 = *$tmp545;
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 3;
            goto $l500;
            $l546:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp548.value) {
        {
            panda$collections$ImmutableArray** $tmp550 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9503->$data + 16));
            statements549 = *$tmp550;
            {
                int $tmp553;
                {
                    ITable* $tmp557 = ((panda$collections$Iterable*) statements549)->$class->itable;
                    while ($tmp557->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp557 = $tmp557->next;
                    }
                    $fn559 $tmp558 = $tmp557->methods[0];
                    panda$collections$Iterator* $tmp560 = $tmp558(((panda$collections$Iterable*) statements549));
                    $tmp556 = $tmp560;
                    $tmp555 = $tmp556;
                    Iter$258$17554 = $tmp555;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp555));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp556));
                    $l561:;
                    ITable* $tmp564 = Iter$258$17554->$class->itable;
                    while ($tmp564->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp564 = $tmp564->next;
                    }
                    $fn566 $tmp565 = $tmp564->methods[0];
                    panda$core$Bit $tmp567 = $tmp565(Iter$258$17554);
                    panda$core$Bit $tmp568 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp567);
                    bool $tmp563 = $tmp568.value;
                    if (!$tmp563) goto $l562;
                    {
                        int $tmp571;
                        {
                            ITable* $tmp575 = Iter$258$17554->$class->itable;
                            while ($tmp575->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp575 = $tmp575->next;
                            }
                            $fn577 $tmp576 = $tmp575->methods[1];
                            panda$core$Object* $tmp578 = $tmp576(Iter$258$17554);
                            $tmp574 = $tmp578;
                            $tmp573 = ((org$pandalanguage$pandac$IRNode*) $tmp574);
                            s572 = $tmp573;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp573));
                            panda$core$Panda$unref$panda$core$Object($tmp574);
                            panda$core$Bit $tmp580 = (($fn579) s572->$class->vtable[4])(s572);
                            if ($tmp580.value) {
                            {
                                $returnValue510 = ((panda$core$Bit) { true });
                                $tmp571 = 0;
                                goto $l569;
                                $l581:;
                                $tmp553 = 0;
                                goto $l551;
                                $l582:;
                                $tmp502 = 4;
                                goto $l500;
                                $l583:;
                                return $returnValue510;
                            }
                            }
                        }
                        $tmp571 = -1;
                        goto $l569;
                        $l569:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s572));
                        s572 = NULL;
                        switch ($tmp571) {
                            case -1: goto $l585;
                            case 0: goto $l581;
                        }
                        $l585:;
                    }
                    goto $l561;
                    $l562:;
                }
                $tmp553 = -1;
                goto $l551;
                $l551:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$258$17554));
                Iter$258$17554 = NULL;
                switch ($tmp553) {
                    case 0: goto $l582;
                    case -1: goto $l586;
                }
                $l586:;
            }
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 5;
            goto $l500;
            $l587:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp589.value) {
        {
            panda$core$String** $tmp591 = ((panda$core$String**) ((char*) $match$248_9503->$data + 16));
            label590 = *$tmp591;
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 6;
            goto $l500;
            $l592:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp594 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp594.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp596 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$248_9503->$data + 24));
            m595 = *$tmp596;
            panda$collections$ImmutableArray** $tmp598 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9503->$data + 32));
            args597 = *$tmp598;
            panda$core$Bit $tmp599 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m595->value->methodKind.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp599.value) {
            {
                $returnValue510 = ((panda$core$Bit) { true });
                $tmp502 = 7;
                goto $l500;
                $l600:;
                return $returnValue510;
            }
            }
            {
                int $tmp604;
                {
                    ITable* $tmp608 = ((panda$collections$Iterable*) args597)->$class->itable;
                    while ($tmp608->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp608 = $tmp608->next;
                    }
                    $fn610 $tmp609 = $tmp608->methods[0];
                    panda$collections$Iterator* $tmp611 = $tmp609(((panda$collections$Iterable*) args597));
                    $tmp607 = $tmp611;
                    $tmp606 = $tmp607;
                    Iter$270$17605 = $tmp606;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp606));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp607));
                    $l612:;
                    ITable* $tmp615 = Iter$270$17605->$class->itable;
                    while ($tmp615->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp615 = $tmp615->next;
                    }
                    $fn617 $tmp616 = $tmp615->methods[0];
                    panda$core$Bit $tmp618 = $tmp616(Iter$270$17605);
                    panda$core$Bit $tmp619 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp618);
                    bool $tmp614 = $tmp619.value;
                    if (!$tmp614) goto $l613;
                    {
                        int $tmp622;
                        {
                            ITable* $tmp626 = Iter$270$17605->$class->itable;
                            while ($tmp626->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp626 = $tmp626->next;
                            }
                            $fn628 $tmp627 = $tmp626->methods[1];
                            panda$core$Object* $tmp629 = $tmp627(Iter$270$17605);
                            $tmp625 = $tmp629;
                            $tmp624 = ((org$pandalanguage$pandac$IRNode*) $tmp625);
                            arg623 = $tmp624;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp624));
                            panda$core$Panda$unref$panda$core$Object($tmp625);
                            panda$core$Bit $tmp631 = (($fn630) arg623->$class->vtable[4])(arg623);
                            if ($tmp631.value) {
                            {
                                $returnValue510 = ((panda$core$Bit) { true });
                                $tmp622 = 0;
                                goto $l620;
                                $l632:;
                                $tmp604 = 0;
                                goto $l602;
                                $l633:;
                                $tmp502 = 8;
                                goto $l500;
                                $l634:;
                                return $returnValue510;
                            }
                            }
                        }
                        $tmp622 = -1;
                        goto $l620;
                        $l620:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg623));
                        arg623 = NULL;
                        switch ($tmp622) {
                            case 0: goto $l632;
                            case -1: goto $l636;
                        }
                        $l636:;
                    }
                    goto $l612;
                    $l613:;
                }
                $tmp604 = -1;
                goto $l602;
                $l602:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$270$17605));
                Iter$270$17605 = NULL;
                switch ($tmp604) {
                    case -1: goto $l637;
                    case 0: goto $l633;
                }
                $l637:;
            }
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 9;
            goto $l500;
            $l638:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp640.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp642 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 16));
            value641 = *$tmp642;
            org$pandalanguage$pandac$Type** $tmp644 = ((org$pandalanguage$pandac$Type**) ((char*) $match$248_9503->$data + 24));
            type643 = *$tmp644;
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 10;
            goto $l500;
            $l645:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp647.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp649 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$248_9503->$data + 16));
            ce648 = *$tmp649;
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 11;
            goto $l500;
            $l650:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp652 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp652.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp654 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 16));
            base653 = *$tmp654;
            org$pandalanguage$pandac$ChoiceEntry** $tmp656 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$248_9503->$data + 24));
            ce655 = *$tmp656;
            panda$core$Int64* $tmp658 = ((panda$core$Int64*) ((char*) $match$248_9503->$data + 32));
            field657 = *$tmp658;
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 12;
            goto $l500;
            $l659:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp661 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp661.value) {
        {
            org$pandalanguage$pandac$Type** $tmp663 = ((org$pandalanguage$pandac$Type**) ((char*) $match$248_9503->$data + 16));
            type662 = *$tmp663;
            org$pandalanguage$pandac$IRNode** $tmp665 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 24));
            call664 = *$tmp665;
            panda$core$Bit $tmp667 = (($fn666) call664->$class->vtable[4])(call664);
            $returnValue510 = $tmp667;
            $tmp502 = 13;
            goto $l500;
            $l668:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp670 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp670.value) {
        {
            org$pandalanguage$pandac$Type** $tmp672 = ((org$pandalanguage$pandac$Type**) ((char*) $match$248_9503->$data + 16));
            Type671 = *$tmp672;
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 14;
            goto $l500;
            $l673:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp675.value) {
        {
            panda$core$String** $tmp677 = ((panda$core$String**) ((char*) $match$248_9503->$data + 16));
            label676 = *$tmp677;
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 15;
            goto $l500;
            $l678:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp680 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp680.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp682 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 0));
            target681 = *$tmp682;
            org$pandalanguage$pandac$IRNode** $tmp684 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 8));
            value683 = *$tmp684;
            bool $tmp685 = ((panda$core$Bit) { value683 != NULL }).value;
            if (!$tmp685) goto $l686;
            panda$core$Bit $tmp688 = (($fn687) value683->$class->vtable[4])(value683);
            $tmp685 = $tmp688.value;
            $l686:;
            panda$core$Bit $tmp689 = { $tmp685 };
            $returnValue510 = $tmp689;
            $tmp502 = 16;
            goto $l500;
            $l690:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp692 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp692.value) {
        {
            panda$core$String** $tmp694 = ((panda$core$String**) ((char*) $match$248_9503->$data + 16));
            label693 = *$tmp694;
            panda$collections$ImmutableArray** $tmp696 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9503->$data + 24));
            statements695 = *$tmp696;
            org$pandalanguage$pandac$IRNode** $tmp698 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 32));
            test697 = *$tmp698;
            panda$core$Bit $tmp700 = (($fn699) test697->$class->vtable[4])(test697);
            if ($tmp700.value) {
            {
                $returnValue510 = ((panda$core$Bit) { true });
                $tmp502 = 17;
                goto $l500;
                $l701:;
                return $returnValue510;
            }
            }
            {
                int $tmp705;
                {
                    ITable* $tmp709 = ((panda$collections$Iterable*) statements695)->$class->itable;
                    while ($tmp709->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp709 = $tmp709->next;
                    }
                    $fn711 $tmp710 = $tmp709->methods[0];
                    panda$collections$Iterator* $tmp712 = $tmp710(((panda$collections$Iterable*) statements695));
                    $tmp708 = $tmp712;
                    $tmp707 = $tmp708;
                    Iter$294$17706 = $tmp707;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp707));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp708));
                    $l713:;
                    ITable* $tmp716 = Iter$294$17706->$class->itable;
                    while ($tmp716->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp716 = $tmp716->next;
                    }
                    $fn718 $tmp717 = $tmp716->methods[0];
                    panda$core$Bit $tmp719 = $tmp717(Iter$294$17706);
                    panda$core$Bit $tmp720 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp719);
                    bool $tmp715 = $tmp720.value;
                    if (!$tmp715) goto $l714;
                    {
                        int $tmp723;
                        {
                            ITable* $tmp727 = Iter$294$17706->$class->itable;
                            while ($tmp727->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp727 = $tmp727->next;
                            }
                            $fn729 $tmp728 = $tmp727->methods[1];
                            panda$core$Object* $tmp730 = $tmp728(Iter$294$17706);
                            $tmp726 = $tmp730;
                            $tmp725 = ((org$pandalanguage$pandac$IRNode*) $tmp726);
                            s724 = $tmp725;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp725));
                            panda$core$Panda$unref$panda$core$Object($tmp726);
                            panda$core$Bit $tmp732 = (($fn731) s724->$class->vtable[4])(s724);
                            if ($tmp732.value) {
                            {
                                $returnValue510 = ((panda$core$Bit) { true });
                                $tmp723 = 0;
                                goto $l721;
                                $l733:;
                                $tmp705 = 0;
                                goto $l703;
                                $l734:;
                                $tmp502 = 18;
                                goto $l500;
                                $l735:;
                                return $returnValue510;
                            }
                            }
                        }
                        $tmp723 = -1;
                        goto $l721;
                        $l721:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s724));
                        s724 = NULL;
                        switch ($tmp723) {
                            case -1: goto $l737;
                            case 0: goto $l733;
                        }
                        $l737:;
                    }
                    goto $l713;
                    $l714:;
                }
                $tmp705 = -1;
                goto $l703;
                $l703:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$294$17706));
                Iter$294$17706 = NULL;
                switch ($tmp705) {
                    case -1: goto $l738;
                    case 0: goto $l734;
                }
                $l738:;
            }
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 19;
            goto $l500;
            $l739:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp741 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp741.value) {
        {
            $returnValue510 = ((panda$core$Bit) { true });
            $tmp502 = 20;
            goto $l500;
            $l742:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp744 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp744.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp746 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 24));
            base745 = *$tmp746;
            org$pandalanguage$pandac$FieldDecl** $tmp748 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$248_9503->$data + 32));
            field747 = *$tmp748;
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 21;
            goto $l500;
            $l749:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp751 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp751.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp753 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 16));
            test752 = *$tmp753;
            panda$collections$ImmutableArray** $tmp755 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9503->$data + 24));
            ifTrue754 = *$tmp755;
            org$pandalanguage$pandac$IRNode** $tmp757 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 32));
            ifFalse756 = *$tmp757;
            panda$core$Bit $tmp759 = (($fn758) test752->$class->vtable[4])(test752);
            if ($tmp759.value) {
            {
                $returnValue510 = ((panda$core$Bit) { true });
                $tmp502 = 22;
                goto $l500;
                $l760:;
                return $returnValue510;
            }
            }
            {
                int $tmp764;
                {
                    ITable* $tmp768 = ((panda$collections$Iterable*) ifTrue754)->$class->itable;
                    while ($tmp768->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp768 = $tmp768->next;
                    }
                    $fn770 $tmp769 = $tmp768->methods[0];
                    panda$collections$Iterator* $tmp771 = $tmp769(((panda$collections$Iterable*) ifTrue754));
                    $tmp767 = $tmp771;
                    $tmp766 = $tmp767;
                    Iter$308$17765 = $tmp766;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp766));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp767));
                    $l772:;
                    ITable* $tmp775 = Iter$308$17765->$class->itable;
                    while ($tmp775->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp775 = $tmp775->next;
                    }
                    $fn777 $tmp776 = $tmp775->methods[0];
                    panda$core$Bit $tmp778 = $tmp776(Iter$308$17765);
                    panda$core$Bit $tmp779 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp778);
                    bool $tmp774 = $tmp779.value;
                    if (!$tmp774) goto $l773;
                    {
                        int $tmp782;
                        {
                            ITable* $tmp786 = Iter$308$17765->$class->itable;
                            while ($tmp786->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp786 = $tmp786->next;
                            }
                            $fn788 $tmp787 = $tmp786->methods[1];
                            panda$core$Object* $tmp789 = $tmp787(Iter$308$17765);
                            $tmp785 = $tmp789;
                            $tmp784 = ((org$pandalanguage$pandac$IRNode*) $tmp785);
                            s783 = $tmp784;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp784));
                            panda$core$Panda$unref$panda$core$Object($tmp785);
                            panda$core$Bit $tmp791 = (($fn790) s783->$class->vtable[4])(s783);
                            if ($tmp791.value) {
                            {
                                $returnValue510 = ((panda$core$Bit) { true });
                                $tmp782 = 0;
                                goto $l780;
                                $l792:;
                                $tmp764 = 0;
                                goto $l762;
                                $l793:;
                                $tmp502 = 23;
                                goto $l500;
                                $l794:;
                                return $returnValue510;
                            }
                            }
                        }
                        $tmp782 = -1;
                        goto $l780;
                        $l780:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s783));
                        s783 = NULL;
                        switch ($tmp782) {
                            case -1: goto $l796;
                            case 0: goto $l792;
                        }
                        $l796:;
                    }
                    goto $l772;
                    $l773:;
                }
                $tmp764 = -1;
                goto $l762;
                $l762:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$308$17765));
                Iter$308$17765 = NULL;
                switch ($tmp764) {
                    case 0: goto $l793;
                    case -1: goto $l797;
                }
                $l797:;
            }
            panda$core$Bit $tmp799 = (($fn798) ifFalse756->$class->vtable[4])(ifFalse756);
            $returnValue510 = $tmp799;
            $tmp502 = 24;
            goto $l500;
            $l800:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp802.value) {
        {
            panda$core$UInt64* $tmp804 = ((panda$core$UInt64*) ((char*) $match$248_9503->$data + 24));
            value803 = *$tmp804;
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 25;
            goto $l500;
            $l805:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp807.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp809 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 16));
            value808 = *$tmp809;
            panda$core$Bit $tmp811 = (($fn810) value808->$class->vtable[4])(value808);
            $returnValue510 = $tmp811;
            $tmp502 = 26;
            goto $l500;
            $l812:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp814 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp814.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp816 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 16));
            value815 = *$tmp816;
            panda$core$Bit $tmp818 = (($fn817) value815->$class->vtable[4])(value815);
            $returnValue510 = $tmp818;
            $tmp502 = 27;
            goto $l500;
            $l819:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp821 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp821.value) {
        {
            panda$core$String** $tmp823 = ((panda$core$String**) ((char*) $match$248_9503->$data + 16));
            label822 = *$tmp823;
            panda$collections$ImmutableArray** $tmp825 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9503->$data + 24));
            statements824 = *$tmp825;
            {
                int $tmp828;
                {
                    ITable* $tmp832 = ((panda$collections$Iterable*) statements824)->$class->itable;
                    while ($tmp832->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp832 = $tmp832->next;
                    }
                    $fn834 $tmp833 = $tmp832->methods[0];
                    panda$collections$Iterator* $tmp835 = $tmp833(((panda$collections$Iterable*) statements824));
                    $tmp831 = $tmp835;
                    $tmp830 = $tmp831;
                    Iter$321$17829 = $tmp830;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp830));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp831));
                    $l836:;
                    ITable* $tmp839 = Iter$321$17829->$class->itable;
                    while ($tmp839->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp839 = $tmp839->next;
                    }
                    $fn841 $tmp840 = $tmp839->methods[0];
                    panda$core$Bit $tmp842 = $tmp840(Iter$321$17829);
                    panda$core$Bit $tmp843 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp842);
                    bool $tmp838 = $tmp843.value;
                    if (!$tmp838) goto $l837;
                    {
                        int $tmp846;
                        {
                            ITable* $tmp850 = Iter$321$17829->$class->itable;
                            while ($tmp850->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp850 = $tmp850->next;
                            }
                            $fn852 $tmp851 = $tmp850->methods[1];
                            panda$core$Object* $tmp853 = $tmp851(Iter$321$17829);
                            $tmp849 = $tmp853;
                            $tmp848 = ((org$pandalanguage$pandac$IRNode*) $tmp849);
                            s847 = $tmp848;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp848));
                            panda$core$Panda$unref$panda$core$Object($tmp849);
                            panda$core$Bit $tmp855 = (($fn854) s847->$class->vtable[4])(s847);
                            if ($tmp855.value) {
                            {
                                $returnValue510 = ((panda$core$Bit) { true });
                                $tmp846 = 0;
                                goto $l844;
                                $l856:;
                                $tmp828 = 0;
                                goto $l826;
                                $l857:;
                                $tmp502 = 28;
                                goto $l500;
                                $l858:;
                                return $returnValue510;
                            }
                            }
                        }
                        $tmp846 = -1;
                        goto $l844;
                        $l844:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s847));
                        s847 = NULL;
                        switch ($tmp846) {
                            case 0: goto $l856;
                            case -1: goto $l860;
                        }
                        $l860:;
                    }
                    goto $l836;
                    $l837:;
                }
                $tmp828 = -1;
                goto $l826;
                $l826:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$321$17829));
                Iter$321$17829 = NULL;
                switch ($tmp828) {
                    case 0: goto $l857;
                    case -1: goto $l861;
                }
                $l861:;
            }
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 29;
            goto $l500;
            $l862:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp864.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp866 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 16));
            value865 = *$tmp866;
            panda$collections$ImmutableArray** $tmp868 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9503->$data + 24));
            whens867 = *$tmp868;
            panda$collections$ImmutableArray** $tmp870 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9503->$data + 32));
            other869 = *$tmp870;
            panda$core$Bit $tmp872 = (($fn871) value865->$class->vtable[4])(value865);
            if ($tmp872.value) {
            {
                $returnValue510 = ((panda$core$Bit) { true });
                $tmp502 = 30;
                goto $l500;
                $l873:;
                return $returnValue510;
            }
            }
            {
                int $tmp877;
                {
                    ITable* $tmp881 = ((panda$collections$Iterable*) whens867)->$class->itable;
                    while ($tmp881->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp881 = $tmp881->next;
                    }
                    $fn883 $tmp882 = $tmp881->methods[0];
                    panda$collections$Iterator* $tmp884 = $tmp882(((panda$collections$Iterable*) whens867));
                    $tmp880 = $tmp884;
                    $tmp879 = $tmp880;
                    Iter$331$17878 = $tmp879;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp879));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp880));
                    $l885:;
                    ITable* $tmp888 = Iter$331$17878->$class->itable;
                    while ($tmp888->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp888 = $tmp888->next;
                    }
                    $fn890 $tmp889 = $tmp888->methods[0];
                    panda$core$Bit $tmp891 = $tmp889(Iter$331$17878);
                    panda$core$Bit $tmp892 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp891);
                    bool $tmp887 = $tmp892.value;
                    if (!$tmp887) goto $l886;
                    {
                        int $tmp895;
                        {
                            ITable* $tmp899 = Iter$331$17878->$class->itable;
                            while ($tmp899->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp899 = $tmp899->next;
                            }
                            $fn901 $tmp900 = $tmp899->methods[1];
                            panda$core$Object* $tmp902 = $tmp900(Iter$331$17878);
                            $tmp898 = $tmp902;
                            $tmp897 = ((org$pandalanguage$pandac$IRNode*) $tmp898);
                            w896 = $tmp897;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp897));
                            panda$core$Panda$unref$panda$core$Object($tmp898);
                            panda$core$Bit $tmp904 = (($fn903) w896->$class->vtable[4])(w896);
                            if ($tmp904.value) {
                            {
                                $returnValue510 = ((panda$core$Bit) { true });
                                $tmp895 = 0;
                                goto $l893;
                                $l905:;
                                $tmp877 = 0;
                                goto $l875;
                                $l906:;
                                $tmp502 = 31;
                                goto $l500;
                                $l907:;
                                return $returnValue510;
                            }
                            }
                        }
                        $tmp895 = -1;
                        goto $l893;
                        $l893:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w896));
                        w896 = NULL;
                        switch ($tmp895) {
                            case -1: goto $l909;
                            case 0: goto $l905;
                        }
                        $l909:;
                    }
                    goto $l885;
                    $l886:;
                }
                $tmp877 = -1;
                goto $l875;
                $l875:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$331$17878));
                Iter$331$17878 = NULL;
                switch ($tmp877) {
                    case 0: goto $l906;
                    case -1: goto $l910;
                }
                $l910:;
            }
            {
                int $tmp913;
                {
                    ITable* $tmp917 = ((panda$collections$Iterable*) other869)->$class->itable;
                    while ($tmp917->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp917 = $tmp917->next;
                    }
                    $fn919 $tmp918 = $tmp917->methods[0];
                    panda$collections$Iterator* $tmp920 = $tmp918(((panda$collections$Iterable*) other869));
                    $tmp916 = $tmp920;
                    $tmp915 = $tmp916;
                    Iter$336$17914 = $tmp915;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp915));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp916));
                    $l921:;
                    ITable* $tmp924 = Iter$336$17914->$class->itable;
                    while ($tmp924->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp924 = $tmp924->next;
                    }
                    $fn926 $tmp925 = $tmp924->methods[0];
                    panda$core$Bit $tmp927 = $tmp925(Iter$336$17914);
                    panda$core$Bit $tmp928 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp927);
                    bool $tmp923 = $tmp928.value;
                    if (!$tmp923) goto $l922;
                    {
                        int $tmp931;
                        {
                            ITable* $tmp935 = Iter$336$17914->$class->itable;
                            while ($tmp935->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp935 = $tmp935->next;
                            }
                            $fn937 $tmp936 = $tmp935->methods[1];
                            panda$core$Object* $tmp938 = $tmp936(Iter$336$17914);
                            $tmp934 = $tmp938;
                            $tmp933 = ((org$pandalanguage$pandac$IRNode*) $tmp934);
                            s932 = $tmp933;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp933));
                            panda$core$Panda$unref$panda$core$Object($tmp934);
                            panda$core$Bit $tmp940 = (($fn939) s932->$class->vtable[4])(s932);
                            if ($tmp940.value) {
                            {
                                $returnValue510 = ((panda$core$Bit) { true });
                                $tmp931 = 0;
                                goto $l929;
                                $l941:;
                                $tmp913 = 0;
                                goto $l911;
                                $l942:;
                                $tmp502 = 32;
                                goto $l500;
                                $l943:;
                                return $returnValue510;
                            }
                            }
                        }
                        $tmp931 = -1;
                        goto $l929;
                        $l929:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s932));
                        s932 = NULL;
                        switch ($tmp931) {
                            case 0: goto $l941;
                            case -1: goto $l945;
                        }
                        $l945:;
                    }
                    goto $l921;
                    $l922:;
                }
                $tmp913 = -1;
                goto $l911;
                $l911:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$336$17914));
                Iter$336$17914 = NULL;
                switch ($tmp913) {
                    case -1: goto $l946;
                    case 0: goto $l942;
                }
                $l946:;
            }
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 33;
            goto $l500;
            $l947:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp949 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp949.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp951 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 16));
            target950 = *$tmp951;
            org$pandalanguage$pandac$MethodRef** $tmp953 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$248_9503->$data + 24));
            m952 = *$tmp953;
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 34;
            goto $l500;
            $l954:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp956 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp956.value) {
        {
            panda$core$UInt64* $tmp958 = ((panda$core$UInt64*) ((char*) $match$248_9503->$data + 24));
            value957 = *$tmp958;
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 35;
            goto $l500;
            $l959:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp961 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp961.value) {
        {
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 36;
            goto $l500;
            $l962:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp964 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp964.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp966 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$248_9503->$data + 16));
            op965 = *$tmp966;
            org$pandalanguage$pandac$IRNode** $tmp968 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 24));
            base967 = *$tmp968;
            panda$core$Bit $tmp970 = (($fn969) base967->$class->vtable[4])(base967);
            $returnValue510 = $tmp970;
            $tmp502 = 37;
            goto $l500;
            $l971:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp973.value) {
        {
            panda$core$String** $tmp975 = ((panda$core$String**) ((char*) $match$248_9503->$data + 16));
            label974 = *$tmp975;
            org$pandalanguage$pandac$IRNode** $tmp977 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 24));
            target976 = *$tmp977;
            org$pandalanguage$pandac$IRNode** $tmp979 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 32));
            list978 = *$tmp979;
            panda$collections$ImmutableArray** $tmp981 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9503->$data + 40));
            statements980 = *$tmp981;
            panda$core$Bit $tmp983 = (($fn982) list978->$class->vtable[4])(list978);
            if ($tmp983.value) {
            {
                $returnValue510 = ((panda$core$Bit) { true });
                $tmp502 = 38;
                goto $l500;
                $l984:;
                return $returnValue510;
            }
            }
            {
                int $tmp988;
                {
                    ITable* $tmp992 = ((panda$collections$Iterable*) statements980)->$class->itable;
                    while ($tmp992->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp992 = $tmp992->next;
                    }
                    $fn994 $tmp993 = $tmp992->methods[0];
                    panda$collections$Iterator* $tmp995 = $tmp993(((panda$collections$Iterable*) statements980));
                    $tmp991 = $tmp995;
                    $tmp990 = $tmp991;
                    Iter$355$17989 = $tmp990;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp990));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp991));
                    $l996:;
                    ITable* $tmp999 = Iter$355$17989->$class->itable;
                    while ($tmp999->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp999 = $tmp999->next;
                    }
                    $fn1001 $tmp1000 = $tmp999->methods[0];
                    panda$core$Bit $tmp1002 = $tmp1000(Iter$355$17989);
                    panda$core$Bit $tmp1003 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1002);
                    bool $tmp998 = $tmp1003.value;
                    if (!$tmp998) goto $l997;
                    {
                        int $tmp1006;
                        {
                            ITable* $tmp1010 = Iter$355$17989->$class->itable;
                            while ($tmp1010->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1010 = $tmp1010->next;
                            }
                            $fn1012 $tmp1011 = $tmp1010->methods[1];
                            panda$core$Object* $tmp1013 = $tmp1011(Iter$355$17989);
                            $tmp1009 = $tmp1013;
                            $tmp1008 = ((org$pandalanguage$pandac$IRNode*) $tmp1009);
                            s1007 = $tmp1008;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1008));
                            panda$core$Panda$unref$panda$core$Object($tmp1009);
                            panda$core$Bit $tmp1015 = (($fn1014) s1007->$class->vtable[4])(s1007);
                            if ($tmp1015.value) {
                            {
                                $returnValue510 = ((panda$core$Bit) { true });
                                $tmp1006 = 0;
                                goto $l1004;
                                $l1016:;
                                $tmp988 = 0;
                                goto $l986;
                                $l1017:;
                                $tmp502 = 39;
                                goto $l500;
                                $l1018:;
                                return $returnValue510;
                            }
                            }
                        }
                        $tmp1006 = -1;
                        goto $l1004;
                        $l1004:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1007));
                        s1007 = NULL;
                        switch ($tmp1006) {
                            case 0: goto $l1016;
                            case -1: goto $l1020;
                        }
                        $l1020:;
                    }
                    goto $l996;
                    $l997:;
                }
                $tmp988 = -1;
                goto $l986;
                $l986:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$355$17989));
                Iter$355$17989 = NULL;
                switch ($tmp988) {
                    case -1: goto $l1021;
                    case 0: goto $l1017;
                }
                $l1021:;
            }
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 40;
            goto $l500;
            $l1022:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp1024 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1024.value) {
        {
            panda$core$Real64* $tmp1026 = ((panda$core$Real64*) ((char*) $match$248_9503->$data + 24));
            value1025 = *$tmp1026;
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 41;
            goto $l500;
            $l1027:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp1029 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1029.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1031 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 16));
            value1030 = *$tmp1031;
            panda$core$Bit $tmp1033 = (($fn1032) value1030->$class->vtable[4])(value1030);
            $returnValue510 = $tmp1033;
            $tmp502 = 42;
            goto $l500;
            $l1034:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp1036 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1036.value) {
        {
            panda$core$Int64* $tmp1038 = ((panda$core$Int64*) ((char*) $match$248_9503->$data + 24));
            id1037 = *$tmp1038;
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 43;
            goto $l500;
            $l1039:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp1041 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1041.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1043 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 0));
            base1042 = *$tmp1043;
            panda$core$Int64* $tmp1045 = ((panda$core$Int64*) ((char*) $match$248_9503->$data + 8));
            id1044 = *$tmp1045;
            panda$core$Bit $tmp1047 = (($fn1046) base1042->$class->vtable[4])(base1042);
            $returnValue510 = $tmp1047;
            $tmp502 = 44;
            goto $l500;
            $l1048:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp1050 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1050.value) {
        {
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 45;
            goto $l500;
            $l1051:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp1053 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1053.value) {
        {
            panda$core$String** $tmp1055 = ((panda$core$String**) ((char*) $match$248_9503->$data + 16));
            str1054 = *$tmp1055;
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 46;
            goto $l500;
            $l1056:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp1058 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1058.value) {
        {
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 47;
            goto $l500;
            $l1059:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp1061 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1061.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1063 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 16));
            test1062 = *$tmp1063;
            org$pandalanguage$pandac$IRNode** $tmp1065 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 24));
            ifTrue1064 = *$tmp1065;
            org$pandalanguage$pandac$IRNode** $tmp1067 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 32));
            ifFalse1066 = *$tmp1067;
            panda$core$Bit $tmp1071 = (($fn1070) test1062->$class->vtable[4])(test1062);
            bool $tmp1069 = $tmp1071.value;
            if ($tmp1069) goto $l1072;
            panda$core$Bit $tmp1074 = (($fn1073) ifTrue1064->$class->vtable[4])(ifTrue1064);
            $tmp1069 = $tmp1074.value;
            $l1072:;
            panda$core$Bit $tmp1075 = { $tmp1069 };
            bool $tmp1068 = $tmp1075.value;
            if ($tmp1068) goto $l1076;
            panda$core$Bit $tmp1078 = (($fn1077) ifFalse1066->$class->vtable[4])(ifFalse1066);
            $tmp1068 = $tmp1078.value;
            $l1076:;
            panda$core$Bit $tmp1079 = { $tmp1068 };
            $returnValue510 = $tmp1079;
            $tmp502 = 48;
            goto $l500;
            $l1080:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp1082 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1082.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1084 = ((org$pandalanguage$pandac$Type**) ((char*) $match$248_9503->$data + 16));
            type1083 = *$tmp1084;
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 49;
            goto $l500;
            $l1085:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp1087 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1087.value) {
        {
            panda$core$String** $tmp1089 = ((panda$core$String**) ((char*) $match$248_9503->$data + 16));
            name1088 = *$tmp1089;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1090 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1090.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1092 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 24));
            base1091 = *$tmp1092;
            panda$collections$ImmutableArray** $tmp1094 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9503->$data + 32));
            args1093 = *$tmp1094;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1095 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1095.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1097 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 24));
            target1096 = *$tmp1097;
            panda$collections$ImmutableArray** $tmp1099 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9503->$data + 32));
            methods1098 = *$tmp1099;
            panda$collections$ImmutableArray** $tmp1101 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9503->$data + 40));
            args1100 = *$tmp1101;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp1102.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1104 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 16));
            target1103 = *$tmp1104;
            panda$collections$ImmutableArray** $tmp1106 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9503->$data + 24));
            methods1105 = *$tmp1106;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp1107.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1109 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 16));
            start1108 = *$tmp1109;
            org$pandalanguage$pandac$IRNode** $tmp1111 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 24));
            end1110 = *$tmp1111;
            panda$core$Bit* $tmp1113 = ((panda$core$Bit*) ((char*) $match$248_9503->$data + 32));
            inclusive1112 = *$tmp1113;
            org$pandalanguage$pandac$IRNode** $tmp1115 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 33));
            step1114 = *$tmp1115;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp1116.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp1118 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$248_9503->$data + 16));
            kind1117 = *$tmp1118;
            panda$collections$ImmutableArray** $tmp1120 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9503->$data + 24));
            decls1119 = *$tmp1120;
            {
                int $tmp1123;
                {
                    ITable* $tmp1127 = ((panda$collections$Iterable*) decls1119)->$class->itable;
                    while ($tmp1127->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1127 = $tmp1127->next;
                    }
                    $fn1129 $tmp1128 = $tmp1127->methods[0];
                    panda$collections$Iterator* $tmp1130 = $tmp1128(((panda$collections$Iterable*) decls1119));
                    $tmp1126 = $tmp1130;
                    $tmp1125 = $tmp1126;
                    Iter$390$171124 = $tmp1125;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1125));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1126));
                    $l1131:;
                    ITable* $tmp1134 = Iter$390$171124->$class->itable;
                    while ($tmp1134->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1134 = $tmp1134->next;
                    }
                    $fn1136 $tmp1135 = $tmp1134->methods[0];
                    panda$core$Bit $tmp1137 = $tmp1135(Iter$390$171124);
                    panda$core$Bit $tmp1138 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1137);
                    bool $tmp1133 = $tmp1138.value;
                    if (!$tmp1133) goto $l1132;
                    {
                        int $tmp1141;
                        {
                            ITable* $tmp1145 = Iter$390$171124->$class->itable;
                            while ($tmp1145->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1145 = $tmp1145->next;
                            }
                            $fn1147 $tmp1146 = $tmp1145->methods[1];
                            panda$core$Object* $tmp1148 = $tmp1146(Iter$390$171124);
                            $tmp1144 = $tmp1148;
                            $tmp1143 = ((org$pandalanguage$pandac$IRNode*) $tmp1144);
                            d1142 = $tmp1143;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1143));
                            panda$core$Panda$unref$panda$core$Object($tmp1144);
                            panda$core$Bit $tmp1150 = (($fn1149) d1142->$class->vtable[4])(d1142);
                            if ($tmp1150.value) {
                            {
                                $returnValue510 = ((panda$core$Bit) { true });
                                $tmp1141 = 0;
                                goto $l1139;
                                $l1151:;
                                $tmp1123 = 0;
                                goto $l1121;
                                $l1152:;
                                $tmp502 = 50;
                                goto $l500;
                                $l1153:;
                                return $returnValue510;
                            }
                            }
                        }
                        $tmp1141 = -1;
                        goto $l1139;
                        $l1139:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) d1142));
                        d1142 = NULL;
                        switch ($tmp1141) {
                            case -1: goto $l1155;
                            case 0: goto $l1151;
                        }
                        $l1155:;
                    }
                    goto $l1131;
                    $l1132:;
                }
                $tmp1123 = -1;
                goto $l1121;
                $l1121:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$390$171124));
                Iter$390$171124 = NULL;
                switch ($tmp1123) {
                    case -1: goto $l1156;
                    case 0: goto $l1152;
                }
                $l1156:;
            }
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 51;
            goto $l500;
            $l1157:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp1159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp1159.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp1161 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$248_9503->$data + 16));
            variable1160 = *$tmp1161;
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 52;
            goto $l500;
            $l1162:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp1164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp1164.value) {
        {
            panda$collections$ImmutableArray** $tmp1166 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9503->$data + 16));
            tests1165 = *$tmp1166;
            panda$collections$ImmutableArray** $tmp1168 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9503->$data + 24));
            statements1167 = *$tmp1168;
            {
                int $tmp1171;
                {
                    ITable* $tmp1175 = ((panda$collections$Iterable*) tests1165)->$class->itable;
                    while ($tmp1175->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1175 = $tmp1175->next;
                    }
                    $fn1177 $tmp1176 = $tmp1175->methods[0];
                    panda$collections$Iterator* $tmp1178 = $tmp1176(((panda$collections$Iterable*) tests1165));
                    $tmp1174 = $tmp1178;
                    $tmp1173 = $tmp1174;
                    Iter$399$171172 = $tmp1173;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1173));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1174));
                    $l1179:;
                    ITable* $tmp1182 = Iter$399$171172->$class->itable;
                    while ($tmp1182->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1182 = $tmp1182->next;
                    }
                    $fn1184 $tmp1183 = $tmp1182->methods[0];
                    panda$core$Bit $tmp1185 = $tmp1183(Iter$399$171172);
                    panda$core$Bit $tmp1186 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1185);
                    bool $tmp1181 = $tmp1186.value;
                    if (!$tmp1181) goto $l1180;
                    {
                        int $tmp1189;
                        {
                            ITable* $tmp1193 = Iter$399$171172->$class->itable;
                            while ($tmp1193->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1193 = $tmp1193->next;
                            }
                            $fn1195 $tmp1194 = $tmp1193->methods[1];
                            panda$core$Object* $tmp1196 = $tmp1194(Iter$399$171172);
                            $tmp1192 = $tmp1196;
                            $tmp1191 = ((org$pandalanguage$pandac$IRNode*) $tmp1192);
                            t1190 = $tmp1191;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1191));
                            panda$core$Panda$unref$panda$core$Object($tmp1192);
                            panda$core$Bit $tmp1198 = (($fn1197) t1190->$class->vtable[4])(t1190);
                            if ($tmp1198.value) {
                            {
                                $returnValue510 = ((panda$core$Bit) { true });
                                $tmp1189 = 0;
                                goto $l1187;
                                $l1199:;
                                $tmp1171 = 0;
                                goto $l1169;
                                $l1200:;
                                $tmp502 = 53;
                                goto $l500;
                                $l1201:;
                                return $returnValue510;
                            }
                            }
                        }
                        $tmp1189 = -1;
                        goto $l1187;
                        $l1187:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1190));
                        t1190 = NULL;
                        switch ($tmp1189) {
                            case 0: goto $l1199;
                            case -1: goto $l1203;
                        }
                        $l1203:;
                    }
                    goto $l1179;
                    $l1180:;
                }
                $tmp1171 = -1;
                goto $l1169;
                $l1169:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$399$171172));
                Iter$399$171172 = NULL;
                switch ($tmp1171) {
                    case -1: goto $l1204;
                    case 0: goto $l1200;
                }
                $l1204:;
            }
            {
                int $tmp1207;
                {
                    ITable* $tmp1211 = ((panda$collections$Iterable*) statements1167)->$class->itable;
                    while ($tmp1211->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1211 = $tmp1211->next;
                    }
                    $fn1213 $tmp1212 = $tmp1211->methods[0];
                    panda$collections$Iterator* $tmp1214 = $tmp1212(((panda$collections$Iterable*) statements1167));
                    $tmp1210 = $tmp1214;
                    $tmp1209 = $tmp1210;
                    Iter$404$171208 = $tmp1209;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1209));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1210));
                    $l1215:;
                    ITable* $tmp1218 = Iter$404$171208->$class->itable;
                    while ($tmp1218->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1218 = $tmp1218->next;
                    }
                    $fn1220 $tmp1219 = $tmp1218->methods[0];
                    panda$core$Bit $tmp1221 = $tmp1219(Iter$404$171208);
                    panda$core$Bit $tmp1222 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1221);
                    bool $tmp1217 = $tmp1222.value;
                    if (!$tmp1217) goto $l1216;
                    {
                        int $tmp1225;
                        {
                            ITable* $tmp1229 = Iter$404$171208->$class->itable;
                            while ($tmp1229->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1229 = $tmp1229->next;
                            }
                            $fn1231 $tmp1230 = $tmp1229->methods[1];
                            panda$core$Object* $tmp1232 = $tmp1230(Iter$404$171208);
                            $tmp1228 = $tmp1232;
                            $tmp1227 = ((org$pandalanguage$pandac$IRNode*) $tmp1228);
                            s1226 = $tmp1227;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1227));
                            panda$core$Panda$unref$panda$core$Object($tmp1228);
                            panda$core$Bit $tmp1234 = (($fn1233) s1226->$class->vtable[4])(s1226);
                            if ($tmp1234.value) {
                            {
                                $returnValue510 = ((panda$core$Bit) { true });
                                $tmp1225 = 0;
                                goto $l1223;
                                $l1235:;
                                $tmp1207 = 0;
                                goto $l1205;
                                $l1236:;
                                $tmp502 = 54;
                                goto $l500;
                                $l1237:;
                                return $returnValue510;
                            }
                            }
                        }
                        $tmp1225 = -1;
                        goto $l1223;
                        $l1223:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1226));
                        s1226 = NULL;
                        switch ($tmp1225) {
                            case -1: goto $l1239;
                            case 0: goto $l1235;
                        }
                        $l1239:;
                    }
                    goto $l1215;
                    $l1216:;
                }
                $tmp1207 = -1;
                goto $l1205;
                $l1205:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$404$171208));
                Iter$404$171208 = NULL;
                switch ($tmp1207) {
                    case 0: goto $l1236;
                    case -1: goto $l1240;
                }
                $l1240:;
            }
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 55;
            goto $l500;
            $l1241:;
            return $returnValue510;
        }
        }
        else {
        panda$core$Bit $tmp1243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$248_9503->$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp1243.value) {
        {
            panda$core$String** $tmp1245 = ((panda$core$String**) ((char*) $match$248_9503->$data + 16));
            label1244 = *$tmp1245;
            org$pandalanguage$pandac$IRNode** $tmp1247 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$248_9503->$data + 24));
            test1246 = *$tmp1247;
            panda$collections$ImmutableArray** $tmp1249 = ((panda$collections$ImmutableArray**) ((char*) $match$248_9503->$data + 32));
            statements1248 = *$tmp1249;
            panda$core$Bit $tmp1251 = (($fn1250) test1246->$class->vtable[4])(test1246);
            if ($tmp1251.value) {
            {
                $returnValue510 = ((panda$core$Bit) { true });
                $tmp502 = 56;
                goto $l500;
                $l1252:;
                return $returnValue510;
            }
            }
            {
                int $tmp1256;
                {
                    ITable* $tmp1260 = ((panda$collections$Iterable*) statements1248)->$class->itable;
                    while ($tmp1260->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1260 = $tmp1260->next;
                    }
                    $fn1262 $tmp1261 = $tmp1260->methods[0];
                    panda$collections$Iterator* $tmp1263 = $tmp1261(((panda$collections$Iterable*) statements1248));
                    $tmp1259 = $tmp1263;
                    $tmp1258 = $tmp1259;
                    Iter$414$171257 = $tmp1258;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1258));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1259));
                    $l1264:;
                    ITable* $tmp1267 = Iter$414$171257->$class->itable;
                    while ($tmp1267->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1267 = $tmp1267->next;
                    }
                    $fn1269 $tmp1268 = $tmp1267->methods[0];
                    panda$core$Bit $tmp1270 = $tmp1268(Iter$414$171257);
                    panda$core$Bit $tmp1271 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1270);
                    bool $tmp1266 = $tmp1271.value;
                    if (!$tmp1266) goto $l1265;
                    {
                        int $tmp1274;
                        {
                            ITable* $tmp1278 = Iter$414$171257->$class->itable;
                            while ($tmp1278->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1278 = $tmp1278->next;
                            }
                            $fn1280 $tmp1279 = $tmp1278->methods[1];
                            panda$core$Object* $tmp1281 = $tmp1279(Iter$414$171257);
                            $tmp1277 = $tmp1281;
                            $tmp1276 = ((org$pandalanguage$pandac$IRNode*) $tmp1277);
                            s1275 = $tmp1276;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1276));
                            panda$core$Panda$unref$panda$core$Object($tmp1277);
                            panda$core$Bit $tmp1283 = (($fn1282) s1275->$class->vtable[4])(s1275);
                            if ($tmp1283.value) {
                            {
                                $returnValue510 = ((panda$core$Bit) { true });
                                $tmp1274 = 0;
                                goto $l1272;
                                $l1284:;
                                $tmp1256 = 0;
                                goto $l1254;
                                $l1285:;
                                $tmp502 = 57;
                                goto $l500;
                                $l1286:;
                                return $returnValue510;
                            }
                            }
                        }
                        $tmp1274 = -1;
                        goto $l1272;
                        $l1272:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1275));
                        s1275 = NULL;
                        switch ($tmp1274) {
                            case -1: goto $l1288;
                            case 0: goto $l1284;
                        }
                        $l1288:;
                    }
                    goto $l1264;
                    $l1265:;
                }
                $tmp1256 = -1;
                goto $l1254;
                $l1254:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$414$171257));
                Iter$414$171257 = NULL;
                switch ($tmp1256) {
                    case 0: goto $l1285;
                    case -1: goto $l1289;
                }
                $l1289:;
            }
            $returnValue510 = ((panda$core$Bit) { false });
            $tmp502 = 58;
            goto $l500;
            $l1290:;
            return $returnValue510;
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
    $tmp502 = -1;
    goto $l500;
    $l500:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp504));
    switch ($tmp502) {
        case 48: goto $l1080;
        case 17: goto $l701;
        case 12: goto $l659;
        case 5: goto $l587;
        case 6: goto $l592;
        case 44: goto $l1048;
        case 0: goto $l518;
        case 13: goto $l668;
        case 3: goto $l546;
        case 43: goto $l1039;
        case 1: goto $l521;
        case 38: goto $l984;
        case 14: goto $l673;
        case 4: goto $l583;
        case 54: goto $l1237;
        case 29: goto $l862;
        case 31: goto $l907;
        case 30: goto $l873;
        case 50: goto $l1153;
        case 2: goto $l541;
        case 51: goto $l1157;
        case 7: goto $l600;
        case 52: goto $l1162;
        case 26: goto $l812;
        case 34: goto $l954;
        case 33: goto $l947;
        case 25: goto $l805;
        case 11: goto $l650;
        case 35: goto $l959;
        case 36: goto $l962;
        case 39: goto $l1018;
        case -1: goto $l1292;
        case 8: goto $l634;
        case 21: goto $l749;
        case 57: goto $l1286;
        case 10: goto $l645;
        case 32: goto $l943;
        case 27: goto $l819;
        case 22: goto $l760;
        case 9: goto $l638;
        case 58: goto $l1290;
        case 46: goto $l1056;
        case 28: goto $l858;
        case 47: goto $l1059;
        case 20: goto $l742;
        case 40: goto $l1022;
        case 41: goto $l1027;
        case 55: goto $l1241;
        case 49: goto $l1085;
        case 56: goto $l1252;
        case 42: goto $l1034;
        case 23: goto $l794;
        case 19: goto $l739;
        case 16: goto $l690;
        case 53: goto $l1201;
        case 18: goto $l735;
        case 24: goto $l800;
        case 45: goto $l1051;
        case 15: goto $l678;
        case 37: goto $l971;
    }
    $l1292:;
}
panda$core$String* org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$427_91296 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1297;
    org$pandalanguage$pandac$IRNode* test1299 = NULL;
    org$pandalanguage$pandac$IRNode* msg1301 = NULL;
    panda$core$String* $returnValue1303;
    panda$core$String* $tmp1304;
    panda$core$String* $tmp1305;
    panda$core$String* $tmp1306;
    panda$core$String* $tmp1307;
    panda$core$String* $tmp1308;
    panda$core$String* $tmp1318;
    panda$core$String* $tmp1319;
    panda$core$String* $tmp1320;
    panda$core$String* $tmp1328;
    org$pandalanguage$pandac$IRNode* left1333 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op1335;
    org$pandalanguage$pandac$IRNode* right1337 = NULL;
    panda$core$String* $tmp1339;
    panda$core$String* $tmp1340;
    panda$core$String* $tmp1341;
    panda$core$String* $tmp1342;
    panda$core$String* $tmp1343;
    panda$core$String* $tmp1344;
    panda$core$String* $tmp1345;
    panda$core$Object* $tmp1350;
    panda$core$Bit bit1361;
    panda$core$String* $tmp1363;
    panda$core$String* $tmp1364;
    panda$collections$ImmutableArray* statements1369 = NULL;
    panda$core$MutableString* result1374 = NULL;
    panda$core$MutableString* $tmp1375;
    panda$core$MutableString* $tmp1376;
    panda$collections$Iterator* Iter$441$171382 = NULL;
    panda$collections$Iterator* $tmp1383;
    panda$collections$Iterator* $tmp1384;
    org$pandalanguage$pandac$IRNode* s1400 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1401;
    panda$core$Object* $tmp1402;
    panda$core$String* $tmp1407;
    panda$core$Char8 $tmp1412;
    panda$core$String* $tmp1413;
    panda$core$String* $tmp1414;
    panda$collections$ImmutableArray* statements1421 = NULL;
    panda$collections$ImmutableArray* finally1423 = NULL;
    panda$core$MutableString* result1428 = NULL;
    panda$core$MutableString* $tmp1429;
    panda$core$MutableString* $tmp1430;
    panda$collections$Iterator* Iter$448$171436 = NULL;
    panda$collections$Iterator* $tmp1437;
    panda$collections$Iterator* $tmp1438;
    org$pandalanguage$pandac$IRNode* s1454 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1455;
    panda$core$Object* $tmp1456;
    panda$core$String* $tmp1461;
    panda$collections$Iterator* Iter$452$171470 = NULL;
    panda$collections$Iterator* $tmp1471;
    panda$collections$Iterator* $tmp1472;
    org$pandalanguage$pandac$IRNode* s1488 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1489;
    panda$core$Object* $tmp1490;
    panda$core$String* $tmp1495;
    panda$core$Char8 $tmp1500;
    panda$core$String* $tmp1501;
    panda$core$String* $tmp1502;
    panda$core$String* label1509 = NULL;
    panda$core$String* $tmp1511;
    panda$core$String* $tmp1512;
    panda$core$String* $tmp1513;
    panda$core$String* $tmp1520;
    org$pandalanguage$pandac$MethodRef* m1525 = NULL;
    panda$collections$ImmutableArray* args1527 = NULL;
    panda$core$String* $tmp1529;
    panda$core$String* $tmp1530;
    panda$core$String* $tmp1531;
    panda$core$String* $tmp1532;
    panda$core$String* $tmp1533;
    panda$core$String* $tmp1537;
    org$pandalanguage$pandac$IRNode* value1548 = NULL;
    org$pandalanguage$pandac$Type* type1550 = NULL;
    org$pandalanguage$pandac$Type* $tmp1552;
    org$pandalanguage$pandac$Type* $tmp1555;
    panda$core$String* $tmp1558;
    panda$core$String* $tmp1559;
    panda$core$String* $tmp1560;
    panda$core$String* $tmp1561;
    panda$core$String* $tmp1562;
    panda$core$String* $tmp1572;
    panda$core$String* $tmp1573;
    panda$core$String* $tmp1574;
    panda$core$String* $tmp1575;
    panda$core$String* $tmp1576;
    org$pandalanguage$pandac$ChoiceEntry* ce1587 = NULL;
    panda$core$String* $tmp1589;
    panda$core$String* $tmp1590;
    org$pandalanguage$pandac$IRNode* base1595 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce1597 = NULL;
    panda$core$Int64 field1599;
    panda$core$String* $tmp1601;
    panda$core$String* $tmp1602;
    panda$core$String* $tmp1603;
    panda$core$String* $tmp1604;
    panda$core$String* $tmp1605;
    panda$core$String* $tmp1606;
    panda$core$String* $tmp1607;
    panda$core$Object* $tmp1615;
    org$pandalanguage$pandac$Type* type1623 = NULL;
    org$pandalanguage$pandac$IRNode* call1625 = NULL;
    org$pandalanguage$pandac$IRNode* $match$474_171630 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1631;
    panda$collections$ImmutableArray* args1633 = NULL;
    panda$core$String* $tmp1635;
    panda$core$String* $tmp1636;
    panda$core$String* $tmp1637;
    panda$core$String* $tmp1638;
    panda$core$String* $tmp1639;
    panda$core$String* $tmp1643;
    org$pandalanguage$pandac$Type* Type1656 = NULL;
    panda$core$String* $tmp1658;
    panda$core$String* label1663 = NULL;
    panda$core$String* $tmp1665;
    panda$core$String* $tmp1666;
    panda$core$String* $tmp1667;
    panda$core$String* $tmp1674;
    org$pandalanguage$pandac$IRNode* target1679 = NULL;
    org$pandalanguage$pandac$IRNode* value1681 = NULL;
    panda$core$String* $tmp1683;
    panda$core$String* $tmp1684;
    panda$core$String* $tmp1685;
    panda$core$String* $tmp1686;
    panda$core$String* $tmp1687;
    panda$core$String* $tmp1697;
    panda$core$String* $tmp1698;
    panda$core$String* label1704 = NULL;
    panda$collections$ImmutableArray* statements1706 = NULL;
    org$pandalanguage$pandac$IRNode* test1708 = NULL;
    panda$core$MutableString* result1713 = NULL;
    panda$core$MutableString* $tmp1714;
    panda$core$MutableString* $tmp1715;
    panda$core$String* $tmp1717;
    panda$core$String* $tmp1718;
    panda$collections$Iterator* Iter$498$171726 = NULL;
    panda$collections$Iterator* $tmp1727;
    panda$collections$Iterator* $tmp1728;
    org$pandalanguage$pandac$IRNode* s1744 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1745;
    panda$core$Object* $tmp1746;
    panda$core$String* $tmp1751;
    panda$core$String* $tmp1756;
    panda$core$String* $tmp1757;
    panda$core$String* $tmp1762;
    panda$core$String* $tmp1763;
    org$pandalanguage$pandac$IRNode* m1770 = NULL;
    panda$collections$ImmutableArray* args1772 = NULL;
    panda$core$String* $tmp1774;
    panda$core$String* $tmp1775;
    panda$core$String* $tmp1776;
    panda$core$String* $tmp1777;
    panda$core$String* $tmp1778;
    panda$core$String* $tmp1783;
    org$pandalanguage$pandac$IRNode* expr1795 = NULL;
    org$pandalanguage$pandac$IRNode* stmt1797 = NULL;
    panda$core$String* $tmp1799;
    panda$core$String* $tmp1800;
    panda$core$String* $tmp1801;
    panda$core$String* $tmp1802;
    panda$core$String* $tmp1803;
    org$pandalanguage$pandac$IRNode* base1814 = NULL;
    org$pandalanguage$pandac$FieldDecl* field1816 = NULL;
    panda$core$String* $tmp1818;
    panda$core$String* $tmp1819;
    panda$core$String* $tmp1820;
    panda$core$String* $tmp1821;
    panda$core$String* $tmp1822;
    org$pandalanguage$pandac$IRNode* test1833 = NULL;
    panda$collections$ImmutableArray* ifTrue1835 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse1837 = NULL;
    panda$core$MutableString* result1842 = NULL;
    panda$core$MutableString* $tmp1843;
    panda$core$MutableString* $tmp1844;
    panda$core$String* $tmp1846;
    panda$core$String* $tmp1847;
    panda$collections$Iterator* Iter$511$171855 = NULL;
    panda$collections$Iterator* $tmp1856;
    panda$collections$Iterator* $tmp1857;
    org$pandalanguage$pandac$IRNode* s1873 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1874;
    panda$core$Object* $tmp1875;
    panda$core$String* $tmp1880;
    panda$core$Char8 $tmp1885;
    panda$core$String* $tmp1886;
    panda$core$String* $tmp1887;
    panda$core$String* $tmp1892;
    panda$core$String* $tmp1893;
    panda$core$UInt64 value1900;
    panda$core$String* $tmp1902;
    panda$core$String* $tmp1903;
    org$pandalanguage$pandac$IRNode* value1908 = NULL;
    panda$core$String* $tmp1910;
    panda$core$String* $tmp1911;
    panda$core$String* $tmp1912;
    org$pandalanguage$pandac$IRNode* value1920 = NULL;
    panda$core$String* $tmp1922;
    panda$core$String* $tmp1923;
    panda$core$String* $tmp1924;
    panda$core$String* label1932 = NULL;
    panda$collections$ImmutableArray* statements1934 = NULL;
    panda$core$MutableString* result1939 = NULL;
    panda$core$MutableString* $tmp1940;
    panda$core$MutableString* $tmp1941;
    panda$core$String* $tmp1943;
    panda$core$String* $tmp1944;
    panda$collections$Iterator* Iter$531$171952 = NULL;
    panda$collections$Iterator* $tmp1953;
    panda$collections$Iterator* $tmp1954;
    org$pandalanguage$pandac$IRNode* s1970 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1971;
    panda$core$Object* $tmp1972;
    panda$core$String* $tmp1977;
    panda$core$Char8 $tmp1982;
    panda$core$String* $tmp1983;
    panda$core$String* $tmp1984;
    org$pandalanguage$pandac$IRNode* value1991 = NULL;
    panda$collections$ImmutableArray* whens1993 = NULL;
    panda$collections$ImmutableArray* other1995 = NULL;
    panda$core$MutableString* result2000 = NULL;
    panda$core$MutableString* $tmp2001;
    panda$core$MutableString* $tmp2002;
    panda$core$String* $tmp2004;
    panda$core$String* $tmp2005;
    panda$collections$Iterator* Iter$538$172013 = NULL;
    panda$collections$Iterator* $tmp2014;
    panda$collections$Iterator* $tmp2015;
    org$pandalanguage$pandac$IRNode* w2031 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2032;
    panda$core$Object* $tmp2033;
    panda$core$String* $tmp2038;
    panda$collections$Iterator* Iter$543$212047 = NULL;
    panda$collections$Iterator* $tmp2048;
    panda$collections$Iterator* $tmp2049;
    org$pandalanguage$pandac$IRNode* s2065 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2066;
    panda$core$Object* $tmp2067;
    panda$core$String* $tmp2072;
    panda$core$Char8 $tmp2077;
    panda$core$String* $tmp2078;
    panda$core$String* $tmp2079;
    org$pandalanguage$pandac$IRNode* target2086 = NULL;
    org$pandalanguage$pandac$MethodRef* m2088 = NULL;
    panda$core$String* $tmp2090;
    panda$core$String* $tmp2091;
    panda$core$String* $tmp2092;
    panda$core$String* $tmp2093;
    panda$core$String* $tmp2094;
    panda$core$String* $tmp2104;
    panda$core$UInt64 value2108;
    panda$core$String* $tmp2110;
    panda$core$String* $tmp2111;
    panda$core$Object* $tmp2113;
    panda$core$String* $tmp2119;
    org$pandalanguage$pandac$parser$Token$Kind op2124;
    org$pandalanguage$pandac$IRNode* base2126 = NULL;
    panda$core$String* $tmp2128;
    panda$core$String* $tmp2129;
    panda$core$String* $tmp2130;
    panda$core$String* $tmp2131;
    panda$core$String* $tmp2132;
    panda$core$Object* $tmp2133;
    panda$core$String* label2145 = NULL;
    org$pandalanguage$pandac$IRNode* target2147 = NULL;
    org$pandalanguage$pandac$IRNode* list2149 = NULL;
    panda$collections$ImmutableArray* statements2151 = NULL;
    panda$core$MutableString* result2156 = NULL;
    panda$core$MutableString* $tmp2157;
    panda$core$MutableString* $tmp2158;
    panda$core$String* $tmp2160;
    panda$core$String* $tmp2161;
    panda$core$String* $tmp2165;
    panda$core$String* $tmp2166;
    panda$core$String* $tmp2167;
    panda$core$String* $tmp2168;
    panda$collections$Iterator* Iter$566$172179 = NULL;
    panda$collections$Iterator* $tmp2180;
    panda$collections$Iterator* $tmp2181;
    org$pandalanguage$pandac$IRNode* s2197 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2198;
    panda$core$Object* $tmp2199;
    panda$core$String* $tmp2204;
    panda$core$Char8 $tmp2209;
    panda$core$String* $tmp2210;
    panda$core$String* $tmp2211;
    panda$core$Real64 value2218;
    panda$core$String* $tmp2220;
    panda$core$String* $tmp2221;
    org$pandalanguage$pandac$IRNode* value2226 = NULL;
    panda$core$String* $tmp2228;
    panda$core$String* $tmp2229;
    panda$core$String* $tmp2230;
    panda$core$String* $tmp2237;
    org$pandalanguage$pandac$Type* type2242 = NULL;
    panda$core$Int64 id2244;
    panda$core$String* $tmp2246;
    panda$core$String* $tmp2247;
    panda$core$String* $tmp2248;
    panda$core$Object* $tmp2250;
    org$pandalanguage$pandac$IRNode* base2258 = NULL;
    panda$core$Int64 id2260;
    panda$core$String* $tmp2262;
    panda$core$String* $tmp2263;
    panda$core$String* $tmp2264;
    panda$core$String* $tmp2265;
    panda$core$String* $tmp2266;
    panda$core$Object* $tmp2268;
    panda$core$String* $tmp2279;
    panda$core$String* str2284 = NULL;
    panda$core$String* $tmp2286;
    panda$core$String* $tmp2290;
    org$pandalanguage$pandac$IRNode* test2295 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue2297 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse2299 = NULL;
    panda$core$String* $tmp2301;
    panda$core$String* $tmp2302;
    panda$core$String* $tmp2303;
    panda$core$String* $tmp2304;
    panda$core$String* $tmp2305;
    panda$core$String* $tmp2306;
    panda$core$String* $tmp2307;
    org$pandalanguage$pandac$Type* type2321 = NULL;
    panda$core$String* $tmp2323;
    panda$core$String* $tmp2324;
    panda$core$String* name2329 = NULL;
    panda$core$String* $tmp2331;
    org$pandalanguage$pandac$IRNode* base2335 = NULL;
    panda$collections$ImmutableArray* args2337 = NULL;
    panda$core$String* $tmp2339;
    panda$core$String* $tmp2340;
    panda$core$String* $tmp2341;
    panda$core$String* $tmp2342;
    panda$core$String* $tmp2343;
    panda$core$String* $tmp2348;
    org$pandalanguage$pandac$IRNode* target2359 = NULL;
    panda$collections$ImmutableArray* methods2361 = NULL;
    panda$collections$ImmutableArray* args2363 = NULL;
    panda$core$String* $tmp2365;
    panda$core$String* $tmp2366;
    panda$core$String* $tmp2367;
    panda$core$String* $tmp2368;
    panda$core$String* $tmp2369;
    panda$core$String* $tmp2370;
    panda$core$String* $tmp2371;
    panda$core$Object* $tmp2376;
    panda$core$String* $tmp2381;
    org$pandalanguage$pandac$IRNode* target2392 = NULL;
    panda$collections$ImmutableArray* methods2394 = NULL;
    panda$core$String* $tmp2396;
    panda$core$String* $tmp2397;
    panda$core$String* $tmp2398;
    panda$core$String* $tmp2399;
    panda$core$String* $tmp2400;
    panda$core$Object* $tmp2405;
    org$pandalanguage$pandac$IRNode* start2413 = NULL;
    org$pandalanguage$pandac$IRNode* end2415 = NULL;
    panda$core$Bit inclusive2417;
    org$pandalanguage$pandac$IRNode* step2419 = NULL;
    panda$core$MutableString* result2424 = NULL;
    panda$core$MutableString* $tmp2425;
    panda$core$MutableString* $tmp2426;
    panda$core$String* $tmp2430;
    panda$core$String* $tmp2431;
    panda$core$String* $tmp2436;
    panda$core$String* $tmp2437;
    org$pandalanguage$pandac$Variable$Kind kind2444;
    panda$collections$ImmutableArray* decls2446 = NULL;
    panda$core$MutableString* result2451 = NULL;
    panda$core$MutableString* $tmp2452;
    panda$core$MutableString* $tmp2453;
    org$pandalanguage$pandac$Variable$Kind $match$620_172455;
    panda$core$String* $tmp2464;
    panda$core$String* $tmp2469;
    panda$core$String* $tmp2470;
    org$pandalanguage$pandac$Variable* variable2477 = NULL;
    panda$core$String* $tmp2479;
    panda$collections$ImmutableArray* tests2483 = NULL;
    panda$collections$ImmutableArray* statements2485 = NULL;
    panda$core$String* $tmp2487;
    panda$core$String* $tmp2488;
    panda$core$String* $tmp2489;
    panda$core$String* $tmp2490;
    panda$core$String* $tmp2491;
    panda$core$String* $tmp2493;
    panda$core$String* $tmp2501;
    panda$core$String* label2513 = NULL;
    org$pandalanguage$pandac$IRNode* test2515 = NULL;
    panda$collections$ImmutableArray* statements2517 = NULL;
    panda$core$MutableString* result2522 = NULL;
    panda$core$MutableString* $tmp2523;
    panda$core$MutableString* $tmp2524;
    panda$core$String* $tmp2526;
    panda$core$String* $tmp2527;
    panda$core$String* $tmp2531;
    panda$core$String* $tmp2532;
    panda$collections$Iterator* Iter$638$172540 = NULL;
    panda$collections$Iterator* $tmp2541;
    panda$collections$Iterator* $tmp2542;
    org$pandalanguage$pandac$IRNode* s2558 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2559;
    panda$core$Object* $tmp2560;
    panda$core$String* $tmp2565;
    panda$core$Char8 $tmp2570;
    panda$core$String* $tmp2571;
    panda$core$String* $tmp2572;
    int $tmp1295;
    {
        $tmp1297 = self;
        $match$427_91296 = $tmp1297;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1297));
        panda$core$Bit $tmp1298 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp1298.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1300 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 16));
            test1299 = *$tmp1300;
            org$pandalanguage$pandac$IRNode** $tmp1302 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 24));
            msg1301 = *$tmp1302;
            if (((panda$core$Bit) { msg1301 != NULL }).value) {
            {
                panda$core$String* $tmp1310 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1309, ((panda$core$Object*) test1299));
                $tmp1308 = $tmp1310;
                panda$core$String* $tmp1312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1308, &$s1311);
                $tmp1307 = $tmp1312;
                panda$core$String* $tmp1313 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1307, ((panda$core$Object*) msg1301));
                $tmp1306 = $tmp1313;
                panda$core$String* $tmp1315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1306, &$s1314);
                $tmp1305 = $tmp1315;
                $tmp1304 = $tmp1305;
                $returnValue1303 = $tmp1304;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1304));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1305));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1306));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1307));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1308));
                $tmp1295 = 0;
                goto $l1293;
                $l1316:;
                return $returnValue1303;
            }
            }
            panda$core$String* $tmp1322 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1321, ((panda$core$Object*) test1299));
            $tmp1320 = $tmp1322;
            panda$core$String* $tmp1324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1320, &$s1323);
            $tmp1319 = $tmp1324;
            $tmp1318 = $tmp1319;
            $returnValue1303 = $tmp1318;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1318));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1319));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1320));
            $tmp1295 = 1;
            goto $l1293;
            $l1325:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp1327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1327.value) {
        {
            $tmp1328 = &$s1329;
            $returnValue1303 = $tmp1328;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1328));
            $tmp1295 = 2;
            goto $l1293;
            $l1330:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp1332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1332.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1334 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 24));
            left1333 = *$tmp1334;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1336 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$427_91296->$data + 32));
            op1335 = *$tmp1336;
            org$pandalanguage$pandac$IRNode** $tmp1338 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 40));
            right1337 = *$tmp1338;
            panda$core$String* $tmp1347 = (($fn1346) left1333->$class->vtable[0])(left1333);
            $tmp1345 = $tmp1347;
            panda$core$String* $tmp1349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1345, &$s1348);
            $tmp1344 = $tmp1349;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1351;
            $tmp1351 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp1351->value = op1335;
            $tmp1350 = ((panda$core$Object*) $tmp1351);
            panda$core$String* $tmp1352 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1344, $tmp1350);
            $tmp1343 = $tmp1352;
            panda$core$String* $tmp1354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1343, &$s1353);
            $tmp1342 = $tmp1354;
            panda$core$String* $tmp1355 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1342, ((panda$core$Object*) right1337));
            $tmp1341 = $tmp1355;
            panda$core$String* $tmp1357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1341, &$s1356);
            $tmp1340 = $tmp1357;
            $tmp1339 = $tmp1340;
            $returnValue1303 = $tmp1339;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1339));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1340));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1341));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1342));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1343));
            panda$core$Panda$unref$panda$core$Object($tmp1350);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1344));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1345));
            $tmp1295 = 3;
            goto $l1293;
            $l1358:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp1360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp1360.value) {
        {
            panda$core$Bit* $tmp1362 = ((panda$core$Bit*) ((char*) $match$427_91296->$data + 24));
            bit1361 = *$tmp1362;
            panda$core$String* $tmp1365 = panda$core$Bit$convert$R$panda$core$String(bit1361);
            $tmp1364 = $tmp1365;
            $tmp1363 = $tmp1364;
            $returnValue1303 = $tmp1363;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1363));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1364));
            $tmp1295 = 4;
            goto $l1293;
            $l1366:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp1368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp1368.value) {
        {
            panda$collections$ImmutableArray** $tmp1370 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91296->$data + 16));
            statements1369 = *$tmp1370;
            int $tmp1373;
            {
                panda$core$MutableString* $tmp1377 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1377, &$s1378);
                $tmp1376 = $tmp1377;
                $tmp1375 = $tmp1376;
                result1374 = $tmp1375;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1375));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1376));
                {
                    int $tmp1381;
                    {
                        ITable* $tmp1385 = ((panda$collections$Iterable*) statements1369)->$class->itable;
                        while ($tmp1385->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1385 = $tmp1385->next;
                        }
                        $fn1387 $tmp1386 = $tmp1385->methods[0];
                        panda$collections$Iterator* $tmp1388 = $tmp1386(((panda$collections$Iterable*) statements1369));
                        $tmp1384 = $tmp1388;
                        $tmp1383 = $tmp1384;
                        Iter$441$171382 = $tmp1383;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1383));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1384));
                        $l1389:;
                        ITable* $tmp1392 = Iter$441$171382->$class->itable;
                        while ($tmp1392->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1392 = $tmp1392->next;
                        }
                        $fn1394 $tmp1393 = $tmp1392->methods[0];
                        panda$core$Bit $tmp1395 = $tmp1393(Iter$441$171382);
                        panda$core$Bit $tmp1396 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1395);
                        bool $tmp1391 = $tmp1396.value;
                        if (!$tmp1391) goto $l1390;
                        {
                            int $tmp1399;
                            {
                                ITable* $tmp1403 = Iter$441$171382->$class->itable;
                                while ($tmp1403->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1403 = $tmp1403->next;
                                }
                                $fn1405 $tmp1404 = $tmp1403->methods[1];
                                panda$core$Object* $tmp1406 = $tmp1404(Iter$441$171382);
                                $tmp1402 = $tmp1406;
                                $tmp1401 = ((org$pandalanguage$pandac$IRNode*) $tmp1402);
                                s1400 = $tmp1401;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1401));
                                panda$core$Panda$unref$panda$core$Object($tmp1402);
                                panda$core$String* $tmp1409 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1400), &$s1408);
                                $tmp1407 = $tmp1409;
                                panda$core$MutableString$append$panda$core$String(result1374, $tmp1407);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1407));
                            }
                            $tmp1399 = -1;
                            goto $l1397;
                            $l1397:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1400));
                            s1400 = NULL;
                            switch ($tmp1399) {
                                case -1: goto $l1410;
                            }
                            $l1410:;
                        }
                        goto $l1389;
                        $l1390:;
                    }
                    $tmp1381 = -1;
                    goto $l1379;
                    $l1379:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$441$171382));
                    Iter$441$171382 = NULL;
                    switch ($tmp1381) {
                        case -1: goto $l1411;
                    }
                    $l1411:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1412, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1374, $tmp1412);
                panda$core$String* $tmp1415 = panda$core$MutableString$finish$R$panda$core$String(result1374);
                $tmp1414 = $tmp1415;
                $tmp1413 = $tmp1414;
                $returnValue1303 = $tmp1413;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1413));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1414));
                $tmp1373 = 0;
                goto $l1371;
                $l1416:;
                $tmp1295 = 5;
                goto $l1293;
                $l1417:;
                return $returnValue1303;
            }
            $l1371:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1374));
            result1374 = NULL;
            switch ($tmp1373) {
                case 0: goto $l1416;
            }
            $l1419:;
        }
        }
        else {
        panda$core$Bit $tmp1420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp1420.value) {
        {
            panda$collections$ImmutableArray** $tmp1422 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91296->$data + 16));
            statements1421 = *$tmp1422;
            panda$collections$ImmutableArray** $tmp1424 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91296->$data + 24));
            finally1423 = *$tmp1424;
            int $tmp1427;
            {
                panda$core$MutableString* $tmp1431 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1431, &$s1432);
                $tmp1430 = $tmp1431;
                $tmp1429 = $tmp1430;
                result1428 = $tmp1429;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1429));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1430));
                {
                    int $tmp1435;
                    {
                        ITable* $tmp1439 = ((panda$collections$Iterable*) statements1421)->$class->itable;
                        while ($tmp1439->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1439 = $tmp1439->next;
                        }
                        $fn1441 $tmp1440 = $tmp1439->methods[0];
                        panda$collections$Iterator* $tmp1442 = $tmp1440(((panda$collections$Iterable*) statements1421));
                        $tmp1438 = $tmp1442;
                        $tmp1437 = $tmp1438;
                        Iter$448$171436 = $tmp1437;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1437));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1438));
                        $l1443:;
                        ITable* $tmp1446 = Iter$448$171436->$class->itable;
                        while ($tmp1446->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1446 = $tmp1446->next;
                        }
                        $fn1448 $tmp1447 = $tmp1446->methods[0];
                        panda$core$Bit $tmp1449 = $tmp1447(Iter$448$171436);
                        panda$core$Bit $tmp1450 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1449);
                        bool $tmp1445 = $tmp1450.value;
                        if (!$tmp1445) goto $l1444;
                        {
                            int $tmp1453;
                            {
                                ITable* $tmp1457 = Iter$448$171436->$class->itable;
                                while ($tmp1457->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1457 = $tmp1457->next;
                                }
                                $fn1459 $tmp1458 = $tmp1457->methods[1];
                                panda$core$Object* $tmp1460 = $tmp1458(Iter$448$171436);
                                $tmp1456 = $tmp1460;
                                $tmp1455 = ((org$pandalanguage$pandac$IRNode*) $tmp1456);
                                s1454 = $tmp1455;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1455));
                                panda$core$Panda$unref$panda$core$Object($tmp1456);
                                panda$core$String* $tmp1463 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1454), &$s1462);
                                $tmp1461 = $tmp1463;
                                panda$core$MutableString$append$panda$core$String(result1428, $tmp1461);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1461));
                            }
                            $tmp1453 = -1;
                            goto $l1451;
                            $l1451:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1454));
                            s1454 = NULL;
                            switch ($tmp1453) {
                                case -1: goto $l1464;
                            }
                            $l1464:;
                        }
                        goto $l1443;
                        $l1444:;
                    }
                    $tmp1435 = -1;
                    goto $l1433;
                    $l1433:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$448$171436));
                    Iter$448$171436 = NULL;
                    switch ($tmp1435) {
                        case -1: goto $l1465;
                    }
                    $l1465:;
                }
                panda$core$MutableString$append$panda$core$String(result1428, &$s1466);
                {
                    int $tmp1469;
                    {
                        ITable* $tmp1473 = ((panda$collections$Iterable*) finally1423)->$class->itable;
                        while ($tmp1473->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1473 = $tmp1473->next;
                        }
                        $fn1475 $tmp1474 = $tmp1473->methods[0];
                        panda$collections$Iterator* $tmp1476 = $tmp1474(((panda$collections$Iterable*) finally1423));
                        $tmp1472 = $tmp1476;
                        $tmp1471 = $tmp1472;
                        Iter$452$171470 = $tmp1471;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1471));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1472));
                        $l1477:;
                        ITable* $tmp1480 = Iter$452$171470->$class->itable;
                        while ($tmp1480->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1480 = $tmp1480->next;
                        }
                        $fn1482 $tmp1481 = $tmp1480->methods[0];
                        panda$core$Bit $tmp1483 = $tmp1481(Iter$452$171470);
                        panda$core$Bit $tmp1484 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1483);
                        bool $tmp1479 = $tmp1484.value;
                        if (!$tmp1479) goto $l1478;
                        {
                            int $tmp1487;
                            {
                                ITable* $tmp1491 = Iter$452$171470->$class->itable;
                                while ($tmp1491->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1491 = $tmp1491->next;
                                }
                                $fn1493 $tmp1492 = $tmp1491->methods[1];
                                panda$core$Object* $tmp1494 = $tmp1492(Iter$452$171470);
                                $tmp1490 = $tmp1494;
                                $tmp1489 = ((org$pandalanguage$pandac$IRNode*) $tmp1490);
                                s1488 = $tmp1489;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1489));
                                panda$core$Panda$unref$panda$core$Object($tmp1490);
                                panda$core$String* $tmp1497 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1488), &$s1496);
                                $tmp1495 = $tmp1497;
                                panda$core$MutableString$append$panda$core$String(result1428, $tmp1495);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1495));
                            }
                            $tmp1487 = -1;
                            goto $l1485;
                            $l1485:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1488));
                            s1488 = NULL;
                            switch ($tmp1487) {
                                case -1: goto $l1498;
                            }
                            $l1498:;
                        }
                        goto $l1477;
                        $l1478:;
                    }
                    $tmp1469 = -1;
                    goto $l1467;
                    $l1467:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$452$171470));
                    Iter$452$171470 = NULL;
                    switch ($tmp1469) {
                        case -1: goto $l1499;
                    }
                    $l1499:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1500, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1428, $tmp1500);
                panda$core$String* $tmp1503 = panda$core$MutableString$finish$R$panda$core$String(result1428);
                $tmp1502 = $tmp1503;
                $tmp1501 = $tmp1502;
                $returnValue1303 = $tmp1501;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1501));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1502));
                $tmp1427 = 0;
                goto $l1425;
                $l1504:;
                $tmp1295 = 6;
                goto $l1293;
                $l1505:;
                return $returnValue1303;
            }
            $l1425:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1428));
            result1428 = NULL;
            switch ($tmp1427) {
                case 0: goto $l1504;
            }
            $l1507:;
        }
        }
        else {
        panda$core$Bit $tmp1508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp1508.value) {
        {
            panda$core$String** $tmp1510 = ((panda$core$String**) ((char*) $match$427_91296->$data + 16));
            label1509 = *$tmp1510;
            if (((panda$core$Bit) { label1509 != NULL }).value) {
            {
                panda$core$String* $tmp1515 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1514, label1509);
                $tmp1513 = $tmp1515;
                panda$core$String* $tmp1517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1513, &$s1516);
                $tmp1512 = $tmp1517;
                $tmp1511 = $tmp1512;
                $returnValue1303 = $tmp1511;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1511));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1512));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1513));
                $tmp1295 = 7;
                goto $l1293;
                $l1518:;
                return $returnValue1303;
            }
            }
            $tmp1520 = &$s1521;
            $returnValue1303 = $tmp1520;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1520));
            $tmp1295 = 8;
            goto $l1293;
            $l1522:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp1524 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp1524.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp1526 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$427_91296->$data + 24));
            m1525 = *$tmp1526;
            panda$collections$ImmutableArray** $tmp1528 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91296->$data + 32));
            args1527 = *$tmp1528;
            panda$core$String* $tmp1534 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) m1525->value)->name);
            $tmp1533 = $tmp1534;
            panda$core$String* $tmp1536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1533, &$s1535);
            $tmp1532 = $tmp1536;
            ITable* $tmp1538 = ((panda$collections$ListView*) args1527)->$class->itable;
            while ($tmp1538->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1538 = $tmp1538->next;
            }
            $fn1540 $tmp1539 = $tmp1538->methods[1];
            panda$core$String* $tmp1541 = $tmp1539(((panda$collections$ListView*) args1527));
            $tmp1537 = $tmp1541;
            panda$core$String* $tmp1542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1532, $tmp1537);
            $tmp1531 = $tmp1542;
            panda$core$String* $tmp1544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1531, &$s1543);
            $tmp1530 = $tmp1544;
            $tmp1529 = $tmp1530;
            $returnValue1303 = $tmp1529;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1529));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1530));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1531));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1537));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1532));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1533));
            $tmp1295 = 9;
            goto $l1293;
            $l1545:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp1547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp1547.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1549 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 16));
            value1548 = *$tmp1549;
            org$pandalanguage$pandac$Type** $tmp1551 = ((org$pandalanguage$pandac$Type**) ((char*) $match$427_91296->$data + 24));
            type1550 = *$tmp1551;
            org$pandalanguage$pandac$Type* $tmp1554 = (($fn1553) value1548->$class->vtable[2])(value1548);
            $tmp1552 = $tmp1554;
            org$pandalanguage$pandac$Type* $tmp1556 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            $tmp1555 = $tmp1556;
            panda$core$Bit $tmp1557 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1552, $tmp1555);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1555));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1552));
            if ($tmp1557.value) {
            {
                panda$core$String* $tmp1564 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1563, ((panda$core$Object*) value1548));
                $tmp1562 = $tmp1564;
                panda$core$String* $tmp1566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1562, &$s1565);
                $tmp1561 = $tmp1566;
                panda$core$String* $tmp1567 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1561, ((panda$core$Object*) type1550));
                $tmp1560 = $tmp1567;
                panda$core$String* $tmp1569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1560, &$s1568);
                $tmp1559 = $tmp1569;
                $tmp1558 = $tmp1559;
                $returnValue1303 = $tmp1558;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1558));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1559));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1560));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1561));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1562));
                $tmp1295 = 10;
                goto $l1293;
                $l1570:;
                return $returnValue1303;
            }
            }
            panda$core$String* $tmp1578 = (($fn1577) value1548->$class->vtable[0])(value1548);
            $tmp1576 = $tmp1578;
            panda$core$String* $tmp1580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1576, &$s1579);
            $tmp1575 = $tmp1580;
            panda$core$String* $tmp1581 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1575, ((panda$core$Object*) type1550));
            $tmp1574 = $tmp1581;
            panda$core$String* $tmp1583 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1574, &$s1582);
            $tmp1573 = $tmp1583;
            $tmp1572 = $tmp1573;
            $returnValue1303 = $tmp1572;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1572));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1573));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1574));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1575));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1576));
            $tmp1295 = 11;
            goto $l1293;
            $l1584:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp1586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp1586.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp1588 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$427_91296->$data + 16));
            ce1587 = *$tmp1588;
            panda$core$String* $tmp1591 = org$pandalanguage$pandac$ChoiceEntry$convert$R$panda$core$String(ce1587);
            $tmp1590 = $tmp1591;
            $tmp1589 = $tmp1590;
            $returnValue1303 = $tmp1589;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1589));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1590));
            $tmp1295 = 12;
            goto $l1293;
            $l1592:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp1594 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp1594.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1596 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 16));
            base1595 = *$tmp1596;
            org$pandalanguage$pandac$ChoiceEntry** $tmp1598 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$427_91296->$data + 24));
            ce1597 = *$tmp1598;
            panda$core$Int64* $tmp1600 = ((panda$core$Int64*) ((char*) $match$427_91296->$data + 32));
            field1599 = *$tmp1600;
            panda$core$String* $tmp1609 = (($fn1608) base1595->$class->vtable[0])(base1595);
            $tmp1607 = $tmp1609;
            panda$core$String* $tmp1611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1607, &$s1610);
            $tmp1606 = $tmp1611;
            panda$core$String* $tmp1612 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1606, ((panda$core$Object*) ce1597));
            $tmp1605 = $tmp1612;
            panda$core$String* $tmp1614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1605, &$s1613);
            $tmp1604 = $tmp1614;
            panda$core$Int64$wrapper* $tmp1616;
            $tmp1616 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1616->value = field1599;
            $tmp1615 = ((panda$core$Object*) $tmp1616);
            panda$core$String* $tmp1617 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1604, $tmp1615);
            $tmp1603 = $tmp1617;
            panda$core$String* $tmp1619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1603, &$s1618);
            $tmp1602 = $tmp1619;
            $tmp1601 = $tmp1602;
            $returnValue1303 = $tmp1601;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1601));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1602));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1603));
            panda$core$Panda$unref$panda$core$Object($tmp1615);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1604));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1605));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1606));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1607));
            $tmp1295 = 13;
            goto $l1293;
            $l1620:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp1622 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1622.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1624 = ((org$pandalanguage$pandac$Type**) ((char*) $match$427_91296->$data + 16));
            type1623 = *$tmp1624;
            org$pandalanguage$pandac$IRNode** $tmp1626 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 24));
            call1625 = *$tmp1626;
            int $tmp1629;
            {
                $tmp1631 = call1625;
                $match$474_171630 = $tmp1631;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1631));
                panda$core$Bit $tmp1632 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$474_171630->$rawValue, ((panda$core$Int64) { 7 }));
                if ($tmp1632.value) {
                {
                    panda$collections$ImmutableArray** $tmp1634 = ((panda$collections$ImmutableArray**) ((char*) $match$474_171630->$data + 32));
                    args1633 = *$tmp1634;
                    panda$core$String* $tmp1640 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type1623);
                    $tmp1639 = $tmp1640;
                    panda$core$String* $tmp1642 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1639, &$s1641);
                    $tmp1638 = $tmp1642;
                    ITable* $tmp1644 = ((panda$collections$ListView*) args1633)->$class->itable;
                    while ($tmp1644->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp1644 = $tmp1644->next;
                    }
                    $fn1646 $tmp1645 = $tmp1644->methods[1];
                    panda$core$String* $tmp1647 = $tmp1645(((panda$collections$ListView*) args1633));
                    $tmp1643 = $tmp1647;
                    panda$core$String* $tmp1648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1638, $tmp1643);
                    $tmp1637 = $tmp1648;
                    panda$core$String* $tmp1650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1637, &$s1649);
                    $tmp1636 = $tmp1650;
                    $tmp1635 = $tmp1636;
                    $returnValue1303 = $tmp1635;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1635));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1636));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1637));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1643));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1638));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1639));
                    $tmp1629 = 0;
                    goto $l1627;
                    $l1651:;
                    $tmp1295 = 14;
                    goto $l1293;
                    $l1652:;
                    return $returnValue1303;
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1629 = -1;
            goto $l1627;
            $l1627:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1631));
            switch ($tmp1629) {
                case -1: goto $l1654;
                case 0: goto $l1651;
            }
            $l1654:;
        }
        }
        else {
        panda$core$Bit $tmp1655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp1655.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1657 = ((org$pandalanguage$pandac$Type**) ((char*) $match$427_91296->$data + 16));
            Type1656 = *$tmp1657;
            $tmp1658 = &$s1659;
            $returnValue1303 = $tmp1658;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1658));
            $tmp1295 = 15;
            goto $l1293;
            $l1660:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp1662 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp1662.value) {
        {
            panda$core$String** $tmp1664 = ((panda$core$String**) ((char*) $match$427_91296->$data + 16));
            label1663 = *$tmp1664;
            if (((panda$core$Bit) { label1663 != NULL }).value) {
            {
                panda$core$String* $tmp1669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1668, label1663);
                $tmp1667 = $tmp1669;
                panda$core$String* $tmp1671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1667, &$s1670);
                $tmp1666 = $tmp1671;
                $tmp1665 = $tmp1666;
                $returnValue1303 = $tmp1665;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1665));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1666));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1667));
                $tmp1295 = 16;
                goto $l1293;
                $l1672:;
                return $returnValue1303;
            }
            }
            $tmp1674 = &$s1675;
            $returnValue1303 = $tmp1674;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1674));
            $tmp1295 = 17;
            goto $l1293;
            $l1676:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp1678 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp1678.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1680 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 0));
            target1679 = *$tmp1680;
            org$pandalanguage$pandac$IRNode** $tmp1682 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 8));
            value1681 = *$tmp1682;
            if (((panda$core$Bit) { value1681 != NULL }).value) {
            {
                panda$core$String* $tmp1689 = (($fn1688) target1679->$class->vtable[0])(target1679);
                $tmp1687 = $tmp1689;
                panda$core$String* $tmp1691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1687, &$s1690);
                $tmp1686 = $tmp1691;
                panda$core$String* $tmp1692 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1686, ((panda$core$Object*) value1681));
                $tmp1685 = $tmp1692;
                panda$core$String* $tmp1694 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1685, &$s1693);
                $tmp1684 = $tmp1694;
                $tmp1683 = $tmp1684;
                $returnValue1303 = $tmp1683;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1683));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1684));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1685));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1686));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1687));
                $tmp1295 = 18;
                goto $l1293;
                $l1695:;
                return $returnValue1303;
            }
            }
            panda$core$String* $tmp1700 = (($fn1699) target1679->$class->vtable[0])(target1679);
            $tmp1698 = $tmp1700;
            $tmp1697 = $tmp1698;
            $returnValue1303 = $tmp1697;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1697));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1698));
            $tmp1295 = 19;
            goto $l1293;
            $l1701:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp1703 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1703.value) {
        {
            panda$core$String** $tmp1705 = ((panda$core$String**) ((char*) $match$427_91296->$data + 16));
            label1704 = *$tmp1705;
            panda$collections$ImmutableArray** $tmp1707 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91296->$data + 24));
            statements1706 = *$tmp1707;
            org$pandalanguage$pandac$IRNode** $tmp1709 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 32));
            test1708 = *$tmp1709;
            int $tmp1712;
            {
                panda$core$MutableString* $tmp1716 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1716);
                $tmp1715 = $tmp1716;
                $tmp1714 = $tmp1715;
                result1713 = $tmp1714;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1714));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1715));
                if (((panda$core$Bit) { label1704 != NULL }).value) {
                {
                    panda$core$String* $tmp1719 = panda$core$String$convert$R$panda$core$String(label1704);
                    $tmp1718 = $tmp1719;
                    panda$core$String* $tmp1721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1718, &$s1720);
                    $tmp1717 = $tmp1721;
                    panda$core$MutableString$append$panda$core$String(result1713, $tmp1717);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1717));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1718));
                }
                }
                panda$core$MutableString$append$panda$core$String(result1713, &$s1722);
                {
                    int $tmp1725;
                    {
                        ITable* $tmp1729 = ((panda$collections$Iterable*) statements1706)->$class->itable;
                        while ($tmp1729->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1729 = $tmp1729->next;
                        }
                        $fn1731 $tmp1730 = $tmp1729->methods[0];
                        panda$collections$Iterator* $tmp1732 = $tmp1730(((panda$collections$Iterable*) statements1706));
                        $tmp1728 = $tmp1732;
                        $tmp1727 = $tmp1728;
                        Iter$498$171726 = $tmp1727;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1727));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1728));
                        $l1733:;
                        ITable* $tmp1736 = Iter$498$171726->$class->itable;
                        while ($tmp1736->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1736 = $tmp1736->next;
                        }
                        $fn1738 $tmp1737 = $tmp1736->methods[0];
                        panda$core$Bit $tmp1739 = $tmp1737(Iter$498$171726);
                        panda$core$Bit $tmp1740 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1739);
                        bool $tmp1735 = $tmp1740.value;
                        if (!$tmp1735) goto $l1734;
                        {
                            int $tmp1743;
                            {
                                ITable* $tmp1747 = Iter$498$171726->$class->itable;
                                while ($tmp1747->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1747 = $tmp1747->next;
                                }
                                $fn1749 $tmp1748 = $tmp1747->methods[1];
                                panda$core$Object* $tmp1750 = $tmp1748(Iter$498$171726);
                                $tmp1746 = $tmp1750;
                                $tmp1745 = ((org$pandalanguage$pandac$IRNode*) $tmp1746);
                                s1744 = $tmp1745;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1745));
                                panda$core$Panda$unref$panda$core$Object($tmp1746);
                                panda$core$String* $tmp1753 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1744), &$s1752);
                                $tmp1751 = $tmp1753;
                                panda$core$MutableString$append$panda$core$String(result1713, $tmp1751);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1751));
                            }
                            $tmp1743 = -1;
                            goto $l1741;
                            $l1741:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1744));
                            s1744 = NULL;
                            switch ($tmp1743) {
                                case -1: goto $l1754;
                            }
                            $l1754:;
                        }
                        goto $l1733;
                        $l1734:;
                    }
                    $tmp1725 = -1;
                    goto $l1723;
                    $l1723:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$498$171726));
                    Iter$498$171726 = NULL;
                    switch ($tmp1725) {
                        case -1: goto $l1755;
                    }
                    $l1755:;
                }
                panda$core$String* $tmp1759 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1758, ((panda$core$Object*) test1708));
                $tmp1757 = $tmp1759;
                panda$core$String* $tmp1761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1757, &$s1760);
                $tmp1756 = $tmp1761;
                panda$core$MutableString$append$panda$core$String(result1713, $tmp1756);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1756));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1757));
                panda$core$String* $tmp1764 = panda$core$MutableString$finish$R$panda$core$String(result1713);
                $tmp1763 = $tmp1764;
                $tmp1762 = $tmp1763;
                $returnValue1303 = $tmp1762;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1762));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1763));
                $tmp1712 = 0;
                goto $l1710;
                $l1765:;
                $tmp1295 = 20;
                goto $l1293;
                $l1766:;
                return $returnValue1303;
            }
            $l1710:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1713));
            result1713 = NULL;
            switch ($tmp1712) {
                case 0: goto $l1765;
            }
            $l1768:;
        }
        }
        else {
        panda$core$Bit $tmp1769 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp1769.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1771 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 0));
            m1770 = *$tmp1771;
            panda$collections$ImmutableArray** $tmp1773 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91296->$data + 8));
            args1772 = *$tmp1773;
            panda$core$String* $tmp1780 = (($fn1779) m1770->$class->vtable[0])(m1770);
            $tmp1778 = $tmp1780;
            panda$core$String* $tmp1782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1778, &$s1781);
            $tmp1777 = $tmp1782;
            ITable* $tmp1785 = ((panda$collections$ListView*) args1772)->$class->itable;
            while ($tmp1785->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1785 = $tmp1785->next;
            }
            $fn1787 $tmp1786 = $tmp1785->methods[2];
            panda$core$String* $tmp1788 = $tmp1786(((panda$collections$ListView*) args1772), &$s1784);
            $tmp1783 = $tmp1788;
            panda$core$String* $tmp1789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1777, $tmp1783);
            $tmp1776 = $tmp1789;
            panda$core$String* $tmp1791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1776, &$s1790);
            $tmp1775 = $tmp1791;
            $tmp1774 = $tmp1775;
            $returnValue1303 = $tmp1774;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1774));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1775));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1776));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1783));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1777));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1778));
            $tmp1295 = 21;
            goto $l1293;
            $l1792:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp1794 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp1794.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1796 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 0));
            expr1795 = *$tmp1796;
            org$pandalanguage$pandac$IRNode** $tmp1798 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 8));
            stmt1797 = *$tmp1798;
            panda$core$String* $tmp1805 = (($fn1804) expr1795->$class->vtable[0])(expr1795);
            $tmp1803 = $tmp1805;
            panda$core$String* $tmp1807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1803, &$s1806);
            $tmp1802 = $tmp1807;
            panda$core$String* $tmp1808 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1802, ((panda$core$Object*) stmt1797));
            $tmp1801 = $tmp1808;
            panda$core$String* $tmp1810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1801, &$s1809);
            $tmp1800 = $tmp1810;
            $tmp1799 = $tmp1800;
            $returnValue1303 = $tmp1799;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1799));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1800));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1801));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1802));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1803));
            $tmp1295 = 22;
            goto $l1293;
            $l1811:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp1813 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp1813.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1815 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 24));
            base1814 = *$tmp1815;
            org$pandalanguage$pandac$FieldDecl** $tmp1817 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$427_91296->$data + 32));
            field1816 = *$tmp1817;
            panda$core$String* $tmp1824 = (($fn1823) base1814->$class->vtable[0])(base1814);
            $tmp1822 = $tmp1824;
            panda$core$String* $tmp1826 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1822, &$s1825);
            $tmp1821 = $tmp1826;
            panda$core$String* $tmp1827 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1821, ((org$pandalanguage$pandac$Symbol*) field1816)->name);
            $tmp1820 = $tmp1827;
            panda$core$String* $tmp1829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1820, &$s1828);
            $tmp1819 = $tmp1829;
            $tmp1818 = $tmp1819;
            $returnValue1303 = $tmp1818;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1818));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1819));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1820));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1821));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1822));
            $tmp1295 = 23;
            goto $l1293;
            $l1830:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp1832 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp1832.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1834 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 16));
            test1833 = *$tmp1834;
            panda$collections$ImmutableArray** $tmp1836 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91296->$data + 24));
            ifTrue1835 = *$tmp1836;
            org$pandalanguage$pandac$IRNode** $tmp1838 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 32));
            ifFalse1837 = *$tmp1838;
            int $tmp1841;
            {
                panda$core$MutableString* $tmp1845 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1849 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1848, ((panda$core$Object*) test1833));
                $tmp1847 = $tmp1849;
                panda$core$String* $tmp1851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1847, &$s1850);
                $tmp1846 = $tmp1851;
                panda$core$MutableString$init$panda$core$String($tmp1845, $tmp1846);
                $tmp1844 = $tmp1845;
                $tmp1843 = $tmp1844;
                result1842 = $tmp1843;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1843));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1844));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1846));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1847));
                {
                    int $tmp1854;
                    {
                        ITable* $tmp1858 = ((panda$collections$Iterable*) ifTrue1835)->$class->itable;
                        while ($tmp1858->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1858 = $tmp1858->next;
                        }
                        $fn1860 $tmp1859 = $tmp1858->methods[0];
                        panda$collections$Iterator* $tmp1861 = $tmp1859(((panda$collections$Iterable*) ifTrue1835));
                        $tmp1857 = $tmp1861;
                        $tmp1856 = $tmp1857;
                        Iter$511$171855 = $tmp1856;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1856));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1857));
                        $l1862:;
                        ITable* $tmp1865 = Iter$511$171855->$class->itable;
                        while ($tmp1865->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1865 = $tmp1865->next;
                        }
                        $fn1867 $tmp1866 = $tmp1865->methods[0];
                        panda$core$Bit $tmp1868 = $tmp1866(Iter$511$171855);
                        panda$core$Bit $tmp1869 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1868);
                        bool $tmp1864 = $tmp1869.value;
                        if (!$tmp1864) goto $l1863;
                        {
                            int $tmp1872;
                            {
                                ITable* $tmp1876 = Iter$511$171855->$class->itable;
                                while ($tmp1876->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1876 = $tmp1876->next;
                                }
                                $fn1878 $tmp1877 = $tmp1876->methods[1];
                                panda$core$Object* $tmp1879 = $tmp1877(Iter$511$171855);
                                $tmp1875 = $tmp1879;
                                $tmp1874 = ((org$pandalanguage$pandac$IRNode*) $tmp1875);
                                s1873 = $tmp1874;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1874));
                                panda$core$Panda$unref$panda$core$Object($tmp1875);
                                panda$core$String* $tmp1882 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1873), &$s1881);
                                $tmp1880 = $tmp1882;
                                panda$core$MutableString$append$panda$core$String(result1842, $tmp1880);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1880));
                            }
                            $tmp1872 = -1;
                            goto $l1870;
                            $l1870:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1873));
                            s1873 = NULL;
                            switch ($tmp1872) {
                                case -1: goto $l1883;
                            }
                            $l1883:;
                        }
                        goto $l1862;
                        $l1863:;
                    }
                    $tmp1854 = -1;
                    goto $l1852;
                    $l1852:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$511$171855));
                    Iter$511$171855 = NULL;
                    switch ($tmp1854) {
                        case -1: goto $l1884;
                    }
                    $l1884:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1885, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1842, $tmp1885);
                if (((panda$core$Bit) { ifFalse1837 != NULL }).value) {
                {
                    panda$core$String* $tmp1889 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1888, ((panda$core$Object*) ifFalse1837));
                    $tmp1887 = $tmp1889;
                    panda$core$String* $tmp1891 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1887, &$s1890);
                    $tmp1886 = $tmp1891;
                    panda$core$MutableString$append$panda$core$String(result1842, $tmp1886);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1886));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1887));
                }
                }
                panda$core$String* $tmp1894 = panda$core$MutableString$finish$R$panda$core$String(result1842);
                $tmp1893 = $tmp1894;
                $tmp1892 = $tmp1893;
                $returnValue1303 = $tmp1892;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1892));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1893));
                $tmp1841 = 0;
                goto $l1839;
                $l1895:;
                $tmp1295 = 24;
                goto $l1293;
                $l1896:;
                return $returnValue1303;
            }
            $l1839:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1842));
            result1842 = NULL;
            switch ($tmp1841) {
                case 0: goto $l1895;
            }
            $l1898:;
        }
        }
        else {
        panda$core$Bit $tmp1899 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp1899.value) {
        {
            panda$core$UInt64* $tmp1901 = ((panda$core$UInt64*) ((char*) $match$427_91296->$data + 24));
            value1900 = *$tmp1901;
            panda$core$String* $tmp1904 = panda$core$UInt64$convert$R$panda$core$String(value1900);
            $tmp1903 = $tmp1904;
            $tmp1902 = $tmp1903;
            $returnValue1303 = $tmp1902;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1902));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1903));
            $tmp1295 = 25;
            goto $l1293;
            $l1905:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp1907 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp1907.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1909 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 16));
            value1908 = *$tmp1909;
            panda$core$String* $tmp1914 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1913, ((panda$core$Object*) value1908));
            $tmp1912 = $tmp1914;
            panda$core$String* $tmp1916 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1912, &$s1915);
            $tmp1911 = $tmp1916;
            $tmp1910 = $tmp1911;
            $returnValue1303 = $tmp1910;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1910));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1911));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1912));
            $tmp1295 = 26;
            goto $l1293;
            $l1917:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp1919 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1919.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1921 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 16));
            value1920 = *$tmp1921;
            panda$core$String* $tmp1926 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1925, ((panda$core$Object*) value1920));
            $tmp1924 = $tmp1926;
            panda$core$String* $tmp1928 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1924, &$s1927);
            $tmp1923 = $tmp1928;
            $tmp1922 = $tmp1923;
            $returnValue1303 = $tmp1922;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1922));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1923));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1924));
            $tmp1295 = 27;
            goto $l1293;
            $l1929:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp1931 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1931.value) {
        {
            panda$core$String** $tmp1933 = ((panda$core$String**) ((char*) $match$427_91296->$data + 16));
            label1932 = *$tmp1933;
            panda$collections$ImmutableArray** $tmp1935 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91296->$data + 24));
            statements1934 = *$tmp1935;
            int $tmp1938;
            {
                panda$core$MutableString* $tmp1942 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1942);
                $tmp1941 = $tmp1942;
                $tmp1940 = $tmp1941;
                result1939 = $tmp1940;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1940));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1941));
                if (((panda$core$Bit) { label1932 != NULL }).value) {
                {
                    panda$core$String* $tmp1945 = panda$core$String$convert$R$panda$core$String(label1932);
                    $tmp1944 = $tmp1945;
                    panda$core$String* $tmp1947 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1944, &$s1946);
                    $tmp1943 = $tmp1947;
                    panda$core$MutableString$append$panda$core$String(result1939, $tmp1943);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1943));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1944));
                }
                }
                panda$core$MutableString$append$panda$core$String(result1939, &$s1948);
                {
                    int $tmp1951;
                    {
                        ITable* $tmp1955 = ((panda$collections$Iterable*) statements1934)->$class->itable;
                        while ($tmp1955->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1955 = $tmp1955->next;
                        }
                        $fn1957 $tmp1956 = $tmp1955->methods[0];
                        panda$collections$Iterator* $tmp1958 = $tmp1956(((panda$collections$Iterable*) statements1934));
                        $tmp1954 = $tmp1958;
                        $tmp1953 = $tmp1954;
                        Iter$531$171952 = $tmp1953;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1953));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1954));
                        $l1959:;
                        ITable* $tmp1962 = Iter$531$171952->$class->itable;
                        while ($tmp1962->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1962 = $tmp1962->next;
                        }
                        $fn1964 $tmp1963 = $tmp1962->methods[0];
                        panda$core$Bit $tmp1965 = $tmp1963(Iter$531$171952);
                        panda$core$Bit $tmp1966 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1965);
                        bool $tmp1961 = $tmp1966.value;
                        if (!$tmp1961) goto $l1960;
                        {
                            int $tmp1969;
                            {
                                ITable* $tmp1973 = Iter$531$171952->$class->itable;
                                while ($tmp1973->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1973 = $tmp1973->next;
                                }
                                $fn1975 $tmp1974 = $tmp1973->methods[1];
                                panda$core$Object* $tmp1976 = $tmp1974(Iter$531$171952);
                                $tmp1972 = $tmp1976;
                                $tmp1971 = ((org$pandalanguage$pandac$IRNode*) $tmp1972);
                                s1970 = $tmp1971;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1971));
                                panda$core$Panda$unref$panda$core$Object($tmp1972);
                                panda$core$String* $tmp1979 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1970), &$s1978);
                                $tmp1977 = $tmp1979;
                                panda$core$MutableString$append$panda$core$String(result1939, $tmp1977);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1977));
                            }
                            $tmp1969 = -1;
                            goto $l1967;
                            $l1967:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1970));
                            s1970 = NULL;
                            switch ($tmp1969) {
                                case -1: goto $l1980;
                            }
                            $l1980:;
                        }
                        goto $l1959;
                        $l1960:;
                    }
                    $tmp1951 = -1;
                    goto $l1949;
                    $l1949:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$531$171952));
                    Iter$531$171952 = NULL;
                    switch ($tmp1951) {
                        case -1: goto $l1981;
                    }
                    $l1981:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1982, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1939, $tmp1982);
                panda$core$String* $tmp1985 = panda$core$MutableString$finish$R$panda$core$String(result1939);
                $tmp1984 = $tmp1985;
                $tmp1983 = $tmp1984;
                $returnValue1303 = $tmp1983;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1983));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1984));
                $tmp1938 = 0;
                goto $l1936;
                $l1986:;
                $tmp1295 = 28;
                goto $l1293;
                $l1987:;
                return $returnValue1303;
            }
            $l1936:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1939));
            result1939 = NULL;
            switch ($tmp1938) {
                case 0: goto $l1986;
            }
            $l1989:;
        }
        }
        else {
        panda$core$Bit $tmp1990 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1990.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1992 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 16));
            value1991 = *$tmp1992;
            panda$collections$ImmutableArray** $tmp1994 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91296->$data + 24));
            whens1993 = *$tmp1994;
            panda$collections$ImmutableArray** $tmp1996 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91296->$data + 32));
            other1995 = *$tmp1996;
            int $tmp1999;
            {
                panda$core$MutableString* $tmp2003 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp2007 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2006, ((panda$core$Object*) value1991));
                $tmp2005 = $tmp2007;
                panda$core$String* $tmp2009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2005, &$s2008);
                $tmp2004 = $tmp2009;
                panda$core$MutableString$init$panda$core$String($tmp2003, $tmp2004);
                $tmp2002 = $tmp2003;
                $tmp2001 = $tmp2002;
                result2000 = $tmp2001;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2001));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2002));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2004));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2005));
                {
                    int $tmp2012;
                    {
                        ITable* $tmp2016 = ((panda$collections$Iterable*) whens1993)->$class->itable;
                        while ($tmp2016->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2016 = $tmp2016->next;
                        }
                        $fn2018 $tmp2017 = $tmp2016->methods[0];
                        panda$collections$Iterator* $tmp2019 = $tmp2017(((panda$collections$Iterable*) whens1993));
                        $tmp2015 = $tmp2019;
                        $tmp2014 = $tmp2015;
                        Iter$538$172013 = $tmp2014;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2014));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2015));
                        $l2020:;
                        ITable* $tmp2023 = Iter$538$172013->$class->itable;
                        while ($tmp2023->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2023 = $tmp2023->next;
                        }
                        $fn2025 $tmp2024 = $tmp2023->methods[0];
                        panda$core$Bit $tmp2026 = $tmp2024(Iter$538$172013);
                        panda$core$Bit $tmp2027 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2026);
                        bool $tmp2022 = $tmp2027.value;
                        if (!$tmp2022) goto $l2021;
                        {
                            int $tmp2030;
                            {
                                ITable* $tmp2034 = Iter$538$172013->$class->itable;
                                while ($tmp2034->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2034 = $tmp2034->next;
                                }
                                $fn2036 $tmp2035 = $tmp2034->methods[1];
                                panda$core$Object* $tmp2037 = $tmp2035(Iter$538$172013);
                                $tmp2033 = $tmp2037;
                                $tmp2032 = ((org$pandalanguage$pandac$IRNode*) $tmp2033);
                                w2031 = $tmp2032;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2032));
                                panda$core$Panda$unref$panda$core$Object($tmp2033);
                                panda$core$String* $tmp2040 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w2031), &$s2039);
                                $tmp2038 = $tmp2040;
                                panda$core$MutableString$append$panda$core$String(result2000, $tmp2038);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2038));
                            }
                            $tmp2030 = -1;
                            goto $l2028;
                            $l2028:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w2031));
                            w2031 = NULL;
                            switch ($tmp2030) {
                                case -1: goto $l2041;
                            }
                            $l2041:;
                        }
                        goto $l2020;
                        $l2021:;
                    }
                    $tmp2012 = -1;
                    goto $l2010;
                    $l2010:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$538$172013));
                    Iter$538$172013 = NULL;
                    switch ($tmp2012) {
                        case -1: goto $l2042;
                    }
                    $l2042:;
                }
                if (((panda$core$Bit) { other1995 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$String(result2000, &$s2043);
                    {
                        int $tmp2046;
                        {
                            ITable* $tmp2050 = ((panda$collections$Iterable*) other1995)->$class->itable;
                            while ($tmp2050->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp2050 = $tmp2050->next;
                            }
                            $fn2052 $tmp2051 = $tmp2050->methods[0];
                            panda$collections$Iterator* $tmp2053 = $tmp2051(((panda$collections$Iterable*) other1995));
                            $tmp2049 = $tmp2053;
                            $tmp2048 = $tmp2049;
                            Iter$543$212047 = $tmp2048;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2048));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2049));
                            $l2054:;
                            ITable* $tmp2057 = Iter$543$212047->$class->itable;
                            while ($tmp2057->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2057 = $tmp2057->next;
                            }
                            $fn2059 $tmp2058 = $tmp2057->methods[0];
                            panda$core$Bit $tmp2060 = $tmp2058(Iter$543$212047);
                            panda$core$Bit $tmp2061 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2060);
                            bool $tmp2056 = $tmp2061.value;
                            if (!$tmp2056) goto $l2055;
                            {
                                int $tmp2064;
                                {
                                    ITable* $tmp2068 = Iter$543$212047->$class->itable;
                                    while ($tmp2068->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp2068 = $tmp2068->next;
                                    }
                                    $fn2070 $tmp2069 = $tmp2068->methods[1];
                                    panda$core$Object* $tmp2071 = $tmp2069(Iter$543$212047);
                                    $tmp2067 = $tmp2071;
                                    $tmp2066 = ((org$pandalanguage$pandac$IRNode*) $tmp2067);
                                    s2065 = $tmp2066;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2066));
                                    panda$core$Panda$unref$panda$core$Object($tmp2067);
                                    panda$core$String* $tmp2074 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2065), &$s2073);
                                    $tmp2072 = $tmp2074;
                                    panda$core$MutableString$append$panda$core$String(result2000, $tmp2072);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2072));
                                }
                                $tmp2064 = -1;
                                goto $l2062;
                                $l2062:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2065));
                                s2065 = NULL;
                                switch ($tmp2064) {
                                    case -1: goto $l2075;
                                }
                                $l2075:;
                            }
                            goto $l2054;
                            $l2055:;
                        }
                        $tmp2046 = -1;
                        goto $l2044;
                        $l2044:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$543$212047));
                        Iter$543$212047 = NULL;
                        switch ($tmp2046) {
                            case -1: goto $l2076;
                        }
                        $l2076:;
                    }
                }
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2077, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result2000, $tmp2077);
                panda$core$String* $tmp2080 = panda$core$MutableString$finish$R$panda$core$String(result2000);
                $tmp2079 = $tmp2080;
                $tmp2078 = $tmp2079;
                $returnValue1303 = $tmp2078;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2078));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2079));
                $tmp1999 = 0;
                goto $l1997;
                $l2081:;
                $tmp1295 = 29;
                goto $l1293;
                $l2082:;
                return $returnValue1303;
            }
            $l1997:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2000));
            result2000 = NULL;
            switch ($tmp1999) {
                case 0: goto $l2081;
            }
            $l2084:;
        }
        }
        else {
        panda$core$Bit $tmp2085 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp2085.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2087 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 16));
            target2086 = *$tmp2087;
            org$pandalanguage$pandac$MethodRef** $tmp2089 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$427_91296->$data + 24));
            m2088 = *$tmp2089;
            if (((panda$core$Bit) { target2086 != NULL }).value) {
            {
                panda$core$String* $tmp2096 = (($fn2095) target2086->$class->vtable[0])(target2086);
                $tmp2094 = $tmp2096;
                panda$core$String* $tmp2098 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2094, &$s2097);
                $tmp2093 = $tmp2098;
                panda$core$String* $tmp2099 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2093, ((org$pandalanguage$pandac$Symbol*) m2088->value)->name);
                $tmp2092 = $tmp2099;
                panda$core$String* $tmp2101 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2092, &$s2100);
                $tmp2091 = $tmp2101;
                $tmp2090 = $tmp2091;
                $returnValue1303 = $tmp2090;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2090));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2091));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2092));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2093));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2094));
                $tmp1295 = 30;
                goto $l1293;
                $l2102:;
                return $returnValue1303;
            }
            }
            $tmp2104 = ((org$pandalanguage$pandac$Symbol*) m2088->value)->name;
            $returnValue1303 = $tmp2104;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2104));
            $tmp1295 = 31;
            goto $l1293;
            $l2105:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp2107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp2107.value) {
        {
            panda$core$UInt64* $tmp2109 = ((panda$core$UInt64*) ((char*) $match$427_91296->$data + 24));
            value2108 = *$tmp2109;
            panda$core$UInt64$wrapper* $tmp2114;
            $tmp2114 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
            $tmp2114->value = value2108;
            $tmp2113 = ((panda$core$Object*) $tmp2114);
            panda$core$String* $tmp2115 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2112, $tmp2113);
            $tmp2111 = $tmp2115;
            $tmp2110 = $tmp2111;
            $returnValue1303 = $tmp2110;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2110));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2111));
            panda$core$Panda$unref$panda$core$Object($tmp2113);
            $tmp1295 = 32;
            goto $l1293;
            $l2116:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp2118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp2118.value) {
        {
            $tmp2119 = &$s2120;
            $returnValue1303 = $tmp2119;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2119));
            $tmp1295 = 33;
            goto $l1293;
            $l2121:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp2123 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp2123.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2125 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$427_91296->$data + 16));
            op2124 = *$tmp2125;
            org$pandalanguage$pandac$IRNode** $tmp2127 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 24));
            base2126 = *$tmp2127;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2134;
            $tmp2134 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp2134->value = op2124;
            $tmp2133 = ((panda$core$Object*) $tmp2134);
            panda$core$String* $tmp2136 = (($fn2135) $tmp2133->$class->vtable[0])($tmp2133);
            $tmp2132 = $tmp2136;
            panda$core$String* $tmp2138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2132, &$s2137);
            $tmp2131 = $tmp2138;
            panda$core$String* $tmp2139 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2131, ((panda$core$Object*) base2126));
            $tmp2130 = $tmp2139;
            panda$core$String* $tmp2141 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2130, &$s2140);
            $tmp2129 = $tmp2141;
            $tmp2128 = $tmp2129;
            $returnValue1303 = $tmp2128;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2128));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2129));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2130));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2131));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2132));
            panda$core$Panda$unref$panda$core$Object($tmp2133);
            $tmp1295 = 34;
            goto $l1293;
            $l2142:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp2144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp2144.value) {
        {
            panda$core$String** $tmp2146 = ((panda$core$String**) ((char*) $match$427_91296->$data + 16));
            label2145 = *$tmp2146;
            org$pandalanguage$pandac$IRNode** $tmp2148 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 24));
            target2147 = *$tmp2148;
            org$pandalanguage$pandac$IRNode** $tmp2150 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 32));
            list2149 = *$tmp2150;
            panda$collections$ImmutableArray** $tmp2152 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91296->$data + 40));
            statements2151 = *$tmp2152;
            int $tmp2155;
            {
                panda$core$MutableString* $tmp2159 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2159);
                $tmp2158 = $tmp2159;
                $tmp2157 = $tmp2158;
                result2156 = $tmp2157;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2157));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2158));
                if (((panda$core$Bit) { label2145 != NULL }).value) {
                {
                    panda$core$String* $tmp2162 = panda$core$String$convert$R$panda$core$String(label2145);
                    $tmp2161 = $tmp2162;
                    panda$core$String* $tmp2164 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2161, &$s2163);
                    $tmp2160 = $tmp2164;
                    panda$core$MutableString$append$panda$core$String(result2156, $tmp2160);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2160));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2161));
                }
                }
                panda$core$String* $tmp2170 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2169, ((panda$core$Object*) target2147));
                $tmp2168 = $tmp2170;
                panda$core$String* $tmp2172 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2168, &$s2171);
                $tmp2167 = $tmp2172;
                panda$core$String* $tmp2173 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2167, ((panda$core$Object*) list2149));
                $tmp2166 = $tmp2173;
                panda$core$String* $tmp2175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2166, &$s2174);
                $tmp2165 = $tmp2175;
                panda$core$MutableString$append$panda$core$String(result2156, $tmp2165);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2165));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2166));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2167));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2168));
                {
                    int $tmp2178;
                    {
                        ITable* $tmp2182 = ((panda$collections$Iterable*) statements2151)->$class->itable;
                        while ($tmp2182->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2182 = $tmp2182->next;
                        }
                        $fn2184 $tmp2183 = $tmp2182->methods[0];
                        panda$collections$Iterator* $tmp2185 = $tmp2183(((panda$collections$Iterable*) statements2151));
                        $tmp2181 = $tmp2185;
                        $tmp2180 = $tmp2181;
                        Iter$566$172179 = $tmp2180;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2180));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2181));
                        $l2186:;
                        ITable* $tmp2189 = Iter$566$172179->$class->itable;
                        while ($tmp2189->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2189 = $tmp2189->next;
                        }
                        $fn2191 $tmp2190 = $tmp2189->methods[0];
                        panda$core$Bit $tmp2192 = $tmp2190(Iter$566$172179);
                        panda$core$Bit $tmp2193 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2192);
                        bool $tmp2188 = $tmp2193.value;
                        if (!$tmp2188) goto $l2187;
                        {
                            int $tmp2196;
                            {
                                ITable* $tmp2200 = Iter$566$172179->$class->itable;
                                while ($tmp2200->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2200 = $tmp2200->next;
                                }
                                $fn2202 $tmp2201 = $tmp2200->methods[1];
                                panda$core$Object* $tmp2203 = $tmp2201(Iter$566$172179);
                                $tmp2199 = $tmp2203;
                                $tmp2198 = ((org$pandalanguage$pandac$IRNode*) $tmp2199);
                                s2197 = $tmp2198;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2198));
                                panda$core$Panda$unref$panda$core$Object($tmp2199);
                                panda$core$String* $tmp2206 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2197), &$s2205);
                                $tmp2204 = $tmp2206;
                                panda$core$MutableString$append$panda$core$String(result2156, $tmp2204);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2204));
                            }
                            $tmp2196 = -1;
                            goto $l2194;
                            $l2194:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2197));
                            s2197 = NULL;
                            switch ($tmp2196) {
                                case -1: goto $l2207;
                            }
                            $l2207:;
                        }
                        goto $l2186;
                        $l2187:;
                    }
                    $tmp2178 = -1;
                    goto $l2176;
                    $l2176:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$566$172179));
                    Iter$566$172179 = NULL;
                    switch ($tmp2178) {
                        case -1: goto $l2208;
                    }
                    $l2208:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2209, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result2156, $tmp2209);
                panda$core$String* $tmp2212 = panda$core$MutableString$finish$R$panda$core$String(result2156);
                $tmp2211 = $tmp2212;
                $tmp2210 = $tmp2211;
                $returnValue1303 = $tmp2210;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2210));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2211));
                $tmp2155 = 0;
                goto $l2153;
                $l2213:;
                $tmp1295 = 35;
                goto $l1293;
                $l2214:;
                return $returnValue1303;
            }
            $l2153:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2156));
            result2156 = NULL;
            switch ($tmp2155) {
                case 0: goto $l2213;
            }
            $l2216:;
        }
        }
        else {
        panda$core$Bit $tmp2217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp2217.value) {
        {
            panda$core$Real64* $tmp2219 = ((panda$core$Real64*) ((char*) $match$427_91296->$data + 24));
            value2218 = *$tmp2219;
            panda$core$String* $tmp2222 = panda$core$Real64$convert$R$panda$core$String(value2218);
            $tmp2221 = $tmp2222;
            $tmp2220 = $tmp2221;
            $returnValue1303 = $tmp2220;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2220));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2221));
            $tmp1295 = 36;
            goto $l1293;
            $l2223:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp2225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2225.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2227 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 16));
            value2226 = *$tmp2227;
            if (((panda$core$Bit) { value2226 != NULL }).value) {
            {
                panda$core$String* $tmp2232 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2231, ((panda$core$Object*) value2226));
                $tmp2230 = $tmp2232;
                panda$core$String* $tmp2234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2230, &$s2233);
                $tmp2229 = $tmp2234;
                $tmp2228 = $tmp2229;
                $returnValue1303 = $tmp2228;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2228));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2229));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2230));
                $tmp1295 = 37;
                goto $l1293;
                $l2235:;
                return $returnValue1303;
            }
            }
            $tmp2237 = &$s2238;
            $returnValue1303 = $tmp2237;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2237));
            $tmp1295 = 38;
            goto $l1293;
            $l2239:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp2241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp2241.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2243 = ((org$pandalanguage$pandac$Type**) ((char*) $match$427_91296->$data + 16));
            type2242 = *$tmp2243;
            panda$core$Int64* $tmp2245 = ((panda$core$Int64*) ((char*) $match$427_91296->$data + 24));
            id2244 = *$tmp2245;
            panda$core$Int64$wrapper* $tmp2251;
            $tmp2251 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2251->value = id2244;
            $tmp2250 = ((panda$core$Object*) $tmp2251);
            panda$core$String* $tmp2252 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2249, $tmp2250);
            $tmp2248 = $tmp2252;
            panda$core$String* $tmp2254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2248, &$s2253);
            $tmp2247 = $tmp2254;
            $tmp2246 = $tmp2247;
            $returnValue1303 = $tmp2246;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2246));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2247));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2248));
            panda$core$Panda$unref$panda$core$Object($tmp2250);
            $tmp1295 = 39;
            goto $l1293;
            $l2255:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp2257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp2257.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2259 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 0));
            base2258 = *$tmp2259;
            panda$core$Int64* $tmp2261 = ((panda$core$Int64*) ((char*) $match$427_91296->$data + 8));
            id2260 = *$tmp2261;
            panda$core$Int64$wrapper* $tmp2269;
            $tmp2269 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2269->value = id2260;
            $tmp2268 = ((panda$core$Object*) $tmp2269);
            panda$core$String* $tmp2270 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2267, $tmp2268);
            $tmp2266 = $tmp2270;
            panda$core$String* $tmp2272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2266, &$s2271);
            $tmp2265 = $tmp2272;
            panda$core$String* $tmp2273 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2265, ((panda$core$Object*) base2258));
            $tmp2264 = $tmp2273;
            panda$core$String* $tmp2275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2264, &$s2274);
            $tmp2263 = $tmp2275;
            $tmp2262 = $tmp2263;
            $returnValue1303 = $tmp2262;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2262));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2263));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2264));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2265));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2266));
            panda$core$Panda$unref$panda$core$Object($tmp2268);
            $tmp1295 = 40;
            goto $l1293;
            $l2276:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp2278 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp2278.value) {
        {
            $tmp2279 = &$s2280;
            $returnValue1303 = $tmp2279;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2279));
            $tmp1295 = 41;
            goto $l1293;
            $l2281:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp2283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp2283.value) {
        {
            panda$core$String** $tmp2285 = ((panda$core$String**) ((char*) $match$427_91296->$data + 16));
            str2284 = *$tmp2285;
            $tmp2286 = str2284;
            $returnValue1303 = $tmp2286;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2286));
            $tmp1295 = 42;
            goto $l1293;
            $l2287:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp2289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp2289.value) {
        {
            $tmp2290 = &$s2291;
            $returnValue1303 = $tmp2290;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2290));
            $tmp1295 = 43;
            goto $l1293;
            $l2292:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp2294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp2294.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2296 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 16));
            test2295 = *$tmp2296;
            org$pandalanguage$pandac$IRNode** $tmp2298 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 24));
            ifTrue2297 = *$tmp2298;
            org$pandalanguage$pandac$IRNode** $tmp2300 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 32));
            ifFalse2299 = *$tmp2300;
            panda$core$String* $tmp2309 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2308, ((panda$core$Object*) test2295));
            $tmp2307 = $tmp2309;
            panda$core$String* $tmp2311 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2307, &$s2310);
            $tmp2306 = $tmp2311;
            panda$core$String* $tmp2312 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2306, ((panda$core$Object*) ifTrue2297));
            $tmp2305 = $tmp2312;
            panda$core$String* $tmp2314 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2305, &$s2313);
            $tmp2304 = $tmp2314;
            panda$core$String* $tmp2315 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2304, ((panda$core$Object*) ifFalse2299));
            $tmp2303 = $tmp2315;
            panda$core$String* $tmp2317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2303, &$s2316);
            $tmp2302 = $tmp2317;
            $tmp2301 = $tmp2302;
            $returnValue1303 = $tmp2301;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2301));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2302));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2303));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2304));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2305));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2306));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2307));
            $tmp1295 = 44;
            goto $l1293;
            $l2318:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp2320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp2320.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2322 = ((org$pandalanguage$pandac$Type**) ((char*) $match$427_91296->$data + 16));
            type2321 = *$tmp2322;
            panda$core$String* $tmp2325 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type2321);
            $tmp2324 = $tmp2325;
            $tmp2323 = $tmp2324;
            $returnValue1303 = $tmp2323;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2323));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2324));
            $tmp1295 = 45;
            goto $l1293;
            $l2326:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp2328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp2328.value) {
        {
            panda$core$String** $tmp2330 = ((panda$core$String**) ((char*) $match$427_91296->$data + 16));
            name2329 = *$tmp2330;
            $tmp2331 = name2329;
            $returnValue1303 = $tmp2331;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2331));
            $tmp1295 = 46;
            goto $l1293;
            $l2332:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp2334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp2334.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2336 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 24));
            base2335 = *$tmp2336;
            panda$collections$ImmutableArray** $tmp2338 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91296->$data + 32));
            args2337 = *$tmp2338;
            panda$core$String* $tmp2345 = (($fn2344) base2335->$class->vtable[0])(base2335);
            $tmp2343 = $tmp2345;
            panda$core$String* $tmp2347 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2343, &$s2346);
            $tmp2342 = $tmp2347;
            ITable* $tmp2349 = ((panda$collections$ListView*) args2337)->$class->itable;
            while ($tmp2349->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2349 = $tmp2349->next;
            }
            $fn2351 $tmp2350 = $tmp2349->methods[1];
            panda$core$String* $tmp2352 = $tmp2350(((panda$collections$ListView*) args2337));
            $tmp2348 = $tmp2352;
            panda$core$String* $tmp2353 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2342, $tmp2348);
            $tmp2341 = $tmp2353;
            panda$core$String* $tmp2355 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2341, &$s2354);
            $tmp2340 = $tmp2355;
            $tmp2339 = $tmp2340;
            $returnValue1303 = $tmp2339;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2339));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2340));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2341));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2348));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2342));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2343));
            $tmp1295 = 47;
            goto $l1293;
            $l2356:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp2358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp2358.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2360 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 24));
            target2359 = *$tmp2360;
            panda$collections$ImmutableArray** $tmp2362 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91296->$data + 32));
            methods2361 = *$tmp2362;
            panda$collections$ImmutableArray** $tmp2364 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91296->$data + 40));
            args2363 = *$tmp2364;
            panda$core$String* $tmp2373 = (($fn2372) target2359->$class->vtable[0])(target2359);
            $tmp2371 = $tmp2373;
            panda$core$String* $tmp2375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2371, &$s2374);
            $tmp2370 = $tmp2375;
            panda$core$Object* $tmp2377 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2361, ((panda$core$Int64) { 0 }));
            $tmp2376 = $tmp2377;
            panda$core$String* $tmp2378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2370, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2376)->value)->name);
            $tmp2369 = $tmp2378;
            panda$core$String* $tmp2380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2369, &$s2379);
            $tmp2368 = $tmp2380;
            ITable* $tmp2382 = ((panda$collections$ListView*) args2363)->$class->itable;
            while ($tmp2382->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2382 = $tmp2382->next;
            }
            $fn2384 $tmp2383 = $tmp2382->methods[1];
            panda$core$String* $tmp2385 = $tmp2383(((panda$collections$ListView*) args2363));
            $tmp2381 = $tmp2385;
            panda$core$String* $tmp2386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2368, $tmp2381);
            $tmp2367 = $tmp2386;
            panda$core$String* $tmp2388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2367, &$s2387);
            $tmp2366 = $tmp2388;
            $tmp2365 = $tmp2366;
            $returnValue1303 = $tmp2365;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2365));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2366));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2367));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2381));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2368));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2369));
            panda$core$Panda$unref$panda$core$Object($tmp2376);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2370));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2371));
            $tmp1295 = 48;
            goto $l1293;
            $l2389:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp2391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp2391.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2393 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 16));
            target2392 = *$tmp2393;
            panda$collections$ImmutableArray** $tmp2395 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91296->$data + 24));
            methods2394 = *$tmp2395;
            panda$core$String* $tmp2402 = (($fn2401) target2392->$class->vtable[0])(target2392);
            $tmp2400 = $tmp2402;
            panda$core$String* $tmp2404 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2400, &$s2403);
            $tmp2399 = $tmp2404;
            panda$core$Object* $tmp2406 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2394, ((panda$core$Int64) { 0 }));
            $tmp2405 = $tmp2406;
            panda$core$String* $tmp2407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2399, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2405)->value)->name);
            $tmp2398 = $tmp2407;
            panda$core$String* $tmp2409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2398, &$s2408);
            $tmp2397 = $tmp2409;
            $tmp2396 = $tmp2397;
            $returnValue1303 = $tmp2396;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2396));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2397));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2398));
            panda$core$Panda$unref$panda$core$Object($tmp2405);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2399));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2400));
            $tmp1295 = 49;
            goto $l1293;
            $l2410:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp2412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp2412.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2414 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 16));
            start2413 = *$tmp2414;
            org$pandalanguage$pandac$IRNode** $tmp2416 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 24));
            end2415 = *$tmp2416;
            panda$core$Bit* $tmp2418 = ((panda$core$Bit*) ((char*) $match$427_91296->$data + 32));
            inclusive2417 = *$tmp2418;
            org$pandalanguage$pandac$IRNode** $tmp2420 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 33));
            step2419 = *$tmp2420;
            int $tmp2423;
            {
                panda$core$MutableString* $tmp2427 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2427);
                $tmp2426 = $tmp2427;
                $tmp2425 = $tmp2426;
                result2424 = $tmp2425;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2425));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2426));
                if (((panda$core$Bit) { start2413 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result2424, ((panda$core$Object*) start2413));
                }
                }
                if (inclusive2417.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result2424, &$s2428);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(result2424, &$s2429);
                }
                }
                if (((panda$core$Bit) { end2415 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result2424, ((panda$core$Object*) end2415));
                }
                }
                if (((panda$core$Bit) { step2419 != NULL }).value) {
                {
                    panda$core$String* $tmp2433 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2432, ((panda$core$Object*) step2419));
                    $tmp2431 = $tmp2433;
                    panda$core$String* $tmp2435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2431, &$s2434);
                    $tmp2430 = $tmp2435;
                    panda$core$MutableString$append$panda$core$String(result2424, $tmp2430);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2430));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2431));
                }
                }
                panda$core$String* $tmp2438 = panda$core$MutableString$finish$R$panda$core$String(result2424);
                $tmp2437 = $tmp2438;
                $tmp2436 = $tmp2437;
                $returnValue1303 = $tmp2436;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2436));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2437));
                $tmp2423 = 0;
                goto $l2421;
                $l2439:;
                $tmp1295 = 50;
                goto $l1293;
                $l2440:;
                return $returnValue1303;
            }
            $l2421:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2424));
            result2424 = NULL;
            switch ($tmp2423) {
                case 0: goto $l2439;
            }
            $l2442:;
        }
        }
        else {
        panda$core$Bit $tmp2443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp2443.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp2445 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$427_91296->$data + 16));
            kind2444 = *$tmp2445;
            panda$collections$ImmutableArray** $tmp2447 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91296->$data + 24));
            decls2446 = *$tmp2447;
            int $tmp2450;
            {
                panda$core$MutableString* $tmp2454 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2454);
                $tmp2453 = $tmp2454;
                $tmp2452 = $tmp2453;
                result2451 = $tmp2452;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2452));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2453));
                {
                    $match$620_172455 = kind2444;
                    panda$core$Bit $tmp2456 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$620_172455.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp2456.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2451, &$s2457);
                    }
                    }
                    else {
                    panda$core$Bit $tmp2458 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$620_172455.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp2458.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2451, &$s2459);
                    }
                    }
                    else {
                    panda$core$Bit $tmp2460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$620_172455.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp2460.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2451, &$s2461);
                    }
                    }
                    else {
                    panda$core$Bit $tmp2462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$620_172455.$rawValue, ((panda$core$Int64) { 3 }));
                    if ($tmp2462.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2451, &$s2463);
                    }
                    }
                    }
                    }
                    }
                }
                ITable* $tmp2465 = ((panda$collections$ListView*) decls2446)->$class->itable;
                while ($tmp2465->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp2465 = $tmp2465->next;
                }
                $fn2467 $tmp2466 = $tmp2465->methods[1];
                panda$core$String* $tmp2468 = $tmp2466(((panda$collections$ListView*) decls2446));
                $tmp2464 = $tmp2468;
                panda$core$MutableString$append$panda$core$String(result2451, $tmp2464);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2464));
                panda$core$String* $tmp2471 = panda$core$MutableString$finish$R$panda$core$String(result2451);
                $tmp2470 = $tmp2471;
                $tmp2469 = $tmp2470;
                $returnValue1303 = $tmp2469;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2469));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2470));
                $tmp2450 = 0;
                goto $l2448;
                $l2472:;
                $tmp1295 = 51;
                goto $l1293;
                $l2473:;
                return $returnValue1303;
            }
            $l2448:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2451));
            result2451 = NULL;
            switch ($tmp2450) {
                case 0: goto $l2472;
            }
            $l2475:;
        }
        }
        else {
        panda$core$Bit $tmp2476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp2476.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2478 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$427_91296->$data + 16));
            variable2477 = *$tmp2478;
            $tmp2479 = ((org$pandalanguage$pandac$Symbol*) variable2477)->name;
            $returnValue1303 = $tmp2479;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2479));
            $tmp1295 = 52;
            goto $l1293;
            $l2480:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp2482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp2482.value) {
        {
            panda$collections$ImmutableArray** $tmp2484 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91296->$data + 16));
            tests2483 = *$tmp2484;
            panda$collections$ImmutableArray** $tmp2486 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91296->$data + 24));
            statements2485 = *$tmp2486;
            ITable* $tmp2494 = ((panda$collections$ListView*) tests2483)->$class->itable;
            while ($tmp2494->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2494 = $tmp2494->next;
            }
            $fn2496 $tmp2495 = $tmp2494->methods[1];
            panda$core$String* $tmp2497 = $tmp2495(((panda$collections$ListView*) tests2483));
            $tmp2493 = $tmp2497;
            panda$core$String* $tmp2498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2492, $tmp2493);
            $tmp2491 = $tmp2498;
            panda$core$String* $tmp2500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2491, &$s2499);
            $tmp2490 = $tmp2500;
            ITable* $tmp2503 = ((panda$collections$ListView*) statements2485)->$class->itable;
            while ($tmp2503->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp2503 = $tmp2503->next;
            }
            $fn2505 $tmp2504 = $tmp2503->methods[2];
            panda$core$String* $tmp2506 = $tmp2504(((panda$collections$ListView*) statements2485), &$s2502);
            $tmp2501 = $tmp2506;
            panda$core$String* $tmp2507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2490, $tmp2501);
            $tmp2489 = $tmp2507;
            panda$core$String* $tmp2509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2489, &$s2508);
            $tmp2488 = $tmp2509;
            $tmp2487 = $tmp2488;
            $returnValue1303 = $tmp2487;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2487));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2488));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2489));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2501));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2490));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2491));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2493));
            $tmp1295 = 53;
            goto $l1293;
            $l2510:;
            return $returnValue1303;
        }
        }
        else {
        panda$core$Bit $tmp2512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$427_91296->$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp2512.value) {
        {
            panda$core$String** $tmp2514 = ((panda$core$String**) ((char*) $match$427_91296->$data + 16));
            label2513 = *$tmp2514;
            org$pandalanguage$pandac$IRNode** $tmp2516 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$427_91296->$data + 24));
            test2515 = *$tmp2516;
            panda$collections$ImmutableArray** $tmp2518 = ((panda$collections$ImmutableArray**) ((char*) $match$427_91296->$data + 32));
            statements2517 = *$tmp2518;
            int $tmp2521;
            {
                panda$core$MutableString* $tmp2525 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2525);
                $tmp2524 = $tmp2525;
                $tmp2523 = $tmp2524;
                result2522 = $tmp2523;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2523));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2524));
                if (((panda$core$Bit) { label2513 != NULL }).value) {
                {
                    panda$core$String* $tmp2528 = panda$core$String$convert$R$panda$core$String(label2513);
                    $tmp2527 = $tmp2528;
                    panda$core$String* $tmp2530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2527, &$s2529);
                    $tmp2526 = $tmp2530;
                    panda$core$MutableString$append$panda$core$String(result2522, $tmp2526);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2526));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2527));
                }
                }
                panda$core$String* $tmp2534 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2533, ((panda$core$Object*) test2515));
                $tmp2532 = $tmp2534;
                panda$core$String* $tmp2536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2532, &$s2535);
                $tmp2531 = $tmp2536;
                panda$core$MutableString$append$panda$core$String(result2522, $tmp2531);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2531));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2532));
                {
                    int $tmp2539;
                    {
                        ITable* $tmp2543 = ((panda$collections$Iterable*) statements2517)->$class->itable;
                        while ($tmp2543->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2543 = $tmp2543->next;
                        }
                        $fn2545 $tmp2544 = $tmp2543->methods[0];
                        panda$collections$Iterator* $tmp2546 = $tmp2544(((panda$collections$Iterable*) statements2517));
                        $tmp2542 = $tmp2546;
                        $tmp2541 = $tmp2542;
                        Iter$638$172540 = $tmp2541;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2541));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2542));
                        $l2547:;
                        ITable* $tmp2550 = Iter$638$172540->$class->itable;
                        while ($tmp2550->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2550 = $tmp2550->next;
                        }
                        $fn2552 $tmp2551 = $tmp2550->methods[0];
                        panda$core$Bit $tmp2553 = $tmp2551(Iter$638$172540);
                        panda$core$Bit $tmp2554 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2553);
                        bool $tmp2549 = $tmp2554.value;
                        if (!$tmp2549) goto $l2548;
                        {
                            int $tmp2557;
                            {
                                ITable* $tmp2561 = Iter$638$172540->$class->itable;
                                while ($tmp2561->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2561 = $tmp2561->next;
                                }
                                $fn2563 $tmp2562 = $tmp2561->methods[1];
                                panda$core$Object* $tmp2564 = $tmp2562(Iter$638$172540);
                                $tmp2560 = $tmp2564;
                                $tmp2559 = ((org$pandalanguage$pandac$IRNode*) $tmp2560);
                                s2558 = $tmp2559;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2559));
                                panda$core$Panda$unref$panda$core$Object($tmp2560);
                                panda$core$String* $tmp2567 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2558), &$s2566);
                                $tmp2565 = $tmp2567;
                                panda$core$MutableString$append$panda$core$String(result2522, $tmp2565);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2565));
                            }
                            $tmp2557 = -1;
                            goto $l2555;
                            $l2555:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2558));
                            s2558 = NULL;
                            switch ($tmp2557) {
                                case -1: goto $l2568;
                            }
                            $l2568:;
                        }
                        goto $l2547;
                        $l2548:;
                    }
                    $tmp2539 = -1;
                    goto $l2537;
                    $l2537:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$638$172540));
                    Iter$638$172540 = NULL;
                    switch ($tmp2539) {
                        case -1: goto $l2569;
                    }
                    $l2569:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2570, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result2522, $tmp2570);
                panda$core$String* $tmp2573 = panda$core$MutableString$finish$R$panda$core$String(result2522);
                $tmp2572 = $tmp2573;
                $tmp2571 = $tmp2572;
                $returnValue1303 = $tmp2571;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2571));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2572));
                $tmp2521 = 0;
                goto $l2519;
                $l2574:;
                $tmp1295 = 54;
                goto $l1293;
                $l2575:;
                return $returnValue1303;
            }
            $l2519:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2522));
            result2522 = NULL;
            switch ($tmp2521) {
                case 0: goto $l2574;
            }
            $l2577:;
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
    $tmp1295 = -1;
    goto $l1293;
    $l1293:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1297));
    switch ($tmp1295) {
        case 43: goto $l2292;
        case 31: goto $l2105;
        case 37: goto $l2235;
        case 22: goto $l1811;
        case 18: goto $l1695;
        case 26: goto $l1917;
        case 17: goto $l1676;
        case 49: goto $l2410;
        case 14: goto $l1652;
        case 33: goto $l2121;
        case 35: goto $l2214;
        case 8: goto $l1522;
        case 45: goto $l2326;
        case 15: goto $l1660;
        case 0: goto $l1316;
        case 16: goto $l1672;
        case 30: goto $l2102;
        case 29: goto $l2082;
        case 41: goto $l2281;
        case 38: goto $l2239;
        case 53: goto $l2510;
        case 5: goto $l1417;
        case 39: goto $l2255;
        case 9: goto $l1545;
        case 47: goto $l2356;
        case 11: goto $l1584;
        case 27: goto $l1929;
        case 4: goto $l1366;
        case 25: goto $l1905;
        case 48: goto $l2389;
        case 23: goto $l1830;
        case 24: goto $l1896;
        case 52: goto $l2480;
        case 20: goto $l1766;
        case 51: goto $l2473;
        case 21: goto $l1792;
        case 12: goto $l1592;
        case 28: goto $l1987;
        case 34: goto $l2142;
        case 3: goto $l1358;
        case 19: goto $l1701;
        case 36: goto $l2223;
        case 7: goto $l1518;
        case 40: goto $l2276;
        case 50: goto $l2440;
        case 6: goto $l1505;
        case 10: goto $l1570;
        case 44: goto $l2318;
        case -1: goto $l2578;
        case 46: goto $l2332;
        case 2: goto $l1330;
        case 1: goto $l1325;
        case 13: goto $l1620;
        case 32: goto $l2116;
        case 42: goto $l2287;
        case 54: goto $l2575;
    }
    $l2578:;
}
void org$pandalanguage$pandac$IRNode$cleanup(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$5_12585 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2586;
    org$pandalanguage$pandac$Position _f02588;
    org$pandalanguage$pandac$IRNode* _f12590 = NULL;
    org$pandalanguage$pandac$IRNode* _f22592 = NULL;
    org$pandalanguage$pandac$Position _f02595;
    org$pandalanguage$pandac$Type* _f12597 = NULL;
    org$pandalanguage$pandac$Position _f02600;
    org$pandalanguage$pandac$Type* _f12602 = NULL;
    org$pandalanguage$pandac$IRNode* _f22604 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind _f32606;
    org$pandalanguage$pandac$IRNode* _f42608 = NULL;
    org$pandalanguage$pandac$Position _f02611;
    org$pandalanguage$pandac$Type* _f12613 = NULL;
    panda$core$Bit _f22615;
    org$pandalanguage$pandac$Position _f02618;
    panda$collections$ImmutableArray* _f12620 = NULL;
    org$pandalanguage$pandac$Position _f02623;
    panda$collections$ImmutableArray* _f12625 = NULL;
    panda$collections$ImmutableArray* _f22627 = NULL;
    org$pandalanguage$pandac$Position _f02630;
    panda$core$String* _f12632 = NULL;
    org$pandalanguage$pandac$Position _f02635;
    org$pandalanguage$pandac$Type* _f12637 = NULL;
    org$pandalanguage$pandac$MethodRef* _f22639 = NULL;
    panda$collections$ImmutableArray* _f32641 = NULL;
    org$pandalanguage$pandac$Position _f02644;
    org$pandalanguage$pandac$IRNode* _f12646 = NULL;
    org$pandalanguage$pandac$Type* _f22648 = NULL;
    panda$core$Bit _f32650;
    org$pandalanguage$pandac$Position _f02653;
    org$pandalanguage$pandac$ChoiceEntry* _f12655 = NULL;
    org$pandalanguage$pandac$Position _f02658;
    org$pandalanguage$pandac$IRNode* _f12660 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* _f22662 = NULL;
    panda$core$Int64 _f32664;
    org$pandalanguage$pandac$Position _f02667;
    org$pandalanguage$pandac$Type* _f12669 = NULL;
    org$pandalanguage$pandac$IRNode* _f22671 = NULL;
    org$pandalanguage$pandac$Position _f02674;
    org$pandalanguage$pandac$Type* _f12676 = NULL;
    org$pandalanguage$pandac$Position _f02679;
    panda$core$String* _f12681 = NULL;
    org$pandalanguage$pandac$IRNode* _f02684 = NULL;
    org$pandalanguage$pandac$IRNode* _f12686 = NULL;
    org$pandalanguage$pandac$Position _f02689;
    panda$core$String* _f12691 = NULL;
    panda$collections$ImmutableArray* _f22693 = NULL;
    org$pandalanguage$pandac$IRNode* _f32695 = NULL;
    org$pandalanguage$pandac$IRNode* _f02698 = NULL;
    panda$collections$ImmutableArray* _f12700 = NULL;
    org$pandalanguage$pandac$IRNode* _f02703 = NULL;
    org$pandalanguage$pandac$IRNode* _f12705 = NULL;
    org$pandalanguage$pandac$Position _f02708;
    org$pandalanguage$pandac$Type* _f12710 = NULL;
    org$pandalanguage$pandac$IRNode* _f22712 = NULL;
    org$pandalanguage$pandac$FieldDecl* _f32714 = NULL;
    org$pandalanguage$pandac$Position _f02717;
    org$pandalanguage$pandac$IRNode* _f12719 = NULL;
    panda$collections$ImmutableArray* _f22721 = NULL;
    org$pandalanguage$pandac$IRNode* _f32723 = NULL;
    org$pandalanguage$pandac$Position _f02726;
    org$pandalanguage$pandac$Type* _f12728 = NULL;
    panda$core$UInt64 _f22730;
    org$pandalanguage$pandac$Position _f02733;
    org$pandalanguage$pandac$IRNode* _f12735 = NULL;
    org$pandalanguage$pandac$Position _f02738;
    org$pandalanguage$pandac$IRNode* _f12740 = NULL;
    org$pandalanguage$pandac$Position _f02743;
    panda$core$String* _f12745 = NULL;
    panda$collections$ImmutableArray* _f22747 = NULL;
    org$pandalanguage$pandac$Position _f02750;
    org$pandalanguage$pandac$IRNode* _f12752 = NULL;
    panda$collections$ImmutableArray* _f22754 = NULL;
    panda$collections$ImmutableArray* _f32756 = NULL;
    org$pandalanguage$pandac$Position _f02759;
    org$pandalanguage$pandac$IRNode* _f12761 = NULL;
    org$pandalanguage$pandac$MethodRef* _f22763 = NULL;
    org$pandalanguage$pandac$Position _f02766;
    org$pandalanguage$pandac$Type* _f12768 = NULL;
    panda$core$UInt64 _f22770;
    org$pandalanguage$pandac$Position _f02773;
    org$pandalanguage$pandac$Type* _f12775 = NULL;
    org$pandalanguage$pandac$Position _f02778;
    org$pandalanguage$pandac$parser$Token$Kind _f12780;
    org$pandalanguage$pandac$IRNode* _f22782 = NULL;
    org$pandalanguage$pandac$Position _f02785;
    panda$core$String* _f12787 = NULL;
    org$pandalanguage$pandac$IRNode* _f22789 = NULL;
    org$pandalanguage$pandac$IRNode* _f32791 = NULL;
    panda$collections$ImmutableArray* _f42793 = NULL;
    org$pandalanguage$pandac$Position _f02796;
    org$pandalanguage$pandac$Type* _f12798 = NULL;
    panda$core$Real64 _f22800;
    org$pandalanguage$pandac$Position _f02803;
    org$pandalanguage$pandac$IRNode* _f12805 = NULL;
    org$pandalanguage$pandac$Position _f02808;
    org$pandalanguage$pandac$Type* _f12810 = NULL;
    panda$core$Int64 _f22812;
    org$pandalanguage$pandac$IRNode* _f02815 = NULL;
    panda$core$Int64 _f12817;
    org$pandalanguage$pandac$Position _f02820;
    org$pandalanguage$pandac$Type* _f12822 = NULL;
    org$pandalanguage$pandac$Position _f02825;
    panda$core$String* _f12827 = NULL;
    org$pandalanguage$pandac$Position _f02830;
    org$pandalanguage$pandac$Type* _f12832 = NULL;
    org$pandalanguage$pandac$Position _f02835;
    org$pandalanguage$pandac$IRNode* _f12837 = NULL;
    org$pandalanguage$pandac$IRNode* _f22839 = NULL;
    org$pandalanguage$pandac$IRNode* _f32841 = NULL;
    org$pandalanguage$pandac$Position _f02844;
    org$pandalanguage$pandac$Type* _f12846 = NULL;
    org$pandalanguage$pandac$Position _f02849;
    panda$core$String* _f12851 = NULL;
    org$pandalanguage$pandac$Position _f02854;
    org$pandalanguage$pandac$Type* _f12856 = NULL;
    org$pandalanguage$pandac$IRNode* _f22858 = NULL;
    panda$collections$ImmutableArray* _f32860 = NULL;
    org$pandalanguage$pandac$Position _f02863;
    org$pandalanguage$pandac$Type* _f12865 = NULL;
    org$pandalanguage$pandac$IRNode* _f22867 = NULL;
    panda$collections$ImmutableArray* _f32869 = NULL;
    panda$collections$ImmutableArray* _f42871 = NULL;
    org$pandalanguage$pandac$Position _f02874;
    org$pandalanguage$pandac$IRNode* _f12876 = NULL;
    panda$collections$ImmutableArray* _f22878 = NULL;
    org$pandalanguage$pandac$Position _f02881;
    org$pandalanguage$pandac$IRNode* _f12883 = NULL;
    org$pandalanguage$pandac$IRNode* _f22885 = NULL;
    panda$core$Bit _f32887;
    org$pandalanguage$pandac$IRNode* _f42889 = NULL;
    org$pandalanguage$pandac$Position _f02892;
    org$pandalanguage$pandac$Variable$Kind _f12894;
    panda$collections$ImmutableArray* _f22896 = NULL;
    org$pandalanguage$pandac$Position _f02899;
    org$pandalanguage$pandac$Variable* _f12901 = NULL;
    org$pandalanguage$pandac$Position _f02904;
    panda$collections$ImmutableArray* _f12906 = NULL;
    panda$collections$ImmutableArray* _f22908 = NULL;
    org$pandalanguage$pandac$Position _f02911;
    panda$core$String* _f12913 = NULL;
    org$pandalanguage$pandac$IRNode* _f22915 = NULL;
    panda$collections$ImmutableArray* _f32917 = NULL;
    int $tmp2581;
    {
        int $tmp2584;
        {
            $tmp2586 = self;
            $match$5_12585 = $tmp2586;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2586));
            panda$core$Bit $tmp2587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp2587.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2589 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02588 = *$tmp2589;
                org$pandalanguage$pandac$IRNode** $tmp2591 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 16));
                _f12590 = *$tmp2591;
                org$pandalanguage$pandac$IRNode** $tmp2593 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 24));
                _f22592 = *$tmp2593;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12590));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22592));
            }
            }
            else {
            panda$core$Bit $tmp2594 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp2594.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2596 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02595 = *$tmp2596;
                org$pandalanguage$pandac$Type** $tmp2598 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12585->$data + 16));
                _f12597 = *$tmp2598;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12597));
            }
            }
            else {
            panda$core$Bit $tmp2599 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp2599.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2601 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02600 = *$tmp2601;
                org$pandalanguage$pandac$Type** $tmp2603 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12585->$data + 16));
                _f12602 = *$tmp2603;
                org$pandalanguage$pandac$IRNode** $tmp2605 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 24));
                _f22604 = *$tmp2605;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2607 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12585->$data + 32));
                _f32606 = *$tmp2607;
                org$pandalanguage$pandac$IRNode** $tmp2609 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 40));
                _f42608 = *$tmp2609;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12602));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22604));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42608));
            }
            }
            else {
            panda$core$Bit $tmp2610 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp2610.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2612 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02611 = *$tmp2612;
                org$pandalanguage$pandac$Type** $tmp2614 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12585->$data + 16));
                _f12613 = *$tmp2614;
                panda$core$Bit* $tmp2616 = ((panda$core$Bit*) ((char*) $match$5_12585->$data + 24));
                _f22615 = *$tmp2616;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12613));
            }
            }
            else {
            panda$core$Bit $tmp2617 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 4 }));
            if ($tmp2617.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2619 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02618 = *$tmp2619;
                panda$collections$ImmutableArray** $tmp2621 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12585->$data + 16));
                _f12620 = *$tmp2621;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12620));
            }
            }
            else {
            panda$core$Bit $tmp2622 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 5 }));
            if ($tmp2622.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2624 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02623 = *$tmp2624;
                panda$collections$ImmutableArray** $tmp2626 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12585->$data + 16));
                _f12625 = *$tmp2626;
                panda$collections$ImmutableArray** $tmp2628 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12585->$data + 24));
                _f22627 = *$tmp2628;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12625));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22627));
            }
            }
            else {
            panda$core$Bit $tmp2629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 6 }));
            if ($tmp2629.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2631 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02630 = *$tmp2631;
                panda$core$String** $tmp2633 = ((panda$core$String**) ((char*) $match$5_12585->$data + 16));
                _f12632 = *$tmp2633;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12632));
            }
            }
            else {
            panda$core$Bit $tmp2634 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 7 }));
            if ($tmp2634.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2636 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02635 = *$tmp2636;
                org$pandalanguage$pandac$Type** $tmp2638 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12585->$data + 16));
                _f12637 = *$tmp2638;
                org$pandalanguage$pandac$MethodRef** $tmp2640 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_12585->$data + 24));
                _f22639 = *$tmp2640;
                panda$collections$ImmutableArray** $tmp2642 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12585->$data + 32));
                _f32641 = *$tmp2642;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12637));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22639));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32641));
            }
            }
            else {
            panda$core$Bit $tmp2643 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 8 }));
            if ($tmp2643.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2645 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02644 = *$tmp2645;
                org$pandalanguage$pandac$IRNode** $tmp2647 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 16));
                _f12646 = *$tmp2647;
                org$pandalanguage$pandac$Type** $tmp2649 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12585->$data + 24));
                _f22648 = *$tmp2649;
                panda$core$Bit* $tmp2651 = ((panda$core$Bit*) ((char*) $match$5_12585->$data + 32));
                _f32650 = *$tmp2651;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12646));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22648));
            }
            }
            else {
            panda$core$Bit $tmp2652 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 9 }));
            if ($tmp2652.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2654 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02653 = *$tmp2654;
                org$pandalanguage$pandac$ChoiceEntry** $tmp2656 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_12585->$data + 16));
                _f12655 = *$tmp2656;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12655));
            }
            }
            else {
            panda$core$Bit $tmp2657 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 10 }));
            if ($tmp2657.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2659 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02658 = *$tmp2659;
                org$pandalanguage$pandac$IRNode** $tmp2661 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 16));
                _f12660 = *$tmp2661;
                org$pandalanguage$pandac$ChoiceEntry** $tmp2663 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_12585->$data + 24));
                _f22662 = *$tmp2663;
                panda$core$Int64* $tmp2665 = ((panda$core$Int64*) ((char*) $match$5_12585->$data + 32));
                _f32664 = *$tmp2665;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12660));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22662));
            }
            }
            else {
            panda$core$Bit $tmp2666 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp2666.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2668 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02667 = *$tmp2668;
                org$pandalanguage$pandac$Type** $tmp2670 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12585->$data + 16));
                _f12669 = *$tmp2670;
                org$pandalanguage$pandac$IRNode** $tmp2672 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 24));
                _f22671 = *$tmp2672;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12669));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22671));
            }
            }
            else {
            panda$core$Bit $tmp2673 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp2673.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2675 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02674 = *$tmp2675;
                org$pandalanguage$pandac$Type** $tmp2677 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12585->$data + 16));
                _f12676 = *$tmp2677;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12676));
            }
            }
            else {
            panda$core$Bit $tmp2678 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp2678.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2680 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02679 = *$tmp2680;
                panda$core$String** $tmp2682 = ((panda$core$String**) ((char*) $match$5_12585->$data + 16));
                _f12681 = *$tmp2682;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12681));
            }
            }
            else {
            panda$core$Bit $tmp2683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 14 }));
            if ($tmp2683.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2685 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 0));
                _f02684 = *$tmp2685;
                org$pandalanguage$pandac$IRNode** $tmp2687 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 8));
                _f12686 = *$tmp2687;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02684));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12686));
            }
            }
            else {
            panda$core$Bit $tmp2688 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 15 }));
            if ($tmp2688.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2690 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02689 = *$tmp2690;
                panda$core$String** $tmp2692 = ((panda$core$String**) ((char*) $match$5_12585->$data + 16));
                _f12691 = *$tmp2692;
                panda$collections$ImmutableArray** $tmp2694 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12585->$data + 24));
                _f22693 = *$tmp2694;
                org$pandalanguage$pandac$IRNode** $tmp2696 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 32));
                _f32695 = *$tmp2696;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12691));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22693));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32695));
            }
            }
            else {
            panda$core$Bit $tmp2697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 16 }));
            if ($tmp2697.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2699 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 0));
                _f02698 = *$tmp2699;
                panda$collections$ImmutableArray** $tmp2701 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12585->$data + 8));
                _f12700 = *$tmp2701;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02698));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12700));
            }
            }
            else {
            panda$core$Bit $tmp2702 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp2702.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2704 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 0));
                _f02703 = *$tmp2704;
                org$pandalanguage$pandac$IRNode** $tmp2706 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 8));
                _f12705 = *$tmp2706;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02703));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12705));
            }
            }
            else {
            panda$core$Bit $tmp2707 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp2707.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2709 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02708 = *$tmp2709;
                org$pandalanguage$pandac$Type** $tmp2711 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12585->$data + 16));
                _f12710 = *$tmp2711;
                org$pandalanguage$pandac$IRNode** $tmp2713 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 24));
                _f22712 = *$tmp2713;
                org$pandalanguage$pandac$FieldDecl** $tmp2715 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$5_12585->$data + 32));
                _f32714 = *$tmp2715;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12710));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22712));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32714));
            }
            }
            else {
            panda$core$Bit $tmp2716 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp2716.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2718 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02717 = *$tmp2718;
                org$pandalanguage$pandac$IRNode** $tmp2720 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 16));
                _f12719 = *$tmp2720;
                panda$collections$ImmutableArray** $tmp2722 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12585->$data + 24));
                _f22721 = *$tmp2722;
                org$pandalanguage$pandac$IRNode** $tmp2724 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 32));
                _f32723 = *$tmp2724;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12719));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22721));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32723));
            }
            }
            else {
            panda$core$Bit $tmp2725 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 20 }));
            if ($tmp2725.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2727 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02726 = *$tmp2727;
                org$pandalanguage$pandac$Type** $tmp2729 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12585->$data + 16));
                _f12728 = *$tmp2729;
                panda$core$UInt64* $tmp2731 = ((panda$core$UInt64*) ((char*) $match$5_12585->$data + 24));
                _f22730 = *$tmp2731;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12728));
            }
            }
            else {
            panda$core$Bit $tmp2732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 21 }));
            if ($tmp2732.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2734 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02733 = *$tmp2734;
                org$pandalanguage$pandac$IRNode** $tmp2736 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 16));
                _f12735 = *$tmp2736;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12735));
            }
            }
            else {
            panda$core$Bit $tmp2737 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 22 }));
            if ($tmp2737.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2739 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02738 = *$tmp2739;
                org$pandalanguage$pandac$IRNode** $tmp2741 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 16));
                _f12740 = *$tmp2741;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12740));
            }
            }
            else {
            panda$core$Bit $tmp2742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 23 }));
            if ($tmp2742.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2744 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02743 = *$tmp2744;
                panda$core$String** $tmp2746 = ((panda$core$String**) ((char*) $match$5_12585->$data + 16));
                _f12745 = *$tmp2746;
                panda$collections$ImmutableArray** $tmp2748 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12585->$data + 24));
                _f22747 = *$tmp2748;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12745));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22747));
            }
            }
            else {
            panda$core$Bit $tmp2749 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 24 }));
            if ($tmp2749.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2751 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02750 = *$tmp2751;
                org$pandalanguage$pandac$IRNode** $tmp2753 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 16));
                _f12752 = *$tmp2753;
                panda$collections$ImmutableArray** $tmp2755 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12585->$data + 24));
                _f22754 = *$tmp2755;
                panda$collections$ImmutableArray** $tmp2757 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12585->$data + 32));
                _f32756 = *$tmp2757;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12752));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22754));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32756));
            }
            }
            else {
            panda$core$Bit $tmp2758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 25 }));
            if ($tmp2758.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2760 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02759 = *$tmp2760;
                org$pandalanguage$pandac$IRNode** $tmp2762 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 16));
                _f12761 = *$tmp2762;
                org$pandalanguage$pandac$MethodRef** $tmp2764 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_12585->$data + 24));
                _f22763 = *$tmp2764;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12761));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22763));
            }
            }
            else {
            panda$core$Bit $tmp2765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 26 }));
            if ($tmp2765.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2767 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02766 = *$tmp2767;
                org$pandalanguage$pandac$Type** $tmp2769 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12585->$data + 16));
                _f12768 = *$tmp2769;
                panda$core$UInt64* $tmp2771 = ((panda$core$UInt64*) ((char*) $match$5_12585->$data + 24));
                _f22770 = *$tmp2771;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12768));
            }
            }
            else {
            panda$core$Bit $tmp2772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 27 }));
            if ($tmp2772.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2774 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02773 = *$tmp2774;
                org$pandalanguage$pandac$Type** $tmp2776 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12585->$data + 16));
                _f12775 = *$tmp2776;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12775));
            }
            }
            else {
            panda$core$Bit $tmp2777 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 28 }));
            if ($tmp2777.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2779 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02778 = *$tmp2779;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2781 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12585->$data + 16));
                _f12780 = *$tmp2781;
                org$pandalanguage$pandac$IRNode** $tmp2783 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 24));
                _f22782 = *$tmp2783;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22782));
            }
            }
            else {
            panda$core$Bit $tmp2784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 29 }));
            if ($tmp2784.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2786 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02785 = *$tmp2786;
                panda$core$String** $tmp2788 = ((panda$core$String**) ((char*) $match$5_12585->$data + 16));
                _f12787 = *$tmp2788;
                org$pandalanguage$pandac$IRNode** $tmp2790 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 24));
                _f22789 = *$tmp2790;
                org$pandalanguage$pandac$IRNode** $tmp2792 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 32));
                _f32791 = *$tmp2792;
                panda$collections$ImmutableArray** $tmp2794 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12585->$data + 40));
                _f42793 = *$tmp2794;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12787));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22789));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32791));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42793));
            }
            }
            else {
            panda$core$Bit $tmp2795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 30 }));
            if ($tmp2795.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2797 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02796 = *$tmp2797;
                org$pandalanguage$pandac$Type** $tmp2799 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12585->$data + 16));
                _f12798 = *$tmp2799;
                panda$core$Real64* $tmp2801 = ((panda$core$Real64*) ((char*) $match$5_12585->$data + 24));
                _f22800 = *$tmp2801;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12798));
            }
            }
            else {
            panda$core$Bit $tmp2802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 31 }));
            if ($tmp2802.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2804 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02803 = *$tmp2804;
                org$pandalanguage$pandac$IRNode** $tmp2806 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 16));
                _f12805 = *$tmp2806;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12805));
            }
            }
            else {
            panda$core$Bit $tmp2807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 32 }));
            if ($tmp2807.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2809 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02808 = *$tmp2809;
                org$pandalanguage$pandac$Type** $tmp2811 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12585->$data + 16));
                _f12810 = *$tmp2811;
                panda$core$Int64* $tmp2813 = ((panda$core$Int64*) ((char*) $match$5_12585->$data + 24));
                _f22812 = *$tmp2813;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12810));
            }
            }
            else {
            panda$core$Bit $tmp2814 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp2814.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2816 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 0));
                _f02815 = *$tmp2816;
                panda$core$Int64* $tmp2818 = ((panda$core$Int64*) ((char*) $match$5_12585->$data + 8));
                _f12817 = *$tmp2818;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02815));
            }
            }
            else {
            panda$core$Bit $tmp2819 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp2819.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2821 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02820 = *$tmp2821;
                org$pandalanguage$pandac$Type** $tmp2823 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12585->$data + 16));
                _f12822 = *$tmp2823;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12822));
            }
            }
            else {
            panda$core$Bit $tmp2824 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 35 }));
            if ($tmp2824.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2826 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02825 = *$tmp2826;
                panda$core$String** $tmp2828 = ((panda$core$String**) ((char*) $match$5_12585->$data + 16));
                _f12827 = *$tmp2828;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12827));
            }
            }
            else {
            panda$core$Bit $tmp2829 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 36 }));
            if ($tmp2829.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2831 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02830 = *$tmp2831;
                org$pandalanguage$pandac$Type** $tmp2833 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12585->$data + 16));
                _f12832 = *$tmp2833;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12832));
            }
            }
            else {
            panda$core$Bit $tmp2834 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 37 }));
            if ($tmp2834.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2836 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02835 = *$tmp2836;
                org$pandalanguage$pandac$IRNode** $tmp2838 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 16));
                _f12837 = *$tmp2838;
                org$pandalanguage$pandac$IRNode** $tmp2840 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 24));
                _f22839 = *$tmp2840;
                org$pandalanguage$pandac$IRNode** $tmp2842 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 32));
                _f32841 = *$tmp2842;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12837));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22839));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32841));
            }
            }
            else {
            panda$core$Bit $tmp2843 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 38 }));
            if ($tmp2843.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2845 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02844 = *$tmp2845;
                org$pandalanguage$pandac$Type** $tmp2847 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12585->$data + 16));
                _f12846 = *$tmp2847;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12846));
            }
            }
            else {
            panda$core$Bit $tmp2848 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp2848.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2850 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02849 = *$tmp2850;
                panda$core$String** $tmp2852 = ((panda$core$String**) ((char*) $match$5_12585->$data + 16));
                _f12851 = *$tmp2852;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12851));
            }
            }
            else {
            panda$core$Bit $tmp2853 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 40 }));
            if ($tmp2853.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2855 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02854 = *$tmp2855;
                org$pandalanguage$pandac$Type** $tmp2857 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12585->$data + 16));
                _f12856 = *$tmp2857;
                org$pandalanguage$pandac$IRNode** $tmp2859 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 24));
                _f22858 = *$tmp2859;
                panda$collections$ImmutableArray** $tmp2861 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12585->$data + 32));
                _f32860 = *$tmp2861;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12856));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22858));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32860));
            }
            }
            else {
            panda$core$Bit $tmp2862 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 41 }));
            if ($tmp2862.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2864 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02863 = *$tmp2864;
                org$pandalanguage$pandac$Type** $tmp2866 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12585->$data + 16));
                _f12865 = *$tmp2866;
                org$pandalanguage$pandac$IRNode** $tmp2868 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 24));
                _f22867 = *$tmp2868;
                panda$collections$ImmutableArray** $tmp2870 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12585->$data + 32));
                _f32869 = *$tmp2870;
                panda$collections$ImmutableArray** $tmp2872 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12585->$data + 40));
                _f42871 = *$tmp2872;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12865));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22867));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32869));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42871));
            }
            }
            else {
            panda$core$Bit $tmp2873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 42 }));
            if ($tmp2873.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2875 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02874 = *$tmp2875;
                org$pandalanguage$pandac$IRNode** $tmp2877 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 16));
                _f12876 = *$tmp2877;
                panda$collections$ImmutableArray** $tmp2879 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12585->$data + 24));
                _f22878 = *$tmp2879;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12876));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22878));
            }
            }
            else {
            panda$core$Bit $tmp2880 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 43 }));
            if ($tmp2880.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2882 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02881 = *$tmp2882;
                org$pandalanguage$pandac$IRNode** $tmp2884 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 16));
                _f12883 = *$tmp2884;
                org$pandalanguage$pandac$IRNode** $tmp2886 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 24));
                _f22885 = *$tmp2886;
                panda$core$Bit* $tmp2888 = ((panda$core$Bit*) ((char*) $match$5_12585->$data + 32));
                _f32887 = *$tmp2888;
                org$pandalanguage$pandac$IRNode** $tmp2890 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 33));
                _f42889 = *$tmp2890;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12883));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22885));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42889));
            }
            }
            else {
            panda$core$Bit $tmp2891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 44 }));
            if ($tmp2891.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2893 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02892 = *$tmp2893;
                org$pandalanguage$pandac$Variable$Kind* $tmp2895 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_12585->$data + 16));
                _f12894 = *$tmp2895;
                panda$collections$ImmutableArray** $tmp2897 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12585->$data + 24));
                _f22896 = *$tmp2897;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22896));
            }
            }
            else {
            panda$core$Bit $tmp2898 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 45 }));
            if ($tmp2898.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2900 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02899 = *$tmp2900;
                org$pandalanguage$pandac$Variable** $tmp2902 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$5_12585->$data + 16));
                _f12901 = *$tmp2902;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12901));
            }
            }
            else {
            panda$core$Bit $tmp2903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 46 }));
            if ($tmp2903.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2905 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02904 = *$tmp2905;
                panda$collections$ImmutableArray** $tmp2907 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12585->$data + 16));
                _f12906 = *$tmp2907;
                panda$collections$ImmutableArray** $tmp2909 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12585->$data + 24));
                _f22908 = *$tmp2909;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12906));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22908));
            }
            }
            else {
            panda$core$Bit $tmp2910 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12585->$rawValue, ((panda$core$Int64) { 47 }));
            if ($tmp2910.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2912 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12585->$data + 0));
                _f02911 = *$tmp2912;
                panda$core$String** $tmp2914 = ((panda$core$String**) ((char*) $match$5_12585->$data + 16));
                _f12913 = *$tmp2914;
                org$pandalanguage$pandac$IRNode** $tmp2916 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12585->$data + 24));
                _f22915 = *$tmp2916;
                panda$collections$ImmutableArray** $tmp2918 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12585->$data + 32));
                _f32917 = *$tmp2918;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12913));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22915));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32917));
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
        }
        $tmp2584 = -1;
        goto $l2582;
        $l2582:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2586));
        switch ($tmp2584) {
            case -1: goto $l2919;
        }
        $l2919:;
    }
    $tmp2581 = -1;
    goto $l2579;
    $l2579:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2581) {
        case -1: goto $l2920;
    }
    $l2920:;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp2922;
    org$pandalanguage$pandac$IRNode* $tmp2925;
    org$pandalanguage$pandac$IRNode* $tmp2926;
    org$pandalanguage$pandac$IRNode* $tmp2929;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2921 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2921 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp2923 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp2922 = *$tmp2923;
        org$pandalanguage$pandac$IRNode** $tmp2924 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp2925 = p_f1;
        *$tmp2924 = $tmp2925;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2925));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2922));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp2927 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp2926 = *$tmp2927;
        org$pandalanguage$pandac$IRNode** $tmp2928 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp2929 = p_f2;
        *$tmp2928 = $tmp2929;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2929));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2926));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1) {
    org$pandalanguage$pandac$Type* $tmp2931;
    org$pandalanguage$pandac$Type* $tmp2934;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2930 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2930 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp2932 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2931 = *$tmp2932;
        org$pandalanguage$pandac$Type** $tmp2933 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2934 = p_f1;
        *$tmp2933 = $tmp2934;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2934));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2931));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$parser$Token$Kind p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$Type* $tmp2936;
    org$pandalanguage$pandac$Type* $tmp2939;
    org$pandalanguage$pandac$IRNode* $tmp2940;
    org$pandalanguage$pandac$IRNode* $tmp2943;
    org$pandalanguage$pandac$IRNode* $tmp2945;
    org$pandalanguage$pandac$IRNode* $tmp2948;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2935 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2935 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp2937 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2936 = *$tmp2937;
        org$pandalanguage$pandac$Type** $tmp2938 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2939 = p_f1;
        *$tmp2938 = $tmp2939;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2939));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2936));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp2941 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp2940 = *$tmp2941;
        org$pandalanguage$pandac$IRNode** $tmp2942 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp2943 = p_f2;
        *$tmp2942 = $tmp2943;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2943));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2940));
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2944 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 32));
    *$tmp2944 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp2946 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        $tmp2945 = *$tmp2946;
        org$pandalanguage$pandac$IRNode** $tmp2947 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        $tmp2948 = p_f4;
        *$tmp2947 = $tmp2948;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2948));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2945));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Bit p_f2) {
    org$pandalanguage$pandac$Type* $tmp2950;
    org$pandalanguage$pandac$Type* $tmp2953;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2949 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2949 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp2951 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2950 = *$tmp2951;
        org$pandalanguage$pandac$Type** $tmp2952 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2953 = p_f1;
        *$tmp2952 = $tmp2953;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2953));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2950));
    }
    panda$core$Bit* $tmp2954 = ((panda$core$Bit*) ((char*) self->$data + 24));
    *$tmp2954 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    panda$collections$ImmutableArray* $tmp2956;
    panda$collections$ImmutableArray* $tmp2959;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2955 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2955 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2957 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2956 = *$tmp2957;
        panda$collections$ImmutableArray** $tmp2958 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2959 = p_f1;
        *$tmp2958 = $tmp2959;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2959));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2956));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp2961;
    panda$collections$ImmutableArray* $tmp2964;
    panda$collections$ImmutableArray* $tmp2965;
    panda$collections$ImmutableArray* $tmp2968;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2960 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2960 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2962 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2961 = *$tmp2962;
        panda$collections$ImmutableArray** $tmp2963 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2964 = p_f1;
        *$tmp2963 = $tmp2964;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2964));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2961));
    }
    {
        panda$collections$ImmutableArray** $tmp2966 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2965 = *$tmp2966;
        panda$collections$ImmutableArray** $tmp2967 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2968 = p_f2;
        *$tmp2967 = $tmp2968;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2968));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2965));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp2970;
    panda$core$String* $tmp2973;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2969 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2969 = p_f0;
    {
        panda$core$String** $tmp2971 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2970 = *$tmp2971;
        panda$core$String** $tmp2972 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2973 = p_f1;
        *$tmp2972 = $tmp2973;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2973));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2970));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$MethodRef* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp2975;
    org$pandalanguage$pandac$Type* $tmp2978;
    org$pandalanguage$pandac$MethodRef* $tmp2979;
    org$pandalanguage$pandac$MethodRef* $tmp2982;
    panda$collections$ImmutableArray* $tmp2983;
    panda$collections$ImmutableArray* $tmp2986;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2974 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2974 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp2976 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2975 = *$tmp2976;
        org$pandalanguage$pandac$Type** $tmp2977 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2978 = p_f1;
        *$tmp2977 = $tmp2978;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2978));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2975));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp2980 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp2979 = *$tmp2980;
        org$pandalanguage$pandac$MethodRef** $tmp2981 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp2982 = p_f2;
        *$tmp2981 = $tmp2982;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2982));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2979));
    }
    {
        panda$collections$ImmutableArray** $tmp2984 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2983 = *$tmp2984;
        panda$collections$ImmutableArray** $tmp2985 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2986 = p_f3;
        *$tmp2985 = $tmp2986;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2986));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2983));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$Type* p_f2, panda$core$Bit p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp2988;
    org$pandalanguage$pandac$IRNode* $tmp2991;
    org$pandalanguage$pandac$Type* $tmp2992;
    org$pandalanguage$pandac$Type* $tmp2995;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2987 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2987 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp2989 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp2988 = *$tmp2989;
        org$pandalanguage$pandac$IRNode** $tmp2990 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp2991 = p_f1;
        *$tmp2990 = $tmp2991;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2991));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2988));
    }
    {
        org$pandalanguage$pandac$Type** $tmp2993 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp2992 = *$tmp2993;
        org$pandalanguage$pandac$Type** $tmp2994 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp2995 = p_f2;
        *$tmp2994 = $tmp2995;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2995));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2992));
    }
    panda$core$Bit* $tmp2996 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp2996 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ChoiceEntry(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ChoiceEntry* p_f1) {
    org$pandalanguage$pandac$ChoiceEntry* $tmp2998;
    org$pandalanguage$pandac$ChoiceEntry* $tmp3001;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2997 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2997 = p_f0;
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp2999 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        $tmp2998 = *$tmp2999;
        org$pandalanguage$pandac$ChoiceEntry** $tmp3000 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        $tmp3001 = p_f1;
        *$tmp3000 = $tmp3001;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3001));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2998));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3003;
    org$pandalanguage$pandac$IRNode* $tmp3006;
    org$pandalanguage$pandac$ChoiceEntry* $tmp3007;
    org$pandalanguage$pandac$ChoiceEntry* $tmp3010;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3002 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3002 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3004 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3003 = *$tmp3004;
        org$pandalanguage$pandac$IRNode** $tmp3005 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3006 = p_f1;
        *$tmp3005 = $tmp3006;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3006));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3003));
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp3008 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp3007 = *$tmp3008;
        org$pandalanguage$pandac$ChoiceEntry** $tmp3009 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp3010 = p_f2;
        *$tmp3009 = $tmp3010;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3010));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3007));
    }
    panda$core$Int64* $tmp3011 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp3011 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$Type* $tmp3013;
    org$pandalanguage$pandac$Type* $tmp3016;
    org$pandalanguage$pandac$IRNode* $tmp3017;
    org$pandalanguage$pandac$IRNode* $tmp3020;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3012 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3012 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3014 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3013 = *$tmp3014;
        org$pandalanguage$pandac$Type** $tmp3015 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3016 = p_f1;
        *$tmp3015 = $tmp3016;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3016));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3013));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3018 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3017 = *$tmp3018;
        org$pandalanguage$pandac$IRNode** $tmp3019 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3020 = p_f2;
        *$tmp3019 = $tmp3020;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3020));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3017));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3021;
    org$pandalanguage$pandac$IRNode* $tmp3024;
    org$pandalanguage$pandac$IRNode* $tmp3025;
    org$pandalanguage$pandac$IRNode* $tmp3028;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3022 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3021 = *$tmp3022;
        org$pandalanguage$pandac$IRNode** $tmp3023 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3024 = p_f0;
        *$tmp3023 = $tmp3024;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3024));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3021));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3026 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3025 = *$tmp3026;
        org$pandalanguage$pandac$IRNode** $tmp3027 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3028 = p_f1;
        *$tmp3027 = $tmp3028;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3028));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3025));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    panda$core$String* $tmp3030;
    panda$core$String* $tmp3033;
    panda$collections$ImmutableArray* $tmp3034;
    panda$collections$ImmutableArray* $tmp3037;
    org$pandalanguage$pandac$IRNode* $tmp3038;
    org$pandalanguage$pandac$IRNode* $tmp3041;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3029 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3029 = p_f0;
    {
        panda$core$String** $tmp3031 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3030 = *$tmp3031;
        panda$core$String** $tmp3032 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3033 = p_f1;
        *$tmp3032 = $tmp3033;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3033));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3030));
    }
    {
        panda$collections$ImmutableArray** $tmp3035 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3034 = *$tmp3035;
        panda$collections$ImmutableArray** $tmp3036 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3037 = p_f2;
        *$tmp3036 = $tmp3037;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3037));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3034));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3039 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3038 = *$tmp3039;
        org$pandalanguage$pandac$IRNode** $tmp3040 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3041 = p_f3;
        *$tmp3040 = $tmp3041;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3041));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3038));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$collections$ImmutableArray* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3042;
    org$pandalanguage$pandac$IRNode* $tmp3045;
    panda$collections$ImmutableArray* $tmp3046;
    panda$collections$ImmutableArray* $tmp3049;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3043 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3042 = *$tmp3043;
        org$pandalanguage$pandac$IRNode** $tmp3044 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3045 = p_f0;
        *$tmp3044 = $tmp3045;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3045));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3042));
    }
    {
        panda$collections$ImmutableArray** $tmp3047 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 8));
        $tmp3046 = *$tmp3047;
        panda$collections$ImmutableArray** $tmp3048 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 8));
        $tmp3049 = p_f1;
        *$tmp3048 = $tmp3049;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3049));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3046));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3050;
    org$pandalanguage$pandac$IRNode* $tmp3053;
    org$pandalanguage$pandac$IRNode* $tmp3054;
    org$pandalanguage$pandac$IRNode* $tmp3057;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3051 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3050 = *$tmp3051;
        org$pandalanguage$pandac$IRNode** $tmp3052 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3053 = p_f0;
        *$tmp3052 = $tmp3053;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3053));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3050));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3055 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3054 = *$tmp3055;
        org$pandalanguage$pandac$IRNode** $tmp3056 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp3057 = p_f1;
        *$tmp3056 = $tmp3057;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3057));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3054));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$FieldDecl* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3059;
    org$pandalanguage$pandac$Type* $tmp3062;
    org$pandalanguage$pandac$IRNode* $tmp3063;
    org$pandalanguage$pandac$IRNode* $tmp3066;
    org$pandalanguage$pandac$FieldDecl* $tmp3067;
    org$pandalanguage$pandac$FieldDecl* $tmp3070;
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
    {
        org$pandalanguage$pandac$IRNode** $tmp3064 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3063 = *$tmp3064;
        org$pandalanguage$pandac$IRNode** $tmp3065 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3066 = p_f2;
        *$tmp3065 = $tmp3066;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3066));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3063));
    }
    {
        org$pandalanguage$pandac$FieldDecl** $tmp3068 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp3067 = *$tmp3068;
        org$pandalanguage$pandac$FieldDecl** $tmp3069 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp3070 = p_f3;
        *$tmp3069 = $tmp3070;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3070));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3067));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3072;
    org$pandalanguage$pandac$IRNode* $tmp3075;
    panda$collections$ImmutableArray* $tmp3076;
    panda$collections$ImmutableArray* $tmp3079;
    org$pandalanguage$pandac$IRNode* $tmp3080;
    org$pandalanguage$pandac$IRNode* $tmp3083;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3071 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3071 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3073 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3072 = *$tmp3073;
        org$pandalanguage$pandac$IRNode** $tmp3074 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3075 = p_f1;
        *$tmp3074 = $tmp3075;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3075));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3072));
    }
    {
        panda$collections$ImmutableArray** $tmp3077 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3076 = *$tmp3077;
        panda$collections$ImmutableArray** $tmp3078 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3079 = p_f2;
        *$tmp3078 = $tmp3079;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3079));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3076));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3081 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3080 = *$tmp3081;
        org$pandalanguage$pandac$IRNode** $tmp3082 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3083 = p_f3;
        *$tmp3082 = $tmp3083;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3083));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3080));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$UInt64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3085;
    org$pandalanguage$pandac$Type* $tmp3088;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3084 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3084 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3086 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3085 = *$tmp3086;
        org$pandalanguage$pandac$Type** $tmp3087 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3088 = p_f1;
        *$tmp3087 = $tmp3088;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3088));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3085));
    }
    panda$core$UInt64* $tmp3089 = ((panda$core$UInt64*) ((char*) self->$data + 24));
    *$tmp3089 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3091;
    org$pandalanguage$pandac$IRNode* $tmp3094;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3090 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3090 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3092 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3091 = *$tmp3092;
        org$pandalanguage$pandac$IRNode** $tmp3093 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3094 = p_f1;
        *$tmp3093 = $tmp3094;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3094));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3091));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp3096;
    panda$core$String* $tmp3099;
    panda$collections$ImmutableArray* $tmp3100;
    panda$collections$ImmutableArray* $tmp3103;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3095 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3095 = p_f0;
    {
        panda$core$String** $tmp3097 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3096 = *$tmp3097;
        panda$core$String** $tmp3098 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3099 = p_f1;
        *$tmp3098 = $tmp3099;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3099));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3096));
    }
    {
        panda$collections$ImmutableArray** $tmp3101 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3100 = *$tmp3101;
        panda$collections$ImmutableArray** $tmp3102 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3103 = p_f2;
        *$tmp3102 = $tmp3103;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3103));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3100));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3105;
    org$pandalanguage$pandac$IRNode* $tmp3108;
    panda$collections$ImmutableArray* $tmp3109;
    panda$collections$ImmutableArray* $tmp3112;
    panda$collections$ImmutableArray* $tmp3113;
    panda$collections$ImmutableArray* $tmp3116;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3104 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3104 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3106 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3105 = *$tmp3106;
        org$pandalanguage$pandac$IRNode** $tmp3107 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
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
        panda$collections$ImmutableArray** $tmp3114 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3113 = *$tmp3114;
        panda$collections$ImmutableArray** $tmp3115 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3116 = p_f3;
        *$tmp3115 = $tmp3116;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3116));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3113));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$MethodRef* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3118;
    org$pandalanguage$pandac$IRNode* $tmp3121;
    org$pandalanguage$pandac$MethodRef* $tmp3122;
    org$pandalanguage$pandac$MethodRef* $tmp3125;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3117 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3117 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3119 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3118 = *$tmp3119;
        org$pandalanguage$pandac$IRNode** $tmp3120 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3121 = p_f1;
        *$tmp3120 = $tmp3121;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3121));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3118));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp3123 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp3122 = *$tmp3123;
        org$pandalanguage$pandac$MethodRef** $tmp3124 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp3125 = p_f2;
        *$tmp3124 = $tmp3125;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3125));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3122));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3128;
    org$pandalanguage$pandac$IRNode* $tmp3131;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3126 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3126 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp3127 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp3127 = p_f1;
    {
        org$pandalanguage$pandac$IRNode** $tmp3129 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3128 = *$tmp3129;
        org$pandalanguage$pandac$IRNode** $tmp3130 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3131 = p_f2;
        *$tmp3130 = $tmp3131;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3131));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3128));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    panda$core$String* $tmp3133;
    panda$core$String* $tmp3136;
    org$pandalanguage$pandac$IRNode* $tmp3137;
    org$pandalanguage$pandac$IRNode* $tmp3140;
    org$pandalanguage$pandac$IRNode* $tmp3141;
    org$pandalanguage$pandac$IRNode* $tmp3144;
    panda$collections$ImmutableArray* $tmp3145;
    panda$collections$ImmutableArray* $tmp3148;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3132 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3132 = p_f0;
    {
        panda$core$String** $tmp3134 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3133 = *$tmp3134;
        panda$core$String** $tmp3135 = ((panda$core$String**) ((char*) self->$data + 16));
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
        org$pandalanguage$pandac$IRNode** $tmp3142 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3141 = *$tmp3142;
        org$pandalanguage$pandac$IRNode** $tmp3143 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3144 = p_f3;
        *$tmp3143 = $tmp3144;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3144));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3141));
    }
    {
        panda$collections$ImmutableArray** $tmp3146 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3145 = *$tmp3146;
        panda$collections$ImmutableArray** $tmp3147 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3148 = p_f4;
        *$tmp3147 = $tmp3148;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3148));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3145));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Real64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3150;
    org$pandalanguage$pandac$Type* $tmp3153;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3149 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3149 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3151 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3150 = *$tmp3151;
        org$pandalanguage$pandac$Type** $tmp3152 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3153 = p_f1;
        *$tmp3152 = $tmp3153;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3153));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3150));
    }
    panda$core$Real64* $tmp3154 = ((panda$core$Real64*) ((char*) self->$data + 24));
    *$tmp3154 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3156;
    org$pandalanguage$pandac$IRNode* $tmp3159;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3155 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3155 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3157 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3156 = *$tmp3157;
        org$pandalanguage$pandac$IRNode** $tmp3158 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3159 = p_f1;
        *$tmp3158 = $tmp3159;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3159));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3156));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Int64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3161;
    org$pandalanguage$pandac$Type* $tmp3164;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3160 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3160 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3162 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3161 = *$tmp3162;
        org$pandalanguage$pandac$Type** $tmp3163 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3164 = p_f1;
        *$tmp3163 = $tmp3164;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3164));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3161));
    }
    panda$core$Int64* $tmp3165 = ((panda$core$Int64*) ((char*) self->$data + 24));
    *$tmp3165 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$core$Int64 p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3166;
    org$pandalanguage$pandac$IRNode* $tmp3169;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3167 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3166 = *$tmp3167;
        org$pandalanguage$pandac$IRNode** $tmp3168 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3169 = p_f0;
        *$tmp3168 = $tmp3169;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3169));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3166));
    }
    panda$core$Int64* $tmp3170 = ((panda$core$Int64*) ((char*) self->$data + 8));
    *$tmp3170 = p_f1;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp3172;
    panda$core$String* $tmp3175;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3171 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3171 = p_f0;
    {
        panda$core$String** $tmp3173 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3172 = *$tmp3173;
        panda$core$String** $tmp3174 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3175 = p_f1;
        *$tmp3174 = $tmp3175;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3175));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3172));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3177;
    org$pandalanguage$pandac$IRNode* $tmp3180;
    org$pandalanguage$pandac$IRNode* $tmp3181;
    org$pandalanguage$pandac$IRNode* $tmp3184;
    org$pandalanguage$pandac$IRNode* $tmp3185;
    org$pandalanguage$pandac$IRNode* $tmp3188;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3176 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3176 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3178 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3177 = *$tmp3178;
        org$pandalanguage$pandac$IRNode** $tmp3179 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
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
        org$pandalanguage$pandac$IRNode** $tmp3186 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3185 = *$tmp3186;
        org$pandalanguage$pandac$IRNode** $tmp3187 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3188 = p_f3;
        *$tmp3187 = $tmp3188;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3188));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3185));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3190;
    org$pandalanguage$pandac$Type* $tmp3193;
    org$pandalanguage$pandac$IRNode* $tmp3194;
    org$pandalanguage$pandac$IRNode* $tmp3197;
    panda$collections$ImmutableArray* $tmp3198;
    panda$collections$ImmutableArray* $tmp3201;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3189 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3189 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3191 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3190 = *$tmp3191;
        org$pandalanguage$pandac$Type** $tmp3192 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3193 = p_f1;
        *$tmp3192 = $tmp3193;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3193));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3190));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3195 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3194 = *$tmp3195;
        org$pandalanguage$pandac$IRNode** $tmp3196 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3197 = p_f2;
        *$tmp3196 = $tmp3197;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3197));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3194));
    }
    {
        panda$collections$ImmutableArray** $tmp3199 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3198 = *$tmp3199;
        panda$collections$ImmutableArray** $tmp3200 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3201 = p_f3;
        *$tmp3200 = $tmp3201;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3201));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3198));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3, panda$collections$ImmutableArray* p_f4) {
    org$pandalanguage$pandac$Type* $tmp3203;
    org$pandalanguage$pandac$Type* $tmp3206;
    org$pandalanguage$pandac$IRNode* $tmp3207;
    org$pandalanguage$pandac$IRNode* $tmp3210;
    panda$collections$ImmutableArray* $tmp3211;
    panda$collections$ImmutableArray* $tmp3214;
    panda$collections$ImmutableArray* $tmp3215;
    panda$collections$ImmutableArray* $tmp3218;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3202 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3202 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3204 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3203 = *$tmp3204;
        org$pandalanguage$pandac$Type** $tmp3205 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
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
    {
        panda$collections$ImmutableArray** $tmp3212 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3211 = *$tmp3212;
        panda$collections$ImmutableArray** $tmp3213 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3214 = p_f3;
        *$tmp3213 = $tmp3214;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3214));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3211));
    }
    {
        panda$collections$ImmutableArray** $tmp3216 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3215 = *$tmp3216;
        panda$collections$ImmutableArray** $tmp3217 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3218 = p_f4;
        *$tmp3217 = $tmp3218;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3218));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3215));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3220;
    org$pandalanguage$pandac$IRNode* $tmp3223;
    panda$collections$ImmutableArray* $tmp3224;
    panda$collections$ImmutableArray* $tmp3227;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3219 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3219 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3221 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3220 = *$tmp3221;
        org$pandalanguage$pandac$IRNode** $tmp3222 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3223 = p_f1;
        *$tmp3222 = $tmp3223;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3223));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3220));
    }
    {
        panda$collections$ImmutableArray** $tmp3225 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3224 = *$tmp3225;
        panda$collections$ImmutableArray** $tmp3226 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3227 = p_f2;
        *$tmp3226 = $tmp3227;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3227));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3224));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$core$Bit$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$IRNode* $tmp3229;
    org$pandalanguage$pandac$IRNode* $tmp3232;
    org$pandalanguage$pandac$IRNode* $tmp3233;
    org$pandalanguage$pandac$IRNode* $tmp3236;
    org$pandalanguage$pandac$IRNode* $tmp3238;
    org$pandalanguage$pandac$IRNode* $tmp3241;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3228 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3228 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3230 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3229 = *$tmp3230;
        org$pandalanguage$pandac$IRNode** $tmp3231 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3232 = p_f1;
        *$tmp3231 = $tmp3232;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3232));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3229));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3234 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3233 = *$tmp3234;
        org$pandalanguage$pandac$IRNode** $tmp3235 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3236 = p_f2;
        *$tmp3235 = $tmp3236;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3236));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3233));
    }
    panda$core$Bit* $tmp3237 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp3237 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp3239 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp3238 = *$tmp3239;
        org$pandalanguage$pandac$IRNode** $tmp3240 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp3241 = p_f4;
        *$tmp3240 = $tmp3241;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3241));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3238));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp3244;
    panda$collections$ImmutableArray* $tmp3247;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3242 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3242 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp3243 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp3243 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp3245 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3244 = *$tmp3245;
        panda$collections$ImmutableArray** $tmp3246 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3247 = p_f2;
        *$tmp3246 = $tmp3247;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3247));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3244));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable* p_f1) {
    org$pandalanguage$pandac$Variable* $tmp3249;
    org$pandalanguage$pandac$Variable* $tmp3252;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3248 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3248 = p_f0;
    {
        org$pandalanguage$pandac$Variable** $tmp3250 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp3249 = *$tmp3250;
        org$pandalanguage$pandac$Variable** $tmp3251 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp3252 = p_f1;
        *$tmp3251 = $tmp3252;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3252));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3249));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    panda$core$String* $tmp3254;
    panda$core$String* $tmp3257;
    org$pandalanguage$pandac$IRNode* $tmp3258;
    org$pandalanguage$pandac$IRNode* $tmp3261;
    panda$collections$ImmutableArray* $tmp3262;
    panda$collections$ImmutableArray* $tmp3265;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3253 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3253 = p_f0;
    {
        panda$core$String** $tmp3255 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3254 = *$tmp3255;
        panda$core$String** $tmp3256 = ((panda$core$String**) ((char*) self->$data + 16));
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
        panda$collections$ImmutableArray** $tmp3263 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3262 = *$tmp3263;
        panda$collections$ImmutableArray** $tmp3264 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3265 = p_f3;
        *$tmp3264 = $tmp3265;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3265));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3262));
    }
}

