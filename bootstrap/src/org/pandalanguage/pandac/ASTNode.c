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
typedef panda$collections$Iterator* (*$fn1231)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1238)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1249)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1268)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1279)(panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn1299)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1306)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1317)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1370)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1452)(panda$core$Object*);
typedef panda$core$String* (*$fn1554)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1571)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1619)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1643)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1683)(panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn1716)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1723)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1734)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1757)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1764)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1775)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1822)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1829)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1840)(panda$collections$Iterator*);

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
static panda$core$String $s1221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s1260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s1264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1320 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static panda$core$String $s1351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static panda$core$String $s1355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static panda$core$String $s1359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static panda$core$String $s1366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x29", 2, 14282, NULL };
static panda$core$String $s1404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s1412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s1433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s1478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s1480 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s1503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1505 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1515 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s1517 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1522 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s1527 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s1535 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s1541 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s1550 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1557 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1567 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1574 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1595 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1598 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1622 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static panda$core$String $s1625 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1639 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static panda$core$String $s1649 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1673 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s1675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s1677 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1679 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s1704 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s1707 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1741 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1744 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1778 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1806 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1810 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s1812 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1843 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

org$pandalanguage$pandac$Position org$pandalanguage$pandac$ASTNode$position$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$86_95 = NULL;
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
        $match$86_95 = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Bit $tmp7 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp7.value) {
        {
            org$pandalanguage$pandac$Position* $tmp9 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position8 = *$tmp9;
            $returnValue10 = position8;
            $tmp4 = 0;
            goto $l2;
            $l11:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp13 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp13.value) {
        {
            org$pandalanguage$pandac$Position* $tmp15 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position14 = *$tmp15;
            $returnValue10 = position14;
            $tmp4 = 1;
            goto $l2;
            $l16:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp18 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp18.value) {
        {
            org$pandalanguage$pandac$Position* $tmp20 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position19 = *$tmp20;
            $returnValue10 = position19;
            $tmp4 = 2;
            goto $l2;
            $l21:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp23 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp23.value) {
        {
            org$pandalanguage$pandac$Position* $tmp25 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position24 = *$tmp25;
            $returnValue10 = position24;
            $tmp4 = 3;
            goto $l2;
            $l26:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp28 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp28.value) {
        {
            org$pandalanguage$pandac$Position* $tmp30 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position29 = *$tmp30;
            $returnValue10 = position29;
            $tmp4 = 4;
            goto $l2;
            $l31:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp33 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp33.value) {
        {
            org$pandalanguage$pandac$Position* $tmp35 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position34 = *$tmp35;
            $returnValue10 = position34;
            $tmp4 = 5;
            goto $l2;
            $l36:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp38 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp38.value) {
        {
            org$pandalanguage$pandac$Position* $tmp40 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position39 = *$tmp40;
            $returnValue10 = position39;
            $tmp4 = 6;
            goto $l2;
            $l41:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp43 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp43.value) {
        {
            org$pandalanguage$pandac$Position* $tmp45 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position44 = *$tmp45;
            $returnValue10 = position44;
            $tmp4 = 7;
            goto $l2;
            $l46:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp48 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp48.value) {
        {
            org$pandalanguage$pandac$Position* $tmp50 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position49 = *$tmp50;
            $returnValue10 = position49;
            $tmp4 = 8;
            goto $l2;
            $l51:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp53 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp53.value) {
        {
            org$pandalanguage$pandac$Position* $tmp55 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position54 = *$tmp55;
            $returnValue10 = position54;
            $tmp4 = 9;
            goto $l2;
            $l56:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp58 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp58.value) {
        {
            org$pandalanguage$pandac$Position* $tmp60 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position59 = *$tmp60;
            $returnValue10 = position59;
            $tmp4 = 10;
            goto $l2;
            $l61:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp63 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp63.value) {
        {
            org$pandalanguage$pandac$Position* $tmp65 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position64 = *$tmp65;
            $returnValue10 = position64;
            $tmp4 = 11;
            goto $l2;
            $l66:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp68 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp68.value) {
        {
            org$pandalanguage$pandac$Position* $tmp70 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position69 = *$tmp70;
            $returnValue10 = position69;
            $tmp4 = 12;
            goto $l2;
            $l71:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp73 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp73.value) {
        {
            org$pandalanguage$pandac$Position* $tmp75 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position74 = *$tmp75;
            $returnValue10 = position74;
            $tmp4 = 13;
            goto $l2;
            $l76:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp78 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp78.value) {
        {
            org$pandalanguage$pandac$Position* $tmp80 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position79 = *$tmp80;
            $returnValue10 = position79;
            $tmp4 = 14;
            goto $l2;
            $l81:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp83 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp83.value) {
        {
            org$pandalanguage$pandac$Position* $tmp85 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position84 = *$tmp85;
            $returnValue10 = position84;
            $tmp4 = 15;
            goto $l2;
            $l86:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp88 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp88.value) {
        {
            org$pandalanguage$pandac$Position* $tmp90 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position89 = *$tmp90;
            $returnValue10 = position89;
            $tmp4 = 16;
            goto $l2;
            $l91:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp93 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 17 }));
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
        panda$core$Bit $tmp97 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp97.value) {
        {
            org$pandalanguage$pandac$Position* $tmp99 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position98 = *$tmp99;
            $returnValue10 = position98;
            $tmp4 = 18;
            goto $l2;
            $l100:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp102.value) {
        {
            org$pandalanguage$pandac$Position* $tmp104 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position103 = *$tmp104;
            $returnValue10 = position103;
            $tmp4 = 19;
            goto $l2;
            $l105:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp107.value) {
        {
            org$pandalanguage$pandac$Position* $tmp109 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position108 = *$tmp109;
            $returnValue10 = position108;
            $tmp4 = 20;
            goto $l2;
            $l110:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp112.value) {
        {
            org$pandalanguage$pandac$Position* $tmp114 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position113 = *$tmp114;
            $returnValue10 = position113;
            $tmp4 = 21;
            goto $l2;
            $l115:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp117.value) {
        {
            org$pandalanguage$pandac$Position* $tmp119 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position118 = *$tmp119;
            $returnValue10 = position118;
            $tmp4 = 22;
            goto $l2;
            $l120:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp122.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp124 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$86_95->$data + 0));
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
        panda$core$Bit $tmp129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp129.value) {
        {
            org$pandalanguage$pandac$Position* $tmp131 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position130 = *$tmp131;
            $returnValue10 = position130;
            $tmp4 = 24;
            goto $l2;
            $l132:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp134.value) {
        {
            org$pandalanguage$pandac$Position* $tmp136 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position135 = *$tmp136;
            $returnValue10 = position135;
            $tmp4 = 25;
            goto $l2;
            $l137:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp139.value) {
        {
            org$pandalanguage$pandac$Position* $tmp141 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position140 = *$tmp141;
            $returnValue10 = position140;
            $tmp4 = 26;
            goto $l2;
            $l142:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp144.value) {
        {
            org$pandalanguage$pandac$Position* $tmp146 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position145 = *$tmp146;
            $returnValue10 = position145;
            $tmp4 = 27;
            goto $l2;
            $l147:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp149.value) {
        {
            org$pandalanguage$pandac$Position* $tmp151 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position150 = *$tmp151;
            $returnValue10 = position150;
            $tmp4 = 28;
            goto $l2;
            $l152:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp154.value) {
        {
            org$pandalanguage$pandac$Position* $tmp156 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position155 = *$tmp156;
            $returnValue10 = position155;
            $tmp4 = 29;
            goto $l2;
            $l157:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp159.value) {
        {
            org$pandalanguage$pandac$Position* $tmp161 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position160 = *$tmp161;
            $returnValue10 = position160;
            $tmp4 = 30;
            goto $l2;
            $l162:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp164.value) {
        {
            org$pandalanguage$pandac$Position* $tmp166 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position165 = *$tmp166;
            $returnValue10 = position165;
            $tmp4 = 31;
            goto $l2;
            $l167:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp169.value) {
        {
            org$pandalanguage$pandac$Position* $tmp171 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position170 = *$tmp171;
            $returnValue10 = position170;
            $tmp4 = 32;
            goto $l2;
            $l172:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp174.value) {
        {
            org$pandalanguage$pandac$Position* $tmp176 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position175 = *$tmp176;
            $returnValue10 = position175;
            $tmp4 = 33;
            goto $l2;
            $l177:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp179.value) {
        {
            org$pandalanguage$pandac$Position* $tmp181 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position180 = *$tmp181;
            $returnValue10 = position180;
            $tmp4 = 34;
            goto $l2;
            $l182:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp184.value) {
        {
            org$pandalanguage$pandac$Position* $tmp186 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position185 = *$tmp186;
            $returnValue10 = position185;
            $tmp4 = 35;
            goto $l2;
            $l187:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp189.value) {
        {
            org$pandalanguage$pandac$Position* $tmp191 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position190 = *$tmp191;
            $returnValue10 = position190;
            $tmp4 = 36;
            goto $l2;
            $l192:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp194.value) {
        {
            org$pandalanguage$pandac$Position* $tmp196 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position195 = *$tmp196;
            $returnValue10 = position195;
            $tmp4 = 37;
            goto $l2;
            $l197:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp199.value) {
        {
            org$pandalanguage$pandac$Position* $tmp201 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position200 = *$tmp201;
            $returnValue10 = position200;
            $tmp4 = 38;
            goto $l2;
            $l202:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp204.value) {
        {
            org$pandalanguage$pandac$Position* $tmp206 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position205 = *$tmp206;
            $returnValue10 = position205;
            $tmp4 = 39;
            goto $l2;
            $l207:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp209.value) {
        {
            org$pandalanguage$pandac$Position* $tmp211 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position210 = *$tmp211;
            $returnValue10 = position210;
            $tmp4 = 40;
            goto $l2;
            $l212:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp214.value) {
        {
            org$pandalanguage$pandac$Position* $tmp216 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position215 = *$tmp216;
            $returnValue10 = position215;
            $tmp4 = 41;
            goto $l2;
            $l217:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp219.value) {
        {
            org$pandalanguage$pandac$Position* $tmp221 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position220 = *$tmp221;
            $returnValue10 = position220;
            $tmp4 = 42;
            goto $l2;
            $l222:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp224.value) {
        {
            org$pandalanguage$pandac$Position* $tmp226 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position225 = *$tmp226;
            $returnValue10 = position225;
            $tmp4 = 43;
            goto $l2;
            $l227:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp229.value) {
        {
            org$pandalanguage$pandac$Position* $tmp231 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position230 = *$tmp231;
            $returnValue10 = position230;
            $tmp4 = 44;
            goto $l2;
            $l232:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp234.value) {
        {
            org$pandalanguage$pandac$Position* $tmp236 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position235 = *$tmp236;
            $returnValue10 = position235;
            $tmp4 = 45;
            goto $l2;
            $l237:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp239.value) {
        {
            org$pandalanguage$pandac$Position* $tmp241 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position240 = *$tmp241;
            $returnValue10 = position240;
            $tmp4 = 46;
            goto $l2;
            $l242:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp244.value) {
        {
            org$pandalanguage$pandac$Position* $tmp246 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position245 = *$tmp246;
            $returnValue10 = position245;
            $tmp4 = 47;
            goto $l2;
            $l247:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp249.value) {
        {
            org$pandalanguage$pandac$Position* $tmp251 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position250 = *$tmp251;
            $returnValue10 = position250;
            $tmp4 = 48;
            goto $l2;
            $l252:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, ((panda$core$Int64) { 49 }));
        if ($tmp254.value) {
        {
            org$pandalanguage$pandac$Position* $tmp256 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
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
    org$pandalanguage$pandac$ASTNode* $match$193_9263 = NULL;
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
    panda$collections$Iterator* Iter$214$17382 = NULL;
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
    panda$collections$Iterator* Iter$240$17555 = NULL;
    panda$collections$Iterator* $tmp556;
    panda$collections$Iterator* $tmp557;
    org$pandalanguage$pandac$ASTNode* a573 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp574;
    panda$core$Object* $tmp575;
    panda$core$String* $tmp580;
    org$pandalanguage$pandac$ClassDecl$Kind $match$243_17585;
    panda$core$String* $tmp592;
    panda$core$String* $tmp593;
    panda$core$String* $tmp595;
    panda$core$String* $tmp603;
    panda$core$String* $tmp604;
    panda$core$String* $tmp606;
    panda$collections$Iterator* Iter$256$17618 = NULL;
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
    panda$collections$Iterator* Iter$277$17720 = NULL;
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
    panda$collections$Iterator* Iter$289$17802 = NULL;
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
    panda$collections$Iterator* Iter$296$17852 = NULL;
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
    panda$collections$Iterator* Iter$306$17922 = NULL;
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
    panda$collections$Iterator* Iter$317$171012 = NULL;
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
    panda$collections$Iterator* Iter$335$171094 = NULL;
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
    panda$collections$Iterator* Iter$342$171155 = NULL;
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
    panda$collections$ImmutableArray* generics1205 = NULL;
    panda$collections$ImmutableArray* parameters1207 = NULL;
    org$pandalanguage$pandac$ASTNode* returnType1209 = NULL;
    panda$collections$ImmutableArray* statements1211 = NULL;
    panda$core$MutableString* result1216 = NULL;
    panda$core$MutableString* $tmp1217;
    panda$core$MutableString* $tmp1218;
    panda$core$String* $tmp1220;
    panda$collections$Iterator* Iter$355$171226 = NULL;
    panda$collections$Iterator* $tmp1227;
    panda$collections$Iterator* $tmp1228;
    org$pandalanguage$pandac$ASTNode* a1244 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1245;
    panda$core$Object* $tmp1246;
    panda$core$String* $tmp1251;
    org$pandalanguage$pandac$MethodDecl$Kind $match$358_171256;
    panda$core$String* $tmp1262;
    panda$core$String* $tmp1263;
    panda$core$String* $tmp1265;
    panda$core$String* $tmp1273;
    panda$core$String* $tmp1274;
    panda$core$String* $tmp1276;
    panda$core$String* $tmp1284;
    panda$core$String* $tmp1285;
    panda$collections$Iterator* Iter$373$211294 = NULL;
    panda$collections$Iterator* $tmp1295;
    panda$collections$Iterator* $tmp1296;
    org$pandalanguage$pandac$ASTNode* s1312 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1313;
    panda$core$Object* $tmp1314;
    panda$core$String* $tmp1319;
    panda$core$Char8 $tmp1324;
    panda$core$String* $tmp1325;
    panda$core$String* $tmp1326;
    org$pandalanguage$pandac$parser$Token$Kind kind1333;
    panda$collections$ImmutableArray* paramTypes1335 = NULL;
    org$pandalanguage$pandac$ASTNode* returnType1337 = NULL;
    panda$core$String* yield1342 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $match$381_171343;
    panda$core$String* $tmp1345;
    panda$core$String* $tmp1346;
    panda$core$String* $tmp1349;
    panda$core$String* $tmp1350;
    panda$core$String* $tmp1353;
    panda$core$String* $tmp1354;
    panda$core$String* $tmp1357;
    panda$core$String* $tmp1358;
    panda$core$String* partial1360 = NULL;
    panda$core$String* $tmp1361;
    panda$core$String* $tmp1362;
    panda$core$String* $tmp1363;
    panda$core$String* $tmp1364;
    panda$core$String* $tmp1365;
    panda$core$String* $tmp1367;
    panda$core$String* $tmp1378;
    panda$core$String* $tmp1379;
    panda$core$String* $tmp1380;
    panda$core$String* $tmp1381;
    panda$core$String* $tmp1382;
    panda$core$String* $tmp1392;
    panda$core$String* $tmp1393;
    panda$core$String* $tmp1394;
    panda$core$String* $tmp1403;
    org$pandalanguage$pandac$ASTNode* base1408 = NULL;
    panda$core$String* $tmp1410;
    panda$core$String* $tmp1411;
    panda$core$String* name1417 = NULL;
    panda$core$String* $tmp1419;
    panda$core$String* name1423 = NULL;
    org$pandalanguage$pandac$ASTNode* type1425 = NULL;
    panda$core$String* $tmp1427;
    panda$core$String* $tmp1428;
    panda$core$String* $tmp1429;
    panda$core$String* $tmp1430;
    panda$core$String* $tmp1431;
    org$pandalanguage$pandac$parser$Token$Kind kind1441;
    org$pandalanguage$pandac$ASTNode* base1443 = NULL;
    panda$core$String* $tmp1445;
    panda$core$String* $tmp1446;
    panda$core$String* $tmp1447;
    panda$core$String* $tmp1448;
    panda$core$String* $tmp1449;
    panda$core$Object* $tmp1450;
    org$pandalanguage$pandac$ASTNode* start1462 = NULL;
    org$pandalanguage$pandac$ASTNode* end1464 = NULL;
    panda$core$Bit inclusive1466;
    org$pandalanguage$pandac$ASTNode* step1468 = NULL;
    panda$core$MutableString* result1473 = NULL;
    panda$core$MutableString* $tmp1474;
    panda$core$MutableString* $tmp1475;
    panda$core$String* $tmp1479;
    panda$core$String* $tmp1482;
    panda$core$String* $tmp1483;
    panda$core$Real64 value1490;
    panda$core$String* $tmp1492;
    panda$core$String* $tmp1493;
    panda$core$String* src1498 = NULL;
    panda$core$String* $tmp1500;
    panda$core$String* $tmp1501;
    panda$core$String* $tmp1502;
    org$pandalanguage$pandac$ASTNode* value1510 = NULL;
    panda$core$String* $tmp1512;
    panda$core$String* $tmp1513;
    panda$core$String* $tmp1514;
    panda$core$String* $tmp1521;
    panda$core$String* $tmp1526;
    panda$core$String* str1531 = NULL;
    panda$core$String* $tmp1533;
    panda$core$String* $tmp1534;
    panda$core$String* $tmp1540;
    panda$collections$ImmutableArray* arguments1545 = NULL;
    panda$core$String* $tmp1547;
    panda$core$String* $tmp1548;
    panda$core$String* $tmp1549;
    panda$core$String* $tmp1551;
    panda$collections$ImmutableArray* parameters1562 = NULL;
    panda$core$String* $tmp1564;
    panda$core$String* $tmp1565;
    panda$core$String* $tmp1566;
    panda$core$String* $tmp1568;
    panda$core$String* name1579 = NULL;
    panda$core$String* $tmp1581;
    panda$core$String* name1585 = NULL;
    org$pandalanguage$pandac$ASTNode* type1587 = NULL;
    panda$core$String* $tmp1589;
    panda$core$String* $tmp1590;
    panda$core$String* $tmp1591;
    panda$core$String* $tmp1592;
    panda$core$String* $tmp1593;
    panda$core$String* $tmp1602;
    panda$collections$ImmutableArray* parameters1606 = NULL;
    org$pandalanguage$pandac$ASTNode* body1608 = NULL;
    panda$core$String* $tmp1610;
    panda$core$String* $tmp1611;
    panda$core$String* $tmp1612;
    panda$core$String* $tmp1613;
    panda$core$String* $tmp1614;
    panda$core$String* $tmp1616;
    panda$collections$ImmutableArray* parameters1630 = NULL;
    org$pandalanguage$pandac$ASTNode* body1632 = NULL;
    panda$core$String* $tmp1634;
    panda$core$String* $tmp1635;
    panda$core$String* $tmp1636;
    panda$core$String* $tmp1637;
    panda$core$String* $tmp1638;
    panda$core$String* $tmp1640;
    panda$core$String* name1654 = NULL;
    panda$core$String* $tmp1656;
    org$pandalanguage$pandac$Variable$Kind kind1660;
    panda$collections$ImmutableArray* decls1662 = NULL;
    panda$core$MutableString* result1667 = NULL;
    panda$core$MutableString* $tmp1668;
    panda$core$MutableString* $tmp1669;
    org$pandalanguage$pandac$Variable$Kind $match$458_171671;
    panda$core$String* $tmp1680;
    panda$core$String* $tmp1685;
    panda$core$String* $tmp1686;
    panda$collections$ImmutableArray* tests1693 = NULL;
    panda$collections$ImmutableArray* statements1695 = NULL;
    panda$core$MutableString* result1700 = NULL;
    panda$core$MutableString* $tmp1701;
    panda$core$MutableString* $tmp1702;
    panda$core$String* separator1705 = NULL;
    panda$core$String* $tmp1706;
    panda$collections$Iterator* Iter$469$171711 = NULL;
    panda$collections$Iterator* $tmp1712;
    panda$collections$Iterator* $tmp1713;
    org$pandalanguage$pandac$ASTNode* t1729 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1730;
    panda$core$Object* $tmp1731;
    panda$core$String* $tmp1736;
    panda$core$String* $tmp1737;
    panda$core$String* $tmp1738;
    panda$core$String* $tmp1739;
    panda$core$Char8 $tmp1748;
    panda$collections$Iterator* Iter$473$171752 = NULL;
    panda$collections$Iterator* $tmp1753;
    panda$collections$Iterator* $tmp1754;
    org$pandalanguage$pandac$ASTNode* s1770 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1771;
    panda$core$Object* $tmp1772;
    panda$core$String* $tmp1777;
    panda$core$String* $tmp1782;
    panda$core$String* $tmp1783;
    panda$core$String* label1790 = NULL;
    org$pandalanguage$pandac$ASTNode* test1792 = NULL;
    panda$collections$ImmutableArray* statements1794 = NULL;
    panda$core$MutableString* result1799 = NULL;
    panda$core$MutableString* $tmp1800;
    panda$core$MutableString* $tmp1801;
    panda$core$String* $tmp1803;
    panda$core$String* $tmp1804;
    panda$core$String* $tmp1808;
    panda$core$String* $tmp1809;
    panda$collections$Iterator* Iter$483$171817 = NULL;
    panda$collections$Iterator* $tmp1818;
    panda$collections$Iterator* $tmp1819;
    org$pandalanguage$pandac$ASTNode* s1835 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1836;
    panda$core$Object* $tmp1837;
    panda$core$String* $tmp1842;
    panda$core$Char8 $tmp1847;
    panda$core$String* $tmp1848;
    panda$core$String* $tmp1849;
    int $tmp262;
    {
        $tmp264 = self;
        $match$193_9263 = $tmp264;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp264));
        panda$core$Bit $tmp265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp265.value) {
        {
            panda$core$String** $tmp267 = ((panda$core$String**) ((char*) $match$193_9263->$data + 16));
            name266 = *$tmp267;
            org$pandalanguage$pandac$ASTNode** $tmp269 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 24));
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
        panda$core$Bit $tmp287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp287.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp289 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 16));
            test288 = *$tmp289;
            org$pandalanguage$pandac$ASTNode** $tmp291 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 24));
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
        panda$core$Bit $tmp315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp315.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp317 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 16));
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
        panda$core$Bit $tmp327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 3 }));
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
        panda$core$Bit $tmp332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp332.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp334 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 16));
            left333 = *$tmp334;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp336 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$193_9263->$data + 24));
            op335 = *$tmp336;
            org$pandalanguage$pandac$ASTNode** $tmp338 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 32));
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
        panda$core$Bit $tmp360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp360.value) {
        {
            panda$core$Bit* $tmp362 = ((panda$core$Bit*) ((char*) $match$193_9263->$data + 16));
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
        panda$core$Bit $tmp368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp368.value) {
        {
            panda$collections$ImmutableArray** $tmp370 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9263->$data + 16));
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
                        Iter$214$17382 = $tmp383;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp383));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp384));
                        $l389:;
                        ITable* $tmp392 = Iter$214$17382->$class->itable;
                        while ($tmp392->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp392 = $tmp392->next;
                        }
                        $fn394 $tmp393 = $tmp392->methods[0];
                        panda$core$Bit $tmp395 = $tmp393(Iter$214$17382);
                        panda$core$Bit $tmp396 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp395);
                        bool $tmp391 = $tmp396.value;
                        if (!$tmp391) goto $l390;
                        {
                            int $tmp399;
                            {
                                ITable* $tmp403 = Iter$214$17382->$class->itable;
                                while ($tmp403->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp403 = $tmp403->next;
                                }
                                $fn405 $tmp404 = $tmp403->methods[1];
                                panda$core$Object* $tmp406 = $tmp404(Iter$214$17382);
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$214$17382));
                    Iter$214$17382 = NULL;
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
        panda$core$Bit $tmp420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp420.value) {
        {
            panda$core$String** $tmp422 = ((panda$core$String**) ((char*) $match$193_9263->$data + 16));
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
        panda$core$Bit $tmp436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp436.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp438 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 16));
            target437 = *$tmp438;
            panda$collections$ImmutableArray** $tmp440 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9263->$data + 24));
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
        panda$core$Bit $tmp460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp460.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp462 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 16));
            dc461 = *$tmp462;
            panda$core$String** $tmp464 = ((panda$core$String**) ((char*) $match$193_9263->$data + 24));
            name463 = *$tmp464;
            panda$collections$ImmutableArray** $tmp466 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9263->$data + 32));
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
        panda$core$Bit $tmp499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp499.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp501 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 16));
            base500 = *$tmp501;
            org$pandalanguage$pandac$ChoiceEntry** $tmp503 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$193_9263->$data + 24));
            ce502 = *$tmp503;
            panda$core$Int64* $tmp505 = ((panda$core$Int64*) ((char*) $match$193_9263->$data + 32));
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
        panda$core$Bit $tmp527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp527.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp529 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 16));
            dc528 = *$tmp529;
            panda$collections$ImmutableArray** $tmp531 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9263->$data + 24));
            annotations530 = *$tmp531;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp533 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$193_9263->$data + 32));
            kind532 = *$tmp533;
            panda$core$String** $tmp535 = ((panda$core$String**) ((char*) $match$193_9263->$data + 40));
            name534 = *$tmp535;
            panda$collections$ImmutableArray** $tmp537 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9263->$data + 48));
            generics536 = *$tmp537;
            panda$collections$ImmutableArray** $tmp539 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9263->$data + 56));
            supertypes538 = *$tmp539;
            panda$collections$ImmutableArray** $tmp541 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9263->$data + 64));
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
                        Iter$240$17555 = $tmp556;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp556));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp557));
                        $l562:;
                        ITable* $tmp565 = Iter$240$17555->$class->itable;
                        while ($tmp565->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp565 = $tmp565->next;
                        }
                        $fn567 $tmp566 = $tmp565->methods[0];
                        panda$core$Bit $tmp568 = $tmp566(Iter$240$17555);
                        panda$core$Bit $tmp569 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp568);
                        bool $tmp564 = $tmp569.value;
                        if (!$tmp564) goto $l563;
                        {
                            int $tmp572;
                            {
                                ITable* $tmp576 = Iter$240$17555->$class->itable;
                                while ($tmp576->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp576 = $tmp576->next;
                                }
                                $fn578 $tmp577 = $tmp576->methods[1];
                                panda$core$Object* $tmp579 = $tmp577(Iter$240$17555);
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$240$17555));
                    Iter$240$17555 = NULL;
                    switch ($tmp554) {
                        case -1: goto $l584;
                    }
                    $l584:;
                }
                {
                    $match$243_17585 = kind532;
                    panda$core$Bit $tmp586 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_17585.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp586.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result545, &$s587);
                    }
                    }
                    else {
                    panda$core$Bit $tmp588 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_17585.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp588.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result545, &$s589);
                    }
                    }
                    else {
                    panda$core$Bit $tmp590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_17585.$rawValue, ((panda$core$Int64) { 2 }));
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
                        Iter$256$17618 = $tmp619;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp619));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp620));
                        $l625:;
                        ITable* $tmp628 = Iter$256$17618->$class->itable;
                        while ($tmp628->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp628 = $tmp628->next;
                        }
                        $fn630 $tmp629 = $tmp628->methods[0];
                        panda$core$Bit $tmp631 = $tmp629(Iter$256$17618);
                        panda$core$Bit $tmp632 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp631);
                        bool $tmp627 = $tmp632.value;
                        if (!$tmp627) goto $l626;
                        {
                            int $tmp635;
                            {
                                ITable* $tmp639 = Iter$256$17618->$class->itable;
                                while ($tmp639->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp639 = $tmp639->next;
                                }
                                $fn641 $tmp640 = $tmp639->methods[1];
                                panda$core$Object* $tmp642 = $tmp640(Iter$256$17618);
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$256$17618));
                    Iter$256$17618 = NULL;
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
        panda$core$Bit $tmp656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp656.value) {
        {
            panda$core$String** $tmp658 = ((panda$core$String**) ((char*) $match$193_9263->$data + 16));
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
        panda$core$Bit $tmp672 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp672.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp674 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 16));
            target673 = *$tmp674;
            org$pandalanguage$pandac$ASTNode** $tmp676 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 24));
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
        panda$core$Bit $tmp697 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp697.value) {
        {
            panda$core$String** $tmp699 = ((panda$core$String**) ((char*) $match$193_9263->$data + 16));
            label698 = *$tmp699;
            panda$collections$ImmutableArray** $tmp701 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9263->$data + 24));
            statements700 = *$tmp701;
            org$pandalanguage$pandac$ASTNode** $tmp703 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 32));
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
                        Iter$277$17720 = $tmp721;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp721));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp722));
                        $l727:;
                        ITable* $tmp730 = Iter$277$17720->$class->itable;
                        while ($tmp730->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp730 = $tmp730->next;
                        }
                        $fn732 $tmp731 = $tmp730->methods[0];
                        panda$core$Bit $tmp733 = $tmp731(Iter$277$17720);
                        panda$core$Bit $tmp734 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp733);
                        bool $tmp729 = $tmp734.value;
                        if (!$tmp729) goto $l728;
                        {
                            int $tmp737;
                            {
                                ITable* $tmp741 = Iter$277$17720->$class->itable;
                                while ($tmp741->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp741 = $tmp741->next;
                                }
                                $fn743 $tmp742 = $tmp741->methods[1];
                                panda$core$Object* $tmp744 = $tmp742(Iter$277$17720);
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$277$17720));
                    Iter$277$17720 = NULL;
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
        panda$core$Bit $tmp763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp763.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp765 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 16));
            base764 = *$tmp765;
            panda$core$String** $tmp767 = ((panda$core$String**) ((char*) $match$193_9263->$data + 24));
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
        panda$core$Bit $tmp782 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp782.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp784 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 16));
            dc783 = *$tmp784;
            panda$collections$ImmutableArray** $tmp786 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9263->$data + 24));
            annotations785 = *$tmp786;
            org$pandalanguage$pandac$ASTNode** $tmp788 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 32));
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
                        Iter$289$17802 = $tmp803;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp803));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp804));
                        $l809:;
                        ITable* $tmp812 = Iter$289$17802->$class->itable;
                        while ($tmp812->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp812 = $tmp812->next;
                        }
                        $fn814 $tmp813 = $tmp812->methods[0];
                        panda$core$Bit $tmp815 = $tmp813(Iter$289$17802);
                        panda$core$Bit $tmp816 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp815);
                        bool $tmp811 = $tmp816.value;
                        if (!$tmp811) goto $l810;
                        {
                            int $tmp819;
                            {
                                ITable* $tmp823 = Iter$289$17802->$class->itable;
                                while ($tmp823->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp823 = $tmp823->next;
                                }
                                $fn825 $tmp824 = $tmp823->methods[1];
                                panda$core$Object* $tmp826 = $tmp824(Iter$289$17802);
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$289$17802));
                    Iter$289$17802 = NULL;
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
        panda$core$Bit $tmp839 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp839.value) {
        {
            panda$collections$ImmutableArray** $tmp841 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9263->$data + 0));
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
                        Iter$296$17852 = $tmp853;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp853));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp854));
                        $l859:;
                        ITable* $tmp862 = Iter$296$17852->$class->itable;
                        while ($tmp862->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp862 = $tmp862->next;
                        }
                        $fn864 $tmp863 = $tmp862->methods[0];
                        panda$core$Bit $tmp865 = $tmp863(Iter$296$17852);
                        panda$core$Bit $tmp866 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp865);
                        bool $tmp861 = $tmp866.value;
                        if (!$tmp861) goto $l860;
                        {
                            int $tmp869;
                            {
                                ITable* $tmp873 = Iter$296$17852->$class->itable;
                                while ($tmp873->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp873 = $tmp873->next;
                                }
                                $fn875 $tmp874 = $tmp873->methods[1];
                                panda$core$Object* $tmp876 = $tmp874(Iter$296$17852);
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$296$17852));
                    Iter$296$17852 = NULL;
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
        panda$core$Bit $tmp889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp889.value) {
        {
            panda$core$String** $tmp891 = ((panda$core$String**) ((char*) $match$193_9263->$data + 16));
            label890 = *$tmp891;
            org$pandalanguage$pandac$ASTNode** $tmp893 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 24));
            target892 = *$tmp893;
            org$pandalanguage$pandac$ASTNode** $tmp895 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 32));
            list894 = *$tmp895;
            panda$collections$ImmutableArray** $tmp897 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9263->$data + 40));
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
                        Iter$306$17922 = $tmp923;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp923));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp924));
                        $l929:;
                        ITable* $tmp932 = Iter$306$17922->$class->itable;
                        while ($tmp932->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp932 = $tmp932->next;
                        }
                        $fn934 $tmp933 = $tmp932->methods[0];
                        panda$core$Bit $tmp935 = $tmp933(Iter$306$17922);
                        panda$core$Bit $tmp936 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp935);
                        bool $tmp931 = $tmp936.value;
                        if (!$tmp931) goto $l930;
                        {
                            int $tmp939;
                            {
                                ITable* $tmp943 = Iter$306$17922->$class->itable;
                                while ($tmp943->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp943 = $tmp943->next;
                                }
                                $fn945 $tmp944 = $tmp943->methods[1];
                                panda$core$Object* $tmp946 = $tmp944(Iter$306$17922);
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$306$17922));
                    Iter$306$17922 = NULL;
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
        panda$core$Bit $tmp960 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp960.value) {
        {
            panda$core$String** $tmp962 = ((panda$core$String**) ((char*) $match$193_9263->$data + 16));
            name961 = *$tmp962;
            panda$collections$ImmutableArray** $tmp964 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9263->$data + 24));
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
        panda$core$Bit $tmp983 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp983.value) {
        {
            panda$core$String** $tmp985 = ((panda$core$String**) ((char*) $match$193_9263->$data + 16));
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
        panda$core$Bit $tmp989 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp989.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp991 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 16));
            test990 = *$tmp991;
            panda$collections$ImmutableArray** $tmp993 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9263->$data + 24));
            ifTrue992 = *$tmp993;
            org$pandalanguage$pandac$ASTNode** $tmp995 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 32));
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
                        Iter$317$171012 = $tmp1013;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1013));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1014));
                        $l1019:;
                        ITable* $tmp1022 = Iter$317$171012->$class->itable;
                        while ($tmp1022->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1022 = $tmp1022->next;
                        }
                        $fn1024 $tmp1023 = $tmp1022->methods[0];
                        panda$core$Bit $tmp1025 = $tmp1023(Iter$317$171012);
                        panda$core$Bit $tmp1026 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1025);
                        bool $tmp1021 = $tmp1026.value;
                        if (!$tmp1021) goto $l1020;
                        {
                            int $tmp1029;
                            {
                                ITable* $tmp1033 = Iter$317$171012->$class->itable;
                                while ($tmp1033->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1033 = $tmp1033->next;
                                }
                                $fn1035 $tmp1034 = $tmp1033->methods[1];
                                panda$core$Object* $tmp1036 = $tmp1034(Iter$317$171012);
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$317$171012));
                    Iter$317$171012 = NULL;
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
        panda$core$Bit $tmp1056 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1056.value) {
        {
            panda$core$UInt64* $tmp1058 = ((panda$core$UInt64*) ((char*) $match$193_9263->$data + 16));
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
        panda$core$Bit $tmp1064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1064.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1066 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$193_9263->$data + 0));
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
        panda$core$Bit $tmp1073 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1073.value) {
        {
            panda$core$String** $tmp1075 = ((panda$core$String**) ((char*) $match$193_9263->$data + 16));
            label1074 = *$tmp1075;
            panda$collections$ImmutableArray** $tmp1077 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9263->$data + 24));
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
                        Iter$335$171094 = $tmp1095;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1095));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1096));
                        $l1101:;
                        ITable* $tmp1104 = Iter$335$171094->$class->itable;
                        while ($tmp1104->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1104 = $tmp1104->next;
                        }
                        $fn1106 $tmp1105 = $tmp1104->methods[0];
                        panda$core$Bit $tmp1107 = $tmp1105(Iter$335$171094);
                        panda$core$Bit $tmp1108 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1107);
                        bool $tmp1103 = $tmp1108.value;
                        if (!$tmp1103) goto $l1102;
                        {
                            int $tmp1111;
                            {
                                ITable* $tmp1115 = Iter$335$171094->$class->itable;
                                while ($tmp1115->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1115 = $tmp1115->next;
                                }
                                $fn1117 $tmp1116 = $tmp1115->methods[1];
                                panda$core$Object* $tmp1118 = $tmp1116(Iter$335$171094);
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$335$171094));
                    Iter$335$171094 = NULL;
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
        panda$core$Bit $tmp1132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1132.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1134 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 16));
            value1133 = *$tmp1134;
            panda$collections$ImmutableArray** $tmp1136 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9263->$data + 24));
            whens1135 = *$tmp1136;
            panda$collections$ImmutableArray** $tmp1138 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9263->$data + 32));
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
                        Iter$342$171155 = $tmp1156;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1156));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1157));
                        $l1162:;
                        ITable* $tmp1165 = Iter$342$171155->$class->itable;
                        while ($tmp1165->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1165 = $tmp1165->next;
                        }
                        $fn1167 $tmp1166 = $tmp1165->methods[0];
                        panda$core$Bit $tmp1168 = $tmp1166(Iter$342$171155);
                        panda$core$Bit $tmp1169 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1168);
                        bool $tmp1164 = $tmp1169.value;
                        if (!$tmp1164) goto $l1163;
                        {
                            int $tmp1172;
                            {
                                ITable* $tmp1176 = Iter$342$171155->$class->itable;
                                while ($tmp1176->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1176 = $tmp1176->next;
                                }
                                $fn1178 $tmp1177 = $tmp1176->methods[1];
                                panda$core$Object* $tmp1179 = $tmp1177(Iter$342$171155);
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$342$171155));
                    Iter$342$171155 = NULL;
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
        panda$core$Bit $tmp1196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1196.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1198 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 16));
            dc1197 = *$tmp1198;
            panda$collections$ImmutableArray** $tmp1200 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9263->$data + 24));
            annotations1199 = *$tmp1200;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1202 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$193_9263->$data + 32));
            kind1201 = *$tmp1202;
            panda$core$String** $tmp1204 = ((panda$core$String**) ((char*) $match$193_9263->$data + 40));
            name1203 = *$tmp1204;
            panda$collections$ImmutableArray** $tmp1206 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9263->$data + 48));
            generics1205 = *$tmp1206;
            panda$collections$ImmutableArray** $tmp1208 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9263->$data + 56));
            parameters1207 = *$tmp1208;
            org$pandalanguage$pandac$ASTNode** $tmp1210 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 64));
            returnType1209 = *$tmp1210;
            panda$collections$ImmutableArray** $tmp1212 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9263->$data + 72));
            statements1211 = *$tmp1212;
            int $tmp1215;
            {
                panda$core$MutableString* $tmp1219 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1219);
                $tmp1218 = $tmp1219;
                $tmp1217 = $tmp1218;
                result1216 = $tmp1217;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1217));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1218));
                if (((panda$core$Bit) { dc1197 != NULL }).value) {
                {
                    panda$core$String* $tmp1222 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc1197), &$s1221);
                    $tmp1220 = $tmp1222;
                    panda$core$MutableString$append$panda$core$String(result1216, $tmp1220);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1220));
                }
                }
                {
                    int $tmp1225;
                    {
                        ITable* $tmp1229 = ((panda$collections$Iterable*) annotations1199)->$class->itable;
                        while ($tmp1229->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1229 = $tmp1229->next;
                        }
                        $fn1231 $tmp1230 = $tmp1229->methods[0];
                        panda$collections$Iterator* $tmp1232 = $tmp1230(((panda$collections$Iterable*) annotations1199));
                        $tmp1228 = $tmp1232;
                        $tmp1227 = $tmp1228;
                        Iter$355$171226 = $tmp1227;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1227));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1228));
                        $l1233:;
                        ITable* $tmp1236 = Iter$355$171226->$class->itable;
                        while ($tmp1236->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1236 = $tmp1236->next;
                        }
                        $fn1238 $tmp1237 = $tmp1236->methods[0];
                        panda$core$Bit $tmp1239 = $tmp1237(Iter$355$171226);
                        panda$core$Bit $tmp1240 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1239);
                        bool $tmp1235 = $tmp1240.value;
                        if (!$tmp1235) goto $l1234;
                        {
                            int $tmp1243;
                            {
                                ITable* $tmp1247 = Iter$355$171226->$class->itable;
                                while ($tmp1247->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1247 = $tmp1247->next;
                                }
                                $fn1249 $tmp1248 = $tmp1247->methods[1];
                                panda$core$Object* $tmp1250 = $tmp1248(Iter$355$171226);
                                $tmp1246 = $tmp1250;
                                $tmp1245 = ((org$pandalanguage$pandac$ASTNode*) $tmp1246);
                                a1244 = $tmp1245;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1245));
                                panda$core$Panda$unref$panda$core$Object($tmp1246);
                                panda$core$String* $tmp1253 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a1244), &$s1252);
                                $tmp1251 = $tmp1253;
                                panda$core$MutableString$append$panda$core$String(result1216, $tmp1251);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1251));
                            }
                            $tmp1243 = -1;
                            goto $l1241;
                            $l1241:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1244));
                            a1244 = NULL;
                            switch ($tmp1243) {
                                case -1: goto $l1254;
                            }
                            $l1254:;
                        }
                        goto $l1233;
                        $l1234:;
                    }
                    $tmp1225 = -1;
                    goto $l1223;
                    $l1223:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$355$171226));
                    Iter$355$171226 = NULL;
                    switch ($tmp1225) {
                        case -1: goto $l1255;
                    }
                    $l1255:;
                }
                {
                    $match$358_171256 = kind1201;
                    panda$core$Bit $tmp1257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$358_171256.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp1257.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1216, &$s1258);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$358_171256.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp1259.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1216, &$s1260);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$358_171256.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp1261.value) {
                    {
                    }
                    }
                    }
                    }
                }
                panda$core$MutableString$append$panda$core$String(result1216, name1203);
                if (((panda$core$Bit) { generics1205 != NULL }).value) {
                {
                    ITable* $tmp1266 = ((panda$collections$ListView*) generics1205)->$class->itable;
                    while ($tmp1266->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp1266 = $tmp1266->next;
                    }
                    $fn1268 $tmp1267 = $tmp1266->methods[4];
                    panda$core$String* $tmp1269 = $tmp1267(((panda$collections$ListView*) generics1205));
                    $tmp1265 = $tmp1269;
                    panda$core$String* $tmp1270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1264, $tmp1265);
                    $tmp1263 = $tmp1270;
                    panda$core$String* $tmp1272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1263, &$s1271);
                    $tmp1262 = $tmp1272;
                    panda$core$MutableString$append$panda$core$String(result1216, $tmp1262);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1262));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1263));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1265));
                }
                }
                ITable* $tmp1277 = ((panda$collections$ListView*) parameters1207)->$class->itable;
                while ($tmp1277->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1277 = $tmp1277->next;
                }
                $fn1279 $tmp1278 = $tmp1277->methods[4];
                panda$core$String* $tmp1280 = $tmp1278(((panda$collections$ListView*) parameters1207));
                $tmp1276 = $tmp1280;
                panda$core$String* $tmp1281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1275, $tmp1276);
                $tmp1274 = $tmp1281;
                panda$core$String* $tmp1283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1274, &$s1282);
                $tmp1273 = $tmp1283;
                panda$core$MutableString$append$panda$core$String(result1216, $tmp1273);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1273));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1274));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1276));
                if (((panda$core$Bit) { returnType1209 != NULL }).value) {
                {
                    panda$core$String* $tmp1287 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1286, ((panda$core$Object*) returnType1209));
                    $tmp1285 = $tmp1287;
                    panda$core$String* $tmp1289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1285, &$s1288);
                    $tmp1284 = $tmp1289;
                    panda$core$MutableString$append$panda$core$String(result1216, $tmp1284);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1284));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1285));
                }
                }
                if (((panda$core$Bit) { statements1211 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1216, &$s1290);
                    {
                        int $tmp1293;
                        {
                            ITable* $tmp1297 = ((panda$collections$Iterable*) statements1211)->$class->itable;
                            while ($tmp1297->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp1297 = $tmp1297->next;
                            }
                            $fn1299 $tmp1298 = $tmp1297->methods[0];
                            panda$collections$Iterator* $tmp1300 = $tmp1298(((panda$collections$Iterable*) statements1211));
                            $tmp1296 = $tmp1300;
                            $tmp1295 = $tmp1296;
                            Iter$373$211294 = $tmp1295;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1295));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1296));
                            $l1301:;
                            ITable* $tmp1304 = Iter$373$211294->$class->itable;
                            while ($tmp1304->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1304 = $tmp1304->next;
                            }
                            $fn1306 $tmp1305 = $tmp1304->methods[0];
                            panda$core$Bit $tmp1307 = $tmp1305(Iter$373$211294);
                            panda$core$Bit $tmp1308 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1307);
                            bool $tmp1303 = $tmp1308.value;
                            if (!$tmp1303) goto $l1302;
                            {
                                int $tmp1311;
                                {
                                    ITable* $tmp1315 = Iter$373$211294->$class->itable;
                                    while ($tmp1315->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp1315 = $tmp1315->next;
                                    }
                                    $fn1317 $tmp1316 = $tmp1315->methods[1];
                                    panda$core$Object* $tmp1318 = $tmp1316(Iter$373$211294);
                                    $tmp1314 = $tmp1318;
                                    $tmp1313 = ((org$pandalanguage$pandac$ASTNode*) $tmp1314);
                                    s1312 = $tmp1313;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1313));
                                    panda$core$Panda$unref$panda$core$Object($tmp1314);
                                    panda$core$String* $tmp1321 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1312), &$s1320);
                                    $tmp1319 = $tmp1321;
                                    panda$core$MutableString$append$panda$core$String(result1216, $tmp1319);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1319));
                                }
                                $tmp1311 = -1;
                                goto $l1309;
                                $l1309:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1312));
                                s1312 = NULL;
                                switch ($tmp1311) {
                                    case -1: goto $l1322;
                                }
                                $l1322:;
                            }
                            goto $l1301;
                            $l1302:;
                        }
                        $tmp1293 = -1;
                        goto $l1291;
                        $l1291:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$373$211294));
                        Iter$373$211294 = NULL;
                        switch ($tmp1293) {
                            case -1: goto $l1323;
                        }
                        $l1323:;
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp1324, ((panda$core$UInt8) { 125 }));
                    panda$core$MutableString$append$panda$core$Char8(result1216, $tmp1324);
                }
                }
                panda$core$String* $tmp1327 = panda$core$MutableString$finish$R$panda$core$String(result1216);
                $tmp1326 = $tmp1327;
                $tmp1325 = $tmp1326;
                $returnValue270 = $tmp1325;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1325));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1326));
                $tmp1215 = 0;
                goto $l1213;
                $l1328:;
                $tmp262 = 31;
                goto $l260;
                $l1329:;
                return $returnValue270;
            }
            $l1213:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1216));
            result1216 = NULL;
            switch ($tmp1215) {
                case 0: goto $l1328;
            }
            $l1331:;
        }
        }
        else {
        panda$core$Bit $tmp1332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1332.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1334 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$193_9263->$data + 16));
            kind1333 = *$tmp1334;
            panda$collections$ImmutableArray** $tmp1336 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9263->$data + 24));
            paramTypes1335 = *$tmp1336;
            org$pandalanguage$pandac$ASTNode** $tmp1338 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 32));
            returnType1337 = *$tmp1338;
            int $tmp1341;
            {
                memset(&yield1342, 0, sizeof(yield1342));
                {
                    $match$381_171343 = kind1333;
                    panda$core$Bit $tmp1344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381_171343.$rawValue, ((panda$core$Int64) { 90 }));
                    if ($tmp1344.value) {
                    {
                        {
                            $tmp1345 = yield1342;
                            $tmp1346 = &$s1347;
                            yield1342 = $tmp1346;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1346));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1345));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp1348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381_171343.$rawValue, ((panda$core$Int64) { 91 }));
                    if ($tmp1348.value) {
                    {
                        {
                            $tmp1349 = yield1342;
                            $tmp1350 = &$s1351;
                            yield1342 = $tmp1350;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1350));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1349));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp1352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381_171343.$rawValue, ((panda$core$Int64) { 92 }));
                    if ($tmp1352.value) {
                    {
                        {
                            $tmp1353 = yield1342;
                            $tmp1354 = &$s1355;
                            yield1342 = $tmp1354;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1354));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1353));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp1356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381_171343.$rawValue, ((panda$core$Int64) { 93 }));
                    if ($tmp1356.value) {
                    {
                        {
                            $tmp1357 = yield1342;
                            $tmp1358 = &$s1359;
                            yield1342 = $tmp1358;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1358));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1357));
                        }
                    }
                    }
                    }
                    }
                    }
                }
                ITable* $tmp1368 = ((panda$collections$ListView*) paramTypes1335)->$class->itable;
                while ($tmp1368->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1368 = $tmp1368->next;
                }
                $fn1370 $tmp1369 = $tmp1368->methods[4];
                panda$core$String* $tmp1371 = $tmp1369(((panda$collections$ListView*) paramTypes1335));
                $tmp1367 = $tmp1371;
                panda$core$String* $tmp1372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1366, $tmp1367);
                $tmp1365 = $tmp1372;
                panda$core$String* $tmp1374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1365, &$s1373);
                $tmp1364 = $tmp1374;
                panda$core$String* $tmp1375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1364, yield1342);
                $tmp1363 = $tmp1375;
                panda$core$String* $tmp1377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1363, &$s1376);
                $tmp1362 = $tmp1377;
                $tmp1361 = $tmp1362;
                partial1360 = $tmp1361;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1361));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1362));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1363));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1364));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1365));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1367));
                if (((panda$core$Bit) { returnType1337 != NULL }).value) {
                {
                    panda$core$String* $tmp1383 = panda$core$String$convert$R$panda$core$String(partial1360);
                    $tmp1382 = $tmp1383;
                    panda$core$String* $tmp1385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1382, &$s1384);
                    $tmp1381 = $tmp1385;
                    panda$core$String* $tmp1386 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1381, ((panda$core$Object*) returnType1337));
                    $tmp1380 = $tmp1386;
                    panda$core$String* $tmp1388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1380, &$s1387);
                    $tmp1379 = $tmp1388;
                    $tmp1378 = $tmp1379;
                    $returnValue270 = $tmp1378;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1378));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1379));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1380));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1381));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1382));
                    $tmp1341 = 0;
                    goto $l1339;
                    $l1389:;
                    $tmp262 = 32;
                    goto $l260;
                    $l1390:;
                    return $returnValue270;
                }
                }
                panda$core$String* $tmp1395 = panda$core$String$convert$R$panda$core$String(partial1360);
                $tmp1394 = $tmp1395;
                panda$core$String* $tmp1397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1394, &$s1396);
                $tmp1393 = $tmp1397;
                $tmp1392 = $tmp1393;
                $returnValue270 = $tmp1392;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1392));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1393));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1394));
                $tmp1341 = 1;
                goto $l1339;
                $l1398:;
                $tmp262 = 33;
                goto $l260;
                $l1399:;
                return $returnValue270;
            }
            $l1339:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) partial1360));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) yield1342));
            partial1360 = NULL;
            switch ($tmp1341) {
                case 0: goto $l1389;
                case 1: goto $l1398;
            }
            $l1401:;
        }
        }
        else {
        panda$core$Bit $tmp1402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1402.value) {
        {
            $tmp1403 = &$s1404;
            $returnValue270 = $tmp1403;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1403));
            $tmp262 = 34;
            goto $l260;
            $l1405:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1407.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1409 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 16));
            base1408 = *$tmp1409;
            panda$core$String* $tmp1413 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) base1408), &$s1412);
            $tmp1411 = $tmp1413;
            $tmp1410 = $tmp1411;
            $returnValue270 = $tmp1410;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1410));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1411));
            $tmp262 = 35;
            goto $l260;
            $l1414:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1416.value) {
        {
            panda$core$String** $tmp1418 = ((panda$core$String**) ((char*) $match$193_9263->$data + 16));
            name1417 = *$tmp1418;
            $tmp1419 = name1417;
            $returnValue270 = $tmp1419;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1419));
            $tmp262 = 36;
            goto $l260;
            $l1420:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1422 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1422.value) {
        {
            panda$core$String** $tmp1424 = ((panda$core$String**) ((char*) $match$193_9263->$data + 16));
            name1423 = *$tmp1424;
            org$pandalanguage$pandac$ASTNode** $tmp1426 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 24));
            type1425 = *$tmp1426;
            panda$core$String* $tmp1432 = panda$core$String$convert$R$panda$core$String(name1423);
            $tmp1431 = $tmp1432;
            panda$core$String* $tmp1434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1431, &$s1433);
            $tmp1430 = $tmp1434;
            panda$core$String* $tmp1435 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1430, ((panda$core$Object*) type1425));
            $tmp1429 = $tmp1435;
            panda$core$String* $tmp1437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1429, &$s1436);
            $tmp1428 = $tmp1437;
            $tmp1427 = $tmp1428;
            $returnValue270 = $tmp1427;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1427));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1428));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1429));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1430));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1431));
            $tmp262 = 37;
            goto $l260;
            $l1438:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1440.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1442 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$193_9263->$data + 16));
            kind1441 = *$tmp1442;
            org$pandalanguage$pandac$ASTNode** $tmp1444 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 24));
            base1443 = *$tmp1444;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1451;
            $tmp1451 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp1451->value = kind1441;
            $tmp1450 = ((panda$core$Object*) $tmp1451);
            panda$core$String* $tmp1453 = (($fn1452) $tmp1450->$class->vtable[0])($tmp1450);
            $tmp1449 = $tmp1453;
            panda$core$String* $tmp1455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1449, &$s1454);
            $tmp1448 = $tmp1455;
            panda$core$String* $tmp1456 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1448, ((panda$core$Object*) base1443));
            $tmp1447 = $tmp1456;
            panda$core$String* $tmp1458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1447, &$s1457);
            $tmp1446 = $tmp1458;
            $tmp1445 = $tmp1446;
            $returnValue270 = $tmp1445;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1445));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1446));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1447));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1448));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1449));
            panda$core$Panda$unref$panda$core$Object($tmp1450);
            $tmp262 = 38;
            goto $l260;
            $l1459:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1461.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1463 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 16));
            start1462 = *$tmp1463;
            org$pandalanguage$pandac$ASTNode** $tmp1465 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 24));
            end1464 = *$tmp1465;
            panda$core$Bit* $tmp1467 = ((panda$core$Bit*) ((char*) $match$193_9263->$data + 32));
            inclusive1466 = *$tmp1467;
            org$pandalanguage$pandac$ASTNode** $tmp1469 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 33));
            step1468 = *$tmp1469;
            int $tmp1472;
            {
                panda$core$MutableString* $tmp1476 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1476);
                $tmp1475 = $tmp1476;
                $tmp1474 = $tmp1475;
                result1473 = $tmp1474;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1474));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1475));
                if (((panda$core$Bit) { start1462 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result1473, ((panda$core$Object*) start1462));
                }
                }
                if (inclusive1466.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1473, &$s1477);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(result1473, &$s1478);
                }
                }
                if (((panda$core$Bit) { end1464 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result1473, ((panda$core$Object*) end1464));
                }
                }
                if (((panda$core$Bit) { step1468 != NULL }).value) {
                {
                    panda$core$String* $tmp1481 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1480, ((panda$core$Object*) step1468));
                    $tmp1479 = $tmp1481;
                    panda$core$MutableString$append$panda$core$String(result1473, $tmp1479);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1479));
                }
                }
                panda$core$String* $tmp1484 = panda$core$MutableString$finish$R$panda$core$String(result1473);
                $tmp1483 = $tmp1484;
                $tmp1482 = $tmp1483;
                $returnValue270 = $tmp1482;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1482));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1483));
                $tmp1472 = 0;
                goto $l1470;
                $l1485:;
                $tmp262 = 39;
                goto $l260;
                $l1486:;
                return $returnValue270;
            }
            $l1470:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1473));
            result1473 = NULL;
            switch ($tmp1472) {
                case 0: goto $l1485;
            }
            $l1488:;
        }
        }
        else {
        panda$core$Bit $tmp1489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1489.value) {
        {
            panda$core$Real64* $tmp1491 = ((panda$core$Real64*) ((char*) $match$193_9263->$data + 16));
            value1490 = *$tmp1491;
            panda$core$String* $tmp1494 = panda$core$Real64$convert$R$panda$core$String(value1490);
            $tmp1493 = $tmp1494;
            $tmp1492 = $tmp1493;
            $returnValue270 = $tmp1492;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1492));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1493));
            $tmp262 = 40;
            goto $l260;
            $l1495:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1497.value) {
        {
            panda$core$String** $tmp1499 = ((panda$core$String**) ((char*) $match$193_9263->$data + 16));
            src1498 = *$tmp1499;
            panda$core$String* $tmp1504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1503, src1498);
            $tmp1502 = $tmp1504;
            panda$core$String* $tmp1506 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1502, &$s1505);
            $tmp1501 = $tmp1506;
            $tmp1500 = $tmp1501;
            $returnValue270 = $tmp1500;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1500));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1501));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1502));
            $tmp262 = 41;
            goto $l260;
            $l1507:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1509.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1511 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 16));
            value1510 = *$tmp1511;
            if (((panda$core$Bit) { value1510 != NULL }).value) {
            {
                panda$core$String* $tmp1516 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1515, ((panda$core$Object*) value1510));
                $tmp1514 = $tmp1516;
                panda$core$String* $tmp1518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1514, &$s1517);
                $tmp1513 = $tmp1518;
                $tmp1512 = $tmp1513;
                $returnValue270 = $tmp1512;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1512));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1513));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1514));
                $tmp262 = 42;
                goto $l260;
                $l1519:;
                return $returnValue270;
            }
            }
            $tmp1521 = &$s1522;
            $returnValue270 = $tmp1521;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1521));
            $tmp262 = 43;
            goto $l260;
            $l1523:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1525.value) {
        {
            $tmp1526 = &$s1527;
            $returnValue270 = $tmp1526;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1526));
            $tmp262 = 44;
            goto $l260;
            $l1528:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1530.value) {
        {
            panda$core$String** $tmp1532 = ((panda$core$String**) ((char*) $match$193_9263->$data + 16));
            str1531 = *$tmp1532;
            panda$core$String* $tmp1536 = panda$core$String$format$panda$core$String$R$panda$core$String(str1531, &$s1535);
            $tmp1534 = $tmp1536;
            $tmp1533 = $tmp1534;
            $returnValue270 = $tmp1533;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1533));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1534));
            $tmp262 = 45;
            goto $l260;
            $l1537:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1539.value) {
        {
            $tmp1540 = &$s1541;
            $returnValue270 = $tmp1540;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1540));
            $tmp262 = 46;
            goto $l260;
            $l1542:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1544.value) {
        {
            panda$collections$ImmutableArray** $tmp1546 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9263->$data + 16));
            arguments1545 = *$tmp1546;
            ITable* $tmp1552 = ((panda$collections$ListView*) arguments1545)->$class->itable;
            while ($tmp1552->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1552 = $tmp1552->next;
            }
            $fn1554 $tmp1553 = $tmp1552->methods[4];
            panda$core$String* $tmp1555 = $tmp1553(((panda$collections$ListView*) arguments1545));
            $tmp1551 = $tmp1555;
            panda$core$String* $tmp1556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1550, $tmp1551);
            $tmp1549 = $tmp1556;
            panda$core$String* $tmp1558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1549, &$s1557);
            $tmp1548 = $tmp1558;
            $tmp1547 = $tmp1548;
            $returnValue270 = $tmp1547;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1547));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1548));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1549));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1551));
            $tmp262 = 47;
            goto $l260;
            $l1559:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1561 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1561.value) {
        {
            panda$collections$ImmutableArray** $tmp1563 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9263->$data + 16));
            parameters1562 = *$tmp1563;
            ITable* $tmp1569 = ((panda$collections$ListView*) parameters1562)->$class->itable;
            while ($tmp1569->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1569 = $tmp1569->next;
            }
            $fn1571 $tmp1570 = $tmp1569->methods[4];
            panda$core$String* $tmp1572 = $tmp1570(((panda$collections$ListView*) parameters1562));
            $tmp1568 = $tmp1572;
            panda$core$String* $tmp1573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1567, $tmp1568);
            $tmp1566 = $tmp1573;
            panda$core$String* $tmp1575 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1566, &$s1574);
            $tmp1565 = $tmp1575;
            $tmp1564 = $tmp1565;
            $returnValue270 = $tmp1564;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1564));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1565));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1566));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1568));
            $tmp262 = 48;
            goto $l260;
            $l1576:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp1578.value) {
        {
            panda$core$String** $tmp1580 = ((panda$core$String**) ((char*) $match$193_9263->$data + 16));
            name1579 = *$tmp1580;
            $tmp1581 = name1579;
            $returnValue270 = $tmp1581;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1581));
            $tmp262 = 49;
            goto $l260;
            $l1582:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp1584.value) {
        {
            panda$core$String** $tmp1586 = ((panda$core$String**) ((char*) $match$193_9263->$data + 16));
            name1585 = *$tmp1586;
            org$pandalanguage$pandac$ASTNode** $tmp1588 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 24));
            type1587 = *$tmp1588;
            if (((panda$core$Bit) { type1587 != NULL }).value) {
            {
                panda$core$String* $tmp1594 = panda$core$String$convert$R$panda$core$String(name1585);
                $tmp1593 = $tmp1594;
                panda$core$String* $tmp1596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1593, &$s1595);
                $tmp1592 = $tmp1596;
                panda$core$String* $tmp1597 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1592, ((panda$core$Object*) type1587));
                $tmp1591 = $tmp1597;
                panda$core$String* $tmp1599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1591, &$s1598);
                $tmp1590 = $tmp1599;
                $tmp1589 = $tmp1590;
                $returnValue270 = $tmp1589;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1589));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1590));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1591));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1592));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1593));
                $tmp262 = 50;
                goto $l260;
                $l1600:;
                return $returnValue270;
            }
            }
            $tmp1602 = name1585;
            $returnValue270 = $tmp1602;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1602));
            $tmp262 = 51;
            goto $l260;
            $l1603:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1605 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp1605.value) {
        {
            panda$collections$ImmutableArray** $tmp1607 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9263->$data + 16));
            parameters1606 = *$tmp1607;
            org$pandalanguage$pandac$ASTNode** $tmp1609 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 24));
            body1608 = *$tmp1609;
            ITable* $tmp1617 = ((panda$collections$ListView*) parameters1606)->$class->itable;
            while ($tmp1617->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1617 = $tmp1617->next;
            }
            $fn1619 $tmp1618 = $tmp1617->methods[4];
            panda$core$String* $tmp1620 = $tmp1618(((panda$collections$ListView*) parameters1606));
            $tmp1616 = $tmp1620;
            panda$core$String* $tmp1621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1615, $tmp1616);
            $tmp1614 = $tmp1621;
            panda$core$String* $tmp1623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1614, &$s1622);
            $tmp1613 = $tmp1623;
            panda$core$String* $tmp1624 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1613, ((panda$core$Object*) body1608));
            $tmp1612 = $tmp1624;
            panda$core$String* $tmp1626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1612, &$s1625);
            $tmp1611 = $tmp1626;
            $tmp1610 = $tmp1611;
            $returnValue270 = $tmp1610;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1610));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1611));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1612));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1613));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1614));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1616));
            $tmp262 = 52;
            goto $l260;
            $l1627:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp1629.value) {
        {
            panda$collections$ImmutableArray** $tmp1631 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9263->$data + 16));
            parameters1630 = *$tmp1631;
            org$pandalanguage$pandac$ASTNode** $tmp1633 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 24));
            body1632 = *$tmp1633;
            ITable* $tmp1641 = ((panda$collections$ListView*) parameters1630)->$class->itable;
            while ($tmp1641->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1641 = $tmp1641->next;
            }
            $fn1643 $tmp1642 = $tmp1641->methods[4];
            panda$core$String* $tmp1644 = $tmp1642(((panda$collections$ListView*) parameters1630));
            $tmp1640 = $tmp1644;
            panda$core$String* $tmp1645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1639, $tmp1640);
            $tmp1638 = $tmp1645;
            panda$core$String* $tmp1647 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1638, &$s1646);
            $tmp1637 = $tmp1647;
            panda$core$String* $tmp1648 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1637, ((panda$core$Object*) body1632));
            $tmp1636 = $tmp1648;
            panda$core$String* $tmp1650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1636, &$s1649);
            $tmp1635 = $tmp1650;
            $tmp1634 = $tmp1635;
            $returnValue270 = $tmp1634;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1634));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1635));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1636));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1637));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1638));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1640));
            $tmp262 = 53;
            goto $l260;
            $l1651:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp1653.value) {
        {
            panda$core$String** $tmp1655 = ((panda$core$String**) ((char*) $match$193_9263->$data + 16));
            name1654 = *$tmp1655;
            $tmp1656 = name1654;
            $returnValue270 = $tmp1656;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1656));
            $tmp262 = 54;
            goto $l260;
            $l1657:;
            return $returnValue270;
        }
        }
        else {
        panda$core$Bit $tmp1659 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp1659.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp1661 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$193_9263->$data + 16));
            kind1660 = *$tmp1661;
            panda$collections$ImmutableArray** $tmp1663 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9263->$data + 24));
            decls1662 = *$tmp1663;
            int $tmp1666;
            {
                panda$core$MutableString* $tmp1670 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1670);
                $tmp1669 = $tmp1670;
                $tmp1668 = $tmp1669;
                result1667 = $tmp1668;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1668));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1669));
                {
                    $match$458_171671 = kind1660;
                    panda$core$Bit $tmp1672 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$458_171671.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp1672.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1667, &$s1673);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1674 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$458_171671.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp1674.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1667, &$s1675);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$458_171671.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp1676.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1667, &$s1677);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1678 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$458_171671.$rawValue, ((panda$core$Int64) { 3 }));
                    if ($tmp1678.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1667, &$s1679);
                    }
                    }
                    }
                    }
                    }
                }
                ITable* $tmp1681 = ((panda$collections$ListView*) decls1662)->$class->itable;
                while ($tmp1681->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1681 = $tmp1681->next;
                }
                $fn1683 $tmp1682 = $tmp1681->methods[4];
                panda$core$String* $tmp1684 = $tmp1682(((panda$collections$ListView*) decls1662));
                $tmp1680 = $tmp1684;
                panda$core$MutableString$append$panda$core$String(result1667, $tmp1680);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1680));
                panda$core$String* $tmp1687 = panda$core$MutableString$finish$R$panda$core$String(result1667);
                $tmp1686 = $tmp1687;
                $tmp1685 = $tmp1686;
                $returnValue270 = $tmp1685;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1685));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1686));
                $tmp1666 = 0;
                goto $l1664;
                $l1688:;
                $tmp262 = 55;
                goto $l260;
                $l1689:;
                return $returnValue270;
            }
            $l1664:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1667));
            result1667 = NULL;
            switch ($tmp1666) {
                case 0: goto $l1688;
            }
            $l1691:;
        }
        }
        else {
        panda$core$Bit $tmp1692 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp1692.value) {
        {
            panda$collections$ImmutableArray** $tmp1694 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9263->$data + 16));
            tests1693 = *$tmp1694;
            panda$collections$ImmutableArray** $tmp1696 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9263->$data + 24));
            statements1695 = *$tmp1696;
            int $tmp1699;
            {
                panda$core$MutableString* $tmp1703 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1703, &$s1704);
                $tmp1702 = $tmp1703;
                $tmp1701 = $tmp1702;
                result1700 = $tmp1701;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1701));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1702));
                $tmp1706 = &$s1707;
                separator1705 = $tmp1706;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1706));
                {
                    int $tmp1710;
                    {
                        ITable* $tmp1714 = ((panda$collections$Iterable*) tests1693)->$class->itable;
                        while ($tmp1714->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1714 = $tmp1714->next;
                        }
                        $fn1716 $tmp1715 = $tmp1714->methods[0];
                        panda$collections$Iterator* $tmp1717 = $tmp1715(((panda$collections$Iterable*) tests1693));
                        $tmp1713 = $tmp1717;
                        $tmp1712 = $tmp1713;
                        Iter$469$171711 = $tmp1712;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1712));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1713));
                        $l1718:;
                        ITable* $tmp1721 = Iter$469$171711->$class->itable;
                        while ($tmp1721->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1721 = $tmp1721->next;
                        }
                        $fn1723 $tmp1722 = $tmp1721->methods[0];
                        panda$core$Bit $tmp1724 = $tmp1722(Iter$469$171711);
                        panda$core$Bit $tmp1725 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1724);
                        bool $tmp1720 = $tmp1725.value;
                        if (!$tmp1720) goto $l1719;
                        {
                            int $tmp1728;
                            {
                                ITable* $tmp1732 = Iter$469$171711->$class->itable;
                                while ($tmp1732->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1732 = $tmp1732->next;
                                }
                                $fn1734 $tmp1733 = $tmp1732->methods[1];
                                panda$core$Object* $tmp1735 = $tmp1733(Iter$469$171711);
                                $tmp1731 = $tmp1735;
                                $tmp1730 = ((org$pandalanguage$pandac$ASTNode*) $tmp1731);
                                t1729 = $tmp1730;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1730));
                                panda$core$Panda$unref$panda$core$Object($tmp1731);
                                panda$core$String* $tmp1740 = panda$core$String$convert$R$panda$core$String(separator1705);
                                $tmp1739 = $tmp1740;
                                panda$core$String* $tmp1742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1739, &$s1741);
                                $tmp1738 = $tmp1742;
                                panda$core$String* $tmp1743 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1738, ((panda$core$Object*) t1729));
                                $tmp1737 = $tmp1743;
                                panda$core$String* $tmp1745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1737, &$s1744);
                                $tmp1736 = $tmp1745;
                                panda$core$MutableString$append$panda$core$String(result1700, $tmp1736);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1736));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1737));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1738));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1739));
                            }
                            $tmp1728 = -1;
                            goto $l1726;
                            $l1726:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1729));
                            t1729 = NULL;
                            switch ($tmp1728) {
                                case -1: goto $l1746;
                            }
                            $l1746:;
                        }
                        goto $l1718;
                        $l1719:;
                    }
                    $tmp1710 = -1;
                    goto $l1708;
                    $l1708:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$469$171711));
                    Iter$469$171711 = NULL;
                    switch ($tmp1710) {
                        case -1: goto $l1747;
                    }
                    $l1747:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1748, ((panda$core$UInt8) { 58 }));
                panda$core$MutableString$append$panda$core$Char8(result1700, $tmp1748);
                {
                    int $tmp1751;
                    {
                        ITable* $tmp1755 = ((panda$collections$Iterable*) statements1695)->$class->itable;
                        while ($tmp1755->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1755 = $tmp1755->next;
                        }
                        $fn1757 $tmp1756 = $tmp1755->methods[0];
                        panda$collections$Iterator* $tmp1758 = $tmp1756(((panda$collections$Iterable*) statements1695));
                        $tmp1754 = $tmp1758;
                        $tmp1753 = $tmp1754;
                        Iter$473$171752 = $tmp1753;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1753));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1754));
                        $l1759:;
                        ITable* $tmp1762 = Iter$473$171752->$class->itable;
                        while ($tmp1762->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1762 = $tmp1762->next;
                        }
                        $fn1764 $tmp1763 = $tmp1762->methods[0];
                        panda$core$Bit $tmp1765 = $tmp1763(Iter$473$171752);
                        panda$core$Bit $tmp1766 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1765);
                        bool $tmp1761 = $tmp1766.value;
                        if (!$tmp1761) goto $l1760;
                        {
                            int $tmp1769;
                            {
                                ITable* $tmp1773 = Iter$473$171752->$class->itable;
                                while ($tmp1773->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1773 = $tmp1773->next;
                                }
                                $fn1775 $tmp1774 = $tmp1773->methods[1];
                                panda$core$Object* $tmp1776 = $tmp1774(Iter$473$171752);
                                $tmp1772 = $tmp1776;
                                $tmp1771 = ((org$pandalanguage$pandac$ASTNode*) $tmp1772);
                                s1770 = $tmp1771;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1771));
                                panda$core$Panda$unref$panda$core$Object($tmp1772);
                                panda$core$String* $tmp1779 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1778, ((panda$core$Object*) s1770));
                                $tmp1777 = $tmp1779;
                                panda$core$MutableString$append$panda$core$String(result1700, $tmp1777);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1777));
                            }
                            $tmp1769 = -1;
                            goto $l1767;
                            $l1767:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1770));
                            s1770 = NULL;
                            switch ($tmp1769) {
                                case -1: goto $l1780;
                            }
                            $l1780:;
                        }
                        goto $l1759;
                        $l1760:;
                    }
                    $tmp1751 = -1;
                    goto $l1749;
                    $l1749:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$473$171752));
                    Iter$473$171752 = NULL;
                    switch ($tmp1751) {
                        case -1: goto $l1781;
                    }
                    $l1781:;
                }
                panda$core$String* $tmp1784 = panda$core$MutableString$finish$R$panda$core$String(result1700);
                $tmp1783 = $tmp1784;
                $tmp1782 = $tmp1783;
                $returnValue270 = $tmp1782;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1782));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1783));
                $tmp1699 = 0;
                goto $l1697;
                $l1785:;
                $tmp262 = 56;
                goto $l260;
                $l1786:;
                return $returnValue270;
            }
            $l1697:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1705));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1700));
            result1700 = NULL;
            separator1705 = NULL;
            switch ($tmp1699) {
                case 0: goto $l1785;
            }
            $l1788:;
        }
        }
        else {
        panda$core$Bit $tmp1789 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9263->$rawValue, ((panda$core$Int64) { 49 }));
        if ($tmp1789.value) {
        {
            panda$core$String** $tmp1791 = ((panda$core$String**) ((char*) $match$193_9263->$data + 16));
            label1790 = *$tmp1791;
            org$pandalanguage$pandac$ASTNode** $tmp1793 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9263->$data + 24));
            test1792 = *$tmp1793;
            panda$collections$ImmutableArray** $tmp1795 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9263->$data + 32));
            statements1794 = *$tmp1795;
            int $tmp1798;
            {
                panda$core$MutableString* $tmp1802 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1802);
                $tmp1801 = $tmp1802;
                $tmp1800 = $tmp1801;
                result1799 = $tmp1800;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1800));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1801));
                if (((panda$core$Bit) { label1790 != NULL }).value) {
                {
                    panda$core$String* $tmp1805 = panda$core$String$convert$R$panda$core$String(label1790);
                    $tmp1804 = $tmp1805;
                    panda$core$String* $tmp1807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1804, &$s1806);
                    $tmp1803 = $tmp1807;
                    panda$core$MutableString$append$panda$core$String(result1799, $tmp1803);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1803));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1804));
                }
                }
                panda$core$String* $tmp1811 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1810, ((panda$core$Object*) test1792));
                $tmp1809 = $tmp1811;
                panda$core$String* $tmp1813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1809, &$s1812);
                $tmp1808 = $tmp1813;
                panda$core$MutableString$append$panda$core$String(result1799, $tmp1808);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1808));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1809));
                {
                    int $tmp1816;
                    {
                        ITable* $tmp1820 = ((panda$collections$Iterable*) statements1794)->$class->itable;
                        while ($tmp1820->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1820 = $tmp1820->next;
                        }
                        $fn1822 $tmp1821 = $tmp1820->methods[0];
                        panda$collections$Iterator* $tmp1823 = $tmp1821(((panda$collections$Iterable*) statements1794));
                        $tmp1819 = $tmp1823;
                        $tmp1818 = $tmp1819;
                        Iter$483$171817 = $tmp1818;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1818));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1819));
                        $l1824:;
                        ITable* $tmp1827 = Iter$483$171817->$class->itable;
                        while ($tmp1827->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1827 = $tmp1827->next;
                        }
                        $fn1829 $tmp1828 = $tmp1827->methods[0];
                        panda$core$Bit $tmp1830 = $tmp1828(Iter$483$171817);
                        panda$core$Bit $tmp1831 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1830);
                        bool $tmp1826 = $tmp1831.value;
                        if (!$tmp1826) goto $l1825;
                        {
                            int $tmp1834;
                            {
                                ITable* $tmp1838 = Iter$483$171817->$class->itable;
                                while ($tmp1838->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1838 = $tmp1838->next;
                                }
                                $fn1840 $tmp1839 = $tmp1838->methods[1];
                                panda$core$Object* $tmp1841 = $tmp1839(Iter$483$171817);
                                $tmp1837 = $tmp1841;
                                $tmp1836 = ((org$pandalanguage$pandac$ASTNode*) $tmp1837);
                                s1835 = $tmp1836;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1836));
                                panda$core$Panda$unref$panda$core$Object($tmp1837);
                                panda$core$String* $tmp1844 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1835), &$s1843);
                                $tmp1842 = $tmp1844;
                                panda$core$MutableString$append$panda$core$String(result1799, $tmp1842);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1842));
                            }
                            $tmp1834 = -1;
                            goto $l1832;
                            $l1832:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1835));
                            s1835 = NULL;
                            switch ($tmp1834) {
                                case -1: goto $l1845;
                            }
                            $l1845:;
                        }
                        goto $l1824;
                        $l1825:;
                    }
                    $tmp1816 = -1;
                    goto $l1814;
                    $l1814:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$483$171817));
                    Iter$483$171817 = NULL;
                    switch ($tmp1816) {
                        case -1: goto $l1846;
                    }
                    $l1846:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1847, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1799, $tmp1847);
                panda$core$String* $tmp1850 = panda$core$MutableString$finish$R$panda$core$String(result1799);
                $tmp1849 = $tmp1850;
                $tmp1848 = $tmp1849;
                $returnValue270 = $tmp1848;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1848));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1849));
                $tmp1798 = 0;
                goto $l1796;
                $l1851:;
                $tmp262 = 57;
                goto $l260;
                $l1852:;
                return $returnValue270;
            }
            $l1796:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1799));
            result1799 = NULL;
            switch ($tmp1798) {
                case 0: goto $l1851;
            }
            $l1854:;
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
        case 40: goto $l1495;
        case 2: goto $l299;
        case 9: goto $l430;
        case 14: goto $l653;
        case 32: goto $l1390;
        case 1: goto $l285;
        case 15: goto $l666;
        case 20: goto $l780;
        case 39: goto $l1486;
        case 54: goto $l1657;
        case 57: goto $l1852;
        case -1: goto $l1855;
        case 34: goto $l1405;
        case 43: goto $l1523;
        case 35: goto $l1414;
        case 21: goto $l836;
        case 0: goto $l282;
        case 28: goto $l1071;
        case 5: goto $l330;
        case 36: goto $l1420;
        case 49: goto $l1582;
        case 3: goto $l313;
        case 11: goto $l458;
        case 30: goto $l1193;
        case 44: goto $l1528;
        case 19: goto $l760;
        case 10: goto $l434;
        case 45: goto $l1537;
        case 56: goto $l1786;
        case 55: goto $l1689;
        case 25: goto $l987;
        case 51: goto $l1603;
        case 52: goto $l1627;
        case 17: goto $l689;
        case 38: goto $l1459;
        case 23: goto $l957;
        case 46: goto $l1542;
        case 24: goto $l981;
        case 37: goto $l1438;
        case 50: goto $l1600;
        case 6: goto $l358;
        case 26: goto $l1053;
        case 29: goto $l1129;
        case 27: goto $l1062;
        case 33: goto $l1399;
        case 42: goto $l1519;
        case 16: goto $l670;
        case 41: goto $l1507;
        case 47: goto $l1559;
        case 18: goto $l695;
        case 4: goto $l325;
        case 31: goto $l1329;
        case 13: goto $l525;
        case 7: goto $l366;
        case 48: goto $l1576;
        case 12: goto $l496;
        case 22: goto $l886;
        case 53: goto $l1651;
    }
    $l1855:;
}
void org$pandalanguage$pandac$ASTNode$cleanup(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$5_11862 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1863;
    org$pandalanguage$pandac$Position _f01865;
    panda$core$String* _f11867 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21869 = NULL;
    org$pandalanguage$pandac$Position _f01872;
    org$pandalanguage$pandac$ASTNode* _f11874 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21876 = NULL;
    org$pandalanguage$pandac$Position _f01879;
    org$pandalanguage$pandac$ASTNode* _f11881 = NULL;
    org$pandalanguage$pandac$Position _f01884;
    org$pandalanguage$pandac$Position _f01887;
    org$pandalanguage$pandac$ASTNode* _f11889 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind _f21891;
    org$pandalanguage$pandac$ASTNode* _f31893 = NULL;
    org$pandalanguage$pandac$Position _f01896;
    panda$core$Bit _f11898;
    org$pandalanguage$pandac$Position _f01901;
    panda$collections$ImmutableArray* _f11903 = NULL;
    org$pandalanguage$pandac$Position _f01906;
    panda$core$String* _f11908 = NULL;
    org$pandalanguage$pandac$Position _f01911;
    org$pandalanguage$pandac$ASTNode* _f11913 = NULL;
    panda$collections$ImmutableArray* _f21915 = NULL;
    org$pandalanguage$pandac$Position _f01918;
    org$pandalanguage$pandac$ASTNode* _f11920 = NULL;
    panda$core$String* _f21922 = NULL;
    panda$collections$ImmutableArray* _f31924 = NULL;
    org$pandalanguage$pandac$Position _f01927;
    org$pandalanguage$pandac$ASTNode* _f11929 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* _f21931 = NULL;
    panda$core$Int64 _f31933;
    org$pandalanguage$pandac$Position _f01936;
    org$pandalanguage$pandac$ASTNode* _f11938 = NULL;
    panda$collections$ImmutableArray* _f21940 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind _f31942;
    panda$core$String* _f41944 = NULL;
    panda$collections$ImmutableArray* _f51946 = NULL;
    panda$collections$ImmutableArray* _f61948 = NULL;
    panda$collections$ImmutableArray* _f71950 = NULL;
    org$pandalanguage$pandac$Position _f01953;
    panda$core$String* _f11955 = NULL;
    org$pandalanguage$pandac$Position _f01958;
    org$pandalanguage$pandac$ASTNode* _f11960 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21962 = NULL;
    org$pandalanguage$pandac$Position _f01965;
    panda$core$String* _f11967 = NULL;
    panda$collections$ImmutableArray* _f21969 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31971 = NULL;
    org$pandalanguage$pandac$Position _f01974;
    org$pandalanguage$pandac$ASTNode* _f11976 = NULL;
    panda$core$String* _f21978 = NULL;
    org$pandalanguage$pandac$Position _f01981;
    org$pandalanguage$pandac$ASTNode* _f11983 = NULL;
    panda$collections$ImmutableArray* _f21985 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31987 = NULL;
    panda$collections$ImmutableArray* _f01990 = NULL;
    org$pandalanguage$pandac$Position _f01993;
    panda$core$String* _f11995 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21997 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31999 = NULL;
    panda$collections$ImmutableArray* _f42001 = NULL;
    org$pandalanguage$pandac$Position _f02004;
    panda$core$String* _f12006 = NULL;
    panda$collections$ImmutableArray* _f22008 = NULL;
    org$pandalanguage$pandac$Position _f02011;
    panda$core$String* _f12013 = NULL;
    org$pandalanguage$pandac$Position _f02016;
    org$pandalanguage$pandac$ASTNode* _f12018 = NULL;
    panda$collections$ImmutableArray* _f22020 = NULL;
    org$pandalanguage$pandac$ASTNode* _f32022 = NULL;
    org$pandalanguage$pandac$Position _f02025;
    panda$core$UInt64 _f12027;
    org$pandalanguage$pandac$IRNode* _f02030 = NULL;
    org$pandalanguage$pandac$Position _f02033;
    panda$core$String* _f12035 = NULL;
    panda$collections$ImmutableArray* _f22037 = NULL;
    org$pandalanguage$pandac$Position _f02040;
    org$pandalanguage$pandac$ASTNode* _f12042 = NULL;
    panda$collections$ImmutableArray* _f22044 = NULL;
    panda$collections$ImmutableArray* _f32046 = NULL;
    org$pandalanguage$pandac$Position _f02049;
    org$pandalanguage$pandac$ASTNode* _f12051 = NULL;
    panda$collections$ImmutableArray* _f22053 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind _f32055;
    panda$core$String* _f42057 = NULL;
    panda$collections$ImmutableArray* _f52059 = NULL;
    panda$collections$ImmutableArray* _f62061 = NULL;
    org$pandalanguage$pandac$ASTNode* _f72063 = NULL;
    panda$collections$ImmutableArray* _f82065 = NULL;
    org$pandalanguage$pandac$Position _f02068;
    org$pandalanguage$pandac$parser$Token$Kind _f12070;
    panda$collections$ImmutableArray* _f22072 = NULL;
    org$pandalanguage$pandac$ASTNode* _f32074 = NULL;
    org$pandalanguage$pandac$Position _f02077;
    org$pandalanguage$pandac$Position _f02080;
    org$pandalanguage$pandac$ASTNode* _f12082 = NULL;
    org$pandalanguage$pandac$Position _f02085;
    panda$core$String* _f12087 = NULL;
    org$pandalanguage$pandac$Position _f02090;
    panda$core$String* _f12092 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22094 = NULL;
    org$pandalanguage$pandac$Position _f02097;
    org$pandalanguage$pandac$parser$Token$Kind _f12099;
    org$pandalanguage$pandac$ASTNode* _f22101 = NULL;
    org$pandalanguage$pandac$Position _f02104;
    org$pandalanguage$pandac$ASTNode* _f12106 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22108 = NULL;
    panda$core$Bit _f32110;
    org$pandalanguage$pandac$ASTNode* _f42112 = NULL;
    org$pandalanguage$pandac$Position _f02115;
    panda$core$Real64 _f12117;
    org$pandalanguage$pandac$Position _f02120;
    panda$core$String* _f12122 = NULL;
    org$pandalanguage$pandac$Position _f02125;
    org$pandalanguage$pandac$ASTNode* _f12127 = NULL;
    org$pandalanguage$pandac$Position _f02130;
    org$pandalanguage$pandac$Position _f02133;
    panda$core$String* _f12135 = NULL;
    org$pandalanguage$pandac$Position _f02138;
    org$pandalanguage$pandac$Position _f02141;
    panda$collections$ImmutableArray* _f12143 = NULL;
    org$pandalanguage$pandac$Position _f02146;
    panda$collections$ImmutableArray* _f12148 = NULL;
    org$pandalanguage$pandac$Position _f02151;
    panda$core$String* _f12153 = NULL;
    org$pandalanguage$pandac$Position _f02156;
    panda$collections$ImmutableArray* _f12158 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22160 = NULL;
    org$pandalanguage$pandac$Position _f02163;
    panda$core$String* _f12165 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22167 = NULL;
    org$pandalanguage$pandac$Position _f02170;
    panda$collections$ImmutableArray* _f12172 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22174 = NULL;
    org$pandalanguage$pandac$Position _f02177;
    panda$core$String* _f12179 = NULL;
    org$pandalanguage$pandac$Position _f02182;
    org$pandalanguage$pandac$Variable$Kind _f12184;
    panda$collections$ImmutableArray* _f22186 = NULL;
    org$pandalanguage$pandac$Position _f02189;
    panda$collections$ImmutableArray* _f12191 = NULL;
    panda$collections$ImmutableArray* _f22193 = NULL;
    org$pandalanguage$pandac$Position _f02196;
    panda$core$String* _f12198 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22200 = NULL;
    panda$collections$ImmutableArray* _f32202 = NULL;
    int $tmp1858;
    {
        int $tmp1861;
        {
            $tmp1863 = self;
            $match$5_11862 = $tmp1863;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1863));
            panda$core$Bit $tmp1864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp1864.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1866 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f01865 = *$tmp1866;
                panda$core$String** $tmp1868 = ((panda$core$String**) ((char*) $match$5_11862->$data + 16));
                _f11867 = *$tmp1868;
                org$pandalanguage$pandac$ASTNode** $tmp1870 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 24));
                _f21869 = *$tmp1870;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11867));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21869));
            }
            }
            else {
            panda$core$Bit $tmp1871 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp1871.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1873 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f01872 = *$tmp1873;
                org$pandalanguage$pandac$ASTNode** $tmp1875 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 16));
                _f11874 = *$tmp1875;
                org$pandalanguage$pandac$ASTNode** $tmp1877 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 24));
                _f21876 = *$tmp1877;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11874));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21876));
            }
            }
            else {
            panda$core$Bit $tmp1878 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1878.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1880 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f01879 = *$tmp1880;
                org$pandalanguage$pandac$ASTNode** $tmp1882 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 16));
                _f11881 = *$tmp1882;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11881));
            }
            }
            else {
            panda$core$Bit $tmp1883 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp1883.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1885 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f01884 = *$tmp1885;
            }
            }
            else {
            panda$core$Bit $tmp1886 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 4 }));
            if ($tmp1886.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1888 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f01887 = *$tmp1888;
                org$pandalanguage$pandac$ASTNode** $tmp1890 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 16));
                _f11889 = *$tmp1890;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp1892 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11862->$data + 24));
                _f21891 = *$tmp1892;
                org$pandalanguage$pandac$ASTNode** $tmp1894 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 32));
                _f31893 = *$tmp1894;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11889));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31893));
            }
            }
            else {
            panda$core$Bit $tmp1895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 5 }));
            if ($tmp1895.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1897 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f01896 = *$tmp1897;
                panda$core$Bit* $tmp1899 = ((panda$core$Bit*) ((char*) $match$5_11862->$data + 16));
                _f11898 = *$tmp1899;
            }
            }
            else {
            panda$core$Bit $tmp1900 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 6 }));
            if ($tmp1900.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1902 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f01901 = *$tmp1902;
                panda$collections$ImmutableArray** $tmp1904 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11862->$data + 16));
                _f11903 = *$tmp1904;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11903));
            }
            }
            else {
            panda$core$Bit $tmp1905 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 7 }));
            if ($tmp1905.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1907 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f01906 = *$tmp1907;
                panda$core$String** $tmp1909 = ((panda$core$String**) ((char*) $match$5_11862->$data + 16));
                _f11908 = *$tmp1909;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11908));
            }
            }
            else {
            panda$core$Bit $tmp1910 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 8 }));
            if ($tmp1910.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1912 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f01911 = *$tmp1912;
                org$pandalanguage$pandac$ASTNode** $tmp1914 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 16));
                _f11913 = *$tmp1914;
                panda$collections$ImmutableArray** $tmp1916 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11862->$data + 24));
                _f21915 = *$tmp1916;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11913));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21915));
            }
            }
            else {
            panda$core$Bit $tmp1917 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 9 }));
            if ($tmp1917.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1919 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f01918 = *$tmp1919;
                org$pandalanguage$pandac$ASTNode** $tmp1921 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 16));
                _f11920 = *$tmp1921;
                panda$core$String** $tmp1923 = ((panda$core$String**) ((char*) $match$5_11862->$data + 24));
                _f21922 = *$tmp1923;
                panda$collections$ImmutableArray** $tmp1925 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11862->$data + 32));
                _f31924 = *$tmp1925;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11920));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21922));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31924));
            }
            }
            else {
            panda$core$Bit $tmp1926 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 10 }));
            if ($tmp1926.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1928 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f01927 = *$tmp1928;
                org$pandalanguage$pandac$ASTNode** $tmp1930 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 16));
                _f11929 = *$tmp1930;
                org$pandalanguage$pandac$ChoiceEntry** $tmp1932 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_11862->$data + 24));
                _f21931 = *$tmp1932;
                panda$core$Int64* $tmp1934 = ((panda$core$Int64*) ((char*) $match$5_11862->$data + 32));
                _f31933 = *$tmp1934;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11929));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21931));
            }
            }
            else {
            panda$core$Bit $tmp1935 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp1935.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1937 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f01936 = *$tmp1937;
                org$pandalanguage$pandac$ASTNode** $tmp1939 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 16));
                _f11938 = *$tmp1939;
                panda$collections$ImmutableArray** $tmp1941 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11862->$data + 24));
                _f21940 = *$tmp1941;
                org$pandalanguage$pandac$ClassDecl$Kind* $tmp1943 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$5_11862->$data + 32));
                _f31942 = *$tmp1943;
                panda$core$String** $tmp1945 = ((panda$core$String**) ((char*) $match$5_11862->$data + 40));
                _f41944 = *$tmp1945;
                panda$collections$ImmutableArray** $tmp1947 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11862->$data + 48));
                _f51946 = *$tmp1947;
                panda$collections$ImmutableArray** $tmp1949 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11862->$data + 56));
                _f61948 = *$tmp1949;
                panda$collections$ImmutableArray** $tmp1951 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11862->$data + 64));
                _f71950 = *$tmp1951;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11938));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21940));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41944));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f51946));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f61948));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f71950));
            }
            }
            else {
            panda$core$Bit $tmp1952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp1952.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1954 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f01953 = *$tmp1954;
                panda$core$String** $tmp1956 = ((panda$core$String**) ((char*) $match$5_11862->$data + 16));
                _f11955 = *$tmp1956;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11955));
            }
            }
            else {
            panda$core$Bit $tmp1957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp1957.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1959 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f01958 = *$tmp1959;
                org$pandalanguage$pandac$ASTNode** $tmp1961 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 16));
                _f11960 = *$tmp1961;
                org$pandalanguage$pandac$ASTNode** $tmp1963 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 24));
                _f21962 = *$tmp1963;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11960));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21962));
            }
            }
            else {
            panda$core$Bit $tmp1964 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 14 }));
            if ($tmp1964.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1966 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f01965 = *$tmp1966;
                panda$core$String** $tmp1968 = ((panda$core$String**) ((char*) $match$5_11862->$data + 16));
                _f11967 = *$tmp1968;
                panda$collections$ImmutableArray** $tmp1970 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11862->$data + 24));
                _f21969 = *$tmp1970;
                org$pandalanguage$pandac$ASTNode** $tmp1972 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 32));
                _f31971 = *$tmp1972;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11967));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21969));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31971));
            }
            }
            else {
            panda$core$Bit $tmp1973 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 15 }));
            if ($tmp1973.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1975 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f01974 = *$tmp1975;
                org$pandalanguage$pandac$ASTNode** $tmp1977 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 16));
                _f11976 = *$tmp1977;
                panda$core$String** $tmp1979 = ((panda$core$String**) ((char*) $match$5_11862->$data + 24));
                _f21978 = *$tmp1979;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11976));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21978));
            }
            }
            else {
            panda$core$Bit $tmp1980 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 16 }));
            if ($tmp1980.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1982 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f01981 = *$tmp1982;
                org$pandalanguage$pandac$ASTNode** $tmp1984 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 16));
                _f11983 = *$tmp1984;
                panda$collections$ImmutableArray** $tmp1986 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11862->$data + 24));
                _f21985 = *$tmp1986;
                org$pandalanguage$pandac$ASTNode** $tmp1988 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 32));
                _f31987 = *$tmp1988;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11983));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21985));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31987));
            }
            }
            else {
            panda$core$Bit $tmp1989 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp1989.value) {
            {
                panda$collections$ImmutableArray** $tmp1991 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11862->$data + 0));
                _f01990 = *$tmp1991;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f01990));
            }
            }
            else {
            panda$core$Bit $tmp1992 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp1992.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1994 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f01993 = *$tmp1994;
                panda$core$String** $tmp1996 = ((panda$core$String**) ((char*) $match$5_11862->$data + 16));
                _f11995 = *$tmp1996;
                org$pandalanguage$pandac$ASTNode** $tmp1998 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 24));
                _f21997 = *$tmp1998;
                org$pandalanguage$pandac$ASTNode** $tmp2000 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 32));
                _f31999 = *$tmp2000;
                panda$collections$ImmutableArray** $tmp2002 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11862->$data + 40));
                _f42001 = *$tmp2002;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11995));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21997));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31999));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42001));
            }
            }
            else {
            panda$core$Bit $tmp2003 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp2003.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2005 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f02004 = *$tmp2005;
                panda$core$String** $tmp2007 = ((panda$core$String**) ((char*) $match$5_11862->$data + 16));
                _f12006 = *$tmp2007;
                panda$collections$ImmutableArray** $tmp2009 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11862->$data + 24));
                _f22008 = *$tmp2009;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12006));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22008));
            }
            }
            else {
            panda$core$Bit $tmp2010 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 20 }));
            if ($tmp2010.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2012 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f02011 = *$tmp2012;
                panda$core$String** $tmp2014 = ((panda$core$String**) ((char*) $match$5_11862->$data + 16));
                _f12013 = *$tmp2014;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12013));
            }
            }
            else {
            panda$core$Bit $tmp2015 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 21 }));
            if ($tmp2015.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2017 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f02016 = *$tmp2017;
                org$pandalanguage$pandac$ASTNode** $tmp2019 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 16));
                _f12018 = *$tmp2019;
                panda$collections$ImmutableArray** $tmp2021 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11862->$data + 24));
                _f22020 = *$tmp2021;
                org$pandalanguage$pandac$ASTNode** $tmp2023 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 32));
                _f32022 = *$tmp2023;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12018));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22020));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32022));
            }
            }
            else {
            panda$core$Bit $tmp2024 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 22 }));
            if ($tmp2024.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2026 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f02025 = *$tmp2026;
                panda$core$UInt64* $tmp2028 = ((panda$core$UInt64*) ((char*) $match$5_11862->$data + 16));
                _f12027 = *$tmp2028;
            }
            }
            else {
            panda$core$Bit $tmp2029 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 23 }));
            if ($tmp2029.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2031 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11862->$data + 0));
                _f02030 = *$tmp2031;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02030));
            }
            }
            else {
            panda$core$Bit $tmp2032 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 24 }));
            if ($tmp2032.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2034 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f02033 = *$tmp2034;
                panda$core$String** $tmp2036 = ((panda$core$String**) ((char*) $match$5_11862->$data + 16));
                _f12035 = *$tmp2036;
                panda$collections$ImmutableArray** $tmp2038 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11862->$data + 24));
                _f22037 = *$tmp2038;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12035));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22037));
            }
            }
            else {
            panda$core$Bit $tmp2039 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 25 }));
            if ($tmp2039.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2041 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f02040 = *$tmp2041;
                org$pandalanguage$pandac$ASTNode** $tmp2043 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 16));
                _f12042 = *$tmp2043;
                panda$collections$ImmutableArray** $tmp2045 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11862->$data + 24));
                _f22044 = *$tmp2045;
                panda$collections$ImmutableArray** $tmp2047 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11862->$data + 32));
                _f32046 = *$tmp2047;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12042));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22044));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32046));
            }
            }
            else {
            panda$core$Bit $tmp2048 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 26 }));
            if ($tmp2048.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2050 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f02049 = *$tmp2050;
                org$pandalanguage$pandac$ASTNode** $tmp2052 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 16));
                _f12051 = *$tmp2052;
                panda$collections$ImmutableArray** $tmp2054 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11862->$data + 24));
                _f22053 = *$tmp2054;
                org$pandalanguage$pandac$MethodDecl$Kind* $tmp2056 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$5_11862->$data + 32));
                _f32055 = *$tmp2056;
                panda$core$String** $tmp2058 = ((panda$core$String**) ((char*) $match$5_11862->$data + 40));
                _f42057 = *$tmp2058;
                panda$collections$ImmutableArray** $tmp2060 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11862->$data + 48));
                _f52059 = *$tmp2060;
                panda$collections$ImmutableArray** $tmp2062 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11862->$data + 56));
                _f62061 = *$tmp2062;
                org$pandalanguage$pandac$ASTNode** $tmp2064 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 64));
                _f72063 = *$tmp2064;
                panda$collections$ImmutableArray** $tmp2066 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11862->$data + 72));
                _f82065 = *$tmp2066;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12051));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22053));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42057));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f52059));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f62061));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f72063));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f82065));
            }
            }
            else {
            panda$core$Bit $tmp2067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 27 }));
            if ($tmp2067.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2069 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f02068 = *$tmp2069;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2071 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11862->$data + 16));
                _f12070 = *$tmp2071;
                panda$collections$ImmutableArray** $tmp2073 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11862->$data + 24));
                _f22072 = *$tmp2073;
                org$pandalanguage$pandac$ASTNode** $tmp2075 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 32));
                _f32074 = *$tmp2075;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22072));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32074));
            }
            }
            else {
            panda$core$Bit $tmp2076 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 28 }));
            if ($tmp2076.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2078 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f02077 = *$tmp2078;
            }
            }
            else {
            panda$core$Bit $tmp2079 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 29 }));
            if ($tmp2079.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2081 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f02080 = *$tmp2081;
                org$pandalanguage$pandac$ASTNode** $tmp2083 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 16));
                _f12082 = *$tmp2083;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12082));
            }
            }
            else {
            panda$core$Bit $tmp2084 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 30 }));
            if ($tmp2084.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2086 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f02085 = *$tmp2086;
                panda$core$String** $tmp2088 = ((panda$core$String**) ((char*) $match$5_11862->$data + 16));
                _f12087 = *$tmp2088;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12087));
            }
            }
            else {
            panda$core$Bit $tmp2089 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 31 }));
            if ($tmp2089.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2091 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f02090 = *$tmp2091;
                panda$core$String** $tmp2093 = ((panda$core$String**) ((char*) $match$5_11862->$data + 16));
                _f12092 = *$tmp2093;
                org$pandalanguage$pandac$ASTNode** $tmp2095 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 24));
                _f22094 = *$tmp2095;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12092));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22094));
            }
            }
            else {
            panda$core$Bit $tmp2096 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 32 }));
            if ($tmp2096.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2098 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f02097 = *$tmp2098;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2100 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11862->$data + 16));
                _f12099 = *$tmp2100;
                org$pandalanguage$pandac$ASTNode** $tmp2102 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 24));
                _f22101 = *$tmp2102;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22101));
            }
            }
            else {
            panda$core$Bit $tmp2103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp2103.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2105 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f02104 = *$tmp2105;
                org$pandalanguage$pandac$ASTNode** $tmp2107 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 16));
                _f12106 = *$tmp2107;
                org$pandalanguage$pandac$ASTNode** $tmp2109 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 24));
                _f22108 = *$tmp2109;
                panda$core$Bit* $tmp2111 = ((panda$core$Bit*) ((char*) $match$5_11862->$data + 32));
                _f32110 = *$tmp2111;
                org$pandalanguage$pandac$ASTNode** $tmp2113 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 33));
                _f42112 = *$tmp2113;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12106));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22108));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42112));
            }
            }
            else {
            panda$core$Bit $tmp2114 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp2114.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2116 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f02115 = *$tmp2116;
                panda$core$Real64* $tmp2118 = ((panda$core$Real64*) ((char*) $match$5_11862->$data + 16));
                _f12117 = *$tmp2118;
            }
            }
            else {
            panda$core$Bit $tmp2119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 35 }));
            if ($tmp2119.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2121 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f02120 = *$tmp2121;
                panda$core$String** $tmp2123 = ((panda$core$String**) ((char*) $match$5_11862->$data + 16));
                _f12122 = *$tmp2123;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12122));
            }
            }
            else {
            panda$core$Bit $tmp2124 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 36 }));
            if ($tmp2124.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2126 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f02125 = *$tmp2126;
                org$pandalanguage$pandac$ASTNode** $tmp2128 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 16));
                _f12127 = *$tmp2128;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12127));
            }
            }
            else {
            panda$core$Bit $tmp2129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 37 }));
            if ($tmp2129.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2131 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f02130 = *$tmp2131;
            }
            }
            else {
            panda$core$Bit $tmp2132 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 38 }));
            if ($tmp2132.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2134 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f02133 = *$tmp2134;
                panda$core$String** $tmp2136 = ((panda$core$String**) ((char*) $match$5_11862->$data + 16));
                _f12135 = *$tmp2136;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12135));
            }
            }
            else {
            panda$core$Bit $tmp2137 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp2137.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2139 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f02138 = *$tmp2139;
            }
            }
            else {
            panda$core$Bit $tmp2140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 40 }));
            if ($tmp2140.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2142 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f02141 = *$tmp2142;
                panda$collections$ImmutableArray** $tmp2144 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11862->$data + 16));
                _f12143 = *$tmp2144;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12143));
            }
            }
            else {
            panda$core$Bit $tmp2145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 41 }));
            if ($tmp2145.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2147 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f02146 = *$tmp2147;
                panda$collections$ImmutableArray** $tmp2149 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11862->$data + 16));
                _f12148 = *$tmp2149;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12148));
            }
            }
            else {
            panda$core$Bit $tmp2150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 42 }));
            if ($tmp2150.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2152 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f02151 = *$tmp2152;
                panda$core$String** $tmp2154 = ((panda$core$String**) ((char*) $match$5_11862->$data + 16));
                _f12153 = *$tmp2154;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12153));
            }
            }
            else {
            panda$core$Bit $tmp2155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 43 }));
            if ($tmp2155.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2157 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f02156 = *$tmp2157;
                panda$collections$ImmutableArray** $tmp2159 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11862->$data + 16));
                _f12158 = *$tmp2159;
                org$pandalanguage$pandac$ASTNode** $tmp2161 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 24));
                _f22160 = *$tmp2161;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12158));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22160));
            }
            }
            else {
            panda$core$Bit $tmp2162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 44 }));
            if ($tmp2162.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2164 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f02163 = *$tmp2164;
                panda$core$String** $tmp2166 = ((panda$core$String**) ((char*) $match$5_11862->$data + 16));
                _f12165 = *$tmp2166;
                org$pandalanguage$pandac$ASTNode** $tmp2168 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 24));
                _f22167 = *$tmp2168;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12165));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22167));
            }
            }
            else {
            panda$core$Bit $tmp2169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 45 }));
            if ($tmp2169.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2171 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f02170 = *$tmp2171;
                panda$collections$ImmutableArray** $tmp2173 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11862->$data + 16));
                _f12172 = *$tmp2173;
                org$pandalanguage$pandac$ASTNode** $tmp2175 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 24));
                _f22174 = *$tmp2175;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12172));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22174));
            }
            }
            else {
            panda$core$Bit $tmp2176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 46 }));
            if ($tmp2176.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2178 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f02177 = *$tmp2178;
                panda$core$String** $tmp2180 = ((panda$core$String**) ((char*) $match$5_11862->$data + 16));
                _f12179 = *$tmp2180;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12179));
            }
            }
            else {
            panda$core$Bit $tmp2181 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 47 }));
            if ($tmp2181.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2183 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f02182 = *$tmp2183;
                org$pandalanguage$pandac$Variable$Kind* $tmp2185 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_11862->$data + 16));
                _f12184 = *$tmp2185;
                panda$collections$ImmutableArray** $tmp2187 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11862->$data + 24));
                _f22186 = *$tmp2187;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22186));
            }
            }
            else {
            panda$core$Bit $tmp2188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 48 }));
            if ($tmp2188.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2190 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f02189 = *$tmp2190;
                panda$collections$ImmutableArray** $tmp2192 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11862->$data + 16));
                _f12191 = *$tmp2192;
                panda$collections$ImmutableArray** $tmp2194 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11862->$data + 24));
                _f22193 = *$tmp2194;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12191));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22193));
            }
            }
            else {
            panda$core$Bit $tmp2195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11862->$rawValue, ((panda$core$Int64) { 49 }));
            if ($tmp2195.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2197 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11862->$data + 0));
                _f02196 = *$tmp2197;
                panda$core$String** $tmp2199 = ((panda$core$String**) ((char*) $match$5_11862->$data + 16));
                _f12198 = *$tmp2199;
                org$pandalanguage$pandac$ASTNode** $tmp2201 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11862->$data + 24));
                _f22200 = *$tmp2201;
                panda$collections$ImmutableArray** $tmp2203 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11862->$data + 32));
                _f32202 = *$tmp2203;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12198));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22200));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32202));
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
        }
        $tmp1861 = -1;
        goto $l1859;
        $l1859:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1863));
        switch ($tmp1861) {
            case -1: goto $l2204;
        }
        $l2204:;
    }
    $tmp1858 = -1;
    goto $l1856;
    $l1856:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp1858) {
        case -1: goto $l2205;
    }
    $l2205:;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$core$String* $tmp2207;
    panda$core$String* $tmp2210;
    org$pandalanguage$pandac$ASTNode* $tmp2211;
    org$pandalanguage$pandac$ASTNode* $tmp2214;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2206 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2206 = p_f0;
    {
        panda$core$String** $tmp2208 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2207 = *$tmp2208;
        panda$core$String** $tmp2209 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2210 = p_f1;
        *$tmp2209 = $tmp2210;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2210));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2207));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2212 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2211 = *$tmp2212;
        org$pandalanguage$pandac$ASTNode** $tmp2213 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2214 = p_f2;
        *$tmp2213 = $tmp2214;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2214));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2211));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2216;
    org$pandalanguage$pandac$ASTNode* $tmp2219;
    org$pandalanguage$pandac$ASTNode* $tmp2220;
    org$pandalanguage$pandac$ASTNode* $tmp2223;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2215 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2215 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2217 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2216 = *$tmp2217;
        org$pandalanguage$pandac$ASTNode** $tmp2218 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2219 = p_f1;
        *$tmp2218 = $tmp2219;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2219));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2216));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2221 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2220 = *$tmp2221;
        org$pandalanguage$pandac$ASTNode** $tmp2222 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2223 = p_f2;
        *$tmp2222 = $tmp2223;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2223));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2220));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    org$pandalanguage$pandac$ASTNode* $tmp2225;
    org$pandalanguage$pandac$ASTNode* $tmp2228;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2224 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2224 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2226 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2225 = *$tmp2226;
        org$pandalanguage$pandac$ASTNode** $tmp2227 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2228 = p_f1;
        *$tmp2227 = $tmp2228;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2228));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2225));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2229 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2229 = p_f0;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$parser$Token$Kind p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2231;
    org$pandalanguage$pandac$ASTNode* $tmp2234;
    org$pandalanguage$pandac$ASTNode* $tmp2236;
    org$pandalanguage$pandac$ASTNode* $tmp2239;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2230 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2230 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2232 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2231 = *$tmp2232;
        org$pandalanguage$pandac$ASTNode** $tmp2233 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2234 = p_f1;
        *$tmp2233 = $tmp2234;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2234));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2231));
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2235 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 24));
    *$tmp2235 = p_f2;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2237 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2236 = *$tmp2237;
        org$pandalanguage$pandac$ASTNode** $tmp2238 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2239 = p_f3;
        *$tmp2238 = $tmp2239;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2239));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2236));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Bit p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2240 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2240 = p_f0;
    panda$core$Bit* $tmp2241 = ((panda$core$Bit*) ((char*) self->$data + 16));
    *$tmp2241 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    panda$collections$ImmutableArray* $tmp2243;
    panda$collections$ImmutableArray* $tmp2246;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2242 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2242 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2244 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2243 = *$tmp2244;
        panda$collections$ImmutableArray** $tmp2245 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2246 = p_f1;
        *$tmp2245 = $tmp2246;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2246));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2243));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp2248;
    panda$core$String* $tmp2251;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2247 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2247 = p_f0;
    {
        panda$core$String** $tmp2249 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2248 = *$tmp2249;
        panda$core$String** $tmp2250 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2251 = p_f1;
        *$tmp2250 = $tmp2251;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2251));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2248));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2253;
    org$pandalanguage$pandac$ASTNode* $tmp2256;
    panda$collections$ImmutableArray* $tmp2257;
    panda$collections$ImmutableArray* $tmp2260;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2252 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2252 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2254 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2253 = *$tmp2254;
        org$pandalanguage$pandac$ASTNode** $tmp2255 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2256 = p_f1;
        *$tmp2255 = $tmp2256;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2256));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2253));
    }
    {
        panda$collections$ImmutableArray** $tmp2258 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2257 = *$tmp2258;
        panda$collections$ImmutableArray** $tmp2259 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2260 = p_f2;
        *$tmp2259 = $tmp2260;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2260));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2257));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2262;
    org$pandalanguage$pandac$ASTNode* $tmp2265;
    panda$core$String* $tmp2266;
    panda$core$String* $tmp2269;
    panda$collections$ImmutableArray* $tmp2270;
    panda$collections$ImmutableArray* $tmp2273;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2261 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2261 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2263 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2262 = *$tmp2263;
        org$pandalanguage$pandac$ASTNode** $tmp2264 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2265 = p_f1;
        *$tmp2264 = $tmp2265;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2265));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2262));
    }
    {
        panda$core$String** $tmp2267 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2266 = *$tmp2267;
        panda$core$String** $tmp2268 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2269 = p_f2;
        *$tmp2268 = $tmp2269;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2269));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2266));
    }
    {
        panda$collections$ImmutableArray** $tmp2271 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2270 = *$tmp2271;
        panda$collections$ImmutableArray** $tmp2272 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2273 = p_f3;
        *$tmp2272 = $tmp2273;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2273));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2270));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2275;
    org$pandalanguage$pandac$ASTNode* $tmp2278;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2279;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2282;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2274 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2274 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2276 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2275 = *$tmp2276;
        org$pandalanguage$pandac$ASTNode** $tmp2277 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2278 = p_f1;
        *$tmp2277 = $tmp2278;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2278));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2275));
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp2280 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp2279 = *$tmp2280;
        org$pandalanguage$pandac$ChoiceEntry** $tmp2281 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp2282 = p_f2;
        *$tmp2281 = $tmp2282;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2282));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2279));
    }
    panda$core$Int64* $tmp2283 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp2283 = p_f3;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ClassDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, panda$collections$ImmutableArray* p_f6, panda$collections$ImmutableArray* p_f7) {
    org$pandalanguage$pandac$ASTNode* $tmp2285;
    org$pandalanguage$pandac$ASTNode* $tmp2288;
    panda$collections$ImmutableArray* $tmp2289;
    panda$collections$ImmutableArray* $tmp2292;
    panda$core$String* $tmp2294;
    panda$core$String* $tmp2297;
    panda$collections$ImmutableArray* $tmp2298;
    panda$collections$ImmutableArray* $tmp2301;
    panda$collections$ImmutableArray* $tmp2302;
    panda$collections$ImmutableArray* $tmp2305;
    panda$collections$ImmutableArray* $tmp2306;
    panda$collections$ImmutableArray* $tmp2309;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2284 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2284 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2286 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2285 = *$tmp2286;
        org$pandalanguage$pandac$ASTNode** $tmp2287 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2288 = p_f1;
        *$tmp2287 = $tmp2288;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2288));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2285));
    }
    {
        panda$collections$ImmutableArray** $tmp2290 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2289 = *$tmp2290;
        panda$collections$ImmutableArray** $tmp2291 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2292 = p_f2;
        *$tmp2291 = $tmp2292;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2292));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2289));
    }
    org$pandalanguage$pandac$ClassDecl$Kind* $tmp2293 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) self->$data + 32));
    *$tmp2293 = p_f3;
    {
        panda$core$String** $tmp2295 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2294 = *$tmp2295;
        panda$core$String** $tmp2296 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2297 = p_f4;
        *$tmp2296 = $tmp2297;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2297));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2294));
    }
    {
        panda$collections$ImmutableArray** $tmp2299 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2298 = *$tmp2299;
        panda$collections$ImmutableArray** $tmp2300 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2301 = p_f5;
        *$tmp2300 = $tmp2301;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2301));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2298));
    }
    {
        panda$collections$ImmutableArray** $tmp2303 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2302 = *$tmp2303;
        panda$collections$ImmutableArray** $tmp2304 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2305 = p_f6;
        *$tmp2304 = $tmp2305;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2305));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2302));
    }
    {
        panda$collections$ImmutableArray** $tmp2307 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2306 = *$tmp2307;
        panda$collections$ImmutableArray** $tmp2308 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2309 = p_f7;
        *$tmp2308 = $tmp2309;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2309));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2306));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    panda$core$String* $tmp2311;
    panda$core$String* $tmp2314;
    panda$collections$ImmutableArray* $tmp2315;
    panda$collections$ImmutableArray* $tmp2318;
    org$pandalanguage$pandac$ASTNode* $tmp2319;
    org$pandalanguage$pandac$ASTNode* $tmp2322;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2310 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2310 = p_f0;
    {
        panda$core$String** $tmp2312 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2311 = *$tmp2312;
        panda$core$String** $tmp2313 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2314 = p_f1;
        *$tmp2313 = $tmp2314;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2314));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2311));
    }
    {
        panda$collections$ImmutableArray** $tmp2316 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2315 = *$tmp2316;
        panda$collections$ImmutableArray** $tmp2317 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2318 = p_f2;
        *$tmp2317 = $tmp2318;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2318));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2315));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2320 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2319 = *$tmp2320;
        org$pandalanguage$pandac$ASTNode** $tmp2321 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2322 = p_f3;
        *$tmp2321 = $tmp2322;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2322));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2319));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2324;
    org$pandalanguage$pandac$ASTNode* $tmp2327;
    panda$core$String* $tmp2328;
    panda$core$String* $tmp2331;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2323 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2323 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2325 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2324 = *$tmp2325;
        org$pandalanguage$pandac$ASTNode** $tmp2326 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2327 = p_f1;
        *$tmp2326 = $tmp2327;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2327));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2324));
    }
    {
        panda$core$String** $tmp2329 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2328 = *$tmp2329;
        panda$core$String** $tmp2330 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2331 = p_f2;
        *$tmp2330 = $tmp2331;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2331));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2328));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2333;
    org$pandalanguage$pandac$ASTNode* $tmp2336;
    panda$collections$ImmutableArray* $tmp2337;
    panda$collections$ImmutableArray* $tmp2340;
    org$pandalanguage$pandac$ASTNode* $tmp2341;
    org$pandalanguage$pandac$ASTNode* $tmp2344;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2332 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2332 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2334 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2333 = *$tmp2334;
        org$pandalanguage$pandac$ASTNode** $tmp2335 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2336 = p_f1;
        *$tmp2335 = $tmp2336;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2336));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2333));
    }
    {
        panda$collections$ImmutableArray** $tmp2338 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2337 = *$tmp2338;
        panda$collections$ImmutableArray** $tmp2339 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2340 = p_f2;
        *$tmp2339 = $tmp2340;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2340));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2337));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2342 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2341 = *$tmp2342;
        org$pandalanguage$pandac$ASTNode** $tmp2343 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2344 = p_f3;
        *$tmp2343 = $tmp2344;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2344));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2341));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, panda$collections$ImmutableArray* p_f0) {
    panda$collections$ImmutableArray* $tmp2345;
    panda$collections$ImmutableArray* $tmp2348;
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableArray** $tmp2346 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp2345 = *$tmp2346;
        panda$collections$ImmutableArray** $tmp2347 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp2348 = p_f0;
        *$tmp2347 = $tmp2348;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2348));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2345));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, org$pandalanguage$pandac$ASTNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    panda$core$String* $tmp2350;
    panda$core$String* $tmp2353;
    org$pandalanguage$pandac$ASTNode* $tmp2354;
    org$pandalanguage$pandac$ASTNode* $tmp2357;
    org$pandalanguage$pandac$ASTNode* $tmp2358;
    org$pandalanguage$pandac$ASTNode* $tmp2361;
    panda$collections$ImmutableArray* $tmp2362;
    panda$collections$ImmutableArray* $tmp2365;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2349 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2349 = p_f0;
    {
        panda$core$String** $tmp2351 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2350 = *$tmp2351;
        panda$core$String** $tmp2352 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2353 = p_f1;
        *$tmp2352 = $tmp2353;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2353));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2350));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2355 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2354 = *$tmp2355;
        org$pandalanguage$pandac$ASTNode** $tmp2356 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2357 = p_f2;
        *$tmp2356 = $tmp2357;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2357));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2354));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2359 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2358 = *$tmp2359;
        org$pandalanguage$pandac$ASTNode** $tmp2360 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2361 = p_f3;
        *$tmp2360 = $tmp2361;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2361));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2358));
    }
    {
        panda$collections$ImmutableArray** $tmp2363 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp2362 = *$tmp2363;
        panda$collections$ImmutableArray** $tmp2364 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp2365 = p_f4;
        *$tmp2364 = $tmp2365;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2365));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2362));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp2367;
    panda$core$String* $tmp2370;
    panda$collections$ImmutableArray* $tmp2371;
    panda$collections$ImmutableArray* $tmp2374;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2366 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2366 = p_f0;
    {
        panda$core$String** $tmp2368 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2367 = *$tmp2368;
        panda$core$String** $tmp2369 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2370 = p_f1;
        *$tmp2369 = $tmp2370;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2370));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2367));
    }
    {
        panda$collections$ImmutableArray** $tmp2372 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2371 = *$tmp2372;
        panda$collections$ImmutableArray** $tmp2373 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2374 = p_f2;
        *$tmp2373 = $tmp2374;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2374));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2371));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp2376;
    panda$core$String* $tmp2379;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2375 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2375 = p_f0;
    {
        panda$core$String** $tmp2377 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2376 = *$tmp2377;
        panda$core$String** $tmp2378 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2379 = p_f1;
        *$tmp2378 = $tmp2379;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2379));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2376));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2381;
    org$pandalanguage$pandac$ASTNode* $tmp2384;
    panda$collections$ImmutableArray* $tmp2385;
    panda$collections$ImmutableArray* $tmp2388;
    org$pandalanguage$pandac$ASTNode* $tmp2389;
    org$pandalanguage$pandac$ASTNode* $tmp2392;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2380 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2380 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2382 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2381 = *$tmp2382;
        org$pandalanguage$pandac$ASTNode** $tmp2383 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2384 = p_f1;
        *$tmp2383 = $tmp2384;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2384));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2381));
    }
    {
        panda$collections$ImmutableArray** $tmp2386 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2385 = *$tmp2386;
        panda$collections$ImmutableArray** $tmp2387 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2388 = p_f2;
        *$tmp2387 = $tmp2388;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2388));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2385));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2390 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2389 = *$tmp2390;
        org$pandalanguage$pandac$ASTNode** $tmp2391 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2392 = p_f3;
        *$tmp2391 = $tmp2392;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2392));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2389));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$UInt64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2393 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2393 = p_f0;
    panda$core$UInt64* $tmp2394 = ((panda$core$UInt64*) ((char*) self->$data + 16));
    *$tmp2394 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0) {
    org$pandalanguage$pandac$IRNode* $tmp2395;
    org$pandalanguage$pandac$IRNode* $tmp2398;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp2396 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp2395 = *$tmp2396;
        org$pandalanguage$pandac$IRNode** $tmp2397 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp2398 = p_f0;
        *$tmp2397 = $tmp2398;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2398));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2395));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp2400;
    panda$core$String* $tmp2403;
    panda$collections$ImmutableArray* $tmp2404;
    panda$collections$ImmutableArray* $tmp2407;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2399 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2399 = p_f0;
    {
        panda$core$String** $tmp2401 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2400 = *$tmp2401;
        panda$core$String** $tmp2402 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2403 = p_f1;
        *$tmp2402 = $tmp2403;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2403));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2400));
    }
    {
        panda$collections$ImmutableArray** $tmp2405 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2404 = *$tmp2405;
        panda$collections$ImmutableArray** $tmp2406 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2407 = p_f2;
        *$tmp2406 = $tmp2407;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2407));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2404));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2409;
    org$pandalanguage$pandac$ASTNode* $tmp2412;
    panda$collections$ImmutableArray* $tmp2413;
    panda$collections$ImmutableArray* $tmp2416;
    panda$collections$ImmutableArray* $tmp2417;
    panda$collections$ImmutableArray* $tmp2420;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2408 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2408 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2410 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2409 = *$tmp2410;
        org$pandalanguage$pandac$ASTNode** $tmp2411 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2412 = p_f1;
        *$tmp2411 = $tmp2412;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2412));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2409));
    }
    {
        panda$collections$ImmutableArray** $tmp2414 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2413 = *$tmp2414;
        panda$collections$ImmutableArray** $tmp2415 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2416 = p_f2;
        *$tmp2415 = $tmp2416;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2416));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2413));
    }
    {
        panda$collections$ImmutableArray** $tmp2418 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2417 = *$tmp2418;
        panda$collections$ImmutableArray** $tmp2419 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2420 = p_f3;
        *$tmp2419 = $tmp2420;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2420));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2417));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$MethodDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, panda$collections$ImmutableArray* p_f6, org$pandalanguage$pandac$ASTNode* p_f7, panda$collections$ImmutableArray* p_f8) {
    org$pandalanguage$pandac$ASTNode* $tmp2422;
    org$pandalanguage$pandac$ASTNode* $tmp2425;
    panda$collections$ImmutableArray* $tmp2426;
    panda$collections$ImmutableArray* $tmp2429;
    panda$core$String* $tmp2431;
    panda$core$String* $tmp2434;
    panda$collections$ImmutableArray* $tmp2435;
    panda$collections$ImmutableArray* $tmp2438;
    panda$collections$ImmutableArray* $tmp2439;
    panda$collections$ImmutableArray* $tmp2442;
    org$pandalanguage$pandac$ASTNode* $tmp2443;
    org$pandalanguage$pandac$ASTNode* $tmp2446;
    panda$collections$ImmutableArray* $tmp2447;
    panda$collections$ImmutableArray* $tmp2450;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2421 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2421 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2423 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2422 = *$tmp2423;
        org$pandalanguage$pandac$ASTNode** $tmp2424 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2425 = p_f1;
        *$tmp2424 = $tmp2425;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2425));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2422));
    }
    {
        panda$collections$ImmutableArray** $tmp2427 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2426 = *$tmp2427;
        panda$collections$ImmutableArray** $tmp2428 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2429 = p_f2;
        *$tmp2428 = $tmp2429;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2429));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2426));
    }
    org$pandalanguage$pandac$MethodDecl$Kind* $tmp2430 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) self->$data + 32));
    *$tmp2430 = p_f3;
    {
        panda$core$String** $tmp2432 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2431 = *$tmp2432;
        panda$core$String** $tmp2433 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2434 = p_f4;
        *$tmp2433 = $tmp2434;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2434));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2431));
    }
    {
        panda$collections$ImmutableArray** $tmp2436 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2435 = *$tmp2436;
        panda$collections$ImmutableArray** $tmp2437 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2438 = p_f5;
        *$tmp2437 = $tmp2438;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2438));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2435));
    }
    {
        panda$collections$ImmutableArray** $tmp2440 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2439 = *$tmp2440;
        panda$collections$ImmutableArray** $tmp2441 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2442 = p_f6;
        *$tmp2441 = $tmp2442;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2442));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2439));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2444 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 64));
        $tmp2443 = *$tmp2444;
        org$pandalanguage$pandac$ASTNode** $tmp2445 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 64));
        $tmp2446 = p_f7;
        *$tmp2445 = $tmp2446;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2446));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2443));
    }
    {
        panda$collections$ImmutableArray** $tmp2448 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 72));
        $tmp2447 = *$tmp2448;
        panda$collections$ImmutableArray** $tmp2449 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 72));
        $tmp2450 = p_f8;
        *$tmp2449 = $tmp2450;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2450));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2447));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    panda$collections$ImmutableArray* $tmp2453;
    panda$collections$ImmutableArray* $tmp2456;
    org$pandalanguage$pandac$ASTNode* $tmp2457;
    org$pandalanguage$pandac$ASTNode* $tmp2460;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2451 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2451 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2452 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp2452 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp2454 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2453 = *$tmp2454;
        panda$collections$ImmutableArray** $tmp2455 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2456 = p_f2;
        *$tmp2455 = $tmp2456;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2456));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2453));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2458 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2457 = *$tmp2458;
        org$pandalanguage$pandac$ASTNode** $tmp2459 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2460 = p_f3;
        *$tmp2459 = $tmp2460;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2460));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2457));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$core$String* $tmp2462;
    panda$core$String* $tmp2465;
    org$pandalanguage$pandac$ASTNode* $tmp2466;
    org$pandalanguage$pandac$ASTNode* $tmp2469;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2461 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2461 = p_f0;
    {
        panda$core$String** $tmp2463 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2462 = *$tmp2463;
        panda$core$String** $tmp2464 = ((panda$core$String**) ((char*) self->$data + 16));
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
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2472;
    org$pandalanguage$pandac$ASTNode* $tmp2475;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2470 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2470 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2471 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp2471 = p_f1;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2473 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2472 = *$tmp2473;
        org$pandalanguage$pandac$ASTNode** $tmp2474 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2475 = p_f2;
        *$tmp2474 = $tmp2475;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2475));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2472));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$ASTNode* p_f4) {
    org$pandalanguage$pandac$ASTNode* $tmp2477;
    org$pandalanguage$pandac$ASTNode* $tmp2480;
    org$pandalanguage$pandac$ASTNode* $tmp2481;
    org$pandalanguage$pandac$ASTNode* $tmp2484;
    org$pandalanguage$pandac$ASTNode* $tmp2486;
    org$pandalanguage$pandac$ASTNode* $tmp2489;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2476 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2476 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2478 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2477 = *$tmp2478;
        org$pandalanguage$pandac$ASTNode** $tmp2479 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2480 = p_f1;
        *$tmp2479 = $tmp2480;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2480));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2477));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2482 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2481 = *$tmp2482;
        org$pandalanguage$pandac$ASTNode** $tmp2483 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2484 = p_f2;
        *$tmp2483 = $tmp2484;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2484));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2481));
    }
    panda$core$Bit* $tmp2485 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp2485 = p_f3;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2487 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        $tmp2486 = *$tmp2487;
        org$pandalanguage$pandac$ASTNode** $tmp2488 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        $tmp2489 = p_f4;
        *$tmp2488 = $tmp2489;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2489));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2486));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Real64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2490 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2490 = p_f0;
    panda$core$Real64* $tmp2491 = ((panda$core$Real64*) ((char*) self->$data + 16));
    *$tmp2491 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    org$pandalanguage$pandac$ASTNode* $tmp2493;
    org$pandalanguage$pandac$ASTNode* $tmp2496;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2492 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2492 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2494 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2493 = *$tmp2494;
        org$pandalanguage$pandac$ASTNode** $tmp2495 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2496 = p_f1;
        *$tmp2495 = $tmp2496;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2496));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2493));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$collections$ImmutableArray* $tmp2498;
    panda$collections$ImmutableArray* $tmp2501;
    org$pandalanguage$pandac$ASTNode* $tmp2502;
    org$pandalanguage$pandac$ASTNode* $tmp2505;
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
        org$pandalanguage$pandac$ASTNode** $tmp2503 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2502 = *$tmp2503;
        org$pandalanguage$pandac$ASTNode** $tmp2504 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2505 = p_f2;
        *$tmp2504 = $tmp2505;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2505));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2502));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp2508;
    panda$collections$ImmutableArray* $tmp2511;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2506 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2506 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp2507 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp2507 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp2509 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2508 = *$tmp2509;
        panda$collections$ImmutableArray** $tmp2510 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2511 = p_f2;
        *$tmp2510 = $tmp2511;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2511));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2508));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp2513;
    panda$collections$ImmutableArray* $tmp2516;
    panda$collections$ImmutableArray* $tmp2517;
    panda$collections$ImmutableArray* $tmp2520;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2512 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2512 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2514 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2513 = *$tmp2514;
        panda$collections$ImmutableArray** $tmp2515 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2516 = p_f1;
        *$tmp2515 = $tmp2516;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2516));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2513));
    }
    {
        panda$collections$ImmutableArray** $tmp2518 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2517 = *$tmp2518;
        panda$collections$ImmutableArray** $tmp2519 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2520 = p_f2;
        *$tmp2519 = $tmp2520;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2520));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2517));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    panda$core$String* $tmp2522;
    panda$core$String* $tmp2525;
    org$pandalanguage$pandac$ASTNode* $tmp2526;
    org$pandalanguage$pandac$ASTNode* $tmp2529;
    panda$collections$ImmutableArray* $tmp2530;
    panda$collections$ImmutableArray* $tmp2533;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2521 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2521 = p_f0;
    {
        panda$core$String** $tmp2523 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2522 = *$tmp2523;
        panda$core$String** $tmp2524 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2525 = p_f1;
        *$tmp2524 = $tmp2525;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2525));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2522));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2527 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2526 = *$tmp2527;
        org$pandalanguage$pandac$ASTNode** $tmp2528 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2529 = p_f2;
        *$tmp2528 = $tmp2529;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2529));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2526));
    }
    {
        panda$collections$ImmutableArray** $tmp2531 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2530 = *$tmp2531;
        panda$collections$ImmutableArray** $tmp2532 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2533 = p_f3;
        *$tmp2532 = $tmp2533;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2533));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2530));
    }
}






