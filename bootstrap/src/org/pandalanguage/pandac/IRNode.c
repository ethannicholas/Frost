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
#include "org/pandalanguage/pandac/Type/Kind.h"
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

typedef org$pandalanguage$pandac$Type* (*$fn73)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn129)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn152)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn180)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn183)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Type* (*$fn188)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn309)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn321)(org$pandalanguage$pandac$IRNode*);
typedef org$pandalanguage$pandac$Position (*$fn403)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn490)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn493)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn512)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn516)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn537)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn544)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn555)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn557)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn588)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn595)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn606)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn608)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn644)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn665)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn677)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn689)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn696)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn707)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn709)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn736)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn748)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn755)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn766)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn768)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn776)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn788)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn795)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn812)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn819)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn830)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn832)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn849)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn861)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn868)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn879)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn881)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn897)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn904)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn915)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn917)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn947)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn960)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn972)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn979)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn990)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn992)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1010)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1024)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1048)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1051)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1055)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1107)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1114)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1125)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1127)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1155)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1162)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1173)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1175)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1191)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1198)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1209)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1211)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$Bit (*$fn1228)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1240)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1247)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1258)(panda$collections$Iterator*);
typedef panda$core$Bit (*$fn1260)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1324)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1365)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1372)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1383)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1419)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1426)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1437)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1453)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1460)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1471)(panda$collections$Iterator*);
typedef org$pandalanguage$pandac$Type* (*$fn1528)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1552)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1583)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1660)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1671)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1703)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1710)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1721)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1751)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn1770)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1807)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1814)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1825)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1904)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1911)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1922)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1965)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1972)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1983)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1999)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2006)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2017)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2042)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2082)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn2131)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2138)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2149)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn2291)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2316)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn2342)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn2477)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2484)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2495)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x49\x52\x4e\x6f\x64\x65", 31, -8857975469778350849, NULL };
static panda$core$String $s107 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c\x6d\x65\x74\x68\x6f\x64\x3e", 8, 17378158564789264, NULL };
static panda$core$String $s1287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s1289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s1292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s1301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1307 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s1326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1331 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s1386 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x74\x72\x79\x20\x7b\x0a", 6, 2292679699717, NULL };
static panda$core$String $s1440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x66\x69\x6e\x61\x6c\x6c\x79\x20\x7b\x0a", 12, -1355183944487068280, NULL };
static panda$core$String $s1474 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s1494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s1513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1538 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x4e\x54\x36\x34\x5f\x57\x52\x41\x50\x28", 11, -7093166379287162761, NULL };
static panda$core$String $s1540 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1554 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x3e", 2, 14808, NULL };
static panda$core$String $s1557 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1588 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s1593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s1616 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d\x2a\x20\x63\x6f\x6e\x73\x74\x72\x75\x63\x74\x65\x64\x20\x6f\x62\x6a\x65\x63\x74\x20\x2a\x2d", 24, 1541443738414735436, NULL };
static panda$core$String $s1640 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s1642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1647 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s1662 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s1665 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1692 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1694 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s1724 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1730 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x20\x77\x68\x69\x6c\x65\x20", 8, 24265489235972527, NULL };
static panda$core$String $s1732 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1753 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2d\x2a\x20\x61\x6e\x64\x20\x74\x68\x65\x6e\x3a\x20", 14, -3277098584181619124, NULL };
static panda$core$String $s1756 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x2a\x2d", 3, 1361020, NULL };
static panda$core$String $s1772 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1795 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s1797 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b", 2, 13556, NULL };
static panda$core$String $s1828 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1835 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s1837 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1862 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x21\x3d\x20\x6e\x75\x6c\x6c\x29", 9, 1443802565768004343, NULL };
static panda$core$String $s1872 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1874 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3d\x20\x6e\x75\x6c\x6c\x29", 8, 14324500803727910, NULL };
static panda$core$String $s1893 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1895 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s1925 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1953 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s1955 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1986 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1990 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x74\x68\x65\x72\x77\x69\x73\x65\x3a\x0a", 11, 7948234111488089839, NULL };
static panda$core$String $s2020 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2044 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2047 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2059 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2d", 1, 146, NULL };
static panda$core$String $s2067 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s2084 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2087 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2116 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s2118 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s2121 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s2180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2185 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s2196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s2200 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x24\x72\x65\x75\x73\x65\x64\x28", 8, 14810341435777125, NULL };
static panda$core$String $s2218 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s2221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2227 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s2238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s2255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3f\x20", 3, 1363128, NULL };
static panda$core$String $s2260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x20", 3, 1362623, NULL };
static panda$core$String $s2263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5b", 1, 192, NULL };
static panda$core$String $s2298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x5d", 1, 194, NULL };
static panda$core$String $s2318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s2344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s2349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s2370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s2373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s2375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s2400 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s2402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s2404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s2430 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s2434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x0a", 2, 16069, NULL };
static panda$core$String $s2437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2461 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s2465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s2467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2498 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

