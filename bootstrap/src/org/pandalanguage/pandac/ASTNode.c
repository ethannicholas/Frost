#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Panda.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "panda/collections/ImmutableArray.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"
#include "panda/collections/ListView.h"
#include "org/pandalanguage/pandac/ChoiceEntry.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "panda/core/Real64.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"


static panda$core$String $s1;
org$pandalanguage$pandac$ASTNode$class_type org$pandalanguage$pandac$ASTNode$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String, org$pandalanguage$pandac$ASTNode$cleanup, org$pandalanguage$pandac$ASTNode$position$R$org$pandalanguage$pandac$Position} };

typedef org$pandalanguage$pandac$Position (*$fn125)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn346)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn387)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn394)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn405)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn446)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn453)(panda$collections$ListView*);
typedef panda$core$String* (*$fn487)(panda$collections$ListView*);
typedef panda$core$String* (*$fn513)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn560)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn567)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn578)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn598)(panda$collections$ListView*);
typedef panda$core$String* (*$fn609)(panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn623)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn630)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn641)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn682)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn693)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn725)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn732)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn743)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn773)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn807)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn814)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn825)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn857)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn864)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn875)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn927)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn934)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn945)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn976)(panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn1017)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1024)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1035)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1069)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1099)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1106)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1117)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1160)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1167)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1178)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1229)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1236)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1247)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1270)(panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn1290)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1297)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1308)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1361)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1443)(panda$core$Object*);
typedef panda$core$String* (*$fn1545)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1562)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1610)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1634)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1674)(panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn1707)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1714)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1725)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1748)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1755)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1766)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1813)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1820)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1831)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 32, -9211815390615587804, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s321 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x28", 5, 17286533032, NULL };
static panda$core$String $s323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s329 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s426 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s456 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s482 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s515 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s523 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s550 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s581 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s589 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static panda$core$String $s591 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static panda$core$String $s594 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s601 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s605 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s614 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s644 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s662 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s664 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s669 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s684 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s687 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s714 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s716 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s746 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s752 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 24242135792659305, NULL };
static panda$core$String $s754 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s775 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s778 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s797 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s828 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s878 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s906 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s912 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s914 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s917 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s948 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s971 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s979 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1005 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s1007 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1038 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1045 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s1047 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1088 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1090 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s1120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1148 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s1150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1186 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1219 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1256 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s1258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s1265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1279 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1338 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static panda$core$String $s1342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static panda$core$String $s1346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static panda$core$String $s1350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static panda$core$String $s1357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x29", 2, 14282, NULL };
static panda$core$String $s1395 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s1403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s1424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s1469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s1471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s1494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s1508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s1518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s1526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s1532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s1541 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1565 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1586 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1589 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static panda$core$String $s1616 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1630 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1637 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static panda$core$String $s1640 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1664 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s1666 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s1668 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1670 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s1695 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s1698 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1732 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1735 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1769 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1797 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1801 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s1803 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1834 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

