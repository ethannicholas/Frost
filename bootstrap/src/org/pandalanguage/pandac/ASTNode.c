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
typedef panda$core$String* (*$fn341)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn382)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn389)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn400)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn441)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn448)(panda$collections$ListView*);
typedef panda$core$String* (*$fn482)(panda$collections$ListView*);
typedef panda$core$String* (*$fn508)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn555)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn562)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn573)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn593)(panda$collections$ListView*);
typedef panda$core$String* (*$fn604)(panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn618)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn625)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn636)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn677)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn688)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn720)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn727)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn738)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn768)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn802)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn809)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn820)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn852)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn859)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn870)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn922)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn929)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn940)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn971)(panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn1012)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1019)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1030)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1064)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1094)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1101)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1112)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1155)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1162)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1173)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1224)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1231)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1242)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1265)(panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn1285)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1292)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1303)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1356)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1438)(panda$core$Object*);
typedef panda$core$String* (*$fn1528)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1545)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1593)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1617)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1657)(panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn1690)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1697)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1708)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1731)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1738)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1749)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1796)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1803)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1814)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 32, -9211815390615587804, NULL };
static panda$core$String $s272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s290 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s292 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x28", 5, 17286533032, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s343 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s421 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s443 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s510 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s545 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s576 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static panda$core$String $s589 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s596 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s607 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s609 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s639 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s657 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s664 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s679 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s682 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s709 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s711 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s741 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s747 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 24242135792659305, NULL };
static panda$core$String $s749 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s770 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s773 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s792 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s823 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s873 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s901 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s907 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s909 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s912 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s943 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s966 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s974 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1000 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s1002 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1033 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1040 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s1042 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1083 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1085 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s1115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1143 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s1145 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1214 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1251 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s1253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s1260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1268 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static panda$core$String $s1337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static panda$core$String $s1341 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static panda$core$String $s1345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static panda$core$String $s1352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1370 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x29", 2, 14282, NULL };
static panda$core$String $s1390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s1398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s1419 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1443 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1463 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s1464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s1466 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s1489 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s1491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s1501 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s1509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s1515 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s1524 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1531 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1541 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1569 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1572 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1589 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1596 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static panda$core$String $s1599 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1620 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static panda$core$String $s1623 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1647 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s1649 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s1651 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1653 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s1678 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s1681 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1715 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1718 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1752 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1780 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1784 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s1786 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1817 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