org$pandalanguage$pandac$Type* org$pandalanguage$pandac$IRNode$type$R$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$72_95 = NULL;
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
    org$pandalanguage$pandac$IRNode* expr69 = NULL;
    org$pandalanguage$pandac$Type* $tmp71;
    org$pandalanguage$pandac$Type* $tmp72;
    org$pandalanguage$pandac$Type* type78 = NULL;
    org$pandalanguage$pandac$Type* $tmp80;
    org$pandalanguage$pandac$Type* type84 = NULL;
    org$pandalanguage$pandac$Type* $tmp86;
    org$pandalanguage$pandac$Type* $tmp90;
    org$pandalanguage$pandac$Type* $tmp91;
    org$pandalanguage$pandac$Type* $tmp96;
    org$pandalanguage$pandac$Type* $tmp97;
    org$pandalanguage$pandac$IRNode* ref102 = NULL;
    org$pandalanguage$pandac$Type* $tmp104;
    org$pandalanguage$pandac$Type* $tmp105;
    org$pandalanguage$pandac$Type$Kind $tmp108;
    org$pandalanguage$pandac$Position $tmp109;
    org$pandalanguage$pandac$Type* type113 = NULL;
    org$pandalanguage$pandac$Type* $tmp115;
    org$pandalanguage$pandac$Type* type119 = NULL;
    org$pandalanguage$pandac$Type* $tmp121;
    org$pandalanguage$pandac$IRNode* base125 = NULL;
    org$pandalanguage$pandac$Type* $tmp127;
    org$pandalanguage$pandac$Type* $tmp128;
    org$pandalanguage$pandac$Type* type134 = NULL;
    org$pandalanguage$pandac$Type* $tmp136;
    org$pandalanguage$pandac$Type* type140 = NULL;
    panda$core$Int64 id142;
    org$pandalanguage$pandac$Type* $tmp144;
    org$pandalanguage$pandac$IRNode* base148 = NULL;
    org$pandalanguage$pandac$Type* $tmp150;
    org$pandalanguage$pandac$Type* $tmp151;
    org$pandalanguage$pandac$Type* type157 = NULL;
    org$pandalanguage$pandac$Type* $tmp159;
    org$pandalanguage$pandac$Type* $tmp163;
    org$pandalanguage$pandac$Type* $tmp164;
    org$pandalanguage$pandac$Type* type169 = NULL;
    org$pandalanguage$pandac$Type* $tmp171;
    org$pandalanguage$pandac$IRNode* ifTrue175 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse177 = NULL;
    org$pandalanguage$pandac$Type* $tmp179;
    org$pandalanguage$pandac$Type* $tmp182;
    org$pandalanguage$pandac$Type* $tmp186;
    org$pandalanguage$pandac$Type* $tmp187;
    org$pandalanguage$pandac$Type* $tmp193;
    org$pandalanguage$pandac$Type* $tmp194;
    org$pandalanguage$pandac$Type* $tmp199;
    org$pandalanguage$pandac$Type* $tmp200;
    org$pandalanguage$pandac$Type* type205 = NULL;
    org$pandalanguage$pandac$Type* $tmp207;
    org$pandalanguage$pandac$Type* type211 = NULL;
    org$pandalanguage$pandac$Type* $tmp213;
    org$pandalanguage$pandac$Type* $tmp217;
    org$pandalanguage$pandac$Type* $tmp218;
    org$pandalanguage$pandac$Type* $tmp223;
    org$pandalanguage$pandac$Type* $tmp224;
    org$pandalanguage$pandac$Variable* variable229 = NULL;
    org$pandalanguage$pandac$Type* $tmp231;
    int $tmp4;
    {
        $tmp6 = self;
        $match$72_95 = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Bit $tmp7 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$72_95->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp7.value) {
        {
            org$pandalanguage$pandac$Type** $tmp9 = ((org$pandalanguage$pandac$Type**) ((char*) $match$72_95->$data + 16));
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
        panda$core$Bit $tmp14 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$72_95->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp14.value) {
        {
            org$pandalanguage$pandac$Type** $tmp16 = ((org$pandalanguage$pandac$Type**) ((char*) $match$72_95->$data + 16));
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
        panda$core$Bit $tmp20 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$72_95->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp20.value) {
        {
            org$pandalanguage$pandac$Type** $tmp22 = ((org$pandalanguage$pandac$Type**) ((char*) $match$72_95->$data + 16));
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
        panda$core$Bit $tmp26 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$72_95->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp26.value) {
        {
            org$pandalanguage$pandac$Type** $tmp28 = ((org$pandalanguage$pandac$Type**) ((char*) $match$72_95->$data + 16));
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
        panda$core$Bit $tmp32 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$72_95->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp32.value) {
        {
            org$pandalanguage$pandac$Type** $tmp34 = ((org$pandalanguage$pandac$Type**) ((char*) $match$72_95->$data + 24));
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
        panda$core$Bit $tmp38 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$72_95->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp38.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp40 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$72_95->$data + 16));
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
        panda$core$Bit $tmp46 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$72_95->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp46.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp48 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$72_95->$data + 24));
            ce47 = *$tmp48;
            panda$core$Int64* $tmp50 = ((panda$core$Int64*) ((char*) $match$72_95->$data + 32));
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
        panda$core$Bit $tmp56 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$72_95->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp56.value) {
        {
            org$pandalanguage$pandac$Type** $tmp58 = ((org$pandalanguage$pandac$Type**) ((char*) $match$72_95->$data + 16));
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
        panda$core$Bit $tmp62 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$72_95->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp62.value) {
        {
            org$pandalanguage$pandac$Type** $tmp64 = ((org$pandalanguage$pandac$Type**) ((char*) $match$72_95->$data + 16));
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
        panda$core$Bit $tmp68 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$72_95->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp68.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp70 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$72_95->$data + 0));
            expr69 = *$tmp70;
            org$pandalanguage$pandac$Type* $tmp74 = (($fn73) expr69->$class->vtable[2])(expr69);
            $tmp72 = $tmp74;
            $tmp71 = $tmp72;
            $returnValue10 = $tmp71;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp71));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp72));
            $tmp4 = 9;
            goto $l2;
            $l75:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp77 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$72_95->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp77.value) {
        {
            org$pandalanguage$pandac$Type** $tmp79 = ((org$pandalanguage$pandac$Type**) ((char*) $match$72_95->$data + 16));
            type78 = *$tmp79;
            $tmp80 = type78;
            $returnValue10 = $tmp80;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp80));
            $tmp4 = 10;
            goto $l2;
            $l81:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp83 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$72_95->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp83.value) {
        {
            org$pandalanguage$pandac$Type** $tmp85 = ((org$pandalanguage$pandac$Type**) ((char*) $match$72_95->$data + 16));
            type84 = *$tmp85;
            $tmp86 = type84;
            $returnValue10 = $tmp86;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp86));
            $tmp4 = 11;
            goto $l2;
            $l87:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp89 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$72_95->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp89.value) {
        {
            org$pandalanguage$pandac$Type* $tmp92 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            $tmp91 = $tmp92;
            $tmp90 = $tmp91;
            $returnValue10 = $tmp90;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp90));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp91));
            $tmp4 = 12;
            goto $l2;
            $l93:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp95 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$72_95->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp95.value) {
        {
            org$pandalanguage$pandac$Type* $tmp98 = org$pandalanguage$pandac$Type$Bit$R$org$pandalanguage$pandac$Type();
            $tmp97 = $tmp98;
            $tmp96 = $tmp97;
            $returnValue10 = $tmp96;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp96));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp97));
            $tmp4 = 13;
            goto $l2;
            $l99:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$72_95->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp101.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp103 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$72_95->$data + 16));
            ref102 = *$tmp103;
            org$pandalanguage$pandac$Type* $tmp106 = (org$pandalanguage$pandac$Type*) pandaObjectAlloc(88, (panda$core$Class*) &org$pandalanguage$pandac$Type$class);
            org$pandalanguage$pandac$Type$Kind$init$panda$core$Int64(&$tmp108, ((panda$core$Int64) { 6 }));
            org$pandalanguage$pandac$Position$init(&$tmp109);
            org$pandalanguage$pandac$Type$init$panda$core$String$org$pandalanguage$pandac$Type$Kind$org$pandalanguage$pandac$Position$panda$core$Bit($tmp106, &$s107, $tmp108, $tmp109, ((panda$core$Bit) { true }));
            $tmp105 = $tmp106;
            $tmp104 = $tmp105;
            $returnValue10 = $tmp104;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp104));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp105));
            $tmp4 = 14;
            goto $l2;
            $l110:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$72_95->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp112.value) {
        {
            org$pandalanguage$pandac$Type** $tmp114 = ((org$pandalanguage$pandac$Type**) ((char*) $match$72_95->$data + 16));
            type113 = *$tmp114;
            $tmp115 = type113;
            $returnValue10 = $tmp115;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp115));
            $tmp4 = 15;
            goto $l2;
            $l116:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$72_95->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp118.value) {
        {
            org$pandalanguage$pandac$Type** $tmp120 = ((org$pandalanguage$pandac$Type**) ((char*) $match$72_95->$data + 16));
            type119 = *$tmp120;
            $tmp121 = type119;
            $returnValue10 = $tmp121;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp121));
            $tmp4 = 16;
            goto $l2;
            $l122:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$72_95->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp124.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp126 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$72_95->$data + 24));
            base125 = *$tmp126;
            org$pandalanguage$pandac$Type* $tmp130 = (($fn129) base125->$class->vtable[2])(base125);
            $tmp128 = $tmp130;
            $tmp127 = $tmp128;
            $returnValue10 = $tmp127;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp127));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp128));
            $tmp4 = 17;
            goto $l2;
            $l131:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$72_95->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp133.value) {
        {
            org$pandalanguage$pandac$Type** $tmp135 = ((org$pandalanguage$pandac$Type**) ((char*) $match$72_95->$data + 16));
            type134 = *$tmp135;
            $tmp136 = type134;
            $returnValue10 = $tmp136;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp136));
            $tmp4 = 18;
            goto $l2;
            $l137:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$72_95->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp139.value) {
        {
            org$pandalanguage$pandac$Type** $tmp141 = ((org$pandalanguage$pandac$Type**) ((char*) $match$72_95->$data + 16));
            type140 = *$tmp141;
            panda$core$Int64* $tmp143 = ((panda$core$Int64*) ((char*) $match$72_95->$data + 24));
            id142 = *$tmp143;
            $tmp144 = type140;
            $returnValue10 = $tmp144;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp144));
            $tmp4 = 19;
            goto $l2;
            $l145:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$72_95->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp147.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp149 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$72_95->$data + 0));
            base148 = *$tmp149;
            org$pandalanguage$pandac$Type* $tmp153 = (($fn152) base148->$class->vtable[2])(base148);
            $tmp151 = $tmp153;
            $tmp150 = $tmp151;
            $returnValue10 = $tmp150;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp150));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp151));
            $tmp4 = 20;
            goto $l2;
            $l154:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp156 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$72_95->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp156.value) {
        {
            org$pandalanguage$pandac$Type** $tmp158 = ((org$pandalanguage$pandac$Type**) ((char*) $match$72_95->$data + 16));
            type157 = *$tmp158;
            $tmp159 = type157;
            $returnValue10 = $tmp159;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp159));
            $tmp4 = 21;
            goto $l2;
            $l160:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$72_95->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp162.value) {
        {
            org$pandalanguage$pandac$Type* $tmp165 = org$pandalanguage$pandac$Type$StringType$R$org$pandalanguage$pandac$Type();
            $tmp164 = $tmp165;
            $tmp163 = $tmp164;
            $returnValue10 = $tmp163;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp163));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp164));
            $tmp4 = 22;
            goto $l2;
            $l166:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp168 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$72_95->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp168.value) {
        {
            org$pandalanguage$pandac$Type** $tmp170 = ((org$pandalanguage$pandac$Type**) ((char*) $match$72_95->$data + 16));
            type169 = *$tmp170;
            $tmp171 = type169;
            $returnValue10 = $tmp171;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp171));
            $tmp4 = 23;
            goto $l2;
            $l172:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$72_95->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp174.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp176 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$72_95->$data + 24));
            ifTrue175 = *$tmp176;
            org$pandalanguage$pandac$IRNode** $tmp178 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$72_95->$data + 32));
            ifFalse177 = *$tmp178;
            org$pandalanguage$pandac$Type* $tmp181 = (($fn180) ifTrue175->$class->vtable[2])(ifTrue175);
            $tmp179 = $tmp181;
            org$pandalanguage$pandac$Type* $tmp184 = (($fn183) ifFalse177->$class->vtable[2])(ifFalse177);
            $tmp182 = $tmp184;
            panda$core$Bit $tmp185 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp179, $tmp182);
            PANDA_ASSERT($tmp185.value);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp182));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp179));
            org$pandalanguage$pandac$Type* $tmp189 = (($fn188) ifTrue175->$class->vtable[2])(ifTrue175);
            $tmp187 = $tmp189;
            $tmp186 = $tmp187;
            $returnValue10 = $tmp186;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp186));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp187));
            $tmp4 = 24;
            goto $l2;
            $l190:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$72_95->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp192.value) {
        {
            org$pandalanguage$pandac$Type* $tmp195 = org$pandalanguage$pandac$Type$Class$R$org$pandalanguage$pandac$Type();
            $tmp194 = $tmp195;
            $tmp193 = $tmp194;
            $returnValue10 = $tmp193;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp193));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp194));
            $tmp4 = 25;
            goto $l2;
            $l196:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp198 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$72_95->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp198.value) {
        {
            org$pandalanguage$pandac$Type* $tmp201 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp200 = $tmp201;
            $tmp199 = $tmp200;
            $returnValue10 = $tmp199;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp199));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp200));
            $tmp4 = 26;
            goto $l2;
            $l202:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$72_95->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp204.value) {
        {
            org$pandalanguage$pandac$Type** $tmp206 = ((org$pandalanguage$pandac$Type**) ((char*) $match$72_95->$data + 16));
            type205 = *$tmp206;
            $tmp207 = type205;
            $returnValue10 = $tmp207;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp207));
            $tmp4 = 27;
            goto $l2;
            $l208:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$72_95->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp210.value) {
        {
            org$pandalanguage$pandac$Type** $tmp212 = ((org$pandalanguage$pandac$Type**) ((char*) $match$72_95->$data + 16));
            type211 = *$tmp212;
            $tmp213 = type211;
            $returnValue10 = $tmp213;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp213));
            $tmp4 = 28;
            goto $l2;
            $l214:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp216 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$72_95->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp216.value) {
        {
            org$pandalanguage$pandac$Type* $tmp219 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp218 = $tmp219;
            $tmp217 = $tmp218;
            $returnValue10 = $tmp217;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp217));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp218));
            $tmp4 = 29;
            goto $l2;
            $l220:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$72_95->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp222.value) {
        {
            org$pandalanguage$pandac$Type* $tmp225 = org$pandalanguage$pandac$Type$Invalid$R$org$pandalanguage$pandac$Type();
            $tmp224 = $tmp225;
            $tmp223 = $tmp224;
            $returnValue10 = $tmp223;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp223));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp224));
            $tmp4 = 30;
            goto $l2;
            $l226:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp228 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$72_95->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp228.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp230 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$72_95->$data + 16));
            variable229 = *$tmp230;
            $tmp231 = variable229->type;
            $returnValue10 = $tmp231;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp231));
            $tmp4 = 31;
            goto $l2;
            $l232:;
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
    $tmp4 = -1;
    goto $l2;
    $l2:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    switch ($tmp4) {
        case 27: goto $l208;
        case 6: goto $l54;
        case 31: goto $l232;
        case 18: goto $l137;
        case 25: goto $l196;
        case 22: goto $l166;
        case 30: goto $l226;
        case 28: goto $l214;
        case 11: goto $l87;
        case 9: goto $l75;
        case 8: goto $l66;
        case 16: goto $l122;
        case 24: goto $l190;
        case 15: goto $l116;
        case 19: goto $l145;
        case 1: goto $l18;
        case 21: goto $l160;
        case 2: goto $l24;
        case 0: goto $l12;
        case 26: goto $l202;
        case 10: goto $l81;
        case 7: goto $l60;
        case -1: goto $l234;
        case 5: goto $l44;
        case 14: goto $l110;
        case 4: goto $l36;
        case 13: goto $l99;
        case 29: goto $l220;
        case 12: goto $l93;
        case 3: goto $l30;
        case 20: goto $l154;
        case 23: goto $l172;
        case 17: goto $l131;
    }
    $l234:;
}
org$pandalanguage$pandac$Position org$pandalanguage$pandac$IRNode$position$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$144_9238 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp239;
    org$pandalanguage$pandac$Position position241;
    org$pandalanguage$pandac$Position $returnValue243;
    org$pandalanguage$pandac$Position position247;
    org$pandalanguage$pandac$Position position252;
    org$pandalanguage$pandac$Position position257;
    org$pandalanguage$pandac$Position position262;
    org$pandalanguage$pandac$Position position267;
    org$pandalanguage$pandac$Position position272;
    org$pandalanguage$pandac$Position position277;
    org$pandalanguage$pandac$Position position282;
    org$pandalanguage$pandac$Position position287;
    org$pandalanguage$pandac$Position position292;
    org$pandalanguage$pandac$Position position297;
    org$pandalanguage$pandac$Position position302;
    org$pandalanguage$pandac$IRNode* target307 = NULL;
    org$pandalanguage$pandac$Position position314;
    org$pandalanguage$pandac$IRNode* expr319 = NULL;
    org$pandalanguage$pandac$Position position326;
    org$pandalanguage$pandac$Position position331;
    org$pandalanguage$pandac$Position position336;
    org$pandalanguage$pandac$Position position341;
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
    org$pandalanguage$pandac$IRNode* base401 = NULL;
    org$pandalanguage$pandac$Position position408;
    org$pandalanguage$pandac$Position position413;
    org$pandalanguage$pandac$Position position418;
    org$pandalanguage$pandac$Position position423;
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
    int $tmp237;
    {
        $tmp239 = self;
        $match$144_9238 = $tmp239;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp239));
        panda$core$Bit $tmp240 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp240.value) {
        {
            org$pandalanguage$pandac$Position* $tmp242 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position241 = *$tmp242;
            $returnValue243 = position241;
            $tmp237 = 0;
            goto $l235;
            $l244:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp246.value) {
        {
            org$pandalanguage$pandac$Position* $tmp248 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position247 = *$tmp248;
            $returnValue243 = position247;
            $tmp237 = 1;
            goto $l235;
            $l249:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp251.value) {
        {
            org$pandalanguage$pandac$Position* $tmp253 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position252 = *$tmp253;
            $returnValue243 = position252;
            $tmp237 = 2;
            goto $l235;
            $l254:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp256.value) {
        {
            org$pandalanguage$pandac$Position* $tmp258 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position257 = *$tmp258;
            $returnValue243 = position257;
            $tmp237 = 3;
            goto $l235;
            $l259:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp261.value) {
        {
            org$pandalanguage$pandac$Position* $tmp263 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position262 = *$tmp263;
            $returnValue243 = position262;
            $tmp237 = 4;
            goto $l235;
            $l264:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp266.value) {
        {
            org$pandalanguage$pandac$Position* $tmp268 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position267 = *$tmp268;
            $returnValue243 = position267;
            $tmp237 = 5;
            goto $l235;
            $l269:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp271.value) {
        {
            org$pandalanguage$pandac$Position* $tmp273 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position272 = *$tmp273;
            $returnValue243 = position272;
            $tmp237 = 6;
            goto $l235;
            $l274:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp276.value) {
        {
            org$pandalanguage$pandac$Position* $tmp278 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position277 = *$tmp278;
            $returnValue243 = position277;
            $tmp237 = 7;
            goto $l235;
            $l279:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp281.value) {
        {
            org$pandalanguage$pandac$Position* $tmp283 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position282 = *$tmp283;
            $returnValue243 = position282;
            $tmp237 = 8;
            goto $l235;
            $l284:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp286.value) {
        {
            org$pandalanguage$pandac$Position* $tmp288 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position287 = *$tmp288;
            $returnValue243 = position287;
            $tmp237 = 9;
            goto $l235;
            $l289:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp291.value) {
        {
            org$pandalanguage$pandac$Position* $tmp293 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position292 = *$tmp293;
            $returnValue243 = position292;
            $tmp237 = 10;
            goto $l235;
            $l294:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp296 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp296.value) {
        {
            org$pandalanguage$pandac$Position* $tmp298 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position297 = *$tmp298;
            $returnValue243 = position297;
            $tmp237 = 11;
            goto $l235;
            $l299:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp301.value) {
        {
            org$pandalanguage$pandac$Position* $tmp303 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position302 = *$tmp303;
            $returnValue243 = position302;
            $tmp237 = 12;
            goto $l235;
            $l304:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp306.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp308 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$144_9238->$data + 0));
            target307 = *$tmp308;
            org$pandalanguage$pandac$Position $tmp310 = (($fn309) target307->$class->vtable[3])(target307);
            $returnValue243 = $tmp310;
            $tmp237 = 13;
            goto $l235;
            $l311:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp313.value) {
        {
            org$pandalanguage$pandac$Position* $tmp315 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position314 = *$tmp315;
            $returnValue243 = position314;
            $tmp237 = 14;
            goto $l235;
            $l316:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp318.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp320 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$144_9238->$data + 0));
            expr319 = *$tmp320;
            org$pandalanguage$pandac$Position $tmp322 = (($fn321) expr319->$class->vtable[3])(expr319);
            $returnValue243 = $tmp322;
            $tmp237 = 15;
            goto $l235;
            $l323:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp325.value) {
        {
            org$pandalanguage$pandac$Position* $tmp327 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position326 = *$tmp327;
            $returnValue243 = position326;
            $tmp237 = 16;
            goto $l235;
            $l328:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp330.value) {
        {
            org$pandalanguage$pandac$Position* $tmp332 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position331 = *$tmp332;
            $returnValue243 = position331;
            $tmp237 = 17;
            goto $l235;
            $l333:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp335.value) {
        {
            org$pandalanguage$pandac$Position* $tmp337 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position336 = *$tmp337;
            $returnValue243 = position336;
            $tmp237 = 18;
            goto $l235;
            $l338:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp340.value) {
        {
            org$pandalanguage$pandac$Position* $tmp342 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position341 = *$tmp342;
            $returnValue243 = position341;
            $tmp237 = 19;
            goto $l235;
            $l343:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp345.value) {
        {
            org$pandalanguage$pandac$Position* $tmp347 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position346 = *$tmp347;
            $returnValue243 = position346;
            $tmp237 = 20;
            goto $l235;
            $l348:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp350.value) {
        {
            org$pandalanguage$pandac$Position* $tmp352 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position351 = *$tmp352;
            $returnValue243 = position351;
            $tmp237 = 21;
            goto $l235;
            $l353:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp355.value) {
        {
            org$pandalanguage$pandac$Position* $tmp357 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position356 = *$tmp357;
            $returnValue243 = position356;
            $tmp237 = 22;
            goto $l235;
            $l358:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp360.value) {
        {
            org$pandalanguage$pandac$Position* $tmp362 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position361 = *$tmp362;
            $returnValue243 = position361;
            $tmp237 = 23;
            goto $l235;
            $l363:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp365.value) {
        {
            org$pandalanguage$pandac$Position* $tmp367 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position366 = *$tmp367;
            $returnValue243 = position366;
            $tmp237 = 24;
            goto $l235;
            $l368:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp370.value) {
        {
            org$pandalanguage$pandac$Position* $tmp372 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position371 = *$tmp372;
            $returnValue243 = position371;
            $tmp237 = 25;
            goto $l235;
            $l373:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp375.value) {
        {
            org$pandalanguage$pandac$Position* $tmp377 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position376 = *$tmp377;
            $returnValue243 = position376;
            $tmp237 = 26;
            goto $l235;
            $l378:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp380.value) {
        {
            org$pandalanguage$pandac$Position* $tmp382 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position381 = *$tmp382;
            $returnValue243 = position381;
            $tmp237 = 27;
            goto $l235;
            $l383:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp385.value) {
        {
            org$pandalanguage$pandac$Position* $tmp387 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position386 = *$tmp387;
            $returnValue243 = position386;
            $tmp237 = 28;
            goto $l235;
            $l388:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp390.value) {
        {
            org$pandalanguage$pandac$Position* $tmp392 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position391 = *$tmp392;
            $returnValue243 = position391;
            $tmp237 = 29;
            goto $l235;
            $l393:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp395.value) {
        {
            org$pandalanguage$pandac$Position* $tmp397 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position396 = *$tmp397;
            $returnValue243 = position396;
            $tmp237 = 30;
            goto $l235;
            $l398:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp400.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp402 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$144_9238->$data + 0));
            base401 = *$tmp402;
            org$pandalanguage$pandac$Position $tmp404 = (($fn403) base401->$class->vtable[3])(base401);
            $returnValue243 = $tmp404;
            $tmp237 = 31;
            goto $l235;
            $l405:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp407.value) {
        {
            org$pandalanguage$pandac$Position* $tmp409 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position408 = *$tmp409;
            $returnValue243 = position408;
            $tmp237 = 32;
            goto $l235;
            $l410:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp412 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp412.value) {
        {
            org$pandalanguage$pandac$Position* $tmp414 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position413 = *$tmp414;
            $returnValue243 = position413;
            $tmp237 = 33;
            goto $l235;
            $l415:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp417.value) {
        {
            org$pandalanguage$pandac$Position* $tmp419 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position418 = *$tmp419;
            $returnValue243 = position418;
            $tmp237 = 34;
            goto $l235;
            $l420:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp422.value) {
        {
            org$pandalanguage$pandac$Position* $tmp424 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position423 = *$tmp424;
            $returnValue243 = position423;
            $tmp237 = 35;
            goto $l235;
            $l425:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp427.value) {
        {
            org$pandalanguage$pandac$Position* $tmp429 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position428 = *$tmp429;
            $returnValue243 = position428;
            $tmp237 = 36;
            goto $l235;
            $l430:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp432.value) {
        {
            org$pandalanguage$pandac$Position* $tmp434 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position433 = *$tmp434;
            $returnValue243 = position433;
            $tmp237 = 37;
            goto $l235;
            $l435:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp437.value) {
        {
            org$pandalanguage$pandac$Position* $tmp439 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position438 = *$tmp439;
            $returnValue243 = position438;
            $tmp237 = 38;
            goto $l235;
            $l440:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp442 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp442.value) {
        {
            org$pandalanguage$pandac$Position* $tmp444 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position443 = *$tmp444;
            $returnValue243 = position443;
            $tmp237 = 39;
            goto $l235;
            $l445:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp447.value) {
        {
            org$pandalanguage$pandac$Position* $tmp449 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position448 = *$tmp449;
            $returnValue243 = position448;
            $tmp237 = 40;
            goto $l235;
            $l450:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp452.value) {
        {
            org$pandalanguage$pandac$Position* $tmp454 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position453 = *$tmp454;
            $returnValue243 = position453;
            $tmp237 = 41;
            goto $l235;
            $l455:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp457.value) {
        {
            org$pandalanguage$pandac$Position* $tmp459 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position458 = *$tmp459;
            $returnValue243 = position458;
            $tmp237 = 42;
            goto $l235;
            $l460:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp462 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp462.value) {
        {
            org$pandalanguage$pandac$Position* $tmp464 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position463 = *$tmp464;
            $returnValue243 = position463;
            $tmp237 = 43;
            goto $l235;
            $l465:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp467.value) {
        {
            org$pandalanguage$pandac$Position* $tmp469 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position468 = *$tmp469;
            $returnValue243 = position468;
            $tmp237 = 44;
            goto $l235;
            $l470:;
            return $returnValue243;
        }
        }
        else {
        panda$core$Bit $tmp472 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$144_9238->$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp472.value) {
        {
            org$pandalanguage$pandac$Position* $tmp474 = ((org$pandalanguage$pandac$Position*) ((char*) $match$144_9238->$data + 0));
            position473 = *$tmp474;
            $returnValue243 = position473;
            $tmp237 = 45;
            goto $l235;
            $l475:;
            return $returnValue243;
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
    $tmp237 = -1;
    goto $l235;
    $l235:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp239));
    switch ($tmp237) {
        case 27: goto $l383;
        case 21: goto $l353;
        case 9: goto $l289;
        case 34: goto $l420;
        case 10: goto $l294;
        case 2: goto $l254;
        case 26: goto $l378;
        case 20: goto $l348;
        case 41: goto $l455;
        case 7: goto $l279;
        case 29: goto $l393;
        case 25: goto $l373;
        case 1: goto $l249;
        case 42: goto $l460;
        case 39: goto $l445;
        case 24: goto $l368;
        case 35: goto $l425;
        case 13: goto $l311;
        case 33: goto $l415;
        case 17: goto $l333;
        case 36: goto $l430;
        case 0: goto $l244;
        case 16: goto $l328;
        case 3: goto $l259;
        case 8: goto $l284;
        case 31: goto $l405;
        case 45: goto $l475;
        case 30: goto $l398;
        case 4: goto $l264;
        case 28: goto $l388;
        case 22: goto $l358;
        case -1: goto $l477;
        case 32: goto $l410;
        case 5: goto $l269;
        case 12: goto $l304;
        case 19: goto $l343;
        case 38: goto $l440;
        case 15: goto $l323;
        case 23: goto $l363;
        case 44: goto $l470;
        case 40: goto $l450;
        case 37: goto $l435;
        case 6: goto $l274;
        case 11: goto $l299;
        case 18: goto $l338;
        case 43: goto $l465;
        case 14: goto $l316;
    }
    $l477:;
}
panda$core$Bit org$pandalanguage$pandac$IRNode$hasSideEffects$R$panda$core$Bit(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$243_9481 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp482;
    org$pandalanguage$pandac$IRNode* test484 = NULL;
    org$pandalanguage$pandac$IRNode* msg486 = NULL;
    panda$core$Bit $returnValue488;
    org$pandalanguage$pandac$IRNode* left502 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op504;
    org$pandalanguage$pandac$IRNode* right506 = NULL;
    panda$core$Bit bit522;
    panda$collections$ImmutableArray* statements527 = NULL;
    panda$collections$Iterator* Iter$253$17532 = NULL;
    panda$collections$Iterator* $tmp533;
    panda$collections$Iterator* $tmp534;
    org$pandalanguage$pandac$IRNode* s550 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp551;
    panda$core$Object* $tmp552;
    panda$core$String* label568 = NULL;
    org$pandalanguage$pandac$MethodRef* m573 = NULL;
    panda$collections$ImmutableArray* args575 = NULL;
    panda$collections$Iterator* Iter$265$17583 = NULL;
    panda$collections$Iterator* $tmp584;
    panda$collections$Iterator* $tmp585;
    org$pandalanguage$pandac$IRNode* arg601 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp602;
    panda$core$Object* $tmp603;
    org$pandalanguage$pandac$IRNode* value619 = NULL;
    org$pandalanguage$pandac$Type* type621 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce626 = NULL;
    org$pandalanguage$pandac$IRNode* base631 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce633 = NULL;
    panda$core$Int64 field635;
    org$pandalanguage$pandac$Type* type640 = NULL;
    org$pandalanguage$pandac$IRNode* call642 = NULL;
    org$pandalanguage$pandac$Type* Type649 = NULL;
    panda$core$String* label654 = NULL;
    org$pandalanguage$pandac$IRNode* target659 = NULL;
    org$pandalanguage$pandac$IRNode* value661 = NULL;
    panda$core$String* label671 = NULL;
    panda$collections$ImmutableArray* statements673 = NULL;
    org$pandalanguage$pandac$IRNode* test675 = NULL;
    panda$collections$Iterator* Iter$289$17684 = NULL;
    panda$collections$Iterator* $tmp685;
    panda$collections$Iterator* $tmp686;
    org$pandalanguage$pandac$IRNode* s702 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp703;
    panda$core$Object* $tmp704;
    org$pandalanguage$pandac$IRNode* base723 = NULL;
    org$pandalanguage$pandac$FieldDecl* field725 = NULL;
    org$pandalanguage$pandac$IRNode* test730 = NULL;
    panda$collections$ImmutableArray* ifTrue732 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse734 = NULL;
    panda$collections$Iterator* Iter$303$17743 = NULL;
    panda$collections$Iterator* $tmp744;
    panda$collections$Iterator* $tmp745;
    org$pandalanguage$pandac$IRNode* s761 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp762;
    panda$core$Object* $tmp763;
    panda$core$UInt64 value781;
    org$pandalanguage$pandac$IRNode* value786 = NULL;
    org$pandalanguage$pandac$IRNode* value793 = NULL;
    panda$core$String* label800 = NULL;
    panda$collections$ImmutableArray* statements802 = NULL;
    panda$collections$Iterator* Iter$316$17807 = NULL;
    panda$collections$Iterator* $tmp808;
    panda$collections$Iterator* $tmp809;
    org$pandalanguage$pandac$IRNode* s825 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp826;
    panda$core$Object* $tmp827;
    org$pandalanguage$pandac$IRNode* value843 = NULL;
    panda$collections$ImmutableArray* whens845 = NULL;
    panda$collections$ImmutableArray* other847 = NULL;
    panda$collections$Iterator* Iter$326$17856 = NULL;
    panda$collections$Iterator* $tmp857;
    panda$collections$Iterator* $tmp858;
    org$pandalanguage$pandac$IRNode* w874 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp875;
    panda$core$Object* $tmp876;
    panda$collections$Iterator* Iter$331$17892 = NULL;
    panda$collections$Iterator* $tmp893;
    panda$collections$Iterator* $tmp894;
    org$pandalanguage$pandac$IRNode* s910 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp911;
    panda$core$Object* $tmp912;
    org$pandalanguage$pandac$IRNode* target928 = NULL;
    org$pandalanguage$pandac$MethodRef* m930 = NULL;
    panda$core$UInt64 value935;
    org$pandalanguage$pandac$parser$Token$Kind op943;
    org$pandalanguage$pandac$IRNode* base945 = NULL;
    panda$core$String* label952 = NULL;
    org$pandalanguage$pandac$IRNode* target954 = NULL;
    org$pandalanguage$pandac$IRNode* list956 = NULL;
    panda$collections$ImmutableArray* statements958 = NULL;
    panda$collections$Iterator* Iter$350$17967 = NULL;
    panda$collections$Iterator* $tmp968;
    panda$collections$Iterator* $tmp969;
    org$pandalanguage$pandac$IRNode* s985 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp986;
    panda$core$Object* $tmp987;
    panda$core$Real64 value1003;
    org$pandalanguage$pandac$IRNode* value1008 = NULL;
    panda$core$Int64 id1015;
    org$pandalanguage$pandac$IRNode* base1020 = NULL;
    panda$core$Int64 id1022;
    panda$core$String* str1032 = NULL;
    org$pandalanguage$pandac$IRNode* test1040 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue1042 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse1044 = NULL;
    org$pandalanguage$pandac$Type* type1061 = NULL;
    panda$core$String* name1066 = NULL;
    org$pandalanguage$pandac$IRNode* base1069 = NULL;
    panda$collections$ImmutableArray* args1071 = NULL;
    org$pandalanguage$pandac$IRNode* target1074 = NULL;
    panda$collections$ImmutableArray* methods1076 = NULL;
    panda$collections$ImmutableArray* args1078 = NULL;
    org$pandalanguage$pandac$IRNode* target1081 = NULL;
    panda$collections$ImmutableArray* methods1083 = NULL;
    org$pandalanguage$pandac$IRNode* start1086 = NULL;
    org$pandalanguage$pandac$IRNode* end1088 = NULL;
    panda$core$Bit inclusive1090;
    org$pandalanguage$pandac$IRNode* step1092 = NULL;
    org$pandalanguage$pandac$Variable$Kind kind1095;
    panda$collections$ImmutableArray* decls1097 = NULL;
    panda$collections$Iterator* Iter$385$171102 = NULL;
    panda$collections$Iterator* $tmp1103;
    panda$collections$Iterator* $tmp1104;
    org$pandalanguage$pandac$IRNode* d1120 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1121;
    panda$core$Object* $tmp1122;
    org$pandalanguage$pandac$Variable* variable1138 = NULL;
    panda$collections$ImmutableArray* tests1143 = NULL;
    panda$collections$ImmutableArray* statements1145 = NULL;
    panda$collections$Iterator* Iter$394$171150 = NULL;
    panda$collections$Iterator* $tmp1151;
    panda$collections$Iterator* $tmp1152;
    org$pandalanguage$pandac$IRNode* t1168 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1169;
    panda$core$Object* $tmp1170;
    panda$collections$Iterator* Iter$399$171186 = NULL;
    panda$collections$Iterator* $tmp1187;
    panda$collections$Iterator* $tmp1188;
    org$pandalanguage$pandac$IRNode* s1204 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1205;
    panda$core$Object* $tmp1206;
    panda$core$String* label1222 = NULL;
    org$pandalanguage$pandac$IRNode* test1224 = NULL;
    panda$collections$ImmutableArray* statements1226 = NULL;
    panda$collections$Iterator* Iter$409$171235 = NULL;
    panda$collections$Iterator* $tmp1236;
    panda$collections$Iterator* $tmp1237;
    org$pandalanguage$pandac$IRNode* s1253 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1254;
    panda$core$Object* $tmp1255;
    int $tmp480;
    {
        $tmp482 = self;
        $match$243_9481 = $tmp482;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp482));
        panda$core$Bit $tmp483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp483.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp485 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$243_9481->$data + 16));
            test484 = *$tmp485;
            org$pandalanguage$pandac$IRNode** $tmp487 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$243_9481->$data + 24));
            msg486 = *$tmp487;
            panda$core$Bit $tmp491 = (($fn490) test484->$class->vtable[4])(test484);
            bool $tmp489 = $tmp491.value;
            if ($tmp489) goto $l492;
            panda$core$Bit $tmp494 = (($fn493) msg486->$class->vtable[4])(msg486);
            $tmp489 = $tmp494.value;
            $l492:;
            panda$core$Bit $tmp495 = { $tmp489 };
            $returnValue488 = $tmp495;
            $tmp480 = 0;
            goto $l478;
            $l496:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp498.value) {
        {
            $returnValue488 = ((panda$core$Bit) { false });
            $tmp480 = 1;
            goto $l478;
            $l499:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp501.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp503 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$243_9481->$data + 24));
            left502 = *$tmp503;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp505 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$243_9481->$data + 32));
            op504 = *$tmp505;
            org$pandalanguage$pandac$IRNode** $tmp507 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$243_9481->$data + 40));
            right506 = *$tmp507;
            panda$core$Bit $tmp510 = org$pandalanguage$pandac$Compiler$isAssignment$org$pandalanguage$pandac$parser$Token$Kind$R$panda$core$Bit(op504);
            bool $tmp509 = $tmp510.value;
            if ($tmp509) goto $l511;
            panda$core$Bit $tmp513 = (($fn512) left502->$class->vtable[4])(left502);
            $tmp509 = $tmp513.value;
            $l511:;
            panda$core$Bit $tmp514 = { $tmp509 };
            bool $tmp508 = $tmp514.value;
            if ($tmp508) goto $l515;
            panda$core$Bit $tmp517 = (($fn516) right506->$class->vtable[4])(right506);
            $tmp508 = $tmp517.value;
            $l515:;
            panda$core$Bit $tmp518 = { $tmp508 };
            $returnValue488 = $tmp518;
            $tmp480 = 2;
            goto $l478;
            $l519:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp521.value) {
        {
            panda$core$Bit* $tmp523 = ((panda$core$Bit*) ((char*) $match$243_9481->$data + 24));
            bit522 = *$tmp523;
            $returnValue488 = ((panda$core$Bit) { false });
            $tmp480 = 3;
            goto $l478;
            $l524:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp526.value) {
        {
            panda$collections$ImmutableArray** $tmp528 = ((panda$collections$ImmutableArray**) ((char*) $match$243_9481->$data + 16));
            statements527 = *$tmp528;
            {
                int $tmp531;
                {
                    ITable* $tmp535 = ((panda$collections$Iterable*) statements527)->$class->itable;
                    while ($tmp535->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp535 = $tmp535->next;
                    }
                    $fn537 $tmp536 = $tmp535->methods[0];
                    panda$collections$Iterator* $tmp538 = $tmp536(((panda$collections$Iterable*) statements527));
                    $tmp534 = $tmp538;
                    $tmp533 = $tmp534;
                    Iter$253$17532 = $tmp533;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp533));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp534));
                    $l539:;
                    ITable* $tmp542 = Iter$253$17532->$class->itable;
                    while ($tmp542->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp542 = $tmp542->next;
                    }
                    $fn544 $tmp543 = $tmp542->methods[0];
                    panda$core$Bit $tmp545 = $tmp543(Iter$253$17532);
                    panda$core$Bit $tmp546 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp545);
                    bool $tmp541 = $tmp546.value;
                    if (!$tmp541) goto $l540;
                    {
                        int $tmp549;
                        {
                            ITable* $tmp553 = Iter$253$17532->$class->itable;
                            while ($tmp553->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp553 = $tmp553->next;
                            }
                            $fn555 $tmp554 = $tmp553->methods[1];
                            panda$core$Object* $tmp556 = $tmp554(Iter$253$17532);
                            $tmp552 = $tmp556;
                            $tmp551 = ((org$pandalanguage$pandac$IRNode*) $tmp552);
                            s550 = $tmp551;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp551));
                            panda$core$Panda$unref$panda$core$Object($tmp552);
                            panda$core$Bit $tmp558 = (($fn557) s550->$class->vtable[4])(s550);
                            if ($tmp558.value) {
                            {
                                $returnValue488 = ((panda$core$Bit) { true });
                                $tmp549 = 0;
                                goto $l547;
                                $l559:;
                                $tmp531 = 0;
                                goto $l529;
                                $l560:;
                                $tmp480 = 4;
                                goto $l478;
                                $l561:;
                                return $returnValue488;
                            }
                            }
                        }
                        $tmp549 = -1;
                        goto $l547;
                        $l547:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s550));
                        s550 = NULL;
                        switch ($tmp549) {
                            case 0: goto $l559;
                            case -1: goto $l563;
                        }
                        $l563:;
                    }
                    goto $l539;
                    $l540:;
                }
                $tmp531 = -1;
                goto $l529;
                $l529:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$253$17532));
                Iter$253$17532 = NULL;
                switch ($tmp531) {
                    case 0: goto $l560;
                    case -1: goto $l564;
                }
                $l564:;
            }
            $returnValue488 = ((panda$core$Bit) { false });
            $tmp480 = 5;
            goto $l478;
            $l565:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp567.value) {
        {
            panda$core$String** $tmp569 = ((panda$core$String**) ((char*) $match$243_9481->$data + 16));
            label568 = *$tmp569;
            $returnValue488 = ((panda$core$Bit) { false });
            $tmp480 = 6;
            goto $l478;
            $l570:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp572.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp574 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$243_9481->$data + 24));
            m573 = *$tmp574;
            panda$collections$ImmutableArray** $tmp576 = ((panda$collections$ImmutableArray**) ((char*) $match$243_9481->$data + 32));
            args575 = *$tmp576;
            panda$core$Bit $tmp577 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit(m573->value->methodKind.$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp577.value) {
            {
                $returnValue488 = ((panda$core$Bit) { true });
                $tmp480 = 7;
                goto $l478;
                $l578:;
                return $returnValue488;
            }
            }
            {
                int $tmp582;
                {
                    ITable* $tmp586 = ((panda$collections$Iterable*) args575)->$class->itable;
                    while ($tmp586->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp586 = $tmp586->next;
                    }
                    $fn588 $tmp587 = $tmp586->methods[0];
                    panda$collections$Iterator* $tmp589 = $tmp587(((panda$collections$Iterable*) args575));
                    $tmp585 = $tmp589;
                    $tmp584 = $tmp585;
                    Iter$265$17583 = $tmp584;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp584));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp585));
                    $l590:;
                    ITable* $tmp593 = Iter$265$17583->$class->itable;
                    while ($tmp593->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp593 = $tmp593->next;
                    }
                    $fn595 $tmp594 = $tmp593->methods[0];
                    panda$core$Bit $tmp596 = $tmp594(Iter$265$17583);
                    panda$core$Bit $tmp597 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp596);
                    bool $tmp592 = $tmp597.value;
                    if (!$tmp592) goto $l591;
                    {
                        int $tmp600;
                        {
                            ITable* $tmp604 = Iter$265$17583->$class->itable;
                            while ($tmp604->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp604 = $tmp604->next;
                            }
                            $fn606 $tmp605 = $tmp604->methods[1];
                            panda$core$Object* $tmp607 = $tmp605(Iter$265$17583);
                            $tmp603 = $tmp607;
                            $tmp602 = ((org$pandalanguage$pandac$IRNode*) $tmp603);
                            arg601 = $tmp602;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp602));
                            panda$core$Panda$unref$panda$core$Object($tmp603);
                            panda$core$Bit $tmp609 = (($fn608) arg601->$class->vtable[4])(arg601);
                            if ($tmp609.value) {
                            {
                                $returnValue488 = ((panda$core$Bit) { true });
                                $tmp600 = 0;
                                goto $l598;
                                $l610:;
                                $tmp582 = 0;
                                goto $l580;
                                $l611:;
                                $tmp480 = 8;
                                goto $l478;
                                $l612:;
                                return $returnValue488;
                            }
                            }
                        }
                        $tmp600 = -1;
                        goto $l598;
                        $l598:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) arg601));
                        arg601 = NULL;
                        switch ($tmp600) {
                            case 0: goto $l610;
                            case -1: goto $l614;
                        }
                        $l614:;
                    }
                    goto $l590;
                    $l591:;
                }
                $tmp582 = -1;
                goto $l580;
                $l580:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$265$17583));
                Iter$265$17583 = NULL;
                switch ($tmp582) {
                    case 0: goto $l611;
                    case -1: goto $l615;
                }
                $l615:;
            }
            $returnValue488 = ((panda$core$Bit) { false });
            $tmp480 = 9;
            goto $l478;
            $l616:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp618.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp620 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$243_9481->$data + 16));
            value619 = *$tmp620;
            org$pandalanguage$pandac$Type** $tmp622 = ((org$pandalanguage$pandac$Type**) ((char*) $match$243_9481->$data + 24));
            type621 = *$tmp622;
            $returnValue488 = ((panda$core$Bit) { false });
            $tmp480 = 10;
            goto $l478;
            $l623:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp625 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp625.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp627 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$243_9481->$data + 16));
            ce626 = *$tmp627;
            $returnValue488 = ((panda$core$Bit) { false });
            $tmp480 = 11;
            goto $l478;
            $l628:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp630.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp632 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$243_9481->$data + 16));
            base631 = *$tmp632;
            org$pandalanguage$pandac$ChoiceEntry** $tmp634 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$243_9481->$data + 24));
            ce633 = *$tmp634;
            panda$core$Int64* $tmp636 = ((panda$core$Int64*) ((char*) $match$243_9481->$data + 32));
            field635 = *$tmp636;
            $returnValue488 = ((panda$core$Bit) { false });
            $tmp480 = 12;
            goto $l478;
            $l637:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp639.value) {
        {
            org$pandalanguage$pandac$Type** $tmp641 = ((org$pandalanguage$pandac$Type**) ((char*) $match$243_9481->$data + 16));
            type640 = *$tmp641;
            org$pandalanguage$pandac$IRNode** $tmp643 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$243_9481->$data + 24));
            call642 = *$tmp643;
            panda$core$Bit $tmp645 = (($fn644) call642->$class->vtable[4])(call642);
            $returnValue488 = $tmp645;
            $tmp480 = 13;
            goto $l478;
            $l646:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp648.value) {
        {
            org$pandalanguage$pandac$Type** $tmp650 = ((org$pandalanguage$pandac$Type**) ((char*) $match$243_9481->$data + 16));
            Type649 = *$tmp650;
            $returnValue488 = ((panda$core$Bit) { false });
            $tmp480 = 14;
            goto $l478;
            $l651:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp653.value) {
        {
            panda$core$String** $tmp655 = ((panda$core$String**) ((char*) $match$243_9481->$data + 16));
            label654 = *$tmp655;
            $returnValue488 = ((panda$core$Bit) { false });
            $tmp480 = 15;
            goto $l478;
            $l656:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp658.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp660 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$243_9481->$data + 0));
            target659 = *$tmp660;
            org$pandalanguage$pandac$IRNode** $tmp662 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$243_9481->$data + 8));
            value661 = *$tmp662;
            bool $tmp663 = ((panda$core$Bit) { value661 != NULL }).value;
            if (!$tmp663) goto $l664;
            panda$core$Bit $tmp666 = (($fn665) value661->$class->vtable[4])(value661);
            $tmp663 = $tmp666.value;
            $l664:;
            panda$core$Bit $tmp667 = { $tmp663 };
            $returnValue488 = $tmp667;
            $tmp480 = 16;
            goto $l478;
            $l668:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp670 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp670.value) {
        {
            panda$core$String** $tmp672 = ((panda$core$String**) ((char*) $match$243_9481->$data + 16));
            label671 = *$tmp672;
            panda$collections$ImmutableArray** $tmp674 = ((panda$collections$ImmutableArray**) ((char*) $match$243_9481->$data + 24));
            statements673 = *$tmp674;
            org$pandalanguage$pandac$IRNode** $tmp676 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$243_9481->$data + 32));
            test675 = *$tmp676;
            panda$core$Bit $tmp678 = (($fn677) test675->$class->vtable[4])(test675);
            if ($tmp678.value) {
            {
                $returnValue488 = ((panda$core$Bit) { true });
                $tmp480 = 17;
                goto $l478;
                $l679:;
                return $returnValue488;
            }
            }
            {
                int $tmp683;
                {
                    ITable* $tmp687 = ((panda$collections$Iterable*) statements673)->$class->itable;
                    while ($tmp687->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp687 = $tmp687->next;
                    }
                    $fn689 $tmp688 = $tmp687->methods[0];
                    panda$collections$Iterator* $tmp690 = $tmp688(((panda$collections$Iterable*) statements673));
                    $tmp686 = $tmp690;
                    $tmp685 = $tmp686;
                    Iter$289$17684 = $tmp685;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp685));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp686));
                    $l691:;
                    ITable* $tmp694 = Iter$289$17684->$class->itable;
                    while ($tmp694->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp694 = $tmp694->next;
                    }
                    $fn696 $tmp695 = $tmp694->methods[0];
                    panda$core$Bit $tmp697 = $tmp695(Iter$289$17684);
                    panda$core$Bit $tmp698 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp697);
                    bool $tmp693 = $tmp698.value;
                    if (!$tmp693) goto $l692;
                    {
                        int $tmp701;
                        {
                            ITable* $tmp705 = Iter$289$17684->$class->itable;
                            while ($tmp705->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp705 = $tmp705->next;
                            }
                            $fn707 $tmp706 = $tmp705->methods[1];
                            panda$core$Object* $tmp708 = $tmp706(Iter$289$17684);
                            $tmp704 = $tmp708;
                            $tmp703 = ((org$pandalanguage$pandac$IRNode*) $tmp704);
                            s702 = $tmp703;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp703));
                            panda$core$Panda$unref$panda$core$Object($tmp704);
                            panda$core$Bit $tmp710 = (($fn709) s702->$class->vtable[4])(s702);
                            if ($tmp710.value) {
                            {
                                $returnValue488 = ((panda$core$Bit) { true });
                                $tmp701 = 0;
                                goto $l699;
                                $l711:;
                                $tmp683 = 0;
                                goto $l681;
                                $l712:;
                                $tmp480 = 18;
                                goto $l478;
                                $l713:;
                                return $returnValue488;
                            }
                            }
                        }
                        $tmp701 = -1;
                        goto $l699;
                        $l699:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s702));
                        s702 = NULL;
                        switch ($tmp701) {
                            case 0: goto $l711;
                            case -1: goto $l715;
                        }
                        $l715:;
                    }
                    goto $l691;
                    $l692:;
                }
                $tmp683 = -1;
                goto $l681;
                $l681:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$289$17684));
                Iter$289$17684 = NULL;
                switch ($tmp683) {
                    case -1: goto $l716;
                    case 0: goto $l712;
                }
                $l716:;
            }
            $returnValue488 = ((panda$core$Bit) { false });
            $tmp480 = 19;
            goto $l478;
            $l717:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp719.value) {
        {
            $returnValue488 = ((panda$core$Bit) { true });
            $tmp480 = 20;
            goto $l478;
            $l720:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp722 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp722.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp724 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$243_9481->$data + 24));
            base723 = *$tmp724;
            org$pandalanguage$pandac$FieldDecl** $tmp726 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$243_9481->$data + 32));
            field725 = *$tmp726;
            $returnValue488 = ((panda$core$Bit) { false });
            $tmp480 = 21;
            goto $l478;
            $l727:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp729 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp729.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp731 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$243_9481->$data + 16));
            test730 = *$tmp731;
            panda$collections$ImmutableArray** $tmp733 = ((panda$collections$ImmutableArray**) ((char*) $match$243_9481->$data + 24));
            ifTrue732 = *$tmp733;
            org$pandalanguage$pandac$IRNode** $tmp735 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$243_9481->$data + 32));
            ifFalse734 = *$tmp735;
            panda$core$Bit $tmp737 = (($fn736) test730->$class->vtable[4])(test730);
            if ($tmp737.value) {
            {
                $returnValue488 = ((panda$core$Bit) { true });
                $tmp480 = 22;
                goto $l478;
                $l738:;
                return $returnValue488;
            }
            }
            {
                int $tmp742;
                {
                    ITable* $tmp746 = ((panda$collections$Iterable*) ifTrue732)->$class->itable;
                    while ($tmp746->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp746 = $tmp746->next;
                    }
                    $fn748 $tmp747 = $tmp746->methods[0];
                    panda$collections$Iterator* $tmp749 = $tmp747(((panda$collections$Iterable*) ifTrue732));
                    $tmp745 = $tmp749;
                    $tmp744 = $tmp745;
                    Iter$303$17743 = $tmp744;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp744));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp745));
                    $l750:;
                    ITable* $tmp753 = Iter$303$17743->$class->itable;
                    while ($tmp753->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp753 = $tmp753->next;
                    }
                    $fn755 $tmp754 = $tmp753->methods[0];
                    panda$core$Bit $tmp756 = $tmp754(Iter$303$17743);
                    panda$core$Bit $tmp757 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp756);
                    bool $tmp752 = $tmp757.value;
                    if (!$tmp752) goto $l751;
                    {
                        int $tmp760;
                        {
                            ITable* $tmp764 = Iter$303$17743->$class->itable;
                            while ($tmp764->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp764 = $tmp764->next;
                            }
                            $fn766 $tmp765 = $tmp764->methods[1];
                            panda$core$Object* $tmp767 = $tmp765(Iter$303$17743);
                            $tmp763 = $tmp767;
                            $tmp762 = ((org$pandalanguage$pandac$IRNode*) $tmp763);
                            s761 = $tmp762;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp762));
                            panda$core$Panda$unref$panda$core$Object($tmp763);
                            panda$core$Bit $tmp769 = (($fn768) s761->$class->vtable[4])(s761);
                            if ($tmp769.value) {
                            {
                                $returnValue488 = ((panda$core$Bit) { true });
                                $tmp760 = 0;
                                goto $l758;
                                $l770:;
                                $tmp742 = 0;
                                goto $l740;
                                $l771:;
                                $tmp480 = 23;
                                goto $l478;
                                $l772:;
                                return $returnValue488;
                            }
                            }
                        }
                        $tmp760 = -1;
                        goto $l758;
                        $l758:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s761));
                        s761 = NULL;
                        switch ($tmp760) {
                            case 0: goto $l770;
                            case -1: goto $l774;
                        }
                        $l774:;
                    }
                    goto $l750;
                    $l751:;
                }
                $tmp742 = -1;
                goto $l740;
                $l740:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$303$17743));
                Iter$303$17743 = NULL;
                switch ($tmp742) {
                    case 0: goto $l771;
                    case -1: goto $l775;
                }
                $l775:;
            }
            panda$core$Bit $tmp777 = (($fn776) ifFalse734->$class->vtable[4])(ifFalse734);
            $returnValue488 = $tmp777;
            $tmp480 = 24;
            goto $l478;
            $l778:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp780.value) {
        {
            panda$core$UInt64* $tmp782 = ((panda$core$UInt64*) ((char*) $match$243_9481->$data + 24));
            value781 = *$tmp782;
            $returnValue488 = ((panda$core$Bit) { false });
            $tmp480 = 25;
            goto $l478;
            $l783:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp785 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp785.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp787 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$243_9481->$data + 16));
            value786 = *$tmp787;
            panda$core$Bit $tmp789 = (($fn788) value786->$class->vtable[4])(value786);
            $returnValue488 = $tmp789;
            $tmp480 = 26;
            goto $l478;
            $l790:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp792.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp794 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$243_9481->$data + 16));
            value793 = *$tmp794;
            panda$core$Bit $tmp796 = (($fn795) value793->$class->vtable[4])(value793);
            $returnValue488 = $tmp796;
            $tmp480 = 27;
            goto $l478;
            $l797:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp799 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp799.value) {
        {
            panda$core$String** $tmp801 = ((panda$core$String**) ((char*) $match$243_9481->$data + 16));
            label800 = *$tmp801;
            panda$collections$ImmutableArray** $tmp803 = ((panda$collections$ImmutableArray**) ((char*) $match$243_9481->$data + 24));
            statements802 = *$tmp803;
            {
                int $tmp806;
                {
                    ITable* $tmp810 = ((panda$collections$Iterable*) statements802)->$class->itable;
                    while ($tmp810->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp810 = $tmp810->next;
                    }
                    $fn812 $tmp811 = $tmp810->methods[0];
                    panda$collections$Iterator* $tmp813 = $tmp811(((panda$collections$Iterable*) statements802));
                    $tmp809 = $tmp813;
                    $tmp808 = $tmp809;
                    Iter$316$17807 = $tmp808;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp808));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp809));
                    $l814:;
                    ITable* $tmp817 = Iter$316$17807->$class->itable;
                    while ($tmp817->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp817 = $tmp817->next;
                    }
                    $fn819 $tmp818 = $tmp817->methods[0];
                    panda$core$Bit $tmp820 = $tmp818(Iter$316$17807);
                    panda$core$Bit $tmp821 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp820);
                    bool $tmp816 = $tmp821.value;
                    if (!$tmp816) goto $l815;
                    {
                        int $tmp824;
                        {
                            ITable* $tmp828 = Iter$316$17807->$class->itable;
                            while ($tmp828->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp828 = $tmp828->next;
                            }
                            $fn830 $tmp829 = $tmp828->methods[1];
                            panda$core$Object* $tmp831 = $tmp829(Iter$316$17807);
                            $tmp827 = $tmp831;
                            $tmp826 = ((org$pandalanguage$pandac$IRNode*) $tmp827);
                            s825 = $tmp826;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp826));
                            panda$core$Panda$unref$panda$core$Object($tmp827);
                            panda$core$Bit $tmp833 = (($fn832) s825->$class->vtable[4])(s825);
                            if ($tmp833.value) {
                            {
                                $returnValue488 = ((panda$core$Bit) { true });
                                $tmp824 = 0;
                                goto $l822;
                                $l834:;
                                $tmp806 = 0;
                                goto $l804;
                                $l835:;
                                $tmp480 = 28;
                                goto $l478;
                                $l836:;
                                return $returnValue488;
                            }
                            }
                        }
                        $tmp824 = -1;
                        goto $l822;
                        $l822:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s825));
                        s825 = NULL;
                        switch ($tmp824) {
                            case 0: goto $l834;
                            case -1: goto $l838;
                        }
                        $l838:;
                    }
                    goto $l814;
                    $l815:;
                }
                $tmp806 = -1;
                goto $l804;
                $l804:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$316$17807));
                Iter$316$17807 = NULL;
                switch ($tmp806) {
                    case -1: goto $l839;
                    case 0: goto $l835;
                }
                $l839:;
            }
            $returnValue488 = ((panda$core$Bit) { false });
            $tmp480 = 29;
            goto $l478;
            $l840:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp842.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp844 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$243_9481->$data + 16));
            value843 = *$tmp844;
            panda$collections$ImmutableArray** $tmp846 = ((panda$collections$ImmutableArray**) ((char*) $match$243_9481->$data + 24));
            whens845 = *$tmp846;
            panda$collections$ImmutableArray** $tmp848 = ((panda$collections$ImmutableArray**) ((char*) $match$243_9481->$data + 32));
            other847 = *$tmp848;
            panda$core$Bit $tmp850 = (($fn849) value843->$class->vtable[4])(value843);
            if ($tmp850.value) {
            {
                $returnValue488 = ((panda$core$Bit) { true });
                $tmp480 = 30;
                goto $l478;
                $l851:;
                return $returnValue488;
            }
            }
            {
                int $tmp855;
                {
                    ITable* $tmp859 = ((panda$collections$Iterable*) whens845)->$class->itable;
                    while ($tmp859->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp859 = $tmp859->next;
                    }
                    $fn861 $tmp860 = $tmp859->methods[0];
                    panda$collections$Iterator* $tmp862 = $tmp860(((panda$collections$Iterable*) whens845));
                    $tmp858 = $tmp862;
                    $tmp857 = $tmp858;
                    Iter$326$17856 = $tmp857;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp857));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp858));
                    $l863:;
                    ITable* $tmp866 = Iter$326$17856->$class->itable;
                    while ($tmp866->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp866 = $tmp866->next;
                    }
                    $fn868 $tmp867 = $tmp866->methods[0];
                    panda$core$Bit $tmp869 = $tmp867(Iter$326$17856);
                    panda$core$Bit $tmp870 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp869);
                    bool $tmp865 = $tmp870.value;
                    if (!$tmp865) goto $l864;
                    {
                        int $tmp873;
                        {
                            ITable* $tmp877 = Iter$326$17856->$class->itable;
                            while ($tmp877->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp877 = $tmp877->next;
                            }
                            $fn879 $tmp878 = $tmp877->methods[1];
                            panda$core$Object* $tmp880 = $tmp878(Iter$326$17856);
                            $tmp876 = $tmp880;
                            $tmp875 = ((org$pandalanguage$pandac$IRNode*) $tmp876);
                            w874 = $tmp875;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp875));
                            panda$core$Panda$unref$panda$core$Object($tmp876);
                            panda$core$Bit $tmp882 = (($fn881) w874->$class->vtable[4])(w874);
                            if ($tmp882.value) {
                            {
                                $returnValue488 = ((panda$core$Bit) { true });
                                $tmp873 = 0;
                                goto $l871;
                                $l883:;
                                $tmp855 = 0;
                                goto $l853;
                                $l884:;
                                $tmp480 = 31;
                                goto $l478;
                                $l885:;
                                return $returnValue488;
                            }
                            }
                        }
                        $tmp873 = -1;
                        goto $l871;
                        $l871:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w874));
                        w874 = NULL;
                        switch ($tmp873) {
                            case 0: goto $l883;
                            case -1: goto $l887;
                        }
                        $l887:;
                    }
                    goto $l863;
                    $l864:;
                }
                $tmp855 = -1;
                goto $l853;
                $l853:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$326$17856));
                Iter$326$17856 = NULL;
                switch ($tmp855) {
                    case -1: goto $l888;
                    case 0: goto $l884;
                }
                $l888:;
            }
            {
                int $tmp891;
                {
                    ITable* $tmp895 = ((panda$collections$Iterable*) other847)->$class->itable;
                    while ($tmp895->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp895 = $tmp895->next;
                    }
                    $fn897 $tmp896 = $tmp895->methods[0];
                    panda$collections$Iterator* $tmp898 = $tmp896(((panda$collections$Iterable*) other847));
                    $tmp894 = $tmp898;
                    $tmp893 = $tmp894;
                    Iter$331$17892 = $tmp893;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp893));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp894));
                    $l899:;
                    ITable* $tmp902 = Iter$331$17892->$class->itable;
                    while ($tmp902->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp902 = $tmp902->next;
                    }
                    $fn904 $tmp903 = $tmp902->methods[0];
                    panda$core$Bit $tmp905 = $tmp903(Iter$331$17892);
                    panda$core$Bit $tmp906 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp905);
                    bool $tmp901 = $tmp906.value;
                    if (!$tmp901) goto $l900;
                    {
                        int $tmp909;
                        {
                            ITable* $tmp913 = Iter$331$17892->$class->itable;
                            while ($tmp913->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp913 = $tmp913->next;
                            }
                            $fn915 $tmp914 = $tmp913->methods[1];
                            panda$core$Object* $tmp916 = $tmp914(Iter$331$17892);
                            $tmp912 = $tmp916;
                            $tmp911 = ((org$pandalanguage$pandac$IRNode*) $tmp912);
                            s910 = $tmp911;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp911));
                            panda$core$Panda$unref$panda$core$Object($tmp912);
                            panda$core$Bit $tmp918 = (($fn917) s910->$class->vtable[4])(s910);
                            if ($tmp918.value) {
                            {
                                $returnValue488 = ((panda$core$Bit) { true });
                                $tmp909 = 0;
                                goto $l907;
                                $l919:;
                                $tmp891 = 0;
                                goto $l889;
                                $l920:;
                                $tmp480 = 32;
                                goto $l478;
                                $l921:;
                                return $returnValue488;
                            }
                            }
                        }
                        $tmp909 = -1;
                        goto $l907;
                        $l907:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s910));
                        s910 = NULL;
                        switch ($tmp909) {
                            case -1: goto $l923;
                            case 0: goto $l919;
                        }
                        $l923:;
                    }
                    goto $l899;
                    $l900:;
                }
                $tmp891 = -1;
                goto $l889;
                $l889:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$331$17892));
                Iter$331$17892 = NULL;
                switch ($tmp891) {
                    case 0: goto $l920;
                    case -1: goto $l924;
                }
                $l924:;
            }
            $returnValue488 = ((panda$core$Bit) { false });
            $tmp480 = 33;
            goto $l478;
            $l925:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp927.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp929 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$243_9481->$data + 16));
            target928 = *$tmp929;
            org$pandalanguage$pandac$MethodRef** $tmp931 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$243_9481->$data + 24));
            m930 = *$tmp931;
            $returnValue488 = ((panda$core$Bit) { false });
            $tmp480 = 34;
            goto $l478;
            $l932:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp934 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp934.value) {
        {
            panda$core$UInt64* $tmp936 = ((panda$core$UInt64*) ((char*) $match$243_9481->$data + 24));
            value935 = *$tmp936;
            $returnValue488 = ((panda$core$Bit) { false });
            $tmp480 = 35;
            goto $l478;
            $l937:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp939 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp939.value) {
        {
            $returnValue488 = ((panda$core$Bit) { false });
            $tmp480 = 36;
            goto $l478;
            $l940:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp942 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp942.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp944 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$243_9481->$data + 16));
            op943 = *$tmp944;
            org$pandalanguage$pandac$IRNode** $tmp946 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$243_9481->$data + 24));
            base945 = *$tmp946;
            panda$core$Bit $tmp948 = (($fn947) base945->$class->vtable[4])(base945);
            $returnValue488 = $tmp948;
            $tmp480 = 37;
            goto $l478;
            $l949:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp951 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp951.value) {
        {
            panda$core$String** $tmp953 = ((panda$core$String**) ((char*) $match$243_9481->$data + 16));
            label952 = *$tmp953;
            org$pandalanguage$pandac$IRNode** $tmp955 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$243_9481->$data + 24));
            target954 = *$tmp955;
            org$pandalanguage$pandac$IRNode** $tmp957 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$243_9481->$data + 32));
            list956 = *$tmp957;
            panda$collections$ImmutableArray** $tmp959 = ((panda$collections$ImmutableArray**) ((char*) $match$243_9481->$data + 40));
            statements958 = *$tmp959;
            panda$core$Bit $tmp961 = (($fn960) list956->$class->vtable[4])(list956);
            if ($tmp961.value) {
            {
                $returnValue488 = ((panda$core$Bit) { true });
                $tmp480 = 38;
                goto $l478;
                $l962:;
                return $returnValue488;
            }
            }
            {
                int $tmp966;
                {
                    ITable* $tmp970 = ((panda$collections$Iterable*) statements958)->$class->itable;
                    while ($tmp970->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp970 = $tmp970->next;
                    }
                    $fn972 $tmp971 = $tmp970->methods[0];
                    panda$collections$Iterator* $tmp973 = $tmp971(((panda$collections$Iterable*) statements958));
                    $tmp969 = $tmp973;
                    $tmp968 = $tmp969;
                    Iter$350$17967 = $tmp968;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp968));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp969));
                    $l974:;
                    ITable* $tmp977 = Iter$350$17967->$class->itable;
                    while ($tmp977->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp977 = $tmp977->next;
                    }
                    $fn979 $tmp978 = $tmp977->methods[0];
                    panda$core$Bit $tmp980 = $tmp978(Iter$350$17967);
                    panda$core$Bit $tmp981 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp980);
                    bool $tmp976 = $tmp981.value;
                    if (!$tmp976) goto $l975;
                    {
                        int $tmp984;
                        {
                            ITable* $tmp988 = Iter$350$17967->$class->itable;
                            while ($tmp988->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp988 = $tmp988->next;
                            }
                            $fn990 $tmp989 = $tmp988->methods[1];
                            panda$core$Object* $tmp991 = $tmp989(Iter$350$17967);
                            $tmp987 = $tmp991;
                            $tmp986 = ((org$pandalanguage$pandac$IRNode*) $tmp987);
                            s985 = $tmp986;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp986));
                            panda$core$Panda$unref$panda$core$Object($tmp987);
                            panda$core$Bit $tmp993 = (($fn992) s985->$class->vtable[4])(s985);
                            if ($tmp993.value) {
                            {
                                $returnValue488 = ((panda$core$Bit) { true });
                                $tmp984 = 0;
                                goto $l982;
                                $l994:;
                                $tmp966 = 0;
                                goto $l964;
                                $l995:;
                                $tmp480 = 39;
                                goto $l478;
                                $l996:;
                                return $returnValue488;
                            }
                            }
                        }
                        $tmp984 = -1;
                        goto $l982;
                        $l982:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s985));
                        s985 = NULL;
                        switch ($tmp984) {
                            case 0: goto $l994;
                            case -1: goto $l998;
                        }
                        $l998:;
                    }
                    goto $l974;
                    $l975:;
                }
                $tmp966 = -1;
                goto $l964;
                $l964:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$350$17967));
                Iter$350$17967 = NULL;
                switch ($tmp966) {
                    case -1: goto $l999;
                    case 0: goto $l995;
                }
                $l999:;
            }
            $returnValue488 = ((panda$core$Bit) { false });
            $tmp480 = 40;
            goto $l478;
            $l1000:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp1002 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1002.value) {
        {
            panda$core$Real64* $tmp1004 = ((panda$core$Real64*) ((char*) $match$243_9481->$data + 24));
            value1003 = *$tmp1004;
            $returnValue488 = ((panda$core$Bit) { false });
            $tmp480 = 41;
            goto $l478;
            $l1005:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp1007 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1007.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1009 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$243_9481->$data + 16));
            value1008 = *$tmp1009;
            panda$core$Bit $tmp1011 = (($fn1010) value1008->$class->vtable[4])(value1008);
            $returnValue488 = $tmp1011;
            $tmp480 = 42;
            goto $l478;
            $l1012:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp1014 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1014.value) {
        {
            panda$core$Int64* $tmp1016 = ((panda$core$Int64*) ((char*) $match$243_9481->$data + 24));
            id1015 = *$tmp1016;
            $returnValue488 = ((panda$core$Bit) { false });
            $tmp480 = 43;
            goto $l478;
            $l1017:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp1019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1019.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1021 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$243_9481->$data + 0));
            base1020 = *$tmp1021;
            panda$core$Int64* $tmp1023 = ((panda$core$Int64*) ((char*) $match$243_9481->$data + 8));
            id1022 = *$tmp1023;
            panda$core$Bit $tmp1025 = (($fn1024) base1020->$class->vtable[4])(base1020);
            $returnValue488 = $tmp1025;
            $tmp480 = 44;
            goto $l478;
            $l1026:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp1028 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1028.value) {
        {
            $returnValue488 = ((panda$core$Bit) { false });
            $tmp480 = 45;
            goto $l478;
            $l1029:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp1031 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1031.value) {
        {
            panda$core$String** $tmp1033 = ((panda$core$String**) ((char*) $match$243_9481->$data + 16));
            str1032 = *$tmp1033;
            $returnValue488 = ((panda$core$Bit) { false });
            $tmp480 = 46;
            goto $l478;
            $l1034:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp1036 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1036.value) {
        {
            $returnValue488 = ((panda$core$Bit) { false });
            $tmp480 = 47;
            goto $l478;
            $l1037:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp1039 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1039.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1041 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$243_9481->$data + 16));
            test1040 = *$tmp1041;
            org$pandalanguage$pandac$IRNode** $tmp1043 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$243_9481->$data + 24));
            ifTrue1042 = *$tmp1043;
            org$pandalanguage$pandac$IRNode** $tmp1045 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$243_9481->$data + 32));
            ifFalse1044 = *$tmp1045;
            panda$core$Bit $tmp1049 = (($fn1048) test1040->$class->vtable[4])(test1040);
            bool $tmp1047 = $tmp1049.value;
            if ($tmp1047) goto $l1050;
            panda$core$Bit $tmp1052 = (($fn1051) ifTrue1042->$class->vtable[4])(ifTrue1042);
            $tmp1047 = $tmp1052.value;
            $l1050:;
            panda$core$Bit $tmp1053 = { $tmp1047 };
            bool $tmp1046 = $tmp1053.value;
            if ($tmp1046) goto $l1054;
            panda$core$Bit $tmp1056 = (($fn1055) ifFalse1044->$class->vtable[4])(ifFalse1044);
            $tmp1046 = $tmp1056.value;
            $l1054:;
            panda$core$Bit $tmp1057 = { $tmp1046 };
            $returnValue488 = $tmp1057;
            $tmp480 = 48;
            goto $l478;
            $l1058:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp1060 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1060.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1062 = ((org$pandalanguage$pandac$Type**) ((char*) $match$243_9481->$data + 16));
            type1061 = *$tmp1062;
            $returnValue488 = ((panda$core$Bit) { false });
            $tmp480 = 49;
            goto $l478;
            $l1063:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp1065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1065.value) {
        {
            panda$core$String** $tmp1067 = ((panda$core$String**) ((char*) $match$243_9481->$data + 16));
            name1066 = *$tmp1067;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1068.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1070 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$243_9481->$data + 24));
            base1069 = *$tmp1070;
            panda$collections$ImmutableArray** $tmp1072 = ((panda$collections$ImmutableArray**) ((char*) $match$243_9481->$data + 32));
            args1071 = *$tmp1072;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1073 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1073.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1075 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$243_9481->$data + 24));
            target1074 = *$tmp1075;
            panda$collections$ImmutableArray** $tmp1077 = ((panda$collections$ImmutableArray**) ((char*) $match$243_9481->$data + 32));
            methods1076 = *$tmp1077;
            panda$collections$ImmutableArray** $tmp1079 = ((panda$collections$ImmutableArray**) ((char*) $match$243_9481->$data + 40));
            args1078 = *$tmp1079;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1080.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1082 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$243_9481->$data + 16));
            target1081 = *$tmp1082;
            panda$collections$ImmutableArray** $tmp1084 = ((panda$collections$ImmutableArray**) ((char*) $match$243_9481->$data + 24));
            methods1083 = *$tmp1084;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1085 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp1085.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1087 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$243_9481->$data + 16));
            start1086 = *$tmp1087;
            org$pandalanguage$pandac$IRNode** $tmp1089 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$243_9481->$data + 24));
            end1088 = *$tmp1089;
            panda$core$Bit* $tmp1091 = ((panda$core$Bit*) ((char*) $match$243_9481->$data + 32));
            inclusive1090 = *$tmp1091;
            org$pandalanguage$pandac$IRNode** $tmp1093 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$243_9481->$data + 33));
            step1092 = *$tmp1093;
            PANDA_ASSERT(((panda$core$Bit) { false }).value);
        }
        }
        else {
        panda$core$Bit $tmp1094 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp1094.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp1096 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$243_9481->$data + 16));
            kind1095 = *$tmp1096;
            panda$collections$ImmutableArray** $tmp1098 = ((panda$collections$ImmutableArray**) ((char*) $match$243_9481->$data + 24));
            decls1097 = *$tmp1098;
            {
                int $tmp1101;
                {
                    ITable* $tmp1105 = ((panda$collections$Iterable*) decls1097)->$class->itable;
                    while ($tmp1105->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1105 = $tmp1105->next;
                    }
                    $fn1107 $tmp1106 = $tmp1105->methods[0];
                    panda$collections$Iterator* $tmp1108 = $tmp1106(((panda$collections$Iterable*) decls1097));
                    $tmp1104 = $tmp1108;
                    $tmp1103 = $tmp1104;
                    Iter$385$171102 = $tmp1103;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1103));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1104));
                    $l1109:;
                    ITable* $tmp1112 = Iter$385$171102->$class->itable;
                    while ($tmp1112->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1112 = $tmp1112->next;
                    }
                    $fn1114 $tmp1113 = $tmp1112->methods[0];
                    panda$core$Bit $tmp1115 = $tmp1113(Iter$385$171102);
                    panda$core$Bit $tmp1116 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1115);
                    bool $tmp1111 = $tmp1116.value;
                    if (!$tmp1111) goto $l1110;
                    {
                        int $tmp1119;
                        {
                            ITable* $tmp1123 = Iter$385$171102->$class->itable;
                            while ($tmp1123->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1123 = $tmp1123->next;
                            }
                            $fn1125 $tmp1124 = $tmp1123->methods[1];
                            panda$core$Object* $tmp1126 = $tmp1124(Iter$385$171102);
                            $tmp1122 = $tmp1126;
                            $tmp1121 = ((org$pandalanguage$pandac$IRNode*) $tmp1122);
                            d1120 = $tmp1121;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1121));
                            panda$core$Panda$unref$panda$core$Object($tmp1122);
                            panda$core$Bit $tmp1128 = (($fn1127) d1120->$class->vtable[4])(d1120);
                            if ($tmp1128.value) {
                            {
                                $returnValue488 = ((panda$core$Bit) { true });
                                $tmp1119 = 0;
                                goto $l1117;
                                $l1129:;
                                $tmp1101 = 0;
                                goto $l1099;
                                $l1130:;
                                $tmp480 = 50;
                                goto $l478;
                                $l1131:;
                                return $returnValue488;
                            }
                            }
                        }
                        $tmp1119 = -1;
                        goto $l1117;
                        $l1117:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) d1120));
                        d1120 = NULL;
                        switch ($tmp1119) {
                            case -1: goto $l1133;
                            case 0: goto $l1129;
                        }
                        $l1133:;
                    }
                    goto $l1109;
                    $l1110:;
                }
                $tmp1101 = -1;
                goto $l1099;
                $l1099:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$385$171102));
                Iter$385$171102 = NULL;
                switch ($tmp1101) {
                    case 0: goto $l1130;
                    case -1: goto $l1134;
                }
                $l1134:;
            }
            $returnValue488 = ((panda$core$Bit) { false });
            $tmp480 = 51;
            goto $l478;
            $l1135:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp1137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp1137.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp1139 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$243_9481->$data + 16));
            variable1138 = *$tmp1139;
            $returnValue488 = ((panda$core$Bit) { false });
            $tmp480 = 52;
            goto $l478;
            $l1140:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp1142 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp1142.value) {
        {
            panda$collections$ImmutableArray** $tmp1144 = ((panda$collections$ImmutableArray**) ((char*) $match$243_9481->$data + 16));
            tests1143 = *$tmp1144;
            panda$collections$ImmutableArray** $tmp1146 = ((panda$collections$ImmutableArray**) ((char*) $match$243_9481->$data + 24));
            statements1145 = *$tmp1146;
            {
                int $tmp1149;
                {
                    ITable* $tmp1153 = ((panda$collections$Iterable*) tests1143)->$class->itable;
                    while ($tmp1153->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1153 = $tmp1153->next;
                    }
                    $fn1155 $tmp1154 = $tmp1153->methods[0];
                    panda$collections$Iterator* $tmp1156 = $tmp1154(((panda$collections$Iterable*) tests1143));
                    $tmp1152 = $tmp1156;
                    $tmp1151 = $tmp1152;
                    Iter$394$171150 = $tmp1151;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1151));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1152));
                    $l1157:;
                    ITable* $tmp1160 = Iter$394$171150->$class->itable;
                    while ($tmp1160->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1160 = $tmp1160->next;
                    }
                    $fn1162 $tmp1161 = $tmp1160->methods[0];
                    panda$core$Bit $tmp1163 = $tmp1161(Iter$394$171150);
                    panda$core$Bit $tmp1164 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1163);
                    bool $tmp1159 = $tmp1164.value;
                    if (!$tmp1159) goto $l1158;
                    {
                        int $tmp1167;
                        {
                            ITable* $tmp1171 = Iter$394$171150->$class->itable;
                            while ($tmp1171->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1171 = $tmp1171->next;
                            }
                            $fn1173 $tmp1172 = $tmp1171->methods[1];
                            panda$core$Object* $tmp1174 = $tmp1172(Iter$394$171150);
                            $tmp1170 = $tmp1174;
                            $tmp1169 = ((org$pandalanguage$pandac$IRNode*) $tmp1170);
                            t1168 = $tmp1169;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1169));
                            panda$core$Panda$unref$panda$core$Object($tmp1170);
                            panda$core$Bit $tmp1176 = (($fn1175) t1168->$class->vtable[4])(t1168);
                            if ($tmp1176.value) {
                            {
                                $returnValue488 = ((panda$core$Bit) { true });
                                $tmp1167 = 0;
                                goto $l1165;
                                $l1177:;
                                $tmp1149 = 0;
                                goto $l1147;
                                $l1178:;
                                $tmp480 = 53;
                                goto $l478;
                                $l1179:;
                                return $returnValue488;
                            }
                            }
                        }
                        $tmp1167 = -1;
                        goto $l1165;
                        $l1165:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1168));
                        t1168 = NULL;
                        switch ($tmp1167) {
                            case -1: goto $l1181;
                            case 0: goto $l1177;
                        }
                        $l1181:;
                    }
                    goto $l1157;
                    $l1158:;
                }
                $tmp1149 = -1;
                goto $l1147;
                $l1147:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$394$171150));
                Iter$394$171150 = NULL;
                switch ($tmp1149) {
                    case -1: goto $l1182;
                    case 0: goto $l1178;
                }
                $l1182:;
            }
            {
                int $tmp1185;
                {
                    ITable* $tmp1189 = ((panda$collections$Iterable*) statements1145)->$class->itable;
                    while ($tmp1189->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1189 = $tmp1189->next;
                    }
                    $fn1191 $tmp1190 = $tmp1189->methods[0];
                    panda$collections$Iterator* $tmp1192 = $tmp1190(((panda$collections$Iterable*) statements1145));
                    $tmp1188 = $tmp1192;
                    $tmp1187 = $tmp1188;
                    Iter$399$171186 = $tmp1187;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1187));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1188));
                    $l1193:;
                    ITable* $tmp1196 = Iter$399$171186->$class->itable;
                    while ($tmp1196->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1196 = $tmp1196->next;
                    }
                    $fn1198 $tmp1197 = $tmp1196->methods[0];
                    panda$core$Bit $tmp1199 = $tmp1197(Iter$399$171186);
                    panda$core$Bit $tmp1200 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1199);
                    bool $tmp1195 = $tmp1200.value;
                    if (!$tmp1195) goto $l1194;
                    {
                        int $tmp1203;
                        {
                            ITable* $tmp1207 = Iter$399$171186->$class->itable;
                            while ($tmp1207->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1207 = $tmp1207->next;
                            }
                            $fn1209 $tmp1208 = $tmp1207->methods[1];
                            panda$core$Object* $tmp1210 = $tmp1208(Iter$399$171186);
                            $tmp1206 = $tmp1210;
                            $tmp1205 = ((org$pandalanguage$pandac$IRNode*) $tmp1206);
                            s1204 = $tmp1205;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1205));
                            panda$core$Panda$unref$panda$core$Object($tmp1206);
                            panda$core$Bit $tmp1212 = (($fn1211) s1204->$class->vtable[4])(s1204);
                            if ($tmp1212.value) {
                            {
                                $returnValue488 = ((panda$core$Bit) { true });
                                $tmp1203 = 0;
                                goto $l1201;
                                $l1213:;
                                $tmp1185 = 0;
                                goto $l1183;
                                $l1214:;
                                $tmp480 = 54;
                                goto $l478;
                                $l1215:;
                                return $returnValue488;
                            }
                            }
                        }
                        $tmp1203 = -1;
                        goto $l1201;
                        $l1201:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1204));
                        s1204 = NULL;
                        switch ($tmp1203) {
                            case 0: goto $l1213;
                            case -1: goto $l1217;
                        }
                        $l1217:;
                    }
                    goto $l1193;
                    $l1194:;
                }
                $tmp1185 = -1;
                goto $l1183;
                $l1183:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$399$171186));
                Iter$399$171186 = NULL;
                switch ($tmp1185) {
                    case 0: goto $l1214;
                    case -1: goto $l1218;
                }
                $l1218:;
            }
            $returnValue488 = ((panda$core$Bit) { false });
            $tmp480 = 55;
            goto $l478;
            $l1219:;
            return $returnValue488;
        }
        }
        else {
        panda$core$Bit $tmp1221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_9481->$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp1221.value) {
        {
            panda$core$String** $tmp1223 = ((panda$core$String**) ((char*) $match$243_9481->$data + 16));
            label1222 = *$tmp1223;
            org$pandalanguage$pandac$IRNode** $tmp1225 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$243_9481->$data + 24));
            test1224 = *$tmp1225;
            panda$collections$ImmutableArray** $tmp1227 = ((panda$collections$ImmutableArray**) ((char*) $match$243_9481->$data + 32));
            statements1226 = *$tmp1227;
            panda$core$Bit $tmp1229 = (($fn1228) test1224->$class->vtable[4])(test1224);
            if ($tmp1229.value) {
            {
                $returnValue488 = ((panda$core$Bit) { true });
                $tmp480 = 56;
                goto $l478;
                $l1230:;
                return $returnValue488;
            }
            }
            {
                int $tmp1234;
                {
                    ITable* $tmp1238 = ((panda$collections$Iterable*) statements1226)->$class->itable;
                    while ($tmp1238->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1238 = $tmp1238->next;
                    }
                    $fn1240 $tmp1239 = $tmp1238->methods[0];
                    panda$collections$Iterator* $tmp1241 = $tmp1239(((panda$collections$Iterable*) statements1226));
                    $tmp1237 = $tmp1241;
                    $tmp1236 = $tmp1237;
                    Iter$409$171235 = $tmp1236;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1236));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1237));
                    $l1242:;
                    ITable* $tmp1245 = Iter$409$171235->$class->itable;
                    while ($tmp1245->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1245 = $tmp1245->next;
                    }
                    $fn1247 $tmp1246 = $tmp1245->methods[0];
                    panda$core$Bit $tmp1248 = $tmp1246(Iter$409$171235);
                    panda$core$Bit $tmp1249 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1248);
                    bool $tmp1244 = $tmp1249.value;
                    if (!$tmp1244) goto $l1243;
                    {
                        int $tmp1252;
                        {
                            ITable* $tmp1256 = Iter$409$171235->$class->itable;
                            while ($tmp1256->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1256 = $tmp1256->next;
                            }
                            $fn1258 $tmp1257 = $tmp1256->methods[1];
                            panda$core$Object* $tmp1259 = $tmp1257(Iter$409$171235);
                            $tmp1255 = $tmp1259;
                            $tmp1254 = ((org$pandalanguage$pandac$IRNode*) $tmp1255);
                            s1253 = $tmp1254;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1254));
                            panda$core$Panda$unref$panda$core$Object($tmp1255);
                            panda$core$Bit $tmp1261 = (($fn1260) s1253->$class->vtable[4])(s1253);
                            if ($tmp1261.value) {
                            {
                                $returnValue488 = ((panda$core$Bit) { true });
                                $tmp1252 = 0;
                                goto $l1250;
                                $l1262:;
                                $tmp1234 = 0;
                                goto $l1232;
                                $l1263:;
                                $tmp480 = 57;
                                goto $l478;
                                $l1264:;
                                return $returnValue488;
                            }
                            }
                        }
                        $tmp1252 = -1;
                        goto $l1250;
                        $l1250:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1253));
                        s1253 = NULL;
                        switch ($tmp1252) {
                            case 0: goto $l1262;
                            case -1: goto $l1266;
                        }
                        $l1266:;
                    }
                    goto $l1242;
                    $l1243:;
                }
                $tmp1234 = -1;
                goto $l1232;
                $l1232:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$409$171235));
                Iter$409$171235 = NULL;
                switch ($tmp1234) {
                    case -1: goto $l1267;
                    case 0: goto $l1263;
                }
                $l1267:;
            }
            $returnValue488 = ((panda$core$Bit) { false });
            $tmp480 = 58;
            goto $l478;
            $l1268:;
            return $returnValue488;
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
    $tmp480 = -1;
    goto $l478;
    $l478:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp482));
    switch ($tmp480) {
        case 21: goto $l727;
        case 15: goto $l656;
        case 2: goto $l519;
        case 47: goto $l1037;
        case 3: goto $l524;
        case 17: goto $l679;
        case 29: goto $l840;
        case 11: goto $l628;
        case 28: goto $l836;
        case 12: goto $l637;
        case 41: goto $l1005;
        case 38: goto $l962;
        case 42: goto $l1012;
        case 58: goto $l1268;
        case -1: goto $l1270;
        case 14: goto $l651;
        case 57: goto $l1264;
        case 53: goto $l1179;
        case 36: goto $l940;
        case 44: goto $l1026;
        case 35: goto $l937;
        case 37: goto $l949;
        case 20: goto $l720;
        case 43: goto $l1017;
        case 13: goto $l646;
        case 48: goto $l1058;
        case 49: goto $l1063;
        case 27: goto $l797;
        case 32: goto $l921;
        case 33: goto $l925;
        case 34: goto $l932;
        case 45: goto $l1029;
        case 50: goto $l1131;
        case 5: goto $l565;
        case 46: goto $l1034;
        case 6: goto $l570;
        case 25: goto $l783;
        case 19: goto $l717;
        case 24: goto $l778;
        case 16: goto $l668;
        case 4: goto $l561;
        case 23: goto $l772;
        case 18: goto $l713;
        case 1: goto $l499;
        case 40: goto $l1000;
        case 9: goto $l616;
        case 10: goto $l623;
        case 52: goto $l1140;
        case 0: goto $l496;
        case 7: goto $l578;
        case 26: goto $l790;
        case 39: goto $l996;
        case 51: goto $l1135;
        case 8: goto $l612;
        case 22: goto $l738;
        case 31: goto $l885;
        case 54: goto $l1215;
        case 30: goto $l851;
        case 56: goto $l1230;
        case 55: goto $l1219;
    }
    $l1270:;
}
panda$core$String* org$pandalanguage$pandac$IRNode$convert$R$panda$core$String(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$422_91274 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1275;
    org$pandalanguage$pandac$IRNode* test1277 = NULL;
    org$pandalanguage$pandac$IRNode* msg1279 = NULL;
    panda$core$String* $returnValue1281;
    panda$core$String* $tmp1282;
    panda$core$String* $tmp1283;
    panda$core$String* $tmp1284;
    panda$core$String* $tmp1285;
    panda$core$String* $tmp1286;
    panda$core$String* $tmp1296;
    panda$core$String* $tmp1297;
    panda$core$String* $tmp1298;
    panda$core$String* $tmp1306;
    org$pandalanguage$pandac$IRNode* left1311 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op1313;
    org$pandalanguage$pandac$IRNode* right1315 = NULL;
    panda$core$String* $tmp1317;
    panda$core$String* $tmp1318;
    panda$core$String* $tmp1319;
    panda$core$String* $tmp1320;
    panda$core$String* $tmp1321;
    panda$core$String* $tmp1322;
    panda$core$String* $tmp1323;
    panda$core$Object* $tmp1328;
    panda$core$Bit bit1339;
    panda$core$String* $tmp1341;
    panda$core$String* $tmp1342;
    panda$collections$ImmutableArray* statements1347 = NULL;
    panda$core$MutableString* result1352 = NULL;
    panda$core$MutableString* $tmp1353;
    panda$core$MutableString* $tmp1354;
    panda$collections$Iterator* Iter$436$171360 = NULL;
    panda$collections$Iterator* $tmp1361;
    panda$collections$Iterator* $tmp1362;
    org$pandalanguage$pandac$IRNode* s1378 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1379;
    panda$core$Object* $tmp1380;
    panda$core$String* $tmp1385;
    panda$core$Char8 $tmp1390;
    panda$core$String* $tmp1391;
    panda$core$String* $tmp1392;
    panda$collections$ImmutableArray* statements1399 = NULL;
    panda$collections$ImmutableArray* finally1401 = NULL;
    panda$core$MutableString* result1406 = NULL;
    panda$core$MutableString* $tmp1407;
    panda$core$MutableString* $tmp1408;
    panda$collections$Iterator* Iter$443$171414 = NULL;
    panda$collections$Iterator* $tmp1415;
    panda$collections$Iterator* $tmp1416;
    org$pandalanguage$pandac$IRNode* s1432 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1433;
    panda$core$Object* $tmp1434;
    panda$core$String* $tmp1439;
    panda$collections$Iterator* Iter$447$171448 = NULL;
    panda$collections$Iterator* $tmp1449;
    panda$collections$Iterator* $tmp1450;
    org$pandalanguage$pandac$IRNode* s1466 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1467;
    panda$core$Object* $tmp1468;
    panda$core$String* $tmp1473;
    panda$core$Char8 $tmp1478;
    panda$core$String* $tmp1479;
    panda$core$String* $tmp1480;
    panda$core$String* label1487 = NULL;
    panda$core$String* $tmp1489;
    panda$core$String* $tmp1490;
    panda$core$String* $tmp1491;
    panda$core$String* $tmp1498;
    org$pandalanguage$pandac$MethodRef* m1503 = NULL;
    panda$collections$ImmutableArray* args1505 = NULL;
    panda$core$String* $tmp1507;
    panda$core$String* $tmp1508;
    panda$core$String* $tmp1509;
    panda$core$String* $tmp1510;
    panda$core$String* $tmp1511;
    panda$core$String* $tmp1515;
    org$pandalanguage$pandac$IRNode* value1523 = NULL;
    org$pandalanguage$pandac$Type* type1525 = NULL;
    org$pandalanguage$pandac$Type* $tmp1527;
    org$pandalanguage$pandac$Type* $tmp1530;
    panda$core$String* $tmp1533;
    panda$core$String* $tmp1534;
    panda$core$String* $tmp1535;
    panda$core$String* $tmp1536;
    panda$core$String* $tmp1537;
    panda$core$String* $tmp1547;
    panda$core$String* $tmp1548;
    panda$core$String* $tmp1549;
    panda$core$String* $tmp1550;
    panda$core$String* $tmp1551;
    org$pandalanguage$pandac$ChoiceEntry* ce1562 = NULL;
    panda$core$String* $tmp1564;
    panda$core$String* $tmp1565;
    org$pandalanguage$pandac$IRNode* base1570 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce1572 = NULL;
    panda$core$Int64 field1574;
    panda$core$String* $tmp1576;
    panda$core$String* $tmp1577;
    panda$core$String* $tmp1578;
    panda$core$String* $tmp1579;
    panda$core$String* $tmp1580;
    panda$core$String* $tmp1581;
    panda$core$String* $tmp1582;
    panda$core$Object* $tmp1590;
    org$pandalanguage$pandac$Type* type1598 = NULL;
    org$pandalanguage$pandac$IRNode* call1600 = NULL;
    org$pandalanguage$pandac$IRNode* $match$469_171605 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1606;
    panda$collections$ImmutableArray* args1608 = NULL;
    panda$core$String* $tmp1610;
    panda$core$String* $tmp1611;
    panda$core$String* $tmp1612;
    panda$core$String* $tmp1613;
    panda$core$String* $tmp1614;
    panda$core$String* $tmp1618;
    org$pandalanguage$pandac$Type* Type1628 = NULL;
    panda$core$String* $tmp1630;
    panda$core$String* label1635 = NULL;
    panda$core$String* $tmp1637;
    panda$core$String* $tmp1638;
    panda$core$String* $tmp1639;
    panda$core$String* $tmp1646;
    org$pandalanguage$pandac$IRNode* target1651 = NULL;
    org$pandalanguage$pandac$IRNode* value1653 = NULL;
    panda$core$String* $tmp1655;
    panda$core$String* $tmp1656;
    panda$core$String* $tmp1657;
    panda$core$String* $tmp1658;
    panda$core$String* $tmp1659;
    panda$core$String* $tmp1669;
    panda$core$String* $tmp1670;
    panda$core$String* label1676 = NULL;
    panda$collections$ImmutableArray* statements1678 = NULL;
    org$pandalanguage$pandac$IRNode* test1680 = NULL;
    panda$core$MutableString* result1685 = NULL;
    panda$core$MutableString* $tmp1686;
    panda$core$MutableString* $tmp1687;
    panda$core$String* $tmp1689;
    panda$core$String* $tmp1690;
    panda$collections$Iterator* Iter$493$171698 = NULL;
    panda$collections$Iterator* $tmp1699;
    panda$collections$Iterator* $tmp1700;
    org$pandalanguage$pandac$IRNode* s1716 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1717;
    panda$core$Object* $tmp1718;
    panda$core$String* $tmp1723;
    panda$core$String* $tmp1728;
    panda$core$String* $tmp1729;
    panda$core$String* $tmp1734;
    panda$core$String* $tmp1735;
    org$pandalanguage$pandac$IRNode* expr1742 = NULL;
    org$pandalanguage$pandac$IRNode* stmt1744 = NULL;
    panda$core$String* $tmp1746;
    panda$core$String* $tmp1747;
    panda$core$String* $tmp1748;
    panda$core$String* $tmp1749;
    panda$core$String* $tmp1750;
    org$pandalanguage$pandac$IRNode* base1761 = NULL;
    org$pandalanguage$pandac$FieldDecl* field1763 = NULL;
    panda$core$String* $tmp1765;
    panda$core$String* $tmp1766;
    panda$core$String* $tmp1767;
    panda$core$String* $tmp1768;
    panda$core$String* $tmp1769;
    org$pandalanguage$pandac$IRNode* test1780 = NULL;
    panda$collections$ImmutableArray* ifTrue1782 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse1784 = NULL;
    panda$core$MutableString* result1789 = NULL;
    panda$core$MutableString* $tmp1790;
    panda$core$MutableString* $tmp1791;
    panda$core$String* $tmp1793;
    panda$core$String* $tmp1794;
    panda$collections$Iterator* Iter$504$171802 = NULL;
    panda$collections$Iterator* $tmp1803;
    panda$collections$Iterator* $tmp1804;
    org$pandalanguage$pandac$IRNode* s1820 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1821;
    panda$core$Object* $tmp1822;
    panda$core$String* $tmp1827;
    panda$core$Char8 $tmp1832;
    panda$core$String* $tmp1833;
    panda$core$String* $tmp1834;
    panda$core$String* $tmp1839;
    panda$core$String* $tmp1840;
    panda$core$UInt64 value1847;
    panda$core$String* $tmp1849;
    panda$core$String* $tmp1850;
    org$pandalanguage$pandac$IRNode* value1855 = NULL;
    panda$core$String* $tmp1857;
    panda$core$String* $tmp1858;
    panda$core$String* $tmp1859;
    org$pandalanguage$pandac$IRNode* value1867 = NULL;
    panda$core$String* $tmp1869;
    panda$core$String* $tmp1870;
    panda$core$String* $tmp1871;
    panda$core$String* label1879 = NULL;
    panda$collections$ImmutableArray* statements1881 = NULL;
    panda$core$MutableString* result1886 = NULL;
    panda$core$MutableString* $tmp1887;
    panda$core$MutableString* $tmp1888;
    panda$core$String* $tmp1890;
    panda$core$String* $tmp1891;
    panda$collections$Iterator* Iter$524$171899 = NULL;
    panda$collections$Iterator* $tmp1900;
    panda$collections$Iterator* $tmp1901;
    org$pandalanguage$pandac$IRNode* s1917 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1918;
    panda$core$Object* $tmp1919;
    panda$core$String* $tmp1924;
    panda$core$Char8 $tmp1929;
    panda$core$String* $tmp1930;
    panda$core$String* $tmp1931;
    org$pandalanguage$pandac$IRNode* value1938 = NULL;
    panda$collections$ImmutableArray* whens1940 = NULL;
    panda$collections$ImmutableArray* other1942 = NULL;
    panda$core$MutableString* result1947 = NULL;
    panda$core$MutableString* $tmp1948;
    panda$core$MutableString* $tmp1949;
    panda$core$String* $tmp1951;
    panda$core$String* $tmp1952;
    panda$collections$Iterator* Iter$531$171960 = NULL;
    panda$collections$Iterator* $tmp1961;
    panda$collections$Iterator* $tmp1962;
    org$pandalanguage$pandac$IRNode* w1978 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp1979;
    panda$core$Object* $tmp1980;
    panda$core$String* $tmp1985;
    panda$collections$Iterator* Iter$536$211994 = NULL;
    panda$collections$Iterator* $tmp1995;
    panda$collections$Iterator* $tmp1996;
    org$pandalanguage$pandac$IRNode* s2012 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2013;
    panda$core$Object* $tmp2014;
    panda$core$String* $tmp2019;
    panda$core$Char8 $tmp2024;
    panda$core$String* $tmp2025;
    panda$core$String* $tmp2026;
    org$pandalanguage$pandac$IRNode* target2033 = NULL;
    org$pandalanguage$pandac$MethodRef* m2035 = NULL;
    panda$core$String* $tmp2037;
    panda$core$String* $tmp2038;
    panda$core$String* $tmp2039;
    panda$core$String* $tmp2040;
    panda$core$String* $tmp2041;
    panda$core$String* $tmp2051;
    panda$core$UInt64 value2055;
    panda$core$String* $tmp2057;
    panda$core$String* $tmp2058;
    panda$core$Object* $tmp2060;
    panda$core$String* $tmp2066;
    org$pandalanguage$pandac$parser$Token$Kind op2071;
    org$pandalanguage$pandac$IRNode* base2073 = NULL;
    panda$core$String* $tmp2075;
    panda$core$String* $tmp2076;
    panda$core$String* $tmp2077;
    panda$core$String* $tmp2078;
    panda$core$String* $tmp2079;
    panda$core$Object* $tmp2080;
    panda$core$String* label2092 = NULL;
    org$pandalanguage$pandac$IRNode* target2094 = NULL;
    org$pandalanguage$pandac$IRNode* list2096 = NULL;
    panda$collections$ImmutableArray* statements2098 = NULL;
    panda$core$MutableString* result2103 = NULL;
    panda$core$MutableString* $tmp2104;
    panda$core$MutableString* $tmp2105;
    panda$core$String* $tmp2107;
    panda$core$String* $tmp2108;
    panda$core$String* $tmp2112;
    panda$core$String* $tmp2113;
    panda$core$String* $tmp2114;
    panda$core$String* $tmp2115;
    panda$collections$Iterator* Iter$559$172126 = NULL;
    panda$collections$Iterator* $tmp2127;
    panda$collections$Iterator* $tmp2128;
    org$pandalanguage$pandac$IRNode* s2144 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2145;
    panda$core$Object* $tmp2146;
    panda$core$String* $tmp2151;
    panda$core$Char8 $tmp2156;
    panda$core$String* $tmp2157;
    panda$core$String* $tmp2158;
    panda$core$Real64 value2165;
    panda$core$String* $tmp2167;
    panda$core$String* $tmp2168;
    org$pandalanguage$pandac$IRNode* value2173 = NULL;
    panda$core$String* $tmp2175;
    panda$core$String* $tmp2176;
    panda$core$String* $tmp2177;
    panda$core$String* $tmp2184;
    org$pandalanguage$pandac$Type* type2189 = NULL;
    panda$core$Int64 id2191;
    panda$core$String* $tmp2193;
    panda$core$String* $tmp2194;
    panda$core$String* $tmp2195;
    panda$core$Object* $tmp2197;
    org$pandalanguage$pandac$IRNode* base2205 = NULL;
    panda$core$Int64 id2207;
    panda$core$String* $tmp2209;
    panda$core$String* $tmp2210;
    panda$core$String* $tmp2211;
    panda$core$String* $tmp2212;
    panda$core$String* $tmp2213;
    panda$core$Object* $tmp2215;
    panda$core$String* $tmp2226;
    panda$core$String* str2231 = NULL;
    panda$core$String* $tmp2233;
    panda$core$String* $tmp2237;
    org$pandalanguage$pandac$IRNode* test2242 = NULL;
    org$pandalanguage$pandac$IRNode* ifTrue2244 = NULL;
    org$pandalanguage$pandac$IRNode* ifFalse2246 = NULL;
    panda$core$String* $tmp2248;
    panda$core$String* $tmp2249;
    panda$core$String* $tmp2250;
    panda$core$String* $tmp2251;
    panda$core$String* $tmp2252;
    panda$core$String* $tmp2253;
    panda$core$String* $tmp2254;
    org$pandalanguage$pandac$Type* type2268 = NULL;
    panda$core$String* $tmp2270;
    panda$core$String* $tmp2271;
    panda$core$String* name2276 = NULL;
    panda$core$String* $tmp2278;
    org$pandalanguage$pandac$IRNode* base2282 = NULL;
    panda$collections$ImmutableArray* args2284 = NULL;
    panda$core$String* $tmp2286;
    panda$core$String* $tmp2287;
    panda$core$String* $tmp2288;
    panda$core$String* $tmp2289;
    panda$core$String* $tmp2290;
    panda$core$String* $tmp2295;
    org$pandalanguage$pandac$IRNode* target2303 = NULL;
    panda$collections$ImmutableArray* methods2305 = NULL;
    panda$collections$ImmutableArray* args2307 = NULL;
    panda$core$String* $tmp2309;
    panda$core$String* $tmp2310;
    panda$core$String* $tmp2311;
    panda$core$String* $tmp2312;
    panda$core$String* $tmp2313;
    panda$core$String* $tmp2314;
    panda$core$String* $tmp2315;
    panda$core$Object* $tmp2320;
    panda$core$String* $tmp2325;
    org$pandalanguage$pandac$IRNode* target2333 = NULL;
    panda$collections$ImmutableArray* methods2335 = NULL;
    panda$core$String* $tmp2337;
    panda$core$String* $tmp2338;
    panda$core$String* $tmp2339;
    panda$core$String* $tmp2340;
    panda$core$String* $tmp2341;
    panda$core$Object* $tmp2346;
    org$pandalanguage$pandac$IRNode* start2354 = NULL;
    org$pandalanguage$pandac$IRNode* end2356 = NULL;
    panda$core$Bit inclusive2358;
    org$pandalanguage$pandac$IRNode* step2360 = NULL;
    panda$core$MutableString* result2365 = NULL;
    panda$core$MutableString* $tmp2366;
    panda$core$MutableString* $tmp2367;
    panda$core$String* $tmp2371;
    panda$core$String* $tmp2372;
    panda$core$String* $tmp2377;
    panda$core$String* $tmp2378;
    org$pandalanguage$pandac$Variable$Kind kind2385;
    panda$collections$ImmutableArray* decls2387 = NULL;
    panda$core$MutableString* result2392 = NULL;
    panda$core$MutableString* $tmp2393;
    panda$core$MutableString* $tmp2394;
    org$pandalanguage$pandac$Variable$Kind $match$613_172396;
    panda$core$String* $tmp2405;
    panda$core$String* $tmp2407;
    panda$core$String* $tmp2408;
    org$pandalanguage$pandac$Variable* variable2415 = NULL;
    panda$core$String* $tmp2417;
    panda$collections$ImmutableArray* tests2421 = NULL;
    panda$collections$ImmutableArray* statements2423 = NULL;
    panda$core$String* $tmp2425;
    panda$core$String* $tmp2426;
    panda$core$String* $tmp2427;
    panda$core$String* $tmp2428;
    panda$core$String* $tmp2429;
    panda$core$String* $tmp2431;
    panda$core$String* $tmp2436;
    panda$core$String* label2445 = NULL;
    org$pandalanguage$pandac$IRNode* test2447 = NULL;
    panda$collections$ImmutableArray* statements2449 = NULL;
    panda$core$MutableString* result2454 = NULL;
    panda$core$MutableString* $tmp2455;
    panda$core$MutableString* $tmp2456;
    panda$core$String* $tmp2458;
    panda$core$String* $tmp2459;
    panda$core$String* $tmp2463;
    panda$core$String* $tmp2464;
    panda$collections$Iterator* Iter$631$172472 = NULL;
    panda$collections$Iterator* $tmp2473;
    panda$collections$Iterator* $tmp2474;
    org$pandalanguage$pandac$IRNode* s2490 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2491;
    panda$core$Object* $tmp2492;
    panda$core$String* $tmp2497;
    panda$core$Char8 $tmp2502;
    panda$core$String* $tmp2503;
    panda$core$String* $tmp2504;
    int $tmp1273;
    {
        $tmp1275 = self;
        $match$422_91274 = $tmp1275;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1275));
        panda$core$Bit $tmp1276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp1276.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1278 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$422_91274->$data + 16));
            test1277 = *$tmp1278;
            org$pandalanguage$pandac$IRNode** $tmp1280 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$422_91274->$data + 24));
            msg1279 = *$tmp1280;
            if (((panda$core$Bit) { msg1279 != NULL }).value) {
            {
                panda$core$String* $tmp1288 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1287, ((panda$core$Object*) test1277));
                $tmp1286 = $tmp1288;
                panda$core$String* $tmp1290 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1286, &$s1289);
                $tmp1285 = $tmp1290;
                panda$core$String* $tmp1291 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1285, ((panda$core$Object*) msg1279));
                $tmp1284 = $tmp1291;
                panda$core$String* $tmp1293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1284, &$s1292);
                $tmp1283 = $tmp1293;
                $tmp1282 = $tmp1283;
                $returnValue1281 = $tmp1282;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1282));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1283));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1284));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1285));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1286));
                $tmp1273 = 0;
                goto $l1271;
                $l1294:;
                return $returnValue1281;
            }
            }
            panda$core$String* $tmp1300 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1299, ((panda$core$Object*) test1277));
            $tmp1298 = $tmp1300;
            panda$core$String* $tmp1302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1298, &$s1301);
            $tmp1297 = $tmp1302;
            $tmp1296 = $tmp1297;
            $returnValue1281 = $tmp1296;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1296));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1297));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1298));
            $tmp1273 = 1;
            goto $l1271;
            $l1303:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp1305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1305.value) {
        {
            $tmp1306 = &$s1307;
            $returnValue1281 = $tmp1306;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1306));
            $tmp1273 = 2;
            goto $l1271;
            $l1308:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp1310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1310.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1312 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$422_91274->$data + 24));
            left1311 = *$tmp1312;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1314 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$422_91274->$data + 32));
            op1313 = *$tmp1314;
            org$pandalanguage$pandac$IRNode** $tmp1316 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$422_91274->$data + 40));
            right1315 = *$tmp1316;
            panda$core$String* $tmp1325 = (($fn1324) left1311->$class->vtable[0])(left1311);
            $tmp1323 = $tmp1325;
            panda$core$String* $tmp1327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1323, &$s1326);
            $tmp1322 = $tmp1327;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1329;
            $tmp1329 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp1329->value = op1313;
            $tmp1328 = ((panda$core$Object*) $tmp1329);
            panda$core$String* $tmp1330 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1322, $tmp1328);
            $tmp1321 = $tmp1330;
            panda$core$String* $tmp1332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1321, &$s1331);
            $tmp1320 = $tmp1332;
            panda$core$String* $tmp1333 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1320, ((panda$core$Object*) right1315));
            $tmp1319 = $tmp1333;
            panda$core$String* $tmp1335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1319, &$s1334);
            $tmp1318 = $tmp1335;
            $tmp1317 = $tmp1318;
            $returnValue1281 = $tmp1317;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1317));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1318));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1319));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1320));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1321));
            panda$core$Panda$unref$panda$core$Object($tmp1328);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1322));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1323));
            $tmp1273 = 3;
            goto $l1271;
            $l1336:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp1338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp1338.value) {
        {
            panda$core$Bit* $tmp1340 = ((panda$core$Bit*) ((char*) $match$422_91274->$data + 24));
            bit1339 = *$tmp1340;
            panda$core$String* $tmp1343 = panda$core$Bit$convert$R$panda$core$String(bit1339);
            $tmp1342 = $tmp1343;
            $tmp1341 = $tmp1342;
            $returnValue1281 = $tmp1341;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1341));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1342));
            $tmp1273 = 4;
            goto $l1271;
            $l1344:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp1346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp1346.value) {
        {
            panda$collections$ImmutableArray** $tmp1348 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91274->$data + 16));
            statements1347 = *$tmp1348;
            int $tmp1351;
            {
                panda$core$MutableString* $tmp1355 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1355, &$s1356);
                $tmp1354 = $tmp1355;
                $tmp1353 = $tmp1354;
                result1352 = $tmp1353;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1353));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1354));
                {
                    int $tmp1359;
                    {
                        ITable* $tmp1363 = ((panda$collections$Iterable*) statements1347)->$class->itable;
                        while ($tmp1363->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1363 = $tmp1363->next;
                        }
                        $fn1365 $tmp1364 = $tmp1363->methods[0];
                        panda$collections$Iterator* $tmp1366 = $tmp1364(((panda$collections$Iterable*) statements1347));
                        $tmp1362 = $tmp1366;
                        $tmp1361 = $tmp1362;
                        Iter$436$171360 = $tmp1361;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1361));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1362));
                        $l1367:;
                        ITable* $tmp1370 = Iter$436$171360->$class->itable;
                        while ($tmp1370->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1370 = $tmp1370->next;
                        }
                        $fn1372 $tmp1371 = $tmp1370->methods[0];
                        panda$core$Bit $tmp1373 = $tmp1371(Iter$436$171360);
                        panda$core$Bit $tmp1374 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1373);
                        bool $tmp1369 = $tmp1374.value;
                        if (!$tmp1369) goto $l1368;
                        {
                            int $tmp1377;
                            {
                                ITable* $tmp1381 = Iter$436$171360->$class->itable;
                                while ($tmp1381->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1381 = $tmp1381->next;
                                }
                                $fn1383 $tmp1382 = $tmp1381->methods[1];
                                panda$core$Object* $tmp1384 = $tmp1382(Iter$436$171360);
                                $tmp1380 = $tmp1384;
                                $tmp1379 = ((org$pandalanguage$pandac$IRNode*) $tmp1380);
                                s1378 = $tmp1379;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1379));
                                panda$core$Panda$unref$panda$core$Object($tmp1380);
                                panda$core$String* $tmp1387 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1378), &$s1386);
                                $tmp1385 = $tmp1387;
                                panda$core$MutableString$append$panda$core$String(result1352, $tmp1385);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1385));
                            }
                            $tmp1377 = -1;
                            goto $l1375;
                            $l1375:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1378));
                            s1378 = NULL;
                            switch ($tmp1377) {
                                case -1: goto $l1388;
                            }
                            $l1388:;
                        }
                        goto $l1367;
                        $l1368:;
                    }
                    $tmp1359 = -1;
                    goto $l1357;
                    $l1357:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$436$171360));
                    Iter$436$171360 = NULL;
                    switch ($tmp1359) {
                        case -1: goto $l1389;
                    }
                    $l1389:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1390, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1352, $tmp1390);
                panda$core$String* $tmp1393 = panda$core$MutableString$finish$R$panda$core$String(result1352);
                $tmp1392 = $tmp1393;
                $tmp1391 = $tmp1392;
                $returnValue1281 = $tmp1391;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1391));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1392));
                $tmp1351 = 0;
                goto $l1349;
                $l1394:;
                $tmp1273 = 5;
                goto $l1271;
                $l1395:;
                return $returnValue1281;
            }
            $l1349:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1352));
            result1352 = NULL;
            switch ($tmp1351) {
                case 0: goto $l1394;
            }
            $l1397:;
        }
        }
        else {
        panda$core$Bit $tmp1398 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp1398.value) {
        {
            panda$collections$ImmutableArray** $tmp1400 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91274->$data + 16));
            statements1399 = *$tmp1400;
            panda$collections$ImmutableArray** $tmp1402 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91274->$data + 24));
            finally1401 = *$tmp1402;
            int $tmp1405;
            {
                panda$core$MutableString* $tmp1409 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1409, &$s1410);
                $tmp1408 = $tmp1409;
                $tmp1407 = $tmp1408;
                result1406 = $tmp1407;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1407));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1408));
                {
                    int $tmp1413;
                    {
                        ITable* $tmp1417 = ((panda$collections$Iterable*) statements1399)->$class->itable;
                        while ($tmp1417->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1417 = $tmp1417->next;
                        }
                        $fn1419 $tmp1418 = $tmp1417->methods[0];
                        panda$collections$Iterator* $tmp1420 = $tmp1418(((panda$collections$Iterable*) statements1399));
                        $tmp1416 = $tmp1420;
                        $tmp1415 = $tmp1416;
                        Iter$443$171414 = $tmp1415;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1415));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1416));
                        $l1421:;
                        ITable* $tmp1424 = Iter$443$171414->$class->itable;
                        while ($tmp1424->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1424 = $tmp1424->next;
                        }
                        $fn1426 $tmp1425 = $tmp1424->methods[0];
                        panda$core$Bit $tmp1427 = $tmp1425(Iter$443$171414);
                        panda$core$Bit $tmp1428 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1427);
                        bool $tmp1423 = $tmp1428.value;
                        if (!$tmp1423) goto $l1422;
                        {
                            int $tmp1431;
                            {
                                ITable* $tmp1435 = Iter$443$171414->$class->itable;
                                while ($tmp1435->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1435 = $tmp1435->next;
                                }
                                $fn1437 $tmp1436 = $tmp1435->methods[1];
                                panda$core$Object* $tmp1438 = $tmp1436(Iter$443$171414);
                                $tmp1434 = $tmp1438;
                                $tmp1433 = ((org$pandalanguage$pandac$IRNode*) $tmp1434);
                                s1432 = $tmp1433;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1433));
                                panda$core$Panda$unref$panda$core$Object($tmp1434);
                                panda$core$String* $tmp1441 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1432), &$s1440);
                                $tmp1439 = $tmp1441;
                                panda$core$MutableString$append$panda$core$String(result1406, $tmp1439);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1439));
                            }
                            $tmp1431 = -1;
                            goto $l1429;
                            $l1429:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1432));
                            s1432 = NULL;
                            switch ($tmp1431) {
                                case -1: goto $l1442;
                            }
                            $l1442:;
                        }
                        goto $l1421;
                        $l1422:;
                    }
                    $tmp1413 = -1;
                    goto $l1411;
                    $l1411:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$443$171414));
                    Iter$443$171414 = NULL;
                    switch ($tmp1413) {
                        case -1: goto $l1443;
                    }
                    $l1443:;
                }
                panda$core$MutableString$append$panda$core$String(result1406, &$s1444);
                {
                    int $tmp1447;
                    {
                        ITable* $tmp1451 = ((panda$collections$Iterable*) finally1401)->$class->itable;
                        while ($tmp1451->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1451 = $tmp1451->next;
                        }
                        $fn1453 $tmp1452 = $tmp1451->methods[0];
                        panda$collections$Iterator* $tmp1454 = $tmp1452(((panda$collections$Iterable*) finally1401));
                        $tmp1450 = $tmp1454;
                        $tmp1449 = $tmp1450;
                        Iter$447$171448 = $tmp1449;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1449));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1450));
                        $l1455:;
                        ITable* $tmp1458 = Iter$447$171448->$class->itable;
                        while ($tmp1458->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1458 = $tmp1458->next;
                        }
                        $fn1460 $tmp1459 = $tmp1458->methods[0];
                        panda$core$Bit $tmp1461 = $tmp1459(Iter$447$171448);
                        panda$core$Bit $tmp1462 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1461);
                        bool $tmp1457 = $tmp1462.value;
                        if (!$tmp1457) goto $l1456;
                        {
                            int $tmp1465;
                            {
                                ITable* $tmp1469 = Iter$447$171448->$class->itable;
                                while ($tmp1469->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1469 = $tmp1469->next;
                                }
                                $fn1471 $tmp1470 = $tmp1469->methods[1];
                                panda$core$Object* $tmp1472 = $tmp1470(Iter$447$171448);
                                $tmp1468 = $tmp1472;
                                $tmp1467 = ((org$pandalanguage$pandac$IRNode*) $tmp1468);
                                s1466 = $tmp1467;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1467));
                                panda$core$Panda$unref$panda$core$Object($tmp1468);
                                panda$core$String* $tmp1475 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1466), &$s1474);
                                $tmp1473 = $tmp1475;
                                panda$core$MutableString$append$panda$core$String(result1406, $tmp1473);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1473));
                            }
                            $tmp1465 = -1;
                            goto $l1463;
                            $l1463:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1466));
                            s1466 = NULL;
                            switch ($tmp1465) {
                                case -1: goto $l1476;
                            }
                            $l1476:;
                        }
                        goto $l1455;
                        $l1456:;
                    }
                    $tmp1447 = -1;
                    goto $l1445;
                    $l1445:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$447$171448));
                    Iter$447$171448 = NULL;
                    switch ($tmp1447) {
                        case -1: goto $l1477;
                    }
                    $l1477:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1478, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1406, $tmp1478);
                panda$core$String* $tmp1481 = panda$core$MutableString$finish$R$panda$core$String(result1406);
                $tmp1480 = $tmp1481;
                $tmp1479 = $tmp1480;
                $returnValue1281 = $tmp1479;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1479));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1480));
                $tmp1405 = 0;
                goto $l1403;
                $l1482:;
                $tmp1273 = 6;
                goto $l1271;
                $l1483:;
                return $returnValue1281;
            }
            $l1403:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1406));
            result1406 = NULL;
            switch ($tmp1405) {
                case 0: goto $l1482;
            }
            $l1485:;
        }
        }
        else {
        panda$core$Bit $tmp1486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp1486.value) {
        {
            panda$core$String** $tmp1488 = ((panda$core$String**) ((char*) $match$422_91274->$data + 16));
            label1487 = *$tmp1488;
            if (((panda$core$Bit) { label1487 != NULL }).value) {
            {
                panda$core$String* $tmp1493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1492, label1487);
                $tmp1491 = $tmp1493;
                panda$core$String* $tmp1495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1491, &$s1494);
                $tmp1490 = $tmp1495;
                $tmp1489 = $tmp1490;
                $returnValue1281 = $tmp1489;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1489));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1490));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1491));
                $tmp1273 = 7;
                goto $l1271;
                $l1496:;
                return $returnValue1281;
            }
            }
            $tmp1498 = &$s1499;
            $returnValue1281 = $tmp1498;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1498));
            $tmp1273 = 8;
            goto $l1271;
            $l1500:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp1502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp1502.value) {
        {
            org$pandalanguage$pandac$MethodRef** $tmp1504 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$422_91274->$data + 24));
            m1503 = *$tmp1504;
            panda$collections$ImmutableArray** $tmp1506 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91274->$data + 32));
            args1505 = *$tmp1506;
            panda$core$String* $tmp1512 = panda$core$String$convert$R$panda$core$String(((org$pandalanguage$pandac$Symbol*) m1503->value)->name);
            $tmp1511 = $tmp1512;
            panda$core$String* $tmp1514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1511, &$s1513);
            $tmp1510 = $tmp1514;
            panda$core$String* $tmp1516 = panda$collections$ImmutableArray$join$R$panda$core$String(args1505);
            $tmp1515 = $tmp1516;
            panda$core$String* $tmp1517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1510, $tmp1515);
            $tmp1509 = $tmp1517;
            panda$core$String* $tmp1519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1509, &$s1518);
            $tmp1508 = $tmp1519;
            $tmp1507 = $tmp1508;
            $returnValue1281 = $tmp1507;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1507));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1508));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1509));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1515));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1510));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1511));
            $tmp1273 = 9;
            goto $l1271;
            $l1520:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp1522 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp1522.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1524 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$422_91274->$data + 16));
            value1523 = *$tmp1524;
            org$pandalanguage$pandac$Type** $tmp1526 = ((org$pandalanguage$pandac$Type**) ((char*) $match$422_91274->$data + 24));
            type1525 = *$tmp1526;
            org$pandalanguage$pandac$Type* $tmp1529 = (($fn1528) value1523->$class->vtable[2])(value1523);
            $tmp1527 = $tmp1529;
            org$pandalanguage$pandac$Type* $tmp1531 = org$pandalanguage$pandac$Type$Int64$R$org$pandalanguage$pandac$Type();
            $tmp1530 = $tmp1531;
            panda$core$Bit $tmp1532 = org$pandalanguage$pandac$Type$$EQ$org$pandalanguage$pandac$Type$R$panda$core$Bit($tmp1527, $tmp1530);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1530));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1527));
            if ($tmp1532.value) {
            {
                panda$core$String* $tmp1539 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1538, ((panda$core$Object*) value1523));
                $tmp1537 = $tmp1539;
                panda$core$String* $tmp1541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1537, &$s1540);
                $tmp1536 = $tmp1541;
                panda$core$String* $tmp1542 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1536, ((panda$core$Object*) type1525));
                $tmp1535 = $tmp1542;
                panda$core$String* $tmp1544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1535, &$s1543);
                $tmp1534 = $tmp1544;
                $tmp1533 = $tmp1534;
                $returnValue1281 = $tmp1533;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1533));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1534));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1535));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1536));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1537));
                $tmp1273 = 10;
                goto $l1271;
                $l1545:;
                return $returnValue1281;
            }
            }
            panda$core$String* $tmp1553 = (($fn1552) value1523->$class->vtable[0])(value1523);
            $tmp1551 = $tmp1553;
            panda$core$String* $tmp1555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1551, &$s1554);
            $tmp1550 = $tmp1555;
            panda$core$String* $tmp1556 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1550, ((panda$core$Object*) type1525));
            $tmp1549 = $tmp1556;
            panda$core$String* $tmp1558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1549, &$s1557);
            $tmp1548 = $tmp1558;
            $tmp1547 = $tmp1548;
            $returnValue1281 = $tmp1547;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1547));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1548));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1549));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1550));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1551));
            $tmp1273 = 11;
            goto $l1271;
            $l1559:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp1561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp1561.value) {
        {
            org$pandalanguage$pandac$ChoiceEntry** $tmp1563 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$422_91274->$data + 16));
            ce1562 = *$tmp1563;
            panda$core$String* $tmp1566 = org$pandalanguage$pandac$ChoiceEntry$convert$R$panda$core$String(ce1562);
            $tmp1565 = $tmp1566;
            $tmp1564 = $tmp1565;
            $returnValue1281 = $tmp1564;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1564));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1565));
            $tmp1273 = 12;
            goto $l1271;
            $l1567:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp1569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp1569.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1571 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$422_91274->$data + 16));
            base1570 = *$tmp1571;
            org$pandalanguage$pandac$ChoiceEntry** $tmp1573 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$422_91274->$data + 24));
            ce1572 = *$tmp1573;
            panda$core$Int64* $tmp1575 = ((panda$core$Int64*) ((char*) $match$422_91274->$data + 32));
            field1574 = *$tmp1575;
            panda$core$String* $tmp1584 = (($fn1583) base1570->$class->vtable[0])(base1570);
            $tmp1582 = $tmp1584;
            panda$core$String* $tmp1586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1582, &$s1585);
            $tmp1581 = $tmp1586;
            panda$core$String* $tmp1587 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1581, ((panda$core$Object*) ce1572));
            $tmp1580 = $tmp1587;
            panda$core$String* $tmp1589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1580, &$s1588);
            $tmp1579 = $tmp1589;
            panda$core$Int64$wrapper* $tmp1591;
            $tmp1591 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1591->value = field1574;
            $tmp1590 = ((panda$core$Object*) $tmp1591);
            panda$core$String* $tmp1592 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1579, $tmp1590);
            $tmp1578 = $tmp1592;
            panda$core$String* $tmp1594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1578, &$s1593);
            $tmp1577 = $tmp1594;
            $tmp1576 = $tmp1577;
            $returnValue1281 = $tmp1576;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1576));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1577));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1578));
            panda$core$Panda$unref$panda$core$Object($tmp1590);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1579));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1580));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1581));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1582));
            $tmp1273 = 13;
            goto $l1271;
            $l1595:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp1597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1597.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1599 = ((org$pandalanguage$pandac$Type**) ((char*) $match$422_91274->$data + 16));
            type1598 = *$tmp1599;
            org$pandalanguage$pandac$IRNode** $tmp1601 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$422_91274->$data + 24));
            call1600 = *$tmp1601;
            int $tmp1604;
            {
                $tmp1606 = call1600;
                $match$469_171605 = $tmp1606;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1606));
                panda$core$Bit $tmp1607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$469_171605->$rawValue, ((panda$core$Int64) { 7 }));
                if ($tmp1607.value) {
                {
                    panda$collections$ImmutableArray** $tmp1609 = ((panda$collections$ImmutableArray**) ((char*) $match$469_171605->$data + 32));
                    args1608 = *$tmp1609;
                    panda$core$String* $tmp1615 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type1598);
                    $tmp1614 = $tmp1615;
                    panda$core$String* $tmp1617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1614, &$s1616);
                    $tmp1613 = $tmp1617;
                    panda$core$String* $tmp1619 = panda$collections$ImmutableArray$join$R$panda$core$String(args1608);
                    $tmp1618 = $tmp1619;
                    panda$core$String* $tmp1620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1613, $tmp1618);
                    $tmp1612 = $tmp1620;
                    panda$core$String* $tmp1622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1612, &$s1621);
                    $tmp1611 = $tmp1622;
                    $tmp1610 = $tmp1611;
                    $returnValue1281 = $tmp1610;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1610));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1611));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1612));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1618));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1613));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1614));
                    $tmp1604 = 0;
                    goto $l1602;
                    $l1623:;
                    $tmp1273 = 14;
                    goto $l1271;
                    $l1624:;
                    return $returnValue1281;
                }
                }
                else {
                {
                    PANDA_ASSERT(((panda$core$Bit) { false }).value);
                }
                }
            }
            $tmp1604 = -1;
            goto $l1602;
            $l1602:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1606));
            switch ($tmp1604) {
                case -1: goto $l1626;
                case 0: goto $l1623;
            }
            $l1626:;
        }
        }
        else {
        panda$core$Bit $tmp1627 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp1627.value) {
        {
            org$pandalanguage$pandac$Type** $tmp1629 = ((org$pandalanguage$pandac$Type**) ((char*) $match$422_91274->$data + 16));
            Type1628 = *$tmp1629;
            $tmp1630 = &$s1631;
            $returnValue1281 = $tmp1630;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1630));
            $tmp1273 = 15;
            goto $l1271;
            $l1632:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp1634 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp1634.value) {
        {
            panda$core$String** $tmp1636 = ((panda$core$String**) ((char*) $match$422_91274->$data + 16));
            label1635 = *$tmp1636;
            if (((panda$core$Bit) { label1635 != NULL }).value) {
            {
                panda$core$String* $tmp1641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1640, label1635);
                $tmp1639 = $tmp1641;
                panda$core$String* $tmp1643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1639, &$s1642);
                $tmp1638 = $tmp1643;
                $tmp1637 = $tmp1638;
                $returnValue1281 = $tmp1637;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1637));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1638));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1639));
                $tmp1273 = 16;
                goto $l1271;
                $l1644:;
                return $returnValue1281;
            }
            }
            $tmp1646 = &$s1647;
            $returnValue1281 = $tmp1646;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1646));
            $tmp1273 = 17;
            goto $l1271;
            $l1648:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp1650 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp1650.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1652 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$422_91274->$data + 0));
            target1651 = *$tmp1652;
            org$pandalanguage$pandac$IRNode** $tmp1654 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$422_91274->$data + 8));
            value1653 = *$tmp1654;
            if (((panda$core$Bit) { value1653 != NULL }).value) {
            {
                panda$core$String* $tmp1661 = (($fn1660) target1651->$class->vtable[0])(target1651);
                $tmp1659 = $tmp1661;
                panda$core$String* $tmp1663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1659, &$s1662);
                $tmp1658 = $tmp1663;
                panda$core$String* $tmp1664 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1658, ((panda$core$Object*) value1653));
                $tmp1657 = $tmp1664;
                panda$core$String* $tmp1666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1657, &$s1665);
                $tmp1656 = $tmp1666;
                $tmp1655 = $tmp1656;
                $returnValue1281 = $tmp1655;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1655));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1656));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1657));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1658));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1659));
                $tmp1273 = 18;
                goto $l1271;
                $l1667:;
                return $returnValue1281;
            }
            }
            panda$core$String* $tmp1672 = (($fn1671) target1651->$class->vtable[0])(target1651);
            $tmp1670 = $tmp1672;
            $tmp1669 = $tmp1670;
            $returnValue1281 = $tmp1669;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1669));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1670));
            $tmp1273 = 19;
            goto $l1271;
            $l1673:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp1675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1675.value) {
        {
            panda$core$String** $tmp1677 = ((panda$core$String**) ((char*) $match$422_91274->$data + 16));
            label1676 = *$tmp1677;
            panda$collections$ImmutableArray** $tmp1679 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91274->$data + 24));
            statements1678 = *$tmp1679;
            org$pandalanguage$pandac$IRNode** $tmp1681 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$422_91274->$data + 32));
            test1680 = *$tmp1681;
            int $tmp1684;
            {
                panda$core$MutableString* $tmp1688 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1688);
                $tmp1687 = $tmp1688;
                $tmp1686 = $tmp1687;
                result1685 = $tmp1686;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1686));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1687));
                if (((panda$core$Bit) { label1676 != NULL }).value) {
                {
                    panda$core$String* $tmp1691 = panda$core$String$convert$R$panda$core$String(label1676);
                    $tmp1690 = $tmp1691;
                    panda$core$String* $tmp1693 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1690, &$s1692);
                    $tmp1689 = $tmp1693;
                    panda$core$MutableString$append$panda$core$String(result1685, $tmp1689);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1689));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1690));
                }
                }
                panda$core$MutableString$append$panda$core$String(result1685, &$s1694);
                {
                    int $tmp1697;
                    {
                        ITable* $tmp1701 = ((panda$collections$Iterable*) statements1678)->$class->itable;
                        while ($tmp1701->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1701 = $tmp1701->next;
                        }
                        $fn1703 $tmp1702 = $tmp1701->methods[0];
                        panda$collections$Iterator* $tmp1704 = $tmp1702(((panda$collections$Iterable*) statements1678));
                        $tmp1700 = $tmp1704;
                        $tmp1699 = $tmp1700;
                        Iter$493$171698 = $tmp1699;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1699));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1700));
                        $l1705:;
                        ITable* $tmp1708 = Iter$493$171698->$class->itable;
                        while ($tmp1708->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1708 = $tmp1708->next;
                        }
                        $fn1710 $tmp1709 = $tmp1708->methods[0];
                        panda$core$Bit $tmp1711 = $tmp1709(Iter$493$171698);
                        panda$core$Bit $tmp1712 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1711);
                        bool $tmp1707 = $tmp1712.value;
                        if (!$tmp1707) goto $l1706;
                        {
                            int $tmp1715;
                            {
                                ITable* $tmp1719 = Iter$493$171698->$class->itable;
                                while ($tmp1719->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1719 = $tmp1719->next;
                                }
                                $fn1721 $tmp1720 = $tmp1719->methods[1];
                                panda$core$Object* $tmp1722 = $tmp1720(Iter$493$171698);
                                $tmp1718 = $tmp1722;
                                $tmp1717 = ((org$pandalanguage$pandac$IRNode*) $tmp1718);
                                s1716 = $tmp1717;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1717));
                                panda$core$Panda$unref$panda$core$Object($tmp1718);
                                panda$core$String* $tmp1725 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1716), &$s1724);
                                $tmp1723 = $tmp1725;
                                panda$core$MutableString$append$panda$core$String(result1685, $tmp1723);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1723));
                            }
                            $tmp1715 = -1;
                            goto $l1713;
                            $l1713:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1716));
                            s1716 = NULL;
                            switch ($tmp1715) {
                                case -1: goto $l1726;
                            }
                            $l1726:;
                        }
                        goto $l1705;
                        $l1706:;
                    }
                    $tmp1697 = -1;
                    goto $l1695;
                    $l1695:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$493$171698));
                    Iter$493$171698 = NULL;
                    switch ($tmp1697) {
                        case -1: goto $l1727;
                    }
                    $l1727:;
                }
                panda$core$String* $tmp1731 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1730, ((panda$core$Object*) test1680));
                $tmp1729 = $tmp1731;
                panda$core$String* $tmp1733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1729, &$s1732);
                $tmp1728 = $tmp1733;
                panda$core$MutableString$append$panda$core$String(result1685, $tmp1728);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1728));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1729));
                panda$core$String* $tmp1736 = panda$core$MutableString$finish$R$panda$core$String(result1685);
                $tmp1735 = $tmp1736;
                $tmp1734 = $tmp1735;
                $returnValue1281 = $tmp1734;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1734));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1735));
                $tmp1684 = 0;
                goto $l1682;
                $l1737:;
                $tmp1273 = 20;
                goto $l1271;
                $l1738:;
                return $returnValue1281;
            }
            $l1682:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1685));
            result1685 = NULL;
            switch ($tmp1684) {
                case 0: goto $l1737;
            }
            $l1740:;
        }
        }
        else {
        panda$core$Bit $tmp1741 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp1741.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1743 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$422_91274->$data + 0));
            expr1742 = *$tmp1743;
            org$pandalanguage$pandac$IRNode** $tmp1745 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$422_91274->$data + 8));
            stmt1744 = *$tmp1745;
            panda$core$String* $tmp1752 = (($fn1751) expr1742->$class->vtable[0])(expr1742);
            $tmp1750 = $tmp1752;
            panda$core$String* $tmp1754 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1750, &$s1753);
            $tmp1749 = $tmp1754;
            panda$core$String* $tmp1755 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1749, ((panda$core$Object*) stmt1744));
            $tmp1748 = $tmp1755;
            panda$core$String* $tmp1757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1748, &$s1756);
            $tmp1747 = $tmp1757;
            $tmp1746 = $tmp1747;
            $returnValue1281 = $tmp1746;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1746));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1747));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1748));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1749));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1750));
            $tmp1273 = 21;
            goto $l1271;
            $l1758:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp1760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp1760.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1762 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$422_91274->$data + 24));
            base1761 = *$tmp1762;
            org$pandalanguage$pandac$FieldDecl** $tmp1764 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$422_91274->$data + 32));
            field1763 = *$tmp1764;
            panda$core$String* $tmp1771 = (($fn1770) base1761->$class->vtable[0])(base1761);
            $tmp1769 = $tmp1771;
            panda$core$String* $tmp1773 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1769, &$s1772);
            $tmp1768 = $tmp1773;
            panda$core$String* $tmp1774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1768, ((org$pandalanguage$pandac$Symbol*) field1763)->name);
            $tmp1767 = $tmp1774;
            panda$core$String* $tmp1776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1767, &$s1775);
            $tmp1766 = $tmp1776;
            $tmp1765 = $tmp1766;
            $returnValue1281 = $tmp1765;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1765));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1766));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1767));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1768));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1769));
            $tmp1273 = 22;
            goto $l1271;
            $l1777:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp1779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp1779.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1781 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$422_91274->$data + 16));
            test1780 = *$tmp1781;
            panda$collections$ImmutableArray** $tmp1783 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91274->$data + 24));
            ifTrue1782 = *$tmp1783;
            org$pandalanguage$pandac$IRNode** $tmp1785 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$422_91274->$data + 32));
            ifFalse1784 = *$tmp1785;
            int $tmp1788;
            {
                panda$core$MutableString* $tmp1792 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1796 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1795, ((panda$core$Object*) test1780));
                $tmp1794 = $tmp1796;
                panda$core$String* $tmp1798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1794, &$s1797);
                $tmp1793 = $tmp1798;
                panda$core$MutableString$init$panda$core$String($tmp1792, $tmp1793);
                $tmp1791 = $tmp1792;
                $tmp1790 = $tmp1791;
                result1789 = $tmp1790;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1790));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1791));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1793));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1794));
                {
                    int $tmp1801;
                    {
                        ITable* $tmp1805 = ((panda$collections$Iterable*) ifTrue1782)->$class->itable;
                        while ($tmp1805->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1805 = $tmp1805->next;
                        }
                        $fn1807 $tmp1806 = $tmp1805->methods[0];
                        panda$collections$Iterator* $tmp1808 = $tmp1806(((panda$collections$Iterable*) ifTrue1782));
                        $tmp1804 = $tmp1808;
                        $tmp1803 = $tmp1804;
                        Iter$504$171802 = $tmp1803;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1803));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1804));
                        $l1809:;
                        ITable* $tmp1812 = Iter$504$171802->$class->itable;
                        while ($tmp1812->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1812 = $tmp1812->next;
                        }
                        $fn1814 $tmp1813 = $tmp1812->methods[0];
                        panda$core$Bit $tmp1815 = $tmp1813(Iter$504$171802);
                        panda$core$Bit $tmp1816 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1815);
                        bool $tmp1811 = $tmp1816.value;
                        if (!$tmp1811) goto $l1810;
                        {
                            int $tmp1819;
                            {
                                ITable* $tmp1823 = Iter$504$171802->$class->itable;
                                while ($tmp1823->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1823 = $tmp1823->next;
                                }
                                $fn1825 $tmp1824 = $tmp1823->methods[1];
                                panda$core$Object* $tmp1826 = $tmp1824(Iter$504$171802);
                                $tmp1822 = $tmp1826;
                                $tmp1821 = ((org$pandalanguage$pandac$IRNode*) $tmp1822);
                                s1820 = $tmp1821;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1821));
                                panda$core$Panda$unref$panda$core$Object($tmp1822);
                                panda$core$String* $tmp1829 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1820), &$s1828);
                                $tmp1827 = $tmp1829;
                                panda$core$MutableString$append$panda$core$String(result1789, $tmp1827);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1827));
                            }
                            $tmp1819 = -1;
                            goto $l1817;
                            $l1817:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1820));
                            s1820 = NULL;
                            switch ($tmp1819) {
                                case -1: goto $l1830;
                            }
                            $l1830:;
                        }
                        goto $l1809;
                        $l1810:;
                    }
                    $tmp1801 = -1;
                    goto $l1799;
                    $l1799:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$504$171802));
                    Iter$504$171802 = NULL;
                    switch ($tmp1801) {
                        case -1: goto $l1831;
                    }
                    $l1831:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1832, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1789, $tmp1832);
                if (((panda$core$Bit) { ifFalse1784 != NULL }).value) {
                {
                    panda$core$String* $tmp1836 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1835, ((panda$core$Object*) ifFalse1784));
                    $tmp1834 = $tmp1836;
                    panda$core$String* $tmp1838 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1834, &$s1837);
                    $tmp1833 = $tmp1838;
                    panda$core$MutableString$append$panda$core$String(result1789, $tmp1833);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1833));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1834));
                }
                }
                panda$core$String* $tmp1841 = panda$core$MutableString$finish$R$panda$core$String(result1789);
                $tmp1840 = $tmp1841;
                $tmp1839 = $tmp1840;
                $returnValue1281 = $tmp1839;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1839));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1840));
                $tmp1788 = 0;
                goto $l1786;
                $l1842:;
                $tmp1273 = 23;
                goto $l1271;
                $l1843:;
                return $returnValue1281;
            }
            $l1786:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1789));
            result1789 = NULL;
            switch ($tmp1788) {
                case 0: goto $l1842;
            }
            $l1845:;
        }
        }
        else {
        panda$core$Bit $tmp1846 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp1846.value) {
        {
            panda$core$UInt64* $tmp1848 = ((panda$core$UInt64*) ((char*) $match$422_91274->$data + 24));
            value1847 = *$tmp1848;
            panda$core$String* $tmp1851 = panda$core$UInt64$convert$R$panda$core$String(value1847);
            $tmp1850 = $tmp1851;
            $tmp1849 = $tmp1850;
            $returnValue1281 = $tmp1849;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1849));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1850));
            $tmp1273 = 24;
            goto $l1271;
            $l1852:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp1854 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp1854.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1856 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$422_91274->$data + 16));
            value1855 = *$tmp1856;
            panda$core$String* $tmp1861 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1860, ((panda$core$Object*) value1855));
            $tmp1859 = $tmp1861;
            panda$core$String* $tmp1863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1859, &$s1862);
            $tmp1858 = $tmp1863;
            $tmp1857 = $tmp1858;
            $returnValue1281 = $tmp1857;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1857));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1858));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1859));
            $tmp1273 = 25;
            goto $l1271;
            $l1864:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp1866 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp1866.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1868 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$422_91274->$data + 16));
            value1867 = *$tmp1868;
            panda$core$String* $tmp1873 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1872, ((panda$core$Object*) value1867));
            $tmp1871 = $tmp1873;
            panda$core$String* $tmp1875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1871, &$s1874);
            $tmp1870 = $tmp1875;
            $tmp1869 = $tmp1870;
            $returnValue1281 = $tmp1869;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1869));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1870));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1871));
            $tmp1273 = 26;
            goto $l1271;
            $l1876:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp1878 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1878.value) {
        {
            panda$core$String** $tmp1880 = ((panda$core$String**) ((char*) $match$422_91274->$data + 16));
            label1879 = *$tmp1880;
            panda$collections$ImmutableArray** $tmp1882 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91274->$data + 24));
            statements1881 = *$tmp1882;
            int $tmp1885;
            {
                panda$core$MutableString* $tmp1889 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1889);
                $tmp1888 = $tmp1889;
                $tmp1887 = $tmp1888;
                result1886 = $tmp1887;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1887));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1888));
                if (((panda$core$Bit) { label1879 != NULL }).value) {
                {
                    panda$core$String* $tmp1892 = panda$core$String$convert$R$panda$core$String(label1879);
                    $tmp1891 = $tmp1892;
                    panda$core$String* $tmp1894 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1891, &$s1893);
                    $tmp1890 = $tmp1894;
                    panda$core$MutableString$append$panda$core$String(result1886, $tmp1890);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1890));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1891));
                }
                }
                panda$core$MutableString$append$panda$core$String(result1886, &$s1895);
                {
                    int $tmp1898;
                    {
                        ITable* $tmp1902 = ((panda$collections$Iterable*) statements1881)->$class->itable;
                        while ($tmp1902->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1902 = $tmp1902->next;
                        }
                        $fn1904 $tmp1903 = $tmp1902->methods[0];
                        panda$collections$Iterator* $tmp1905 = $tmp1903(((panda$collections$Iterable*) statements1881));
                        $tmp1901 = $tmp1905;
                        $tmp1900 = $tmp1901;
                        Iter$524$171899 = $tmp1900;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1900));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1901));
                        $l1906:;
                        ITable* $tmp1909 = Iter$524$171899->$class->itable;
                        while ($tmp1909->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1909 = $tmp1909->next;
                        }
                        $fn1911 $tmp1910 = $tmp1909->methods[0];
                        panda$core$Bit $tmp1912 = $tmp1910(Iter$524$171899);
                        panda$core$Bit $tmp1913 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1912);
                        bool $tmp1908 = $tmp1913.value;
                        if (!$tmp1908) goto $l1907;
                        {
                            int $tmp1916;
                            {
                                ITable* $tmp1920 = Iter$524$171899->$class->itable;
                                while ($tmp1920->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1920 = $tmp1920->next;
                                }
                                $fn1922 $tmp1921 = $tmp1920->methods[1];
                                panda$core$Object* $tmp1923 = $tmp1921(Iter$524$171899);
                                $tmp1919 = $tmp1923;
                                $tmp1918 = ((org$pandalanguage$pandac$IRNode*) $tmp1919);
                                s1917 = $tmp1918;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1918));
                                panda$core$Panda$unref$panda$core$Object($tmp1919);
                                panda$core$String* $tmp1926 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1917), &$s1925);
                                $tmp1924 = $tmp1926;
                                panda$core$MutableString$append$panda$core$String(result1886, $tmp1924);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1924));
                            }
                            $tmp1916 = -1;
                            goto $l1914;
                            $l1914:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1917));
                            s1917 = NULL;
                            switch ($tmp1916) {
                                case -1: goto $l1927;
                            }
                            $l1927:;
                        }
                        goto $l1906;
                        $l1907:;
                    }
                    $tmp1898 = -1;
                    goto $l1896;
                    $l1896:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$524$171899));
                    Iter$524$171899 = NULL;
                    switch ($tmp1898) {
                        case -1: goto $l1928;
                    }
                    $l1928:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1929, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1886, $tmp1929);
                panda$core$String* $tmp1932 = panda$core$MutableString$finish$R$panda$core$String(result1886);
                $tmp1931 = $tmp1932;
                $tmp1930 = $tmp1931;
                $returnValue1281 = $tmp1930;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1930));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1931));
                $tmp1885 = 0;
                goto $l1883;
                $l1933:;
                $tmp1273 = 27;
                goto $l1271;
                $l1934:;
                return $returnValue1281;
            }
            $l1883:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1886));
            result1886 = NULL;
            switch ($tmp1885) {
                case 0: goto $l1933;
            }
            $l1936:;
        }
        }
        else {
        panda$core$Bit $tmp1937 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1937.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1939 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$422_91274->$data + 16));
            value1938 = *$tmp1939;
            panda$collections$ImmutableArray** $tmp1941 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91274->$data + 24));
            whens1940 = *$tmp1941;
            panda$collections$ImmutableArray** $tmp1943 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91274->$data + 32));
            other1942 = *$tmp1943;
            int $tmp1946;
            {
                panda$core$MutableString* $tmp1950 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1954 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1953, ((panda$core$Object*) value1938));
                $tmp1952 = $tmp1954;
                panda$core$String* $tmp1956 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1952, &$s1955);
                $tmp1951 = $tmp1956;
                panda$core$MutableString$init$panda$core$String($tmp1950, $tmp1951);
                $tmp1949 = $tmp1950;
                $tmp1948 = $tmp1949;
                result1947 = $tmp1948;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1948));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1949));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1951));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1952));
                {
                    int $tmp1959;
                    {
                        ITable* $tmp1963 = ((panda$collections$Iterable*) whens1940)->$class->itable;
                        while ($tmp1963->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1963 = $tmp1963->next;
                        }
                        $fn1965 $tmp1964 = $tmp1963->methods[0];
                        panda$collections$Iterator* $tmp1966 = $tmp1964(((panda$collections$Iterable*) whens1940));
                        $tmp1962 = $tmp1966;
                        $tmp1961 = $tmp1962;
                        Iter$531$171960 = $tmp1961;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1961));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1962));
                        $l1967:;
                        ITable* $tmp1970 = Iter$531$171960->$class->itable;
                        while ($tmp1970->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1970 = $tmp1970->next;
                        }
                        $fn1972 $tmp1971 = $tmp1970->methods[0];
                        panda$core$Bit $tmp1973 = $tmp1971(Iter$531$171960);
                        panda$core$Bit $tmp1974 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1973);
                        bool $tmp1969 = $tmp1974.value;
                        if (!$tmp1969) goto $l1968;
                        {
                            int $tmp1977;
                            {
                                ITable* $tmp1981 = Iter$531$171960->$class->itable;
                                while ($tmp1981->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1981 = $tmp1981->next;
                                }
                                $fn1983 $tmp1982 = $tmp1981->methods[1];
                                panda$core$Object* $tmp1984 = $tmp1982(Iter$531$171960);
                                $tmp1980 = $tmp1984;
                                $tmp1979 = ((org$pandalanguage$pandac$IRNode*) $tmp1980);
                                w1978 = $tmp1979;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1979));
                                panda$core$Panda$unref$panda$core$Object($tmp1980);
                                panda$core$String* $tmp1987 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w1978), &$s1986);
                                $tmp1985 = $tmp1987;
                                panda$core$MutableString$append$panda$core$String(result1947, $tmp1985);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1985));
                            }
                            $tmp1977 = -1;
                            goto $l1975;
                            $l1975:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w1978));
                            w1978 = NULL;
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$531$171960));
                    Iter$531$171960 = NULL;
                    switch ($tmp1959) {
                        case -1: goto $l1989;
                    }
                    $l1989:;
                }
                if (((panda$core$Bit) { other1942 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1947, &$s1990);
                    {
                        int $tmp1993;
                        {
                            ITable* $tmp1997 = ((panda$collections$Iterable*) other1942)->$class->itable;
                            while ($tmp1997->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp1997 = $tmp1997->next;
                            }
                            $fn1999 $tmp1998 = $tmp1997->methods[0];
                            panda$collections$Iterator* $tmp2000 = $tmp1998(((panda$collections$Iterable*) other1942));
                            $tmp1996 = $tmp2000;
                            $tmp1995 = $tmp1996;
                            Iter$536$211994 = $tmp1995;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1995));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1996));
                            $l2001:;
                            ITable* $tmp2004 = Iter$536$211994->$class->itable;
                            while ($tmp2004->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp2004 = $tmp2004->next;
                            }
                            $fn2006 $tmp2005 = $tmp2004->methods[0];
                            panda$core$Bit $tmp2007 = $tmp2005(Iter$536$211994);
                            panda$core$Bit $tmp2008 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2007);
                            bool $tmp2003 = $tmp2008.value;
                            if (!$tmp2003) goto $l2002;
                            {
                                int $tmp2011;
                                {
                                    ITable* $tmp2015 = Iter$536$211994->$class->itable;
                                    while ($tmp2015->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp2015 = $tmp2015->next;
                                    }
                                    $fn2017 $tmp2016 = $tmp2015->methods[1];
                                    panda$core$Object* $tmp2018 = $tmp2016(Iter$536$211994);
                                    $tmp2014 = $tmp2018;
                                    $tmp2013 = ((org$pandalanguage$pandac$IRNode*) $tmp2014);
                                    s2012 = $tmp2013;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2013));
                                    panda$core$Panda$unref$panda$core$Object($tmp2014);
                                    panda$core$String* $tmp2021 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2012), &$s2020);
                                    $tmp2019 = $tmp2021;
                                    panda$core$MutableString$append$panda$core$String(result1947, $tmp2019);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2019));
                                }
                                $tmp2011 = -1;
                                goto $l2009;
                                $l2009:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2012));
                                s2012 = NULL;
                                switch ($tmp2011) {
                                    case -1: goto $l2022;
                                }
                                $l2022:;
                            }
                            goto $l2001;
                            $l2002:;
                        }
                        $tmp1993 = -1;
                        goto $l1991;
                        $l1991:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$536$211994));
                        Iter$536$211994 = NULL;
                        switch ($tmp1993) {
                            case -1: goto $l2023;
                        }
                        $l2023:;
                    }
                }
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2024, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1947, $tmp2024);
                panda$core$String* $tmp2027 = panda$core$MutableString$finish$R$panda$core$String(result1947);
                $tmp2026 = $tmp2027;
                $tmp2025 = $tmp2026;
                $returnValue1281 = $tmp2025;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2025));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2026));
                $tmp1946 = 0;
                goto $l1944;
                $l2028:;
                $tmp1273 = 28;
                goto $l1271;
                $l2029:;
                return $returnValue1281;
            }
            $l1944:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1947));
            result1947 = NULL;
            switch ($tmp1946) {
                case 0: goto $l2028;
            }
            $l2031:;
        }
        }
        else {
        panda$core$Bit $tmp2032 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp2032.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2034 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$422_91274->$data + 16));
            target2033 = *$tmp2034;
            org$pandalanguage$pandac$MethodRef** $tmp2036 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$422_91274->$data + 24));
            m2035 = *$tmp2036;
            if (((panda$core$Bit) { target2033 != NULL }).value) {
            {
                panda$core$String* $tmp2043 = (($fn2042) target2033->$class->vtable[0])(target2033);
                $tmp2041 = $tmp2043;
                panda$core$String* $tmp2045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2041, &$s2044);
                $tmp2040 = $tmp2045;
                panda$core$String* $tmp2046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2040, ((org$pandalanguage$pandac$Symbol*) m2035->value)->name);
                $tmp2039 = $tmp2046;
                panda$core$String* $tmp2048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2039, &$s2047);
                $tmp2038 = $tmp2048;
                $tmp2037 = $tmp2038;
                $returnValue1281 = $tmp2037;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2037));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2038));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2039));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2040));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2041));
                $tmp1273 = 29;
                goto $l1271;
                $l2049:;
                return $returnValue1281;
            }
            }
            $tmp2051 = ((org$pandalanguage$pandac$Symbol*) m2035->value)->name;
            $returnValue1281 = $tmp2051;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2051));
            $tmp1273 = 30;
            goto $l1271;
            $l2052:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp2054 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp2054.value) {
        {
            panda$core$UInt64* $tmp2056 = ((panda$core$UInt64*) ((char*) $match$422_91274->$data + 24));
            value2055 = *$tmp2056;
            panda$core$UInt64$wrapper* $tmp2061;
            $tmp2061 = (panda$core$UInt64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$UInt64$wrapperclass);
            $tmp2061->value = value2055;
            $tmp2060 = ((panda$core$Object*) $tmp2061);
            panda$core$String* $tmp2062 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2059, $tmp2060);
            $tmp2058 = $tmp2062;
            $tmp2057 = $tmp2058;
            $returnValue1281 = $tmp2057;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2057));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2058));
            panda$core$Panda$unref$panda$core$Object($tmp2060);
            $tmp1273 = 31;
            goto $l1271;
            $l2063:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp2065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp2065.value) {
        {
            $tmp2066 = &$s2067;
            $returnValue1281 = $tmp2066;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2066));
            $tmp1273 = 32;
            goto $l1271;
            $l2068:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp2070 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp2070.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp2072 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$422_91274->$data + 16));
            op2071 = *$tmp2072;
            org$pandalanguage$pandac$IRNode** $tmp2074 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$422_91274->$data + 24));
            base2073 = *$tmp2074;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp2081;
            $tmp2081 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp2081->value = op2071;
            $tmp2080 = ((panda$core$Object*) $tmp2081);
            panda$core$String* $tmp2083 = (($fn2082) $tmp2080->$class->vtable[0])($tmp2080);
            $tmp2079 = $tmp2083;
            panda$core$String* $tmp2085 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2079, &$s2084);
            $tmp2078 = $tmp2085;
            panda$core$String* $tmp2086 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2078, ((panda$core$Object*) base2073));
            $tmp2077 = $tmp2086;
            panda$core$String* $tmp2088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2077, &$s2087);
            $tmp2076 = $tmp2088;
            $tmp2075 = $tmp2076;
            $returnValue1281 = $tmp2075;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2075));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2076));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2077));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2078));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2079));
            panda$core$Panda$unref$panda$core$Object($tmp2080);
            $tmp1273 = 33;
            goto $l1271;
            $l2089:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp2091 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp2091.value) {
        {
            panda$core$String** $tmp2093 = ((panda$core$String**) ((char*) $match$422_91274->$data + 16));
            label2092 = *$tmp2093;
            org$pandalanguage$pandac$IRNode** $tmp2095 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$422_91274->$data + 24));
            target2094 = *$tmp2095;
            org$pandalanguage$pandac$IRNode** $tmp2097 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$422_91274->$data + 32));
            list2096 = *$tmp2097;
            panda$collections$ImmutableArray** $tmp2099 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91274->$data + 40));
            statements2098 = *$tmp2099;
            int $tmp2102;
            {
                panda$core$MutableString* $tmp2106 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2106);
                $tmp2105 = $tmp2106;
                $tmp2104 = $tmp2105;
                result2103 = $tmp2104;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2104));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2105));
                if (((panda$core$Bit) { label2092 != NULL }).value) {
                {
                    panda$core$String* $tmp2109 = panda$core$String$convert$R$panda$core$String(label2092);
                    $tmp2108 = $tmp2109;
                    panda$core$String* $tmp2111 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2108, &$s2110);
                    $tmp2107 = $tmp2111;
                    panda$core$MutableString$append$panda$core$String(result2103, $tmp2107);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2107));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2108));
                }
                }
                panda$core$String* $tmp2117 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2116, ((panda$core$Object*) target2094));
                $tmp2115 = $tmp2117;
                panda$core$String* $tmp2119 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2115, &$s2118);
                $tmp2114 = $tmp2119;
                panda$core$String* $tmp2120 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2114, ((panda$core$Object*) list2096));
                $tmp2113 = $tmp2120;
                panda$core$String* $tmp2122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2113, &$s2121);
                $tmp2112 = $tmp2122;
                panda$core$MutableString$append$panda$core$String(result2103, $tmp2112);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2112));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2113));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2114));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2115));
                {
                    int $tmp2125;
                    {
                        ITable* $tmp2129 = ((panda$collections$Iterable*) statements2098)->$class->itable;
                        while ($tmp2129->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2129 = $tmp2129->next;
                        }
                        $fn2131 $tmp2130 = $tmp2129->methods[0];
                        panda$collections$Iterator* $tmp2132 = $tmp2130(((panda$collections$Iterable*) statements2098));
                        $tmp2128 = $tmp2132;
                        $tmp2127 = $tmp2128;
                        Iter$559$172126 = $tmp2127;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2127));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2128));
                        $l2133:;
                        ITable* $tmp2136 = Iter$559$172126->$class->itable;
                        while ($tmp2136->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2136 = $tmp2136->next;
                        }
                        $fn2138 $tmp2137 = $tmp2136->methods[0];
                        panda$core$Bit $tmp2139 = $tmp2137(Iter$559$172126);
                        panda$core$Bit $tmp2140 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2139);
                        bool $tmp2135 = $tmp2140.value;
                        if (!$tmp2135) goto $l2134;
                        {
                            int $tmp2143;
                            {
                                ITable* $tmp2147 = Iter$559$172126->$class->itable;
                                while ($tmp2147->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2147 = $tmp2147->next;
                                }
                                $fn2149 $tmp2148 = $tmp2147->methods[1];
                                panda$core$Object* $tmp2150 = $tmp2148(Iter$559$172126);
                                $tmp2146 = $tmp2150;
                                $tmp2145 = ((org$pandalanguage$pandac$IRNode*) $tmp2146);
                                s2144 = $tmp2145;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2145));
                                panda$core$Panda$unref$panda$core$Object($tmp2146);
                                panda$core$String* $tmp2153 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2144), &$s2152);
                                $tmp2151 = $tmp2153;
                                panda$core$MutableString$append$panda$core$String(result2103, $tmp2151);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2151));
                            }
                            $tmp2143 = -1;
                            goto $l2141;
                            $l2141:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2144));
                            s2144 = NULL;
                            switch ($tmp2143) {
                                case -1: goto $l2154;
                            }
                            $l2154:;
                        }
                        goto $l2133;
                        $l2134:;
                    }
                    $tmp2125 = -1;
                    goto $l2123;
                    $l2123:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$559$172126));
                    Iter$559$172126 = NULL;
                    switch ($tmp2125) {
                        case -1: goto $l2155;
                    }
                    $l2155:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2156, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result2103, $tmp2156);
                panda$core$String* $tmp2159 = panda$core$MutableString$finish$R$panda$core$String(result2103);
                $tmp2158 = $tmp2159;
                $tmp2157 = $tmp2158;
                $returnValue1281 = $tmp2157;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2157));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2158));
                $tmp2102 = 0;
                goto $l2100;
                $l2160:;
                $tmp1273 = 34;
                goto $l1271;
                $l2161:;
                return $returnValue1281;
            }
            $l2100:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2103));
            result2103 = NULL;
            switch ($tmp2102) {
                case 0: goto $l2160;
            }
            $l2163:;
        }
        }
        else {
        panda$core$Bit $tmp2164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp2164.value) {
        {
            panda$core$Real64* $tmp2166 = ((panda$core$Real64*) ((char*) $match$422_91274->$data + 24));
            value2165 = *$tmp2166;
            panda$core$String* $tmp2169 = panda$core$Real64$convert$R$panda$core$String(value2165);
            $tmp2168 = $tmp2169;
            $tmp2167 = $tmp2168;
            $returnValue1281 = $tmp2167;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2167));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2168));
            $tmp1273 = 35;
            goto $l1271;
            $l2170:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp2172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp2172.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2174 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$422_91274->$data + 16));
            value2173 = *$tmp2174;
            if (((panda$core$Bit) { value2173 != NULL }).value) {
            {
                panda$core$String* $tmp2179 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2178, ((panda$core$Object*) value2173));
                $tmp2177 = $tmp2179;
                panda$core$String* $tmp2181 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2177, &$s2180);
                $tmp2176 = $tmp2181;
                $tmp2175 = $tmp2176;
                $returnValue1281 = $tmp2175;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2175));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2176));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2177));
                $tmp1273 = 36;
                goto $l1271;
                $l2182:;
                return $returnValue1281;
            }
            }
            $tmp2184 = &$s2185;
            $returnValue1281 = $tmp2184;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2184));
            $tmp1273 = 37;
            goto $l1271;
            $l2186:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp2188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp2188.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2190 = ((org$pandalanguage$pandac$Type**) ((char*) $match$422_91274->$data + 16));
            type2189 = *$tmp2190;
            panda$core$Int64* $tmp2192 = ((panda$core$Int64*) ((char*) $match$422_91274->$data + 24));
            id2191 = *$tmp2192;
            panda$core$Int64$wrapper* $tmp2198;
            $tmp2198 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2198->value = id2191;
            $tmp2197 = ((panda$core$Object*) $tmp2198);
            panda$core$String* $tmp2199 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2196, $tmp2197);
            $tmp2195 = $tmp2199;
            panda$core$String* $tmp2201 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2195, &$s2200);
            $tmp2194 = $tmp2201;
            $tmp2193 = $tmp2194;
            $returnValue1281 = $tmp2193;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2193));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2194));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2195));
            panda$core$Panda$unref$panda$core$Object($tmp2197);
            $tmp1273 = 38;
            goto $l1271;
            $l2202:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp2204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp2204.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2206 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$422_91274->$data + 0));
            base2205 = *$tmp2206;
            panda$core$Int64* $tmp2208 = ((panda$core$Int64*) ((char*) $match$422_91274->$data + 8));
            id2207 = *$tmp2208;
            panda$core$Int64$wrapper* $tmp2216;
            $tmp2216 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp2216->value = id2207;
            $tmp2215 = ((panda$core$Object*) $tmp2216);
            panda$core$String* $tmp2217 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2214, $tmp2215);
            $tmp2213 = $tmp2217;
            panda$core$String* $tmp2219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2213, &$s2218);
            $tmp2212 = $tmp2219;
            panda$core$String* $tmp2220 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2212, ((panda$core$Object*) base2205));
            $tmp2211 = $tmp2220;
            panda$core$String* $tmp2222 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2211, &$s2221);
            $tmp2210 = $tmp2222;
            $tmp2209 = $tmp2210;
            $returnValue1281 = $tmp2209;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2209));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2210));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2211));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2212));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2213));
            panda$core$Panda$unref$panda$core$Object($tmp2215);
            $tmp1273 = 39;
            goto $l1271;
            $l2223:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp2225 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp2225.value) {
        {
            $tmp2226 = &$s2227;
            $returnValue1281 = $tmp2226;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2226));
            $tmp1273 = 40;
            goto $l1271;
            $l2228:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp2230 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp2230.value) {
        {
            panda$core$String** $tmp2232 = ((panda$core$String**) ((char*) $match$422_91274->$data + 16));
            str2231 = *$tmp2232;
            $tmp2233 = str2231;
            $returnValue1281 = $tmp2233;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2233));
            $tmp1273 = 41;
            goto $l1271;
            $l2234:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp2236 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp2236.value) {
        {
            $tmp2237 = &$s2238;
            $returnValue1281 = $tmp2237;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2237));
            $tmp1273 = 42;
            goto $l1271;
            $l2239:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp2241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp2241.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2243 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$422_91274->$data + 16));
            test2242 = *$tmp2243;
            org$pandalanguage$pandac$IRNode** $tmp2245 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$422_91274->$data + 24));
            ifTrue2244 = *$tmp2245;
            org$pandalanguage$pandac$IRNode** $tmp2247 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$422_91274->$data + 32));
            ifFalse2246 = *$tmp2247;
            panda$core$String* $tmp2256 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2255, ((panda$core$Object*) test2242));
            $tmp2254 = $tmp2256;
            panda$core$String* $tmp2258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2254, &$s2257);
            $tmp2253 = $tmp2258;
            panda$core$String* $tmp2259 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2253, ((panda$core$Object*) ifTrue2244));
            $tmp2252 = $tmp2259;
            panda$core$String* $tmp2261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2252, &$s2260);
            $tmp2251 = $tmp2261;
            panda$core$String* $tmp2262 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2251, ((panda$core$Object*) ifFalse2246));
            $tmp2250 = $tmp2262;
            panda$core$String* $tmp2264 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2250, &$s2263);
            $tmp2249 = $tmp2264;
            $tmp2248 = $tmp2249;
            $returnValue1281 = $tmp2248;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2248));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2249));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2250));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2251));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2252));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2253));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2254));
            $tmp1273 = 43;
            goto $l1271;
            $l2265:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp2267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp2267.value) {
        {
            org$pandalanguage$pandac$Type** $tmp2269 = ((org$pandalanguage$pandac$Type**) ((char*) $match$422_91274->$data + 16));
            type2268 = *$tmp2269;
            panda$core$String* $tmp2272 = org$pandalanguage$pandac$Type$convert$R$panda$core$String(type2268);
            $tmp2271 = $tmp2272;
            $tmp2270 = $tmp2271;
            $returnValue1281 = $tmp2270;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2270));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2271));
            $tmp1273 = 44;
            goto $l1271;
            $l2273:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp2275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp2275.value) {
        {
            panda$core$String** $tmp2277 = ((panda$core$String**) ((char*) $match$422_91274->$data + 16));
            name2276 = *$tmp2277;
            $tmp2278 = name2276;
            $returnValue1281 = $tmp2278;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2278));
            $tmp1273 = 45;
            goto $l1271;
            $l2279:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp2281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp2281.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2283 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$422_91274->$data + 24));
            base2282 = *$tmp2283;
            panda$collections$ImmutableArray** $tmp2285 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91274->$data + 32));
            args2284 = *$tmp2285;
            panda$core$String* $tmp2292 = (($fn2291) base2282->$class->vtable[0])(base2282);
            $tmp2290 = $tmp2292;
            panda$core$String* $tmp2294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2290, &$s2293);
            $tmp2289 = $tmp2294;
            panda$core$String* $tmp2296 = panda$collections$ImmutableArray$join$R$panda$core$String(args2284);
            $tmp2295 = $tmp2296;
            panda$core$String* $tmp2297 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2289, $tmp2295);
            $tmp2288 = $tmp2297;
            panda$core$String* $tmp2299 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2288, &$s2298);
            $tmp2287 = $tmp2299;
            $tmp2286 = $tmp2287;
            $returnValue1281 = $tmp2286;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2286));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2287));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2288));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2295));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2289));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2290));
            $tmp1273 = 46;
            goto $l1271;
            $l2300:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp2302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp2302.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2304 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$422_91274->$data + 24));
            target2303 = *$tmp2304;
            panda$collections$ImmutableArray** $tmp2306 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91274->$data + 32));
            methods2305 = *$tmp2306;
            panda$collections$ImmutableArray** $tmp2308 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91274->$data + 40));
            args2307 = *$tmp2308;
            panda$core$String* $tmp2317 = (($fn2316) target2303->$class->vtable[0])(target2303);
            $tmp2315 = $tmp2317;
            panda$core$String* $tmp2319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2315, &$s2318);
            $tmp2314 = $tmp2319;
            panda$core$Object* $tmp2321 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2305, ((panda$core$Int64) { 0 }));
            $tmp2320 = $tmp2321;
            panda$core$String* $tmp2322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2314, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2320)->value)->name);
            $tmp2313 = $tmp2322;
            panda$core$String* $tmp2324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2313, &$s2323);
            $tmp2312 = $tmp2324;
            panda$core$String* $tmp2326 = panda$collections$ImmutableArray$join$R$panda$core$String(args2307);
            $tmp2325 = $tmp2326;
            panda$core$String* $tmp2327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2312, $tmp2325);
            $tmp2311 = $tmp2327;
            panda$core$String* $tmp2329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2311, &$s2328);
            $tmp2310 = $tmp2329;
            $tmp2309 = $tmp2310;
            $returnValue1281 = $tmp2309;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2309));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2310));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2311));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2325));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2312));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2313));
            panda$core$Panda$unref$panda$core$Object($tmp2320);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2314));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2315));
            $tmp1273 = 47;
            goto $l1271;
            $l2330:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp2332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp2332.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2334 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$422_91274->$data + 16));
            target2333 = *$tmp2334;
            panda$collections$ImmutableArray** $tmp2336 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91274->$data + 24));
            methods2335 = *$tmp2336;
            panda$core$String* $tmp2343 = (($fn2342) target2333->$class->vtable[0])(target2333);
            $tmp2341 = $tmp2343;
            panda$core$String* $tmp2345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2341, &$s2344);
            $tmp2340 = $tmp2345;
            panda$core$Object* $tmp2347 = panda$collections$ImmutableArray$$IDX$panda$core$Int64$R$panda$collections$ImmutableArray$T(methods2335, ((panda$core$Int64) { 0 }));
            $tmp2346 = $tmp2347;
            panda$core$String* $tmp2348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2340, ((org$pandalanguage$pandac$Symbol*) ((org$pandalanguage$pandac$MethodRef*) $tmp2346)->value)->name);
            $tmp2339 = $tmp2348;
            panda$core$String* $tmp2350 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2339, &$s2349);
            $tmp2338 = $tmp2350;
            $tmp2337 = $tmp2338;
            $returnValue1281 = $tmp2337;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2337));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2338));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2339));
            panda$core$Panda$unref$panda$core$Object($tmp2346);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2340));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2341));
            $tmp1273 = 48;
            goto $l1271;
            $l2351:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp2353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp2353.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp2355 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$422_91274->$data + 16));
            start2354 = *$tmp2355;
            org$pandalanguage$pandac$IRNode** $tmp2357 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$422_91274->$data + 24));
            end2356 = *$tmp2357;
            panda$core$Bit* $tmp2359 = ((panda$core$Bit*) ((char*) $match$422_91274->$data + 32));
            inclusive2358 = *$tmp2359;
            org$pandalanguage$pandac$IRNode** $tmp2361 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$422_91274->$data + 33));
            step2360 = *$tmp2361;
            int $tmp2364;
            {
                panda$core$MutableString* $tmp2368 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2368);
                $tmp2367 = $tmp2368;
                $tmp2366 = $tmp2367;
                result2365 = $tmp2366;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2366));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2367));
                if (((panda$core$Bit) { start2354 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result2365, ((panda$core$Object*) start2354));
                }
                }
                if (inclusive2358.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result2365, &$s2369);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(result2365, &$s2370);
                }
                }
                if (((panda$core$Bit) { end2356 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result2365, ((panda$core$Object*) end2356));
                }
                }
                if (((panda$core$Bit) { step2360 != NULL }).value) {
                {
                    panda$core$String* $tmp2374 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2373, ((panda$core$Object*) step2360));
                    $tmp2372 = $tmp2374;
                    panda$core$String* $tmp2376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2372, &$s2375);
                    $tmp2371 = $tmp2376;
                    panda$core$MutableString$append$panda$core$String(result2365, $tmp2371);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2371));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2372));
                }
                }
                panda$core$String* $tmp2379 = panda$core$MutableString$finish$R$panda$core$String(result2365);
                $tmp2378 = $tmp2379;
                $tmp2377 = $tmp2378;
                $returnValue1281 = $tmp2377;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2377));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2378));
                $tmp2364 = 0;
                goto $l2362;
                $l2380:;
                $tmp1273 = 49;
                goto $l1271;
                $l2381:;
                return $returnValue1281;
            }
            $l2362:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2365));
            result2365 = NULL;
            switch ($tmp2364) {
                case 0: goto $l2380;
            }
            $l2383:;
        }
        }
        else {
        panda$core$Bit $tmp2384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp2384.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp2386 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$422_91274->$data + 16));
            kind2385 = *$tmp2386;
            panda$collections$ImmutableArray** $tmp2388 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91274->$data + 24));
            decls2387 = *$tmp2388;
            int $tmp2391;
            {
                panda$core$MutableString* $tmp2395 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2395);
                $tmp2394 = $tmp2395;
                $tmp2393 = $tmp2394;
                result2392 = $tmp2393;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2393));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2394));
                {
                    $match$613_172396 = kind2385;
                    panda$core$Bit $tmp2397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$613_172396.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp2397.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2392, &$s2398);
                    }
                    }
                    else {
                    panda$core$Bit $tmp2399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$613_172396.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp2399.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2392, &$s2400);
                    }
                    }
                    else {
                    panda$core$Bit $tmp2401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$613_172396.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp2401.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2392, &$s2402);
                    }
                    }
                    else {
                    panda$core$Bit $tmp2403 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$613_172396.$rawValue, ((panda$core$Int64) { 3 }));
                    if ($tmp2403.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result2392, &$s2404);
                    }
                    }
                    }
                    }
                    }
                }
                panda$core$String* $tmp2406 = panda$collections$ImmutableArray$join$R$panda$core$String(decls2387);
                $tmp2405 = $tmp2406;
                panda$core$MutableString$append$panda$core$String(result2392, $tmp2405);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2405));
                panda$core$String* $tmp2409 = panda$core$MutableString$finish$R$panda$core$String(result2392);
                $tmp2408 = $tmp2409;
                $tmp2407 = $tmp2408;
                $returnValue1281 = $tmp2407;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2407));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2408));
                $tmp2391 = 0;
                goto $l2389;
                $l2410:;
                $tmp1273 = 50;
                goto $l1271;
                $l2411:;
                return $returnValue1281;
            }
            $l2389:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2392));
            result2392 = NULL;
            switch ($tmp2391) {
                case 0: goto $l2410;
            }
            $l2413:;
        }
        }
        else {
        panda$core$Bit $tmp2414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp2414.value) {
        {
            org$pandalanguage$pandac$Variable** $tmp2416 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$422_91274->$data + 16));
            variable2415 = *$tmp2416;
            $tmp2417 = ((org$pandalanguage$pandac$Symbol*) variable2415)->name;
            $returnValue1281 = $tmp2417;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2417));
            $tmp1273 = 51;
            goto $l1271;
            $l2418:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp2420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp2420.value) {
        {
            panda$collections$ImmutableArray** $tmp2422 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91274->$data + 16));
            tests2421 = *$tmp2422;
            panda$collections$ImmutableArray** $tmp2424 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91274->$data + 24));
            statements2423 = *$tmp2424;
            panda$core$String* $tmp2432 = panda$collections$ImmutableArray$join$R$panda$core$String(tests2421);
            $tmp2431 = $tmp2432;
            panda$core$String* $tmp2433 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2430, $tmp2431);
            $tmp2429 = $tmp2433;
            panda$core$String* $tmp2435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2429, &$s2434);
            $tmp2428 = $tmp2435;
            panda$core$String* $tmp2438 = panda$collections$ImmutableArray$join$panda$core$String$R$panda$core$String(statements2423, &$s2437);
            $tmp2436 = $tmp2438;
            panda$core$String* $tmp2439 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2428, $tmp2436);
            $tmp2427 = $tmp2439;
            panda$core$String* $tmp2441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2427, &$s2440);
            $tmp2426 = $tmp2441;
            $tmp2425 = $tmp2426;
            $returnValue1281 = $tmp2425;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2425));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2426));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2427));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2436));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2428));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2429));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2431));
            $tmp1273 = 52;
            goto $l1271;
            $l2442:;
            return $returnValue1281;
        }
        }
        else {
        panda$core$Bit $tmp2444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$422_91274->$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp2444.value) {
        {
            panda$core$String** $tmp2446 = ((panda$core$String**) ((char*) $match$422_91274->$data + 16));
            label2445 = *$tmp2446;
            org$pandalanguage$pandac$IRNode** $tmp2448 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$422_91274->$data + 24));
            test2447 = *$tmp2448;
            panda$collections$ImmutableArray** $tmp2450 = ((panda$collections$ImmutableArray**) ((char*) $match$422_91274->$data + 32));
            statements2449 = *$tmp2450;
            int $tmp2453;
            {
                panda$core$MutableString* $tmp2457 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp2457);
                $tmp2456 = $tmp2457;
                $tmp2455 = $tmp2456;
                result2454 = $tmp2455;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2455));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2456));
                if (((panda$core$Bit) { label2445 != NULL }).value) {
                {
                    panda$core$String* $tmp2460 = panda$core$String$convert$R$panda$core$String(label2445);
                    $tmp2459 = $tmp2460;
                    panda$core$String* $tmp2462 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2459, &$s2461);
                    $tmp2458 = $tmp2462;
                    panda$core$MutableString$append$panda$core$String(result2454, $tmp2458);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2458));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2459));
                }
                }
                panda$core$String* $tmp2466 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2465, ((panda$core$Object*) test2447));
                $tmp2464 = $tmp2466;
                panda$core$String* $tmp2468 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2464, &$s2467);
                $tmp2463 = $tmp2468;
                panda$core$MutableString$append$panda$core$String(result2454, $tmp2463);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2463));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2464));
                {
                    int $tmp2471;
                    {
                        ITable* $tmp2475 = ((panda$collections$Iterable*) statements2449)->$class->itable;
                        while ($tmp2475->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp2475 = $tmp2475->next;
                        }
                        $fn2477 $tmp2476 = $tmp2475->methods[0];
                        panda$collections$Iterator* $tmp2478 = $tmp2476(((panda$collections$Iterable*) statements2449));
                        $tmp2474 = $tmp2478;
                        $tmp2473 = $tmp2474;
                        Iter$631$172472 = $tmp2473;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2473));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2474));
                        $l2479:;
                        ITable* $tmp2482 = Iter$631$172472->$class->itable;
                        while ($tmp2482->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp2482 = $tmp2482->next;
                        }
                        $fn2484 $tmp2483 = $tmp2482->methods[0];
                        panda$core$Bit $tmp2485 = $tmp2483(Iter$631$172472);
                        panda$core$Bit $tmp2486 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp2485);
                        bool $tmp2481 = $tmp2486.value;
                        if (!$tmp2481) goto $l2480;
                        {
                            int $tmp2489;
                            {
                                ITable* $tmp2493 = Iter$631$172472->$class->itable;
                                while ($tmp2493->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp2493 = $tmp2493->next;
                                }
                                $fn2495 $tmp2494 = $tmp2493->methods[1];
                                panda$core$Object* $tmp2496 = $tmp2494(Iter$631$172472);
                                $tmp2492 = $tmp2496;
                                $tmp2491 = ((org$pandalanguage$pandac$IRNode*) $tmp2492);
                                s2490 = $tmp2491;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2491));
                                panda$core$Panda$unref$panda$core$Object($tmp2492);
                                panda$core$String* $tmp2499 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s2490), &$s2498);
                                $tmp2497 = $tmp2499;
                                panda$core$MutableString$append$panda$core$String(result2454, $tmp2497);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2497));
                            }
                            $tmp2489 = -1;
                            goto $l2487;
                            $l2487:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s2490));
                            s2490 = NULL;
                            switch ($tmp2489) {
                                case -1: goto $l2500;
                            }
                            $l2500:;
                        }
                        goto $l2479;
                        $l2480:;
                    }
                    $tmp2471 = -1;
                    goto $l2469;
                    $l2469:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$631$172472));
                    Iter$631$172472 = NULL;
                    switch ($tmp2471) {
                        case -1: goto $l2501;
                    }
                    $l2501:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp2502, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result2454, $tmp2502);
                panda$core$String* $tmp2505 = panda$core$MutableString$finish$R$panda$core$String(result2454);
                $tmp2504 = $tmp2505;
                $tmp2503 = $tmp2504;
                $returnValue1281 = $tmp2503;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2503));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2504));
                $tmp2453 = 0;
                goto $l2451;
                $l2506:;
                $tmp1273 = 53;
                goto $l1271;
                $l2507:;
                return $returnValue1281;
            }
            $l2451:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result2454));
            result2454 = NULL;
            switch ($tmp2453) {
                case 0: goto $l2506;
            }
            $l2509:;
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
    $tmp1273 = -1;
    goto $l1271;
    $l1271:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1275));
    switch ($tmp1273) {
        case 41: goto $l2234;
        case 40: goto $l2228;
        case 44: goto $l2273;
        case 7: goto $l1496;
        case 6: goto $l1483;
        case 30: goto $l2052;
        case 2: goto $l1308;
        case 37: goto $l2186;
        case 25: goto $l1864;
        case 49: goto $l2381;
        case 38: goto $l2202;
        case 29: goto $l2049;
        case 46: goto $l2300;
        case 0: goto $l1294;
        case 13: goto $l1595;
        case 3: goto $l1336;
        case 52: goto $l2442;
        case 45: goto $l2279;
        case 22: goto $l1777;
        case 42: goto $l2239;
        case 43: goto $l2265;
        case 10: goto $l1545;
        case 24: goto $l1852;
        case 23: goto $l1843;
        case 36: goto $l2182;
        case 28: goto $l2029;
        case 47: goto $l2330;
        case 48: goto $l2351;
        case 18: goto $l1667;
        case 50: goto $l2411;
        case 51: goto $l2418;
        case 17: goto $l1648;
        case 27: goto $l1934;
        case 16: goto $l1644;
        case 1: goto $l1303;
        case 31: goto $l2063;
        case -1: goto $l2510;
        case 34: goto $l2161;
        case 33: goto $l2089;
        case 21: goto $l1758;
        case 35: goto $l2170;
        case 32: goto $l2068;
        case 53: goto $l2507;
        case 4: goto $l1344;
        case 5: goto $l1395;
        case 19: goto $l1673;
        case 8: goto $l1500;
        case 11: goto $l1559;
        case 26: goto $l1876;
        case 20: goto $l1738;
        case 9: goto $l1520;
        case 12: goto $l1567;
        case 14: goto $l1624;
        case 15: goto $l1632;
        case 39: goto $l2223;
    }
    $l2510:;
}
void org$pandalanguage$pandac$IRNode$cleanup(org$pandalanguage$pandac$IRNode* self) {
    org$pandalanguage$pandac$IRNode* $match$5_12517 = NULL;
    org$pandalanguage$pandac$IRNode* $tmp2518;
    org$pandalanguage$pandac$Position _f02520;
    org$pandalanguage$pandac$IRNode* _f12522 = NULL;
    org$pandalanguage$pandac$IRNode* _f22524 = NULL;
    org$pandalanguage$pandac$Position _f02527;
    org$pandalanguage$pandac$Type* _f12529 = NULL;
    org$pandalanguage$pandac$Position _f02532;
    org$pandalanguage$pandac$Type* _f12534 = NULL;
    org$pandalanguage$pandac$IRNode* _f22536 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind _f32538;
    org$pandalanguage$pandac$IRNode* _f42540 = NULL;
    org$pandalanguage$pandac$Position _f02543;
    org$pandalanguage$pandac$Type* _f12545 = NULL;
    panda$core$Bit _f22547;
    org$pandalanguage$pandac$Position _f02550;
    panda$collections$ImmutableArray* _f12552 = NULL;
    org$pandalanguage$pandac$Position _f02555;
    panda$collections$ImmutableArray* _f12557 = NULL;
    panda$collections$ImmutableArray* _f22559 = NULL;
    org$pandalanguage$pandac$Position _f02562;
    panda$core$String* _f12564 = NULL;
    org$pandalanguage$pandac$Position _f02567;
    org$pandalanguage$pandac$Type* _f12569 = NULL;
    org$pandalanguage$pandac$MethodRef* _f22571 = NULL;
    panda$collections$ImmutableArray* _f32573 = NULL;
    org$pandalanguage$pandac$Position _f02576;
    org$pandalanguage$pandac$IRNode* _f12578 = NULL;
    org$pandalanguage$pandac$Type* _f22580 = NULL;
    panda$core$Bit _f32582;
    org$pandalanguage$pandac$Position _f02585;
    org$pandalanguage$pandac$ChoiceEntry* _f12587 = NULL;
    org$pandalanguage$pandac$Position _f02590;
    org$pandalanguage$pandac$IRNode* _f12592 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* _f22594 = NULL;
    panda$core$Int64 _f32596;
    org$pandalanguage$pandac$Position _f02599;
    org$pandalanguage$pandac$Type* _f12601 = NULL;
    org$pandalanguage$pandac$IRNode* _f22603 = NULL;
    org$pandalanguage$pandac$Position _f02606;
    org$pandalanguage$pandac$Type* _f12608 = NULL;
    org$pandalanguage$pandac$Position _f02611;
    panda$core$String* _f12613 = NULL;
    org$pandalanguage$pandac$IRNode* _f02616 = NULL;
    org$pandalanguage$pandac$IRNode* _f12618 = NULL;
    org$pandalanguage$pandac$Position _f02621;
    panda$core$String* _f12623 = NULL;
    panda$collections$ImmutableArray* _f22625 = NULL;
    org$pandalanguage$pandac$IRNode* _f32627 = NULL;
    org$pandalanguage$pandac$IRNode* _f02630 = NULL;
    org$pandalanguage$pandac$IRNode* _f12632 = NULL;
    org$pandalanguage$pandac$Position _f02635;
    org$pandalanguage$pandac$Type* _f12637 = NULL;
    org$pandalanguage$pandac$IRNode* _f22639 = NULL;
    org$pandalanguage$pandac$FieldDecl* _f32641 = NULL;
    org$pandalanguage$pandac$Position _f02644;
    org$pandalanguage$pandac$IRNode* _f12646 = NULL;
    panda$collections$ImmutableArray* _f22648 = NULL;
    org$pandalanguage$pandac$IRNode* _f32650 = NULL;
    org$pandalanguage$pandac$Position _f02653;
    org$pandalanguage$pandac$Type* _f12655 = NULL;
    panda$core$UInt64 _f22657;
    org$pandalanguage$pandac$Position _f02660;
    org$pandalanguage$pandac$IRNode* _f12662 = NULL;
    org$pandalanguage$pandac$Position _f02665;
    org$pandalanguage$pandac$IRNode* _f12667 = NULL;
    org$pandalanguage$pandac$Position _f02670;
    panda$core$String* _f12672 = NULL;
    panda$collections$ImmutableArray* _f22674 = NULL;
    org$pandalanguage$pandac$Position _f02677;
    org$pandalanguage$pandac$IRNode* _f12679 = NULL;
    panda$collections$ImmutableArray* _f22681 = NULL;
    panda$collections$ImmutableArray* _f32683 = NULL;
    org$pandalanguage$pandac$Position _f02686;
    org$pandalanguage$pandac$IRNode* _f12688 = NULL;
    org$pandalanguage$pandac$MethodRef* _f22690 = NULL;
    org$pandalanguage$pandac$Position _f02693;
    org$pandalanguage$pandac$Type* _f12695 = NULL;
    panda$core$UInt64 _f22697;
    org$pandalanguage$pandac$Position _f02700;
    org$pandalanguage$pandac$Type* _f12702 = NULL;
    org$pandalanguage$pandac$Position _f02705;
    org$pandalanguage$pandac$parser$Token$Kind _f12707;
    org$pandalanguage$pandac$IRNode* _f22709 = NULL;
    org$pandalanguage$pandac$Position _f02712;
    panda$core$String* _f12714 = NULL;
    org$pandalanguage$pandac$IRNode* _f22716 = NULL;
    org$pandalanguage$pandac$IRNode* _f32718 = NULL;
    panda$collections$ImmutableArray* _f42720 = NULL;
    org$pandalanguage$pandac$Position _f02723;
    org$pandalanguage$pandac$Type* _f12725 = NULL;
    panda$core$Real64 _f22727;
    org$pandalanguage$pandac$Position _f02730;
    org$pandalanguage$pandac$IRNode* _f12732 = NULL;
    org$pandalanguage$pandac$Position _f02735;
    org$pandalanguage$pandac$Type* _f12737 = NULL;
    panda$core$Int64 _f22739;
    org$pandalanguage$pandac$IRNode* _f02742 = NULL;
    panda$core$Int64 _f12744;
    org$pandalanguage$pandac$Position _f02747;
    org$pandalanguage$pandac$Type* _f12749 = NULL;
    org$pandalanguage$pandac$Position _f02752;
    panda$core$String* _f12754 = NULL;
    org$pandalanguage$pandac$Position _f02757;
    org$pandalanguage$pandac$Type* _f12759 = NULL;
    org$pandalanguage$pandac$Position _f02762;
    org$pandalanguage$pandac$IRNode* _f12764 = NULL;
    org$pandalanguage$pandac$IRNode* _f22766 = NULL;
    org$pandalanguage$pandac$IRNode* _f32768 = NULL;
    org$pandalanguage$pandac$Position _f02771;
    org$pandalanguage$pandac$Type* _f12773 = NULL;
    org$pandalanguage$pandac$Position _f02776;
    panda$core$String* _f12778 = NULL;
    org$pandalanguage$pandac$Position _f02781;
    org$pandalanguage$pandac$Type* _f12783 = NULL;
    org$pandalanguage$pandac$IRNode* _f22785 = NULL;
    panda$collections$ImmutableArray* _f32787 = NULL;
    org$pandalanguage$pandac$Position _f02790;
    org$pandalanguage$pandac$Type* _f12792 = NULL;
    org$pandalanguage$pandac$IRNode* _f22794 = NULL;
    panda$collections$ImmutableArray* _f32796 = NULL;
    panda$collections$ImmutableArray* _f42798 = NULL;
    org$pandalanguage$pandac$Position _f02801;
    org$pandalanguage$pandac$IRNode* _f12803 = NULL;
    panda$collections$ImmutableArray* _f22805 = NULL;
    org$pandalanguage$pandac$Position _f02808;
    org$pandalanguage$pandac$IRNode* _f12810 = NULL;
    org$pandalanguage$pandac$IRNode* _f22812 = NULL;
    panda$core$Bit _f32814;
    org$pandalanguage$pandac$IRNode* _f42816 = NULL;
    org$pandalanguage$pandac$Position _f02819;
    org$pandalanguage$pandac$Variable$Kind _f12821;
    panda$collections$ImmutableArray* _f22823 = NULL;
    org$pandalanguage$pandac$Position _f02826;
    org$pandalanguage$pandac$Variable* _f12828 = NULL;
    org$pandalanguage$pandac$Position _f02831;
    panda$collections$ImmutableArray* _f12833 = NULL;
    panda$collections$ImmutableArray* _f22835 = NULL;
    org$pandalanguage$pandac$Position _f02838;
    panda$core$String* _f12840 = NULL;
    org$pandalanguage$pandac$IRNode* _f22842 = NULL;
    panda$collections$ImmutableArray* _f32844 = NULL;
    int $tmp2513;
    {
        int $tmp2516;
        {
            $tmp2518 = self;
            $match$5_12517 = $tmp2518;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2518));
            panda$core$Bit $tmp2519 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp2519.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2521 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02520 = *$tmp2521;
                org$pandalanguage$pandac$IRNode** $tmp2523 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12517->$data + 16));
                _f12522 = *$tmp2523;
                org$pandalanguage$pandac$IRNode** $tmp2525 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12517->$data + 24));
                _f22524 = *$tmp2525;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12522));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22524));
            }
            }
            else {
            panda$core$Bit $tmp2526 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp2526.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2528 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02527 = *$tmp2528;
                org$pandalanguage$pandac$Type** $tmp2530 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12517->$data + 16));
                _f12529 = *$tmp2530;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12529));
            }
            }
            else {
            panda$core$Bit $tmp2531 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp2531.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2533 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02532 = *$tmp2533;
                org$pandalanguage$pandac$Type** $tmp2535 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12517->$data + 16));
                _f12534 = *$tmp2535;
                org$pandalanguage$pandac$IRNode** $tmp2537 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12517->$data + 24));
                _f22536 = *$tmp2537;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2539 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12517->$data + 32));
                _f32538 = *$tmp2539;
                org$pandalanguage$pandac$IRNode** $tmp2541 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12517->$data + 40));
                _f42540 = *$tmp2541;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12534));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22536));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42540));
            }
            }
            else {
            panda$core$Bit $tmp2542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp2542.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2544 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02543 = *$tmp2544;
                org$pandalanguage$pandac$Type** $tmp2546 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12517->$data + 16));
                _f12545 = *$tmp2546;
                panda$core$Bit* $tmp2548 = ((panda$core$Bit*) ((char*) $match$5_12517->$data + 24));
                _f22547 = *$tmp2548;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12545));
            }
            }
            else {
            panda$core$Bit $tmp2549 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 4 }));
            if ($tmp2549.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2551 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02550 = *$tmp2551;
                panda$collections$ImmutableArray** $tmp2553 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12517->$data + 16));
                _f12552 = *$tmp2553;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12552));
            }
            }
            else {
            panda$core$Bit $tmp2554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 5 }));
            if ($tmp2554.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2556 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02555 = *$tmp2556;
                panda$collections$ImmutableArray** $tmp2558 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12517->$data + 16));
                _f12557 = *$tmp2558;
                panda$collections$ImmutableArray** $tmp2560 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12517->$data + 24));
                _f22559 = *$tmp2560;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12557));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22559));
            }
            }
            else {
            panda$core$Bit $tmp2561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 6 }));
            if ($tmp2561.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2563 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02562 = *$tmp2563;
                panda$core$String** $tmp2565 = ((panda$core$String**) ((char*) $match$5_12517->$data + 16));
                _f12564 = *$tmp2565;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12564));
            }
            }
            else {
            panda$core$Bit $tmp2566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 7 }));
            if ($tmp2566.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2568 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02567 = *$tmp2568;
                org$pandalanguage$pandac$Type** $tmp2570 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12517->$data + 16));
                _f12569 = *$tmp2570;
                org$pandalanguage$pandac$MethodRef** $tmp2572 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_12517->$data + 24));
                _f22571 = *$tmp2572;
                panda$collections$ImmutableArray** $tmp2574 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12517->$data + 32));
                _f32573 = *$tmp2574;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12569));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22571));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32573));
            }
            }
            else {
            panda$core$Bit $tmp2575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 8 }));
            if ($tmp2575.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2577 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02576 = *$tmp2577;
                org$pandalanguage$pandac$IRNode** $tmp2579 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12517->$data + 16));
                _f12578 = *$tmp2579;
                org$pandalanguage$pandac$Type** $tmp2581 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12517->$data + 24));
                _f22580 = *$tmp2581;
                panda$core$Bit* $tmp2583 = ((panda$core$Bit*) ((char*) $match$5_12517->$data + 32));
                _f32582 = *$tmp2583;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12578));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22580));
            }
            }
            else {
            panda$core$Bit $tmp2584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 9 }));
            if ($tmp2584.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2586 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02585 = *$tmp2586;
                org$pandalanguage$pandac$ChoiceEntry** $tmp2588 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_12517->$data + 16));
                _f12587 = *$tmp2588;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12587));
            }
            }
            else {
            panda$core$Bit $tmp2589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 10 }));
            if ($tmp2589.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2591 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02590 = *$tmp2591;
                org$pandalanguage$pandac$IRNode** $tmp2593 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12517->$data + 16));
                _f12592 = *$tmp2593;
                org$pandalanguage$pandac$ChoiceEntry** $tmp2595 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_12517->$data + 24));
                _f22594 = *$tmp2595;
                panda$core$Int64* $tmp2597 = ((panda$core$Int64*) ((char*) $match$5_12517->$data + 32));
                _f32596 = *$tmp2597;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12592));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22594));
            }
            }
            else {
            panda$core$Bit $tmp2598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp2598.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2600 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02599 = *$tmp2600;
                org$pandalanguage$pandac$Type** $tmp2602 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12517->$data + 16));
                _f12601 = *$tmp2602;
                org$pandalanguage$pandac$IRNode** $tmp2604 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12517->$data + 24));
                _f22603 = *$tmp2604;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12601));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22603));
            }
            }
            else {
            panda$core$Bit $tmp2605 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp2605.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2607 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02606 = *$tmp2607;
                org$pandalanguage$pandac$Type** $tmp2609 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12517->$data + 16));
                _f12608 = *$tmp2609;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12608));
            }
            }
            else {
            panda$core$Bit $tmp2610 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp2610.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2612 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02611 = *$tmp2612;
                panda$core$String** $tmp2614 = ((panda$core$String**) ((char*) $match$5_12517->$data + 16));
                _f12613 = *$tmp2614;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12613));
            }
            }
            else {
            panda$core$Bit $tmp2615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 14 }));
            if ($tmp2615.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2617 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12517->$data + 0));
                _f02616 = *$tmp2617;
                org$pandalanguage$pandac$IRNode** $tmp2619 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12517->$data + 8));
                _f12618 = *$tmp2619;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02616));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12618));
            }
            }
            else {
            panda$core$Bit $tmp2620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 15 }));
            if ($tmp2620.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2622 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02621 = *$tmp2622;
                panda$core$String** $tmp2624 = ((panda$core$String**) ((char*) $match$5_12517->$data + 16));
                _f12623 = *$tmp2624;
                panda$collections$ImmutableArray** $tmp2626 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12517->$data + 24));
                _f22625 = *$tmp2626;
                org$pandalanguage$pandac$IRNode** $tmp2628 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12517->$data + 32));
                _f32627 = *$tmp2628;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12623));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22625));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32627));
            }
            }
            else {
            panda$core$Bit $tmp2629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 16 }));
            if ($tmp2629.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2631 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12517->$data + 0));
                _f02630 = *$tmp2631;
                org$pandalanguage$pandac$IRNode** $tmp2633 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12517->$data + 8));
                _f12632 = *$tmp2633;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02630));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12632));
            }
            }
            else {
            panda$core$Bit $tmp2634 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp2634.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2636 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02635 = *$tmp2636;
                org$pandalanguage$pandac$Type** $tmp2638 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12517->$data + 16));
                _f12637 = *$tmp2638;
                org$pandalanguage$pandac$IRNode** $tmp2640 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12517->$data + 24));
                _f22639 = *$tmp2640;
                org$pandalanguage$pandac$FieldDecl** $tmp2642 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) $match$5_12517->$data + 32));
                _f32641 = *$tmp2642;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12637));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22639));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32641));
            }
            }
            else {
            panda$core$Bit $tmp2643 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp2643.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2645 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02644 = *$tmp2645;
                org$pandalanguage$pandac$IRNode** $tmp2647 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12517->$data + 16));
                _f12646 = *$tmp2647;
                panda$collections$ImmutableArray** $tmp2649 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12517->$data + 24));
                _f22648 = *$tmp2649;
                org$pandalanguage$pandac$IRNode** $tmp2651 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12517->$data + 32));
                _f32650 = *$tmp2651;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12646));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22648));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32650));
            }
            }
            else {
            panda$core$Bit $tmp2652 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp2652.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2654 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02653 = *$tmp2654;
                org$pandalanguage$pandac$Type** $tmp2656 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12517->$data + 16));
                _f12655 = *$tmp2656;
                panda$core$UInt64* $tmp2658 = ((panda$core$UInt64*) ((char*) $match$5_12517->$data + 24));
                _f22657 = *$tmp2658;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12655));
            }
            }
            else {
            panda$core$Bit $tmp2659 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 20 }));
            if ($tmp2659.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2661 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02660 = *$tmp2661;
                org$pandalanguage$pandac$IRNode** $tmp2663 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12517->$data + 16));
                _f12662 = *$tmp2663;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12662));
            }
            }
            else {
            panda$core$Bit $tmp2664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 21 }));
            if ($tmp2664.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2666 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02665 = *$tmp2666;
                org$pandalanguage$pandac$IRNode** $tmp2668 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12517->$data + 16));
                _f12667 = *$tmp2668;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12667));
            }
            }
            else {
            panda$core$Bit $tmp2669 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 22 }));
            if ($tmp2669.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2671 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02670 = *$tmp2671;
                panda$core$String** $tmp2673 = ((panda$core$String**) ((char*) $match$5_12517->$data + 16));
                _f12672 = *$tmp2673;
                panda$collections$ImmutableArray** $tmp2675 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12517->$data + 24));
                _f22674 = *$tmp2675;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12672));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22674));
            }
            }
            else {
            panda$core$Bit $tmp2676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 23 }));
            if ($tmp2676.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2678 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02677 = *$tmp2678;
                org$pandalanguage$pandac$IRNode** $tmp2680 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12517->$data + 16));
                _f12679 = *$tmp2680;
                panda$collections$ImmutableArray** $tmp2682 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12517->$data + 24));
                _f22681 = *$tmp2682;
                panda$collections$ImmutableArray** $tmp2684 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12517->$data + 32));
                _f32683 = *$tmp2684;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12679));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22681));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32683));
            }
            }
            else {
            panda$core$Bit $tmp2685 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 24 }));
            if ($tmp2685.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2687 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02686 = *$tmp2687;
                org$pandalanguage$pandac$IRNode** $tmp2689 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12517->$data + 16));
                _f12688 = *$tmp2689;
                org$pandalanguage$pandac$MethodRef** $tmp2691 = ((org$pandalanguage$pandac$MethodRef**) ((char*) $match$5_12517->$data + 24));
                _f22690 = *$tmp2691;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12688));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22690));
            }
            }
            else {
            panda$core$Bit $tmp2692 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 25 }));
            if ($tmp2692.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2694 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02693 = *$tmp2694;
                org$pandalanguage$pandac$Type** $tmp2696 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12517->$data + 16));
                _f12695 = *$tmp2696;
                panda$core$UInt64* $tmp2698 = ((panda$core$UInt64*) ((char*) $match$5_12517->$data + 24));
                _f22697 = *$tmp2698;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12695));
            }
            }
            else {
            panda$core$Bit $tmp2699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 26 }));
            if ($tmp2699.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2701 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02700 = *$tmp2701;
                org$pandalanguage$pandac$Type** $tmp2703 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12517->$data + 16));
                _f12702 = *$tmp2703;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12702));
            }
            }
            else {
            panda$core$Bit $tmp2704 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 27 }));
            if ($tmp2704.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2706 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02705 = *$tmp2706;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2708 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12517->$data + 16));
                _f12707 = *$tmp2708;
                org$pandalanguage$pandac$IRNode** $tmp2710 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12517->$data + 24));
                _f22709 = *$tmp2710;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22709));
            }
            }
            else {
            panda$core$Bit $tmp2711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 28 }));
            if ($tmp2711.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2713 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02712 = *$tmp2713;
                panda$core$String** $tmp2715 = ((panda$core$String**) ((char*) $match$5_12517->$data + 16));
                _f12714 = *$tmp2715;
                org$pandalanguage$pandac$IRNode** $tmp2717 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12517->$data + 24));
                _f22716 = *$tmp2717;
                org$pandalanguage$pandac$IRNode** $tmp2719 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12517->$data + 32));
                _f32718 = *$tmp2719;
                panda$collections$ImmutableArray** $tmp2721 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12517->$data + 40));
                _f42720 = *$tmp2721;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12714));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22716));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32718));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42720));
            }
            }
            else {
            panda$core$Bit $tmp2722 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 29 }));
            if ($tmp2722.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2724 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02723 = *$tmp2724;
                org$pandalanguage$pandac$Type** $tmp2726 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12517->$data + 16));
                _f12725 = *$tmp2726;
                panda$core$Real64* $tmp2728 = ((panda$core$Real64*) ((char*) $match$5_12517->$data + 24));
                _f22727 = *$tmp2728;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12725));
            }
            }
            else {
            panda$core$Bit $tmp2729 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 30 }));
            if ($tmp2729.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2731 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02730 = *$tmp2731;
                org$pandalanguage$pandac$IRNode** $tmp2733 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12517->$data + 16));
                _f12732 = *$tmp2733;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12732));
            }
            }
            else {
            panda$core$Bit $tmp2734 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 31 }));
            if ($tmp2734.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2736 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02735 = *$tmp2736;
                org$pandalanguage$pandac$Type** $tmp2738 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12517->$data + 16));
                _f12737 = *$tmp2738;
                panda$core$Int64* $tmp2740 = ((panda$core$Int64*) ((char*) $match$5_12517->$data + 24));
                _f22739 = *$tmp2740;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12737));
            }
            }
            else {
            panda$core$Bit $tmp2741 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 32 }));
            if ($tmp2741.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2743 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12517->$data + 0));
                _f02742 = *$tmp2743;
                panda$core$Int64* $tmp2745 = ((panda$core$Int64*) ((char*) $match$5_12517->$data + 8));
                _f12744 = *$tmp2745;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02742));
            }
            }
            else {
            panda$core$Bit $tmp2746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp2746.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2748 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02747 = *$tmp2748;
                org$pandalanguage$pandac$Type** $tmp2750 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12517->$data + 16));
                _f12749 = *$tmp2750;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12749));
            }
            }
            else {
            panda$core$Bit $tmp2751 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp2751.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2753 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02752 = *$tmp2753;
                panda$core$String** $tmp2755 = ((panda$core$String**) ((char*) $match$5_12517->$data + 16));
                _f12754 = *$tmp2755;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12754));
            }
            }
            else {
            panda$core$Bit $tmp2756 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 35 }));
            if ($tmp2756.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2758 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02757 = *$tmp2758;
                org$pandalanguage$pandac$Type** $tmp2760 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12517->$data + 16));
                _f12759 = *$tmp2760;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12759));
            }
            }
            else {
            panda$core$Bit $tmp2761 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 36 }));
            if ($tmp2761.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2763 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02762 = *$tmp2763;
                org$pandalanguage$pandac$IRNode** $tmp2765 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12517->$data + 16));
                _f12764 = *$tmp2765;
                org$pandalanguage$pandac$IRNode** $tmp2767 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12517->$data + 24));
                _f22766 = *$tmp2767;
                org$pandalanguage$pandac$IRNode** $tmp2769 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12517->$data + 32));
                _f32768 = *$tmp2769;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12764));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22766));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32768));
            }
            }
            else {
            panda$core$Bit $tmp2770 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 37 }));
            if ($tmp2770.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2772 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02771 = *$tmp2772;
                org$pandalanguage$pandac$Type** $tmp2774 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12517->$data + 16));
                _f12773 = *$tmp2774;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12773));
            }
            }
            else {
            panda$core$Bit $tmp2775 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 38 }));
            if ($tmp2775.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2777 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02776 = *$tmp2777;
                panda$core$String** $tmp2779 = ((panda$core$String**) ((char*) $match$5_12517->$data + 16));
                _f12778 = *$tmp2779;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12778));
            }
            }
            else {
            panda$core$Bit $tmp2780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp2780.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2782 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02781 = *$tmp2782;
                org$pandalanguage$pandac$Type** $tmp2784 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12517->$data + 16));
                _f12783 = *$tmp2784;
                org$pandalanguage$pandac$IRNode** $tmp2786 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12517->$data + 24));
                _f22785 = *$tmp2786;
                panda$collections$ImmutableArray** $tmp2788 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12517->$data + 32));
                _f32787 = *$tmp2788;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12783));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22785));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32787));
            }
            }
            else {
            panda$core$Bit $tmp2789 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 40 }));
            if ($tmp2789.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2791 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02790 = *$tmp2791;
                org$pandalanguage$pandac$Type** $tmp2793 = ((org$pandalanguage$pandac$Type**) ((char*) $match$5_12517->$data + 16));
                _f12792 = *$tmp2793;
                org$pandalanguage$pandac$IRNode** $tmp2795 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12517->$data + 24));
                _f22794 = *$tmp2795;
                panda$collections$ImmutableArray** $tmp2797 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12517->$data + 32));
                _f32796 = *$tmp2797;
                panda$collections$ImmutableArray** $tmp2799 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12517->$data + 40));
                _f42798 = *$tmp2799;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12792));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22794));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32796));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42798));
            }
            }
            else {
            panda$core$Bit $tmp2800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 41 }));
            if ($tmp2800.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2802 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02801 = *$tmp2802;
                org$pandalanguage$pandac$IRNode** $tmp2804 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12517->$data + 16));
                _f12803 = *$tmp2804;
                panda$collections$ImmutableArray** $tmp2806 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12517->$data + 24));
                _f22805 = *$tmp2806;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12803));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22805));
            }
            }
            else {
            panda$core$Bit $tmp2807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 42 }));
            if ($tmp2807.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2809 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02808 = *$tmp2809;
                org$pandalanguage$pandac$IRNode** $tmp2811 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12517->$data + 16));
                _f12810 = *$tmp2811;
                org$pandalanguage$pandac$IRNode** $tmp2813 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12517->$data + 24));
                _f22812 = *$tmp2813;
                panda$core$Bit* $tmp2815 = ((panda$core$Bit*) ((char*) $match$5_12517->$data + 32));
                _f32814 = *$tmp2815;
                org$pandalanguage$pandac$IRNode** $tmp2817 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12517->$data + 33));
                _f42816 = *$tmp2817;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12810));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22812));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42816));
            }
            }
            else {
            panda$core$Bit $tmp2818 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 43 }));
            if ($tmp2818.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2820 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02819 = *$tmp2820;
                org$pandalanguage$pandac$Variable$Kind* $tmp2822 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_12517->$data + 16));
                _f12821 = *$tmp2822;
                panda$collections$ImmutableArray** $tmp2824 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12517->$data + 24));
                _f22823 = *$tmp2824;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22823));
            }
            }
            else {
            panda$core$Bit $tmp2825 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 44 }));
            if ($tmp2825.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2827 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02826 = *$tmp2827;
                org$pandalanguage$pandac$Variable** $tmp2829 = ((org$pandalanguage$pandac$Variable**) ((char*) $match$5_12517->$data + 16));
                _f12828 = *$tmp2829;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12828));
            }
            }
            else {
            panda$core$Bit $tmp2830 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 45 }));
            if ($tmp2830.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2832 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02831 = *$tmp2832;
                panda$collections$ImmutableArray** $tmp2834 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12517->$data + 16));
                _f12833 = *$tmp2834;
                panda$collections$ImmutableArray** $tmp2836 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12517->$data + 24));
                _f22835 = *$tmp2836;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12833));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22835));
            }
            }
            else {
            panda$core$Bit $tmp2837 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12517->$rawValue, ((panda$core$Int64) { 46 }));
            if ($tmp2837.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2839 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12517->$data + 0));
                _f02838 = *$tmp2839;
                panda$core$String** $tmp2841 = ((panda$core$String**) ((char*) $match$5_12517->$data + 16));
                _f12840 = *$tmp2841;
                org$pandalanguage$pandac$IRNode** $tmp2843 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12517->$data + 24));
                _f22842 = *$tmp2843;
                panda$collections$ImmutableArray** $tmp2845 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12517->$data + 32));
                _f32844 = *$tmp2845;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12840));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22842));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32844));
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
        }
        $tmp2516 = -1;
        goto $l2514;
        $l2514:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2518));
        switch ($tmp2516) {
            case -1: goto $l2846;
        }
        $l2846:;
    }
    $tmp2513 = -1;
    goto $l2511;
    $l2511:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2513) {
        case -1: goto $l2847;
    }
    $l2847:;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp2849;
    org$pandalanguage$pandac$IRNode* $tmp2852;
    org$pandalanguage$pandac$IRNode* $tmp2853;
    org$pandalanguage$pandac$IRNode* $tmp2856;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2848 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2848 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp2850 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp2849 = *$tmp2850;
        org$pandalanguage$pandac$IRNode** $tmp2851 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp2852 = p_f1;
        *$tmp2851 = $tmp2852;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2852));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2849));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp2854 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp2853 = *$tmp2854;
        org$pandalanguage$pandac$IRNode** $tmp2855 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp2856 = p_f2;
        *$tmp2855 = $tmp2856;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2856));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2853));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1) {
    org$pandalanguage$pandac$Type* $tmp2858;
    org$pandalanguage$pandac$Type* $tmp2861;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2857 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2857 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp2859 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2858 = *$tmp2859;
        org$pandalanguage$pandac$Type** $tmp2860 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2861 = p_f1;
        *$tmp2860 = $tmp2861;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2861));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2858));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$parser$Token$Kind p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$Type* $tmp2863;
    org$pandalanguage$pandac$Type* $tmp2866;
    org$pandalanguage$pandac$IRNode* $tmp2867;
    org$pandalanguage$pandac$IRNode* $tmp2870;
    org$pandalanguage$pandac$IRNode* $tmp2872;
    org$pandalanguage$pandac$IRNode* $tmp2875;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2862 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2862 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp2864 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2863 = *$tmp2864;
        org$pandalanguage$pandac$Type** $tmp2865 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2866 = p_f1;
        *$tmp2865 = $tmp2866;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2866));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2863));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp2868 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp2867 = *$tmp2868;
        org$pandalanguage$pandac$IRNode** $tmp2869 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp2870 = p_f2;
        *$tmp2869 = $tmp2870;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2870));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2867));
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2871 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 32));
    *$tmp2871 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp2873 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        $tmp2872 = *$tmp2873;
        org$pandalanguage$pandac$IRNode** $tmp2874 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 40));
        $tmp2875 = p_f4;
        *$tmp2874 = $tmp2875;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2875));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2872));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Bit p_f2) {
    org$pandalanguage$pandac$Type* $tmp2877;
    org$pandalanguage$pandac$Type* $tmp2880;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2876 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2876 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp2878 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2877 = *$tmp2878;
        org$pandalanguage$pandac$Type** $tmp2879 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2880 = p_f1;
        *$tmp2879 = $tmp2880;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2880));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2877));
    }
    panda$core$Bit* $tmp2881 = ((panda$core$Bit*) ((char*) self->$data + 24));
    *$tmp2881 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    panda$collections$ImmutableArray* $tmp2883;
    panda$collections$ImmutableArray* $tmp2886;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2882 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2882 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2884 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2883 = *$tmp2884;
        panda$collections$ImmutableArray** $tmp2885 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2886 = p_f1;
        *$tmp2885 = $tmp2886;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2886));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2883));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp2888;
    panda$collections$ImmutableArray* $tmp2891;
    panda$collections$ImmutableArray* $tmp2892;
    panda$collections$ImmutableArray* $tmp2895;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2887 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2887 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2889 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2888 = *$tmp2889;
        panda$collections$ImmutableArray** $tmp2890 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2891 = p_f1;
        *$tmp2890 = $tmp2891;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2891));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2888));
    }
    {
        panda$collections$ImmutableArray** $tmp2893 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2892 = *$tmp2893;
        panda$collections$ImmutableArray** $tmp2894 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2895 = p_f2;
        *$tmp2894 = $tmp2895;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2895));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2892));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp2897;
    panda$core$String* $tmp2900;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2896 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2896 = p_f0;
    {
        panda$core$String** $tmp2898 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2897 = *$tmp2898;
        panda$core$String** $tmp2899 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2900 = p_f1;
        *$tmp2899 = $tmp2900;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2900));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2897));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$MethodRef$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$MethodRef* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp2902;
    org$pandalanguage$pandac$Type* $tmp2905;
    org$pandalanguage$pandac$MethodRef* $tmp2906;
    org$pandalanguage$pandac$MethodRef* $tmp2909;
    panda$collections$ImmutableArray* $tmp2910;
    panda$collections$ImmutableArray* $tmp2913;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2901 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2901 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp2903 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2902 = *$tmp2903;
        org$pandalanguage$pandac$Type** $tmp2904 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2905 = p_f1;
        *$tmp2904 = $tmp2905;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2905));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2902));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp2907 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp2906 = *$tmp2907;
        org$pandalanguage$pandac$MethodRef** $tmp2908 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp2909 = p_f2;
        *$tmp2908 = $tmp2909;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2909));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2906));
    }
    {
        panda$collections$ImmutableArray** $tmp2911 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2910 = *$tmp2911;
        panda$collections$ImmutableArray** $tmp2912 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2913 = p_f3;
        *$tmp2912 = $tmp2913;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2913));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2910));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$Type$panda$core$Bit(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$Type* p_f2, panda$core$Bit p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp2915;
    org$pandalanguage$pandac$IRNode* $tmp2918;
    org$pandalanguage$pandac$Type* $tmp2919;
    org$pandalanguage$pandac$Type* $tmp2922;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2914 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2914 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp2916 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp2915 = *$tmp2916;
        org$pandalanguage$pandac$IRNode** $tmp2917 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp2918 = p_f1;
        *$tmp2917 = $tmp2918;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2918));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2915));
    }
    {
        org$pandalanguage$pandac$Type** $tmp2920 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp2919 = *$tmp2920;
        org$pandalanguage$pandac$Type** $tmp2921 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 24));
        $tmp2922 = p_f2;
        *$tmp2921 = $tmp2922;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2922));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2919));
    }
    panda$core$Bit* $tmp2923 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp2923 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ChoiceEntry(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ChoiceEntry* p_f1) {
    org$pandalanguage$pandac$ChoiceEntry* $tmp2925;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2928;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2924 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2924 = p_f0;
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp2926 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        $tmp2925 = *$tmp2926;
        org$pandalanguage$pandac$ChoiceEntry** $tmp2927 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 16));
        $tmp2928 = p_f1;
        *$tmp2927 = $tmp2928;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2928));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2925));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp2930;
    org$pandalanguage$pandac$IRNode* $tmp2933;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2934;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2937;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2929 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2929 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp2931 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp2930 = *$tmp2931;
        org$pandalanguage$pandac$IRNode** $tmp2932 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp2933 = p_f1;
        *$tmp2932 = $tmp2933;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2933));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2930));
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp2935 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp2934 = *$tmp2935;
        org$pandalanguage$pandac$ChoiceEntry** $tmp2936 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp2937 = p_f2;
        *$tmp2936 = $tmp2937;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2937));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2934));
    }
    panda$core$Int64* $tmp2938 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp2938 = p_f3;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$Type* $tmp2940;
    org$pandalanguage$pandac$Type* $tmp2943;
    org$pandalanguage$pandac$IRNode* $tmp2944;
    org$pandalanguage$pandac$IRNode* $tmp2947;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2939 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2939 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp2941 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2940 = *$tmp2941;
        org$pandalanguage$pandac$Type** $tmp2942 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2943 = p_f1;
        *$tmp2942 = $tmp2943;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2943));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2940));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp2945 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp2944 = *$tmp2945;
        org$pandalanguage$pandac$IRNode** $tmp2946 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp2947 = p_f2;
        *$tmp2946 = $tmp2947;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2947));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2944));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp2948;
    org$pandalanguage$pandac$IRNode* $tmp2951;
    org$pandalanguage$pandac$IRNode* $tmp2952;
    org$pandalanguage$pandac$IRNode* $tmp2955;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp2949 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp2948 = *$tmp2949;
        org$pandalanguage$pandac$IRNode** $tmp2950 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp2951 = p_f0;
        *$tmp2950 = $tmp2951;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2951));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2948));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp2953 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp2952 = *$tmp2953;
        org$pandalanguage$pandac$IRNode** $tmp2954 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp2955 = p_f1;
        *$tmp2954 = $tmp2955;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2955));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2952));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    panda$core$String* $tmp2957;
    panda$core$String* $tmp2960;
    panda$collections$ImmutableArray* $tmp2961;
    panda$collections$ImmutableArray* $tmp2964;
    org$pandalanguage$pandac$IRNode* $tmp2965;
    org$pandalanguage$pandac$IRNode* $tmp2968;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2956 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2956 = p_f0;
    {
        panda$core$String** $tmp2958 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2957 = *$tmp2958;
        panda$core$String** $tmp2959 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2960 = p_f1;
        *$tmp2959 = $tmp2960;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2960));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2957));
    }
    {
        panda$collections$ImmutableArray** $tmp2962 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2961 = *$tmp2962;
        panda$collections$ImmutableArray** $tmp2963 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2964 = p_f2;
        *$tmp2963 = $tmp2964;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2964));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2961));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp2966 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp2965 = *$tmp2966;
        org$pandalanguage$pandac$IRNode** $tmp2967 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp2968 = p_f3;
        *$tmp2967 = $tmp2968;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2968));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2965));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp2969;
    org$pandalanguage$pandac$IRNode* $tmp2972;
    org$pandalanguage$pandac$IRNode* $tmp2973;
    org$pandalanguage$pandac$IRNode* $tmp2976;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp2970 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp2969 = *$tmp2970;
        org$pandalanguage$pandac$IRNode** $tmp2971 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp2972 = p_f0;
        *$tmp2971 = $tmp2972;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2972));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2969));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp2974 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp2973 = *$tmp2974;
        org$pandalanguage$pandac$IRNode** $tmp2975 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 8));
        $tmp2976 = p_f1;
        *$tmp2975 = $tmp2976;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2976));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2973));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$FieldDecl(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$FieldDecl* p_f3) {
    org$pandalanguage$pandac$Type* $tmp2978;
    org$pandalanguage$pandac$Type* $tmp2981;
    org$pandalanguage$pandac$IRNode* $tmp2982;
    org$pandalanguage$pandac$IRNode* $tmp2985;
    org$pandalanguage$pandac$FieldDecl* $tmp2986;
    org$pandalanguage$pandac$FieldDecl* $tmp2989;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2977 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2977 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp2979 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2978 = *$tmp2979;
        org$pandalanguage$pandac$Type** $tmp2980 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp2981 = p_f1;
        *$tmp2980 = $tmp2981;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2981));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2978));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp2983 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp2982 = *$tmp2983;
        org$pandalanguage$pandac$IRNode** $tmp2984 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp2985 = p_f2;
        *$tmp2984 = $tmp2985;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2985));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2982));
    }
    {
        org$pandalanguage$pandac$FieldDecl** $tmp2987 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp2986 = *$tmp2987;
        org$pandalanguage$pandac$FieldDecl** $tmp2988 = ((org$pandalanguage$pandac$FieldDecl**) ((char*) self->$data + 32));
        $tmp2989 = p_f3;
        *$tmp2988 = $tmp2989;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2989));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2986));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp2991;
    org$pandalanguage$pandac$IRNode* $tmp2994;
    panda$collections$ImmutableArray* $tmp2995;
    panda$collections$ImmutableArray* $tmp2998;
    org$pandalanguage$pandac$IRNode* $tmp2999;
    org$pandalanguage$pandac$IRNode* $tmp3002;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2990 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2990 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp2992 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp2991 = *$tmp2992;
        org$pandalanguage$pandac$IRNode** $tmp2993 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp2994 = p_f1;
        *$tmp2993 = $tmp2994;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2994));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2991));
    }
    {
        panda$collections$ImmutableArray** $tmp2996 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2995 = *$tmp2996;
        panda$collections$ImmutableArray** $tmp2997 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2998 = p_f2;
        *$tmp2997 = $tmp2998;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2998));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2995));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3000 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp2999 = *$tmp3000;
        org$pandalanguage$pandac$IRNode** $tmp3001 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3002 = p_f3;
        *$tmp3001 = $tmp3002;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3002));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2999));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$UInt64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$UInt64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3004;
    org$pandalanguage$pandac$Type* $tmp3007;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3003 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3003 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3005 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3004 = *$tmp3005;
        org$pandalanguage$pandac$Type** $tmp3006 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3007 = p_f1;
        *$tmp3006 = $tmp3007;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3007));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3004));
    }
    panda$core$UInt64* $tmp3008 = ((panda$core$UInt64*) ((char*) self->$data + 24));
    *$tmp3008 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3010;
    org$pandalanguage$pandac$IRNode* $tmp3013;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3009 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3009 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3011 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3010 = *$tmp3011;
        org$pandalanguage$pandac$IRNode** $tmp3012 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3013 = p_f1;
        *$tmp3012 = $tmp3013;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3013));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3010));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp3015;
    panda$core$String* $tmp3018;
    panda$collections$ImmutableArray* $tmp3019;
    panda$collections$ImmutableArray* $tmp3022;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3014 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3014 = p_f0;
    {
        panda$core$String** $tmp3016 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3015 = *$tmp3016;
        panda$core$String** $tmp3017 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3018 = p_f1;
        *$tmp3017 = $tmp3018;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3018));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3015));
    }
    {
        panda$collections$ImmutableArray** $tmp3020 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3019 = *$tmp3020;
        panda$collections$ImmutableArray** $tmp3021 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3022 = p_f2;
        *$tmp3021 = $tmp3022;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3022));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3019));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3024;
    org$pandalanguage$pandac$IRNode* $tmp3027;
    panda$collections$ImmutableArray* $tmp3028;
    panda$collections$ImmutableArray* $tmp3031;
    panda$collections$ImmutableArray* $tmp3032;
    panda$collections$ImmutableArray* $tmp3035;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3023 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3023 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3025 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3024 = *$tmp3025;
        org$pandalanguage$pandac$IRNode** $tmp3026 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3027 = p_f1;
        *$tmp3026 = $tmp3027;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3027));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3024));
    }
    {
        panda$collections$ImmutableArray** $tmp3029 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3028 = *$tmp3029;
        panda$collections$ImmutableArray** $tmp3030 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3031 = p_f2;
        *$tmp3030 = $tmp3031;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3031));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3028));
    }
    {
        panda$collections$ImmutableArray** $tmp3033 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3032 = *$tmp3033;
        panda$collections$ImmutableArray** $tmp3034 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3035 = p_f3;
        *$tmp3034 = $tmp3035;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3035));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3032));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q$org$pandalanguage$pandac$MethodRef(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$MethodRef* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3037;
    org$pandalanguage$pandac$IRNode* $tmp3040;
    org$pandalanguage$pandac$MethodRef* $tmp3041;
    org$pandalanguage$pandac$MethodRef* $tmp3044;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3036 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3036 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3038 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3037 = *$tmp3038;
        org$pandalanguage$pandac$IRNode** $tmp3039 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3040 = p_f1;
        *$tmp3039 = $tmp3040;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3040));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3037));
    }
    {
        org$pandalanguage$pandac$MethodRef** $tmp3042 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp3041 = *$tmp3042;
        org$pandalanguage$pandac$MethodRef** $tmp3043 = ((org$pandalanguage$pandac$MethodRef**) ((char*) self->$data + 24));
        $tmp3044 = p_f2;
        *$tmp3043 = $tmp3044;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3044));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3041));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$IRNode* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3047;
    org$pandalanguage$pandac$IRNode* $tmp3050;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3045 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3045 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp3046 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp3046 = p_f1;
    {
        org$pandalanguage$pandac$IRNode** $tmp3048 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3047 = *$tmp3048;
        org$pandalanguage$pandac$IRNode** $tmp3049 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3050 = p_f2;
        *$tmp3049 = $tmp3050;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3050));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3047));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    panda$core$String* $tmp3052;
    panda$core$String* $tmp3055;
    org$pandalanguage$pandac$IRNode* $tmp3056;
    org$pandalanguage$pandac$IRNode* $tmp3059;
    org$pandalanguage$pandac$IRNode* $tmp3060;
    org$pandalanguage$pandac$IRNode* $tmp3063;
    panda$collections$ImmutableArray* $tmp3064;
    panda$collections$ImmutableArray* $tmp3067;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3051 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3051 = p_f0;
    {
        panda$core$String** $tmp3053 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3052 = *$tmp3053;
        panda$core$String** $tmp3054 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3055 = p_f1;
        *$tmp3054 = $tmp3055;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3055));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3052));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3057 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3056 = *$tmp3057;
        org$pandalanguage$pandac$IRNode** $tmp3058 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3059 = p_f2;
        *$tmp3058 = $tmp3059;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3059));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3056));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3061 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3060 = *$tmp3061;
        org$pandalanguage$pandac$IRNode** $tmp3062 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3063 = p_f3;
        *$tmp3062 = $tmp3063;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3063));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3060));
    }
    {
        panda$collections$ImmutableArray** $tmp3065 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3064 = *$tmp3065;
        panda$collections$ImmutableArray** $tmp3066 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3067 = p_f4;
        *$tmp3066 = $tmp3067;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3067));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3064));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Real64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Real64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3069;
    org$pandalanguage$pandac$Type* $tmp3072;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3068 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3068 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3070 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3069 = *$tmp3070;
        org$pandalanguage$pandac$Type** $tmp3071 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3072 = p_f1;
        *$tmp3071 = $tmp3072;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3072));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3069));
    }
    panda$core$Real64* $tmp3073 = ((panda$core$Real64*) ((char*) self->$data + 24));
    *$tmp3073 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$Q(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3075;
    org$pandalanguage$pandac$IRNode* $tmp3078;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3074 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3074 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3076 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3075 = *$tmp3076;
        org$pandalanguage$pandac$IRNode** $tmp3077 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3078 = p_f1;
        *$tmp3077 = $tmp3078;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3078));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3075));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, panda$core$Int64 p_f2) {
    org$pandalanguage$pandac$Type* $tmp3080;
    org$pandalanguage$pandac$Type* $tmp3083;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3079 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3079 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3081 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3080 = *$tmp3081;
        org$pandalanguage$pandac$Type** $tmp3082 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3083 = p_f1;
        *$tmp3082 = $tmp3083;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3083));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3080));
    }
    panda$core$Int64* $tmp3084 = ((panda$core$Int64*) ((char*) self->$data + 24));
    *$tmp3084 = p_f2;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode$panda$core$Int64(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0, panda$core$Int64 p_f1) {
    org$pandalanguage$pandac$IRNode* $tmp3085;
    org$pandalanguage$pandac$IRNode* $tmp3088;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp3086 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3085 = *$tmp3086;
        org$pandalanguage$pandac$IRNode** $tmp3087 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp3088 = p_f0;
        *$tmp3087 = $tmp3088;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3088));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3085));
    }
    panda$core$Int64* $tmp3089 = ((panda$core$Int64*) ((char*) self->$data + 8));
    *$tmp3089 = p_f1;
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp3091;
    panda$core$String* $tmp3094;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3090 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3090 = p_f0;
    {
        panda$core$String** $tmp3092 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3091 = *$tmp3092;
        panda$core$String** $tmp3093 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp3094 = p_f1;
        *$tmp3093 = $tmp3094;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3094));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3091));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, org$pandalanguage$pandac$IRNode* p_f3) {
    org$pandalanguage$pandac$IRNode* $tmp3096;
    org$pandalanguage$pandac$IRNode* $tmp3099;
    org$pandalanguage$pandac$IRNode* $tmp3100;
    org$pandalanguage$pandac$IRNode* $tmp3103;
    org$pandalanguage$pandac$IRNode* $tmp3104;
    org$pandalanguage$pandac$IRNode* $tmp3107;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3095 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3095 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3097 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3096 = *$tmp3097;
        org$pandalanguage$pandac$IRNode** $tmp3098 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3099 = p_f1;
        *$tmp3098 = $tmp3099;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3099));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3096));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3101 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3100 = *$tmp3101;
        org$pandalanguage$pandac$IRNode** $tmp3102 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3103 = p_f2;
        *$tmp3102 = $tmp3103;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3103));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3100));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3105 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3104 = *$tmp3105;
        org$pandalanguage$pandac$IRNode** $tmp3106 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 32));
        $tmp3107 = p_f3;
        *$tmp3106 = $tmp3107;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3107));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3104));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$Type* $tmp3109;
    org$pandalanguage$pandac$Type* $tmp3112;
    org$pandalanguage$pandac$IRNode* $tmp3113;
    org$pandalanguage$pandac$IRNode* $tmp3116;
    panda$collections$ImmutableArray* $tmp3117;
    panda$collections$ImmutableArray* $tmp3120;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3108 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3108 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3110 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3109 = *$tmp3110;
        org$pandalanguage$pandac$Type** $tmp3111 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3112 = p_f1;
        *$tmp3111 = $tmp3112;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3112));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3109));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3114 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3113 = *$tmp3114;
        org$pandalanguage$pandac$IRNode** $tmp3115 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3116 = p_f2;
        *$tmp3115 = $tmp3116;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3116));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3113));
    }
    {
        panda$collections$ImmutableArray** $tmp3118 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3117 = *$tmp3118;
        panda$collections$ImmutableArray** $tmp3119 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3120 = p_f3;
        *$tmp3119 = $tmp3120;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3120));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3117));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Type$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Type* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3, panda$collections$ImmutableArray* p_f4) {
    org$pandalanguage$pandac$Type* $tmp3122;
    org$pandalanguage$pandac$Type* $tmp3125;
    org$pandalanguage$pandac$IRNode* $tmp3126;
    org$pandalanguage$pandac$IRNode* $tmp3129;
    panda$collections$ImmutableArray* $tmp3130;
    panda$collections$ImmutableArray* $tmp3133;
    panda$collections$ImmutableArray* $tmp3134;
    panda$collections$ImmutableArray* $tmp3137;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3121 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3121 = p_f0;
    {
        org$pandalanguage$pandac$Type** $tmp3123 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3122 = *$tmp3123;
        org$pandalanguage$pandac$Type** $tmp3124 = ((org$pandalanguage$pandac$Type**) ((char*) self->$data + 16));
        $tmp3125 = p_f1;
        *$tmp3124 = $tmp3125;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3125));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3122));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3127 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3126 = *$tmp3127;
        org$pandalanguage$pandac$IRNode** $tmp3128 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3129 = p_f2;
        *$tmp3128 = $tmp3129;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3129));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3126));
    }
    {
        panda$collections$ImmutableArray** $tmp3131 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3130 = *$tmp3131;
        panda$collections$ImmutableArray** $tmp3132 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3133 = p_f3;
        *$tmp3132 = $tmp3133;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3133));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3130));
    }
    {
        panda$collections$ImmutableArray** $tmp3135 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3134 = *$tmp3135;
        panda$collections$ImmutableArray** $tmp3136 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp3137 = p_f4;
        *$tmp3136 = $tmp3137;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3137));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3134));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$MethodRef$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    org$pandalanguage$pandac$IRNode* $tmp3139;
    org$pandalanguage$pandac$IRNode* $tmp3142;
    panda$collections$ImmutableArray* $tmp3143;
    panda$collections$ImmutableArray* $tmp3146;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3138 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3138 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3140 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3139 = *$tmp3140;
        org$pandalanguage$pandac$IRNode** $tmp3141 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3142 = p_f1;
        *$tmp3141 = $tmp3142;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3142));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3139));
    }
    {
        panda$collections$ImmutableArray** $tmp3144 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3143 = *$tmp3144;
        panda$collections$ImmutableArray** $tmp3145 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3146 = p_f2;
        *$tmp3145 = $tmp3146;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3146));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3143));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IRNode$org$pandalanguage$pandac$IRNode$panda$core$Bit$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$IRNode* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$IRNode* p_f4) {
    org$pandalanguage$pandac$IRNode* $tmp3148;
    org$pandalanguage$pandac$IRNode* $tmp3151;
    org$pandalanguage$pandac$IRNode* $tmp3152;
    org$pandalanguage$pandac$IRNode* $tmp3155;
    org$pandalanguage$pandac$IRNode* $tmp3157;
    org$pandalanguage$pandac$IRNode* $tmp3160;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3147 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3147 = p_f0;
    {
        org$pandalanguage$pandac$IRNode** $tmp3149 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3148 = *$tmp3149;
        org$pandalanguage$pandac$IRNode** $tmp3150 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 16));
        $tmp3151 = p_f1;
        *$tmp3150 = $tmp3151;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3151));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3148));
    }
    {
        org$pandalanguage$pandac$IRNode** $tmp3153 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3152 = *$tmp3153;
        org$pandalanguage$pandac$IRNode** $tmp3154 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3155 = p_f2;
        *$tmp3154 = $tmp3155;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3155));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3152));
    }
    panda$core$Bit* $tmp3156 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp3156 = p_f3;
    {
        org$pandalanguage$pandac$IRNode** $tmp3158 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp3157 = *$tmp3158;
        org$pandalanguage$pandac$IRNode** $tmp3159 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 33));
        $tmp3160 = p_f4;
        *$tmp3159 = $tmp3160;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3160));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3157));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp3163;
    panda$collections$ImmutableArray* $tmp3166;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3161 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3161 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp3162 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp3162 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp3164 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3163 = *$tmp3164;
        panda$collections$ImmutableArray** $tmp3165 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp3166 = p_f2;
        *$tmp3165 = $tmp3166;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3166));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3163));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable* p_f1) {
    org$pandalanguage$pandac$Variable* $tmp3168;
    org$pandalanguage$pandac$Variable* $tmp3171;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp3167 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp3167 = p_f0;
    {
        org$pandalanguage$pandac$Variable** $tmp3169 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp3168 = *$tmp3169;
        org$pandalanguage$pandac$Variable** $tmp3170 = ((org$pandalanguage$pandac$Variable**) ((char*) self->$data + 16));
        $tmp3171 = p_f1;
        *$tmp3170 = $tmp3171;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3171));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3168));
    }
}
void org$pandalanguage$pandac$IRNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$IRNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$IRNode$GT(org$pandalanguage$pandac$IRNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$IRNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    panda$core$String* $tmp3173;
    panda$core$String* $tmp3176;
    org$pandalanguage$pandac$IRNode* $tmp3177;
    org$pandalanguage$pandac$IRNode* $tmp3180;
    panda$collections$ImmutableArray* $tmp3181;
    panda$collections$ImmutableArray* $tmp3184;
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
        org$pandalanguage$pandac$IRNode** $tmp3178 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3177 = *$tmp3178;
        org$pandalanguage$pandac$IRNode** $tmp3179 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 24));
        $tmp3180 = p_f2;
        *$tmp3179 = $tmp3180;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3180));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3177));
    }
    {
        panda$collections$ImmutableArray** $tmp3182 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3181 = *$tmp3182;
        panda$collections$ImmutableArray** $tmp3183 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp3184 = p_f3;
        *$tmp3183 = $tmp3184;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp3184));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3181));
    }
}