org$pandalanguage$pandac$Position org$pandalanguage$pandac$ASTNode$position$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$85_95 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp6;
    org$pandalanguage$pandac$Position position8;
    org$pandalanguage$pandac$Position $returnValue10;
    org$pandalanguage$pandac$Position position14;
    org$pandalanguage$pandac$Position position19;
    org$pandalanguage$pandac$Position position24;
    org$pandalanguage$pandac$Position position29;
    org$pandalanguage$pandac$Position position34;
    org$pandalanguage$pandac$Position position39;
    org$pandalanguage$pandac$Position position44;
    org$pandalanguage$pandac$Position position49;
    org$pandalanguage$pandac$Position position54;
    org$pandalanguage$pandac$Position position59;
    org$pandalanguage$pandac$Position position64;
    org$pandalanguage$pandac$Position position69;
    org$pandalanguage$pandac$Position position74;
    org$pandalanguage$pandac$Position position79;
    org$pandalanguage$pandac$Position position84;
    org$pandalanguage$pandac$Position position89;
    org$pandalanguage$pandac$Position $tmp94;
    org$pandalanguage$pandac$Position position98;
    org$pandalanguage$pandac$Position position103;
    org$pandalanguage$pandac$Position position108;
    org$pandalanguage$pandac$Position position113;
    org$pandalanguage$pandac$Position position118;
    org$pandalanguage$pandac$IRNode* ir123 = NULL;
    org$pandalanguage$pandac$Position position130;
    org$pandalanguage$pandac$Position position135;
    org$pandalanguage$pandac$Position position140;
    org$pandalanguage$pandac$Position position145;
    org$pandalanguage$pandac$Position position150;
    org$pandalanguage$pandac$Position position155;
    org$pandalanguage$pandac$Position position160;
    org$pandalanguage$pandac$Position position165;
    org$pandalanguage$pandac$Position position170;
    org$pandalanguage$pandac$Position position175;
    org$pandalanguage$pandac$Position position180;
    org$pandalanguage$pandac$Position position185;
    org$pandalanguage$pandac$Position position190;
    org$pandalanguage$pandac$Position position195;
    org$pandalanguage$pandac$Position position200;
    org$pandalanguage$pandac$Position position205;
    org$pandalanguage$pandac$Position position210;
    org$pandalanguage$pandac$Position position215;
    org$pandalanguage$pandac$Position position220;
    org$pandalanguage$pandac$Position position225;
    org$pandalanguage$pandac$Position position230;
    org$pandalanguage$pandac$Position position235;
    org$pandalanguage$pandac$Position position240;
    org$pandalanguage$pandac$Position position245;
    org$pandalanguage$pandac$Position position250;
    org$pandalanguage$pandac$Position position255;
    int $tmp4;
    {
        $tmp6 = self;
        $match$85_95 = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Bit $tmp7 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp7.value) {
        {
            org$pandalanguage$pandac$Position* $tmp9 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position8 = *$tmp9;
            $returnValue10 = position8;
            $tmp4 = 0;
            goto $l2;
            $l11:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp13 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp13.value) {
        {
            org$pandalanguage$pandac$Position* $tmp15 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position14 = *$tmp15;
            $returnValue10 = position14;
            $tmp4 = 1;
            goto $l2;
            $l16:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp18 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp18.value) {
        {
            org$pandalanguage$pandac$Position* $tmp20 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position19 = *$tmp20;
            $returnValue10 = position19;
            $tmp4 = 2;
            goto $l2;
            $l21:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp23 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp23.value) {
        {
            org$pandalanguage$pandac$Position* $tmp25 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position24 = *$tmp25;
            $returnValue10 = position24;
            $tmp4 = 3;
            goto $l2;
            $l26:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp28 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp28.value) {
        {
            org$pandalanguage$pandac$Position* $tmp30 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position29 = *$tmp30;
            $returnValue10 = position29;
            $tmp4 = 4;
            goto $l2;
            $l31:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp33 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp33.value) {
        {
            org$pandalanguage$pandac$Position* $tmp35 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position34 = *$tmp35;
            $returnValue10 = position34;
            $tmp4 = 5;
            goto $l2;
            $l36:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp38 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp38.value) {
        {
            org$pandalanguage$pandac$Position* $tmp40 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position39 = *$tmp40;
            $returnValue10 = position39;
            $tmp4 = 6;
            goto $l2;
            $l41:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp43 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp43.value) {
        {
            org$pandalanguage$pandac$Position* $tmp45 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position44 = *$tmp45;
            $returnValue10 = position44;
            $tmp4 = 7;
            goto $l2;
            $l46:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp48 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp48.value) {
        {
            org$pandalanguage$pandac$Position* $tmp50 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position49 = *$tmp50;
            $returnValue10 = position49;
            $tmp4 = 8;
            goto $l2;
            $l51:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp53 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp53.value) {
        {
            org$pandalanguage$pandac$Position* $tmp55 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position54 = *$tmp55;
            $returnValue10 = position54;
            $tmp4 = 9;
            goto $l2;
            $l56:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp58 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp58.value) {
        {
            org$pandalanguage$pandac$Position* $tmp60 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position59 = *$tmp60;
            $returnValue10 = position59;
            $tmp4 = 10;
            goto $l2;
            $l61:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp63 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp63.value) {
        {
            org$pandalanguage$pandac$Position* $tmp65 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position64 = *$tmp65;
            $returnValue10 = position64;
            $tmp4 = 11;
            goto $l2;
            $l66:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp68 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp68.value) {
        {
            org$pandalanguage$pandac$Position* $tmp70 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position69 = *$tmp70;
            $returnValue10 = position69;
            $tmp4 = 12;
            goto $l2;
            $l71:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp73 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp73.value) {
        {
            org$pandalanguage$pandac$Position* $tmp75 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position74 = *$tmp75;
            $returnValue10 = position74;
            $tmp4 = 13;
            goto $l2;
            $l76:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp78 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp78.value) {
        {
            org$pandalanguage$pandac$Position* $tmp80 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position79 = *$tmp80;
            $returnValue10 = position79;
            $tmp4 = 14;
            goto $l2;
            $l81:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp83 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp83.value) {
        {
            org$pandalanguage$pandac$Position* $tmp85 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position84 = *$tmp85;
            $returnValue10 = position84;
            $tmp4 = 15;
            goto $l2;
            $l86:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp88 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp88.value) {
        {
            org$pandalanguage$pandac$Position* $tmp90 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position89 = *$tmp90;
            $returnValue10 = position89;
            $tmp4 = 16;
            goto $l2;
            $l91:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp93 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp93.value) {
        {
            org$pandalanguage$pandac$Position$init(&$tmp94);
            $returnValue10 = $tmp94;
            $tmp4 = 17;
            goto $l2;
            $l95:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp97 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp97.value) {
        {
            org$pandalanguage$pandac$Position* $tmp99 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position98 = *$tmp99;
            $returnValue10 = position98;
            $tmp4 = 18;
            goto $l2;
            $l100:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp102.value) {
        {
            org$pandalanguage$pandac$Position* $tmp104 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position103 = *$tmp104;
            $returnValue10 = position103;
            $tmp4 = 19;
            goto $l2;
            $l105:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp107.value) {
        {
            org$pandalanguage$pandac$Position* $tmp109 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position108 = *$tmp109;
            $returnValue10 = position108;
            $tmp4 = 20;
            goto $l2;
            $l110:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp112.value) {
        {
            org$pandalanguage$pandac$Position* $tmp114 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position113 = *$tmp114;
            $returnValue10 = position113;
            $tmp4 = 21;
            goto $l2;
            $l115:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp117.value) {
        {
            org$pandalanguage$pandac$Position* $tmp119 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position118 = *$tmp119;
            $returnValue10 = position118;
            $tmp4 = 22;
            goto $l2;
            $l120:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp122.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp124 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$85_95->$data + 0));
            ir123 = *$tmp124;
            org$pandalanguage$pandac$Position $tmp126 = (($fn125) ir123->$class->vtable[3])(ir123);
            $returnValue10 = $tmp126;
            $tmp4 = 23;
            goto $l2;
            $l127:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp129.value) {
        {
            org$pandalanguage$pandac$Position* $tmp131 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position130 = *$tmp131;
            $returnValue10 = position130;
            $tmp4 = 24;
            goto $l2;
            $l132:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp134.value) {
        {
            org$pandalanguage$pandac$Position* $tmp136 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position135 = *$tmp136;
            $returnValue10 = position135;
            $tmp4 = 25;
            goto $l2;
            $l137:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp139.value) {
        {
            org$pandalanguage$pandac$Position* $tmp141 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position140 = *$tmp141;
            $returnValue10 = position140;
            $tmp4 = 26;
            goto $l2;
            $l142:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp144.value) {
        {
            org$pandalanguage$pandac$Position* $tmp146 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position145 = *$tmp146;
            $returnValue10 = position145;
            $tmp4 = 27;
            goto $l2;
            $l147:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp149.value) {
        {
            org$pandalanguage$pandac$Position* $tmp151 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position150 = *$tmp151;
            $returnValue10 = position150;
            $tmp4 = 28;
            goto $l2;
            $l152:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp154.value) {
        {
            org$pandalanguage$pandac$Position* $tmp156 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position155 = *$tmp156;
            $returnValue10 = position155;
            $tmp4 = 29;
            goto $l2;
            $l157:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp159.value) {
        {
            org$pandalanguage$pandac$Position* $tmp161 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position160 = *$tmp161;
            $returnValue10 = position160;
            $tmp4 = 30;
            goto $l2;
            $l162:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp164.value) {
        {
            org$pandalanguage$pandac$Position* $tmp166 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position165 = *$tmp166;
            $returnValue10 = position165;
            $tmp4 = 31;
            goto $l2;
            $l167:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp169.value) {
        {
            org$pandalanguage$pandac$Position* $tmp171 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position170 = *$tmp171;
            $returnValue10 = position170;
            $tmp4 = 32;
            goto $l2;
            $l172:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp174.value) {
        {
            org$pandalanguage$pandac$Position* $tmp176 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position175 = *$tmp176;
            $returnValue10 = position175;
            $tmp4 = 33;
            goto $l2;
            $l177:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp179.value) {
        {
            org$pandalanguage$pandac$Position* $tmp181 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position180 = *$tmp181;
            $returnValue10 = position180;
            $tmp4 = 34;
            goto $l2;
            $l182:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp184.value) {
        {
            org$pandalanguage$pandac$Position* $tmp186 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position185 = *$tmp186;
            $returnValue10 = position185;
            $tmp4 = 35;
            goto $l2;
            $l187:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp189.value) {
        {
            org$pandalanguage$pandac$Position* $tmp191 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position190 = *$tmp191;
            $returnValue10 = position190;
            $tmp4 = 36;
            goto $l2;
            $l192:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp194.value) {
        {
            org$pandalanguage$pandac$Position* $tmp196 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position195 = *$tmp196;
            $returnValue10 = position195;
            $tmp4 = 37;
            goto $l2;
            $l197:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp199.value) {
        {
            org$pandalanguage$pandac$Position* $tmp201 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position200 = *$tmp201;
            $returnValue10 = position200;
            $tmp4 = 38;
            goto $l2;
            $l202:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp204.value) {
        {
            org$pandalanguage$pandac$Position* $tmp206 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position205 = *$tmp206;
            $returnValue10 = position205;
            $tmp4 = 39;
            goto $l2;
            $l207:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp209.value) {
        {
            org$pandalanguage$pandac$Position* $tmp211 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position210 = *$tmp211;
            $returnValue10 = position210;
            $tmp4 = 40;
            goto $l2;
            $l212:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp214.value) {
        {
            org$pandalanguage$pandac$Position* $tmp216 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position215 = *$tmp216;
            $returnValue10 = position215;
            $tmp4 = 41;
            goto $l2;
            $l217:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp219.value) {
        {
            org$pandalanguage$pandac$Position* $tmp221 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position220 = *$tmp221;
            $returnValue10 = position220;
            $tmp4 = 42;
            goto $l2;
            $l222:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp224.value) {
        {
            org$pandalanguage$pandac$Position* $tmp226 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position225 = *$tmp226;
            $returnValue10 = position225;
            $tmp4 = 43;
            goto $l2;
            $l227:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp229.value) {
        {
            org$pandalanguage$pandac$Position* $tmp231 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position230 = *$tmp231;
            $returnValue10 = position230;
            $tmp4 = 44;
            goto $l2;
            $l232:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp234.value) {
        {
            org$pandalanguage$pandac$Position* $tmp236 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position235 = *$tmp236;
            $returnValue10 = position235;
            $tmp4 = 45;
            goto $l2;
            $l237:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp239.value) {
        {
            org$pandalanguage$pandac$Position* $tmp241 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position240 = *$tmp241;
            $returnValue10 = position240;
            $tmp4 = 46;
            goto $l2;
            $l242:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp244.value) {
        {
            org$pandalanguage$pandac$Position* $tmp246 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position245 = *$tmp246;
            $returnValue10 = position245;
            $tmp4 = 47;
            goto $l2;
            $l247:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp249.value) {
        {
            org$pandalanguage$pandac$Position* $tmp251 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position250 = *$tmp251;
            $returnValue10 = position250;
            $tmp4 = 48;
            goto $l2;
            $l252:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$85_95->$rawValue, ((panda$core$Int64) { 49 }));
        if ($tmp254.value) {
        {
            org$pandalanguage$pandac$Position* $tmp256 = ((org$pandalanguage$pandac$Position*) ((char*) $match$85_95->$data + 0));
            position255 = *$tmp256;
            $returnValue10 = position255;
            $tmp4 = 49;
            goto $l2;
            $l257:;
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
        }
        }
        }
        }
        }
        }
        }
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
        case 39: goto $l207;
        case 25: goto $l137;
        case 8: goto $l51;
        case 31: goto $l167;
        case 40: goto $l212;
        case 48: goto $l252;
        case 15: goto $l86;
        case 4: goto $l31;
        case 20: goto $l110;
        case 16: goto $l91;
        case 7: goto $l46;
        case 33: goto $l177;
        case 1: goto $l16;
        case 47: goto $l247;
        case 26: goto $l142;
        case 34: goto $l182;
        case 0: goto $l11;
        case 2: goto $l21;
        case 35: goto $l187;
        case 14: goto $l81;
        case 36: goto $l192;
        case 45: goto $l237;
        case 13: goto $l76;
        case 18: goto $l100;
        case 46: goto $l242;
        case 19: goto $l105;
        case 24: goto $l132;
        case 23: goto $l127;
        case 37: goto $l197;
        case 43: goto $l227;
        case 12: goto $l71;
        case 44: goto $l232;
        case 11: goto $l66;
        case 41: goto $l217;
        case 22: goto $l120;
        case 17: goto $l95;
        case 21: goto $l115;
        case 29: goto $l157;
        case 38: goto $l202;
        case 30: goto $l162;
        case -1: goto $l259;
        case 49: goto $l257;
        case 6: goto $l41;
        case 9: goto $l56;
        case 42: goto $l222;
        case 5: goto $l36;
        case 28: goto $l152;
        case 10: goto $l61;
        case 3: goto $l26;
        case 32: goto $l172;
        case 27: goto $l147;
    }
    $l259:;
}
panda$core$String* org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$192_9263 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp264;
    panda$core$String* name266 = NULL;
    org$pandalanguage$pandac$ASTNode* expr268 = NULL;
    panda$core$String* $returnValue270;
    panda$core$String* $tmp271;
    panda$core$String* $tmp272;
    panda$core$String* $tmp273;
    panda$core$String* $tmp274;
    panda$core$String* $tmp275;
    panda$core$String* $tmp284;
    org$pandalanguage$pandac$ASTNode* test288 = NULL;
    org$pandalanguage$pandac$ASTNode* msg290 = NULL;
    panda$core$String* $tmp292;
    panda$core$String* $tmp293;
    panda$core$String* $tmp294;
    panda$core$String* $tmp301;
    panda$core$String* $tmp302;
    panda$core$String* $tmp303;
    panda$core$String* $tmp304;
    panda$core$String* $tmp305;
    org$pandalanguage$pandac$ASTNode* expr316 = NULL;
    panda$core$String* $tmp318;
    panda$core$String* $tmp319;
    panda$core$String* $tmp320;
    panda$core$String* $tmp328;
    org$pandalanguage$pandac$ASTNode* left333 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op335;
    org$pandalanguage$pandac$ASTNode* right337 = NULL;
    panda$core$String* $tmp339;
    panda$core$String* $tmp340;
    panda$core$String* $tmp341;
    panda$core$String* $tmp342;
    panda$core$String* $tmp343;
    panda$core$String* $tmp344;
    panda$core$String* $tmp345;
    panda$core$Object* $tmp350;
    panda$core$Bit value361;
    panda$core$String* $tmp363;
    panda$core$String* $tmp364;
    panda$collections$ImmutableArray* statements369 = NULL;
    panda$core$MutableString* result374 = NULL;
    panda$core$MutableString* $tmp375;
    panda$core$MutableString* $tmp376;
    panda$collections$Iterator* Iter$213$17382 = NULL;
    panda$collections$Iterator* $tmp383;
    panda$collections$Iterator* $tmp384;
    org$pandalanguage$pandac$ASTNode* s400 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp401;
    panda$core$Object* $tmp402;
    panda$core$String* $tmp407;
    panda$core$Char8 $tmp412;
    panda$core$String* $tmp413;
    panda$core$String* $tmp414;
    panda$core$String* label421 = NULL;
    panda$core$String* $tmp423;
    panda$core$String* $tmp424;
    panda$core$String* $tmp425;
    panda$core$String* $tmp432;
    org$pandalanguage$pandac$ASTNode* target437 = NULL;
    panda$collections$ImmutableArray* args439 = NULL;
    panda$core$String* $tmp441;
    panda$core$String* $tmp442;
    panda$core$String* $tmp443;
    panda$core$String* $tmp444;
    panda$core$String* $tmp445;
    panda$core$String* $tmp450;
    org$pandalanguage$pandac$ASTNode* dc461 = NULL;
    panda$core$String* name463 = NULL;
    panda$collections$ImmutableArray* fields465 = NULL;
    panda$core$MutableString* result470 = NULL;
    panda$core$MutableString* $tmp471;
    panda$core$MutableString* $tmp472;
    panda$core$String* $tmp474;
    panda$core$String* $tmp477;
    panda$core$String* $tmp478;
    panda$core$String* $tmp479;
    panda$core$String* $tmp480;
    panda$core$String* $tmp484;
    panda$core$String* $tmp492;
    panda$core$String* $tmp493;
    org$pandalanguage$pandac$ASTNode* base500 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce502 = NULL;
    panda$core$Int64 index504;
    panda$core$String* $tmp506;
    panda$core$String* $tmp507;
    panda$core$String* $tmp508;
    panda$core$String* $tmp509;
    panda$core$String* $tmp510;
    panda$core$String* $tmp511;
    panda$core$String* $tmp512;
    panda$core$Object* $tmp520;
    org$pandalanguage$pandac$ASTNode* dc528 = NULL;
    panda$collections$ImmutableArray* annotations530 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind532;
    panda$core$String* name534 = NULL;
    panda$collections$ImmutableArray* generics536 = NULL;
    panda$collections$ImmutableArray* supertypes538 = NULL;
    panda$collections$ImmutableArray* members540 = NULL;
    panda$core$MutableString* result545 = NULL;
    panda$core$MutableString* $tmp546;
    panda$core$MutableString* $tmp547;
    panda$core$String* $tmp549;
    panda$collections$Iterator* Iter$239$17555 = NULL;
    panda$collections$Iterator* $tmp556;
    panda$collections$Iterator* $tmp557;
    org$pandalanguage$pandac$ASTNode* a573 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp574;
    panda$core$Object* $tmp575;
    panda$core$String* $tmp580;
    org$pandalanguage$pandac$ClassDecl$Kind $match$242_17585;
    panda$core$String* $tmp592;
    panda$core$String* $tmp593;
    panda$core$String* $tmp595;
    panda$core$String* $tmp603;
    panda$core$String* $tmp604;
    panda$core$String* $tmp606;
    panda$collections$Iterator* Iter$255$17618 = NULL;
    panda$collections$Iterator* $tmp619;
    panda$collections$Iterator* $tmp620;
    org$pandalanguage$pandac$ASTNode* m636 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp637;
    panda$core$Object* $tmp638;
    panda$core$String* $tmp643;
    panda$core$Char8 $tmp648;
    panda$core$String* $tmp649;
    panda$core$String* $tmp650;
    panda$core$String* label657 = NULL;
    panda$core$String* $tmp659;
    panda$core$String* $tmp660;
    panda$core$String* $tmp661;
    panda$core$String* $tmp668;
    org$pandalanguage$pandac$ASTNode* target673 = NULL;
    org$pandalanguage$pandac$ASTNode* value675 = NULL;
    panda$core$String* $tmp677;
    panda$core$String* $tmp678;
    panda$core$String* $tmp679;
    panda$core$String* $tmp680;
    panda$core$String* $tmp681;
    panda$core$String* $tmp691;
    panda$core$String* $tmp692;
    panda$core$String* label698 = NULL;
    panda$collections$ImmutableArray* statements700 = NULL;
    org$pandalanguage$pandac$ASTNode* test702 = NULL;
    panda$core$MutableString* result707 = NULL;
    panda$core$MutableString* $tmp708;
    panda$core$MutableString* $tmp709;
    panda$core$String* $tmp711;
    panda$core$String* $tmp712;
    panda$collections$Iterator* Iter$276$17720 = NULL;
    panda$collections$Iterator* $tmp721;
    panda$collections$Iterator* $tmp722;
    org$pandalanguage$pandac$ASTNode* s738 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp739;
    panda$core$Object* $tmp740;
    panda$core$String* $tmp745;
    panda$core$String* $tmp750;
    panda$core$String* $tmp751;
    panda$core$String* $tmp756;
    panda$core$String* $tmp757;
    org$pandalanguage$pandac$ASTNode* base764 = NULL;
    panda$core$String* field766 = NULL;
    panda$core$String* $tmp768;
    panda$core$String* $tmp769;
    panda$core$String* $tmp770;
    panda$core$String* $tmp771;
    panda$core$String* $tmp772;
    org$pandalanguage$pandac$ASTNode* dc783 = NULL;
    panda$collections$ImmutableArray* annotations785 = NULL;
    org$pandalanguage$pandac$ASTNode* decl787 = NULL;
    panda$core$MutableString* result792 = NULL;
    panda$core$MutableString* $tmp793;
    panda$core$MutableString* $tmp794;
    panda$core$String* $tmp796;
    panda$collections$Iterator* Iter$288$17802 = NULL;
    panda$collections$Iterator* $tmp803;
    panda$collections$Iterator* $tmp804;
    org$pandalanguage$pandac$ASTNode* a820 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp821;
    panda$core$Object* $tmp822;
    panda$core$String* $tmp827;
    panda$core$String* $tmp832;
    panda$core$String* $tmp833;
    panda$collections$ImmutableArray* entries840 = NULL;
    panda$core$MutableString* result845 = NULL;
    panda$core$MutableString* $tmp846;
    panda$core$MutableString* $tmp847;
    panda$collections$Iterator* Iter$295$17852 = NULL;
    panda$collections$Iterator* $tmp853;
    panda$collections$Iterator* $tmp854;
    org$pandalanguage$pandac$ASTNode* e870 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp871;
    panda$core$Object* $tmp872;
    panda$core$String* $tmp877;
    panda$core$String* $tmp882;
    panda$core$String* $tmp883;
    panda$core$String* label890 = NULL;
    org$pandalanguage$pandac$ASTNode* target892 = NULL;
    org$pandalanguage$pandac$ASTNode* list894 = NULL;
    panda$collections$ImmutableArray* statements896 = NULL;
    panda$core$MutableString* result901 = NULL;
    panda$core$MutableString* $tmp902;
    panda$core$MutableString* $tmp903;
    panda$core$String* $tmp905;
    panda$core$String* $tmp908;
    panda$core$String* $tmp909;
    panda$core$String* $tmp910;
    panda$core$String* $tmp911;
    panda$collections$Iterator* Iter$305$17922 = NULL;
    panda$collections$Iterator* $tmp923;
    panda$collections$Iterator* $tmp924;
    org$pandalanguage$pandac$ASTNode* s940 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp941;
    panda$core$Object* $tmp942;
    panda$core$String* $tmp947;
    panda$core$Char8 $tmp952;
    panda$core$String* $tmp953;
    panda$core$String* $tmp954;
    panda$core$String* name961 = NULL;
    panda$collections$ImmutableArray* subtypes963 = NULL;
    panda$core$String* $tmp965;
    panda$core$String* $tmp966;
    panda$core$String* $tmp967;
    panda$core$String* $tmp968;
    panda$core$String* $tmp969;
    panda$core$String* $tmp973;
    panda$core$String* name984 = NULL;
    panda$core$String* $tmp986;
    org$pandalanguage$pandac$ASTNode* test990 = NULL;
    panda$collections$ImmutableArray* ifTrue992 = NULL;
    org$pandalanguage$pandac$ASTNode* ifFalse994 = NULL;
    panda$core$MutableString* result999 = NULL;
    panda$core$MutableString* $tmp1000;
    panda$core$MutableString* $tmp1001;
    panda$core$String* $tmp1003;
    panda$core$String* $tmp1004;
    panda$collections$Iterator* Iter$316$171012 = NULL;
    panda$collections$Iterator* $tmp1013;
    panda$collections$Iterator* $tmp1014;
    org$pandalanguage$pandac$ASTNode* s1030 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1031;
    panda$core$Object* $tmp1032;
    panda$core$String* $tmp1037;
    panda$core$Char8 $tmp1042;
    panda$core$String* $tmp1043;
    panda$core$String* $tmp1044;
    panda$core$String* $tmp1049;
    panda$core$String* $tmp1050;
    panda$core$UInt64 value1057;
    panda$core$String* $tmp1059;
    panda$core$String* $tmp1060;
    org$pandalanguage$pandac$IRNode* ir1065 = NULL;
    panda$core$String* $tmp1067;
    panda$core$String* $tmp1068;
    panda$core$String* label1074 = NULL;
    panda$collections$ImmutableArray* statements1076 = NULL;
    panda$core$MutableString* result1081 = NULL;
    panda$core$MutableString* $tmp1082;
    panda$core$MutableString* $tmp1083;
    panda$core$String* $tmp1085;
    panda$core$String* $tmp1086;
    panda$collections$Iterator* Iter$334$171094 = NULL;
    panda$collections$Iterator* $tmp1095;
    panda$collections$Iterator* $tmp1096;
    org$pandalanguage$pandac$ASTNode* s1112 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1113;
    panda$core$Object* $tmp1114;
    panda$core$String* $tmp1119;
    panda$core$Char8 $tmp1124;
    panda$core$String* $tmp1125;
    panda$core$String* $tmp1126;
    org$pandalanguage$pandac$ASTNode* value1133 = NULL;
    panda$collections$ImmutableArray* whens1135 = NULL;
    panda$collections$ImmutableArray* other1137 = NULL;
    panda$core$MutableString* result1142 = NULL;
    panda$core$MutableString* $tmp1143;
    panda$core$MutableString* $tmp1144;
    panda$core$String* $tmp1146;
    panda$core$String* $tmp1147;
    panda$collections$Iterator* Iter$341$171155 = NULL;
    panda$collections$Iterator* $tmp1156;
    panda$collections$Iterator* $tmp1157;
    org$pandalanguage$pandac$ASTNode* w1173 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1174;
    panda$core$Object* $tmp1175;
    panda$core$String* $tmp1180;
    panda$core$String* $tmp1185;
    panda$core$Char8 $tmp1188;
    panda$core$String* $tmp1189;
    panda$core$String* $tmp1190;
    org$pandalanguage$pandac$ASTNode* dc1197 = NULL;
    panda$collections$ImmutableArray* annotations1199 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind1201;
    panda$core$String* name1203 = NULL;
    panda$collections$ImmutableArray* parameters1205 = NULL;
    org$pandalanguage$pandac$ASTNode* returnType1207 = NULL;
    panda$collections$ImmutableArray* statements1209 = NULL;
    panda$core$MutableString* result1214 = NULL;
    panda$core$MutableString* $tmp1215;
    panda$core$MutableString* $tmp1216;
    panda$core$String* $tmp1218;
    panda$collections$Iterator* Iter$354$171224 = NULL;
    panda$collections$Iterator* $tmp1225;
    panda$collections$Iterator* $tmp1226;
    org$pandalanguage$pandac$ASTNode* a1242 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1243;
    panda$core$Object* $tmp1244;
    panda$core$String* $tmp1249;
    org$pandalanguage$pandac$MethodDecl$Kind $match$357_171254;
    panda$core$String* $tmp1260;
    panda$core$String* $tmp1261;
    panda$core$String* $tmp1262;
    panda$core$String* $tmp1263;
    panda$core$String* $tmp1267;
    panda$core$String* $tmp1275;
    panda$core$String* $tmp1276;
    panda$collections$Iterator* Iter$368$211285 = NULL;
    panda$collections$Iterator* $tmp1286;
    panda$collections$Iterator* $tmp1287;
    org$pandalanguage$pandac$ASTNode* s1303 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1304;
    panda$core$Object* $tmp1305;
    panda$core$String* $tmp1310;
    panda$core$Char8 $tmp1315;
    panda$core$String* $tmp1316;
    panda$core$String* $tmp1317;
    org$pandalanguage$pandac$parser$Token$Kind kind1324;
    panda$collections$ImmutableArray* paramTypes1326 = NULL;
    org$pandalanguage$pandac$ASTNode* returnType1328 = NULL;
    panda$core$String* yield1333 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $match$376_171334;
    panda$core$String* $tmp1336;
    panda$core$String* $tmp1337;
    panda$core$String* $tmp1340;
    panda$core$String* $tmp1341;
    panda$core$String* $tmp1344;
    panda$core$String* $tmp1345;
    panda$core$String* $tmp1348;
    panda$core$String* $tmp1349;
    panda$core$String* partial1351 = NULL;
    panda$core$String* $tmp1352;
    panda$core$String* $tmp1353;
    panda$core$String* $tmp1354;
    panda$core$String* $tmp1355;
    panda$core$String* $tmp1356;
    panda$core$String* $tmp1358;
    panda$core$String* $tmp1369;
    panda$core$String* $tmp1370;
    panda$core$String* $tmp1371;
    panda$core$String* $tmp1372;
    panda$core$String* $tmp1373;
    panda$core$String* $tmp1383;
    panda$core$String* $tmp1384;
    panda$core$String* $tmp1385;
    panda$core$String* $tmp1394;
    org$pandalanguage$pandac$ASTNode* base1399 = NULL;
    panda$core$String* $tmp1401;
    panda$core$String* $tmp1402;
    panda$core$String* name1408 = NULL;
    panda$core$String* $tmp1410;
    panda$core$String* name1414 = NULL;
    org$pandalanguage$pandac$ASTNode* type1416 = NULL;
    panda$core$String* $tmp1418;
    panda$core$String* $tmp1419;
    panda$core$String* $tmp1420;
    panda$core$String* $tmp1421;
    panda$core$String* $tmp1422;
    org$pandalanguage$pandac$parser$Token$Kind kind1432;
    org$pandalanguage$pandac$ASTNode* base1434 = NULL;
    panda$core$String* $tmp1436;
    panda$core$String* $tmp1437;
    panda$core$String* $tmp1438;
    panda$core$String* $tmp1439;
    panda$core$String* $tmp1440;
    panda$core$Object* $tmp1441;
    org$pandalanguage$pandac$ASTNode* start1453 = NULL;
    org$pandalanguage$pandac$ASTNode* end1455 = NULL;
    panda$core$Bit inclusive1457;
    org$pandalanguage$pandac$ASTNode* step1459 = NULL;
    panda$core$MutableString* result1464 = NULL;
    panda$core$MutableString* $tmp1465;
    panda$core$MutableString* $tmp1466;
    panda$core$String* $tmp1470;
    panda$core$String* $tmp1473;
    panda$core$String* $tmp1474;
    panda$core$Real64 value1481;
    panda$core$String* $tmp1483;
    panda$core$String* $tmp1484;
    panda$core$String* src1489 = NULL;
    panda$core$String* $tmp1491;
    panda$core$String* $tmp1492;
    panda$core$String* $tmp1493;
    org$pandalanguage$pandac$ASTNode* value1501 = NULL;
    panda$core$String* $tmp1503;
    panda$core$String* $tmp1504;
    panda$core$String* $tmp1505;
    panda$core$String* $tmp1512;
    panda$core$String* $tmp1517;
    panda$core$String* str1522 = NULL;
    panda$core$String* $tmp1524;
    panda$core$String* $tmp1525;
    panda$core$String* $tmp1531;
    panda$collections$ImmutableArray* arguments1536 = NULL;
    panda$core$String* $tmp1538;
    panda$core$String* $tmp1539;
    panda$core$String* $tmp1540;
    panda$core$String* $tmp1542;
    panda$collections$ImmutableArray* parameters1553 = NULL;
    panda$core$String* $tmp1555;
    panda$core$String* $tmp1556;
    panda$core$String* $tmp1557;
    panda$core$String* $tmp1559;
    panda$core$String* name1570 = NULL;
    panda$core$String* $tmp1572;
    panda$core$String* name1576 = NULL;
    org$pandalanguage$pandac$ASTNode* type1578 = NULL;
    panda$core$String* $tmp1580;
    panda$core$String* $tmp1581;
    panda$core$String* $tmp1582;
    panda$core$String* $tmp1583;
    panda$core$String* $tmp1584;
    panda$core$String* $tmp1593;
    panda$collections$ImmutableArray* parameters1597 = NULL;
    org$pandalanguage$pandac$ASTNode* body1599 = NULL;
    panda$core$String* $tmp1601;
    panda$core$String* $tmp1602;
    panda$core$String* $tmp1603;
    panda$core$String* $tmp1604;
    panda$core$String* $tmp1605;
    panda$core$String* $tmp1607;
    panda$collections$ImmutableArray* parameters1621 = NULL;
    org$pandalanguage$pandac$ASTNode* body1623 = NULL;
    panda$core$String* $tmp1625;
    panda$core$String* $tmp1626;
    panda$core$String* $tmp1627;
    panda$core$String* $tmp1628;
    panda$core$String* $tmp1629;
    panda$core$String* $tmp1631;
    panda$core$String* name1645 = NULL;
    panda$core$String* $tmp1647;
    org$pandalanguage$pandac$Variable$Kind kind1651;
    panda$collections$ImmutableArray* decls1653 = NULL;
    panda$core$MutableString* result1658 = NULL;
    panda$core$MutableString* $tmp1659;
    panda$core$MutableString* $tmp1660;
    org$pandalanguage$pandac$Variable$Kind $match$453_171662;
    panda$core$String* $tmp1671;
    panda$core$String* $tmp1676;
    panda$core$String* $tmp1677;
    panda$collections$ImmutableArray* tests1684 = NULL;
    panda$collections$ImmutableArray* statements1686 = NULL;
    panda$core$MutableString* result1691 = NULL;
    panda$core$MutableString* $tmp1692;
    panda$core$MutableString* $tmp1693;
    panda$core$String* separator1696 = NULL;
    panda$core$String* $tmp1697;
    panda$collections$Iterator* Iter$464$171702 = NULL;
    panda$collections$Iterator* $tmp1703;
    panda$collections$Iterator* $tmp1704;
    org$pandalanguage$pandac$ASTNode* t1720 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1721;
    panda$core$Object* $tmp1722;
    panda$core$String* $tmp1727;
    panda$core$String* $tmp1728;
    panda$core$String* $tmp1729;
    panda$core$String* $tmp1730;
    panda$core$Char8 $tmp1739;
    panda$collections$Iterator* Iter$468$171743 = NULL;
    panda$collections$Iterator* $tmp1744;
    panda$collections$Iterator* $tmp1745;
    org$pandalanguage$pandac$ASTNode* s1761 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1762;
    panda$core$Object* $tmp1763;
    panda$core$String* $tmp1768;
    panda$core$String* $tmp1773;
    panda$core$String* $tmp1774;
    panda$core$String* label1781 = NULL;
    org$pandalanguage$pandac$ASTNode* test1783 = NULL;
    panda$collections$ImmutableArray* statements1785 = NULL;
    panda$core$MutableString* result1790 = NULL;
    panda$core$MutableString* $tmp1791;
    panda$core$MutableString* $tmp1792;
    panda$core$String* $tmp1794;
    panda$core$String* $tmp1795;
    panda$core$String* $tmp1799;
    panda$core$String* $tmp1800;
    panda$collections$Iterator* Iter$478$171808 = NULL;
    panda$collections$Iterator* $tmp1809;
    panda$collections$Iterator* $tmp1810;
    org$pandalanguage$pandac$ASTNode* s1826 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1827;
    panda$core$Object* $tmp1828;
    panda$core$String* $tmp1833;
    panda$core$Char8 $tmp1838;
    panda$core$String* $tmp1839;
    panda$core$String* $tmp1840;
    int $tmp262;
    {
        $tmp264 = self;
        $match$192_9263 = $tmp264;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp264));
        panda$core$Bit $tmp265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp265.value) {
        {
            panda$core$String** $tmp267 = ((panda$core$String**) ((char*) $match$192_9263->$data + 16));
            name266 = *$tmp267;
            org$pandalanguage$pandac$ASTNode** $tmp269 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 24));
            expr268 = *$tmp269;
            if (((panda$core$Bit) { expr268 != NULL }).value) {
            {
                panda$core$String* $tmp276 = panda$core$String$convert$R$panda$core$String(name266);
                $tmp275 = $tmp276;
                panda$core$String* $tmp278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp275, &$s277);
                $tmp274 = $tmp278;
                panda$core$String* $tmp279 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp274, ((panda$core$Object*) expr268));
                $tmp273 = $tmp279;
                panda$core$String* $tmp281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp273, &$s280);
                $tmp272 = $tmp281;
                $tmp271 = $tmp272;
                $returnValue270 = $tmp271;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp271));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp272));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp273));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp274));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp275));
                $tmp262 = 0;
                goto $l260;
                $l282:;
                return $returnValue270;
            }
            }
            $tmp284 = name266;
            $returnValue270 = $tmp284;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp284));
            $tmp262 = 1;
            goto $l260;
            $l285:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp287.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp289 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 16));
            test288 = *$tmp289;
            org$pandalanguage$pandac$ASTNode** $tmp291 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 24));
            msg290 = *$tmp291;
            if (((panda$core$Bit) { msg290 == NULL }).value) {
            {
                panda$core$String* $tmp296 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s295, ((panda$core$Object*) test288));
                $tmp294 = $tmp296;
                panda$core$String* $tmp298 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp294, &$s297);
                $tmp293 = $tmp298;
                $tmp292 = $tmp293;
                $returnValue270 = $tmp292;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp292));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp293));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp294));
                $tmp262 = 2;
                goto $l260;
                $l299:;
                return $returnValue270;
            }
            }
            panda$core$String* $tmp307 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s306, ((panda$core$Object*) test288));
            $tmp305 = $tmp307;
            panda$core$String* $tmp309 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp305, &$s308);
            $tmp304 = $tmp309;
            panda$core$String* $tmp310 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp304, ((panda$core$Object*) msg290));
            $tmp303 = $tmp310;
            panda$core$String* $tmp312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp303, &$s311);
            $tmp302 = $tmp312;
            $tmp301 = $tmp302;
            $returnValue270 = $tmp301;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp301));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp302));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp303));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp304));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp305));
            $tmp262 = 3;
            goto $l260;
            $l313:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp315.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp317 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 16));
            expr316 = *$tmp317;
            panda$core$String* $tmp322 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s321, ((panda$core$Object*) expr316));
            $tmp320 = $tmp322;
            panda$core$String* $tmp324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp320, &$s323);
            $tmp319 = $tmp324;
            $tmp318 = $tmp319;
            $returnValue270 = $tmp318;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp318));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp319));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp320));
            $tmp262 = 4;
            goto $l260;
            $l325:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp327.value) {
        {
            $tmp328 = &$s329;
            $returnValue270 = $tmp328;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp328));
            $tmp262 = 5;
            goto $l260;
            $l330:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp332.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp334 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 16));
            left333 = *$tmp334;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp336 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$192_9263->$data + 24));
            op335 = *$tmp336;
            org$pandalanguage$pandac$ASTNode** $tmp338 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 32));
            right337 = *$tmp338;
            panda$core$String* $tmp347 = (($fn346) left333->$class->vtable[0])(left333);
            $tmp345 = $tmp347;
            panda$core$String* $tmp349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp345, &$s348);
            $tmp344 = $tmp349;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp351;
            $tmp351 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp351->value = op335;
            $tmp350 = ((panda$core$Object*) $tmp351);
            panda$core$String* $tmp352 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp344, $tmp350);
            $tmp343 = $tmp352;
            panda$core$String* $tmp354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp343, &$s353);
            $tmp342 = $tmp354;
            panda$core$String* $tmp355 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp342, ((panda$core$Object*) right337));
            $tmp341 = $tmp355;
            panda$core$String* $tmp357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp341, &$s356);
            $tmp340 = $tmp357;
            $tmp339 = $tmp340;
            $returnValue270 = $tmp339;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp339));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp340));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp341));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp342));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp343));
            panda$core$Panda$unref$panda$core$Object($tmp350);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp344));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp345));
            $tmp262 = 6;
            goto $l260;
            $l358:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp360.value) {
        {
            panda$core$Bit* $tmp362 = ((panda$core$Bit*) ((char*) $match$192_9263->$data + 16));
            value361 = *$tmp362;
            panda$core$String* $tmp365 = panda$core$Bit$convert$R$panda$core$String(value361);
            $tmp364 = $tmp365;
            $tmp363 = $tmp364;
            $returnValue270 = $tmp363;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp363));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp364));
            $tmp262 = 7;
            goto $l260;
            $l366:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp368.value) {
        {
            panda$collections$ImmutableArray** $tmp370 = ((panda$collections$ImmutableArray**) ((char*) $match$192_9263->$data + 16));
            statements369 = *$tmp370;
            int $tmp373;
            {
                panda$core$MutableString* $tmp377 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp377, &$s378);
                $tmp376 = $tmp377;
                $tmp375 = $tmp376;
                result374 = $tmp375;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp375));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp376));
                {
                    int $tmp381;
                    {
                        ITable* $tmp385 = ((panda$collections$Iterable*) statements369)->$class->itable;
                        while ($tmp385->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp385 = $tmp385->next;
                        }
                        $fn387 $tmp386 = $tmp385->methods[0];
                        panda$collections$Iterator* $tmp388 = $tmp386(((panda$collections$Iterable*) statements369));
                        $tmp384 = $tmp388;
                        $tmp383 = $tmp384;
                        Iter$213$17382 = $tmp383;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp383));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp384));
                        $l389:;
                        ITable* $tmp392 = Iter$213$17382->$class->itable;
                        while ($tmp392->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp392 = $tmp392->next;
                        }
                        $fn394 $tmp393 = $tmp392->methods[0];
                        panda$core$Bit $tmp395 = $tmp393(Iter$213$17382);
                        panda$core$Bit $tmp396 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp395);
                        bool $tmp391 = $tmp396.value;
                        if (!$tmp391) goto $l390;
                        {
                            int $tmp399;
                            {
                                ITable* $tmp403 = Iter$213$17382->$class->itable;
                                while ($tmp403->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp403 = $tmp403->next;
                                }
                                $fn405 $tmp404 = $tmp403->methods[1];
                                panda$core$Object* $tmp406 = $tmp404(Iter$213$17382);
                                $tmp402 = $tmp406;
                                $tmp401 = ((org$pandalanguage$pandac$ASTNode*) $tmp402);
                                s400 = $tmp401;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp401));
                                panda$core$Panda$unref$panda$core$Object($tmp402);
                                panda$core$String* $tmp409 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s400), &$s408);
                                $tmp407 = $tmp409;
                                panda$core$MutableString$append$panda$core$String(result374, $tmp407);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp407));
                            }
                            $tmp399 = -1;
                            goto $l397;
                            $l397:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s400));
                            s400 = NULL;
                            switch ($tmp399) {
                                case -1: goto $l410;
                            }
                            $l410:;
                        }
                        goto $l389;
                        $l390:;
                    }
                    $tmp381 = -1;
                    goto $l379;
                    $l379:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$213$17382));
                    Iter$213$17382 = NULL;
                    switch ($tmp381) {
                        case -1: goto $l411;
                    }
                    $l411:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp412, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result374, $tmp412);
                panda$core$String* $tmp415 = panda$core$MutableString$finish$R$panda$core$String(result374);
                $tmp414 = $tmp415;
                $tmp413 = $tmp414;
                $returnValue270 = $tmp413;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp413));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp414));
                $tmp373 = 0;
                goto $l371;
                $l416:;
                $tmp262 = 8;
                goto $l260;
                $l417:;
                return $returnValue270;
            }
            $l371:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result374));
            result374 = NULL;
            switch ($tmp373) {
                case 0: goto $l416;
            }
            $l419:;
        }
        }
        else {
        panda$core$Bit $tmp420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp420.value) {
        {
            panda$core$String** $tmp422 = ((panda$core$String**) ((char*) $match$192_9263->$data + 16));
            label421 = *$tmp422;
            if (((panda$core$Bit) { label421 != NULL }).value) {
            {
                panda$core$String* $tmp427 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s426, label421);
                $tmp425 = $tmp427;
                panda$core$String* $tmp429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp425, &$s428);
                $tmp424 = $tmp429;
                $tmp423 = $tmp424;
                $returnValue270 = $tmp423;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp423));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp424));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp425));
                $tmp262 = 9;
                goto $l260;
                $l430:;
                return $returnValue270;
            }
            }
            $tmp432 = &$s433;
            $returnValue270 = $tmp432;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp432));
            $tmp262 = 10;
            goto $l260;
            $l434:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp436.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp438 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 16));
            target437 = *$tmp438;
            panda$collections$ImmutableArray** $tmp440 = ((panda$collections$ImmutableArray**) ((char*) $match$192_9263->$data + 24));
            args439 = *$tmp440;
            panda$core$String* $tmp447 = (($fn446) target437->$class->vtable[0])(target437);
            $tmp445 = $tmp447;
            panda$core$String* $tmp449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp445, &$s448);
            $tmp444 = $tmp449;
            ITable* $tmp451 = ((panda$collections$ListView*) args439)->$class->itable;
            while ($tmp451->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp451 = $tmp451->next;
            }
            $fn453 $tmp452 = $tmp451->methods[4];
            panda$core$String* $tmp454 = $tmp452(((panda$collections$ListView*) args439));
            $tmp450 = $tmp454;
            panda$core$String* $tmp455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp444, $tmp450);
            $tmp443 = $tmp455;
            panda$core$String* $tmp457 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp443, &$s456);
            $tmp442 = $tmp457;
            $tmp441 = $tmp442;
            $returnValue270 = $tmp441;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp441));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp442));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp443));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp450));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp444));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp445));
            $tmp262 = 11;
            goto $l260;
            $l458:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp460.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp462 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 16));
            dc461 = *$tmp462;
            panda$core$String** $tmp464 = ((panda$core$String**) ((char*) $match$192_9263->$data + 24));
            name463 = *$tmp464;
            panda$collections$ImmutableArray** $tmp466 = ((panda$collections$ImmutableArray**) ((char*) $match$192_9263->$data + 32));
            fields465 = *$tmp466;
            int $tmp469;
            {
                panda$core$MutableString* $tmp473 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp473);
                $tmp472 = $tmp473;
                $tmp471 = $tmp472;
                result470 = $tmp471;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp471));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp472));
                if (((panda$core$Bit) { dc461 != NULL }).value) {
                {
                    panda$core$String* $tmp476 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc461), &$s475);
                    $tmp474 = $tmp476;
                    panda$core$MutableString$append$panda$core$String(result470, $tmp474);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp474));
                }
                }
                panda$core$String* $tmp481 = panda$core$String$convert$R$panda$core$String(name463);
                $tmp480 = $tmp481;
                panda$core$String* $tmp483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp480, &$s482);
                $tmp479 = $tmp483;
                ITable* $tmp485 = ((panda$collections$ListView*) fields465)->$class->itable;
                while ($tmp485->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp485 = $tmp485->next;
                }
                $fn487 $tmp486 = $tmp485->methods[4];
                panda$core$String* $tmp488 = $tmp486(((panda$collections$ListView*) fields465));
                $tmp484 = $tmp488;
                panda$core$String* $tmp489 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp479, $tmp484);
                $tmp478 = $tmp489;
                panda$core$String* $tmp491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp478, &$s490);
                $tmp477 = $tmp491;
                panda$core$MutableString$append$panda$core$String(result470, $tmp477);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp477));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp478));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp484));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp479));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp480));
                panda$core$String* $tmp494 = panda$core$MutableString$finish$R$panda$core$String(result470);
                $tmp493 = $tmp494;
                $tmp492 = $tmp493;
                $returnValue270 = $tmp492;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp492));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp493));
                $tmp469 = 0;
                goto $l467;
                $l495:;
                $tmp262 = 12;
                goto $l260;
                $l496:;
                return $returnValue270;
            }
            $l467:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result470));
            result470 = NULL;
            switch ($tmp469) {
                case 0: goto $l495;
            }
            $l498:;
        }
        }
        else {
        panda$core$Bit $tmp499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp499.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp501 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 16));
            base500 = *$tmp501;
            org$pandalanguage$pandac$ChoiceEntry** $tmp503 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$192_9263->$data + 24));
            ce502 = *$tmp503;
            panda$core$Int64* $tmp505 = ((panda$core$Int64*) ((char*) $match$192_9263->$data + 32));
            index504 = *$tmp505;
            panda$core$String* $tmp514 = (($fn513) base500->$class->vtable[0])(base500);
            $tmp512 = $tmp514;
            panda$core$String* $tmp516 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp512, &$s515);
            $tmp511 = $tmp516;
            panda$core$String* $tmp517 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp511, ((panda$core$Object*) ce502));
            $tmp510 = $tmp517;
            panda$core$String* $tmp519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp510, &$s518);
            $tmp509 = $tmp519;
            panda$core$Int64$wrapper* $tmp521;
            $tmp521 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp521->value = index504;
            $tmp520 = ((panda$core$Object*) $tmp521);
            panda$core$String* $tmp522 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp509, $tmp520);
            $tmp508 = $tmp522;
            panda$core$String* $tmp524 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp508, &$s523);
            $tmp507 = $tmp524;
            $tmp506 = $tmp507;
            $returnValue270 = $tmp506;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp506));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp507));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp508));
            panda$core$Panda$unref$panda$core$Object($tmp520);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp509));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp510));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp511));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp512));
            $tmp262 = 13;
            goto $l260;
            $l525:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp527.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp529 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 16));
            dc528 = *$tmp529;
            panda$collections$ImmutableArray** $tmp531 = ((panda$collections$ImmutableArray**) ((char*) $match$192_9263->$data + 24));
            annotations530 = *$tmp531;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp533 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$192_9263->$data + 32));
            kind532 = *$tmp533;
            panda$core$String** $tmp535 = ((panda$core$String**) ((char*) $match$192_9263->$data + 40));
            name534 = *$tmp535;
            panda$collections$ImmutableArray** $tmp537 = ((panda$collections$ImmutableArray**) ((char*) $match$192_9263->$data + 48));
            generics536 = *$tmp537;
            panda$collections$ImmutableArray** $tmp539 = ((panda$collections$ImmutableArray**) ((char*) $match$192_9263->$data + 56));
            supertypes538 = *$tmp539;
            panda$collections$ImmutableArray** $tmp541 = ((panda$collections$ImmutableArray**) ((char*) $match$192_9263->$data + 64));
            members540 = *$tmp541;
            int $tmp544;
            {
                panda$core$MutableString* $tmp548 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp548);
                $tmp547 = $tmp548;
                $tmp546 = $tmp547;
                result545 = $tmp546;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp546));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp547));
                if (((panda$core$Bit) { dc528 != NULL }).value) {
                {
                    panda$core$String* $tmp551 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc528), &$s550);
                    $tmp549 = $tmp551;
                    panda$core$MutableString$append$panda$core$String(result545, $tmp549);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp549));
                }
                }
                {
                    int $tmp554;
                    {
                        ITable* $tmp558 = ((panda$collections$Iterable*) annotations530)->$class->itable;
                        while ($tmp558->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp558 = $tmp558->next;
                        }
                        $fn560 $tmp559 = $tmp558->methods[0];
                        panda$collections$Iterator* $tmp561 = $tmp559(((panda$collections$Iterable*) annotations530));
                        $tmp557 = $tmp561;
                        $tmp556 = $tmp557;
                        Iter$239$17555 = $tmp556;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp556));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp557));
                        $l562:;
                        ITable* $tmp565 = Iter$239$17555->$class->itable;
                        while ($tmp565->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp565 = $tmp565->next;
                        }
                        $fn567 $tmp566 = $tmp565->methods[0];
                        panda$core$Bit $tmp568 = $tmp566(Iter$239$17555);
                        panda$core$Bit $tmp569 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp568);
                        bool $tmp564 = $tmp569.value;
                        if (!$tmp564) goto $l563;
                        {
                            int $tmp572;
                            {
                                ITable* $tmp576 = Iter$239$17555->$class->itable;
                                while ($tmp576->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp576 = $tmp576->next;
                                }
                                $fn578 $tmp577 = $tmp576->methods[1];
                                panda$core$Object* $tmp579 = $tmp577(Iter$239$17555);
                                $tmp575 = $tmp579;
                                $tmp574 = ((org$pandalanguage$pandac$ASTNode*) $tmp575);
                                a573 = $tmp574;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp574));
                                panda$core$Panda$unref$panda$core$Object($tmp575);
                                panda$core$String* $tmp582 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a573), &$s581);
                                $tmp580 = $tmp582;
                                panda$core$MutableString$append$panda$core$String(result545, $tmp580);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp580));
                            }
                            $tmp572 = -1;
                            goto $l570;
                            $l570:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a573));
                            a573 = NULL;
                            switch ($tmp572) {
                                case -1: goto $l583;
                            }
                            $l583:;
                        }
                        goto $l562;
                        $l563:;
                    }
                    $tmp554 = -1;
                    goto $l552;
                    $l552:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$239$17555));
                    Iter$239$17555 = NULL;
                    switch ($tmp554) {
                        case -1: goto $l584;
                    }
                    $l584:;
                }
                {
                    $match$242_17585 = kind532;
                    panda$core$Bit $tmp586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$242_17585.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp586.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result545, &$s587);
                    }
                    }
                    else {
                    panda$core$Bit $tmp588 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$242_17585.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp588.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result545, &$s589);
                    }
                    }
                    else {
                    panda$core$Bit $tmp590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$242_17585.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp590.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result545, &$s591);
                    }
                    }
                    }
                    }
                }
                panda$core$MutableString$append$panda$core$String(result545, name534);
                if (((panda$core$Bit) { generics536 != NULL }).value) {
                {
                    ITable* $tmp596 = ((panda$collections$ListView*) generics536)->$class->itable;
                    while ($tmp596->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp596 = $tmp596->next;
                    }
                    $fn598 $tmp597 = $tmp596->methods[4];
                    panda$core$String* $tmp599 = $tmp597(((panda$collections$ListView*) generics536));
                    $tmp595 = $tmp599;
                    panda$core$String* $tmp600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s594, $tmp595);
                    $tmp593 = $tmp600;
                    panda$core$String* $tmp602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp593, &$s601);
                    $tmp592 = $tmp602;
                    panda$core$MutableString$append$panda$core$String(result545, $tmp592);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp592));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp593));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp595));
                }
                }
                if (((panda$core$Bit) { supertypes538 != NULL }).value) {
                {
                    ITable* $tmp607 = ((panda$collections$ListView*) supertypes538)->$class->itable;
                    while ($tmp607->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp607 = $tmp607->next;
                    }
                    $fn609 $tmp608 = $tmp607->methods[4];
                    panda$core$String* $tmp610 = $tmp608(((panda$collections$ListView*) supertypes538));
                    $tmp606 = $tmp610;
                    panda$core$String* $tmp611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s605, $tmp606);
                    $tmp604 = $tmp611;
                    panda$core$String* $tmp613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp604, &$s612);
                    $tmp603 = $tmp613;
                    panda$core$MutableString$append$panda$core$String(result545, $tmp603);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp603));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp604));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp606));
                }
                }
                panda$core$MutableString$append$panda$core$String(result545, &$s614);
                {
                    int $tmp617;
                    {
                        ITable* $tmp621 = ((panda$collections$Iterable*) members540)->$class->itable;
                        while ($tmp621->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp621 = $tmp621->next;
                        }
                        $fn623 $tmp622 = $tmp621->methods[0];
                        panda$collections$Iterator* $tmp624 = $tmp622(((panda$collections$Iterable*) members540));
                        $tmp620 = $tmp624;
                        $tmp619 = $tmp620;
                        Iter$255$17618 = $tmp619;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp619));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp620));
                        $l625:;
                        ITable* $tmp628 = Iter$255$17618->$class->itable;
                        while ($tmp628->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp628 = $tmp628->next;
                        }
                        $fn630 $tmp629 = $tmp628->methods[0];
                        panda$core$Bit $tmp631 = $tmp629(Iter$255$17618);
                        panda$core$Bit $tmp632 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp631);
                        bool $tmp627 = $tmp632.value;
                        if (!$tmp627) goto $l626;
                        {
                            int $tmp635;
                            {
                                ITable* $tmp639 = Iter$255$17618->$class->itable;
                                while ($tmp639->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp639 = $tmp639->next;
                                }
                                $fn641 $tmp640 = $tmp639->methods[1];
                                panda$core$Object* $tmp642 = $tmp640(Iter$255$17618);
                                $tmp638 = $tmp642;
                                $tmp637 = ((org$pandalanguage$pandac$ASTNode*) $tmp638);
                                m636 = $tmp637;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp637));
                                panda$core$Panda$unref$panda$core$Object($tmp638);
                                panda$core$String* $tmp645 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) m636), &$s644);
                                $tmp643 = $tmp645;
                                panda$core$MutableString$append$panda$core$String(result545, $tmp643);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp643));
                            }
                            $tmp635 = -1;
                            goto $l633;
                            $l633:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m636));
                            m636 = NULL;
                            switch ($tmp635) {
                                case -1: goto $l646;
                            }
                            $l646:;
                        }
                        goto $l625;
                        $l626:;
                    }
                    $tmp617 = -1;
                    goto $l615;
                    $l615:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$255$17618));
                    Iter$255$17618 = NULL;
                    switch ($tmp617) {
                        case -1: goto $l647;
                    }
                    $l647:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp648, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result545, $tmp648);
                panda$core$String* $tmp651 = panda$core$MutableString$finish$R$panda$core$String(result545);
                $tmp650 = $tmp651;
                $tmp649 = $tmp650;
                $returnValue270 = $tmp649;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp649));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp650));
                $tmp544 = 0;
                goto $l542;
                $l652:;
                $tmp262 = 14;
                goto $l260;
                $l653:;
                return $returnValue270;
            }
            $l542:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result545));
            result545 = NULL;
            switch ($tmp544) {
                case 0: goto $l652;
            }
            $l655:;
        }
        }
        else {
        panda$core$Bit $tmp656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp656.value) {
        {
            panda$core$String** $tmp658 = ((panda$core$String**) ((char*) $match$192_9263->$data + 16));
            label657 = *$tmp658;
            if (((panda$core$Bit) { label657 != NULL }).value) {
            {
                panda$core$String* $tmp663 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s662, label657);
                $tmp661 = $tmp663;
                panda$core$String* $tmp665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp661, &$s664);
                $tmp660 = $tmp665;
                $tmp659 = $tmp660;
                $returnValue270 = $tmp659;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp659));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp660));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp661));
                $tmp262 = 15;
                goto $l260;
                $l666:;
                return $returnValue270;
            }
            }
            $tmp668 = &$s669;
            $returnValue270 = $tmp668;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp668));
            $tmp262 = 16;
            goto $l260;
            $l670:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp672 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp672.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp674 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 16));
            target673 = *$tmp674;
            org$pandalanguage$pandac$ASTNode** $tmp676 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 24));
            value675 = *$tmp676;
            if (((panda$core$Bit) { value675 != NULL }).value) {
            {
                panda$core$String* $tmp683 = (($fn682) target673->$class->vtable[0])(target673);
                $tmp681 = $tmp683;
                panda$core$String* $tmp685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp681, &$s684);
                $tmp680 = $tmp685;
                panda$core$String* $tmp686 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp680, ((panda$core$Object*) value675));
                $tmp679 = $tmp686;
                panda$core$String* $tmp688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp679, &$s687);
                $tmp678 = $tmp688;
                $tmp677 = $tmp678;
                $returnValue270 = $tmp677;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp677));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp678));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp679));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp680));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp681));
                $tmp262 = 17;
                goto $l260;
                $l689:;
                return $returnValue270;
            }
            }
            panda$core$String* $tmp694 = (($fn693) target673->$class->vtable[0])(target673);
            $tmp692 = $tmp694;
            $tmp691 = $tmp692;
            $returnValue270 = $tmp691;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp691));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp692));
            $tmp262 = 18;
            goto $l260;
            $l695:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp697.value) {
        {
            panda$core$String** $tmp699 = ((panda$core$String**) ((char*) $match$192_9263->$data + 16));
            label698 = *$tmp699;
            panda$collections$ImmutableArray** $tmp701 = ((panda$collections$ImmutableArray**) ((char*) $match$192_9263->$data + 24));
            statements700 = *$tmp701;
            org$pandalanguage$pandac$ASTNode** $tmp703 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 32));
            test702 = *$tmp703;
            int $tmp706;
            {
                panda$core$MutableString* $tmp710 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp710);
                $tmp709 = $tmp710;
                $tmp708 = $tmp709;
                result707 = $tmp708;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp708));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp709));
                if (((panda$core$Bit) { label698 != NULL }).value) {
                {
                    panda$core$String* $tmp713 = panda$core$String$convert$R$panda$core$String(label698);
                    $tmp712 = $tmp713;
                    panda$core$String* $tmp715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp712, &$s714);
                    $tmp711 = $tmp715;
                    panda$core$MutableString$append$panda$core$String(result707, $tmp711);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp711));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp712));
                }
                }
                panda$core$MutableString$append$panda$core$String(result707, &$s716);
                {
                    int $tmp719;
                    {
                        ITable* $tmp723 = ((panda$collections$Iterable*) statements700)->$class->itable;
                        while ($tmp723->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp723 = $tmp723->next;
                        }
                        $fn725 $tmp724 = $tmp723->methods[0];
                        panda$collections$Iterator* $tmp726 = $tmp724(((panda$collections$Iterable*) statements700));
                        $tmp722 = $tmp726;
                        $tmp721 = $tmp722;
                        Iter$276$17720 = $tmp721;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp721));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp722));
                        $l727:;
                        ITable* $tmp730 = Iter$276$17720->$class->itable;
                        while ($tmp730->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp730 = $tmp730->next;
                        }
                        $fn732 $tmp731 = $tmp730->methods[0];
                        panda$core$Bit $tmp733 = $tmp731(Iter$276$17720);
                        panda$core$Bit $tmp734 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp733);
                        bool $tmp729 = $tmp734.value;
                        if (!$tmp729) goto $l728;
                        {
                            int $tmp737;
                            {
                                ITable* $tmp741 = Iter$276$17720->$class->itable;
                                while ($tmp741->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp741 = $tmp741->next;
                                }
                                $fn743 $tmp742 = $tmp741->methods[1];
                                panda$core$Object* $tmp744 = $tmp742(Iter$276$17720);
                                $tmp740 = $tmp744;
                                $tmp739 = ((org$pandalanguage$pandac$ASTNode*) $tmp740);
                                s738 = $tmp739;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp739));
                                panda$core$Panda$unref$panda$core$Object($tmp740);
                                panda$core$String* $tmp747 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s738), &$s746);
                                $tmp745 = $tmp747;
                                panda$core$MutableString$append$panda$core$String(result707, $tmp745);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp745));
                            }
                            $tmp737 = -1;
                            goto $l735;
                            $l735:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s738));
                            s738 = NULL;
                            switch ($tmp737) {
                                case -1: goto $l748;
                            }
                            $l748:;
                        }
                        goto $l727;
                        $l728:;
                    }
                    $tmp719 = -1;
                    goto $l717;
                    $l717:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$276$17720));
                    Iter$276$17720 = NULL;
                    switch ($tmp719) {
                        case -1: goto $l749;
                    }
                    $l749:;
                }
                panda$core$String* $tmp753 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s752, ((panda$core$Object*) test702));
                $tmp751 = $tmp753;
                panda$core$String* $tmp755 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp751, &$s754);
                $tmp750 = $tmp755;
                panda$core$MutableString$append$panda$core$String(result707, $tmp750);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp750));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp751));
                panda$core$String* $tmp758 = panda$core$MutableString$finish$R$panda$core$String(result707);
                $tmp757 = $tmp758;
                $tmp756 = $tmp757;
                $returnValue270 = $tmp756;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp756));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp757));
                $tmp706 = 0;
                goto $l704;
                $l759:;
                $tmp262 = 19;
                goto $l260;
                $l760:;
                return $returnValue270;
            }
            $l704:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result707));
            result707 = NULL;
            switch ($tmp706) {
                case 0: goto $l759;
            }
            $l762:;
        }
        }
        else {
        panda$core$Bit $tmp763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp763.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp765 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 16));
            base764 = *$tmp765;
            panda$core$String** $tmp767 = ((panda$core$String**) ((char*) $match$192_9263->$data + 24));
            field766 = *$tmp767;
            panda$core$String* $tmp774 = (($fn773) base764->$class->vtable[0])(base764);
            $tmp772 = $tmp774;
            panda$core$String* $tmp776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp772, &$s775);
            $tmp771 = $tmp776;
            panda$core$String* $tmp777 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp771, field766);
            $tmp770 = $tmp777;
            panda$core$String* $tmp779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp770, &$s778);
            $tmp769 = $tmp779;
            $tmp768 = $tmp769;
            $returnValue270 = $tmp768;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp768));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp769));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp770));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp771));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp772));
            $tmp262 = 20;
            goto $l260;
            $l780:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp782.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp784 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 16));
            dc783 = *$tmp784;
            panda$collections$ImmutableArray** $tmp786 = ((panda$collections$ImmutableArray**) ((char*) $match$192_9263->$data + 24));
            annotations785 = *$tmp786;
            org$pandalanguage$pandac$ASTNode** $tmp788 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 32));
            decl787 = *$tmp788;
            int $tmp791;
            {
                panda$core$MutableString* $tmp795 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp795);
                $tmp794 = $tmp795;
                $tmp793 = $tmp794;
                result792 = $tmp793;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp793));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp794));
                if (((panda$core$Bit) { dc783 != NULL }).value) {
                {
                    panda$core$String* $tmp798 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc783), &$s797);
                    $tmp796 = $tmp798;
                    panda$core$MutableString$append$panda$core$String(result792, $tmp796);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp796));
                }
                }
                {
                    int $tmp801;
                    {
                        ITable* $tmp805 = ((panda$collections$Iterable*) annotations785)->$class->itable;
                        while ($tmp805->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp805 = $tmp805->next;
                        }
                        $fn807 $tmp806 = $tmp805->methods[0];
                        panda$collections$Iterator* $tmp808 = $tmp806(((panda$collections$Iterable*) annotations785));
                        $tmp804 = $tmp808;
                        $tmp803 = $tmp804;
                        Iter$288$17802 = $tmp803;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp803));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp804));
                        $l809:;
                        ITable* $tmp812 = Iter$288$17802->$class->itable;
                        while ($tmp812->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp812 = $tmp812->next;
                        }
                        $fn814 $tmp813 = $tmp812->methods[0];
                        panda$core$Bit $tmp815 = $tmp813(Iter$288$17802);
                        panda$core$Bit $tmp816 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp815);
                        bool $tmp811 = $tmp816.value;
                        if (!$tmp811) goto $l810;
                        {
                            int $tmp819;
                            {
                                ITable* $tmp823 = Iter$288$17802->$class->itable;
                                while ($tmp823->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp823 = $tmp823->next;
                                }
                                $fn825 $tmp824 = $tmp823->methods[1];
                                panda$core$Object* $tmp826 = $tmp824(Iter$288$17802);
                                $tmp822 = $tmp826;
                                $tmp821 = ((org$pandalanguage$pandac$ASTNode*) $tmp822);
                                a820 = $tmp821;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp821));
                                panda$core$Panda$unref$panda$core$Object($tmp822);
                                panda$core$String* $tmp829 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a820), &$s828);
                                $tmp827 = $tmp829;
                                panda$core$MutableString$append$panda$core$String(result792, $tmp827);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp827));
                            }
                            $tmp819 = -1;
                            goto $l817;
                            $l817:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a820));
                            a820 = NULL;
                            switch ($tmp819) {
                                case -1: goto $l830;
                            }
                            $l830:;
                        }
                        goto $l809;
                        $l810:;
                    }
                    $tmp801 = -1;
                    goto $l799;
                    $l799:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$288$17802));
                    Iter$288$17802 = NULL;
                    switch ($tmp801) {
                        case -1: goto $l831;
                    }
                    $l831:;
                }
                panda$core$MutableString$append$panda$core$Object(result792, ((panda$core$Object*) decl787));
                panda$core$String* $tmp834 = panda$core$MutableString$finish$R$panda$core$String(result792);
                $tmp833 = $tmp834;
                $tmp832 = $tmp833;
                $returnValue270 = $tmp832;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp832));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp833));
                $tmp791 = 0;
                goto $l789;
                $l835:;
                $tmp262 = 21;
                goto $l260;
                $l836:;
                return $returnValue270;
            }
            $l789:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result792));
            result792 = NULL;
            switch ($tmp791) {
                case 0: goto $l835;
            }
            $l838:;
        }
        }
        else {
        panda$core$Bit $tmp839 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp839.value) {
        {
            panda$collections$ImmutableArray** $tmp841 = ((panda$collections$ImmutableArray**) ((char*) $match$192_9263->$data + 0));
            entries840 = *$tmp841;
            int $tmp844;
            {
                panda$core$MutableString* $tmp848 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp848);
                $tmp847 = $tmp848;
                $tmp846 = $tmp847;
                result845 = $tmp846;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp846));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp847));
                {
                    int $tmp851;
                    {
                        ITable* $tmp855 = ((panda$collections$Iterable*) entries840)->$class->itable;
                        while ($tmp855->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp855 = $tmp855->next;
                        }
                        $fn857 $tmp856 = $tmp855->methods[0];
                        panda$collections$Iterator* $tmp858 = $tmp856(((panda$collections$Iterable*) entries840));
                        $tmp854 = $tmp858;
                        $tmp853 = $tmp854;
                        Iter$295$17852 = $tmp853;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp853));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp854));
                        $l859:;
                        ITable* $tmp862 = Iter$295$17852->$class->itable;
                        while ($tmp862->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp862 = $tmp862->next;
                        }
                        $fn864 $tmp863 = $tmp862->methods[0];
                        panda$core$Bit $tmp865 = $tmp863(Iter$295$17852);
                        panda$core$Bit $tmp866 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp865);
                        bool $tmp861 = $tmp866.value;
                        if (!$tmp861) goto $l860;
                        {
                            int $tmp869;
                            {
                                ITable* $tmp873 = Iter$295$17852->$class->itable;
                                while ($tmp873->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp873 = $tmp873->next;
                                }
                                $fn875 $tmp874 = $tmp873->methods[1];
                                panda$core$Object* $tmp876 = $tmp874(Iter$295$17852);
                                $tmp872 = $tmp876;
                                $tmp871 = ((org$pandalanguage$pandac$ASTNode*) $tmp872);
                                e870 = $tmp871;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp871));
                                panda$core$Panda$unref$panda$core$Object($tmp872);
                                panda$core$String* $tmp879 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) e870), &$s878);
                                $tmp877 = $tmp879;
                                panda$core$MutableString$append$panda$core$String(result845, $tmp877);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp877));
                            }
                            $tmp869 = -1;
                            goto $l867;
                            $l867:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e870));
                            e870 = NULL;
                            switch ($tmp869) {
                                case -1: goto $l880;
                            }
                            $l880:;
                        }
                        goto $l859;
                        $l860:;
                    }
                    $tmp851 = -1;
                    goto $l849;
                    $l849:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$295$17852));
                    Iter$295$17852 = NULL;
                    switch ($tmp851) {
                        case -1: goto $l881;
                    }
                    $l881:;
                }
                panda$core$String* $tmp884 = panda$core$MutableString$finish$R$panda$core$String(result845);
                $tmp883 = $tmp884;
                $tmp882 = $tmp883;
                $returnValue270 = $tmp882;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp882));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp883));
                $tmp844 = 0;
                goto $l842;
                $l885:;
                $tmp262 = 22;
                goto $l260;
                $l886:;
                return $returnValue270;
            }
            $l842:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result845));
            result845 = NULL;
            switch ($tmp844) {
                case 0: goto $l885;
            }
            $l888:;
        }
        }
        else {
        panda$core$Bit $tmp889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp889.value) {
        {
            panda$core$String** $tmp891 = ((panda$core$String**) ((char*) $match$192_9263->$data + 16));
            label890 = *$tmp891;
            org$pandalanguage$pandac$ASTNode** $tmp893 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 24));
            target892 = *$tmp893;
            org$pandalanguage$pandac$ASTNode** $tmp895 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 32));
            list894 = *$tmp895;
            panda$collections$ImmutableArray** $tmp897 = ((panda$collections$ImmutableArray**) ((char*) $match$192_9263->$data + 40));
            statements896 = *$tmp897;
            int $tmp900;
            {
                panda$core$MutableString* $tmp904 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp904);
                $tmp903 = $tmp904;
                $tmp902 = $tmp903;
                result901 = $tmp902;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp902));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp903));
                if (((panda$core$Bit) { label890 != NULL }).value) {
                {
                    panda$core$String* $tmp907 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(label890, &$s906);
                    $tmp905 = $tmp907;
                    panda$core$MutableString$append$panda$core$String(result901, $tmp905);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp905));
                }
                }
                panda$core$String* $tmp913 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s912, ((panda$core$Object*) target892));
                $tmp911 = $tmp913;
                panda$core$String* $tmp915 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp911, &$s914);
                $tmp910 = $tmp915;
                panda$core$String* $tmp916 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp910, ((panda$core$Object*) list894));
                $tmp909 = $tmp916;
                panda$core$String* $tmp918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp909, &$s917);
                $tmp908 = $tmp918;
                panda$core$MutableString$append$panda$core$String(result901, $tmp908);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp908));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp909));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp910));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp911));
                {
                    int $tmp921;
                    {
                        ITable* $tmp925 = ((panda$collections$Iterable*) statements896)->$class->itable;
                        while ($tmp925->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp925 = $tmp925->next;
                        }
                        $fn927 $tmp926 = $tmp925->methods[0];
                        panda$collections$Iterator* $tmp928 = $tmp926(((panda$collections$Iterable*) statements896));
                        $tmp924 = $tmp928;
                        $tmp923 = $tmp924;
                        Iter$305$17922 = $tmp923;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp923));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp924));
                        $l929:;
                        ITable* $tmp932 = Iter$305$17922->$class->itable;
                        while ($tmp932->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp932 = $tmp932->next;
                        }
                        $fn934 $tmp933 = $tmp932->methods[0];
                        panda$core$Bit $tmp935 = $tmp933(Iter$305$17922);
                        panda$core$Bit $tmp936 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp935);
                        bool $tmp931 = $tmp936.value;
                        if (!$tmp931) goto $l930;
                        {
                            int $tmp939;
                            {
                                ITable* $tmp943 = Iter$305$17922->$class->itable;
                                while ($tmp943->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp943 = $tmp943->next;
                                }
                                $fn945 $tmp944 = $tmp943->methods[1];
                                panda$core$Object* $tmp946 = $tmp944(Iter$305$17922);
                                $tmp942 = $tmp946;
                                $tmp941 = ((org$pandalanguage$pandac$ASTNode*) $tmp942);
                                s940 = $tmp941;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp941));
                                panda$core$Panda$unref$panda$core$Object($tmp942);
                                panda$core$String* $tmp949 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s940), &$s948);
                                $tmp947 = $tmp949;
                                panda$core$MutableString$append$panda$core$String(result901, $tmp947);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp947));
                            }
                            $tmp939 = -1;
                            goto $l937;
                            $l937:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s940));
                            s940 = NULL;
                            switch ($tmp939) {
                                case -1: goto $l950;
                            }
                            $l950:;
                        }
                        goto $l929;
                        $l930:;
                    }
                    $tmp921 = -1;
                    goto $l919;
                    $l919:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$305$17922));
                    Iter$305$17922 = NULL;
                    switch ($tmp921) {
                        case -1: goto $l951;
                    }
                    $l951:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp952, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result901, $tmp952);
                panda$core$String* $tmp955 = panda$core$MutableString$finish$R$panda$core$String(result901);
                $tmp954 = $tmp955;
                $tmp953 = $tmp954;
                $returnValue270 = $tmp953;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp953));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp954));
                $tmp900 = 0;
                goto $l898;
                $l956:;
                $tmp262 = 23;
                goto $l260;
                $l957:;
                return $returnValue270;
            }
            $l898:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result901));
            result901 = NULL;
            switch ($tmp900) {
                case 0: goto $l956;
            }
            $l959:;
        }
        }
        else {
        panda$core$Bit $tmp960 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp960.value) {
        {
            panda$core$String** $tmp962 = ((panda$core$String**) ((char*) $match$192_9263->$data + 16));
            name961 = *$tmp962;
            panda$collections$ImmutableArray** $tmp964 = ((panda$collections$ImmutableArray**) ((char*) $match$192_9263->$data + 24));
            subtypes963 = *$tmp964;
            panda$core$String* $tmp970 = panda$core$String$convert$R$panda$core$String(name961);
            $tmp969 = $tmp970;
            panda$core$String* $tmp972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp969, &$s971);
            $tmp968 = $tmp972;
            ITable* $tmp974 = ((panda$collections$ListView*) subtypes963)->$class->itable;
            while ($tmp974->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp974 = $tmp974->next;
            }
            $fn976 $tmp975 = $tmp974->methods[4];
            panda$core$String* $tmp977 = $tmp975(((panda$collections$ListView*) subtypes963));
            $tmp973 = $tmp977;
            panda$core$String* $tmp978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp968, $tmp973);
            $tmp967 = $tmp978;
            panda$core$String* $tmp980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp967, &$s979);
            $tmp966 = $tmp980;
            $tmp965 = $tmp966;
            $returnValue270 = $tmp965;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp965));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp966));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp967));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp973));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp968));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp969));
            $tmp262 = 24;
            goto $l260;
            $l981:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp983 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp983.value) {
        {
            panda$core$String** $tmp985 = ((panda$core$String**) ((char*) $match$192_9263->$data + 16));
            name984 = *$tmp985;
            $tmp986 = name984;
            $returnValue270 = $tmp986;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp986));
            $tmp262 = 25;
            goto $l260;
            $l987:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp989 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp989.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp991 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 16));
            test990 = *$tmp991;
            panda$collections$ImmutableArray** $tmp993 = ((panda$collections$ImmutableArray**) ((char*) $match$192_9263->$data + 24));
            ifTrue992 = *$tmp993;
            org$pandalanguage$pandac$ASTNode** $tmp995 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 32));
            ifFalse994 = *$tmp995;
            int $tmp998;
            {
                panda$core$MutableString* $tmp1002 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1006 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1005, ((panda$core$Object*) test990));
                $tmp1004 = $tmp1006;
                panda$core$String* $tmp1008 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1004, &$s1007);
                $tmp1003 = $tmp1008;
                panda$core$MutableString$init$panda$core$String($tmp1002, $tmp1003);
                $tmp1001 = $tmp1002;
                $tmp1000 = $tmp1001;
                result999 = $tmp1000;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1000));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1001));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1003));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1004));
                {
                    int $tmp1011;
                    {
                        ITable* $tmp1015 = ((panda$collections$Iterable*) ifTrue992)->$class->itable;
                        while ($tmp1015->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1015 = $tmp1015->next;
                        }
                        $fn1017 $tmp1016 = $tmp1015->methods[0];
                        panda$collections$Iterator* $tmp1018 = $tmp1016(((panda$collections$Iterable*) ifTrue992));
                        $tmp1014 = $tmp1018;
                        $tmp1013 = $tmp1014;
                        Iter$316$171012 = $tmp1013;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1013));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1014));
                        $l1019:;
                        ITable* $tmp1022 = Iter$316$171012->$class->itable;
                        while ($tmp1022->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1022 = $tmp1022->next;
                        }
                        $fn1024 $tmp1023 = $tmp1022->methods[0];
                        panda$core$Bit $tmp1025 = $tmp1023(Iter$316$171012);
                        panda$core$Bit $tmp1026 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1025);
                        bool $tmp1021 = $tmp1026.value;
                        if (!$tmp1021) goto $l1020;
                        {
                            int $tmp1029;
                            {
                                ITable* $tmp1033 = Iter$316$171012->$class->itable;
                                while ($tmp1033->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1033 = $tmp1033->next;
                                }
                                $fn1035 $tmp1034 = $tmp1033->methods[1];
                                panda$core$Object* $tmp1036 = $tmp1034(Iter$316$171012);
                                $tmp1032 = $tmp1036;
                                $tmp1031 = ((org$pandalanguage$pandac$ASTNode*) $tmp1032);
                                s1030 = $tmp1031;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1031));
                                panda$core$Panda$unref$panda$core$Object($tmp1032);
                                panda$core$String* $tmp1039 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1030), &$s1038);
                                $tmp1037 = $tmp1039;
                                panda$core$MutableString$append$panda$core$String(result999, $tmp1037);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1037));
                            }
                            $tmp1029 = -1;
                            goto $l1027;
                            $l1027:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1030));
                            s1030 = NULL;
                            switch ($tmp1029) {
                                case -1: goto $l1040;
                            }
                            $l1040:;
                        }
                        goto $l1019;
                        $l1020:;
                    }
                    $tmp1011 = -1;
                    goto $l1009;
                    $l1009:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$316$171012));
                    Iter$316$171012 = NULL;
                    switch ($tmp1011) {
                        case -1: goto $l1041;
                    }
                    $l1041:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1042, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result999, $tmp1042);
                if (((panda$core$Bit) { ifFalse994 != NULL }).value) {
                {
                    panda$core$String* $tmp1046 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1045, ((panda$core$Object*) ifFalse994));
                    $tmp1044 = $tmp1046;
                    panda$core$String* $tmp1048 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1044, &$s1047);
                    $tmp1043 = $tmp1048;
                    panda$core$MutableString$append$panda$core$String(result999, $tmp1043);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1043));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1044));
                }
                }
                panda$core$String* $tmp1051 = panda$core$MutableString$finish$R$panda$core$String(result999);
                $tmp1050 = $tmp1051;
                $tmp1049 = $tmp1050;
                $returnValue270 = $tmp1049;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1049));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1050));
                $tmp998 = 0;
                goto $l996;
                $l1052:;
                $tmp262 = 26;
                goto $l260;
                $l1053:;
                return $returnValue270;
            }
            $l996:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result999));
            result999 = NULL;
            switch ($tmp998) {
                case 0: goto $l1052;
            }
            $l1055:;
        }
        }
        else {
        panda$core$Bit $tmp1056 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1056.value) {
        {
            panda$core$UInt64* $tmp1058 = ((panda$core$UInt64*) ((char*) $match$192_9263->$data + 16));
            value1057 = *$tmp1058;
            panda$core$String* $tmp1061 = panda$core$UInt64$convert$R$panda$core$String(value1057);
            $tmp1060 = $tmp1061;
            $tmp1059 = $tmp1060;
            $returnValue270 = $tmp1059;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1059));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1060));
            $tmp262 = 27;
            goto $l260;
            $l1062:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1064.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1066 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$192_9263->$data + 0));
            ir1065 = *$tmp1066;
            panda$core$String* $tmp1070 = (($fn1069) ir1065->$class->vtable[0])(ir1065);
            $tmp1068 = $tmp1070;
            $tmp1067 = $tmp1068;
            $returnValue270 = $tmp1067;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1067));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1068));
            $tmp262 = 28;
            goto $l260;
            $l1071:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1073 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1073.value) {
        {
            panda$core$String** $tmp1075 = ((panda$core$String**) ((char*) $match$192_9263->$data + 16));
            label1074 = *$tmp1075;
            panda$collections$ImmutableArray** $tmp1077 = ((panda$collections$ImmutableArray**) ((char*) $match$192_9263->$data + 24));
            statements1076 = *$tmp1077;
            int $tmp1080;
            {
                panda$core$MutableString* $tmp1084 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1084);
                $tmp1083 = $tmp1084;
                $tmp1082 = $tmp1083;
                result1081 = $tmp1082;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1082));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1083));
                if (((panda$core$Bit) { label1074 != NULL }).value) {
                {
                    panda$core$String* $tmp1087 = panda$core$String$convert$R$panda$core$String(label1074);
                    $tmp1086 = $tmp1087;
                    panda$core$String* $tmp1089 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1086, &$s1088);
                    $tmp1085 = $tmp1089;
                    panda$core$MutableString$append$panda$core$String(result1081, $tmp1085);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1085));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1086));
                }
                }
                panda$core$MutableString$append$panda$core$String(result1081, &$s1090);
                {
                    int $tmp1093;
                    {
                        ITable* $tmp1097 = ((panda$collections$Iterable*) statements1076)->$class->itable;
                        while ($tmp1097->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1097 = $tmp1097->next;
                        }
                        $fn1099 $tmp1098 = $tmp1097->methods[0];
                        panda$collections$Iterator* $tmp1100 = $tmp1098(((panda$collections$Iterable*) statements1076));
                        $tmp1096 = $tmp1100;
                        $tmp1095 = $tmp1096;
                        Iter$334$171094 = $tmp1095;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1095));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1096));
                        $l1101:;
                        ITable* $tmp1104 = Iter$334$171094->$class->itable;
                        while ($tmp1104->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1104 = $tmp1104->next;
                        }
                        $fn1106 $tmp1105 = $tmp1104->methods[0];
                        panda$core$Bit $tmp1107 = $tmp1105(Iter$334$171094);
                        panda$core$Bit $tmp1108 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1107);
                        bool $tmp1103 = $tmp1108.value;
                        if (!$tmp1103) goto $l1102;
                        {
                            int $tmp1111;
                            {
                                ITable* $tmp1115 = Iter$334$171094->$class->itable;
                                while ($tmp1115->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1115 = $tmp1115->next;
                                }
                                $fn1117 $tmp1116 = $tmp1115->methods[1];
                                panda$core$Object* $tmp1118 = $tmp1116(Iter$334$171094);
                                $tmp1114 = $tmp1118;
                                $tmp1113 = ((org$pandalanguage$pandac$ASTNode*) $tmp1114);
                                s1112 = $tmp1113;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1113));
                                panda$core$Panda$unref$panda$core$Object($tmp1114);
                                panda$core$String* $tmp1121 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1112), &$s1120);
                                $tmp1119 = $tmp1121;
                                panda$core$MutableString$append$panda$core$String(result1081, $tmp1119);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1119));
                            }
                            $tmp1111 = -1;
                            goto $l1109;
                            $l1109:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1112));
                            s1112 = NULL;
                            switch ($tmp1111) {
                                case -1: goto $l1122;
                            }
                            $l1122:;
                        }
                        goto $l1101;
                        $l1102:;
                    }
                    $tmp1093 = -1;
                    goto $l1091;
                    $l1091:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$334$171094));
                    Iter$334$171094 = NULL;
                    switch ($tmp1093) {
                        case -1: goto $l1123;
                    }
                    $l1123:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1124, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1081, $tmp1124);
                panda$core$String* $tmp1127 = panda$core$MutableString$finish$R$panda$core$String(result1081);
                $tmp1126 = $tmp1127;
                $tmp1125 = $tmp1126;
                $returnValue270 = $tmp1125;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1125));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1126));
                $tmp1080 = 0;
                goto $l1078;
                $l1128:;
                $tmp262 = 29;
                goto $l260;
                $l1129:;
                return $returnValue270;
            }
            $l1078:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1081));
            result1081 = NULL;
            switch ($tmp1080) {
                case 0: goto $l1128;
            }
            $l1131:;
        }
        }
        else {
        panda$core$Bit $tmp1132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1132.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1134 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 16));
            value1133 = *$tmp1134;
            panda$collections$ImmutableArray** $tmp1136 = ((panda$collections$ImmutableArray**) ((char*) $match$192_9263->$data + 24));
            whens1135 = *$tmp1136;
            panda$collections$ImmutableArray** $tmp1138 = ((panda$collections$ImmutableArray**) ((char*) $match$192_9263->$data + 32));
            other1137 = *$tmp1138;
            int $tmp1141;
            {
                panda$core$MutableString* $tmp1145 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1149 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1148, ((panda$core$Object*) value1133));
                $tmp1147 = $tmp1149;
                panda$core$String* $tmp1151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1147, &$s1150);
                $tmp1146 = $tmp1151;
                panda$core$MutableString$init$panda$core$String($tmp1145, $tmp1146);
                $tmp1144 = $tmp1145;
                $tmp1143 = $tmp1144;
                result1142 = $tmp1143;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1143));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1144));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1146));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1147));
                {
                    int $tmp1154;
                    {
                        ITable* $tmp1158 = ((panda$collections$Iterable*) whens1135)->$class->itable;
                        while ($tmp1158->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1158 = $tmp1158->next;
                        }
                        $fn1160 $tmp1159 = $tmp1158->methods[0];
                        panda$collections$Iterator* $tmp1161 = $tmp1159(((panda$collections$Iterable*) whens1135));
                        $tmp1157 = $tmp1161;
                        $tmp1156 = $tmp1157;
                        Iter$341$171155 = $tmp1156;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1156));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1157));
                        $l1162:;
                        ITable* $tmp1165 = Iter$341$171155->$class->itable;
                        while ($tmp1165->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1165 = $tmp1165->next;
                        }
                        $fn1167 $tmp1166 = $tmp1165->methods[0];
                        panda$core$Bit $tmp1168 = $tmp1166(Iter$341$171155);
                        panda$core$Bit $tmp1169 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1168);
                        bool $tmp1164 = $tmp1169.value;
                        if (!$tmp1164) goto $l1163;
                        {
                            int $tmp1172;
                            {
                                ITable* $tmp1176 = Iter$341$171155->$class->itable;
                                while ($tmp1176->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1176 = $tmp1176->next;
                                }
                                $fn1178 $tmp1177 = $tmp1176->methods[1];
                                panda$core$Object* $tmp1179 = $tmp1177(Iter$341$171155);
                                $tmp1175 = $tmp1179;
                                $tmp1174 = ((org$pandalanguage$pandac$ASTNode*) $tmp1175);
                                w1173 = $tmp1174;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1174));
                                panda$core$Panda$unref$panda$core$Object($tmp1175);
                                panda$core$String* $tmp1182 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w1173), &$s1181);
                                $tmp1180 = $tmp1182;
                                panda$core$MutableString$append$panda$core$String(result1142, $tmp1180);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1180));
                            }
                            $tmp1172 = -1;
                            goto $l1170;
                            $l1170:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w1173));
                            w1173 = NULL;
                            switch ($tmp1172) {
                                case -1: goto $l1183;
                            }
                            $l1183:;
                        }
                        goto $l1162;
                        $l1163:;
                    }
                    $tmp1154 = -1;
                    goto $l1152;
                    $l1152:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$341$171155));
                    Iter$341$171155 = NULL;
                    switch ($tmp1154) {
                        case -1: goto $l1184;
                    }
                    $l1184:;
                }
                if (((panda$core$Bit) { other1137 != NULL }).value) {
                {
                    panda$core$String* $tmp1187 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) other1137), &$s1186);
                    $tmp1185 = $tmp1187;
                    panda$core$MutableString$append$panda$core$String(result1142, $tmp1185);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1185));
                }
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1188, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1142, $tmp1188);
                panda$core$String* $tmp1191 = panda$core$MutableString$finish$R$panda$core$String(result1142);
                $tmp1190 = $tmp1191;
                $tmp1189 = $tmp1190;
                $returnValue270 = $tmp1189;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1189));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1190));
                $tmp1141 = 0;
                goto $l1139;
                $l1192:;
                $tmp262 = 30;
                goto $l260;
                $l1193:;
                return $returnValue270;
            }
            $l1139:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1142));
            result1142 = NULL;
            switch ($tmp1141) {
                case 0: goto $l1192;
            }
            $l1195:;
        }
        }
        else {
        panda$core$Bit $tmp1196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1196.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1198 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 16));
            dc1197 = *$tmp1198;
            panda$collections$ImmutableArray** $tmp1200 = ((panda$collections$ImmutableArray**) ((char*) $match$192_9263->$data + 24));
            annotations1199 = *$tmp1200;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1202 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$192_9263->$data + 32));
            kind1201 = *$tmp1202;
            panda$core$String** $tmp1204 = ((panda$core$String**) ((char*) $match$192_9263->$data + 40));
            name1203 = *$tmp1204;
            panda$collections$ImmutableArray** $tmp1206 = ((panda$collections$ImmutableArray**) ((char*) $match$192_9263->$data + 48));
            parameters1205 = *$tmp1206;
            org$pandalanguage$pandac$ASTNode** $tmp1208 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 56));
            returnType1207 = *$tmp1208;
            panda$collections$ImmutableArray** $tmp1210 = ((panda$collections$ImmutableArray**) ((char*) $match$192_9263->$data + 64));
            statements1209 = *$tmp1210;
            int $tmp1213;
            {
                panda$core$MutableString* $tmp1217 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1217);
                $tmp1216 = $tmp1217;
                $tmp1215 = $tmp1216;
                result1214 = $tmp1215;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1215));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1216));
                if (((panda$core$Bit) { dc1197 != NULL }).value) {
                {
                    panda$core$String* $tmp1220 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc1197), &$s1219);
                    $tmp1218 = $tmp1220;
                    panda$core$MutableString$append$panda$core$String(result1214, $tmp1218);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1218));
                }
                }
                {
                    int $tmp1223;
                    {
                        ITable* $tmp1227 = ((panda$collections$Iterable*) annotations1199)->$class->itable;
                        while ($tmp1227->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1227 = $tmp1227->next;
                        }
                        $fn1229 $tmp1228 = $tmp1227->methods[0];
                        panda$collections$Iterator* $tmp1230 = $tmp1228(((panda$collections$Iterable*) annotations1199));
                        $tmp1226 = $tmp1230;
                        $tmp1225 = $tmp1226;
                        Iter$354$171224 = $tmp1225;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1225));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1226));
                        $l1231:;
                        ITable* $tmp1234 = Iter$354$171224->$class->itable;
                        while ($tmp1234->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1234 = $tmp1234->next;
                        }
                        $fn1236 $tmp1235 = $tmp1234->methods[0];
                        panda$core$Bit $tmp1237 = $tmp1235(Iter$354$171224);
                        panda$core$Bit $tmp1238 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1237);
                        bool $tmp1233 = $tmp1238.value;
                        if (!$tmp1233) goto $l1232;
                        {
                            int $tmp1241;
                            {
                                ITable* $tmp1245 = Iter$354$171224->$class->itable;
                                while ($tmp1245->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1245 = $tmp1245->next;
                                }
                                $fn1247 $tmp1246 = $tmp1245->methods[1];
                                panda$core$Object* $tmp1248 = $tmp1246(Iter$354$171224);
                                $tmp1244 = $tmp1248;
                                $tmp1243 = ((org$pandalanguage$pandac$ASTNode*) $tmp1244);
                                a1242 = $tmp1243;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1243));
                                panda$core$Panda$unref$panda$core$Object($tmp1244);
                                panda$core$String* $tmp1251 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a1242), &$s1250);
                                $tmp1249 = $tmp1251;
                                panda$core$MutableString$append$panda$core$String(result1214, $tmp1249);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1249));
                            }
                            $tmp1241 = -1;
                            goto $l1239;
                            $l1239:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1242));
                            a1242 = NULL;
                            switch ($tmp1241) {
                                case -1: goto $l1252;
                            }
                            $l1252:;
                        }
                        goto $l1231;
                        $l1232:;
                    }
                    $tmp1223 = -1;
                    goto $l1221;
                    $l1221:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$354$171224));
                    Iter$354$171224 = NULL;
                    switch ($tmp1223) {
                        case -1: goto $l1253;
                    }
                    $l1253:;
                }
                {
                    $match$357_171254 = kind1201;
                    panda$core$Bit $tmp1255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$357_171254.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp1255.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1214, &$s1256);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$357_171254.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp1257.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1214, &$s1258);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$357_171254.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp1259.value) {
                    {
                    }
                    }
                    }
                    }
                }
                panda$core$String* $tmp1264 = panda$core$String$convert$R$panda$core$String(name1203);
                $tmp1263 = $tmp1264;
                panda$core$String* $tmp1266 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1263, &$s1265);
                $tmp1262 = $tmp1266;
                ITable* $tmp1268 = ((panda$collections$ListView*) parameters1205)->$class->itable;
                while ($tmp1268->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1268 = $tmp1268->next;
                }
                $fn1270 $tmp1269 = $tmp1268->methods[4];
                panda$core$String* $tmp1271 = $tmp1269(((panda$collections$ListView*) parameters1205));
                $tmp1267 = $tmp1271;
                panda$core$String* $tmp1272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1262, $tmp1267);
                $tmp1261 = $tmp1272;
                panda$core$String* $tmp1274 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1261, &$s1273);
                $tmp1260 = $tmp1274;
                panda$core$MutableString$append$panda$core$String(result1214, $tmp1260);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1260));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1261));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1267));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1262));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1263));
                if (((panda$core$Bit) { returnType1207 != NULL }).value) {
                {
                    panda$core$String* $tmp1278 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1277, ((panda$core$Object*) returnType1207));
                    $tmp1276 = $tmp1278;
                    panda$core$String* $tmp1280 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1276, &$s1279);
                    $tmp1275 = $tmp1280;
                    panda$core$MutableString$append$panda$core$String(result1214, $tmp1275);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1275));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1276));
                }
                }
                if (((panda$core$Bit) { statements1209 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1214, &$s1281);
                    {
                        int $tmp1284;
                        {
                            ITable* $tmp1288 = ((panda$collections$Iterable*) statements1209)->$class->itable;
                            while ($tmp1288->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp1288 = $tmp1288->next;
                            }
                            $fn1290 $tmp1289 = $tmp1288->methods[0];
                            panda$collections$Iterator* $tmp1291 = $tmp1289(((panda$collections$Iterable*) statements1209));
                            $tmp1287 = $tmp1291;
                            $tmp1286 = $tmp1287;
                            Iter$368$211285 = $tmp1286;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1286));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1287));
                            $l1292:;
                            ITable* $tmp1295 = Iter$368$211285->$class->itable;
                            while ($tmp1295->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1295 = $tmp1295->next;
                            }
                            $fn1297 $tmp1296 = $tmp1295->methods[0];
                            panda$core$Bit $tmp1298 = $tmp1296(Iter$368$211285);
                            panda$core$Bit $tmp1299 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1298);
                            bool $tmp1294 = $tmp1299.value;
                            if (!$tmp1294) goto $l1293;
                            {
                                int $tmp1302;
                                {
                                    ITable* $tmp1306 = Iter$368$211285->$class->itable;
                                    while ($tmp1306->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp1306 = $tmp1306->next;
                                    }
                                    $fn1308 $tmp1307 = $tmp1306->methods[1];
                                    panda$core$Object* $tmp1309 = $tmp1307(Iter$368$211285);
                                    $tmp1305 = $tmp1309;
                                    $tmp1304 = ((org$pandalanguage$pandac$ASTNode*) $tmp1305);
                                    s1303 = $tmp1304;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1304));
                                    panda$core$Panda$unref$panda$core$Object($tmp1305);
                                    panda$core$String* $tmp1312 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1303), &$s1311);
                                    $tmp1310 = $tmp1312;
                                    panda$core$MutableString$append$panda$core$String(result1214, $tmp1310);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1310));
                                }
                                $tmp1302 = -1;
                                goto $l1300;
                                $l1300:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1303));
                                s1303 = NULL;
                                switch ($tmp1302) {
                                    case -1: goto $l1313;
                                }
                                $l1313:;
                            }
                            goto $l1292;
                            $l1293:;
                        }
                        $tmp1284 = -1;
                        goto $l1282;
                        $l1282:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$368$211285));
                        Iter$368$211285 = NULL;
                        switch ($tmp1284) {
                            case -1: goto $l1314;
                        }
                        $l1314:;
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp1315, ((panda$core$UInt8) { 125 }));
                    panda$core$MutableString$append$panda$core$Char8(result1214, $tmp1315);
                }
                }
                panda$core$String* $tmp1318 = panda$core$MutableString$finish$R$panda$core$String(result1214);
                $tmp1317 = $tmp1318;
                $tmp1316 = $tmp1317;
                $returnValue270 = $tmp1316;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1316));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1317));
                $tmp1213 = 0;
                goto $l1211;
                $l1319:;
                $tmp262 = 31;
                goto $l260;
                $l1320:;
                return $returnValue270;
            }
            $l1211:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1214));
            result1214 = NULL;
            switch ($tmp1213) {
                case 0: goto $l1319;
            }
            $l1322:;
        }
        }
        else {
        panda$core$Bit $tmp1323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1323.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1325 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$192_9263->$data + 16));
            kind1324 = *$tmp1325;
            panda$collections$ImmutableArray** $tmp1327 = ((panda$collections$ImmutableArray**) ((char*) $match$192_9263->$data + 24));
            paramTypes1326 = *$tmp1327;
            org$pandalanguage$pandac$ASTNode** $tmp1329 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 32));
            returnType1328 = *$tmp1329;
            int $tmp1332;
            {
                memset(&yield1333, 0, sizeof(yield1333));
                {
                    $match$376_171334 = kind1324;
                    panda$core$Bit $tmp1335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$376_171334.$rawValue, ((panda$core$Int64) { 90 }));
                    if ($tmp1335.value) {
                    {
                        {
                            $tmp1336 = yield1333;
                            $tmp1337 = &$s1338;
                            yield1333 = $tmp1337;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1337));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1336));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp1339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$376_171334.$rawValue, ((panda$core$Int64) { 91 }));
                    if ($tmp1339.value) {
                    {
                        {
                            $tmp1340 = yield1333;
                            $tmp1341 = &$s1342;
                            yield1333 = $tmp1341;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1341));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1340));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp1343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$376_171334.$rawValue, ((panda$core$Int64) { 92 }));
                    if ($tmp1343.value) {
                    {
                        {
                            $tmp1344 = yield1333;
                            $tmp1345 = &$s1346;
                            yield1333 = $tmp1345;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1345));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1344));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp1347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$376_171334.$rawValue, ((panda$core$Int64) { 93 }));
                    if ($tmp1347.value) {
                    {
                        {
                            $tmp1348 = yield1333;
                            $tmp1349 = &$s1350;
                            yield1333 = $tmp1349;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1349));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1348));
                        }
                    }
                    }
                    }
                    }
                    }
                }
                ITable* $tmp1359 = ((panda$collections$ListView*) paramTypes1326)->$class->itable;
                while ($tmp1359->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1359 = $tmp1359->next;
                }
                $fn1361 $tmp1360 = $tmp1359->methods[4];
                panda$core$String* $tmp1362 = $tmp1360(((panda$collections$ListView*) paramTypes1326));
                $tmp1358 = $tmp1362;
                panda$core$String* $tmp1363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1357, $tmp1358);
                $tmp1356 = $tmp1363;
                panda$core$String* $tmp1365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1356, &$s1364);
                $tmp1355 = $tmp1365;
                panda$core$String* $tmp1366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1355, yield1333);
                $tmp1354 = $tmp1366;
                panda$core$String* $tmp1368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1354, &$s1367);
                $tmp1353 = $tmp1368;
                $tmp1352 = $tmp1353;
                partial1351 = $tmp1352;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1352));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1353));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1354));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1355));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1356));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1358));
                if (((panda$core$Bit) { returnType1328 != NULL }).value) {
                {
                    panda$core$String* $tmp1374 = panda$core$String$convert$R$panda$core$String(partial1351);
                    $tmp1373 = $tmp1374;
                    panda$core$String* $tmp1376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1373, &$s1375);
                    $tmp1372 = $tmp1376;
                    panda$core$String* $tmp1377 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1372, ((panda$core$Object*) returnType1328));
                    $tmp1371 = $tmp1377;
                    panda$core$String* $tmp1379 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1371, &$s1378);
                    $tmp1370 = $tmp1379;
                    $tmp1369 = $tmp1370;
                    $returnValue270 = $tmp1369;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1369));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1370));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1371));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1372));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1373));
                    $tmp1332 = 0;
                    goto $l1330;
                    $l1380:;
                    $tmp262 = 32;
                    goto $l260;
                    $l1381:;
                    return $returnValue270;
                }
                }
                panda$core$String* $tmp1386 = panda$core$String$convert$R$panda$core$String(partial1351);
                $tmp1385 = $tmp1386;
                panda$core$String* $tmp1388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1385, &$s1387);
                $tmp1384 = $tmp1388;
                $tmp1383 = $tmp1384;
                $returnValue270 = $tmp1383;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1383));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1384));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1385));
                $tmp1332 = 1;
                goto $l1330;
                $l1389:;
                $tmp262 = 33;
                goto $l260;
                $l1390:;
                return $returnValue270;
            }
            $l1330:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) yield1333));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) partial1351));
            partial1351 = NULL;
            switch ($tmp1332) {
                case 1: goto $l1389;
                case 0: goto $l1380;
            }
            $l1392:;
        }
        }
        else {
        panda$core$Bit $tmp1393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1393.value) {
        {
            $tmp1394 = &$s1395;
            $returnValue270 = $tmp1394;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1394));
            $tmp262 = 34;
            goto $l260;
            $l1396:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1398 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1398.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1400 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 16));
            base1399 = *$tmp1400;
            panda$core$String* $tmp1404 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) base1399), &$s1403);
            $tmp1402 = $tmp1404;
            $tmp1401 = $tmp1402;
            $returnValue270 = $tmp1401;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1401));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1402));
            $tmp262 = 35;
            goto $l260;
            $l1405:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1407.value) {
        {
            panda$core$String** $tmp1409 = ((panda$core$String**) ((char*) $match$192_9263->$data + 16));
            name1408 = *$tmp1409;
            $tmp1410 = name1408;
            $returnValue270 = $tmp1410;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1410));
            $tmp262 = 36;
            goto $l260;
            $l1411:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1413.value) {
        {
            panda$core$String** $tmp1415 = ((panda$core$String**) ((char*) $match$192_9263->$data + 16));
            name1414 = *$tmp1415;
            org$pandalanguage$pandac$ASTNode** $tmp1417 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 24));
            type1416 = *$tmp1417;
            panda$core$String* $tmp1423 = panda$core$String$convert$R$panda$core$String(name1414);
            $tmp1422 = $tmp1423;
            panda$core$String* $tmp1425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1422, &$s1424);
            $tmp1421 = $tmp1425;
            panda$core$String* $tmp1426 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1421, ((panda$core$Object*) type1416));
            $tmp1420 = $tmp1426;
            panda$core$String* $tmp1428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1420, &$s1427);
            $tmp1419 = $tmp1428;
            $tmp1418 = $tmp1419;
            $returnValue270 = $tmp1418;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1418));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1419));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1420));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1421));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1422));
            $tmp262 = 37;
            goto $l260;
            $l1429:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1431.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1433 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$192_9263->$data + 16));
            kind1432 = *$tmp1433;
            org$pandalanguage$pandac$ASTNode** $tmp1435 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 24));
            base1434 = *$tmp1435;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1442;
            $tmp1442 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp1442->value = kind1432;
            $tmp1441 = ((panda$core$Object*) $tmp1442);
            panda$core$String* $tmp1444 = (($fn1443) $tmp1441->$class->vtable[0])($tmp1441);
            $tmp1440 = $tmp1444;
            panda$core$String* $tmp1446 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1440, &$s1445);
            $tmp1439 = $tmp1446;
            panda$core$String* $tmp1447 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1439, ((panda$core$Object*) base1434));
            $tmp1438 = $tmp1447;
            panda$core$String* $tmp1449 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1438, &$s1448);
            $tmp1437 = $tmp1449;
            $tmp1436 = $tmp1437;
            $returnValue270 = $tmp1436;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1436));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1437));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1438));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1439));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1440));
            panda$core$Panda$unref$panda$core$Object($tmp1441);
            $tmp262 = 38;
            goto $l260;
            $l1450:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1452 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1452.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1454 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 16));
            start1453 = *$tmp1454;
            org$pandalanguage$pandac$ASTNode** $tmp1456 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 24));
            end1455 = *$tmp1456;
            panda$core$Bit* $tmp1458 = ((panda$core$Bit*) ((char*) $match$192_9263->$data + 32));
            inclusive1457 = *$tmp1458;
            org$pandalanguage$pandac$ASTNode** $tmp1460 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 33));
            step1459 = *$tmp1460;
            int $tmp1463;
            {
                panda$core$MutableString* $tmp1467 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1467);
                $tmp1466 = $tmp1467;
                $tmp1465 = $tmp1466;
                result1464 = $tmp1465;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1465));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1466));
                if (((panda$core$Bit) { start1453 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result1464, ((panda$core$Object*) start1453));
                }
                }
                if (inclusive1457.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1464, &$s1468);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(result1464, &$s1469);
                }
                }
                if (((panda$core$Bit) { end1455 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result1464, ((panda$core$Object*) end1455));
                }
                }
                if (((panda$core$Bit) { step1459 != NULL }).value) {
                {
                    panda$core$String* $tmp1472 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1471, ((panda$core$Object*) step1459));
                    $tmp1470 = $tmp1472;
                    panda$core$MutableString$append$panda$core$String(result1464, $tmp1470);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1470));
                }
                }
                panda$core$String* $tmp1475 = panda$core$MutableString$finish$R$panda$core$String(result1464);
                $tmp1474 = $tmp1475;
                $tmp1473 = $tmp1474;
                $returnValue270 = $tmp1473;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1473));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1474));
                $tmp1463 = 0;
                goto $l1461;
                $l1476:;
                $tmp262 = 39;
                goto $l260;
                $l1477:;
                return $returnValue270;
            }
            $l1461:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1464));
            result1464 = NULL;
            switch ($tmp1463) {
                case 0: goto $l1476;
            }
            $l1479:;
        }
        }
        else {
        panda$core$Bit $tmp1480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1480.value) {
        {
            panda$core$Real64* $tmp1482 = ((panda$core$Real64*) ((char*) $match$192_9263->$data + 16));
            value1481 = *$tmp1482;
            panda$core$String* $tmp1485 = panda$core$Real64$convert$R$panda$core$String(value1481);
            $tmp1484 = $tmp1485;
            $tmp1483 = $tmp1484;
            $returnValue270 = $tmp1483;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1483));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1484));
            $tmp262 = 40;
            goto $l260;
            $l1486:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1488.value) {
        {
            panda$core$String** $tmp1490 = ((panda$core$String**) ((char*) $match$192_9263->$data + 16));
            src1489 = *$tmp1490;
            panda$core$String* $tmp1495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1494, src1489);
            $tmp1493 = $tmp1495;
            panda$core$String* $tmp1497 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1493, &$s1496);
            $tmp1492 = $tmp1497;
            $tmp1491 = $tmp1492;
            $returnValue270 = $tmp1491;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1491));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1492));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1493));
            $tmp262 = 41;
            goto $l260;
            $l1498:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1500.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1502 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 16));
            value1501 = *$tmp1502;
            if (((panda$core$Bit) { value1501 != NULL }).value) {
            {
                panda$core$String* $tmp1507 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1506, ((panda$core$Object*) value1501));
                $tmp1505 = $tmp1507;
                panda$core$String* $tmp1509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1505, &$s1508);
                $tmp1504 = $tmp1509;
                $tmp1503 = $tmp1504;
                $returnValue270 = $tmp1503;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1503));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1504));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1505));
                $tmp262 = 42;
                goto $l260;
                $l1510:;
                return $returnValue270;
            }
            }
            $tmp1512 = &$s1513;
            $returnValue270 = $tmp1512;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1512));
            $tmp262 = 43;
            goto $l260;
            $l1514:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1516.value) {
        {
            $tmp1517 = &$s1518;
            $returnValue270 = $tmp1517;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1517));
            $tmp262 = 44;
            goto $l260;
            $l1519:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1521 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1521.value) {
        {
            panda$core$String** $tmp1523 = ((panda$core$String**) ((char*) $match$192_9263->$data + 16));
            str1522 = *$tmp1523;
            panda$core$String* $tmp1527 = panda$core$String$format$panda$core$String$R$panda$core$String(str1522, &$s1526);
            $tmp1525 = $tmp1527;
            $tmp1524 = $tmp1525;
            $returnValue270 = $tmp1524;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1524));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1525));
            $tmp262 = 45;
            goto $l260;
            $l1528:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1530.value) {
        {
            $tmp1531 = &$s1532;
            $returnValue270 = $tmp1531;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1531));
            $tmp262 = 46;
            goto $l260;
            $l1533:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1535.value) {
        {
            panda$collections$ImmutableArray** $tmp1537 = ((panda$collections$ImmutableArray**) ((char*) $match$192_9263->$data + 16));
            arguments1536 = *$tmp1537;
            ITable* $tmp1543 = ((panda$collections$ListView*) arguments1536)->$class->itable;
            while ($tmp1543->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1543 = $tmp1543->next;
            }
            $fn1545 $tmp1544 = $tmp1543->methods[4];
            panda$core$String* $tmp1546 = $tmp1544(((panda$collections$ListView*) arguments1536));
            $tmp1542 = $tmp1546;
            panda$core$String* $tmp1547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1541, $tmp1542);
            $tmp1540 = $tmp1547;
            panda$core$String* $tmp1549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1540, &$s1548);
            $tmp1539 = $tmp1549;
            $tmp1538 = $tmp1539;
            $returnValue270 = $tmp1538;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1538));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1539));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1540));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1542));
            $tmp262 = 47;
            goto $l260;
            $l1550:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1552 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1552.value) {
        {
            panda$collections$ImmutableArray** $tmp1554 = ((panda$collections$ImmutableArray**) ((char*) $match$192_9263->$data + 16));
            parameters1553 = *$tmp1554;
            ITable* $tmp1560 = ((panda$collections$ListView*) parameters1553)->$class->itable;
            while ($tmp1560->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1560 = $tmp1560->next;
            }
            $fn1562 $tmp1561 = $tmp1560->methods[4];
            panda$core$String* $tmp1563 = $tmp1561(((panda$collections$ListView*) parameters1553));
            $tmp1559 = $tmp1563;
            panda$core$String* $tmp1564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1558, $tmp1559);
            $tmp1557 = $tmp1564;
            panda$core$String* $tmp1566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1557, &$s1565);
            $tmp1556 = $tmp1566;
            $tmp1555 = $tmp1556;
            $returnValue270 = $tmp1555;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1555));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1556));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1557));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1559));
            $tmp262 = 48;
            goto $l260;
            $l1567:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp1569.value) {
        {
            panda$core$String** $tmp1571 = ((panda$core$String**) ((char*) $match$192_9263->$data + 16));
            name1570 = *$tmp1571;
            $tmp1572 = name1570;
            $returnValue270 = $tmp1572;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1572));
            $tmp262 = 49;
            goto $l260;
            $l1573:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp1575.value) {
        {
            panda$core$String** $tmp1577 = ((panda$core$String**) ((char*) $match$192_9263->$data + 16));
            name1576 = *$tmp1577;
            org$pandalanguage$pandac$ASTNode** $tmp1579 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 24));
            type1578 = *$tmp1579;
            if (((panda$core$Bit) { type1578 != NULL }).value) {
            {
                panda$core$String* $tmp1585 = panda$core$String$convert$R$panda$core$String(name1576);
                $tmp1584 = $tmp1585;
                panda$core$String* $tmp1587 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1584, &$s1586);
                $tmp1583 = $tmp1587;
                panda$core$String* $tmp1588 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1583, ((panda$core$Object*) type1578));
                $tmp1582 = $tmp1588;
                panda$core$String* $tmp1590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1582, &$s1589);
                $tmp1581 = $tmp1590;
                $tmp1580 = $tmp1581;
                $returnValue270 = $tmp1580;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1580));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1581));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1582));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1583));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1584));
                $tmp262 = 50;
                goto $l260;
                $l1591:;
                return $returnValue270;
            }
            }
            $tmp1593 = name1576;
            $returnValue270 = $tmp1593;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1593));
            $tmp262 = 51;
            goto $l260;
            $l1594:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1596 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp1596.value) {
        {
            panda$collections$ImmutableArray** $tmp1598 = ((panda$collections$ImmutableArray**) ((char*) $match$192_9263->$data + 16));
            parameters1597 = *$tmp1598;
            org$pandalanguage$pandac$ASTNode** $tmp1600 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 24));
            body1599 = *$tmp1600;
            ITable* $tmp1608 = ((panda$collections$ListView*) parameters1597)->$class->itable;
            while ($tmp1608->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1608 = $tmp1608->next;
            }
            $fn1610 $tmp1609 = $tmp1608->methods[4];
            panda$core$String* $tmp1611 = $tmp1609(((panda$collections$ListView*) parameters1597));
            $tmp1607 = $tmp1611;
            panda$core$String* $tmp1612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1606, $tmp1607);
            $tmp1605 = $tmp1612;
            panda$core$String* $tmp1614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1605, &$s1613);
            $tmp1604 = $tmp1614;
            panda$core$String* $tmp1615 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1604, ((panda$core$Object*) body1599));
            $tmp1603 = $tmp1615;
            panda$core$String* $tmp1617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1603, &$s1616);
            $tmp1602 = $tmp1617;
            $tmp1601 = $tmp1602;
            $returnValue270 = $tmp1601;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1601));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1602));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1603));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1604));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1605));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1607));
            $tmp262 = 52;
            goto $l260;
            $l1618:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp1620.value) {
        {
            panda$collections$ImmutableArray** $tmp1622 = ((panda$collections$ImmutableArray**) ((char*) $match$192_9263->$data + 16));
            parameters1621 = *$tmp1622;
            org$pandalanguage$pandac$ASTNode** $tmp1624 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 24));
            body1623 = *$tmp1624;
            ITable* $tmp1632 = ((panda$collections$ListView*) parameters1621)->$class->itable;
            while ($tmp1632->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1632 = $tmp1632->next;
            }
            $fn1634 $tmp1633 = $tmp1632->methods[4];
            panda$core$String* $tmp1635 = $tmp1633(((panda$collections$ListView*) parameters1621));
            $tmp1631 = $tmp1635;
            panda$core$String* $tmp1636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1630, $tmp1631);
            $tmp1629 = $tmp1636;
            panda$core$String* $tmp1638 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1629, &$s1637);
            $tmp1628 = $tmp1638;
            panda$core$String* $tmp1639 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1628, ((panda$core$Object*) body1623));
            $tmp1627 = $tmp1639;
            panda$core$String* $tmp1641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1627, &$s1640);
            $tmp1626 = $tmp1641;
            $tmp1625 = $tmp1626;
            $returnValue270 = $tmp1625;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1625));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1626));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1627));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1628));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1629));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1631));
            $tmp262 = 53;
            goto $l260;
            $l1642:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1644 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp1644.value) {
        {
            panda$core$String** $tmp1646 = ((panda$core$String**) ((char*) $match$192_9263->$data + 16));
            name1645 = *$tmp1646;
            $tmp1647 = name1645;
            $returnValue270 = $tmp1647;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1647));
            $tmp262 = 54;
            goto $l260;
            $l1648:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1650 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp1650.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp1652 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$192_9263->$data + 16));
            kind1651 = *$tmp1652;
            panda$collections$ImmutableArray** $tmp1654 = ((panda$collections$ImmutableArray**) ((char*) $match$192_9263->$data + 24));
            decls1653 = *$tmp1654;
            int $tmp1657;
            {
                panda$core$MutableString* $tmp1661 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1661);
                $tmp1660 = $tmp1661;
                $tmp1659 = $tmp1660;
                result1658 = $tmp1659;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1659));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1660));
                {
                    $match$453_171662 = kind1651;
                    panda$core$Bit $tmp1663 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$453_171662.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp1663.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1658, &$s1664);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1665 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$453_171662.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp1665.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1658, &$s1666);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$453_171662.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp1667.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1658, &$s1668);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1669 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$453_171662.$rawValue, ((panda$core$Int64) { 3 }));
                    if ($tmp1669.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1658, &$s1670);
                    }
                    }
                    }
                    }
                    }
                }
                ITable* $tmp1672 = ((panda$collections$ListView*) decls1653)->$class->itable;
                while ($tmp1672->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1672 = $tmp1672->next;
                }
                $fn1674 $tmp1673 = $tmp1672->methods[4];
                panda$core$String* $tmp1675 = $tmp1673(((panda$collections$ListView*) decls1653));
                $tmp1671 = $tmp1675;
                panda$core$MutableString$append$panda$core$String(result1658, $tmp1671);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1671));
                panda$core$String* $tmp1678 = panda$core$MutableString$finish$R$panda$core$String(result1658);
                $tmp1677 = $tmp1678;
                $tmp1676 = $tmp1677;
                $returnValue270 = $tmp1676;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1676));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1677));
                $tmp1657 = 0;
                goto $l1655;
                $l1679:;
                $tmp262 = 55;
                goto $l260;
                $l1680:;
                return $returnValue270;
            }
            $l1655:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1658));
            result1658 = NULL;
            switch ($tmp1657) {
                case 0: goto $l1679;
            }
            $l1682:;
        }
        }
        else {
        panda$core$Bit $tmp1683 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp1683.value) {
        {
            panda$collections$ImmutableArray** $tmp1685 = ((panda$collections$ImmutableArray**) ((char*) $match$192_9263->$data + 16));
            tests1684 = *$tmp1685;
            panda$collections$ImmutableArray** $tmp1687 = ((panda$collections$ImmutableArray**) ((char*) $match$192_9263->$data + 24));
            statements1686 = *$tmp1687;
            int $tmp1690;
            {
                panda$core$MutableString* $tmp1694 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1694, &$s1695);
                $tmp1693 = $tmp1694;
                $tmp1692 = $tmp1693;
                result1691 = $tmp1692;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1692));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1693));
                $tmp1697 = &$s1698;
                separator1696 = $tmp1697;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1697));
                {
                    int $tmp1701;
                    {
                        ITable* $tmp1705 = ((panda$collections$Iterable*) tests1684)->$class->itable;
                        while ($tmp1705->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1705 = $tmp1705->next;
                        }
                        $fn1707 $tmp1706 = $tmp1705->methods[0];
                        panda$collections$Iterator* $tmp1708 = $tmp1706(((panda$collections$Iterable*) tests1684));
                        $tmp1704 = $tmp1708;
                        $tmp1703 = $tmp1704;
                        Iter$464$171702 = $tmp1703;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1703));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1704));
                        $l1709:;
                        ITable* $tmp1712 = Iter$464$171702->$class->itable;
                        while ($tmp1712->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1712 = $tmp1712->next;
                        }
                        $fn1714 $tmp1713 = $tmp1712->methods[0];
                        panda$core$Bit $tmp1715 = $tmp1713(Iter$464$171702);
                        panda$core$Bit $tmp1716 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1715);
                        bool $tmp1711 = $tmp1716.value;
                        if (!$tmp1711) goto $l1710;
                        {
                            int $tmp1719;
                            {
                                ITable* $tmp1723 = Iter$464$171702->$class->itable;
                                while ($tmp1723->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1723 = $tmp1723->next;
                                }
                                $fn1725 $tmp1724 = $tmp1723->methods[1];
                                panda$core$Object* $tmp1726 = $tmp1724(Iter$464$171702);
                                $tmp1722 = $tmp1726;
                                $tmp1721 = ((org$pandalanguage$pandac$ASTNode*) $tmp1722);
                                t1720 = $tmp1721;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1721));
                                panda$core$Panda$unref$panda$core$Object($tmp1722);
                                panda$core$String* $tmp1731 = panda$core$String$convert$R$panda$core$String(separator1696);
                                $tmp1730 = $tmp1731;
                                panda$core$String* $tmp1733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1730, &$s1732);
                                $tmp1729 = $tmp1733;
                                panda$core$String* $tmp1734 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1729, ((panda$core$Object*) t1720));
                                $tmp1728 = $tmp1734;
                                panda$core$String* $tmp1736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1728, &$s1735);
                                $tmp1727 = $tmp1736;
                                panda$core$MutableString$append$panda$core$String(result1691, $tmp1727);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1727));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1728));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1729));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1730));
                            }
                            $tmp1719 = -1;
                            goto $l1717;
                            $l1717:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1720));
                            t1720 = NULL;
                            switch ($tmp1719) {
                                case -1: goto $l1737;
                            }
                            $l1737:;
                        }
                        goto $l1709;
                        $l1710:;
                    }
                    $tmp1701 = -1;
                    goto $l1699;
                    $l1699:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$464$171702));
                    Iter$464$171702 = NULL;
                    switch ($tmp1701) {
                        case -1: goto $l1738;
                    }
                    $l1738:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1739, ((panda$core$UInt8) { 58 }));
                panda$core$MutableString$append$panda$core$Char8(result1691, $tmp1739);
                {
                    int $tmp1742;
                    {
                        ITable* $tmp1746 = ((panda$collections$Iterable*) statements1686)->$class->itable;
                        while ($tmp1746->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1746 = $tmp1746->next;
                        }
                        $fn1748 $tmp1747 = $tmp1746->methods[0];
                        panda$collections$Iterator* $tmp1749 = $tmp1747(((panda$collections$Iterable*) statements1686));
                        $tmp1745 = $tmp1749;
                        $tmp1744 = $tmp1745;
                        Iter$468$171743 = $tmp1744;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1744));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1745));
                        $l1750:;
                        ITable* $tmp1753 = Iter$468$171743->$class->itable;
                        while ($tmp1753->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1753 = $tmp1753->next;
                        }
                        $fn1755 $tmp1754 = $tmp1753->methods[0];
                        panda$core$Bit $tmp1756 = $tmp1754(Iter$468$171743);
                        panda$core$Bit $tmp1757 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1756);
                        bool $tmp1752 = $tmp1757.value;
                        if (!$tmp1752) goto $l1751;
                        {
                            int $tmp1760;
                            {
                                ITable* $tmp1764 = Iter$468$171743->$class->itable;
                                while ($tmp1764->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1764 = $tmp1764->next;
                                }
                                $fn1766 $tmp1765 = $tmp1764->methods[1];
                                panda$core$Object* $tmp1767 = $tmp1765(Iter$468$171743);
                                $tmp1763 = $tmp1767;
                                $tmp1762 = ((org$pandalanguage$pandac$ASTNode*) $tmp1763);
                                s1761 = $tmp1762;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1762));
                                panda$core$Panda$unref$panda$core$Object($tmp1763);
                                panda$core$String* $tmp1770 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1769, ((panda$core$Object*) s1761));
                                $tmp1768 = $tmp1770;
                                panda$core$MutableString$append$panda$core$String(result1691, $tmp1768);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1768));
                            }
                            $tmp1760 = -1;
                            goto $l1758;
                            $l1758:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1761));
                            s1761 = NULL;
                            switch ($tmp1760) {
                                case -1: goto $l1771;
                            }
                            $l1771:;
                        }
                        goto $l1750;
                        $l1751:;
                    }
                    $tmp1742 = -1;
                    goto $l1740;
                    $l1740:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$468$171743));
                    Iter$468$171743 = NULL;
                    switch ($tmp1742) {
                        case -1: goto $l1772;
                    }
                    $l1772:;
                }
                panda$core$String* $tmp1775 = panda$core$MutableString$finish$R$panda$core$String(result1691);
                $tmp1774 = $tmp1775;
                $tmp1773 = $tmp1774;
                $returnValue270 = $tmp1773;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1773));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1774));
                $tmp1690 = 0;
                goto $l1688;
                $l1776:;
                $tmp262 = 56;
                goto $l260;
                $l1777:;
                return $returnValue270;
            }
            $l1688:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1691));
            result1691 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1696));
            separator1696 = NULL;
            switch ($tmp1690) {
                case 0: goto $l1776;
            }
            $l1779:;
        }
        }
        else {
        panda$core$Bit $tmp1780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$192_9263->$rawValue, ((panda$core$Int64) { 49 }));
        if ($tmp1780.value) {
        {
            panda$core$String** $tmp1782 = ((panda$core$String**) ((char*) $match$192_9263->$data + 16));
            label1781 = *$tmp1782;
            org$pandalanguage$pandac$ASTNode** $tmp1784 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$192_9263->$data + 24));
            test1783 = *$tmp1784;
            panda$collections$ImmutableArray** $tmp1786 = ((panda$collections$ImmutableArray**) ((char*) $match$192_9263->$data + 32));
            statements1785 = *$tmp1786;
            int $tmp1789;
            {
                panda$core$MutableString* $tmp1793 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1793);
                $tmp1792 = $tmp1793;
                $tmp1791 = $tmp1792;
                result1790 = $tmp1791;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1791));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1792));
                if (((panda$core$Bit) { label1781 != NULL }).value) {
                {
                    panda$core$String* $tmp1796 = panda$core$String$convert$R$panda$core$String(label1781);
                    $tmp1795 = $tmp1796;
                    panda$core$String* $tmp1798 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1795, &$s1797);
                    $tmp1794 = $tmp1798;
                    panda$core$MutableString$append$panda$core$String(result1790, $tmp1794);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1794));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1795));
                }
                }
                panda$core$String* $tmp1802 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1801, ((panda$core$Object*) test1783));
                $tmp1800 = $tmp1802;
                panda$core$String* $tmp1804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1800, &$s1803);
                $tmp1799 = $tmp1804;
                panda$core$MutableString$append$panda$core$String(result1790, $tmp1799);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1799));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1800));
                {
                    int $tmp1807;
                    {
                        ITable* $tmp1811 = ((panda$collections$Iterable*) statements1785)->$class->itable;
                        while ($tmp1811->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1811 = $tmp1811->next;
                        }
                        $fn1813 $tmp1812 = $tmp1811->methods[0];
                        panda$collections$Iterator* $tmp1814 = $tmp1812(((panda$collections$Iterable*) statements1785));
                        $tmp1810 = $tmp1814;
                        $tmp1809 = $tmp1810;
                        Iter$478$171808 = $tmp1809;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1809));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1810));
                        $l1815:;
                        ITable* $tmp1818 = Iter$478$171808->$class->itable;
                        while ($tmp1818->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1818 = $tmp1818->next;
                        }
                        $fn1820 $tmp1819 = $tmp1818->methods[0];
                        panda$core$Bit $tmp1821 = $tmp1819(Iter$478$171808);
                        panda$core$Bit $tmp1822 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1821);
                        bool $tmp1817 = $tmp1822.value;
                        if (!$tmp1817) goto $l1816;
                        {
                            int $tmp1825;
                            {
                                ITable* $tmp1829 = Iter$478$171808->$class->itable;
                                while ($tmp1829->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1829 = $tmp1829->next;
                                }
                                $fn1831 $tmp1830 = $tmp1829->methods[1];
                                panda$core$Object* $tmp1832 = $tmp1830(Iter$478$171808);
                                $tmp1828 = $tmp1832;
                                $tmp1827 = ((org$pandalanguage$pandac$ASTNode*) $tmp1828);
                                s1826 = $tmp1827;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1827));
                                panda$core$Panda$unref$panda$core$Object($tmp1828);
                                panda$core$String* $tmp1835 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1826), &$s1834);
                                $tmp1833 = $tmp1835;
                                panda$core$MutableString$append$panda$core$String(result1790, $tmp1833);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1833));
                            }
                            $tmp1825 = -1;
                            goto $l1823;
                            $l1823:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1826));
                            s1826 = NULL;
                            switch ($tmp1825) {
                                case -1: goto $l1836;
                            }
                            $l1836:;
                        }
                        goto $l1815;
                        $l1816:;
                    }
                    $tmp1807 = -1;
                    goto $l1805;
                    $l1805:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$478$171808));
                    Iter$478$171808 = NULL;
                    switch ($tmp1807) {
                        case -1: goto $l1837;
                    }
                    $l1837:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1838, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1790, $tmp1838);
                panda$core$String* $tmp1841 = panda$core$MutableString$finish$R$panda$core$String(result1790);
                $tmp1840 = $tmp1841;
                $tmp1839 = $tmp1840;
                $returnValue270 = $tmp1839;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1839));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1840));
                $tmp1789 = 0;
                goto $l1787;
                $l1842:;
                $tmp262 = 57;
                goto $l260;
                $l1843:;
                return $returnValue270;
            }
            $l1787:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1790));
            result1790 = NULL;
            switch ($tmp1789) {
                case 0: goto $l1842;
            }
            $l1845:;
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
    }
    $tmp262 = -1;
    goto $l260;
    $l260:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp264));
    switch ($tmp262) {
        case 8: goto $l417;
        case 43: goto $l1514;
        case 2: goto $l299;
        case 41: goto $l1498;
        case 9: goto $l430;
        case 55: goto $l1680;
        case 44: goto $l1519;
        case 14: goto $l653;
        case 33: goto $l1390;
        case 1: goto $l285;
        case 15: goto $l666;
        case 20: goto $l780;
        case 48: goto $l1567;
        case 53: goto $l1642;
        case 45: goto $l1528;
        case 36: goto $l1411;
        case 21: goto $l836;
        case 0: goto $l282;
        case 49: goto $l1573;
        case 28: goto $l1071;
        case 5: goto $l330;
        case 37: goto $l1429;
        case 56: goto $l1777;
        case -1: goto $l1846;
        case 39: goto $l1477;
        case 3: goto $l313;
        case 11: goto $l458;
        case 30: goto $l1193;
        case 57: goto $l1843;
        case 50: goto $l1591;
        case 40: goto $l1486;
        case 19: goto $l760;
        case 10: goto $l434;
        case 46: goto $l1533;
        case 25: goto $l987;
        case 54: goto $l1648;
        case 38: goto $l1450;
        case 17: goto $l689;
        case 23: goto $l957;
        case 24: goto $l981;
        case 47: goto $l1550;
        case 6: goto $l358;
        case 26: goto $l1053;
        case 29: goto $l1129;
        case 27: goto $l1062;
        case 34: goto $l1396;
        case 35: goto $l1405;
        case 16: goto $l670;
        case 42: goto $l1510;
        case 18: goto $l695;
        case 4: goto $l325;
        case 13: goto $l525;
        case 7: goto $l366;
        case 32: goto $l1381;
        case 12: goto $l496;
        case 31: goto $l1320;
        case 22: goto $l886;
        case 51: goto $l1594;
        case 52: goto $l1618;
    }
    $l1846:;
}
void org$pandalanguage$pandac$ASTNode$cleanup(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$5_11853 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1854;
    org$pandalanguage$pandac$Position _f01856;
    panda$core$String* _f11858 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21860 = NULL;
    org$pandalanguage$pandac$Position _f01863;
    org$pandalanguage$pandac$ASTNode* _f11865 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21867 = NULL;
    org$pandalanguage$pandac$Position _f01870;
    org$pandalanguage$pandac$ASTNode* _f11872 = NULL;
    org$pandalanguage$pandac$Position _f01875;
    org$pandalanguage$pandac$Position _f01878;
    org$pandalanguage$pandac$ASTNode* _f11880 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind _f21882;
    org$pandalanguage$pandac$ASTNode* _f31884 = NULL;
    org$pandalanguage$pandac$Position _f01887;
    panda$core$Bit _f11889;
    org$pandalanguage$pandac$Position _f01892;
    panda$collections$ImmutableArray* _f11894 = NULL;
    org$pandalanguage$pandac$Position _f01897;
    panda$core$String* _f11899 = NULL;
    org$pandalanguage$pandac$Position _f01902;
    org$pandalanguage$pandac$ASTNode* _f11904 = NULL;
    panda$collections$ImmutableArray* _f21906 = NULL;
    org$pandalanguage$pandac$Position _f01909;
    org$pandalanguage$pandac$ASTNode* _f11911 = NULL;
    panda$core$String* _f21913 = NULL;
    panda$collections$ImmutableArray* _f31915 = NULL;
    org$pandalanguage$pandac$Position _f01918;
    org$pandalanguage$pandac$ASTNode* _f11920 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* _f21922 = NULL;
    panda$core$Int64 _f31924;
    org$pandalanguage$pandac$Position _f01927;
    org$pandalanguage$pandac$ASTNode* _f11929 = NULL;
    panda$collections$ImmutableArray* _f21931 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind _f31933;
    panda$core$String* _f41935 = NULL;
    panda$collections$ImmutableArray* _f51937 = NULL;
    panda$collections$ImmutableArray* _f61939 = NULL;
    panda$collections$ImmutableArray* _f71941 = NULL;
    org$pandalanguage$pandac$Position _f01944;
    panda$core$String* _f11946 = NULL;
    org$pandalanguage$pandac$Position _f01949;
    org$pandalanguage$pandac$ASTNode* _f11951 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21953 = NULL;
    org$pandalanguage$pandac$Position _f01956;
    panda$core$String* _f11958 = NULL;
    panda$collections$ImmutableArray* _f21960 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31962 = NULL;
    org$pandalanguage$pandac$Position _f01965;
    org$pandalanguage$pandac$ASTNode* _f11967 = NULL;
    panda$core$String* _f21969 = NULL;
    org$pandalanguage$pandac$Position _f01972;
    org$pandalanguage$pandac$ASTNode* _f11974 = NULL;
    panda$collections$ImmutableArray* _f21976 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31978 = NULL;
    panda$collections$ImmutableArray* _f01981 = NULL;
    org$pandalanguage$pandac$Position _f01984;
    panda$core$String* _f11986 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21988 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31990 = NULL;
    panda$collections$ImmutableArray* _f41992 = NULL;
    org$pandalanguage$pandac$Position _f01995;
    panda$core$String* _f11997 = NULL;
    panda$collections$ImmutableArray* _f21999 = NULL;
    org$pandalanguage$pandac$Position _f02002;
    panda$core$String* _f12004 = NULL;
    org$pandalanguage$pandac$Position _f02007;
    org$pandalanguage$pandac$ASTNode* _f12009 = NULL;
    panda$collections$ImmutableArray* _f22011 = NULL;
    org$pandalanguage$pandac$ASTNode* _f32013 = NULL;
    org$pandalanguage$pandac$Position _f02016;
    panda$core$UInt64 _f12018;
    org$pandalanguage$pandac$IRNode* _f02021 = NULL;
    org$pandalanguage$pandac$Position _f02024;
    panda$core$String* _f12026 = NULL;
    panda$collections$ImmutableArray* _f22028 = NULL;
    org$pandalanguage$pandac$Position _f02031;
    org$pandalanguage$pandac$ASTNode* _f12033 = NULL;
    panda$collections$ImmutableArray* _f22035 = NULL;
    panda$collections$ImmutableArray* _f32037 = NULL;
    org$pandalanguage$pandac$Position _f02040;
    org$pandalanguage$pandac$ASTNode* _f12042 = NULL;
    panda$collections$ImmutableArray* _f22044 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind _f32046;
    panda$core$String* _f42048 = NULL;
    panda$collections$ImmutableArray* _f52050 = NULL;
    org$pandalanguage$pandac$ASTNode* _f62052 = NULL;
    panda$collections$ImmutableArray* _f72054 = NULL;
    org$pandalanguage$pandac$Position _f02057;
    org$pandalanguage$pandac$parser$Token$Kind _f12059;
    panda$collections$ImmutableArray* _f22061 = NULL;
    org$pandalanguage$pandac$ASTNode* _f32063 = NULL;
    org$pandalanguage$pandac$Position _f02066;
    org$pandalanguage$pandac$Position _f02069;
    org$pandalanguage$pandac$ASTNode* _f12071 = NULL;
    org$pandalanguage$pandac$Position _f02074;
    panda$core$String* _f12076 = NULL;
    org$pandalanguage$pandac$Position _f02079;
    panda$core$String* _f12081 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22083 = NULL;
    org$pandalanguage$pandac$Position _f02086;
    org$pandalanguage$pandac$parser$Token$Kind _f12088;
    org$pandalanguage$pandac$ASTNode* _f22090 = NULL;
    org$pandalanguage$pandac$Position _f02093;
    org$pandalanguage$pandac$ASTNode* _f12095 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22097 = NULL;
    panda$core$Bit _f32099;
    org$pandalanguage$pandac$ASTNode* _f42101 = NULL;
    org$pandalanguage$pandac$Position _f02104;
    panda$core$Real64 _f12106;
    org$pandalanguage$pandac$Position _f02109;
    panda$core$String* _f12111 = NULL;
    org$pandalanguage$pandac$Position _f02114;
    org$pandalanguage$pandac$ASTNode* _f12116 = NULL;
    org$pandalanguage$pandac$Position _f02119;
    org$pandalanguage$pandac$Position _f02122;
    panda$core$String* _f12124 = NULL;
    org$pandalanguage$pandac$Position _f02127;
    org$pandalanguage$pandac$Position _f02130;
    panda$collections$ImmutableArray* _f12132 = NULL;
    org$pandalanguage$pandac$Position _f02135;
    panda$collections$ImmutableArray* _f12137 = NULL;
    org$pandalanguage$pandac$Position _f02140;
    panda$core$String* _f12142 = NULL;
    org$pandalanguage$pandac$Position _f02145;
    panda$collections$ImmutableArray* _f12147 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22149 = NULL;
    org$pandalanguage$pandac$Position _f02152;
    panda$core$String* _f12154 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22156 = NULL;
    org$pandalanguage$pandac$Position _f02159;
    panda$collections$ImmutableArray* _f12161 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22163 = NULL;
    org$pandalanguage$pandac$Position _f02166;
    panda$core$String* _f12168 = NULL;
    org$pandalanguage$pandac$Position _f02171;
    org$pandalanguage$pandac$Variable$Kind _f12173;
    panda$collections$ImmutableArray* _f22175 = NULL;
    org$pandalanguage$pandac$Position _f02178;
    panda$collections$ImmutableArray* _f12180 = NULL;
    panda$collections$ImmutableArray* _f22182 = NULL;
    org$pandalanguage$pandac$Position _f02185;
    panda$core$String* _f12187 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22189 = NULL;
    panda$collections$ImmutableArray* _f32191 = NULL;
    int $tmp1849;
    {
        int $tmp1852;
        {
            $tmp1854 = self;
            $match$5_11853 = $tmp1854;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1854));
            panda$core$Bit $tmp1855 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp1855.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1857 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f01856 = *$tmp1857;
                panda$core$String** $tmp1859 = ((panda$core$String**) ((char*) $match$5_11853->$data + 16));
                _f11858 = *$tmp1859;
                org$pandalanguage$pandac$ASTNode** $tmp1861 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 24));
                _f21860 = *$tmp1861;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11858));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21860));
            }
            }
            else {
            panda$core$Bit $tmp1862 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp1862.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1864 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f01863 = *$tmp1864;
                org$pandalanguage$pandac$ASTNode** $tmp1866 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 16));
                _f11865 = *$tmp1866;
                org$pandalanguage$pandac$ASTNode** $tmp1868 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 24));
                _f21867 = *$tmp1868;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11865));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21867));
            }
            }
            else {
            panda$core$Bit $tmp1869 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1869.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1871 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f01870 = *$tmp1871;
                org$pandalanguage$pandac$ASTNode** $tmp1873 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 16));
                _f11872 = *$tmp1873;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11872));
            }
            }
            else {
            panda$core$Bit $tmp1874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp1874.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1876 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f01875 = *$tmp1876;
            }
            }
            else {
            panda$core$Bit $tmp1877 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 4 }));
            if ($tmp1877.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1879 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f01878 = *$tmp1879;
                org$pandalanguage$pandac$ASTNode** $tmp1881 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 16));
                _f11880 = *$tmp1881;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp1883 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11853->$data + 24));
                _f21882 = *$tmp1883;
                org$pandalanguage$pandac$ASTNode** $tmp1885 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 32));
                _f31884 = *$tmp1885;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11880));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31884));
            }
            }
            else {
            panda$core$Bit $tmp1886 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 5 }));
            if ($tmp1886.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1888 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f01887 = *$tmp1888;
                panda$core$Bit* $tmp1890 = ((panda$core$Bit*) ((char*) $match$5_11853->$data + 16));
                _f11889 = *$tmp1890;
            }
            }
            else {
            panda$core$Bit $tmp1891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 6 }));
            if ($tmp1891.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1893 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f01892 = *$tmp1893;
                panda$collections$ImmutableArray** $tmp1895 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11853->$data + 16));
                _f11894 = *$tmp1895;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11894));
            }
            }
            else {
            panda$core$Bit $tmp1896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 7 }));
            if ($tmp1896.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1898 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f01897 = *$tmp1898;
                panda$core$String** $tmp1900 = ((panda$core$String**) ((char*) $match$5_11853->$data + 16));
                _f11899 = *$tmp1900;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11899));
            }
            }
            else {
            panda$core$Bit $tmp1901 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 8 }));
            if ($tmp1901.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1903 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f01902 = *$tmp1903;
                org$pandalanguage$pandac$ASTNode** $tmp1905 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 16));
                _f11904 = *$tmp1905;
                panda$collections$ImmutableArray** $tmp1907 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11853->$data + 24));
                _f21906 = *$tmp1907;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11904));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21906));
            }
            }
            else {
            panda$core$Bit $tmp1908 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 9 }));
            if ($tmp1908.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1910 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f01909 = *$tmp1910;
                org$pandalanguage$pandac$ASTNode** $tmp1912 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 16));
                _f11911 = *$tmp1912;
                panda$core$String** $tmp1914 = ((panda$core$String**) ((char*) $match$5_11853->$data + 24));
                _f21913 = *$tmp1914;
                panda$collections$ImmutableArray** $tmp1916 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11853->$data + 32));
                _f31915 = *$tmp1916;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11911));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21913));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31915));
            }
            }
            else {
            panda$core$Bit $tmp1917 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 10 }));
            if ($tmp1917.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1919 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f01918 = *$tmp1919;
                org$pandalanguage$pandac$ASTNode** $tmp1921 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 16));
                _f11920 = *$tmp1921;
                org$pandalanguage$pandac$ChoiceEntry** $tmp1923 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_11853->$data + 24));
                _f21922 = *$tmp1923;
                panda$core$Int64* $tmp1925 = ((panda$core$Int64*) ((char*) $match$5_11853->$data + 32));
                _f31924 = *$tmp1925;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11920));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21922));
            }
            }
            else {
            panda$core$Bit $tmp1926 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp1926.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1928 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f01927 = *$tmp1928;
                org$pandalanguage$pandac$ASTNode** $tmp1930 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 16));
                _f11929 = *$tmp1930;
                panda$collections$ImmutableArray** $tmp1932 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11853->$data + 24));
                _f21931 = *$tmp1932;
                org$pandalanguage$pandac$ClassDecl$Kind* $tmp1934 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$5_11853->$data + 32));
                _f31933 = *$tmp1934;
                panda$core$String** $tmp1936 = ((panda$core$String**) ((char*) $match$5_11853->$data + 40));
                _f41935 = *$tmp1936;
                panda$collections$ImmutableArray** $tmp1938 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11853->$data + 48));
                _f51937 = *$tmp1938;
                panda$collections$ImmutableArray** $tmp1940 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11853->$data + 56));
                _f61939 = *$tmp1940;
                panda$collections$ImmutableArray** $tmp1942 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11853->$data + 64));
                _f71941 = *$tmp1942;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11929));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21931));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41935));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f51937));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f61939));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f71941));
            }
            }
            else {
            panda$core$Bit $tmp1943 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp1943.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1945 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f01944 = *$tmp1945;
                panda$core$String** $tmp1947 = ((panda$core$String**) ((char*) $match$5_11853->$data + 16));
                _f11946 = *$tmp1947;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11946));
            }
            }
            else {
            panda$core$Bit $tmp1948 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp1948.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1950 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f01949 = *$tmp1950;
                org$pandalanguage$pandac$ASTNode** $tmp1952 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 16));
                _f11951 = *$tmp1952;
                org$pandalanguage$pandac$ASTNode** $tmp1954 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 24));
                _f21953 = *$tmp1954;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11951));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21953));
            }
            }
            else {
            panda$core$Bit $tmp1955 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 14 }));
            if ($tmp1955.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1957 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f01956 = *$tmp1957;
                panda$core$String** $tmp1959 = ((panda$core$String**) ((char*) $match$5_11853->$data + 16));
                _f11958 = *$tmp1959;
                panda$collections$ImmutableArray** $tmp1961 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11853->$data + 24));
                _f21960 = *$tmp1961;
                org$pandalanguage$pandac$ASTNode** $tmp1963 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 32));
                _f31962 = *$tmp1963;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11958));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21960));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31962));
            }
            }
            else {
            panda$core$Bit $tmp1964 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 15 }));
            if ($tmp1964.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1966 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f01965 = *$tmp1966;
                org$pandalanguage$pandac$ASTNode** $tmp1968 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 16));
                _f11967 = *$tmp1968;
                panda$core$String** $tmp1970 = ((panda$core$String**) ((char*) $match$5_11853->$data + 24));
                _f21969 = *$tmp1970;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11967));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21969));
            }
            }
            else {
            panda$core$Bit $tmp1971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 16 }));
            if ($tmp1971.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1973 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f01972 = *$tmp1973;
                org$pandalanguage$pandac$ASTNode** $tmp1975 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 16));
                _f11974 = *$tmp1975;
                panda$collections$ImmutableArray** $tmp1977 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11853->$data + 24));
                _f21976 = *$tmp1977;
                org$pandalanguage$pandac$ASTNode** $tmp1979 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 32));
                _f31978 = *$tmp1979;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11974));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21976));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31978));
            }
            }
            else {
            panda$core$Bit $tmp1980 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp1980.value) {
            {
                panda$collections$ImmutableArray** $tmp1982 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11853->$data + 0));
                _f01981 = *$tmp1982;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f01981));
            }
            }
            else {
            panda$core$Bit $tmp1983 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp1983.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1985 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f01984 = *$tmp1985;
                panda$core$String** $tmp1987 = ((panda$core$String**) ((char*) $match$5_11853->$data + 16));
                _f11986 = *$tmp1987;
                org$pandalanguage$pandac$ASTNode** $tmp1989 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 24));
                _f21988 = *$tmp1989;
                org$pandalanguage$pandac$ASTNode** $tmp1991 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 32));
                _f31990 = *$tmp1991;
                panda$collections$ImmutableArray** $tmp1993 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11853->$data + 40));
                _f41992 = *$tmp1993;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11986));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21988));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31990));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41992));
            }
            }
            else {
            panda$core$Bit $tmp1994 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp1994.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1996 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f01995 = *$tmp1996;
                panda$core$String** $tmp1998 = ((panda$core$String**) ((char*) $match$5_11853->$data + 16));
                _f11997 = *$tmp1998;
                panda$collections$ImmutableArray** $tmp2000 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11853->$data + 24));
                _f21999 = *$tmp2000;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11997));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21999));
            }
            }
            else {
            panda$core$Bit $tmp2001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 20 }));
            if ($tmp2001.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2003 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f02002 = *$tmp2003;
                panda$core$String** $tmp2005 = ((panda$core$String**) ((char*) $match$5_11853->$data + 16));
                _f12004 = *$tmp2005;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12004));
            }
            }
            else {
            panda$core$Bit $tmp2006 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 21 }));
            if ($tmp2006.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2008 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f02007 = *$tmp2008;
                org$pandalanguage$pandac$ASTNode** $tmp2010 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 16));
                _f12009 = *$tmp2010;
                panda$collections$ImmutableArray** $tmp2012 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11853->$data + 24));
                _f22011 = *$tmp2012;
                org$pandalanguage$pandac$ASTNode** $tmp2014 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 32));
                _f32013 = *$tmp2014;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12009));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22011));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32013));
            }
            }
            else {
            panda$core$Bit $tmp2015 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 22 }));
            if ($tmp2015.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2017 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f02016 = *$tmp2017;
                panda$core$UInt64* $tmp2019 = ((panda$core$UInt64*) ((char*) $match$5_11853->$data + 16));
                _f12018 = *$tmp2019;
            }
            }
            else {
            panda$core$Bit $tmp2020 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 23 }));
            if ($tmp2020.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2022 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11853->$data + 0));
                _f02021 = *$tmp2022;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02021));
            }
            }
            else {
            panda$core$Bit $tmp2023 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 24 }));
            if ($tmp2023.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2025 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f02024 = *$tmp2025;
                panda$core$String** $tmp2027 = ((panda$core$String**) ((char*) $match$5_11853->$data + 16));
                _f12026 = *$tmp2027;
                panda$collections$ImmutableArray** $tmp2029 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11853->$data + 24));
                _f22028 = *$tmp2029;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12026));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22028));
            }
            }
            else {
            panda$core$Bit $tmp2030 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 25 }));
            if ($tmp2030.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2032 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f02031 = *$tmp2032;
                org$pandalanguage$pandac$ASTNode** $tmp2034 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 16));
                _f12033 = *$tmp2034;
                panda$collections$ImmutableArray** $tmp2036 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11853->$data + 24));
                _f22035 = *$tmp2036;
                panda$collections$ImmutableArray** $tmp2038 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11853->$data + 32));
                _f32037 = *$tmp2038;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12033));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22035));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32037));
            }
            }
            else {
            panda$core$Bit $tmp2039 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 26 }));
            if ($tmp2039.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2041 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f02040 = *$tmp2041;
                org$pandalanguage$pandac$ASTNode** $tmp2043 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 16));
                _f12042 = *$tmp2043;
                panda$collections$ImmutableArray** $tmp2045 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11853->$data + 24));
                _f22044 = *$tmp2045;
                org$pandalanguage$pandac$MethodDecl$Kind* $tmp2047 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$5_11853->$data + 32));
                _f32046 = *$tmp2047;
                panda$core$String** $tmp2049 = ((panda$core$String**) ((char*) $match$5_11853->$data + 40));
                _f42048 = *$tmp2049;
                panda$collections$ImmutableArray** $tmp2051 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11853->$data + 48));
                _f52050 = *$tmp2051;
                org$pandalanguage$pandac$ASTNode** $tmp2053 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 56));
                _f62052 = *$tmp2053;
                panda$collections$ImmutableArray** $tmp2055 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11853->$data + 64));
                _f72054 = *$tmp2055;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12042));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22044));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42048));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f52050));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f62052));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f72054));
            }
            }
            else {
            panda$core$Bit $tmp2056 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 27 }));
            if ($tmp2056.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2058 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f02057 = *$tmp2058;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2060 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11853->$data + 16));
                _f12059 = *$tmp2060;
                panda$collections$ImmutableArray** $tmp2062 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11853->$data + 24));
                _f22061 = *$tmp2062;
                org$pandalanguage$pandac$ASTNode** $tmp2064 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 32));
                _f32063 = *$tmp2064;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22061));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32063));
            }
            }
            else {
            panda$core$Bit $tmp2065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 28 }));
            if ($tmp2065.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2067 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f02066 = *$tmp2067;
            }
            }
            else {
            panda$core$Bit $tmp2068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 29 }));
            if ($tmp2068.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2070 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f02069 = *$tmp2070;
                org$pandalanguage$pandac$ASTNode** $tmp2072 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 16));
                _f12071 = *$tmp2072;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12071));
            }
            }
            else {
            panda$core$Bit $tmp2073 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 30 }));
            if ($tmp2073.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2075 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f02074 = *$tmp2075;
                panda$core$String** $tmp2077 = ((panda$core$String**) ((char*) $match$5_11853->$data + 16));
                _f12076 = *$tmp2077;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12076));
            }
            }
            else {
            panda$core$Bit $tmp2078 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 31 }));
            if ($tmp2078.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2080 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f02079 = *$tmp2080;
                panda$core$String** $tmp2082 = ((panda$core$String**) ((char*) $match$5_11853->$data + 16));
                _f12081 = *$tmp2082;
                org$pandalanguage$pandac$ASTNode** $tmp2084 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 24));
                _f22083 = *$tmp2084;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12081));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22083));
            }
            }
            else {
            panda$core$Bit $tmp2085 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 32 }));
            if ($tmp2085.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2087 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f02086 = *$tmp2087;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2089 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11853->$data + 16));
                _f12088 = *$tmp2089;
                org$pandalanguage$pandac$ASTNode** $tmp2091 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 24));
                _f22090 = *$tmp2091;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22090));
            }
            }
            else {
            panda$core$Bit $tmp2092 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp2092.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2094 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f02093 = *$tmp2094;
                org$pandalanguage$pandac$ASTNode** $tmp2096 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 16));
                _f12095 = *$tmp2096;
                org$pandalanguage$pandac$ASTNode** $tmp2098 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 24));
                _f22097 = *$tmp2098;
                panda$core$Bit* $tmp2100 = ((panda$core$Bit*) ((char*) $match$5_11853->$data + 32));
                _f32099 = *$tmp2100;
                org$pandalanguage$pandac$ASTNode** $tmp2102 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 33));
                _f42101 = *$tmp2102;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12095));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22097));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42101));
            }
            }
            else {
            panda$core$Bit $tmp2103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp2103.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2105 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f02104 = *$tmp2105;
                panda$core$Real64* $tmp2107 = ((panda$core$Real64*) ((char*) $match$5_11853->$data + 16));
                _f12106 = *$tmp2107;
            }
            }
            else {
            panda$core$Bit $tmp2108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 35 }));
            if ($tmp2108.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2110 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f02109 = *$tmp2110;
                panda$core$String** $tmp2112 = ((panda$core$String**) ((char*) $match$5_11853->$data + 16));
                _f12111 = *$tmp2112;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12111));
            }
            }
            else {
            panda$core$Bit $tmp2113 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 36 }));
            if ($tmp2113.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2115 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f02114 = *$tmp2115;
                org$pandalanguage$pandac$ASTNode** $tmp2117 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 16));
                _f12116 = *$tmp2117;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12116));
            }
            }
            else {
            panda$core$Bit $tmp2118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 37 }));
            if ($tmp2118.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2120 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f02119 = *$tmp2120;
            }
            }
            else {
            panda$core$Bit $tmp2121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 38 }));
            if ($tmp2121.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2123 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f02122 = *$tmp2123;
                panda$core$String** $tmp2125 = ((panda$core$String**) ((char*) $match$5_11853->$data + 16));
                _f12124 = *$tmp2125;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12124));
            }
            }
            else {
            panda$core$Bit $tmp2126 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp2126.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2128 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f02127 = *$tmp2128;
            }
            }
            else {
            panda$core$Bit $tmp2129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 40 }));
            if ($tmp2129.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2131 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f02130 = *$tmp2131;
                panda$collections$ImmutableArray** $tmp2133 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11853->$data + 16));
                _f12132 = *$tmp2133;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12132));
            }
            }
            else {
            panda$core$Bit $tmp2134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 41 }));
            if ($tmp2134.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2136 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f02135 = *$tmp2136;
                panda$collections$ImmutableArray** $tmp2138 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11853->$data + 16));
                _f12137 = *$tmp2138;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12137));
            }
            }
            else {
            panda$core$Bit $tmp2139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 42 }));
            if ($tmp2139.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2141 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f02140 = *$tmp2141;
                panda$core$String** $tmp2143 = ((panda$core$String**) ((char*) $match$5_11853->$data + 16));
                _f12142 = *$tmp2143;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12142));
            }
            }
            else {
            panda$core$Bit $tmp2144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 43 }));
            if ($tmp2144.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2146 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f02145 = *$tmp2146;
                panda$collections$ImmutableArray** $tmp2148 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11853->$data + 16));
                _f12147 = *$tmp2148;
                org$pandalanguage$pandac$ASTNode** $tmp2150 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 24));
                _f22149 = *$tmp2150;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12147));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22149));
            }
            }
            else {
            panda$core$Bit $tmp2151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 44 }));
            if ($tmp2151.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2153 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f02152 = *$tmp2153;
                panda$core$String** $tmp2155 = ((panda$core$String**) ((char*) $match$5_11853->$data + 16));
                _f12154 = *$tmp2155;
                org$pandalanguage$pandac$ASTNode** $tmp2157 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 24));
                _f22156 = *$tmp2157;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12154));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22156));
            }
            }
            else {
            panda$core$Bit $tmp2158 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 45 }));
            if ($tmp2158.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2160 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f02159 = *$tmp2160;
                panda$collections$ImmutableArray** $tmp2162 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11853->$data + 16));
                _f12161 = *$tmp2162;
                org$pandalanguage$pandac$ASTNode** $tmp2164 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 24));
                _f22163 = *$tmp2164;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12161));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22163));
            }
            }
            else {
            panda$core$Bit $tmp2165 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 46 }));
            if ($tmp2165.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2167 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f02166 = *$tmp2167;
                panda$core$String** $tmp2169 = ((panda$core$String**) ((char*) $match$5_11853->$data + 16));
                _f12168 = *$tmp2169;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12168));
            }
            }
            else {
            panda$core$Bit $tmp2170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 47 }));
            if ($tmp2170.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2172 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f02171 = *$tmp2172;
                org$pandalanguage$pandac$Variable$Kind* $tmp2174 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_11853->$data + 16));
                _f12173 = *$tmp2174;
                panda$collections$ImmutableArray** $tmp2176 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11853->$data + 24));
                _f22175 = *$tmp2176;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22175));
            }
            }
            else {
            panda$core$Bit $tmp2177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 48 }));
            if ($tmp2177.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2179 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f02178 = *$tmp2179;
                panda$collections$ImmutableArray** $tmp2181 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11853->$data + 16));
                _f12180 = *$tmp2181;
                panda$collections$ImmutableArray** $tmp2183 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11853->$data + 24));
                _f22182 = *$tmp2183;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12180));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22182));
            }
            }
            else {
            panda$core$Bit $tmp2184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11853->$rawValue, ((panda$core$Int64) { 49 }));
            if ($tmp2184.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2186 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11853->$data + 0));
                _f02185 = *$tmp2186;
                panda$core$String** $tmp2188 = ((panda$core$String**) ((char*) $match$5_11853->$data + 16));
                _f12187 = *$tmp2188;
                org$pandalanguage$pandac$ASTNode** $tmp2190 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11853->$data + 24));
                _f22189 = *$tmp2190;
                panda$collections$ImmutableArray** $tmp2192 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11853->$data + 32));
                _f32191 = *$tmp2192;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12187));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22189));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32191));
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
        }
        $tmp1852 = -1;
        goto $l1850;
        $l1850:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1854));
        switch ($tmp1852) {
            case -1: goto $l2193;
        }
        $l2193:;
    }
    $tmp1849 = -1;
    goto $l1847;
    $l1847:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp1849) {
        case -1: goto $l2194;
    }
    $l2194:;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$core$String* $tmp2196;
    panda$core$String* $tmp2199;
    org$pandalanguage$pandac$ASTNode* $tmp2200;
    org$pandalanguage$pandac$ASTNode* $tmp2203;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2195 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2195 = p_f0;
    {
        panda$core$String** $tmp2197 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2196 = *$tmp2197;
        panda$core$String** $tmp2198 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2199 = p_f1;
        *$tmp2198 = $tmp2199;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2199));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2196));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2201 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2200 = *$tmp2201;
        org$pandalanguage$pandac$ASTNode** $tmp2202 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2203 = p_f2;
        *$tmp2202 = $tmp2203;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2203));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2200));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2205;
    org$pandalanguage$pandac$ASTNode* $tmp2208;
    org$pandalanguage$pandac$ASTNode* $tmp2209;
    org$pandalanguage$pandac$ASTNode* $tmp2212;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2204 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2204 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2206 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2205 = *$tmp2206;
        org$pandalanguage$pandac$ASTNode** $tmp2207 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2208 = p_f1;
        *$tmp2207 = $tmp2208;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2208));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2205));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2210 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2209 = *$tmp2210;
        org$pandalanguage$pandac$ASTNode** $tmp2211 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2212 = p_f2;
        *$tmp2211 = $tmp2212;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2212));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2209));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    org$pandalanguage$pandac$ASTNode* $tmp2214;
    org$pandalanguage$pandac$ASTNode* $tmp2217;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2213 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2213 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2215 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2214 = *$tmp2215;
        org$pandalanguage$pandac$ASTNode** $tmp2216 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2217 = p_f1;
        *$tmp2216 = $tmp2217;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2217));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2214));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2218 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2218 = p_f0;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$parser$Token$Kind p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2220;
    org$pandalanguage$pandac$ASTNode* $tmp2223;
    org$pandalanguage$pandac$ASTNode* $tmp2225;
    org$pandalanguage$pandac$ASTNode* $tmp2228;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2219 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2219 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2221 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2220 = *$tmp2221;
        org$pandalanguage$pandac$ASTNode** $tmp2222 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2223 = p_f1;
        *$tmp2222 = $tmp2223;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2223));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2220));
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2224 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 24));
    *$tmp2224 = p_f2;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2226 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2225 = *$tmp2226;
        org$pandalanguage$pandac$ASTNode** $tmp2227 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2228 = p_f3;
        *$tmp2227 = $tmp2228;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2228));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2225));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Bit p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2229 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2229 = p_f0;
    panda$core$Bit* $tmp2230 = ((panda$core$Bit*) ((char*) self->$data + 16));
    *$tmp2230 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    panda$collections$ImmutableArray* $tmp2232;
    panda$collections$ImmutableArray* $tmp2235;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2231 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2231 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2233 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2232 = *$tmp2233;
        panda$collections$ImmutableArray** $tmp2234 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2235 = p_f1;
        *$tmp2234 = $tmp2235;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2235));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2232));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp2237;
    panda$core$String* $tmp2240;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2236 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2236 = p_f0;
    {
        panda$core$String** $tmp2238 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2237 = *$tmp2238;
        panda$core$String** $tmp2239 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2240 = p_f1;
        *$tmp2239 = $tmp2240;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2240));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2237));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2242;
    org$pandalanguage$pandac$ASTNode* $tmp2245;
    panda$collections$ImmutableArray* $tmp2246;
    panda$collections$ImmutableArray* $tmp2249;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2241 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2241 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2243 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2242 = *$tmp2243;
        org$pandalanguage$pandac$ASTNode** $tmp2244 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2245 = p_f1;
        *$tmp2244 = $tmp2245;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2245));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2242));
    }
    {
        panda$collections$ImmutableArray** $tmp2247 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2246 = *$tmp2247;
        panda$collections$ImmutableArray** $tmp2248 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2249 = p_f2;
        *$tmp2248 = $tmp2249;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2249));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2246));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2251;
    org$pandalanguage$pandac$ASTNode* $tmp2254;
    panda$core$String* $tmp2255;
    panda$core$String* $tmp2258;
    panda$collections$ImmutableArray* $tmp2259;
    panda$collections$ImmutableArray* $tmp2262;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2250 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2250 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2252 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2251 = *$tmp2252;
        org$pandalanguage$pandac$ASTNode** $tmp2253 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2254 = p_f1;
        *$tmp2253 = $tmp2254;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2254));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2251));
    }
    {
        panda$core$String** $tmp2256 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2255 = *$tmp2256;
        panda$core$String** $tmp2257 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2258 = p_f2;
        *$tmp2257 = $tmp2258;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2258));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2255));
    }
    {
        panda$collections$ImmutableArray** $tmp2260 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2259 = *$tmp2260;
        panda$collections$ImmutableArray** $tmp2261 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2262 = p_f3;
        *$tmp2261 = $tmp2262;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2262));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2259));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2264;
    org$pandalanguage$pandac$ASTNode* $tmp2267;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2268;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2271;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2263 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2263 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2265 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2264 = *$tmp2265;
        org$pandalanguage$pandac$ASTNode** $tmp2266 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2267 = p_f1;
        *$tmp2266 = $tmp2267;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2267));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2264));
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp2269 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp2268 = *$tmp2269;
        org$pandalanguage$pandac$ChoiceEntry** $tmp2270 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp2271 = p_f2;
        *$tmp2270 = $tmp2271;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2271));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2268));
    }
    panda$core$Int64* $tmp2272 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp2272 = p_f3;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ClassDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, panda$collections$ImmutableArray* p_f6, panda$collections$ImmutableArray* p_f7) {
    org$pandalanguage$pandac$ASTNode* $tmp2274;
    org$pandalanguage$pandac$ASTNode* $tmp2277;
    panda$collections$ImmutableArray* $tmp2278;
    panda$collections$ImmutableArray* $tmp2281;
    panda$core$String* $tmp2283;
    panda$core$String* $tmp2286;
    panda$collections$ImmutableArray* $tmp2287;
    panda$collections$ImmutableArray* $tmp2290;
    panda$collections$ImmutableArray* $tmp2291;
    panda$collections$ImmutableArray* $tmp2294;
    panda$collections$ImmutableArray* $tmp2295;
    panda$collections$ImmutableArray* $tmp2298;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2273 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2273 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2275 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2274 = *$tmp2275;
        org$pandalanguage$pandac$ASTNode** $tmp2276 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2277 = p_f1;
        *$tmp2276 = $tmp2277;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2277));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2274));
    }
    {
        panda$collections$ImmutableArray** $tmp2279 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2278 = *$tmp2279;
        panda$collections$ImmutableArray** $tmp2280 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2281 = p_f2;
        *$tmp2280 = $tmp2281;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2281));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2278));
    }
    org$pandalanguage$pandac$ClassDecl$Kind* $tmp2282 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) self->$data + 32));
    *$tmp2282 = p_f3;
    {
        panda$core$String** $tmp2284 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2283 = *$tmp2284;
        panda$core$String** $tmp2285 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2286 = p_f4;
        *$tmp2285 = $tmp2286;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2286));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2283));
    }
    {
        panda$collections$ImmutableArray** $tmp2288 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2287 = *$tmp2288;
        panda$collections$ImmutableArray** $tmp2289 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2290 = p_f5;
        *$tmp2289 = $tmp2290;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2290));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2287));
    }
    {
        panda$collections$ImmutableArray** $tmp2292 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2291 = *$tmp2292;
        panda$collections$ImmutableArray** $tmp2293 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2294 = p_f6;
        *$tmp2293 = $tmp2294;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2294));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2291));
    }
    {
        panda$collections$ImmutableArray** $tmp2296 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2295 = *$tmp2296;
        panda$collections$ImmutableArray** $tmp2297 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2298 = p_f7;
        *$tmp2297 = $tmp2298;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2298));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2295));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    panda$core$String* $tmp2300;
    panda$core$String* $tmp2303;
    panda$collections$ImmutableArray* $tmp2304;
    panda$collections$ImmutableArray* $tmp2307;
    org$pandalanguage$pandac$ASTNode* $tmp2308;
    org$pandalanguage$pandac$ASTNode* $tmp2311;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2299 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2299 = p_f0;
    {
        panda$core$String** $tmp2301 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2300 = *$tmp2301;
        panda$core$String** $tmp2302 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2303 = p_f1;
        *$tmp2302 = $tmp2303;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2303));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2300));
    }
    {
        panda$collections$ImmutableArray** $tmp2305 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2304 = *$tmp2305;
        panda$collections$ImmutableArray** $tmp2306 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2307 = p_f2;
        *$tmp2306 = $tmp2307;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2307));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2304));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2309 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2308 = *$tmp2309;
        org$pandalanguage$pandac$ASTNode** $tmp2310 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2311 = p_f3;
        *$tmp2310 = $tmp2311;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2311));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2308));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2313;
    org$pandalanguage$pandac$ASTNode* $tmp2316;
    panda$core$String* $tmp2317;
    panda$core$String* $tmp2320;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2312 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2312 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2314 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2313 = *$tmp2314;
        org$pandalanguage$pandac$ASTNode** $tmp2315 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2316 = p_f1;
        *$tmp2315 = $tmp2316;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2316));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2313));
    }
    {
        panda$core$String** $tmp2318 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2317 = *$tmp2318;
        panda$core$String** $tmp2319 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2320 = p_f2;
        *$tmp2319 = $tmp2320;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2320));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2317));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2322;
    org$pandalanguage$pandac$ASTNode* $tmp2325;
    panda$collections$ImmutableArray* $tmp2326;
    panda$collections$ImmutableArray* $tmp2329;
    org$pandalanguage$pandac$ASTNode* $tmp2330;
    org$pandalanguage$pandac$ASTNode* $tmp2333;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2321 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2321 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2323 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2322 = *$tmp2323;
        org$pandalanguage$pandac$ASTNode** $tmp2324 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2325 = p_f1;
        *$tmp2324 = $tmp2325;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2325));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2322));
    }
    {
        panda$collections$ImmutableArray** $tmp2327 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2326 = *$tmp2327;
        panda$collections$ImmutableArray** $tmp2328 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2329 = p_f2;
        *$tmp2328 = $tmp2329;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2329));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2326));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2331 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2330 = *$tmp2331;
        org$pandalanguage$pandac$ASTNode** $tmp2332 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2333 = p_f3;
        *$tmp2332 = $tmp2333;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2333));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2330));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, panda$collections$ImmutableArray* p_f0) {
    panda$collections$ImmutableArray* $tmp2334;
    panda$collections$ImmutableArray* $tmp2337;
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableArray** $tmp2335 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp2334 = *$tmp2335;
        panda$collections$ImmutableArray** $tmp2336 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp2337 = p_f0;
        *$tmp2336 = $tmp2337;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2337));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2334));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, org$pandalanguage$pandac$ASTNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    panda$core$String* $tmp2339;
    panda$core$String* $tmp2342;
    org$pandalanguage$pandac$ASTNode* $tmp2343;
    org$pandalanguage$pandac$ASTNode* $tmp2346;
    org$pandalanguage$pandac$ASTNode* $tmp2347;
    org$pandalanguage$pandac$ASTNode* $tmp2350;
    panda$collections$ImmutableArray* $tmp2351;
    panda$collections$ImmutableArray* $tmp2354;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2338 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2338 = p_f0;
    {
        panda$core$String** $tmp2340 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2339 = *$tmp2340;
        panda$core$String** $tmp2341 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2342 = p_f1;
        *$tmp2341 = $tmp2342;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2342));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2339));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2344 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2343 = *$tmp2344;
        org$pandalanguage$pandac$ASTNode** $tmp2345 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2346 = p_f2;
        *$tmp2345 = $tmp2346;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2346));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2343));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2348 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2347 = *$tmp2348;
        org$pandalanguage$pandac$ASTNode** $tmp2349 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2350 = p_f3;
        *$tmp2349 = $tmp2350;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2350));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2347));
    }
    {
        panda$collections$ImmutableArray** $tmp2352 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp2351 = *$tmp2352;
        panda$collections$ImmutableArray** $tmp2353 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp2354 = p_f4;
        *$tmp2353 = $tmp2354;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2354));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2351));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp2356;
    panda$core$String* $tmp2359;
    panda$collections$ImmutableArray* $tmp2360;
    panda$collections$ImmutableArray* $tmp2363;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2355 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2355 = p_f0;
    {
        panda$core$String** $tmp2357 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2356 = *$tmp2357;
        panda$core$String** $tmp2358 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2359 = p_f1;
        *$tmp2358 = $tmp2359;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2359));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2356));
    }
    {
        panda$collections$ImmutableArray** $tmp2361 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2360 = *$tmp2361;
        panda$collections$ImmutableArray** $tmp2362 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2363 = p_f2;
        *$tmp2362 = $tmp2363;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2363));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2360));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp2365;
    panda$core$String* $tmp2368;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2364 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2364 = p_f0;
    {
        panda$core$String** $tmp2366 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2365 = *$tmp2366;
        panda$core$String** $tmp2367 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2368 = p_f1;
        *$tmp2367 = $tmp2368;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2368));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2365));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2370;
    org$pandalanguage$pandac$ASTNode* $tmp2373;
    panda$collections$ImmutableArray* $tmp2374;
    panda$collections$ImmutableArray* $tmp2377;
    org$pandalanguage$pandac$ASTNode* $tmp2378;
    org$pandalanguage$pandac$ASTNode* $tmp2381;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2369 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2369 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2371 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2370 = *$tmp2371;
        org$pandalanguage$pandac$ASTNode** $tmp2372 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2373 = p_f1;
        *$tmp2372 = $tmp2373;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2373));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2370));
    }
    {
        panda$collections$ImmutableArray** $tmp2375 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2374 = *$tmp2375;
        panda$collections$ImmutableArray** $tmp2376 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2377 = p_f2;
        *$tmp2376 = $tmp2377;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2377));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2374));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2379 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2378 = *$tmp2379;
        org$pandalanguage$pandac$ASTNode** $tmp2380 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2381 = p_f3;
        *$tmp2380 = $tmp2381;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2381));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2378));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$UInt64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2382 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2382 = p_f0;
    panda$core$UInt64* $tmp2383 = ((panda$core$UInt64*) ((char*) self->$data + 16));
    *$tmp2383 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0) {
    org$pandalanguage$pandac$IRNode* $tmp2384;
    org$pandalanguage$pandac$IRNode* $tmp2387;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp2385 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp2384 = *$tmp2385;
        org$pandalanguage$pandac$IRNode** $tmp2386 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp2387 = p_f0;
        *$tmp2386 = $tmp2387;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2387));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2384));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp2389;
    panda$core$String* $tmp2392;
    panda$collections$ImmutableArray* $tmp2393;
    panda$collections$ImmutableArray* $tmp2396;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2388 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2388 = p_f0;
    {
        panda$core$String** $tmp2390 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2389 = *$tmp2390;
        panda$core$String** $tmp2391 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2392 = p_f1;
        *$tmp2391 = $tmp2392;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2392));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2389));
    }
    {
        panda$collections$ImmutableArray** $tmp2394 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2393 = *$tmp2394;
        panda$collections$ImmutableArray** $tmp2395 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2396 = p_f2;
        *$tmp2395 = $tmp2396;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2396));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2393));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2398;
    org$pandalanguage$pandac$ASTNode* $tmp2401;
    panda$collections$ImmutableArray* $tmp2402;
    panda$collections$ImmutableArray* $tmp2405;
    panda$collections$ImmutableArray* $tmp2406;
    panda$collections$ImmutableArray* $tmp2409;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2397 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2397 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2399 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2398 = *$tmp2399;
        org$pandalanguage$pandac$ASTNode** $tmp2400 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2401 = p_f1;
        *$tmp2400 = $tmp2401;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2401));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2398));
    }
    {
        panda$collections$ImmutableArray** $tmp2403 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2402 = *$tmp2403;
        panda$collections$ImmutableArray** $tmp2404 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2405 = p_f2;
        *$tmp2404 = $tmp2405;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2405));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2402));
    }
    {
        panda$collections$ImmutableArray** $tmp2407 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2406 = *$tmp2407;
        panda$collections$ImmutableArray** $tmp2408 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2409 = p_f3;
        *$tmp2408 = $tmp2409;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2409));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2406));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$MethodDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, org$pandalanguage$pandac$ASTNode* p_f6, panda$collections$ImmutableArray* p_f7) {
    org$pandalanguage$pandac$ASTNode* $tmp2411;
    org$pandalanguage$pandac$ASTNode* $tmp2414;
    panda$collections$ImmutableArray* $tmp2415;
    panda$collections$ImmutableArray* $tmp2418;
    panda$core$String* $tmp2420;
    panda$core$String* $tmp2423;
    panda$collections$ImmutableArray* $tmp2424;
    panda$collections$ImmutableArray* $tmp2427;
    org$pandalanguage$pandac$ASTNode* $tmp2428;
    org$pandalanguage$pandac$ASTNode* $tmp2431;
    panda$collections$ImmutableArray* $tmp2432;
    panda$collections$ImmutableArray* $tmp2435;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2410 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2410 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2412 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2411 = *$tmp2412;
        org$pandalanguage$pandac$ASTNode** $tmp2413 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2414 = p_f1;
        *$tmp2413 = $tmp2414;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2414));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2411));
    }
    {
        panda$collections$ImmutableArray** $tmp2416 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2415 = *$tmp2416;
        panda$collections$ImmutableArray** $tmp2417 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2418 = p_f2;
        *$tmp2417 = $tmp2418;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2418));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2415));
    }
    org$pandalanguage$pandac$MethodDecl$Kind* $tmp2419 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) self->$data + 32));
    *$tmp2419 = p_f3;
    {
        panda$core$String** $tmp2421 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2420 = *$tmp2421;
        panda$core$String** $tmp2422 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2423 = p_f4;
        *$tmp2422 = $tmp2423;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2423));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2420));
    }
    {
        panda$collections$ImmutableArray** $tmp2425 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2424 = *$tmp2425;
        panda$collections$ImmutableArray** $tmp2426 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2427 = p_f5;
        *$tmp2426 = $tmp2427;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2427));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2424));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2429 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 56));
        $tmp2428 = *$tmp2429;
        org$pandalanguage$pandac$ASTNode** $tmp2430 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 56));
        $tmp2431 = p_f6;
        *$tmp2430 = $tmp2431;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2431));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2428));
    }
    {
        panda$collections$ImmutableArray** $tmp2433 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2432 = *$tmp2433;
        panda$collections$ImmutableArray** $tmp2434 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2435 = p_f7;
        *$tmp2434 = $tmp2435;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2435));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2432));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    panda$collections$ImmutableArray* $tmp2438;
    panda$collections$ImmutableArray* $tmp2441;
    org$pandalanguage$pandac$ASTNode* $tmp2442;
    org$pandalanguage$pandac$ASTNode* $tmp2445;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2436 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2436 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2437 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp2437 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp2439 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2438 = *$tmp2439;
        panda$collections$ImmutableArray** $tmp2440 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2441 = p_f2;
        *$tmp2440 = $tmp2441;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2441));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2438));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2443 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2442 = *$tmp2443;
        org$pandalanguage$pandac$ASTNode** $tmp2444 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2445 = p_f3;
        *$tmp2444 = $tmp2445;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2445));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2442));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$core$String* $tmp2447;
    panda$core$String* $tmp2450;
    org$pandalanguage$pandac$ASTNode* $tmp2451;
    org$pandalanguage$pandac$ASTNode* $tmp2454;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2446 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2446 = p_f0;
    {
        panda$core$String** $tmp2448 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2447 = *$tmp2448;
        panda$core$String** $tmp2449 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2450 = p_f1;
        *$tmp2449 = $tmp2450;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2450));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2447));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2452 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2451 = *$tmp2452;
        org$pandalanguage$pandac$ASTNode** $tmp2453 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2454 = p_f2;
        *$tmp2453 = $tmp2454;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2454));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2451));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2457;
    org$pandalanguage$pandac$ASTNode* $tmp2460;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2455 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2455 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2456 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp2456 = p_f1;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2458 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2457 = *$tmp2458;
        org$pandalanguage$pandac$ASTNode** $tmp2459 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2460 = p_f2;
        *$tmp2459 = $tmp2460;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2460));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2457));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$ASTNode* p_f4) {
    org$pandalanguage$pandac$ASTNode* $tmp2462;
    org$pandalanguage$pandac$ASTNode* $tmp2465;
    org$pandalanguage$pandac$ASTNode* $tmp2466;
    org$pandalanguage$pandac$ASTNode* $tmp2469;
    org$pandalanguage$pandac$ASTNode* $tmp2471;
    org$pandalanguage$pandac$ASTNode* $tmp2474;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2461 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2461 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2463 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2462 = *$tmp2463;
        org$pandalanguage$pandac$ASTNode** $tmp2464 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2465 = p_f1;
        *$tmp2464 = $tmp2465;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2465));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2462));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2467 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2466 = *$tmp2467;
        org$pandalanguage$pandac$ASTNode** $tmp2468 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2469 = p_f2;
        *$tmp2468 = $tmp2469;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2469));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2466));
    }
    panda$core$Bit* $tmp2470 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp2470 = p_f3;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2472 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        $tmp2471 = *$tmp2472;
        org$pandalanguage$pandac$ASTNode** $tmp2473 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        $tmp2474 = p_f4;
        *$tmp2473 = $tmp2474;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2474));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2471));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Real64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2475 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2475 = p_f0;
    panda$core$Real64* $tmp2476 = ((panda$core$Real64*) ((char*) self->$data + 16));
    *$tmp2476 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    org$pandalanguage$pandac$ASTNode* $tmp2478;
    org$pandalanguage$pandac$ASTNode* $tmp2481;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2477 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2477 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2479 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2478 = *$tmp2479;
        org$pandalanguage$pandac$ASTNode** $tmp2480 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2481 = p_f1;
        *$tmp2480 = $tmp2481;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2481));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2478));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$collections$ImmutableArray* $tmp2483;
    panda$collections$ImmutableArray* $tmp2486;
    org$pandalanguage$pandac$ASTNode* $tmp2487;
    org$pandalanguage$pandac$ASTNode* $tmp2490;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2482 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2482 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2484 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2483 = *$tmp2484;
        panda$collections$ImmutableArray** $tmp2485 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2486 = p_f1;
        *$tmp2485 = $tmp2486;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2486));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2483));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2488 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2487 = *$tmp2488;
        org$pandalanguage$pandac$ASTNode** $tmp2489 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2490 = p_f2;
        *$tmp2489 = $tmp2490;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2490));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2487));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp2493;
    panda$collections$ImmutableArray* $tmp2496;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2491 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2491 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp2492 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp2492 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp2494 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2493 = *$tmp2494;
        panda$collections$ImmutableArray** $tmp2495 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2496 = p_f2;
        *$tmp2495 = $tmp2496;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2496));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2493));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp2498;
    panda$collections$ImmutableArray* $tmp2501;
    panda$collections$ImmutableArray* $tmp2502;
    panda$collections$ImmutableArray* $tmp2505;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2497 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2497 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2499 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2498 = *$tmp2499;
        panda$collections$ImmutableArray** $tmp2500 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2501 = p_f1;
        *$tmp2500 = $tmp2501;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2501));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2498));
    }
    {
        panda$collections$ImmutableArray** $tmp2503 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2502 = *$tmp2503;
        panda$collections$ImmutableArray** $tmp2504 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2505 = p_f2;
        *$tmp2504 = $tmp2505;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2505));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2502));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    panda$core$String* $tmp2507;
    panda$core$String* $tmp2510;
    org$pandalanguage$pandac$ASTNode* $tmp2511;
    org$pandalanguage$pandac$ASTNode* $tmp2514;
    panda$collections$ImmutableArray* $tmp2515;
    panda$collections$ImmutableArray* $tmp2518;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2506 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2506 = p_f0;
    {
        panda$core$String** $tmp2508 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2507 = *$tmp2508;
        panda$core$String** $tmp2509 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2510 = p_f1;
        *$tmp2509 = $tmp2510;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2510));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2507));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2512 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2511 = *$tmp2512;
        org$pandalanguage$pandac$ASTNode** $tmp2513 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2514 = p_f2;
        *$tmp2513 = $tmp2514;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2514));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2511));
    }
    {
        panda$collections$ImmutableArray** $tmp2516 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2515 = *$tmp2516;
        panda$collections$ImmutableArray** $tmp2517 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2518 = p_f3;
        *$tmp2517 = $tmp2518;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2518));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2515));
    }
}