org$pandalanguage$pandac$Position org$pandalanguage$pandac$ASTNode$position$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$84_95 = NULL;
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
    int $tmp4;
    {
        $tmp6 = self;
        $match$84_95 = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Bit $tmp7 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp7.value) {
        {
            org$pandalanguage$pandac$Position* $tmp9 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position8 = *$tmp9;
            $returnValue10 = position8;
            $tmp4 = 0;
            goto $l2;
            $l11:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp13 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp13.value) {
        {
            org$pandalanguage$pandac$Position* $tmp15 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position14 = *$tmp15;
            $returnValue10 = position14;
            $tmp4 = 1;
            goto $l2;
            $l16:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp18 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp18.value) {
        {
            org$pandalanguage$pandac$Position* $tmp20 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position19 = *$tmp20;
            $returnValue10 = position19;
            $tmp4 = 2;
            goto $l2;
            $l21:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp23 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp23.value) {
        {
            org$pandalanguage$pandac$Position* $tmp25 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position24 = *$tmp25;
            $returnValue10 = position24;
            $tmp4 = 3;
            goto $l2;
            $l26:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp28 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp28.value) {
        {
            org$pandalanguage$pandac$Position* $tmp30 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position29 = *$tmp30;
            $returnValue10 = position29;
            $tmp4 = 4;
            goto $l2;
            $l31:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp33 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp33.value) {
        {
            org$pandalanguage$pandac$Position* $tmp35 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position34 = *$tmp35;
            $returnValue10 = position34;
            $tmp4 = 5;
            goto $l2;
            $l36:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp38 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp38.value) {
        {
            org$pandalanguage$pandac$Position* $tmp40 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position39 = *$tmp40;
            $returnValue10 = position39;
            $tmp4 = 6;
            goto $l2;
            $l41:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp43 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp43.value) {
        {
            org$pandalanguage$pandac$Position* $tmp45 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position44 = *$tmp45;
            $returnValue10 = position44;
            $tmp4 = 7;
            goto $l2;
            $l46:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp48 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp48.value) {
        {
            org$pandalanguage$pandac$Position* $tmp50 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position49 = *$tmp50;
            $returnValue10 = position49;
            $tmp4 = 8;
            goto $l2;
            $l51:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp53 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp53.value) {
        {
            org$pandalanguage$pandac$Position* $tmp55 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position54 = *$tmp55;
            $returnValue10 = position54;
            $tmp4 = 9;
            goto $l2;
            $l56:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp58 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp58.value) {
        {
            org$pandalanguage$pandac$Position* $tmp60 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position59 = *$tmp60;
            $returnValue10 = position59;
            $tmp4 = 10;
            goto $l2;
            $l61:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp63 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp63.value) {
        {
            org$pandalanguage$pandac$Position* $tmp65 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position64 = *$tmp65;
            $returnValue10 = position64;
            $tmp4 = 11;
            goto $l2;
            $l66:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp68 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp68.value) {
        {
            org$pandalanguage$pandac$Position* $tmp70 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position69 = *$tmp70;
            $returnValue10 = position69;
            $tmp4 = 12;
            goto $l2;
            $l71:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp73 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp73.value) {
        {
            org$pandalanguage$pandac$Position* $tmp75 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position74 = *$tmp75;
            $returnValue10 = position74;
            $tmp4 = 13;
            goto $l2;
            $l76:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp78 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp78.value) {
        {
            org$pandalanguage$pandac$Position* $tmp80 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position79 = *$tmp80;
            $returnValue10 = position79;
            $tmp4 = 14;
            goto $l2;
            $l81:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp83 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp83.value) {
        {
            org$pandalanguage$pandac$Position* $tmp85 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position84 = *$tmp85;
            $returnValue10 = position84;
            $tmp4 = 15;
            goto $l2;
            $l86:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp88 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp88.value) {
        {
            org$pandalanguage$pandac$Position* $tmp90 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position89 = *$tmp90;
            $returnValue10 = position89;
            $tmp4 = 16;
            goto $l2;
            $l91:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp93 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 17 }));
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
        panda$core$Bit $tmp97 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp97.value) {
        {
            org$pandalanguage$pandac$Position* $tmp99 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position98 = *$tmp99;
            $returnValue10 = position98;
            $tmp4 = 18;
            goto $l2;
            $l100:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp102.value) {
        {
            org$pandalanguage$pandac$Position* $tmp104 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position103 = *$tmp104;
            $returnValue10 = position103;
            $tmp4 = 19;
            goto $l2;
            $l105:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp107.value) {
        {
            org$pandalanguage$pandac$Position* $tmp109 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position108 = *$tmp109;
            $returnValue10 = position108;
            $tmp4 = 20;
            goto $l2;
            $l110:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp112.value) {
        {
            org$pandalanguage$pandac$Position* $tmp114 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position113 = *$tmp114;
            $returnValue10 = position113;
            $tmp4 = 21;
            goto $l2;
            $l115:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp117.value) {
        {
            org$pandalanguage$pandac$Position* $tmp119 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position118 = *$tmp119;
            $returnValue10 = position118;
            $tmp4 = 22;
            goto $l2;
            $l120:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp122.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp124 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$84_95->$data + 0));
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
        panda$core$Bit $tmp129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp129.value) {
        {
            org$pandalanguage$pandac$Position* $tmp131 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position130 = *$tmp131;
            $returnValue10 = position130;
            $tmp4 = 24;
            goto $l2;
            $l132:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp134.value) {
        {
            org$pandalanguage$pandac$Position* $tmp136 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position135 = *$tmp136;
            $returnValue10 = position135;
            $tmp4 = 25;
            goto $l2;
            $l137:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp139.value) {
        {
            org$pandalanguage$pandac$Position* $tmp141 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position140 = *$tmp141;
            $returnValue10 = position140;
            $tmp4 = 26;
            goto $l2;
            $l142:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp144.value) {
        {
            org$pandalanguage$pandac$Position* $tmp146 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position145 = *$tmp146;
            $returnValue10 = position145;
            $tmp4 = 27;
            goto $l2;
            $l147:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp149.value) {
        {
            org$pandalanguage$pandac$Position* $tmp151 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position150 = *$tmp151;
            $returnValue10 = position150;
            $tmp4 = 28;
            goto $l2;
            $l152:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp154.value) {
        {
            org$pandalanguage$pandac$Position* $tmp156 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position155 = *$tmp156;
            $returnValue10 = position155;
            $tmp4 = 29;
            goto $l2;
            $l157:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp159.value) {
        {
            org$pandalanguage$pandac$Position* $tmp161 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position160 = *$tmp161;
            $returnValue10 = position160;
            $tmp4 = 30;
            goto $l2;
            $l162:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp164.value) {
        {
            org$pandalanguage$pandac$Position* $tmp166 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position165 = *$tmp166;
            $returnValue10 = position165;
            $tmp4 = 31;
            goto $l2;
            $l167:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp169.value) {
        {
            org$pandalanguage$pandac$Position* $tmp171 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position170 = *$tmp171;
            $returnValue10 = position170;
            $tmp4 = 32;
            goto $l2;
            $l172:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp174.value) {
        {
            org$pandalanguage$pandac$Position* $tmp176 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position175 = *$tmp176;
            $returnValue10 = position175;
            $tmp4 = 33;
            goto $l2;
            $l177:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp179.value) {
        {
            org$pandalanguage$pandac$Position* $tmp181 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position180 = *$tmp181;
            $returnValue10 = position180;
            $tmp4 = 34;
            goto $l2;
            $l182:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp184.value) {
        {
            org$pandalanguage$pandac$Position* $tmp186 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position185 = *$tmp186;
            $returnValue10 = position185;
            $tmp4 = 35;
            goto $l2;
            $l187:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp189.value) {
        {
            org$pandalanguage$pandac$Position* $tmp191 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position190 = *$tmp191;
            $returnValue10 = position190;
            $tmp4 = 36;
            goto $l2;
            $l192:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp194.value) {
        {
            org$pandalanguage$pandac$Position* $tmp196 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position195 = *$tmp196;
            $returnValue10 = position195;
            $tmp4 = 37;
            goto $l2;
            $l197:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp199.value) {
        {
            org$pandalanguage$pandac$Position* $tmp201 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position200 = *$tmp201;
            $returnValue10 = position200;
            $tmp4 = 38;
            goto $l2;
            $l202:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp204.value) {
        {
            org$pandalanguage$pandac$Position* $tmp206 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position205 = *$tmp206;
            $returnValue10 = position205;
            $tmp4 = 39;
            goto $l2;
            $l207:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp209.value) {
        {
            org$pandalanguage$pandac$Position* $tmp211 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position210 = *$tmp211;
            $returnValue10 = position210;
            $tmp4 = 40;
            goto $l2;
            $l212:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp214.value) {
        {
            org$pandalanguage$pandac$Position* $tmp216 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position215 = *$tmp216;
            $returnValue10 = position215;
            $tmp4 = 41;
            goto $l2;
            $l217:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp219.value) {
        {
            org$pandalanguage$pandac$Position* $tmp221 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position220 = *$tmp221;
            $returnValue10 = position220;
            $tmp4 = 42;
            goto $l2;
            $l222:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp224.value) {
        {
            org$pandalanguage$pandac$Position* $tmp226 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position225 = *$tmp226;
            $returnValue10 = position225;
            $tmp4 = 43;
            goto $l2;
            $l227:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp229.value) {
        {
            org$pandalanguage$pandac$Position* $tmp231 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position230 = *$tmp231;
            $returnValue10 = position230;
            $tmp4 = 44;
            goto $l2;
            $l232:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp234.value) {
        {
            org$pandalanguage$pandac$Position* $tmp236 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position235 = *$tmp236;
            $returnValue10 = position235;
            $tmp4 = 45;
            goto $l2;
            $l237:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp239.value) {
        {
            org$pandalanguage$pandac$Position* $tmp241 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position240 = *$tmp241;
            $returnValue10 = position240;
            $tmp4 = 46;
            goto $l2;
            $l242:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp244.value) {
        {
            org$pandalanguage$pandac$Position* $tmp246 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position245 = *$tmp246;
            $returnValue10 = position245;
            $tmp4 = 47;
            goto $l2;
            $l247:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$84_95->$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp249.value) {
        {
            org$pandalanguage$pandac$Position* $tmp251 = ((org$pandalanguage$pandac$Position*) ((char*) $match$84_95->$data + 0));
            position250 = *$tmp251;
            $returnValue10 = position250;
            $tmp4 = 48;
            goto $l2;
            $l252:;
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
        case -1: goto $l254;
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
    $l254:;
}
panda$core$String* org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$189_9258 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp259;
    panda$core$String* name261 = NULL;
    org$pandalanguage$pandac$ASTNode* expr263 = NULL;
    panda$core$String* $returnValue265;
    panda$core$String* $tmp266;
    panda$core$String* $tmp267;
    panda$core$String* $tmp268;
    panda$core$String* $tmp269;
    panda$core$String* $tmp270;
    panda$core$String* $tmp279;
    org$pandalanguage$pandac$ASTNode* test283 = NULL;
    org$pandalanguage$pandac$ASTNode* msg285 = NULL;
    panda$core$String* $tmp287;
    panda$core$String* $tmp288;
    panda$core$String* $tmp289;
    panda$core$String* $tmp296;
    panda$core$String* $tmp297;
    panda$core$String* $tmp298;
    panda$core$String* $tmp299;
    panda$core$String* $tmp300;
    org$pandalanguage$pandac$ASTNode* expr311 = NULL;
    panda$core$String* $tmp313;
    panda$core$String* $tmp314;
    panda$core$String* $tmp315;
    panda$core$String* $tmp323;
    org$pandalanguage$pandac$ASTNode* left328 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op330;
    org$pandalanguage$pandac$ASTNode* right332 = NULL;
    panda$core$String* $tmp334;
    panda$core$String* $tmp335;
    panda$core$String* $tmp336;
    panda$core$String* $tmp337;
    panda$core$String* $tmp338;
    panda$core$String* $tmp339;
    panda$core$String* $tmp340;
    panda$core$Object* $tmp345;
    panda$core$Bit value356;
    panda$core$String* $tmp358;
    panda$core$String* $tmp359;
    panda$collections$ImmutableArray* statements364 = NULL;
    panda$core$MutableString* result369 = NULL;
    panda$core$MutableString* $tmp370;
    panda$core$MutableString* $tmp371;
    panda$collections$Iterator* Iter$210$17377 = NULL;
    panda$collections$Iterator* $tmp378;
    panda$collections$Iterator* $tmp379;
    org$pandalanguage$pandac$ASTNode* s395 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp396;
    panda$core$Object* $tmp397;
    panda$core$String* $tmp402;
    panda$core$Char8 $tmp407;
    panda$core$String* $tmp408;
    panda$core$String* $tmp409;
    panda$core$String* label416 = NULL;
    panda$core$String* $tmp418;
    panda$core$String* $tmp419;
    panda$core$String* $tmp420;
    panda$core$String* $tmp427;
    org$pandalanguage$pandac$ASTNode* target432 = NULL;
    panda$collections$ImmutableArray* args434 = NULL;
    panda$core$String* $tmp436;
    panda$core$String* $tmp437;
    panda$core$String* $tmp438;
    panda$core$String* $tmp439;
    panda$core$String* $tmp440;
    panda$core$String* $tmp445;
    org$pandalanguage$pandac$ASTNode* dc456 = NULL;
    panda$core$String* name458 = NULL;
    panda$collections$ImmutableArray* fields460 = NULL;
    panda$core$MutableString* result465 = NULL;
    panda$core$MutableString* $tmp466;
    panda$core$MutableString* $tmp467;
    panda$core$String* $tmp469;
    panda$core$String* $tmp472;
    panda$core$String* $tmp473;
    panda$core$String* $tmp474;
    panda$core$String* $tmp475;
    panda$core$String* $tmp479;
    panda$core$String* $tmp487;
    panda$core$String* $tmp488;
    org$pandalanguage$pandac$ASTNode* base495 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce497 = NULL;
    panda$core$Int64 index499;
    panda$core$String* $tmp501;
    panda$core$String* $tmp502;
    panda$core$String* $tmp503;
    panda$core$String* $tmp504;
    panda$core$String* $tmp505;
    panda$core$String* $tmp506;
    panda$core$String* $tmp507;
    panda$core$Object* $tmp515;
    org$pandalanguage$pandac$ASTNode* dc523 = NULL;
    panda$collections$ImmutableArray* annotations525 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind527;
    panda$core$String* name529 = NULL;
    panda$collections$ImmutableArray* generics531 = NULL;
    panda$collections$ImmutableArray* supertypes533 = NULL;
    panda$collections$ImmutableArray* members535 = NULL;
    panda$core$MutableString* result540 = NULL;
    panda$core$MutableString* $tmp541;
    panda$core$MutableString* $tmp542;
    panda$core$String* $tmp544;
    panda$collections$Iterator* Iter$236$17550 = NULL;
    panda$collections$Iterator* $tmp551;
    panda$collections$Iterator* $tmp552;
    org$pandalanguage$pandac$ASTNode* a568 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp569;
    panda$core$Object* $tmp570;
    panda$core$String* $tmp575;
    org$pandalanguage$pandac$ClassDecl$Kind $match$239_17580;
    panda$core$String* $tmp587;
    panda$core$String* $tmp588;
    panda$core$String* $tmp590;
    panda$core$String* $tmp598;
    panda$core$String* $tmp599;
    panda$core$String* $tmp601;
    panda$collections$Iterator* Iter$252$17613 = NULL;
    panda$collections$Iterator* $tmp614;
    panda$collections$Iterator* $tmp615;
    org$pandalanguage$pandac$ASTNode* m631 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp632;
    panda$core$Object* $tmp633;
    panda$core$String* $tmp638;
    panda$core$Char8 $tmp643;
    panda$core$String* $tmp644;
    panda$core$String* $tmp645;
    panda$core$String* label652 = NULL;
    panda$core$String* $tmp654;
    panda$core$String* $tmp655;
    panda$core$String* $tmp656;
    panda$core$String* $tmp663;
    org$pandalanguage$pandac$ASTNode* target668 = NULL;
    org$pandalanguage$pandac$ASTNode* value670 = NULL;
    panda$core$String* $tmp672;
    panda$core$String* $tmp673;
    panda$core$String* $tmp674;
    panda$core$String* $tmp675;
    panda$core$String* $tmp676;
    panda$core$String* $tmp686;
    panda$core$String* $tmp687;
    panda$core$String* label693 = NULL;
    panda$collections$ImmutableArray* statements695 = NULL;
    org$pandalanguage$pandac$ASTNode* test697 = NULL;
    panda$core$MutableString* result702 = NULL;
    panda$core$MutableString* $tmp703;
    panda$core$MutableString* $tmp704;
    panda$core$String* $tmp706;
    panda$core$String* $tmp707;
    panda$collections$Iterator* Iter$273$17715 = NULL;
    panda$collections$Iterator* $tmp716;
    panda$collections$Iterator* $tmp717;
    org$pandalanguage$pandac$ASTNode* s733 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp734;
    panda$core$Object* $tmp735;
    panda$core$String* $tmp740;
    panda$core$String* $tmp745;
    panda$core$String* $tmp746;
    panda$core$String* $tmp751;
    panda$core$String* $tmp752;
    org$pandalanguage$pandac$ASTNode* base759 = NULL;
    panda$core$String* field761 = NULL;
    panda$core$String* $tmp763;
    panda$core$String* $tmp764;
    panda$core$String* $tmp765;
    panda$core$String* $tmp766;
    panda$core$String* $tmp767;
    org$pandalanguage$pandac$ASTNode* dc778 = NULL;
    panda$collections$ImmutableArray* annotations780 = NULL;
    org$pandalanguage$pandac$ASTNode* decl782 = NULL;
    panda$core$MutableString* result787 = NULL;
    panda$core$MutableString* $tmp788;
    panda$core$MutableString* $tmp789;
    panda$core$String* $tmp791;
    panda$collections$Iterator* Iter$285$17797 = NULL;
    panda$collections$Iterator* $tmp798;
    panda$collections$Iterator* $tmp799;
    org$pandalanguage$pandac$ASTNode* a815 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp816;
    panda$core$Object* $tmp817;
    panda$core$String* $tmp822;
    panda$core$String* $tmp827;
    panda$core$String* $tmp828;
    panda$collections$ImmutableArray* entries835 = NULL;
    panda$core$MutableString* result840 = NULL;
    panda$core$MutableString* $tmp841;
    panda$core$MutableString* $tmp842;
    panda$collections$Iterator* Iter$292$17847 = NULL;
    panda$collections$Iterator* $tmp848;
    panda$collections$Iterator* $tmp849;
    org$pandalanguage$pandac$ASTNode* e865 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp866;
    panda$core$Object* $tmp867;
    panda$core$String* $tmp872;
    panda$core$String* $tmp877;
    panda$core$String* $tmp878;
    panda$core$String* label885 = NULL;
    org$pandalanguage$pandac$ASTNode* target887 = NULL;
    org$pandalanguage$pandac$ASTNode* list889 = NULL;
    panda$collections$ImmutableArray* statements891 = NULL;
    panda$core$MutableString* result896 = NULL;
    panda$core$MutableString* $tmp897;
    panda$core$MutableString* $tmp898;
    panda$core$String* $tmp900;
    panda$core$String* $tmp903;
    panda$core$String* $tmp904;
    panda$core$String* $tmp905;
    panda$core$String* $tmp906;
    panda$collections$Iterator* Iter$302$17917 = NULL;
    panda$collections$Iterator* $tmp918;
    panda$collections$Iterator* $tmp919;
    org$pandalanguage$pandac$ASTNode* s935 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp936;
    panda$core$Object* $tmp937;
    panda$core$String* $tmp942;
    panda$core$Char8 $tmp947;
    panda$core$String* $tmp948;
    panda$core$String* $tmp949;
    panda$core$String* name956 = NULL;
    panda$collections$ImmutableArray* subtypes958 = NULL;
    panda$core$String* $tmp960;
    panda$core$String* $tmp961;
    panda$core$String* $tmp962;
    panda$core$String* $tmp963;
    panda$core$String* $tmp964;
    panda$core$String* $tmp968;
    panda$core$String* name979 = NULL;
    panda$core$String* $tmp981;
    org$pandalanguage$pandac$ASTNode* test985 = NULL;
    panda$collections$ImmutableArray* ifTrue987 = NULL;
    org$pandalanguage$pandac$ASTNode* ifFalse989 = NULL;
    panda$core$MutableString* result994 = NULL;
    panda$core$MutableString* $tmp995;
    panda$core$MutableString* $tmp996;
    panda$core$String* $tmp998;
    panda$core$String* $tmp999;
    panda$collections$Iterator* Iter$313$171007 = NULL;
    panda$collections$Iterator* $tmp1008;
    panda$collections$Iterator* $tmp1009;
    org$pandalanguage$pandac$ASTNode* s1025 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1026;
    panda$core$Object* $tmp1027;
    panda$core$String* $tmp1032;
    panda$core$Char8 $tmp1037;
    panda$core$String* $tmp1038;
    panda$core$String* $tmp1039;
    panda$core$String* $tmp1044;
    panda$core$String* $tmp1045;
    panda$core$UInt64 value1052;
    panda$core$String* $tmp1054;
    panda$core$String* $tmp1055;
    org$pandalanguage$pandac$IRNode* ir1060 = NULL;
    panda$core$String* $tmp1062;
    panda$core$String* $tmp1063;
    panda$core$String* label1069 = NULL;
    panda$collections$ImmutableArray* statements1071 = NULL;
    panda$core$MutableString* result1076 = NULL;
    panda$core$MutableString* $tmp1077;
    panda$core$MutableString* $tmp1078;
    panda$core$String* $tmp1080;
    panda$core$String* $tmp1081;
    panda$collections$Iterator* Iter$331$171089 = NULL;
    panda$collections$Iterator* $tmp1090;
    panda$collections$Iterator* $tmp1091;
    org$pandalanguage$pandac$ASTNode* s1107 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1108;
    panda$core$Object* $tmp1109;
    panda$core$String* $tmp1114;
    panda$core$Char8 $tmp1119;
    panda$core$String* $tmp1120;
    panda$core$String* $tmp1121;
    org$pandalanguage$pandac$ASTNode* value1128 = NULL;
    panda$collections$ImmutableArray* whens1130 = NULL;
    panda$collections$ImmutableArray* other1132 = NULL;
    panda$core$MutableString* result1137 = NULL;
    panda$core$MutableString* $tmp1138;
    panda$core$MutableString* $tmp1139;
    panda$core$String* $tmp1141;
    panda$core$String* $tmp1142;
    panda$collections$Iterator* Iter$338$171150 = NULL;
    panda$collections$Iterator* $tmp1151;
    panda$collections$Iterator* $tmp1152;
    org$pandalanguage$pandac$ASTNode* w1168 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1169;
    panda$core$Object* $tmp1170;
    panda$core$String* $tmp1175;
    panda$core$String* $tmp1180;
    panda$core$Char8 $tmp1183;
    panda$core$String* $tmp1184;
    panda$core$String* $tmp1185;
    org$pandalanguage$pandac$ASTNode* dc1192 = NULL;
    panda$collections$ImmutableArray* annotations1194 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind1196;
    panda$core$String* name1198 = NULL;
    panda$collections$ImmutableArray* parameters1200 = NULL;
    org$pandalanguage$pandac$ASTNode* returnType1202 = NULL;
    panda$collections$ImmutableArray* statements1204 = NULL;
    panda$core$MutableString* result1209 = NULL;
    panda$core$MutableString* $tmp1210;
    panda$core$MutableString* $tmp1211;
    panda$core$String* $tmp1213;
    panda$collections$Iterator* Iter$351$171219 = NULL;
    panda$collections$Iterator* $tmp1220;
    panda$collections$Iterator* $tmp1221;
    org$pandalanguage$pandac$ASTNode* a1237 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1238;
    panda$core$Object* $tmp1239;
    panda$core$String* $tmp1244;
    org$pandalanguage$pandac$MethodDecl$Kind $match$354_171249;
    panda$core$String* $tmp1255;
    panda$core$String* $tmp1256;
    panda$core$String* $tmp1257;
    panda$core$String* $tmp1258;
    panda$core$String* $tmp1262;
    panda$core$String* $tmp1270;
    panda$core$String* $tmp1271;
    panda$collections$Iterator* Iter$365$211280 = NULL;
    panda$collections$Iterator* $tmp1281;
    panda$collections$Iterator* $tmp1282;
    org$pandalanguage$pandac$ASTNode* s1298 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1299;
    panda$core$Object* $tmp1300;
    panda$core$String* $tmp1305;
    panda$core$Char8 $tmp1310;
    panda$core$String* $tmp1311;
    panda$core$String* $tmp1312;
    org$pandalanguage$pandac$parser$Token$Kind kind1319;
    panda$collections$ImmutableArray* paramTypes1321 = NULL;
    org$pandalanguage$pandac$ASTNode* returnType1323 = NULL;
    panda$core$String* yield1328 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $match$373_171329;
    panda$core$String* $tmp1331;
    panda$core$String* $tmp1332;
    panda$core$String* $tmp1335;
    panda$core$String* $tmp1336;
    panda$core$String* $tmp1339;
    panda$core$String* $tmp1340;
    panda$core$String* $tmp1343;
    panda$core$String* $tmp1344;
    panda$core$String* partial1346 = NULL;
    panda$core$String* $tmp1347;
    panda$core$String* $tmp1348;
    panda$core$String* $tmp1349;
    panda$core$String* $tmp1350;
    panda$core$String* $tmp1351;
    panda$core$String* $tmp1353;
    panda$core$String* $tmp1364;
    panda$core$String* $tmp1365;
    panda$core$String* $tmp1366;
    panda$core$String* $tmp1367;
    panda$core$String* $tmp1368;
    panda$core$String* $tmp1378;
    panda$core$String* $tmp1379;
    panda$core$String* $tmp1380;
    panda$core$String* $tmp1389;
    org$pandalanguage$pandac$ASTNode* base1394 = NULL;
    panda$core$String* $tmp1396;
    panda$core$String* $tmp1397;
    panda$core$String* name1403 = NULL;
    panda$core$String* $tmp1405;
    panda$core$String* name1409 = NULL;
    org$pandalanguage$pandac$ASTNode* type1411 = NULL;
    panda$core$String* $tmp1413;
    panda$core$String* $tmp1414;
    panda$core$String* $tmp1415;
    panda$core$String* $tmp1416;
    panda$core$String* $tmp1417;
    org$pandalanguage$pandac$parser$Token$Kind kind1427;
    org$pandalanguage$pandac$ASTNode* base1429 = NULL;
    panda$core$String* $tmp1431;
    panda$core$String* $tmp1432;
    panda$core$String* $tmp1433;
    panda$core$String* $tmp1434;
    panda$core$String* $tmp1435;
    panda$core$Object* $tmp1436;
    org$pandalanguage$pandac$ASTNode* start1448 = NULL;
    org$pandalanguage$pandac$ASTNode* end1450 = NULL;
    panda$core$Bit inclusive1452;
    org$pandalanguage$pandac$ASTNode* step1454 = NULL;
    panda$core$MutableString* result1459 = NULL;
    panda$core$MutableString* $tmp1460;
    panda$core$MutableString* $tmp1461;
    panda$core$String* $tmp1465;
    panda$core$String* $tmp1468;
    panda$core$String* $tmp1469;
    panda$core$Real64 value1476;
    panda$core$String* $tmp1478;
    panda$core$String* $tmp1479;
    org$pandalanguage$pandac$ASTNode* value1484 = NULL;
    panda$core$String* $tmp1486;
    panda$core$String* $tmp1487;
    panda$core$String* $tmp1488;
    panda$core$String* $tmp1495;
    panda$core$String* $tmp1500;
    panda$core$String* str1505 = NULL;
    panda$core$String* $tmp1507;
    panda$core$String* $tmp1508;
    panda$core$String* $tmp1514;
    panda$collections$ImmutableArray* arguments1519 = NULL;
    panda$core$String* $tmp1521;
    panda$core$String* $tmp1522;
    panda$core$String* $tmp1523;
    panda$core$String* $tmp1525;
    panda$collections$ImmutableArray* parameters1536 = NULL;
    panda$core$String* $tmp1538;
    panda$core$String* $tmp1539;
    panda$core$String* $tmp1540;
    panda$core$String* $tmp1542;
    panda$core$String* name1553 = NULL;
    panda$core$String* $tmp1555;
    panda$core$String* name1559 = NULL;
    org$pandalanguage$pandac$ASTNode* type1561 = NULL;
    panda$core$String* $tmp1563;
    panda$core$String* $tmp1564;
    panda$core$String* $tmp1565;
    panda$core$String* $tmp1566;
    panda$core$String* $tmp1567;
    panda$core$String* $tmp1576;
    panda$collections$ImmutableArray* parameters1580 = NULL;
    org$pandalanguage$pandac$ASTNode* body1582 = NULL;
    panda$core$String* $tmp1584;
    panda$core$String* $tmp1585;
    panda$core$String* $tmp1586;
    panda$core$String* $tmp1587;
    panda$core$String* $tmp1588;
    panda$core$String* $tmp1590;
    panda$collections$ImmutableArray* parameters1604 = NULL;
    org$pandalanguage$pandac$ASTNode* body1606 = NULL;
    panda$core$String* $tmp1608;
    panda$core$String* $tmp1609;
    panda$core$String* $tmp1610;
    panda$core$String* $tmp1611;
    panda$core$String* $tmp1612;
    panda$core$String* $tmp1614;
    panda$core$String* name1628 = NULL;
    panda$core$String* $tmp1630;
    org$pandalanguage$pandac$Variable$Kind kind1634;
    panda$collections$ImmutableArray* decls1636 = NULL;
    panda$core$MutableString* result1641 = NULL;
    panda$core$MutableString* $tmp1642;
    panda$core$MutableString* $tmp1643;
    org$pandalanguage$pandac$Variable$Kind $match$448_171645;
    panda$core$String* $tmp1654;
    panda$core$String* $tmp1659;
    panda$core$String* $tmp1660;
    panda$collections$ImmutableArray* tests1667 = NULL;
    panda$collections$ImmutableArray* statements1669 = NULL;
    panda$core$MutableString* result1674 = NULL;
    panda$core$MutableString* $tmp1675;
    panda$core$MutableString* $tmp1676;
    panda$core$String* separator1679 = NULL;
    panda$core$String* $tmp1680;
    panda$collections$Iterator* Iter$459$171685 = NULL;
    panda$collections$Iterator* $tmp1686;
    panda$collections$Iterator* $tmp1687;
    org$pandalanguage$pandac$ASTNode* t1703 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1704;
    panda$core$Object* $tmp1705;
    panda$core$String* $tmp1710;
    panda$core$String* $tmp1711;
    panda$core$String* $tmp1712;
    panda$core$String* $tmp1713;
    panda$core$Char8 $tmp1722;
    panda$collections$Iterator* Iter$463$171726 = NULL;
    panda$collections$Iterator* $tmp1727;
    panda$collections$Iterator* $tmp1728;
    org$pandalanguage$pandac$ASTNode* s1744 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1745;
    panda$core$Object* $tmp1746;
    panda$core$String* $tmp1751;
    panda$core$String* $tmp1756;
    panda$core$String* $tmp1757;
    panda$core$String* label1764 = NULL;
    org$pandalanguage$pandac$ASTNode* test1766 = NULL;
    panda$collections$ImmutableArray* statements1768 = NULL;
    panda$core$MutableString* result1773 = NULL;
    panda$core$MutableString* $tmp1774;
    panda$core$MutableString* $tmp1775;
    panda$core$String* $tmp1777;
    panda$core$String* $tmp1778;
    panda$core$String* $tmp1782;
    panda$core$String* $tmp1783;
    panda$collections$Iterator* Iter$473$171791 = NULL;
    panda$collections$Iterator* $tmp1792;
    panda$collections$Iterator* $tmp1793;
    org$pandalanguage$pandac$ASTNode* s1809 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1810;
    panda$core$Object* $tmp1811;
    panda$core$String* $tmp1816;
    panda$core$Char8 $tmp1821;
    panda$core$String* $tmp1822;
    panda$core$String* $tmp1823;
    int $tmp257;
    {
        $tmp259 = self;
        $match$189_9258 = $tmp259;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp259));
        panda$core$Bit $tmp260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp260.value) {
        {
            panda$core$String** $tmp262 = ((panda$core$String**) ((char*) $match$189_9258->$data + 16));
            name261 = *$tmp262;
            org$pandalanguage$pandac$ASTNode** $tmp264 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 24));
            expr263 = *$tmp264;
            if (((panda$core$Bit) { expr263 != NULL }).value) {
            {
                panda$core$String* $tmp271 = panda$core$String$convert$R$panda$core$String(name261);
                $tmp270 = $tmp271;
                panda$core$String* $tmp273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp270, &$s272);
                $tmp269 = $tmp273;
                panda$core$String* $tmp274 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp269, ((panda$core$Object*) expr263));
                $tmp268 = $tmp274;
                panda$core$String* $tmp276 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp268, &$s275);
                $tmp267 = $tmp276;
                $tmp266 = $tmp267;
                $returnValue265 = $tmp266;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp266));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp267));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp268));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp269));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp270));
                $tmp257 = 0;
                goto $l255;
                $l277:;
                return $returnValue265;
            }
            }
            $tmp279 = name261;
            $returnValue265 = $tmp279;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp279));
            $tmp257 = 1;
            goto $l255;
            $l280:;
            return $returnValue265;
        }
        }
        else {
        panda$core$Bit $tmp282 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp282.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp284 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 16));
            test283 = *$tmp284;
            org$pandalanguage$pandac$ASTNode** $tmp286 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 24));
            msg285 = *$tmp286;
            if (((panda$core$Bit) { msg285 == NULL }).value) {
            {
                panda$core$String* $tmp291 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s290, ((panda$core$Object*) test283));
                $tmp289 = $tmp291;
                panda$core$String* $tmp293 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp289, &$s292);
                $tmp288 = $tmp293;
                $tmp287 = $tmp288;
                $returnValue265 = $tmp287;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp287));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp288));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp289));
                $tmp257 = 2;
                goto $l255;
                $l294:;
                return $returnValue265;
            }
            }
            panda$core$String* $tmp302 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s301, ((panda$core$Object*) test283));
            $tmp300 = $tmp302;
            panda$core$String* $tmp304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp300, &$s303);
            $tmp299 = $tmp304;
            panda$core$String* $tmp305 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp299, ((panda$core$Object*) msg285));
            $tmp298 = $tmp305;
            panda$core$String* $tmp307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp298, &$s306);
            $tmp297 = $tmp307;
            $tmp296 = $tmp297;
            $returnValue265 = $tmp296;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp296));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp297));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp298));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp299));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp300));
            $tmp257 = 3;
            goto $l255;
            $l308:;
            return $returnValue265;
        }
        }
        else {
        panda$core$Bit $tmp310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp310.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp312 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 16));
            expr311 = *$tmp312;
            panda$core$String* $tmp317 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s316, ((panda$core$Object*) expr311));
            $tmp315 = $tmp317;
            panda$core$String* $tmp319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp315, &$s318);
            $tmp314 = $tmp319;
            $tmp313 = $tmp314;
            $returnValue265 = $tmp313;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp313));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp314));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp315));
            $tmp257 = 4;
            goto $l255;
            $l320:;
            return $returnValue265;
        }
        }
        else {
        panda$core$Bit $tmp322 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp322.value) {
        {
            $tmp323 = &$s324;
            $returnValue265 = $tmp323;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp323));
            $tmp257 = 5;
            goto $l255;
            $l325:;
            return $returnValue265;
        }
        }
        else {
        panda$core$Bit $tmp327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp327.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp329 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 16));
            left328 = *$tmp329;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp331 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$189_9258->$data + 24));
            op330 = *$tmp331;
            org$pandalanguage$pandac$ASTNode** $tmp333 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 32));
            right332 = *$tmp333;
            panda$core$String* $tmp342 = (($fn341) left328->$class->vtable[0])(left328);
            $tmp340 = $tmp342;
            panda$core$String* $tmp344 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp340, &$s343);
            $tmp339 = $tmp344;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp346;
            $tmp346 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp346->value = op330;
            $tmp345 = ((panda$core$Object*) $tmp346);
            panda$core$String* $tmp347 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp339, $tmp345);
            $tmp338 = $tmp347;
            panda$core$String* $tmp349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp338, &$s348);
            $tmp337 = $tmp349;
            panda$core$String* $tmp350 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp337, ((panda$core$Object*) right332));
            $tmp336 = $tmp350;
            panda$core$String* $tmp352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp336, &$s351);
            $tmp335 = $tmp352;
            $tmp334 = $tmp335;
            $returnValue265 = $tmp334;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp334));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp335));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp336));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp337));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp338));
            panda$core$Panda$unref$panda$core$Object($tmp345);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp339));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp340));
            $tmp257 = 6;
            goto $l255;
            $l353:;
            return $returnValue265;
        }
        }
        else {
        panda$core$Bit $tmp355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp355.value) {
        {
            panda$core$Bit* $tmp357 = ((panda$core$Bit*) ((char*) $match$189_9258->$data + 16));
            value356 = *$tmp357;
            panda$core$String* $tmp360 = panda$core$Bit$convert$R$panda$core$String(value356);
            $tmp359 = $tmp360;
            $tmp358 = $tmp359;
            $returnValue265 = $tmp358;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp358));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp359));
            $tmp257 = 7;
            goto $l255;
            $l361:;
            return $returnValue265;
        }
        }
        else {
        panda$core$Bit $tmp363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp363.value) {
        {
            panda$collections$ImmutableArray** $tmp365 = ((panda$collections$ImmutableArray**) ((char*) $match$189_9258->$data + 16));
            statements364 = *$tmp365;
            int $tmp368;
            {
                panda$core$MutableString* $tmp372 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp372, &$s373);
                $tmp371 = $tmp372;
                $tmp370 = $tmp371;
                result369 = $tmp370;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp370));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp371));
                {
                    int $tmp376;
                    {
                        ITable* $tmp380 = ((panda$collections$Iterable*) statements364)->$class->itable;
                        while ($tmp380->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp380 = $tmp380->next;
                        }
                        $fn382 $tmp381 = $tmp380->methods[0];
                        panda$collections$Iterator* $tmp383 = $tmp381(((panda$collections$Iterable*) statements364));
                        $tmp379 = $tmp383;
                        $tmp378 = $tmp379;
                        Iter$210$17377 = $tmp378;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp378));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp379));
                        $l384:;
                        ITable* $tmp387 = Iter$210$17377->$class->itable;
                        while ($tmp387->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp387 = $tmp387->next;
                        }
                        $fn389 $tmp388 = $tmp387->methods[0];
                        panda$core$Bit $tmp390 = $tmp388(Iter$210$17377);
                        panda$core$Bit $tmp391 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp390);
                        bool $tmp386 = $tmp391.value;
                        if (!$tmp386) goto $l385;
                        {
                            int $tmp394;
                            {
                                ITable* $tmp398 = Iter$210$17377->$class->itable;
                                while ($tmp398->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp398 = $tmp398->next;
                                }
                                $fn400 $tmp399 = $tmp398->methods[1];
                                panda$core$Object* $tmp401 = $tmp399(Iter$210$17377);
                                $tmp397 = $tmp401;
                                $tmp396 = ((org$pandalanguage$pandac$ASTNode*) $tmp397);
                                s395 = $tmp396;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp396));
                                panda$core$Panda$unref$panda$core$Object($tmp397);
                                panda$core$String* $tmp404 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s395), &$s403);
                                $tmp402 = $tmp404;
                                panda$core$MutableString$append$panda$core$String(result369, $tmp402);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp402));
                            }
                            $tmp394 = -1;
                            goto $l392;
                            $l392:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s395));
                            s395 = NULL;
                            switch ($tmp394) {
                                case -1: goto $l405;
                            }
                            $l405:;
                        }
                        goto $l384;
                        $l385:;
                    }
                    $tmp376 = -1;
                    goto $l374;
                    $l374:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$210$17377));
                    Iter$210$17377 = NULL;
                    switch ($tmp376) {
                        case -1: goto $l406;
                    }
                    $l406:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp407, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result369, $tmp407);
                panda$core$String* $tmp410 = panda$core$MutableString$finish$R$panda$core$String(result369);
                $tmp409 = $tmp410;
                $tmp408 = $tmp409;
                $returnValue265 = $tmp408;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp408));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp409));
                $tmp368 = 0;
                goto $l366;
                $l411:;
                $tmp257 = 8;
                goto $l255;
                $l412:;
                return $returnValue265;
            }
            $l366:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result369));
            result369 = NULL;
            switch ($tmp368) {
                case 0: goto $l411;
            }
            $l414:;
        }
        }
        else {
        panda$core$Bit $tmp415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp415.value) {
        {
            panda$core$String** $tmp417 = ((panda$core$String**) ((char*) $match$189_9258->$data + 16));
            label416 = *$tmp417;
            if (((panda$core$Bit) { label416 != NULL }).value) {
            {
                panda$core$String* $tmp422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s421, label416);
                $tmp420 = $tmp422;
                panda$core$String* $tmp424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp420, &$s423);
                $tmp419 = $tmp424;
                $tmp418 = $tmp419;
                $returnValue265 = $tmp418;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp418));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp419));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp420));
                $tmp257 = 9;
                goto $l255;
                $l425:;
                return $returnValue265;
            }
            }
            $tmp427 = &$s428;
            $returnValue265 = $tmp427;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp427));
            $tmp257 = 10;
            goto $l255;
            $l429:;
            return $returnValue265;
        }
        }
        else {
        panda$core$Bit $tmp431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp431.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp433 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 16));
            target432 = *$tmp433;
            panda$collections$ImmutableArray** $tmp435 = ((panda$collections$ImmutableArray**) ((char*) $match$189_9258->$data + 24));
            args434 = *$tmp435;
            panda$core$String* $tmp442 = (($fn441) target432->$class->vtable[0])(target432);
            $tmp440 = $tmp442;
            panda$core$String* $tmp444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp440, &$s443);
            $tmp439 = $tmp444;
            ITable* $tmp446 = ((panda$collections$ListView*) args434)->$class->itable;
            while ($tmp446->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp446 = $tmp446->next;
            }
            $fn448 $tmp447 = $tmp446->methods[1];
            panda$core$String* $tmp449 = $tmp447(((panda$collections$ListView*) args434));
            $tmp445 = $tmp449;
            panda$core$String* $tmp450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp439, $tmp445);
            $tmp438 = $tmp450;
            panda$core$String* $tmp452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp438, &$s451);
            $tmp437 = $tmp452;
            $tmp436 = $tmp437;
            $returnValue265 = $tmp436;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp436));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp437));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp438));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp445));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp439));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp440));
            $tmp257 = 11;
            goto $l255;
            $l453:;
            return $returnValue265;
        }
        }
        else {
        panda$core$Bit $tmp455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp455.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp457 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 16));
            dc456 = *$tmp457;
            panda$core$String** $tmp459 = ((panda$core$String**) ((char*) $match$189_9258->$data + 24));
            name458 = *$tmp459;
            panda$collections$ImmutableArray** $tmp461 = ((panda$collections$ImmutableArray**) ((char*) $match$189_9258->$data + 32));
            fields460 = *$tmp461;
            int $tmp464;
            {
                panda$core$MutableString* $tmp468 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp468);
                $tmp467 = $tmp468;
                $tmp466 = $tmp467;
                result465 = $tmp466;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp466));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp467));
                if (((panda$core$Bit) { dc456 != NULL }).value) {
                {
                    panda$core$String* $tmp471 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc456), &$s470);
                    $tmp469 = $tmp471;
                    panda$core$MutableString$append$panda$core$String(result465, $tmp469);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp469));
                }
                }
                panda$core$String* $tmp476 = panda$core$String$convert$R$panda$core$String(name458);
                $tmp475 = $tmp476;
                panda$core$String* $tmp478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp475, &$s477);
                $tmp474 = $tmp478;
                ITable* $tmp480 = ((panda$collections$ListView*) fields460)->$class->itable;
                while ($tmp480->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp480 = $tmp480->next;
                }
                $fn482 $tmp481 = $tmp480->methods[1];
                panda$core$String* $tmp483 = $tmp481(((panda$collections$ListView*) fields460));
                $tmp479 = $tmp483;
                panda$core$String* $tmp484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp474, $tmp479);
                $tmp473 = $tmp484;
                panda$core$String* $tmp486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp473, &$s485);
                $tmp472 = $tmp486;
                panda$core$MutableString$append$panda$core$String(result465, $tmp472);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp472));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp473));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp479));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp474));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp475));
                panda$core$String* $tmp489 = panda$core$MutableString$finish$R$panda$core$String(result465);
                $tmp488 = $tmp489;
                $tmp487 = $tmp488;
                $returnValue265 = $tmp487;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp487));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp488));
                $tmp464 = 0;
                goto $l462;
                $l490:;
                $tmp257 = 12;
                goto $l255;
                $l491:;
                return $returnValue265;
            }
            $l462:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result465));
            result465 = NULL;
            switch ($tmp464) {
                case 0: goto $l490;
            }
            $l493:;
        }
        }
        else {
        panda$core$Bit $tmp494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp494.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp496 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 16));
            base495 = *$tmp496;
            org$pandalanguage$pandac$ChoiceEntry** $tmp498 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$189_9258->$data + 24));
            ce497 = *$tmp498;
            panda$core$Int64* $tmp500 = ((panda$core$Int64*) ((char*) $match$189_9258->$data + 32));
            index499 = *$tmp500;
            panda$core$String* $tmp509 = (($fn508) base495->$class->vtable[0])(base495);
            $tmp507 = $tmp509;
            panda$core$String* $tmp511 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp507, &$s510);
            $tmp506 = $tmp511;
            panda$core$String* $tmp512 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp506, ((panda$core$Object*) ce497));
            $tmp505 = $tmp512;
            panda$core$String* $tmp514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp505, &$s513);
            $tmp504 = $tmp514;
            panda$core$Int64$wrapper* $tmp516;
            $tmp516 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp516->value = index499;
            $tmp515 = ((panda$core$Object*) $tmp516);
            panda$core$String* $tmp517 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp504, $tmp515);
            $tmp503 = $tmp517;
            panda$core$String* $tmp519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp503, &$s518);
            $tmp502 = $tmp519;
            $tmp501 = $tmp502;
            $returnValue265 = $tmp501;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp501));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp502));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp503));
            panda$core$Panda$unref$panda$core$Object($tmp515);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp504));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp505));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp506));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp507));
            $tmp257 = 13;
            goto $l255;
            $l520:;
            return $returnValue265;
        }
        }
        else {
        panda$core$Bit $tmp522 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp522.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp524 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 16));
            dc523 = *$tmp524;
            panda$collections$ImmutableArray** $tmp526 = ((panda$collections$ImmutableArray**) ((char*) $match$189_9258->$data + 24));
            annotations525 = *$tmp526;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp528 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$189_9258->$data + 32));
            kind527 = *$tmp528;
            panda$core$String** $tmp530 = ((panda$core$String**) ((char*) $match$189_9258->$data + 40));
            name529 = *$tmp530;
            panda$collections$ImmutableArray** $tmp532 = ((panda$collections$ImmutableArray**) ((char*) $match$189_9258->$data + 48));
            generics531 = *$tmp532;
            panda$collections$ImmutableArray** $tmp534 = ((panda$collections$ImmutableArray**) ((char*) $match$189_9258->$data + 56));
            supertypes533 = *$tmp534;
            panda$collections$ImmutableArray** $tmp536 = ((panda$collections$ImmutableArray**) ((char*) $match$189_9258->$data + 64));
            members535 = *$tmp536;
            int $tmp539;
            {
                panda$core$MutableString* $tmp543 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp543);
                $tmp542 = $tmp543;
                $tmp541 = $tmp542;
                result540 = $tmp541;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp541));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp542));
                if (((panda$core$Bit) { dc523 != NULL }).value) {
                {
                    panda$core$String* $tmp546 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc523), &$s545);
                    $tmp544 = $tmp546;
                    panda$core$MutableString$append$panda$core$String(result540, $tmp544);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp544));
                }
                }
                {
                    int $tmp549;
                    {
                        ITable* $tmp553 = ((panda$collections$Iterable*) annotations525)->$class->itable;
                        while ($tmp553->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp553 = $tmp553->next;
                        }
                        $fn555 $tmp554 = $tmp553->methods[0];
                        panda$collections$Iterator* $tmp556 = $tmp554(((panda$collections$Iterable*) annotations525));
                        $tmp552 = $tmp556;
                        $tmp551 = $tmp552;
                        Iter$236$17550 = $tmp551;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp551));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp552));
                        $l557:;
                        ITable* $tmp560 = Iter$236$17550->$class->itable;
                        while ($tmp560->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp560 = $tmp560->next;
                        }
                        $fn562 $tmp561 = $tmp560->methods[0];
                        panda$core$Bit $tmp563 = $tmp561(Iter$236$17550);
                        panda$core$Bit $tmp564 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp563);
                        bool $tmp559 = $tmp564.value;
                        if (!$tmp559) goto $l558;
                        {
                            int $tmp567;
                            {
                                ITable* $tmp571 = Iter$236$17550->$class->itable;
                                while ($tmp571->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp571 = $tmp571->next;
                                }
                                $fn573 $tmp572 = $tmp571->methods[1];
                                panda$core$Object* $tmp574 = $tmp572(Iter$236$17550);
                                $tmp570 = $tmp574;
                                $tmp569 = ((org$pandalanguage$pandac$ASTNode*) $tmp570);
                                a568 = $tmp569;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp569));
                                panda$core$Panda$unref$panda$core$Object($tmp570);
                                panda$core$String* $tmp577 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a568), &$s576);
                                $tmp575 = $tmp577;
                                panda$core$MutableString$append$panda$core$String(result540, $tmp575);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp575));
                            }
                            $tmp567 = -1;
                            goto $l565;
                            $l565:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a568));
                            a568 = NULL;
                            switch ($tmp567) {
                                case -1: goto $l578;
                            }
                            $l578:;
                        }
                        goto $l557;
                        $l558:;
                    }
                    $tmp549 = -1;
                    goto $l547;
                    $l547:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$236$17550));
                    Iter$236$17550 = NULL;
                    switch ($tmp549) {
                        case -1: goto $l579;
                    }
                    $l579:;
                }
                {
                    $match$239_17580 = kind527;
                    panda$core$Bit $tmp581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$239_17580.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp581.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result540, &$s582);
                    }
                    }
                    else {
                    panda$core$Bit $tmp583 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$239_17580.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp583.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result540, &$s584);
                    }
                    }
                    else {
                    panda$core$Bit $tmp585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$239_17580.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp585.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result540, &$s586);
                    }
                    }
                    }
                    }
                }
                panda$core$MutableString$append$panda$core$String(result540, name529);
                if (((panda$core$Bit) { generics531 != NULL }).value) {
                {
                    ITable* $tmp591 = ((panda$collections$ListView*) generics531)->$class->itable;
                    while ($tmp591->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp591 = $tmp591->next;
                    }
                    $fn593 $tmp592 = $tmp591->methods[1];
                    panda$core$String* $tmp594 = $tmp592(((panda$collections$ListView*) generics531));
                    $tmp590 = $tmp594;
                    panda$core$String* $tmp595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s589, $tmp590);
                    $tmp588 = $tmp595;
                    panda$core$String* $tmp597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp588, &$s596);
                    $tmp587 = $tmp597;
                    panda$core$MutableString$append$panda$core$String(result540, $tmp587);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp587));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp588));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp590));
                }
                }
                if (((panda$core$Bit) { supertypes533 != NULL }).value) {
                {
                    ITable* $tmp602 = ((panda$collections$ListView*) supertypes533)->$class->itable;
                    while ($tmp602->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp602 = $tmp602->next;
                    }
                    $fn604 $tmp603 = $tmp602->methods[1];
                    panda$core$String* $tmp605 = $tmp603(((panda$collections$ListView*) supertypes533));
                    $tmp601 = $tmp605;
                    panda$core$String* $tmp606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s600, $tmp601);
                    $tmp599 = $tmp606;
                    panda$core$String* $tmp608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp599, &$s607);
                    $tmp598 = $tmp608;
                    panda$core$MutableString$append$panda$core$String(result540, $tmp598);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp598));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp599));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp601));
                }
                }
                panda$core$MutableString$append$panda$core$String(result540, &$s609);
                {
                    int $tmp612;
                    {
                        ITable* $tmp616 = ((panda$collections$Iterable*) members535)->$class->itable;
                        while ($tmp616->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp616 = $tmp616->next;
                        }
                        $fn618 $tmp617 = $tmp616->methods[0];
                        panda$collections$Iterator* $tmp619 = $tmp617(((panda$collections$Iterable*) members535));
                        $tmp615 = $tmp619;
                        $tmp614 = $tmp615;
                        Iter$252$17613 = $tmp614;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp614));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp615));
                        $l620:;
                        ITable* $tmp623 = Iter$252$17613->$class->itable;
                        while ($tmp623->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp623 = $tmp623->next;
                        }
                        $fn625 $tmp624 = $tmp623->methods[0];
                        panda$core$Bit $tmp626 = $tmp624(Iter$252$17613);
                        panda$core$Bit $tmp627 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp626);
                        bool $tmp622 = $tmp627.value;
                        if (!$tmp622) goto $l621;
                        {
                            int $tmp630;
                            {
                                ITable* $tmp634 = Iter$252$17613->$class->itable;
                                while ($tmp634->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp634 = $tmp634->next;
                                }
                                $fn636 $tmp635 = $tmp634->methods[1];
                                panda$core$Object* $tmp637 = $tmp635(Iter$252$17613);
                                $tmp633 = $tmp637;
                                $tmp632 = ((org$pandalanguage$pandac$ASTNode*) $tmp633);
                                m631 = $tmp632;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp632));
                                panda$core$Panda$unref$panda$core$Object($tmp633);
                                panda$core$String* $tmp640 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) m631), &$s639);
                                $tmp638 = $tmp640;
                                panda$core$MutableString$append$panda$core$String(result540, $tmp638);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp638));
                            }
                            $tmp630 = -1;
                            goto $l628;
                            $l628:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m631));
                            m631 = NULL;
                            switch ($tmp630) {
                                case -1: goto $l641;
                            }
                            $l641:;
                        }
                        goto $l620;
                        $l621:;
                    }
                    $tmp612 = -1;
                    goto $l610;
                    $l610:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$252$17613));
                    Iter$252$17613 = NULL;
                    switch ($tmp612) {
                        case -1: goto $l642;
                    }
                    $l642:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp643, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result540, $tmp643);
                panda$core$String* $tmp646 = panda$core$MutableString$finish$R$panda$core$String(result540);
                $tmp645 = $tmp646;
                $tmp644 = $tmp645;
                $returnValue265 = $tmp644;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp644));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp645));
                $tmp539 = 0;
                goto $l537;
                $l647:;
                $tmp257 = 14;
                goto $l255;
                $l648:;
                return $returnValue265;
            }
            $l537:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result540));
            result540 = NULL;
            switch ($tmp539) {
                case 0: goto $l647;
            }
            $l650:;
        }
        }
        else {
        panda$core$Bit $tmp651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp651.value) {
        {
            panda$core$String** $tmp653 = ((panda$core$String**) ((char*) $match$189_9258->$data + 16));
            label652 = *$tmp653;
            if (((panda$core$Bit) { label652 != NULL }).value) {
            {
                panda$core$String* $tmp658 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s657, label652);
                $tmp656 = $tmp658;
                panda$core$String* $tmp660 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp656, &$s659);
                $tmp655 = $tmp660;
                $tmp654 = $tmp655;
                $returnValue265 = $tmp654;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp654));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp655));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp656));
                $tmp257 = 15;
                goto $l255;
                $l661:;
                return $returnValue265;
            }
            }
            $tmp663 = &$s664;
            $returnValue265 = $tmp663;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp663));
            $tmp257 = 16;
            goto $l255;
            $l665:;
            return $returnValue265;
        }
        }
        else {
        panda$core$Bit $tmp667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp667.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp669 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 16));
            target668 = *$tmp669;
            org$pandalanguage$pandac$ASTNode** $tmp671 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 24));
            value670 = *$tmp671;
            if (((panda$core$Bit) { value670 != NULL }).value) {
            {
                panda$core$String* $tmp678 = (($fn677) target668->$class->vtable[0])(target668);
                $tmp676 = $tmp678;
                panda$core$String* $tmp680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp676, &$s679);
                $tmp675 = $tmp680;
                panda$core$String* $tmp681 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp675, ((panda$core$Object*) value670));
                $tmp674 = $tmp681;
                panda$core$String* $tmp683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp674, &$s682);
                $tmp673 = $tmp683;
                $tmp672 = $tmp673;
                $returnValue265 = $tmp672;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp672));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp673));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp674));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp675));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp676));
                $tmp257 = 17;
                goto $l255;
                $l684:;
                return $returnValue265;
            }
            }
            panda$core$String* $tmp689 = (($fn688) target668->$class->vtable[0])(target668);
            $tmp687 = $tmp689;
            $tmp686 = $tmp687;
            $returnValue265 = $tmp686;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp686));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp687));
            $tmp257 = 18;
            goto $l255;
            $l690:;
            return $returnValue265;
        }
        }
        else {
        panda$core$Bit $tmp692 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp692.value) {
        {
            panda$core$String** $tmp694 = ((panda$core$String**) ((char*) $match$189_9258->$data + 16));
            label693 = *$tmp694;
            panda$collections$ImmutableArray** $tmp696 = ((panda$collections$ImmutableArray**) ((char*) $match$189_9258->$data + 24));
            statements695 = *$tmp696;
            org$pandalanguage$pandac$ASTNode** $tmp698 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 32));
            test697 = *$tmp698;
            int $tmp701;
            {
                panda$core$MutableString* $tmp705 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp705);
                $tmp704 = $tmp705;
                $tmp703 = $tmp704;
                result702 = $tmp703;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp703));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp704));
                if (((panda$core$Bit) { label693 != NULL }).value) {
                {
                    panda$core$String* $tmp708 = panda$core$String$convert$R$panda$core$String(label693);
                    $tmp707 = $tmp708;
                    panda$core$String* $tmp710 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp707, &$s709);
                    $tmp706 = $tmp710;
                    panda$core$MutableString$append$panda$core$String(result702, $tmp706);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp706));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp707));
                }
                }
                panda$core$MutableString$append$panda$core$String(result702, &$s711);
                {
                    int $tmp714;
                    {
                        ITable* $tmp718 = ((panda$collections$Iterable*) statements695)->$class->itable;
                        while ($tmp718->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp718 = $tmp718->next;
                        }
                        $fn720 $tmp719 = $tmp718->methods[0];
                        panda$collections$Iterator* $tmp721 = $tmp719(((panda$collections$Iterable*) statements695));
                        $tmp717 = $tmp721;
                        $tmp716 = $tmp717;
                        Iter$273$17715 = $tmp716;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp716));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp717));
                        $l722:;
                        ITable* $tmp725 = Iter$273$17715->$class->itable;
                        while ($tmp725->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp725 = $tmp725->next;
                        }
                        $fn727 $tmp726 = $tmp725->methods[0];
                        panda$core$Bit $tmp728 = $tmp726(Iter$273$17715);
                        panda$core$Bit $tmp729 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp728);
                        bool $tmp724 = $tmp729.value;
                        if (!$tmp724) goto $l723;
                        {
                            int $tmp732;
                            {
                                ITable* $tmp736 = Iter$273$17715->$class->itable;
                                while ($tmp736->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp736 = $tmp736->next;
                                }
                                $fn738 $tmp737 = $tmp736->methods[1];
                                panda$core$Object* $tmp739 = $tmp737(Iter$273$17715);
                                $tmp735 = $tmp739;
                                $tmp734 = ((org$pandalanguage$pandac$ASTNode*) $tmp735);
                                s733 = $tmp734;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp734));
                                panda$core$Panda$unref$panda$core$Object($tmp735);
                                panda$core$String* $tmp742 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s733), &$s741);
                                $tmp740 = $tmp742;
                                panda$core$MutableString$append$panda$core$String(result702, $tmp740);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp740));
                            }
                            $tmp732 = -1;
                            goto $l730;
                            $l730:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s733));
                            s733 = NULL;
                            switch ($tmp732) {
                                case -1: goto $l743;
                            }
                            $l743:;
                        }
                        goto $l722;
                        $l723:;
                    }
                    $tmp714 = -1;
                    goto $l712;
                    $l712:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$273$17715));
                    Iter$273$17715 = NULL;
                    switch ($tmp714) {
                        case -1: goto $l744;
                    }
                    $l744:;
                }
                panda$core$String* $tmp748 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s747, ((panda$core$Object*) test697));
                $tmp746 = $tmp748;
                panda$core$String* $tmp750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp746, &$s749);
                $tmp745 = $tmp750;
                panda$core$MutableString$append$panda$core$String(result702, $tmp745);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp745));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp746));
                panda$core$String* $tmp753 = panda$core$MutableString$finish$R$panda$core$String(result702);
                $tmp752 = $tmp753;
                $tmp751 = $tmp752;
                $returnValue265 = $tmp751;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp751));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp752));
                $tmp701 = 0;
                goto $l699;
                $l754:;
                $tmp257 = 19;
                goto $l255;
                $l755:;
                return $returnValue265;
            }
            $l699:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result702));
            result702 = NULL;
            switch ($tmp701) {
                case 0: goto $l754;
            }
            $l757:;
        }
        }
        else {
        panda$core$Bit $tmp758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp758.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp760 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 16));
            base759 = *$tmp760;
            panda$core$String** $tmp762 = ((panda$core$String**) ((char*) $match$189_9258->$data + 24));
            field761 = *$tmp762;
            panda$core$String* $tmp769 = (($fn768) base759->$class->vtable[0])(base759);
            $tmp767 = $tmp769;
            panda$core$String* $tmp771 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp767, &$s770);
            $tmp766 = $tmp771;
            panda$core$String* $tmp772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp766, field761);
            $tmp765 = $tmp772;
            panda$core$String* $tmp774 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp765, &$s773);
            $tmp764 = $tmp774;
            $tmp763 = $tmp764;
            $returnValue265 = $tmp763;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp763));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp764));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp765));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp766));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp767));
            $tmp257 = 20;
            goto $l255;
            $l775:;
            return $returnValue265;
        }
        }
        else {
        panda$core$Bit $tmp777 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp777.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp779 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 16));
            dc778 = *$tmp779;
            panda$collections$ImmutableArray** $tmp781 = ((panda$collections$ImmutableArray**) ((char*) $match$189_9258->$data + 24));
            annotations780 = *$tmp781;
            org$pandalanguage$pandac$ASTNode** $tmp783 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 32));
            decl782 = *$tmp783;
            int $tmp786;
            {
                panda$core$MutableString* $tmp790 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp790);
                $tmp789 = $tmp790;
                $tmp788 = $tmp789;
                result787 = $tmp788;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp788));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp789));
                if (((panda$core$Bit) { dc778 != NULL }).value) {
                {
                    panda$core$String* $tmp793 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc778), &$s792);
                    $tmp791 = $tmp793;
                    panda$core$MutableString$append$panda$core$String(result787, $tmp791);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp791));
                }
                }
                {
                    int $tmp796;
                    {
                        ITable* $tmp800 = ((panda$collections$Iterable*) annotations780)->$class->itable;
                        while ($tmp800->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp800 = $tmp800->next;
                        }
                        $fn802 $tmp801 = $tmp800->methods[0];
                        panda$collections$Iterator* $tmp803 = $tmp801(((panda$collections$Iterable*) annotations780));
                        $tmp799 = $tmp803;
                        $tmp798 = $tmp799;
                        Iter$285$17797 = $tmp798;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp798));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp799));
                        $l804:;
                        ITable* $tmp807 = Iter$285$17797->$class->itable;
                        while ($tmp807->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp807 = $tmp807->next;
                        }
                        $fn809 $tmp808 = $tmp807->methods[0];
                        panda$core$Bit $tmp810 = $tmp808(Iter$285$17797);
                        panda$core$Bit $tmp811 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp810);
                        bool $tmp806 = $tmp811.value;
                        if (!$tmp806) goto $l805;
                        {
                            int $tmp814;
                            {
                                ITable* $tmp818 = Iter$285$17797->$class->itable;
                                while ($tmp818->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp818 = $tmp818->next;
                                }
                                $fn820 $tmp819 = $tmp818->methods[1];
                                panda$core$Object* $tmp821 = $tmp819(Iter$285$17797);
                                $tmp817 = $tmp821;
                                $tmp816 = ((org$pandalanguage$pandac$ASTNode*) $tmp817);
                                a815 = $tmp816;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp816));
                                panda$core$Panda$unref$panda$core$Object($tmp817);
                                panda$core$String* $tmp824 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a815), &$s823);
                                $tmp822 = $tmp824;
                                panda$core$MutableString$append$panda$core$String(result787, $tmp822);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp822));
                            }
                            $tmp814 = -1;
                            goto $l812;
                            $l812:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a815));
                            a815 = NULL;
                            switch ($tmp814) {
                                case -1: goto $l825;
                            }
                            $l825:;
                        }
                        goto $l804;
                        $l805:;
                    }
                    $tmp796 = -1;
                    goto $l794;
                    $l794:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$285$17797));
                    Iter$285$17797 = NULL;
                    switch ($tmp796) {
                        case -1: goto $l826;
                    }
                    $l826:;
                }
                panda$core$MutableString$append$panda$core$Object(result787, ((panda$core$Object*) decl782));
                panda$core$String* $tmp829 = panda$core$MutableString$finish$R$panda$core$String(result787);
                $tmp828 = $tmp829;
                $tmp827 = $tmp828;
                $returnValue265 = $tmp827;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp827));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp828));
                $tmp786 = 0;
                goto $l784;
                $l830:;
                $tmp257 = 21;
                goto $l255;
                $l831:;
                return $returnValue265;
            }
            $l784:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result787));
            result787 = NULL;
            switch ($tmp786) {
                case 0: goto $l830;
            }
            $l833:;
        }
        }
        else {
        panda$core$Bit $tmp834 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp834.value) {
        {
            panda$collections$ImmutableArray** $tmp836 = ((panda$collections$ImmutableArray**) ((char*) $match$189_9258->$data + 0));
            entries835 = *$tmp836;
            int $tmp839;
            {
                panda$core$MutableString* $tmp843 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp843);
                $tmp842 = $tmp843;
                $tmp841 = $tmp842;
                result840 = $tmp841;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp841));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp842));
                {
                    int $tmp846;
                    {
                        ITable* $tmp850 = ((panda$collections$Iterable*) entries835)->$class->itable;
                        while ($tmp850->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp850 = $tmp850->next;
                        }
                        $fn852 $tmp851 = $tmp850->methods[0];
                        panda$collections$Iterator* $tmp853 = $tmp851(((panda$collections$Iterable*) entries835));
                        $tmp849 = $tmp853;
                        $tmp848 = $tmp849;
                        Iter$292$17847 = $tmp848;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp848));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp849));
                        $l854:;
                        ITable* $tmp857 = Iter$292$17847->$class->itable;
                        while ($tmp857->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp857 = $tmp857->next;
                        }
                        $fn859 $tmp858 = $tmp857->methods[0];
                        panda$core$Bit $tmp860 = $tmp858(Iter$292$17847);
                        panda$core$Bit $tmp861 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp860);
                        bool $tmp856 = $tmp861.value;
                        if (!$tmp856) goto $l855;
                        {
                            int $tmp864;
                            {
                                ITable* $tmp868 = Iter$292$17847->$class->itable;
                                while ($tmp868->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp868 = $tmp868->next;
                                }
                                $fn870 $tmp869 = $tmp868->methods[1];
                                panda$core$Object* $tmp871 = $tmp869(Iter$292$17847);
                                $tmp867 = $tmp871;
                                $tmp866 = ((org$pandalanguage$pandac$ASTNode*) $tmp867);
                                e865 = $tmp866;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp866));
                                panda$core$Panda$unref$panda$core$Object($tmp867);
                                panda$core$String* $tmp874 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) e865), &$s873);
                                $tmp872 = $tmp874;
                                panda$core$MutableString$append$panda$core$String(result840, $tmp872);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp872));
                            }
                            $tmp864 = -1;
                            goto $l862;
                            $l862:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e865));
                            e865 = NULL;
                            switch ($tmp864) {
                                case -1: goto $l875;
                            }
                            $l875:;
                        }
                        goto $l854;
                        $l855:;
                    }
                    $tmp846 = -1;
                    goto $l844;
                    $l844:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$292$17847));
                    Iter$292$17847 = NULL;
                    switch ($tmp846) {
                        case -1: goto $l876;
                    }
                    $l876:;
                }
                panda$core$String* $tmp879 = panda$core$MutableString$finish$R$panda$core$String(result840);
                $tmp878 = $tmp879;
                $tmp877 = $tmp878;
                $returnValue265 = $tmp877;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp877));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp878));
                $tmp839 = 0;
                goto $l837;
                $l880:;
                $tmp257 = 22;
                goto $l255;
                $l881:;
                return $returnValue265;
            }
            $l837:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result840));
            result840 = NULL;
            switch ($tmp839) {
                case 0: goto $l880;
            }
            $l883:;
        }
        }
        else {
        panda$core$Bit $tmp884 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp884.value) {
        {
            panda$core$String** $tmp886 = ((panda$core$String**) ((char*) $match$189_9258->$data + 16));
            label885 = *$tmp886;
            org$pandalanguage$pandac$ASTNode** $tmp888 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 24));
            target887 = *$tmp888;
            org$pandalanguage$pandac$ASTNode** $tmp890 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 32));
            list889 = *$tmp890;
            panda$collections$ImmutableArray** $tmp892 = ((panda$collections$ImmutableArray**) ((char*) $match$189_9258->$data + 40));
            statements891 = *$tmp892;
            int $tmp895;
            {
                panda$core$MutableString* $tmp899 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp899);
                $tmp898 = $tmp899;
                $tmp897 = $tmp898;
                result896 = $tmp897;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp897));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp898));
                if (((panda$core$Bit) { label885 != NULL }).value) {
                {
                    panda$core$String* $tmp902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(label885, &$s901);
                    $tmp900 = $tmp902;
                    panda$core$MutableString$append$panda$core$String(result896, $tmp900);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp900));
                }
                }
                panda$core$String* $tmp908 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s907, ((panda$core$Object*) target887));
                $tmp906 = $tmp908;
                panda$core$String* $tmp910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp906, &$s909);
                $tmp905 = $tmp910;
                panda$core$String* $tmp911 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp905, ((panda$core$Object*) list889));
                $tmp904 = $tmp911;
                panda$core$String* $tmp913 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp904, &$s912);
                $tmp903 = $tmp913;
                panda$core$MutableString$append$panda$core$String(result896, $tmp903);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp903));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp904));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp905));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp906));
                {
                    int $tmp916;
                    {
                        ITable* $tmp920 = ((panda$collections$Iterable*) statements891)->$class->itable;
                        while ($tmp920->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp920 = $tmp920->next;
                        }
                        $fn922 $tmp921 = $tmp920->methods[0];
                        panda$collections$Iterator* $tmp923 = $tmp921(((panda$collections$Iterable*) statements891));
                        $tmp919 = $tmp923;
                        $tmp918 = $tmp919;
                        Iter$302$17917 = $tmp918;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp918));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp919));
                        $l924:;
                        ITable* $tmp927 = Iter$302$17917->$class->itable;
                        while ($tmp927->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp927 = $tmp927->next;
                        }
                        $fn929 $tmp928 = $tmp927->methods[0];
                        panda$core$Bit $tmp930 = $tmp928(Iter$302$17917);
                        panda$core$Bit $tmp931 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp930);
                        bool $tmp926 = $tmp931.value;
                        if (!$tmp926) goto $l925;
                        {
                            int $tmp934;
                            {
                                ITable* $tmp938 = Iter$302$17917->$class->itable;
                                while ($tmp938->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp938 = $tmp938->next;
                                }
                                $fn940 $tmp939 = $tmp938->methods[1];
                                panda$core$Object* $tmp941 = $tmp939(Iter$302$17917);
                                $tmp937 = $tmp941;
                                $tmp936 = ((org$pandalanguage$pandac$ASTNode*) $tmp937);
                                s935 = $tmp936;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp936));
                                panda$core$Panda$unref$panda$core$Object($tmp937);
                                panda$core$String* $tmp944 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s935), &$s943);
                                $tmp942 = $tmp944;
                                panda$core$MutableString$append$panda$core$String(result896, $tmp942);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp942));
                            }
                            $tmp934 = -1;
                            goto $l932;
                            $l932:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s935));
                            s935 = NULL;
                            switch ($tmp934) {
                                case -1: goto $l945;
                            }
                            $l945:;
                        }
                        goto $l924;
                        $l925:;
                    }
                    $tmp916 = -1;
                    goto $l914;
                    $l914:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$302$17917));
                    Iter$302$17917 = NULL;
                    switch ($tmp916) {
                        case -1: goto $l946;
                    }
                    $l946:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp947, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result896, $tmp947);
                panda$core$String* $tmp950 = panda$core$MutableString$finish$R$panda$core$String(result896);
                $tmp949 = $tmp950;
                $tmp948 = $tmp949;
                $returnValue265 = $tmp948;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp948));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp949));
                $tmp895 = 0;
                goto $l893;
                $l951:;
                $tmp257 = 23;
                goto $l255;
                $l952:;
                return $returnValue265;
            }
            $l893:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result896));
            result896 = NULL;
            switch ($tmp895) {
                case 0: goto $l951;
            }
            $l954:;
        }
        }
        else {
        panda$core$Bit $tmp955 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp955.value) {
        {
            panda$core$String** $tmp957 = ((panda$core$String**) ((char*) $match$189_9258->$data + 16));
            name956 = *$tmp957;
            panda$collections$ImmutableArray** $tmp959 = ((panda$collections$ImmutableArray**) ((char*) $match$189_9258->$data + 24));
            subtypes958 = *$tmp959;
            panda$core$String* $tmp965 = panda$core$String$convert$R$panda$core$String(name956);
            $tmp964 = $tmp965;
            panda$core$String* $tmp967 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp964, &$s966);
            $tmp963 = $tmp967;
            ITable* $tmp969 = ((panda$collections$ListView*) subtypes958)->$class->itable;
            while ($tmp969->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp969 = $tmp969->next;
            }
            $fn971 $tmp970 = $tmp969->methods[1];
            panda$core$String* $tmp972 = $tmp970(((panda$collections$ListView*) subtypes958));
            $tmp968 = $tmp972;
            panda$core$String* $tmp973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp963, $tmp968);
            $tmp962 = $tmp973;
            panda$core$String* $tmp975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp962, &$s974);
            $tmp961 = $tmp975;
            $tmp960 = $tmp961;
            $returnValue265 = $tmp960;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp960));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp961));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp962));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp968));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp963));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp964));
            $tmp257 = 24;
            goto $l255;
            $l976:;
            return $returnValue265;
        }
        }
        else {
        panda$core$Bit $tmp978 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp978.value) {
        {
            panda$core$String** $tmp980 = ((panda$core$String**) ((char*) $match$189_9258->$data + 16));
            name979 = *$tmp980;
            $tmp981 = name979;
            $returnValue265 = $tmp981;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp981));
            $tmp257 = 25;
            goto $l255;
            $l982:;
            return $returnValue265;
        }
        }
        else {
        panda$core$Bit $tmp984 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp984.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp986 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 16));
            test985 = *$tmp986;
            panda$collections$ImmutableArray** $tmp988 = ((panda$collections$ImmutableArray**) ((char*) $match$189_9258->$data + 24));
            ifTrue987 = *$tmp988;
            org$pandalanguage$pandac$ASTNode** $tmp990 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 32));
            ifFalse989 = *$tmp990;
            int $tmp993;
            {
                panda$core$MutableString* $tmp997 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1001 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1000, ((panda$core$Object*) test985));
                $tmp999 = $tmp1001;
                panda$core$String* $tmp1003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp999, &$s1002);
                $tmp998 = $tmp1003;
                panda$core$MutableString$init$panda$core$String($tmp997, $tmp998);
                $tmp996 = $tmp997;
                $tmp995 = $tmp996;
                result994 = $tmp995;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp995));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp996));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp998));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp999));
                {
                    int $tmp1006;
                    {
                        ITable* $tmp1010 = ((panda$collections$Iterable*) ifTrue987)->$class->itable;
                        while ($tmp1010->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1010 = $tmp1010->next;
                        }
                        $fn1012 $tmp1011 = $tmp1010->methods[0];
                        panda$collections$Iterator* $tmp1013 = $tmp1011(((panda$collections$Iterable*) ifTrue987));
                        $tmp1009 = $tmp1013;
                        $tmp1008 = $tmp1009;
                        Iter$313$171007 = $tmp1008;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1008));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1009));
                        $l1014:;
                        ITable* $tmp1017 = Iter$313$171007->$class->itable;
                        while ($tmp1017->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1017 = $tmp1017->next;
                        }
                        $fn1019 $tmp1018 = $tmp1017->methods[0];
                        panda$core$Bit $tmp1020 = $tmp1018(Iter$313$171007);
                        panda$core$Bit $tmp1021 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1020);
                        bool $tmp1016 = $tmp1021.value;
                        if (!$tmp1016) goto $l1015;
                        {
                            int $tmp1024;
                            {
                                ITable* $tmp1028 = Iter$313$171007->$class->itable;
                                while ($tmp1028->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1028 = $tmp1028->next;
                                }
                                $fn1030 $tmp1029 = $tmp1028->methods[1];
                                panda$core$Object* $tmp1031 = $tmp1029(Iter$313$171007);
                                $tmp1027 = $tmp1031;
                                $tmp1026 = ((org$pandalanguage$pandac$ASTNode*) $tmp1027);
                                s1025 = $tmp1026;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1026));
                                panda$core$Panda$unref$panda$core$Object($tmp1027);
                                panda$core$String* $tmp1034 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1025), &$s1033);
                                $tmp1032 = $tmp1034;
                                panda$core$MutableString$append$panda$core$String(result994, $tmp1032);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1032));
                            }
                            $tmp1024 = -1;
                            goto $l1022;
                            $l1022:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1025));
                            s1025 = NULL;
                            switch ($tmp1024) {
                                case -1: goto $l1035;
                            }
                            $l1035:;
                        }
                        goto $l1014;
                        $l1015:;
                    }
                    $tmp1006 = -1;
                    goto $l1004;
                    $l1004:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$313$171007));
                    Iter$313$171007 = NULL;
                    switch ($tmp1006) {
                        case -1: goto $l1036;
                    }
                    $l1036:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1037, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result994, $tmp1037);
                if (((panda$core$Bit) { ifFalse989 != NULL }).value) {
                {
                    panda$core$String* $tmp1041 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1040, ((panda$core$Object*) ifFalse989));
                    $tmp1039 = $tmp1041;
                    panda$core$String* $tmp1043 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1039, &$s1042);
                    $tmp1038 = $tmp1043;
                    panda$core$MutableString$append$panda$core$String(result994, $tmp1038);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1038));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1039));
                }
                }
                panda$core$String* $tmp1046 = panda$core$MutableString$finish$R$panda$core$String(result994);
                $tmp1045 = $tmp1046;
                $tmp1044 = $tmp1045;
                $returnValue265 = $tmp1044;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1044));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1045));
                $tmp993 = 0;
                goto $l991;
                $l1047:;
                $tmp257 = 26;
                goto $l255;
                $l1048:;
                return $returnValue265;
            }
            $l991:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result994));
            result994 = NULL;
            switch ($tmp993) {
                case 0: goto $l1047;
            }
            $l1050:;
        }
        }
        else {
        panda$core$Bit $tmp1051 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1051.value) {
        {
            panda$core$UInt64* $tmp1053 = ((panda$core$UInt64*) ((char*) $match$189_9258->$data + 16));
            value1052 = *$tmp1053;
            panda$core$String* $tmp1056 = panda$core$UInt64$convert$R$panda$core$String(value1052);
            $tmp1055 = $tmp1056;
            $tmp1054 = $tmp1055;
            $returnValue265 = $tmp1054;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1054));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1055));
            $tmp257 = 27;
            goto $l255;
            $l1057:;
            return $returnValue265;
        }
        }
        else {
        panda$core$Bit $tmp1059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1059.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1061 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$189_9258->$data + 0));
            ir1060 = *$tmp1061;
            panda$core$String* $tmp1065 = (($fn1064) ir1060->$class->vtable[0])(ir1060);
            $tmp1063 = $tmp1065;
            $tmp1062 = $tmp1063;
            $returnValue265 = $tmp1062;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1062));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1063));
            $tmp257 = 28;
            goto $l255;
            $l1066:;
            return $returnValue265;
        }
        }
        else {
        panda$core$Bit $tmp1068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1068.value) {
        {
            panda$core$String** $tmp1070 = ((panda$core$String**) ((char*) $match$189_9258->$data + 16));
            label1069 = *$tmp1070;
            panda$collections$ImmutableArray** $tmp1072 = ((panda$collections$ImmutableArray**) ((char*) $match$189_9258->$data + 24));
            statements1071 = *$tmp1072;
            int $tmp1075;
            {
                panda$core$MutableString* $tmp1079 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1079);
                $tmp1078 = $tmp1079;
                $tmp1077 = $tmp1078;
                result1076 = $tmp1077;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1077));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1078));
                if (((panda$core$Bit) { label1069 != NULL }).value) {
                {
                    panda$core$String* $tmp1082 = panda$core$String$convert$R$panda$core$String(label1069);
                    $tmp1081 = $tmp1082;
                    panda$core$String* $tmp1084 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1081, &$s1083);
                    $tmp1080 = $tmp1084;
                    panda$core$MutableString$append$panda$core$String(result1076, $tmp1080);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1080));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1081));
                }
                }
                panda$core$MutableString$append$panda$core$String(result1076, &$s1085);
                {
                    int $tmp1088;
                    {
                        ITable* $tmp1092 = ((panda$collections$Iterable*) statements1071)->$class->itable;
                        while ($tmp1092->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1092 = $tmp1092->next;
                        }
                        $fn1094 $tmp1093 = $tmp1092->methods[0];
                        panda$collections$Iterator* $tmp1095 = $tmp1093(((panda$collections$Iterable*) statements1071));
                        $tmp1091 = $tmp1095;
                        $tmp1090 = $tmp1091;
                        Iter$331$171089 = $tmp1090;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1090));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1091));
                        $l1096:;
                        ITable* $tmp1099 = Iter$331$171089->$class->itable;
                        while ($tmp1099->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1099 = $tmp1099->next;
                        }
                        $fn1101 $tmp1100 = $tmp1099->methods[0];
                        panda$core$Bit $tmp1102 = $tmp1100(Iter$331$171089);
                        panda$core$Bit $tmp1103 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1102);
                        bool $tmp1098 = $tmp1103.value;
                        if (!$tmp1098) goto $l1097;
                        {
                            int $tmp1106;
                            {
                                ITable* $tmp1110 = Iter$331$171089->$class->itable;
                                while ($tmp1110->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1110 = $tmp1110->next;
                                }
                                $fn1112 $tmp1111 = $tmp1110->methods[1];
                                panda$core$Object* $tmp1113 = $tmp1111(Iter$331$171089);
                                $tmp1109 = $tmp1113;
                                $tmp1108 = ((org$pandalanguage$pandac$ASTNode*) $tmp1109);
                                s1107 = $tmp1108;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1108));
                                panda$core$Panda$unref$panda$core$Object($tmp1109);
                                panda$core$String* $tmp1116 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1107), &$s1115);
                                $tmp1114 = $tmp1116;
                                panda$core$MutableString$append$panda$core$String(result1076, $tmp1114);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1114));
                            }
                            $tmp1106 = -1;
                            goto $l1104;
                            $l1104:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1107));
                            s1107 = NULL;
                            switch ($tmp1106) {
                                case -1: goto $l1117;
                            }
                            $l1117:;
                        }
                        goto $l1096;
                        $l1097:;
                    }
                    $tmp1088 = -1;
                    goto $l1086;
                    $l1086:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$331$171089));
                    Iter$331$171089 = NULL;
                    switch ($tmp1088) {
                        case -1: goto $l1118;
                    }
                    $l1118:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1119, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1076, $tmp1119);
                panda$core$String* $tmp1122 = panda$core$MutableString$finish$R$panda$core$String(result1076);
                $tmp1121 = $tmp1122;
                $tmp1120 = $tmp1121;
                $returnValue265 = $tmp1120;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1120));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1121));
                $tmp1075 = 0;
                goto $l1073;
                $l1123:;
                $tmp257 = 29;
                goto $l255;
                $l1124:;
                return $returnValue265;
            }
            $l1073:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1076));
            result1076 = NULL;
            switch ($tmp1075) {
                case 0: goto $l1123;
            }
            $l1126:;
        }
        }
        else {
        panda$core$Bit $tmp1127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1127.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1129 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 16));
            value1128 = *$tmp1129;
            panda$collections$ImmutableArray** $tmp1131 = ((panda$collections$ImmutableArray**) ((char*) $match$189_9258->$data + 24));
            whens1130 = *$tmp1131;
            panda$collections$ImmutableArray** $tmp1133 = ((panda$collections$ImmutableArray**) ((char*) $match$189_9258->$data + 32));
            other1132 = *$tmp1133;
            int $tmp1136;
            {
                panda$core$MutableString* $tmp1140 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1144 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1143, ((panda$core$Object*) value1128));
                $tmp1142 = $tmp1144;
                panda$core$String* $tmp1146 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1142, &$s1145);
                $tmp1141 = $tmp1146;
                panda$core$MutableString$init$panda$core$String($tmp1140, $tmp1141);
                $tmp1139 = $tmp1140;
                $tmp1138 = $tmp1139;
                result1137 = $tmp1138;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1138));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1139));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1141));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1142));
                {
                    int $tmp1149;
                    {
                        ITable* $tmp1153 = ((panda$collections$Iterable*) whens1130)->$class->itable;
                        while ($tmp1153->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1153 = $tmp1153->next;
                        }
                        $fn1155 $tmp1154 = $tmp1153->methods[0];
                        panda$collections$Iterator* $tmp1156 = $tmp1154(((panda$collections$Iterable*) whens1130));
                        $tmp1152 = $tmp1156;
                        $tmp1151 = $tmp1152;
                        Iter$338$171150 = $tmp1151;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1151));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1152));
                        $l1157:;
                        ITable* $tmp1160 = Iter$338$171150->$class->itable;
                        while ($tmp1160->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1160 = $tmp1160->next;
                        }
                        $fn1162 $tmp1161 = $tmp1160->methods[0];
                        panda$core$Bit $tmp1163 = $tmp1161(Iter$338$171150);
                        panda$core$Bit $tmp1164 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1163);
                        bool $tmp1159 = $tmp1164.value;
                        if (!$tmp1159) goto $l1158;
                        {
                            int $tmp1167;
                            {
                                ITable* $tmp1171 = Iter$338$171150->$class->itable;
                                while ($tmp1171->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1171 = $tmp1171->next;
                                }
                                $fn1173 $tmp1172 = $tmp1171->methods[1];
                                panda$core$Object* $tmp1174 = $tmp1172(Iter$338$171150);
                                $tmp1170 = $tmp1174;
                                $tmp1169 = ((org$pandalanguage$pandac$ASTNode*) $tmp1170);
                                w1168 = $tmp1169;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1169));
                                panda$core$Panda$unref$panda$core$Object($tmp1170);
                                panda$core$String* $tmp1177 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w1168), &$s1176);
                                $tmp1175 = $tmp1177;
                                panda$core$MutableString$append$panda$core$String(result1137, $tmp1175);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1175));
                            }
                            $tmp1167 = -1;
                            goto $l1165;
                            $l1165:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w1168));
                            w1168 = NULL;
                            switch ($tmp1167) {
                                case -1: goto $l1178;
                            }
                            $l1178:;
                        }
                        goto $l1157;
                        $l1158:;
                    }
                    $tmp1149 = -1;
                    goto $l1147;
                    $l1147:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$338$171150));
                    Iter$338$171150 = NULL;
                    switch ($tmp1149) {
                        case -1: goto $l1179;
                    }
                    $l1179:;
                }
                if (((panda$core$Bit) { other1132 != NULL }).value) {
                {
                    panda$core$String* $tmp1182 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) other1132), &$s1181);
                    $tmp1180 = $tmp1182;
                    panda$core$MutableString$append$panda$core$String(result1137, $tmp1180);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1180));
                }
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1183, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1137, $tmp1183);
                panda$core$String* $tmp1186 = panda$core$MutableString$finish$R$panda$core$String(result1137);
                $tmp1185 = $tmp1186;
                $tmp1184 = $tmp1185;
                $returnValue265 = $tmp1184;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1184));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1185));
                $tmp1136 = 0;
                goto $l1134;
                $l1187:;
                $tmp257 = 30;
                goto $l255;
                $l1188:;
                return $returnValue265;
            }
            $l1134:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1137));
            result1137 = NULL;
            switch ($tmp1136) {
                case 0: goto $l1187;
            }
            $l1190:;
        }
        }
        else {
        panda$core$Bit $tmp1191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1191.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1193 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 16));
            dc1192 = *$tmp1193;
            panda$collections$ImmutableArray** $tmp1195 = ((panda$collections$ImmutableArray**) ((char*) $match$189_9258->$data + 24));
            annotations1194 = *$tmp1195;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1197 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$189_9258->$data + 32));
            kind1196 = *$tmp1197;
            panda$core$String** $tmp1199 = ((panda$core$String**) ((char*) $match$189_9258->$data + 40));
            name1198 = *$tmp1199;
            panda$collections$ImmutableArray** $tmp1201 = ((panda$collections$ImmutableArray**) ((char*) $match$189_9258->$data + 48));
            parameters1200 = *$tmp1201;
            org$pandalanguage$pandac$ASTNode** $tmp1203 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 56));
            returnType1202 = *$tmp1203;
            panda$collections$ImmutableArray** $tmp1205 = ((panda$collections$ImmutableArray**) ((char*) $match$189_9258->$data + 64));
            statements1204 = *$tmp1205;
            int $tmp1208;
            {
                panda$core$MutableString* $tmp1212 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1212);
                $tmp1211 = $tmp1212;
                $tmp1210 = $tmp1211;
                result1209 = $tmp1210;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1210));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1211));
                if (((panda$core$Bit) { dc1192 != NULL }).value) {
                {
                    panda$core$String* $tmp1215 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc1192), &$s1214);
                    $tmp1213 = $tmp1215;
                    panda$core$MutableString$append$panda$core$String(result1209, $tmp1213);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1213));
                }
                }
                {
                    int $tmp1218;
                    {
                        ITable* $tmp1222 = ((panda$collections$Iterable*) annotations1194)->$class->itable;
                        while ($tmp1222->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1222 = $tmp1222->next;
                        }
                        $fn1224 $tmp1223 = $tmp1222->methods[0];
                        panda$collections$Iterator* $tmp1225 = $tmp1223(((panda$collections$Iterable*) annotations1194));
                        $tmp1221 = $tmp1225;
                        $tmp1220 = $tmp1221;
                        Iter$351$171219 = $tmp1220;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1220));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1221));
                        $l1226:;
                        ITable* $tmp1229 = Iter$351$171219->$class->itable;
                        while ($tmp1229->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1229 = $tmp1229->next;
                        }
                        $fn1231 $tmp1230 = $tmp1229->methods[0];
                        panda$core$Bit $tmp1232 = $tmp1230(Iter$351$171219);
                        panda$core$Bit $tmp1233 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1232);
                        bool $tmp1228 = $tmp1233.value;
                        if (!$tmp1228) goto $l1227;
                        {
                            int $tmp1236;
                            {
                                ITable* $tmp1240 = Iter$351$171219->$class->itable;
                                while ($tmp1240->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1240 = $tmp1240->next;
                                }
                                $fn1242 $tmp1241 = $tmp1240->methods[1];
                                panda$core$Object* $tmp1243 = $tmp1241(Iter$351$171219);
                                $tmp1239 = $tmp1243;
                                $tmp1238 = ((org$pandalanguage$pandac$ASTNode*) $tmp1239);
                                a1237 = $tmp1238;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1238));
                                panda$core$Panda$unref$panda$core$Object($tmp1239);
                                panda$core$String* $tmp1246 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a1237), &$s1245);
                                $tmp1244 = $tmp1246;
                                panda$core$MutableString$append$panda$core$String(result1209, $tmp1244);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1244));
                            }
                            $tmp1236 = -1;
                            goto $l1234;
                            $l1234:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1237));
                            a1237 = NULL;
                            switch ($tmp1236) {
                                case -1: goto $l1247;
                            }
                            $l1247:;
                        }
                        goto $l1226;
                        $l1227:;
                    }
                    $tmp1218 = -1;
                    goto $l1216;
                    $l1216:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$351$171219));
                    Iter$351$171219 = NULL;
                    switch ($tmp1218) {
                        case -1: goto $l1248;
                    }
                    $l1248:;
                }
                {
                    $match$354_171249 = kind1196;
                    panda$core$Bit $tmp1250 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$354_171249.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp1250.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1209, &$s1251);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$354_171249.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp1252.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1209, &$s1253);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$354_171249.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp1254.value) {
                    {
                    }
                    }
                    }
                    }
                }
                panda$core$String* $tmp1259 = panda$core$String$convert$R$panda$core$String(name1198);
                $tmp1258 = $tmp1259;
                panda$core$String* $tmp1261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1258, &$s1260);
                $tmp1257 = $tmp1261;
                ITable* $tmp1263 = ((panda$collections$ListView*) parameters1200)->$class->itable;
                while ($tmp1263->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1263 = $tmp1263->next;
                }
                $fn1265 $tmp1264 = $tmp1263->methods[1];
                panda$core$String* $tmp1266 = $tmp1264(((panda$collections$ListView*) parameters1200));
                $tmp1262 = $tmp1266;
                panda$core$String* $tmp1267 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1257, $tmp1262);
                $tmp1256 = $tmp1267;
                panda$core$String* $tmp1269 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1256, &$s1268);
                $tmp1255 = $tmp1269;
                panda$core$MutableString$append$panda$core$String(result1209, $tmp1255);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1255));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1256));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1262));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1257));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1258));
                if (((panda$core$Bit) { returnType1202 != NULL }).value) {
                {
                    panda$core$String* $tmp1273 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1272, ((panda$core$Object*) returnType1202));
                    $tmp1271 = $tmp1273;
                    panda$core$String* $tmp1275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1271, &$s1274);
                    $tmp1270 = $tmp1275;
                    panda$core$MutableString$append$panda$core$String(result1209, $tmp1270);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1270));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1271));
                }
                }
                if (((panda$core$Bit) { statements1204 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1209, &$s1276);
                    {
                        int $tmp1279;
                        {
                            ITable* $tmp1283 = ((panda$collections$Iterable*) statements1204)->$class->itable;
                            while ($tmp1283->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp1283 = $tmp1283->next;
                            }
                            $fn1285 $tmp1284 = $tmp1283->methods[0];
                            panda$collections$Iterator* $tmp1286 = $tmp1284(((panda$collections$Iterable*) statements1204));
                            $tmp1282 = $tmp1286;
                            $tmp1281 = $tmp1282;
                            Iter$365$211280 = $tmp1281;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1281));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1282));
                            $l1287:;
                            ITable* $tmp1290 = Iter$365$211280->$class->itable;
                            while ($tmp1290->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1290 = $tmp1290->next;
                            }
                            $fn1292 $tmp1291 = $tmp1290->methods[0];
                            panda$core$Bit $tmp1293 = $tmp1291(Iter$365$211280);
                            panda$core$Bit $tmp1294 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1293);
                            bool $tmp1289 = $tmp1294.value;
                            if (!$tmp1289) goto $l1288;
                            {
                                int $tmp1297;
                                {
                                    ITable* $tmp1301 = Iter$365$211280->$class->itable;
                                    while ($tmp1301->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp1301 = $tmp1301->next;
                                    }
                                    $fn1303 $tmp1302 = $tmp1301->methods[1];
                                    panda$core$Object* $tmp1304 = $tmp1302(Iter$365$211280);
                                    $tmp1300 = $tmp1304;
                                    $tmp1299 = ((org$pandalanguage$pandac$ASTNode*) $tmp1300);
                                    s1298 = $tmp1299;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1299));
                                    panda$core$Panda$unref$panda$core$Object($tmp1300);
                                    panda$core$String* $tmp1307 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1298), &$s1306);
                                    $tmp1305 = $tmp1307;
                                    panda$core$MutableString$append$panda$core$String(result1209, $tmp1305);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1305));
                                }
                                $tmp1297 = -1;
                                goto $l1295;
                                $l1295:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1298));
                                s1298 = NULL;
                                switch ($tmp1297) {
                                    case -1: goto $l1308;
                                }
                                $l1308:;
                            }
                            goto $l1287;
                            $l1288:;
                        }
                        $tmp1279 = -1;
                        goto $l1277;
                        $l1277:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$365$211280));
                        Iter$365$211280 = NULL;
                        switch ($tmp1279) {
                            case -1: goto $l1309;
                        }
                        $l1309:;
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp1310, ((panda$core$UInt8) { 125 }));
                    panda$core$MutableString$append$panda$core$Char8(result1209, $tmp1310);
                }
                }
                panda$core$String* $tmp1313 = panda$core$MutableString$finish$R$panda$core$String(result1209);
                $tmp1312 = $tmp1313;
                $tmp1311 = $tmp1312;
                $returnValue265 = $tmp1311;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1311));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1312));
                $tmp1208 = 0;
                goto $l1206;
                $l1314:;
                $tmp257 = 31;
                goto $l255;
                $l1315:;
                return $returnValue265;
            }
            $l1206:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1209));
            result1209 = NULL;
            switch ($tmp1208) {
                case 0: goto $l1314;
            }
            $l1317:;
        }
        }
        else {
        panda$core$Bit $tmp1318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1318.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1320 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$189_9258->$data + 16));
            kind1319 = *$tmp1320;
            panda$collections$ImmutableArray** $tmp1322 = ((panda$collections$ImmutableArray**) ((char*) $match$189_9258->$data + 24));
            paramTypes1321 = *$tmp1322;
            org$pandalanguage$pandac$ASTNode** $tmp1324 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 32));
            returnType1323 = *$tmp1324;
            int $tmp1327;
            {
                memset(&yield1328, 0, sizeof(yield1328));
                {
                    $match$373_171329 = kind1319;
                    panda$core$Bit $tmp1330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$373_171329.$rawValue, ((panda$core$Int64) { 90 }));
                    if ($tmp1330.value) {
                    {
                        {
                            $tmp1331 = yield1328;
                            $tmp1332 = &$s1333;
                            yield1328 = $tmp1332;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1332));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1331));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp1334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$373_171329.$rawValue, ((panda$core$Int64) { 91 }));
                    if ($tmp1334.value) {
                    {
                        {
                            $tmp1335 = yield1328;
                            $tmp1336 = &$s1337;
                            yield1328 = $tmp1336;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1336));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1335));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp1338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$373_171329.$rawValue, ((panda$core$Int64) { 92 }));
                    if ($tmp1338.value) {
                    {
                        {
                            $tmp1339 = yield1328;
                            $tmp1340 = &$s1341;
                            yield1328 = $tmp1340;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1340));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1339));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp1342 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$373_171329.$rawValue, ((panda$core$Int64) { 93 }));
                    if ($tmp1342.value) {
                    {
                        {
                            $tmp1343 = yield1328;
                            $tmp1344 = &$s1345;
                            yield1328 = $tmp1344;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1344));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1343));
                        }
                    }
                    }
                    }
                    }
                    }
                }
                ITable* $tmp1354 = ((panda$collections$ListView*) paramTypes1321)->$class->itable;
                while ($tmp1354->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1354 = $tmp1354->next;
                }
                $fn1356 $tmp1355 = $tmp1354->methods[1];
                panda$core$String* $tmp1357 = $tmp1355(((panda$collections$ListView*) paramTypes1321));
                $tmp1353 = $tmp1357;
                panda$core$String* $tmp1358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1352, $tmp1353);
                $tmp1351 = $tmp1358;
                panda$core$String* $tmp1360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1351, &$s1359);
                $tmp1350 = $tmp1360;
                panda$core$String* $tmp1361 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1350, yield1328);
                $tmp1349 = $tmp1361;
                panda$core$String* $tmp1363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1349, &$s1362);
                $tmp1348 = $tmp1363;
                $tmp1347 = $tmp1348;
                partial1346 = $tmp1347;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1347));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1348));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1349));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1350));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1351));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1353));
                if (((panda$core$Bit) { returnType1323 != NULL }).value) {
                {
                    panda$core$String* $tmp1369 = panda$core$String$convert$R$panda$core$String(partial1346);
                    $tmp1368 = $tmp1369;
                    panda$core$String* $tmp1371 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1368, &$s1370);
                    $tmp1367 = $tmp1371;
                    panda$core$String* $tmp1372 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1367, ((panda$core$Object*) returnType1323));
                    $tmp1366 = $tmp1372;
                    panda$core$String* $tmp1374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1366, &$s1373);
                    $tmp1365 = $tmp1374;
                    $tmp1364 = $tmp1365;
                    $returnValue265 = $tmp1364;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1364));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1365));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1366));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1367));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1368));
                    $tmp1327 = 0;
                    goto $l1325;
                    $l1375:;
                    $tmp257 = 32;
                    goto $l255;
                    $l1376:;
                    return $returnValue265;
                }
                }
                panda$core$String* $tmp1381 = panda$core$String$convert$R$panda$core$String(partial1346);
                $tmp1380 = $tmp1381;
                panda$core$String* $tmp1383 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1380, &$s1382);
                $tmp1379 = $tmp1383;
                $tmp1378 = $tmp1379;
                $returnValue265 = $tmp1378;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1378));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1379));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1380));
                $tmp1327 = 1;
                goto $l1325;
                $l1384:;
                $tmp257 = 33;
                goto $l255;
                $l1385:;
                return $returnValue265;
            }
            $l1325:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) yield1328));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) partial1346));
            partial1346 = NULL;
            switch ($tmp1327) {
                case 0: goto $l1375;
                case 1: goto $l1384;
            }
            $l1387:;
        }
        }
        else {
        panda$core$Bit $tmp1388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1388.value) {
        {
            $tmp1389 = &$s1390;
            $returnValue265 = $tmp1389;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1389));
            $tmp257 = 34;
            goto $l255;
            $l1391:;
            return $returnValue265;
        }
        }
        else {
        panda$core$Bit $tmp1393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1393.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1395 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 16));
            base1394 = *$tmp1395;
            panda$core$String* $tmp1399 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) base1394), &$s1398);
            $tmp1397 = $tmp1399;
            $tmp1396 = $tmp1397;
            $returnValue265 = $tmp1396;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1396));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1397));
            $tmp257 = 35;
            goto $l255;
            $l1400:;
            return $returnValue265;
        }
        }
        else {
        panda$core$Bit $tmp1402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1402.value) {
        {
            panda$core$String** $tmp1404 = ((panda$core$String**) ((char*) $match$189_9258->$data + 16));
            name1403 = *$tmp1404;
            $tmp1405 = name1403;
            $returnValue265 = $tmp1405;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1405));
            $tmp257 = 36;
            goto $l255;
            $l1406:;
            return $returnValue265;
        }
        }
        else {
        panda$core$Bit $tmp1408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1408.value) {
        {
            panda$core$String** $tmp1410 = ((panda$core$String**) ((char*) $match$189_9258->$data + 16));
            name1409 = *$tmp1410;
            org$pandalanguage$pandac$ASTNode** $tmp1412 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 24));
            type1411 = *$tmp1412;
            panda$core$String* $tmp1418 = panda$core$String$convert$R$panda$core$String(name1409);
            $tmp1417 = $tmp1418;
            panda$core$String* $tmp1420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1417, &$s1419);
            $tmp1416 = $tmp1420;
            panda$core$String* $tmp1421 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1416, ((panda$core$Object*) type1411));
            $tmp1415 = $tmp1421;
            panda$core$String* $tmp1423 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1415, &$s1422);
            $tmp1414 = $tmp1423;
            $tmp1413 = $tmp1414;
            $returnValue265 = $tmp1413;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1413));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1414));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1415));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1416));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1417));
            $tmp257 = 37;
            goto $l255;
            $l1424:;
            return $returnValue265;
        }
        }
        else {
        panda$core$Bit $tmp1426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1426.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1428 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$189_9258->$data + 16));
            kind1427 = *$tmp1428;
            org$pandalanguage$pandac$ASTNode** $tmp1430 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 24));
            base1429 = *$tmp1430;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1437;
            $tmp1437 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp1437->value = kind1427;
            $tmp1436 = ((panda$core$Object*) $tmp1437);
            panda$core$String* $tmp1439 = (($fn1438) $tmp1436->$class->vtable[0])($tmp1436);
            $tmp1435 = $tmp1439;
            panda$core$String* $tmp1441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1435, &$s1440);
            $tmp1434 = $tmp1441;
            panda$core$String* $tmp1442 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1434, ((panda$core$Object*) base1429));
            $tmp1433 = $tmp1442;
            panda$core$String* $tmp1444 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1433, &$s1443);
            $tmp1432 = $tmp1444;
            $tmp1431 = $tmp1432;
            $returnValue265 = $tmp1431;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1431));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1432));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1433));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1434));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1435));
            panda$core$Panda$unref$panda$core$Object($tmp1436);
            $tmp257 = 38;
            goto $l255;
            $l1445:;
            return $returnValue265;
        }
        }
        else {
        panda$core$Bit $tmp1447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1447.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1449 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 16));
            start1448 = *$tmp1449;
            org$pandalanguage$pandac$ASTNode** $tmp1451 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 24));
            end1450 = *$tmp1451;
            panda$core$Bit* $tmp1453 = ((panda$core$Bit*) ((char*) $match$189_9258->$data + 32));
            inclusive1452 = *$tmp1453;
            org$pandalanguage$pandac$ASTNode** $tmp1455 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 33));
            step1454 = *$tmp1455;
            int $tmp1458;
            {
                panda$core$MutableString* $tmp1462 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1462);
                $tmp1461 = $tmp1462;
                $tmp1460 = $tmp1461;
                result1459 = $tmp1460;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1460));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1461));
                if (((panda$core$Bit) { start1448 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result1459, ((panda$core$Object*) start1448));
                }
                }
                if (inclusive1452.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1459, &$s1463);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(result1459, &$s1464);
                }
                }
                if (((panda$core$Bit) { end1450 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result1459, ((panda$core$Object*) end1450));
                }
                }
                if (((panda$core$Bit) { step1454 != NULL }).value) {
                {
                    panda$core$String* $tmp1467 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1466, ((panda$core$Object*) step1454));
                    $tmp1465 = $tmp1467;
                    panda$core$MutableString$append$panda$core$String(result1459, $tmp1465);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1465));
                }
                }
                panda$core$String* $tmp1470 = panda$core$MutableString$finish$R$panda$core$String(result1459);
                $tmp1469 = $tmp1470;
                $tmp1468 = $tmp1469;
                $returnValue265 = $tmp1468;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1468));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1469));
                $tmp1458 = 0;
                goto $l1456;
                $l1471:;
                $tmp257 = 39;
                goto $l255;
                $l1472:;
                return $returnValue265;
            }
            $l1456:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1459));
            result1459 = NULL;
            switch ($tmp1458) {
                case 0: goto $l1471;
            }
            $l1474:;
        }
        }
        else {
        panda$core$Bit $tmp1475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1475.value) {
        {
            panda$core$Real64* $tmp1477 = ((panda$core$Real64*) ((char*) $match$189_9258->$data + 16));
            value1476 = *$tmp1477;
            panda$core$String* $tmp1480 = panda$core$Real64$convert$R$panda$core$String(value1476);
            $tmp1479 = $tmp1480;
            $tmp1478 = $tmp1479;
            $returnValue265 = $tmp1478;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1478));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1479));
            $tmp257 = 40;
            goto $l255;
            $l1481:;
            return $returnValue265;
        }
        }
        else {
        panda$core$Bit $tmp1483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1483.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1485 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 16));
            value1484 = *$tmp1485;
            if (((panda$core$Bit) { value1484 != NULL }).value) {
            {
                panda$core$String* $tmp1490 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1489, ((panda$core$Object*) value1484));
                $tmp1488 = $tmp1490;
                panda$core$String* $tmp1492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1488, &$s1491);
                $tmp1487 = $tmp1492;
                $tmp1486 = $tmp1487;
                $returnValue265 = $tmp1486;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1486));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1487));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1488));
                $tmp257 = 41;
                goto $l255;
                $l1493:;
                return $returnValue265;
            }
            }
            $tmp1495 = &$s1496;
            $returnValue265 = $tmp1495;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1495));
            $tmp257 = 42;
            goto $l255;
            $l1497:;
            return $returnValue265;
        }
        }
        else {
        panda$core$Bit $tmp1499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1499.value) {
        {
            $tmp1500 = &$s1501;
            $returnValue265 = $tmp1500;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1500));
            $tmp257 = 43;
            goto $l255;
            $l1502:;
            return $returnValue265;
        }
        }
        else {
        panda$core$Bit $tmp1504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1504.value) {
        {
            panda$core$String** $tmp1506 = ((panda$core$String**) ((char*) $match$189_9258->$data + 16));
            str1505 = *$tmp1506;
            panda$core$String* $tmp1510 = panda$core$String$format$panda$core$String$R$panda$core$String(str1505, &$s1509);
            $tmp1508 = $tmp1510;
            $tmp1507 = $tmp1508;
            $returnValue265 = $tmp1507;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1507));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1508));
            $tmp257 = 44;
            goto $l255;
            $l1511:;
            return $returnValue265;
        }
        }
        else {
        panda$core$Bit $tmp1513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1513.value) {
        {
            $tmp1514 = &$s1515;
            $returnValue265 = $tmp1514;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1514));
            $tmp257 = 45;
            goto $l255;
            $l1516:;
            return $returnValue265;
        }
        }
        else {
        panda$core$Bit $tmp1518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1518.value) {
        {
            panda$collections$ImmutableArray** $tmp1520 = ((panda$collections$ImmutableArray**) ((char*) $match$189_9258->$data + 16));
            arguments1519 = *$tmp1520;
            ITable* $tmp1526 = ((panda$collections$ListView*) arguments1519)->$class->itable;
            while ($tmp1526->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1526 = $tmp1526->next;
            }
            $fn1528 $tmp1527 = $tmp1526->methods[1];
            panda$core$String* $tmp1529 = $tmp1527(((panda$collections$ListView*) arguments1519));
            $tmp1525 = $tmp1529;
            panda$core$String* $tmp1530 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1524, $tmp1525);
            $tmp1523 = $tmp1530;
            panda$core$String* $tmp1532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1523, &$s1531);
            $tmp1522 = $tmp1532;
            $tmp1521 = $tmp1522;
            $returnValue265 = $tmp1521;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1521));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1522));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1523));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1525));
            $tmp257 = 46;
            goto $l255;
            $l1533:;
            return $returnValue265;
        }
        }
        else {
        panda$core$Bit $tmp1535 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1535.value) {
        {
            panda$collections$ImmutableArray** $tmp1537 = ((panda$collections$ImmutableArray**) ((char*) $match$189_9258->$data + 16));
            parameters1536 = *$tmp1537;
            ITable* $tmp1543 = ((panda$collections$ListView*) parameters1536)->$class->itable;
            while ($tmp1543->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1543 = $tmp1543->next;
            }
            $fn1545 $tmp1544 = $tmp1543->methods[1];
            panda$core$String* $tmp1546 = $tmp1544(((panda$collections$ListView*) parameters1536));
            $tmp1542 = $tmp1546;
            panda$core$String* $tmp1547 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1541, $tmp1542);
            $tmp1540 = $tmp1547;
            panda$core$String* $tmp1549 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1540, &$s1548);
            $tmp1539 = $tmp1549;
            $tmp1538 = $tmp1539;
            $returnValue265 = $tmp1538;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1538));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1539));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1540));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1542));
            $tmp257 = 47;
            goto $l255;
            $l1550:;
            return $returnValue265;
        }
        }
        else {
        panda$core$Bit $tmp1552 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1552.value) {
        {
            panda$core$String** $tmp1554 = ((panda$core$String**) ((char*) $match$189_9258->$data + 16));
            name1553 = *$tmp1554;
            $tmp1555 = name1553;
            $returnValue265 = $tmp1555;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1555));
            $tmp257 = 48;
            goto $l255;
            $l1556:;
            return $returnValue265;
        }
        }
        else {
        panda$core$Bit $tmp1558 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp1558.value) {
        {
            panda$core$String** $tmp1560 = ((panda$core$String**) ((char*) $match$189_9258->$data + 16));
            name1559 = *$tmp1560;
            org$pandalanguage$pandac$ASTNode** $tmp1562 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 24));
            type1561 = *$tmp1562;
            if (((panda$core$Bit) { type1561 != NULL }).value) {
            {
                panda$core$String* $tmp1568 = panda$core$String$convert$R$panda$core$String(name1559);
                $tmp1567 = $tmp1568;
                panda$core$String* $tmp1570 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1567, &$s1569);
                $tmp1566 = $tmp1570;
                panda$core$String* $tmp1571 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1566, ((panda$core$Object*) type1561));
                $tmp1565 = $tmp1571;
                panda$core$String* $tmp1573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1565, &$s1572);
                $tmp1564 = $tmp1573;
                $tmp1563 = $tmp1564;
                $returnValue265 = $tmp1563;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1563));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1564));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1565));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1566));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1567));
                $tmp257 = 49;
                goto $l255;
                $l1574:;
                return $returnValue265;
            }
            }
            $tmp1576 = name1559;
            $returnValue265 = $tmp1576;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1576));
            $tmp257 = 50;
            goto $l255;
            $l1577:;
            return $returnValue265;
        }
        }
        else {
        panda$core$Bit $tmp1579 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp1579.value) {
        {
            panda$collections$ImmutableArray** $tmp1581 = ((panda$collections$ImmutableArray**) ((char*) $match$189_9258->$data + 16));
            parameters1580 = *$tmp1581;
            org$pandalanguage$pandac$ASTNode** $tmp1583 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 24));
            body1582 = *$tmp1583;
            ITable* $tmp1591 = ((panda$collections$ListView*) parameters1580)->$class->itable;
            while ($tmp1591->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1591 = $tmp1591->next;
            }
            $fn1593 $tmp1592 = $tmp1591->methods[1];
            panda$core$String* $tmp1594 = $tmp1592(((panda$collections$ListView*) parameters1580));
            $tmp1590 = $tmp1594;
            panda$core$String* $tmp1595 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1589, $tmp1590);
            $tmp1588 = $tmp1595;
            panda$core$String* $tmp1597 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1588, &$s1596);
            $tmp1587 = $tmp1597;
            panda$core$String* $tmp1598 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1587, ((panda$core$Object*) body1582));
            $tmp1586 = $tmp1598;
            panda$core$String* $tmp1600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1586, &$s1599);
            $tmp1585 = $tmp1600;
            $tmp1584 = $tmp1585;
            $returnValue265 = $tmp1584;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1584));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1585));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1586));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1587));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1588));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1590));
            $tmp257 = 51;
            goto $l255;
            $l1601:;
            return $returnValue265;
        }
        }
        else {
        panda$core$Bit $tmp1603 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp1603.value) {
        {
            panda$collections$ImmutableArray** $tmp1605 = ((panda$collections$ImmutableArray**) ((char*) $match$189_9258->$data + 16));
            parameters1604 = *$tmp1605;
            org$pandalanguage$pandac$ASTNode** $tmp1607 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 24));
            body1606 = *$tmp1607;
            ITable* $tmp1615 = ((panda$collections$ListView*) parameters1604)->$class->itable;
            while ($tmp1615->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1615 = $tmp1615->next;
            }
            $fn1617 $tmp1616 = $tmp1615->methods[1];
            panda$core$String* $tmp1618 = $tmp1616(((panda$collections$ListView*) parameters1604));
            $tmp1614 = $tmp1618;
            panda$core$String* $tmp1619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1613, $tmp1614);
            $tmp1612 = $tmp1619;
            panda$core$String* $tmp1621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1612, &$s1620);
            $tmp1611 = $tmp1621;
            panda$core$String* $tmp1622 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1611, ((panda$core$Object*) body1606));
            $tmp1610 = $tmp1622;
            panda$core$String* $tmp1624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1610, &$s1623);
            $tmp1609 = $tmp1624;
            $tmp1608 = $tmp1609;
            $returnValue265 = $tmp1608;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1608));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1609));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1610));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1611));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1612));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1614));
            $tmp257 = 52;
            goto $l255;
            $l1625:;
            return $returnValue265;
        }
        }
        else {
        panda$core$Bit $tmp1627 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp1627.value) {
        {
            panda$core$String** $tmp1629 = ((panda$core$String**) ((char*) $match$189_9258->$data + 16));
            name1628 = *$tmp1629;
            $tmp1630 = name1628;
            $returnValue265 = $tmp1630;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1630));
            $tmp257 = 53;
            goto $l255;
            $l1631:;
            return $returnValue265;
        }
        }
        else {
        panda$core$Bit $tmp1633 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp1633.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp1635 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$189_9258->$data + 16));
            kind1634 = *$tmp1635;
            panda$collections$ImmutableArray** $tmp1637 = ((panda$collections$ImmutableArray**) ((char*) $match$189_9258->$data + 24));
            decls1636 = *$tmp1637;
            int $tmp1640;
            {
                panda$core$MutableString* $tmp1644 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1644);
                $tmp1643 = $tmp1644;
                $tmp1642 = $tmp1643;
                result1641 = $tmp1642;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1642));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1643));
                {
                    $match$448_171645 = kind1634;
                    panda$core$Bit $tmp1646 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_171645.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp1646.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1641, &$s1647);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1648 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_171645.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp1648.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1641, &$s1649);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1650 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_171645.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp1650.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1641, &$s1651);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1652 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$448_171645.$rawValue, ((panda$core$Int64) { 3 }));
                    if ($tmp1652.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1641, &$s1653);
                    }
                    }
                    }
                    }
                    }
                }
                ITable* $tmp1655 = ((panda$collections$ListView*) decls1636)->$class->itable;
                while ($tmp1655->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1655 = $tmp1655->next;
                }
                $fn1657 $tmp1656 = $tmp1655->methods[1];
                panda$core$String* $tmp1658 = $tmp1656(((panda$collections$ListView*) decls1636));
                $tmp1654 = $tmp1658;
                panda$core$MutableString$append$panda$core$String(result1641, $tmp1654);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1654));
                panda$core$String* $tmp1661 = panda$core$MutableString$finish$R$panda$core$String(result1641);
                $tmp1660 = $tmp1661;
                $tmp1659 = $tmp1660;
                $returnValue265 = $tmp1659;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1659));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1660));
                $tmp1640 = 0;
                goto $l1638;
                $l1662:;
                $tmp257 = 54;
                goto $l255;
                $l1663:;
                return $returnValue265;
            }
            $l1638:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1641));
            result1641 = NULL;
            switch ($tmp1640) {
                case 0: goto $l1662;
            }
            $l1665:;
        }
        }
        else {
        panda$core$Bit $tmp1666 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp1666.value) {
        {
            panda$collections$ImmutableArray** $tmp1668 = ((panda$collections$ImmutableArray**) ((char*) $match$189_9258->$data + 16));
            tests1667 = *$tmp1668;
            panda$collections$ImmutableArray** $tmp1670 = ((panda$collections$ImmutableArray**) ((char*) $match$189_9258->$data + 24));
            statements1669 = *$tmp1670;
            int $tmp1673;
            {
                panda$core$MutableString* $tmp1677 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1677, &$s1678);
                $tmp1676 = $tmp1677;
                $tmp1675 = $tmp1676;
                result1674 = $tmp1675;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1675));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1676));
                $tmp1680 = &$s1681;
                separator1679 = $tmp1680;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1680));
                {
                    int $tmp1684;
                    {
                        ITable* $tmp1688 = ((panda$collections$Iterable*) tests1667)->$class->itable;
                        while ($tmp1688->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1688 = $tmp1688->next;
                        }
                        $fn1690 $tmp1689 = $tmp1688->methods[0];
                        panda$collections$Iterator* $tmp1691 = $tmp1689(((panda$collections$Iterable*) tests1667));
                        $tmp1687 = $tmp1691;
                        $tmp1686 = $tmp1687;
                        Iter$459$171685 = $tmp1686;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1686));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1687));
                        $l1692:;
                        ITable* $tmp1695 = Iter$459$171685->$class->itable;
                        while ($tmp1695->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1695 = $tmp1695->next;
                        }
                        $fn1697 $tmp1696 = $tmp1695->methods[0];
                        panda$core$Bit $tmp1698 = $tmp1696(Iter$459$171685);
                        panda$core$Bit $tmp1699 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1698);
                        bool $tmp1694 = $tmp1699.value;
                        if (!$tmp1694) goto $l1693;
                        {
                            int $tmp1702;
                            {
                                ITable* $tmp1706 = Iter$459$171685->$class->itable;
                                while ($tmp1706->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1706 = $tmp1706->next;
                                }
                                $fn1708 $tmp1707 = $tmp1706->methods[1];
                                panda$core$Object* $tmp1709 = $tmp1707(Iter$459$171685);
                                $tmp1705 = $tmp1709;
                                $tmp1704 = ((org$pandalanguage$pandac$ASTNode*) $tmp1705);
                                t1703 = $tmp1704;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1704));
                                panda$core$Panda$unref$panda$core$Object($tmp1705);
                                panda$core$String* $tmp1714 = panda$core$String$convert$R$panda$core$String(separator1679);
                                $tmp1713 = $tmp1714;
                                panda$core$String* $tmp1716 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1713, &$s1715);
                                $tmp1712 = $tmp1716;
                                panda$core$String* $tmp1717 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1712, ((panda$core$Object*) t1703));
                                $tmp1711 = $tmp1717;
                                panda$core$String* $tmp1719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1711, &$s1718);
                                $tmp1710 = $tmp1719;
                                panda$core$MutableString$append$panda$core$String(result1674, $tmp1710);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1710));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1711));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1712));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1713));
                            }
                            $tmp1702 = -1;
                            goto $l1700;
                            $l1700:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1703));
                            t1703 = NULL;
                            switch ($tmp1702) {
                                case -1: goto $l1720;
                            }
                            $l1720:;
                        }
                        goto $l1692;
                        $l1693:;
                    }
                    $tmp1684 = -1;
                    goto $l1682;
                    $l1682:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$459$171685));
                    Iter$459$171685 = NULL;
                    switch ($tmp1684) {
                        case -1: goto $l1721;
                    }
                    $l1721:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1722, ((panda$core$UInt8) { 58 }));
                panda$core$MutableString$append$panda$core$Char8(result1674, $tmp1722);
                {
                    int $tmp1725;
                    {
                        ITable* $tmp1729 = ((panda$collections$Iterable*) statements1669)->$class->itable;
                        while ($tmp1729->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1729 = $tmp1729->next;
                        }
                        $fn1731 $tmp1730 = $tmp1729->methods[0];
                        panda$collections$Iterator* $tmp1732 = $tmp1730(((panda$collections$Iterable*) statements1669));
                        $tmp1728 = $tmp1732;
                        $tmp1727 = $tmp1728;
                        Iter$463$171726 = $tmp1727;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1727));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1728));
                        $l1733:;
                        ITable* $tmp1736 = Iter$463$171726->$class->itable;
                        while ($tmp1736->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1736 = $tmp1736->next;
                        }
                        $fn1738 $tmp1737 = $tmp1736->methods[0];
                        panda$core$Bit $tmp1739 = $tmp1737(Iter$463$171726);
                        panda$core$Bit $tmp1740 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1739);
                        bool $tmp1735 = $tmp1740.value;
                        if (!$tmp1735) goto $l1734;
                        {
                            int $tmp1743;
                            {
                                ITable* $tmp1747 = Iter$463$171726->$class->itable;
                                while ($tmp1747->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1747 = $tmp1747->next;
                                }
                                $fn1749 $tmp1748 = $tmp1747->methods[1];
                                panda$core$Object* $tmp1750 = $tmp1748(Iter$463$171726);
                                $tmp1746 = $tmp1750;
                                $tmp1745 = ((org$pandalanguage$pandac$ASTNode*) $tmp1746);
                                s1744 = $tmp1745;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1745));
                                panda$core$Panda$unref$panda$core$Object($tmp1746);
                                panda$core$String* $tmp1753 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1752, ((panda$core$Object*) s1744));
                                $tmp1751 = $tmp1753;
                                panda$core$MutableString$append$panda$core$String(result1674, $tmp1751);
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$463$171726));
                    Iter$463$171726 = NULL;
                    switch ($tmp1725) {
                        case -1: goto $l1755;
                    }
                    $l1755:;
                }
                panda$core$String* $tmp1758 = panda$core$MutableString$finish$R$panda$core$String(result1674);
                $tmp1757 = $tmp1758;
                $tmp1756 = $tmp1757;
                $returnValue265 = $tmp1756;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1756));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1757));
                $tmp1673 = 0;
                goto $l1671;
                $l1759:;
                $tmp257 = 55;
                goto $l255;
                $l1760:;
                return $returnValue265;
            }
            $l1671:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1674));
            result1674 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1679));
            separator1679 = NULL;
            switch ($tmp1673) {
                case 0: goto $l1759;
            }
            $l1762:;
        }
        }
        else {
        panda$core$Bit $tmp1763 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$189_9258->$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp1763.value) {
        {
            panda$core$String** $tmp1765 = ((panda$core$String**) ((char*) $match$189_9258->$data + 16));
            label1764 = *$tmp1765;
            org$pandalanguage$pandac$ASTNode** $tmp1767 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$189_9258->$data + 24));
            test1766 = *$tmp1767;
            panda$collections$ImmutableArray** $tmp1769 = ((panda$collections$ImmutableArray**) ((char*) $match$189_9258->$data + 32));
            statements1768 = *$tmp1769;
            int $tmp1772;
            {
                panda$core$MutableString* $tmp1776 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1776);
                $tmp1775 = $tmp1776;
                $tmp1774 = $tmp1775;
                result1773 = $tmp1774;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1774));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1775));
                if (((panda$core$Bit) { label1764 != NULL }).value) {
                {
                    panda$core$String* $tmp1779 = panda$core$String$convert$R$panda$core$String(label1764);
                    $tmp1778 = $tmp1779;
                    panda$core$String* $tmp1781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1778, &$s1780);
                    $tmp1777 = $tmp1781;
                    panda$core$MutableString$append$panda$core$String(result1773, $tmp1777);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1777));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1778));
                }
                }
                panda$core$String* $tmp1785 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1784, ((panda$core$Object*) test1766));
                $tmp1783 = $tmp1785;
                panda$core$String* $tmp1787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1783, &$s1786);
                $tmp1782 = $tmp1787;
                panda$core$MutableString$append$panda$core$String(result1773, $tmp1782);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1782));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1783));
                {
                    int $tmp1790;
                    {
                        ITable* $tmp1794 = ((panda$collections$Iterable*) statements1768)->$class->itable;
                        while ($tmp1794->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1794 = $tmp1794->next;
                        }
                        $fn1796 $tmp1795 = $tmp1794->methods[0];
                        panda$collections$Iterator* $tmp1797 = $tmp1795(((panda$collections$Iterable*) statements1768));
                        $tmp1793 = $tmp1797;
                        $tmp1792 = $tmp1793;
                        Iter$473$171791 = $tmp1792;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1792));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1793));
                        $l1798:;
                        ITable* $tmp1801 = Iter$473$171791->$class->itable;
                        while ($tmp1801->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1801 = $tmp1801->next;
                        }
                        $fn1803 $tmp1802 = $tmp1801->methods[0];
                        panda$core$Bit $tmp1804 = $tmp1802(Iter$473$171791);
                        panda$core$Bit $tmp1805 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1804);
                        bool $tmp1800 = $tmp1805.value;
                        if (!$tmp1800) goto $l1799;
                        {
                            int $tmp1808;
                            {
                                ITable* $tmp1812 = Iter$473$171791->$class->itable;
                                while ($tmp1812->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1812 = $tmp1812->next;
                                }
                                $fn1814 $tmp1813 = $tmp1812->methods[1];
                                panda$core$Object* $tmp1815 = $tmp1813(Iter$473$171791);
                                $tmp1811 = $tmp1815;
                                $tmp1810 = ((org$pandalanguage$pandac$ASTNode*) $tmp1811);
                                s1809 = $tmp1810;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1810));
                                panda$core$Panda$unref$panda$core$Object($tmp1811);
                                panda$core$String* $tmp1818 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1809), &$s1817);
                                $tmp1816 = $tmp1818;
                                panda$core$MutableString$append$panda$core$String(result1773, $tmp1816);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1816));
                            }
                            $tmp1808 = -1;
                            goto $l1806;
                            $l1806:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1809));
                            s1809 = NULL;
                            switch ($tmp1808) {
                                case -1: goto $l1819;
                            }
                            $l1819:;
                        }
                        goto $l1798;
                        $l1799:;
                    }
                    $tmp1790 = -1;
                    goto $l1788;
                    $l1788:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$473$171791));
                    Iter$473$171791 = NULL;
                    switch ($tmp1790) {
                        case -1: goto $l1820;
                    }
                    $l1820:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1821, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1773, $tmp1821);
                panda$core$String* $tmp1824 = panda$core$MutableString$finish$R$panda$core$String(result1773);
                $tmp1823 = $tmp1824;
                $tmp1822 = $tmp1823;
                $returnValue265 = $tmp1822;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1822));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1823));
                $tmp1772 = 0;
                goto $l1770;
                $l1825:;
                $tmp257 = 56;
                goto $l255;
                $l1826:;
                return $returnValue265;
            }
            $l1770:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1773));
            result1773 = NULL;
            switch ($tmp1772) {
                case 0: goto $l1825;
            }
            $l1828:;
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
    $tmp257 = -1;
    goto $l255;
    $l255:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp259));
    switch ($tmp257) {
        case 45: goto $l1516;
        case 37: goto $l1424;
        case 15: goto $l661;
        case 34: goto $l1391;
        case 9: goto $l425;
        case 46: goto $l1533;
        case 41: goto $l1493;
        case 48: goto $l1556;
        case 21: goto $l831;
        case 25: goto $l982;
        case 32: goto $l1376;
        case 4: goto $l320;
        case 54: goto $l1663;
        case 11: goto $l453;
        case 36: goto $l1406;
        case 8: goto $l412;
        case 0: goto $l277;
        case 10: goto $l429;
        case 6: goto $l353;
        case 27: goto $l1057;
        case 55: goto $l1760;
        case 5: goto $l325;
        case 39: goto $l1472;
        case 51: goto $l1601;
        case 19: goto $l755;
        case 40: goto $l1481;
        case 20: goto $l775;
        case 50: goto $l1577;
        case 3: goto $l308;
        case 2: goto $l294;
        case 52: goto $l1625;
        case 14: goto $l648;
        case 23: goto $l952;
        case 29: goto $l1124;
        case 24: goto $l976;
        case 38: goto $l1445;
        case 47: goto $l1550;
        case 28: goto $l1066;
        case 35: goto $l1400;
        case 56: goto $l1826;
        case -1: goto $l1829;
        case 1: goto $l280;
        case 18: goto $l690;
        case 17: goto $l684;
        case 44: goto $l1511;
        case 30: goto $l1188;
        case 43: goto $l1502;
        case 16: goto $l665;
        case 7: goto $l361;
        case 42: goto $l1497;
        case 26: goto $l1048;
        case 49: goto $l1574;
        case 31: goto $l1315;
        case 22: goto $l881;
        case 13: goto $l520;
        case 33: goto $l1385;
        case 53: goto $l1631;
        case 12: goto $l491;
    }
    $l1829:;
}
void org$pandalanguage$pandac$ASTNode$cleanup(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$5_11836 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1837;
    org$pandalanguage$pandac$Position _f01839;
    panda$core$String* _f11841 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21843 = NULL;
    org$pandalanguage$pandac$Position _f01846;
    org$pandalanguage$pandac$ASTNode* _f11848 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21850 = NULL;
    org$pandalanguage$pandac$Position _f01853;
    org$pandalanguage$pandac$ASTNode* _f11855 = NULL;
    org$pandalanguage$pandac$Position _f01858;
    org$pandalanguage$pandac$Position _f01861;
    org$pandalanguage$pandac$ASTNode* _f11863 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind _f21865;
    org$pandalanguage$pandac$ASTNode* _f31867 = NULL;
    org$pandalanguage$pandac$Position _f01870;
    panda$core$Bit _f11872;
    org$pandalanguage$pandac$Position _f01875;
    panda$collections$ImmutableArray* _f11877 = NULL;
    org$pandalanguage$pandac$Position _f01880;
    panda$core$String* _f11882 = NULL;
    org$pandalanguage$pandac$Position _f01885;
    org$pandalanguage$pandac$ASTNode* _f11887 = NULL;
    panda$collections$ImmutableArray* _f21889 = NULL;
    org$pandalanguage$pandac$Position _f01892;
    org$pandalanguage$pandac$ASTNode* _f11894 = NULL;
    panda$core$String* _f21896 = NULL;
    panda$collections$ImmutableArray* _f31898 = NULL;
    org$pandalanguage$pandac$Position _f01901;
    org$pandalanguage$pandac$ASTNode* _f11903 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* _f21905 = NULL;
    panda$core$Int64 _f31907;
    org$pandalanguage$pandac$Position _f01910;
    org$pandalanguage$pandac$ASTNode* _f11912 = NULL;
    panda$collections$ImmutableArray* _f21914 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind _f31916;
    panda$core$String* _f41918 = NULL;
    panda$collections$ImmutableArray* _f51920 = NULL;
    panda$collections$ImmutableArray* _f61922 = NULL;
    panda$collections$ImmutableArray* _f71924 = NULL;
    org$pandalanguage$pandac$Position _f01927;
    panda$core$String* _f11929 = NULL;
    org$pandalanguage$pandac$Position _f01932;
    org$pandalanguage$pandac$ASTNode* _f11934 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21936 = NULL;
    org$pandalanguage$pandac$Position _f01939;
    panda$core$String* _f11941 = NULL;
    panda$collections$ImmutableArray* _f21943 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31945 = NULL;
    org$pandalanguage$pandac$Position _f01948;
    org$pandalanguage$pandac$ASTNode* _f11950 = NULL;
    panda$core$String* _f21952 = NULL;
    org$pandalanguage$pandac$Position _f01955;
    org$pandalanguage$pandac$ASTNode* _f11957 = NULL;
    panda$collections$ImmutableArray* _f21959 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31961 = NULL;
    panda$collections$ImmutableArray* _f01964 = NULL;
    org$pandalanguage$pandac$Position _f01967;
    panda$core$String* _f11969 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21971 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31973 = NULL;
    panda$collections$ImmutableArray* _f41975 = NULL;
    org$pandalanguage$pandac$Position _f01978;
    panda$core$String* _f11980 = NULL;
    panda$collections$ImmutableArray* _f21982 = NULL;
    org$pandalanguage$pandac$Position _f01985;
    panda$core$String* _f11987 = NULL;
    org$pandalanguage$pandac$Position _f01990;
    org$pandalanguage$pandac$ASTNode* _f11992 = NULL;
    panda$collections$ImmutableArray* _f21994 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31996 = NULL;
    org$pandalanguage$pandac$Position _f01999;
    panda$core$UInt64 _f12001;
    org$pandalanguage$pandac$IRNode* _f02004 = NULL;
    org$pandalanguage$pandac$Position _f02007;
    panda$core$String* _f12009 = NULL;
    panda$collections$ImmutableArray* _f22011 = NULL;
    org$pandalanguage$pandac$Position _f02014;
    org$pandalanguage$pandac$ASTNode* _f12016 = NULL;
    panda$collections$ImmutableArray* _f22018 = NULL;
    panda$collections$ImmutableArray* _f32020 = NULL;
    org$pandalanguage$pandac$Position _f02023;
    org$pandalanguage$pandac$ASTNode* _f12025 = NULL;
    panda$collections$ImmutableArray* _f22027 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind _f32029;
    panda$core$String* _f42031 = NULL;
    panda$collections$ImmutableArray* _f52033 = NULL;
    org$pandalanguage$pandac$ASTNode* _f62035 = NULL;
    panda$collections$ImmutableArray* _f72037 = NULL;
    org$pandalanguage$pandac$Position _f02040;
    org$pandalanguage$pandac$parser$Token$Kind _f12042;
    panda$collections$ImmutableArray* _f22044 = NULL;
    org$pandalanguage$pandac$ASTNode* _f32046 = NULL;
    org$pandalanguage$pandac$Position _f02049;
    org$pandalanguage$pandac$Position _f02052;
    org$pandalanguage$pandac$ASTNode* _f12054 = NULL;
    org$pandalanguage$pandac$Position _f02057;
    panda$core$String* _f12059 = NULL;
    org$pandalanguage$pandac$Position _f02062;
    panda$core$String* _f12064 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22066 = NULL;
    org$pandalanguage$pandac$Position _f02069;
    org$pandalanguage$pandac$parser$Token$Kind _f12071;
    org$pandalanguage$pandac$ASTNode* _f22073 = NULL;
    org$pandalanguage$pandac$Position _f02076;
    org$pandalanguage$pandac$ASTNode* _f12078 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22080 = NULL;
    panda$core$Bit _f32082;
    org$pandalanguage$pandac$ASTNode* _f42084 = NULL;
    org$pandalanguage$pandac$Position _f02087;
    panda$core$Real64 _f12089;
    org$pandalanguage$pandac$Position _f02092;
    org$pandalanguage$pandac$ASTNode* _f12094 = NULL;
    org$pandalanguage$pandac$Position _f02097;
    org$pandalanguage$pandac$Position _f02100;
    panda$core$String* _f12102 = NULL;
    org$pandalanguage$pandac$Position _f02105;
    org$pandalanguage$pandac$Position _f02108;
    panda$collections$ImmutableArray* _f12110 = NULL;
    org$pandalanguage$pandac$Position _f02113;
    panda$collections$ImmutableArray* _f12115 = NULL;
    org$pandalanguage$pandac$Position _f02118;
    panda$core$String* _f12120 = NULL;
    org$pandalanguage$pandac$Position _f02123;
    panda$collections$ImmutableArray* _f12125 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22127 = NULL;
    org$pandalanguage$pandac$Position _f02130;
    panda$core$String* _f12132 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22134 = NULL;
    org$pandalanguage$pandac$Position _f02137;
    panda$collections$ImmutableArray* _f12139 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22141 = NULL;
    org$pandalanguage$pandac$Position _f02144;
    panda$core$String* _f12146 = NULL;
    org$pandalanguage$pandac$Position _f02149;
    org$pandalanguage$pandac$Variable$Kind _f12151;
    panda$collections$ImmutableArray* _f22153 = NULL;
    org$pandalanguage$pandac$Position _f02156;
    panda$collections$ImmutableArray* _f12158 = NULL;
    panda$collections$ImmutableArray* _f22160 = NULL;
    org$pandalanguage$pandac$Position _f02163;
    panda$core$String* _f12165 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22167 = NULL;
    panda$collections$ImmutableArray* _f32169 = NULL;
    int $tmp1832;
    {
        int $tmp1835;
        {
            $tmp1837 = self;
            $match$5_11836 = $tmp1837;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1837));
            panda$core$Bit $tmp1838 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp1838.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1840 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f01839 = *$tmp1840;
                panda$core$String** $tmp1842 = ((panda$core$String**) ((char*) $match$5_11836->$data + 16));
                _f11841 = *$tmp1842;
                org$pandalanguage$pandac$ASTNode** $tmp1844 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 24));
                _f21843 = *$tmp1844;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11841));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21843));
            }
            }
            else {
            panda$core$Bit $tmp1845 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp1845.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1847 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f01846 = *$tmp1847;
                org$pandalanguage$pandac$ASTNode** $tmp1849 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 16));
                _f11848 = *$tmp1849;
                org$pandalanguage$pandac$ASTNode** $tmp1851 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 24));
                _f21850 = *$tmp1851;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11848));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21850));
            }
            }
            else {
            panda$core$Bit $tmp1852 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1852.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1854 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f01853 = *$tmp1854;
                org$pandalanguage$pandac$ASTNode** $tmp1856 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 16));
                _f11855 = *$tmp1856;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11855));
            }
            }
            else {
            panda$core$Bit $tmp1857 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp1857.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1859 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f01858 = *$tmp1859;
            }
            }
            else {
            panda$core$Bit $tmp1860 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 4 }));
            if ($tmp1860.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1862 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f01861 = *$tmp1862;
                org$pandalanguage$pandac$ASTNode** $tmp1864 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 16));
                _f11863 = *$tmp1864;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp1866 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11836->$data + 24));
                _f21865 = *$tmp1866;
                org$pandalanguage$pandac$ASTNode** $tmp1868 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 32));
                _f31867 = *$tmp1868;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11863));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31867));
            }
            }
            else {
            panda$core$Bit $tmp1869 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 5 }));
            if ($tmp1869.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1871 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f01870 = *$tmp1871;
                panda$core$Bit* $tmp1873 = ((panda$core$Bit*) ((char*) $match$5_11836->$data + 16));
                _f11872 = *$tmp1873;
            }
            }
            else {
            panda$core$Bit $tmp1874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 6 }));
            if ($tmp1874.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1876 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f01875 = *$tmp1876;
                panda$collections$ImmutableArray** $tmp1878 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11836->$data + 16));
                _f11877 = *$tmp1878;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11877));
            }
            }
            else {
            panda$core$Bit $tmp1879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 7 }));
            if ($tmp1879.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1881 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f01880 = *$tmp1881;
                panda$core$String** $tmp1883 = ((panda$core$String**) ((char*) $match$5_11836->$data + 16));
                _f11882 = *$tmp1883;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11882));
            }
            }
            else {
            panda$core$Bit $tmp1884 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 8 }));
            if ($tmp1884.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1886 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f01885 = *$tmp1886;
                org$pandalanguage$pandac$ASTNode** $tmp1888 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 16));
                _f11887 = *$tmp1888;
                panda$collections$ImmutableArray** $tmp1890 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11836->$data + 24));
                _f21889 = *$tmp1890;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11887));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21889));
            }
            }
            else {
            panda$core$Bit $tmp1891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 9 }));
            if ($tmp1891.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1893 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f01892 = *$tmp1893;
                org$pandalanguage$pandac$ASTNode** $tmp1895 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 16));
                _f11894 = *$tmp1895;
                panda$core$String** $tmp1897 = ((panda$core$String**) ((char*) $match$5_11836->$data + 24));
                _f21896 = *$tmp1897;
                panda$collections$ImmutableArray** $tmp1899 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11836->$data + 32));
                _f31898 = *$tmp1899;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11894));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21896));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31898));
            }
            }
            else {
            panda$core$Bit $tmp1900 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 10 }));
            if ($tmp1900.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1902 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f01901 = *$tmp1902;
                org$pandalanguage$pandac$ASTNode** $tmp1904 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 16));
                _f11903 = *$tmp1904;
                org$pandalanguage$pandac$ChoiceEntry** $tmp1906 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_11836->$data + 24));
                _f21905 = *$tmp1906;
                panda$core$Int64* $tmp1908 = ((panda$core$Int64*) ((char*) $match$5_11836->$data + 32));
                _f31907 = *$tmp1908;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11903));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21905));
            }
            }
            else {
            panda$core$Bit $tmp1909 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp1909.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1911 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f01910 = *$tmp1911;
                org$pandalanguage$pandac$ASTNode** $tmp1913 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 16));
                _f11912 = *$tmp1913;
                panda$collections$ImmutableArray** $tmp1915 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11836->$data + 24));
                _f21914 = *$tmp1915;
                org$pandalanguage$pandac$ClassDecl$Kind* $tmp1917 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$5_11836->$data + 32));
                _f31916 = *$tmp1917;
                panda$core$String** $tmp1919 = ((panda$core$String**) ((char*) $match$5_11836->$data + 40));
                _f41918 = *$tmp1919;
                panda$collections$ImmutableArray** $tmp1921 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11836->$data + 48));
                _f51920 = *$tmp1921;
                panda$collections$ImmutableArray** $tmp1923 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11836->$data + 56));
                _f61922 = *$tmp1923;
                panda$collections$ImmutableArray** $tmp1925 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11836->$data + 64));
                _f71924 = *$tmp1925;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11912));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21914));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41918));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f51920));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f61922));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f71924));
            }
            }
            else {
            panda$core$Bit $tmp1926 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp1926.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1928 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f01927 = *$tmp1928;
                panda$core$String** $tmp1930 = ((panda$core$String**) ((char*) $match$5_11836->$data + 16));
                _f11929 = *$tmp1930;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11929));
            }
            }
            else {
            panda$core$Bit $tmp1931 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp1931.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1933 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f01932 = *$tmp1933;
                org$pandalanguage$pandac$ASTNode** $tmp1935 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 16));
                _f11934 = *$tmp1935;
                org$pandalanguage$pandac$ASTNode** $tmp1937 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 24));
                _f21936 = *$tmp1937;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11934));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21936));
            }
            }
            else {
            panda$core$Bit $tmp1938 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 14 }));
            if ($tmp1938.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1940 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f01939 = *$tmp1940;
                panda$core$String** $tmp1942 = ((panda$core$String**) ((char*) $match$5_11836->$data + 16));
                _f11941 = *$tmp1942;
                panda$collections$ImmutableArray** $tmp1944 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11836->$data + 24));
                _f21943 = *$tmp1944;
                org$pandalanguage$pandac$ASTNode** $tmp1946 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 32));
                _f31945 = *$tmp1946;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11941));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21943));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31945));
            }
            }
            else {
            panda$core$Bit $tmp1947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 15 }));
            if ($tmp1947.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1949 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f01948 = *$tmp1949;
                org$pandalanguage$pandac$ASTNode** $tmp1951 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 16));
                _f11950 = *$tmp1951;
                panda$core$String** $tmp1953 = ((panda$core$String**) ((char*) $match$5_11836->$data + 24));
                _f21952 = *$tmp1953;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11950));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21952));
            }
            }
            else {
            panda$core$Bit $tmp1954 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 16 }));
            if ($tmp1954.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1956 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f01955 = *$tmp1956;
                org$pandalanguage$pandac$ASTNode** $tmp1958 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 16));
                _f11957 = *$tmp1958;
                panda$collections$ImmutableArray** $tmp1960 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11836->$data + 24));
                _f21959 = *$tmp1960;
                org$pandalanguage$pandac$ASTNode** $tmp1962 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 32));
                _f31961 = *$tmp1962;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11957));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21959));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31961));
            }
            }
            else {
            panda$core$Bit $tmp1963 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp1963.value) {
            {
                panda$collections$ImmutableArray** $tmp1965 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11836->$data + 0));
                _f01964 = *$tmp1965;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f01964));
            }
            }
            else {
            panda$core$Bit $tmp1966 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp1966.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1968 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f01967 = *$tmp1968;
                panda$core$String** $tmp1970 = ((panda$core$String**) ((char*) $match$5_11836->$data + 16));
                _f11969 = *$tmp1970;
                org$pandalanguage$pandac$ASTNode** $tmp1972 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 24));
                _f21971 = *$tmp1972;
                org$pandalanguage$pandac$ASTNode** $tmp1974 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 32));
                _f31973 = *$tmp1974;
                panda$collections$ImmutableArray** $tmp1976 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11836->$data + 40));
                _f41975 = *$tmp1976;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11969));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21971));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31973));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41975));
            }
            }
            else {
            panda$core$Bit $tmp1977 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp1977.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1979 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f01978 = *$tmp1979;
                panda$core$String** $tmp1981 = ((panda$core$String**) ((char*) $match$5_11836->$data + 16));
                _f11980 = *$tmp1981;
                panda$collections$ImmutableArray** $tmp1983 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11836->$data + 24));
                _f21982 = *$tmp1983;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11980));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21982));
            }
            }
            else {
            panda$core$Bit $tmp1984 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 20 }));
            if ($tmp1984.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1986 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f01985 = *$tmp1986;
                panda$core$String** $tmp1988 = ((panda$core$String**) ((char*) $match$5_11836->$data + 16));
                _f11987 = *$tmp1988;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11987));
            }
            }
            else {
            panda$core$Bit $tmp1989 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 21 }));
            if ($tmp1989.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1991 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f01990 = *$tmp1991;
                org$pandalanguage$pandac$ASTNode** $tmp1993 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 16));
                _f11992 = *$tmp1993;
                panda$collections$ImmutableArray** $tmp1995 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11836->$data + 24));
                _f21994 = *$tmp1995;
                org$pandalanguage$pandac$ASTNode** $tmp1997 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 32));
                _f31996 = *$tmp1997;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11992));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21994));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31996));
            }
            }
            else {
            panda$core$Bit $tmp1998 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 22 }));
            if ($tmp1998.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2000 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f01999 = *$tmp2000;
                panda$core$UInt64* $tmp2002 = ((panda$core$UInt64*) ((char*) $match$5_11836->$data + 16));
                _f12001 = *$tmp2002;
            }
            }
            else {
            panda$core$Bit $tmp2003 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 23 }));
            if ($tmp2003.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2005 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11836->$data + 0));
                _f02004 = *$tmp2005;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02004));
            }
            }
            else {
            panda$core$Bit $tmp2006 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 24 }));
            if ($tmp2006.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2008 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f02007 = *$tmp2008;
                panda$core$String** $tmp2010 = ((panda$core$String**) ((char*) $match$5_11836->$data + 16));
                _f12009 = *$tmp2010;
                panda$collections$ImmutableArray** $tmp2012 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11836->$data + 24));
                _f22011 = *$tmp2012;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12009));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22011));
            }
            }
            else {
            panda$core$Bit $tmp2013 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 25 }));
            if ($tmp2013.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2015 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f02014 = *$tmp2015;
                org$pandalanguage$pandac$ASTNode** $tmp2017 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 16));
                _f12016 = *$tmp2017;
                panda$collections$ImmutableArray** $tmp2019 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11836->$data + 24));
                _f22018 = *$tmp2019;
                panda$collections$ImmutableArray** $tmp2021 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11836->$data + 32));
                _f32020 = *$tmp2021;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12016));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22018));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32020));
            }
            }
            else {
            panda$core$Bit $tmp2022 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 26 }));
            if ($tmp2022.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2024 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f02023 = *$tmp2024;
                org$pandalanguage$pandac$ASTNode** $tmp2026 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 16));
                _f12025 = *$tmp2026;
                panda$collections$ImmutableArray** $tmp2028 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11836->$data + 24));
                _f22027 = *$tmp2028;
                org$pandalanguage$pandac$MethodDecl$Kind* $tmp2030 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$5_11836->$data + 32));
                _f32029 = *$tmp2030;
                panda$core$String** $tmp2032 = ((panda$core$String**) ((char*) $match$5_11836->$data + 40));
                _f42031 = *$tmp2032;
                panda$collections$ImmutableArray** $tmp2034 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11836->$data + 48));
                _f52033 = *$tmp2034;
                org$pandalanguage$pandac$ASTNode** $tmp2036 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 56));
                _f62035 = *$tmp2036;
                panda$collections$ImmutableArray** $tmp2038 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11836->$data + 64));
                _f72037 = *$tmp2038;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12025));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22027));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42031));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f52033));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f62035));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f72037));
            }
            }
            else {
            panda$core$Bit $tmp2039 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 27 }));
            if ($tmp2039.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2041 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f02040 = *$tmp2041;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2043 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11836->$data + 16));
                _f12042 = *$tmp2043;
                panda$collections$ImmutableArray** $tmp2045 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11836->$data + 24));
                _f22044 = *$tmp2045;
                org$pandalanguage$pandac$ASTNode** $tmp2047 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 32));
                _f32046 = *$tmp2047;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22044));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32046));
            }
            }
            else {
            panda$core$Bit $tmp2048 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 28 }));
            if ($tmp2048.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2050 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f02049 = *$tmp2050;
            }
            }
            else {
            panda$core$Bit $tmp2051 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 29 }));
            if ($tmp2051.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2053 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f02052 = *$tmp2053;
                org$pandalanguage$pandac$ASTNode** $tmp2055 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 16));
                _f12054 = *$tmp2055;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12054));
            }
            }
            else {
            panda$core$Bit $tmp2056 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 30 }));
            if ($tmp2056.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2058 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f02057 = *$tmp2058;
                panda$core$String** $tmp2060 = ((panda$core$String**) ((char*) $match$5_11836->$data + 16));
                _f12059 = *$tmp2060;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12059));
            }
            }
            else {
            panda$core$Bit $tmp2061 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 31 }));
            if ($tmp2061.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2063 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f02062 = *$tmp2063;
                panda$core$String** $tmp2065 = ((panda$core$String**) ((char*) $match$5_11836->$data + 16));
                _f12064 = *$tmp2065;
                org$pandalanguage$pandac$ASTNode** $tmp2067 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 24));
                _f22066 = *$tmp2067;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12064));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22066));
            }
            }
            else {
            panda$core$Bit $tmp2068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 32 }));
            if ($tmp2068.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2070 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f02069 = *$tmp2070;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2072 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11836->$data + 16));
                _f12071 = *$tmp2072;
                org$pandalanguage$pandac$ASTNode** $tmp2074 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 24));
                _f22073 = *$tmp2074;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22073));
            }
            }
            else {
            panda$core$Bit $tmp2075 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp2075.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2077 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f02076 = *$tmp2077;
                org$pandalanguage$pandac$ASTNode** $tmp2079 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 16));
                _f12078 = *$tmp2079;
                org$pandalanguage$pandac$ASTNode** $tmp2081 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 24));
                _f22080 = *$tmp2081;
                panda$core$Bit* $tmp2083 = ((panda$core$Bit*) ((char*) $match$5_11836->$data + 32));
                _f32082 = *$tmp2083;
                org$pandalanguage$pandac$ASTNode** $tmp2085 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 33));
                _f42084 = *$tmp2085;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12078));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22080));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42084));
            }
            }
            else {
            panda$core$Bit $tmp2086 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp2086.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2088 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f02087 = *$tmp2088;
                panda$core$Real64* $tmp2090 = ((panda$core$Real64*) ((char*) $match$5_11836->$data + 16));
                _f12089 = *$tmp2090;
            }
            }
            else {
            panda$core$Bit $tmp2091 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 35 }));
            if ($tmp2091.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2093 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f02092 = *$tmp2093;
                org$pandalanguage$pandac$ASTNode** $tmp2095 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 16));
                _f12094 = *$tmp2095;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12094));
            }
            }
            else {
            panda$core$Bit $tmp2096 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 36 }));
            if ($tmp2096.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2098 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f02097 = *$tmp2098;
            }
            }
            else {
            panda$core$Bit $tmp2099 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 37 }));
            if ($tmp2099.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2101 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f02100 = *$tmp2101;
                panda$core$String** $tmp2103 = ((panda$core$String**) ((char*) $match$5_11836->$data + 16));
                _f12102 = *$tmp2103;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12102));
            }
            }
            else {
            panda$core$Bit $tmp2104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 38 }));
            if ($tmp2104.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2106 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f02105 = *$tmp2106;
            }
            }
            else {
            panda$core$Bit $tmp2107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp2107.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2109 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f02108 = *$tmp2109;
                panda$collections$ImmutableArray** $tmp2111 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11836->$data + 16));
                _f12110 = *$tmp2111;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12110));
            }
            }
            else {
            panda$core$Bit $tmp2112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 40 }));
            if ($tmp2112.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2114 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f02113 = *$tmp2114;
                panda$collections$ImmutableArray** $tmp2116 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11836->$data + 16));
                _f12115 = *$tmp2116;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12115));
            }
            }
            else {
            panda$core$Bit $tmp2117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 41 }));
            if ($tmp2117.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2119 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f02118 = *$tmp2119;
                panda$core$String** $tmp2121 = ((panda$core$String**) ((char*) $match$5_11836->$data + 16));
                _f12120 = *$tmp2121;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12120));
            }
            }
            else {
            panda$core$Bit $tmp2122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 42 }));
            if ($tmp2122.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2124 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f02123 = *$tmp2124;
                panda$collections$ImmutableArray** $tmp2126 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11836->$data + 16));
                _f12125 = *$tmp2126;
                org$pandalanguage$pandac$ASTNode** $tmp2128 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 24));
                _f22127 = *$tmp2128;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12125));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22127));
            }
            }
            else {
            panda$core$Bit $tmp2129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 43 }));
            if ($tmp2129.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2131 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f02130 = *$tmp2131;
                panda$core$String** $tmp2133 = ((panda$core$String**) ((char*) $match$5_11836->$data + 16));
                _f12132 = *$tmp2133;
                org$pandalanguage$pandac$ASTNode** $tmp2135 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 24));
                _f22134 = *$tmp2135;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12132));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22134));
            }
            }
            else {
            panda$core$Bit $tmp2136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 44 }));
            if ($tmp2136.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2138 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f02137 = *$tmp2138;
                panda$collections$ImmutableArray** $tmp2140 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11836->$data + 16));
                _f12139 = *$tmp2140;
                org$pandalanguage$pandac$ASTNode** $tmp2142 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 24));
                _f22141 = *$tmp2142;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12139));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22141));
            }
            }
            else {
            panda$core$Bit $tmp2143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 45 }));
            if ($tmp2143.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2145 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f02144 = *$tmp2145;
                panda$core$String** $tmp2147 = ((panda$core$String**) ((char*) $match$5_11836->$data + 16));
                _f12146 = *$tmp2147;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12146));
            }
            }
            else {
            panda$core$Bit $tmp2148 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 46 }));
            if ($tmp2148.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2150 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f02149 = *$tmp2150;
                org$pandalanguage$pandac$Variable$Kind* $tmp2152 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_11836->$data + 16));
                _f12151 = *$tmp2152;
                panda$collections$ImmutableArray** $tmp2154 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11836->$data + 24));
                _f22153 = *$tmp2154;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22153));
            }
            }
            else {
            panda$core$Bit $tmp2155 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 47 }));
            if ($tmp2155.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2157 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f02156 = *$tmp2157;
                panda$collections$ImmutableArray** $tmp2159 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11836->$data + 16));
                _f12158 = *$tmp2159;
                panda$collections$ImmutableArray** $tmp2161 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11836->$data + 24));
                _f22160 = *$tmp2161;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12158));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22160));
            }
            }
            else {
            panda$core$Bit $tmp2162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11836->$rawValue, ((panda$core$Int64) { 48 }));
            if ($tmp2162.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2164 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11836->$data + 0));
                _f02163 = *$tmp2164;
                panda$core$String** $tmp2166 = ((panda$core$String**) ((char*) $match$5_11836->$data + 16));
                _f12165 = *$tmp2166;
                org$pandalanguage$pandac$ASTNode** $tmp2168 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11836->$data + 24));
                _f22167 = *$tmp2168;
                panda$collections$ImmutableArray** $tmp2170 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11836->$data + 32));
                _f32169 = *$tmp2170;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12165));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22167));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32169));
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
        }
        $tmp1835 = -1;
        goto $l1833;
        $l1833:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1837));
        switch ($tmp1835) {
            case -1: goto $l2171;
        }
        $l2171:;
    }
    $tmp1832 = -1;
    goto $l1830;
    $l1830:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp1832) {
        case -1: goto $l2172;
    }
    $l2172:;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$core$String* $tmp2174;
    panda$core$String* $tmp2177;
    org$pandalanguage$pandac$ASTNode* $tmp2178;
    org$pandalanguage$pandac$ASTNode* $tmp2181;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2173 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2173 = p_f0;
    {
        panda$core$String** $tmp2175 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2174 = *$tmp2175;
        panda$core$String** $tmp2176 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2177 = p_f1;
        *$tmp2176 = $tmp2177;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2177));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2174));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2179 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2178 = *$tmp2179;
        org$pandalanguage$pandac$ASTNode** $tmp2180 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2181 = p_f2;
        *$tmp2180 = $tmp2181;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2181));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2178));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2183;
    org$pandalanguage$pandac$ASTNode* $tmp2186;
    org$pandalanguage$pandac$ASTNode* $tmp2187;
    org$pandalanguage$pandac$ASTNode* $tmp2190;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2182 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2182 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2184 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2183 = *$tmp2184;
        org$pandalanguage$pandac$ASTNode** $tmp2185 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2186 = p_f1;
        *$tmp2185 = $tmp2186;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2186));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2183));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2188 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2187 = *$tmp2188;
        org$pandalanguage$pandac$ASTNode** $tmp2189 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2190 = p_f2;
        *$tmp2189 = $tmp2190;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2190));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2187));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    org$pandalanguage$pandac$ASTNode* $tmp2192;
    org$pandalanguage$pandac$ASTNode* $tmp2195;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2191 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2191 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2193 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2192 = *$tmp2193;
        org$pandalanguage$pandac$ASTNode** $tmp2194 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2195 = p_f1;
        *$tmp2194 = $tmp2195;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2195));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2192));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2196 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2196 = p_f0;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$parser$Token$Kind p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2198;
    org$pandalanguage$pandac$ASTNode* $tmp2201;
    org$pandalanguage$pandac$ASTNode* $tmp2203;
    org$pandalanguage$pandac$ASTNode* $tmp2206;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2197 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2197 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2199 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2198 = *$tmp2199;
        org$pandalanguage$pandac$ASTNode** $tmp2200 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2201 = p_f1;
        *$tmp2200 = $tmp2201;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2201));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2198));
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2202 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 24));
    *$tmp2202 = p_f2;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2204 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2203 = *$tmp2204;
        org$pandalanguage$pandac$ASTNode** $tmp2205 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2206 = p_f3;
        *$tmp2205 = $tmp2206;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2206));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2203));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Bit p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2207 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2207 = p_f0;
    panda$core$Bit* $tmp2208 = ((panda$core$Bit*) ((char*) self->$data + 16));
    *$tmp2208 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    panda$collections$ImmutableArray* $tmp2210;
    panda$collections$ImmutableArray* $tmp2213;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2209 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2209 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2211 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2210 = *$tmp2211;
        panda$collections$ImmutableArray** $tmp2212 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2213 = p_f1;
        *$tmp2212 = $tmp2213;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2213));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2210));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp2215;
    panda$core$String* $tmp2218;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2214 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2214 = p_f0;
    {
        panda$core$String** $tmp2216 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2215 = *$tmp2216;
        panda$core$String** $tmp2217 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2218 = p_f1;
        *$tmp2217 = $tmp2218;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2218));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2215));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2220;
    org$pandalanguage$pandac$ASTNode* $tmp2223;
    panda$collections$ImmutableArray* $tmp2224;
    panda$collections$ImmutableArray* $tmp2227;
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
    {
        panda$collections$ImmutableArray** $tmp2225 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2224 = *$tmp2225;
        panda$collections$ImmutableArray** $tmp2226 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2227 = p_f2;
        *$tmp2226 = $tmp2227;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2227));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2224));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2229;
    org$pandalanguage$pandac$ASTNode* $tmp2232;
    panda$core$String* $tmp2233;
    panda$core$String* $tmp2236;
    panda$collections$ImmutableArray* $tmp2237;
    panda$collections$ImmutableArray* $tmp2240;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2228 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2228 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2230 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2229 = *$tmp2230;
        org$pandalanguage$pandac$ASTNode** $tmp2231 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2232 = p_f1;
        *$tmp2231 = $tmp2232;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2232));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2229));
    }
    {
        panda$core$String** $tmp2234 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2233 = *$tmp2234;
        panda$core$String** $tmp2235 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2236 = p_f2;
        *$tmp2235 = $tmp2236;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2236));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2233));
    }
    {
        panda$collections$ImmutableArray** $tmp2238 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2237 = *$tmp2238;
        panda$collections$ImmutableArray** $tmp2239 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2240 = p_f3;
        *$tmp2239 = $tmp2240;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2240));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2237));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2242;
    org$pandalanguage$pandac$ASTNode* $tmp2245;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2246;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2249;
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
        org$pandalanguage$pandac$ChoiceEntry** $tmp2247 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp2246 = *$tmp2247;
        org$pandalanguage$pandac$ChoiceEntry** $tmp2248 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp2249 = p_f2;
        *$tmp2248 = $tmp2249;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2249));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2246));
    }
    panda$core$Int64* $tmp2250 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp2250 = p_f3;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ClassDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, panda$collections$ImmutableArray* p_f6, panda$collections$ImmutableArray* p_f7) {
    org$pandalanguage$pandac$ASTNode* $tmp2252;
    org$pandalanguage$pandac$ASTNode* $tmp2255;
    panda$collections$ImmutableArray* $tmp2256;
    panda$collections$ImmutableArray* $tmp2259;
    panda$core$String* $tmp2261;
    panda$core$String* $tmp2264;
    panda$collections$ImmutableArray* $tmp2265;
    panda$collections$ImmutableArray* $tmp2268;
    panda$collections$ImmutableArray* $tmp2269;
    panda$collections$ImmutableArray* $tmp2272;
    panda$collections$ImmutableArray* $tmp2273;
    panda$collections$ImmutableArray* $tmp2276;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2251 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2251 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2253 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2252 = *$tmp2253;
        org$pandalanguage$pandac$ASTNode** $tmp2254 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2255 = p_f1;
        *$tmp2254 = $tmp2255;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2255));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2252));
    }
    {
        panda$collections$ImmutableArray** $tmp2257 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2256 = *$tmp2257;
        panda$collections$ImmutableArray** $tmp2258 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2259 = p_f2;
        *$tmp2258 = $tmp2259;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2259));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2256));
    }
    org$pandalanguage$pandac$ClassDecl$Kind* $tmp2260 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) self->$data + 32));
    *$tmp2260 = p_f3;
    {
        panda$core$String** $tmp2262 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2261 = *$tmp2262;
        panda$core$String** $tmp2263 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2264 = p_f4;
        *$tmp2263 = $tmp2264;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2264));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2261));
    }
    {
        panda$collections$ImmutableArray** $tmp2266 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2265 = *$tmp2266;
        panda$collections$ImmutableArray** $tmp2267 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2268 = p_f5;
        *$tmp2267 = $tmp2268;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2268));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2265));
    }
    {
        panda$collections$ImmutableArray** $tmp2270 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2269 = *$tmp2270;
        panda$collections$ImmutableArray** $tmp2271 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2272 = p_f6;
        *$tmp2271 = $tmp2272;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2272));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2269));
    }
    {
        panda$collections$ImmutableArray** $tmp2274 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2273 = *$tmp2274;
        panda$collections$ImmutableArray** $tmp2275 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2276 = p_f7;
        *$tmp2275 = $tmp2276;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2276));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2273));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    panda$core$String* $tmp2278;
    panda$core$String* $tmp2281;
    panda$collections$ImmutableArray* $tmp2282;
    panda$collections$ImmutableArray* $tmp2285;
    org$pandalanguage$pandac$ASTNode* $tmp2286;
    org$pandalanguage$pandac$ASTNode* $tmp2289;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2277 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2277 = p_f0;
    {
        panda$core$String** $tmp2279 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2278 = *$tmp2279;
        panda$core$String** $tmp2280 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2281 = p_f1;
        *$tmp2280 = $tmp2281;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2281));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2278));
    }
    {
        panda$collections$ImmutableArray** $tmp2283 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2282 = *$tmp2283;
        panda$collections$ImmutableArray** $tmp2284 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2285 = p_f2;
        *$tmp2284 = $tmp2285;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2285));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2282));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2287 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2286 = *$tmp2287;
        org$pandalanguage$pandac$ASTNode** $tmp2288 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2289 = p_f3;
        *$tmp2288 = $tmp2289;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2289));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2286));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2291;
    org$pandalanguage$pandac$ASTNode* $tmp2294;
    panda$core$String* $tmp2295;
    panda$core$String* $tmp2298;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2290 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2290 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2292 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2291 = *$tmp2292;
        org$pandalanguage$pandac$ASTNode** $tmp2293 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2294 = p_f1;
        *$tmp2293 = $tmp2294;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2294));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2291));
    }
    {
        panda$core$String** $tmp2296 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2295 = *$tmp2296;
        panda$core$String** $tmp2297 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2298 = p_f2;
        *$tmp2297 = $tmp2298;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2298));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2295));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2300;
    org$pandalanguage$pandac$ASTNode* $tmp2303;
    panda$collections$ImmutableArray* $tmp2304;
    panda$collections$ImmutableArray* $tmp2307;
    org$pandalanguage$pandac$ASTNode* $tmp2308;
    org$pandalanguage$pandac$ASTNode* $tmp2311;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2299 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2299 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2301 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2300 = *$tmp2301;
        org$pandalanguage$pandac$ASTNode** $tmp2302 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
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
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, panda$collections$ImmutableArray* p_f0) {
    panda$collections$ImmutableArray* $tmp2312;
    panda$collections$ImmutableArray* $tmp2315;
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableArray** $tmp2313 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp2312 = *$tmp2313;
        panda$collections$ImmutableArray** $tmp2314 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp2315 = p_f0;
        *$tmp2314 = $tmp2315;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2315));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2312));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, org$pandalanguage$pandac$ASTNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    panda$core$String* $tmp2317;
    panda$core$String* $tmp2320;
    org$pandalanguage$pandac$ASTNode* $tmp2321;
    org$pandalanguage$pandac$ASTNode* $tmp2324;
    org$pandalanguage$pandac$ASTNode* $tmp2325;
    org$pandalanguage$pandac$ASTNode* $tmp2328;
    panda$collections$ImmutableArray* $tmp2329;
    panda$collections$ImmutableArray* $tmp2332;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2316 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2316 = p_f0;
    {
        panda$core$String** $tmp2318 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2317 = *$tmp2318;
        panda$core$String** $tmp2319 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2320 = p_f1;
        *$tmp2319 = $tmp2320;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2320));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2317));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2322 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2321 = *$tmp2322;
        org$pandalanguage$pandac$ASTNode** $tmp2323 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2324 = p_f2;
        *$tmp2323 = $tmp2324;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2324));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2321));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2326 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2325 = *$tmp2326;
        org$pandalanguage$pandac$ASTNode** $tmp2327 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2328 = p_f3;
        *$tmp2327 = $tmp2328;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2328));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2325));
    }
    {
        panda$collections$ImmutableArray** $tmp2330 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp2329 = *$tmp2330;
        panda$collections$ImmutableArray** $tmp2331 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp2332 = p_f4;
        *$tmp2331 = $tmp2332;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2332));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2329));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp2334;
    panda$core$String* $tmp2337;
    panda$collections$ImmutableArray* $tmp2338;
    panda$collections$ImmutableArray* $tmp2341;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2333 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2333 = p_f0;
    {
        panda$core$String** $tmp2335 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2334 = *$tmp2335;
        panda$core$String** $tmp2336 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2337 = p_f1;
        *$tmp2336 = $tmp2337;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2337));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2334));
    }
    {
        panda$collections$ImmutableArray** $tmp2339 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2338 = *$tmp2339;
        panda$collections$ImmutableArray** $tmp2340 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2341 = p_f2;
        *$tmp2340 = $tmp2341;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2341));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2338));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp2343;
    panda$core$String* $tmp2346;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2342 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2342 = p_f0;
    {
        panda$core$String** $tmp2344 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2343 = *$tmp2344;
        panda$core$String** $tmp2345 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2346 = p_f1;
        *$tmp2345 = $tmp2346;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2346));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2343));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2348;
    org$pandalanguage$pandac$ASTNode* $tmp2351;
    panda$collections$ImmutableArray* $tmp2352;
    panda$collections$ImmutableArray* $tmp2355;
    org$pandalanguage$pandac$ASTNode* $tmp2356;
    org$pandalanguage$pandac$ASTNode* $tmp2359;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2347 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2347 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2349 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2348 = *$tmp2349;
        org$pandalanguage$pandac$ASTNode** $tmp2350 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2351 = p_f1;
        *$tmp2350 = $tmp2351;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2351));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2348));
    }
    {
        panda$collections$ImmutableArray** $tmp2353 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2352 = *$tmp2353;
        panda$collections$ImmutableArray** $tmp2354 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2355 = p_f2;
        *$tmp2354 = $tmp2355;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2355));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2352));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2357 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2356 = *$tmp2357;
        org$pandalanguage$pandac$ASTNode** $tmp2358 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2359 = p_f3;
        *$tmp2358 = $tmp2359;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2359));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2356));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$UInt64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2360 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2360 = p_f0;
    panda$core$UInt64* $tmp2361 = ((panda$core$UInt64*) ((char*) self->$data + 16));
    *$tmp2361 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0) {
    org$pandalanguage$pandac$IRNode* $tmp2362;
    org$pandalanguage$pandac$IRNode* $tmp2365;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp2363 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp2362 = *$tmp2363;
        org$pandalanguage$pandac$IRNode** $tmp2364 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp2365 = p_f0;
        *$tmp2364 = $tmp2365;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2365));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2362));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
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
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2376;
    org$pandalanguage$pandac$ASTNode* $tmp2379;
    panda$collections$ImmutableArray* $tmp2380;
    panda$collections$ImmutableArray* $tmp2383;
    panda$collections$ImmutableArray* $tmp2384;
    panda$collections$ImmutableArray* $tmp2387;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2375 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2375 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2377 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2376 = *$tmp2377;
        org$pandalanguage$pandac$ASTNode** $tmp2378 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2379 = p_f1;
        *$tmp2378 = $tmp2379;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2379));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2376));
    }
    {
        panda$collections$ImmutableArray** $tmp2381 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2380 = *$tmp2381;
        panda$collections$ImmutableArray** $tmp2382 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2383 = p_f2;
        *$tmp2382 = $tmp2383;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2383));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2380));
    }
    {
        panda$collections$ImmutableArray** $tmp2385 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2384 = *$tmp2385;
        panda$collections$ImmutableArray** $tmp2386 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2387 = p_f3;
        *$tmp2386 = $tmp2387;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2387));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2384));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$MethodDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, org$pandalanguage$pandac$ASTNode* p_f6, panda$collections$ImmutableArray* p_f7) {
    org$pandalanguage$pandac$ASTNode* $tmp2389;
    org$pandalanguage$pandac$ASTNode* $tmp2392;
    panda$collections$ImmutableArray* $tmp2393;
    panda$collections$ImmutableArray* $tmp2396;
    panda$core$String* $tmp2398;
    panda$core$String* $tmp2401;
    panda$collections$ImmutableArray* $tmp2402;
    panda$collections$ImmutableArray* $tmp2405;
    org$pandalanguage$pandac$ASTNode* $tmp2406;
    org$pandalanguage$pandac$ASTNode* $tmp2409;
    panda$collections$ImmutableArray* $tmp2410;
    panda$collections$ImmutableArray* $tmp2413;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2388 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2388 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2390 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2389 = *$tmp2390;
        org$pandalanguage$pandac$ASTNode** $tmp2391 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
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
    org$pandalanguage$pandac$MethodDecl$Kind* $tmp2397 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) self->$data + 32));
    *$tmp2397 = p_f3;
    {
        panda$core$String** $tmp2399 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2398 = *$tmp2399;
        panda$core$String** $tmp2400 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2401 = p_f4;
        *$tmp2400 = $tmp2401;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2401));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2398));
    }
    {
        panda$collections$ImmutableArray** $tmp2403 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2402 = *$tmp2403;
        panda$collections$ImmutableArray** $tmp2404 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2405 = p_f5;
        *$tmp2404 = $tmp2405;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2405));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2402));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2407 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 56));
        $tmp2406 = *$tmp2407;
        org$pandalanguage$pandac$ASTNode** $tmp2408 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 56));
        $tmp2409 = p_f6;
        *$tmp2408 = $tmp2409;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2409));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2406));
    }
    {
        panda$collections$ImmutableArray** $tmp2411 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2410 = *$tmp2411;
        panda$collections$ImmutableArray** $tmp2412 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2413 = p_f7;
        *$tmp2412 = $tmp2413;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2413));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2410));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    panda$collections$ImmutableArray* $tmp2416;
    panda$collections$ImmutableArray* $tmp2419;
    org$pandalanguage$pandac$ASTNode* $tmp2420;
    org$pandalanguage$pandac$ASTNode* $tmp2423;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2414 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2414 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2415 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp2415 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp2417 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2416 = *$tmp2417;
        panda$collections$ImmutableArray** $tmp2418 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2419 = p_f2;
        *$tmp2418 = $tmp2419;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2419));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2416));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2421 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2420 = *$tmp2421;
        org$pandalanguage$pandac$ASTNode** $tmp2422 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2423 = p_f3;
        *$tmp2422 = $tmp2423;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2423));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2420));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$core$String* $tmp2425;
    panda$core$String* $tmp2428;
    org$pandalanguage$pandac$ASTNode* $tmp2429;
    org$pandalanguage$pandac$ASTNode* $tmp2432;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2424 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2424 = p_f0;
    {
        panda$core$String** $tmp2426 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2425 = *$tmp2426;
        panda$core$String** $tmp2427 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2428 = p_f1;
        *$tmp2427 = $tmp2428;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2428));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2425));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2430 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2429 = *$tmp2430;
        org$pandalanguage$pandac$ASTNode** $tmp2431 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2432 = p_f2;
        *$tmp2431 = $tmp2432;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2432));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2429));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2435;
    org$pandalanguage$pandac$ASTNode* $tmp2438;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2433 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2433 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2434 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp2434 = p_f1;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2436 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2435 = *$tmp2436;
        org$pandalanguage$pandac$ASTNode** $tmp2437 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2438 = p_f2;
        *$tmp2437 = $tmp2438;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2438));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2435));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$ASTNode* p_f4) {
    org$pandalanguage$pandac$ASTNode* $tmp2440;
    org$pandalanguage$pandac$ASTNode* $tmp2443;
    org$pandalanguage$pandac$ASTNode* $tmp2444;
    org$pandalanguage$pandac$ASTNode* $tmp2447;
    org$pandalanguage$pandac$ASTNode* $tmp2449;
    org$pandalanguage$pandac$ASTNode* $tmp2452;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2439 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2439 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2441 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2440 = *$tmp2441;
        org$pandalanguage$pandac$ASTNode** $tmp2442 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2443 = p_f1;
        *$tmp2442 = $tmp2443;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2443));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2440));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2445 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2444 = *$tmp2445;
        org$pandalanguage$pandac$ASTNode** $tmp2446 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2447 = p_f2;
        *$tmp2446 = $tmp2447;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2447));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2444));
    }
    panda$core$Bit* $tmp2448 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp2448 = p_f3;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2450 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        $tmp2449 = *$tmp2450;
        org$pandalanguage$pandac$ASTNode** $tmp2451 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        $tmp2452 = p_f4;
        *$tmp2451 = $tmp2452;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2452));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2449));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Real64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2453 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2453 = p_f0;
    panda$core$Real64* $tmp2454 = ((panda$core$Real64*) ((char*) self->$data + 16));
    *$tmp2454 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    org$pandalanguage$pandac$ASTNode* $tmp2456;
    org$pandalanguage$pandac$ASTNode* $tmp2459;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2455 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2455 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2457 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2456 = *$tmp2457;
        org$pandalanguage$pandac$ASTNode** $tmp2458 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2459 = p_f1;
        *$tmp2458 = $tmp2459;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2459));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2456));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$collections$ImmutableArray* $tmp2461;
    panda$collections$ImmutableArray* $tmp2464;
    org$pandalanguage$pandac$ASTNode* $tmp2465;
    org$pandalanguage$pandac$ASTNode* $tmp2468;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2460 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2460 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2462 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2461 = *$tmp2462;
        panda$collections$ImmutableArray** $tmp2463 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2464 = p_f1;
        *$tmp2463 = $tmp2464;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2464));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2461));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2466 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2465 = *$tmp2466;
        org$pandalanguage$pandac$ASTNode** $tmp2467 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2468 = p_f2;
        *$tmp2467 = $tmp2468;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2468));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2465));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp2471;
    panda$collections$ImmutableArray* $tmp2474;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2469 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2469 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp2470 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp2470 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp2472 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2471 = *$tmp2472;
        panda$collections$ImmutableArray** $tmp2473 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2474 = p_f2;
        *$tmp2473 = $tmp2474;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2474));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2471));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp2476;
    panda$collections$ImmutableArray* $tmp2479;
    panda$collections$ImmutableArray* $tmp2480;
    panda$collections$ImmutableArray* $tmp2483;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2475 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2475 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2477 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2476 = *$tmp2477;
        panda$collections$ImmutableArray** $tmp2478 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2479 = p_f1;
        *$tmp2478 = $tmp2479;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2479));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2476));
    }
    {
        panda$collections$ImmutableArray** $tmp2481 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2480 = *$tmp2481;
        panda$collections$ImmutableArray** $tmp2482 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2483 = p_f2;
        *$tmp2482 = $tmp2483;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2483));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2480));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    panda$core$String* $tmp2485;
    panda$core$String* $tmp2488;
    org$pandalanguage$pandac$ASTNode* $tmp2489;
    org$pandalanguage$pandac$ASTNode* $tmp2492;
    panda$collections$ImmutableArray* $tmp2493;
    panda$collections$ImmutableArray* $tmp2496;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2484 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2484 = p_f0;
    {
        panda$core$String** $tmp2486 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2485 = *$tmp2486;
        panda$core$String** $tmp2487 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2488 = p_f1;
        *$tmp2487 = $tmp2488;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2488));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2485));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2490 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2489 = *$tmp2490;
        org$pandalanguage$pandac$ASTNode** $tmp2491 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2492 = p_f2;
        *$tmp2491 = $tmp2492;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2492));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2489));
    }
    {
        panda$collections$ImmutableArray** $tmp2494 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2493 = *$tmp2494;
        panda$collections$ImmutableArray** $tmp2495 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2496 = p_f3;
        *$tmp2495 = $tmp2496;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2496));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2493));
    }
}






