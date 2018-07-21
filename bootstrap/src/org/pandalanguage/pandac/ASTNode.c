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
#include "panda/collections/CollectionView.h"
#include "org/pandalanguage/pandac/ChoiceCase.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "panda/core/Real64.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"

static panda$core$String $s1;
org$pandalanguage$pandac$ASTNode$class_type org$pandalanguage$pandac$ASTNode$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String, org$pandalanguage$pandac$ASTNode$cleanup, org$pandalanguage$pandac$ASTNode$position$R$org$pandalanguage$pandac$Position} };

typedef org$pandalanguage$pandac$Position (*$fn149)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn409)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn452)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn459)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn470)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn514)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn521)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn556)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn583)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn631)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn638)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn649)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn672)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn683)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn697)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn704)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn715)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn759)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn770)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn803)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn810)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn821)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn852)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn887)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn894)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn905)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn938)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn945)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn956)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1009)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1016)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1027)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1060)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1103)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1110)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1121)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1158)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1189)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1196)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1207)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1252)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1259)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1270)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1325)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1332)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1343)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1365)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1376)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1396)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1403)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1414)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1473)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1667)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1685)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1736)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1761)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1807)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1841)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1848)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1859)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1883)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1890)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1901)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1949)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1956)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1967)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 32, -9211815390615587804, NULL };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 13, -8809212395465398403, NULL };
static panda$core$String $s316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 13, -8809212395465398403, NULL };
static panda$core$String $s317 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s339 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x28", 5, 17286533032, NULL };
static panda$core$String $s384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s391 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s416 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s419 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s443 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s500 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s516 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s524 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s544 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s551 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s588 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s652 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s662 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static panda$core$String $s665 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static panda$core$String $s668 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s679 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s686 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s688 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s718 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s738 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s740 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s745 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s761 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s764 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s792 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s794 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s824 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s830 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 24242135792659305, NULL };
static panda$core$String $s832 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s854 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s857 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s877 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s908 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s959 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s988 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s994 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s996 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s999 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1030 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1055 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1063 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1091 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s1093 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1124 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1132 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s1134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1178 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1180 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s1210 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1240 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s1242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1278 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1315 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1346 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s1356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s1361 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1372 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static panda$core$String $s1452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static panda$core$String $s1457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static panda$core$String $s1462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static panda$core$String $s1469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1490 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x29", 2, 14282, NULL };
static panda$core$String $s1508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s1517 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s1540 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1559 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s1584 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s1586 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s1611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1624 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s1626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s1637 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s1646 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s1653 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s1663 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1670 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1681 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1688 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1711 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1714 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1732 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1739 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static panda$core$String $s1742 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1757 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1764 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static panda$core$String $s1767 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1794 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s1797 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s1800 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1803 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s1829 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s1832 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1866 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1869 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1904 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1933 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1937 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s1939 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1970 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1986 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 13, -8809212395465398403, NULL };
static panda$core$String $s1989 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x41\x53\x54\x4e\x6f\x64\x65\x3a\x20", 21, -8877512154781713630, NULL };
static panda$core$String $s1993 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1998 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 13, -8809212395465398403, NULL };
static panda$core$String $s1999 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 31, 7480581949655794403, NULL };

org$pandalanguage$pandac$Position org$pandalanguage$pandac$ASTNode$position$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$86_95 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp6;
    panda$core$Int64 $tmp7;
    org$pandalanguage$pandac$Position position9;
    org$pandalanguage$pandac$Position $returnValue11;
    panda$core$Int64 $tmp14;
    org$pandalanguage$pandac$Position position16;
    panda$core$Int64 $tmp20;
    org$pandalanguage$pandac$Position position22;
    panda$core$Int64 $tmp26;
    org$pandalanguage$pandac$Position position28;
    panda$core$Int64 $tmp32;
    org$pandalanguage$pandac$Position position34;
    panda$core$Int64 $tmp38;
    org$pandalanguage$pandac$Position position40;
    panda$core$Int64 $tmp44;
    org$pandalanguage$pandac$Position position46;
    panda$core$Int64 $tmp50;
    org$pandalanguage$pandac$Position position52;
    panda$core$Int64 $tmp56;
    org$pandalanguage$pandac$Position position58;
    panda$core$Int64 $tmp62;
    org$pandalanguage$pandac$Position position64;
    panda$core$Int64 $tmp68;
    org$pandalanguage$pandac$Position position70;
    panda$core$Int64 $tmp74;
    org$pandalanguage$pandac$Position position76;
    panda$core$Int64 $tmp80;
    org$pandalanguage$pandac$Position position82;
    panda$core$Int64 $tmp86;
    org$pandalanguage$pandac$Position position88;
    panda$core$Int64 $tmp92;
    org$pandalanguage$pandac$Position position94;
    panda$core$Int64 $tmp98;
    org$pandalanguage$pandac$Position position100;
    panda$core$Int64 $tmp104;
    org$pandalanguage$pandac$Position position106;
    panda$core$Int64 $tmp110;
    org$pandalanguage$pandac$Position $tmp112;
    panda$core$Int64 $tmp115;
    org$pandalanguage$pandac$Position position117;
    panda$core$Int64 $tmp121;
    org$pandalanguage$pandac$Position position123;
    panda$core$Int64 $tmp127;
    org$pandalanguage$pandac$Position position129;
    panda$core$Int64 $tmp133;
    org$pandalanguage$pandac$Position position135;
    panda$core$Int64 $tmp139;
    org$pandalanguage$pandac$Position position141;
    panda$core$Int64 $tmp145;
    org$pandalanguage$pandac$IRNode* ir147 = NULL;
    panda$core$Int64 $tmp153;
    org$pandalanguage$pandac$Position position155;
    panda$core$Int64 $tmp159;
    org$pandalanguage$pandac$Position position161;
    panda$core$Int64 $tmp165;
    org$pandalanguage$pandac$Position position167;
    panda$core$Int64 $tmp171;
    org$pandalanguage$pandac$Position position173;
    panda$core$Int64 $tmp177;
    org$pandalanguage$pandac$Position position179;
    panda$core$Int64 $tmp183;
    org$pandalanguage$pandac$Position position185;
    panda$core$Int64 $tmp189;
    org$pandalanguage$pandac$Position position191;
    panda$core$Int64 $tmp195;
    org$pandalanguage$pandac$Position position197;
    panda$core$Int64 $tmp201;
    org$pandalanguage$pandac$Position position203;
    panda$core$Int64 $tmp207;
    org$pandalanguage$pandac$Position position209;
    panda$core$Int64 $tmp213;
    org$pandalanguage$pandac$Position position215;
    panda$core$Int64 $tmp219;
    org$pandalanguage$pandac$Position position221;
    panda$core$Int64 $tmp225;
    org$pandalanguage$pandac$Position position227;
    panda$core$Int64 $tmp231;
    org$pandalanguage$pandac$Position position233;
    panda$core$Int64 $tmp237;
    org$pandalanguage$pandac$Position position239;
    panda$core$Int64 $tmp243;
    org$pandalanguage$pandac$Position position245;
    panda$core$Int64 $tmp249;
    org$pandalanguage$pandac$Position position251;
    panda$core$Int64 $tmp255;
    org$pandalanguage$pandac$Position position257;
    panda$core$Int64 $tmp261;
    org$pandalanguage$pandac$Position position263;
    panda$core$Int64 $tmp267;
    org$pandalanguage$pandac$Position position269;
    panda$core$Int64 $tmp273;
    org$pandalanguage$pandac$Position position275;
    panda$core$Int64 $tmp279;
    org$pandalanguage$pandac$Position position281;
    panda$core$Int64 $tmp285;
    org$pandalanguage$pandac$Position position287;
    panda$core$Int64 $tmp291;
    org$pandalanguage$pandac$Position position293;
    panda$core$Int64 $tmp297;
    org$pandalanguage$pandac$Position position299;
    panda$core$Int64 $tmp303;
    org$pandalanguage$pandac$Position position305;
    panda$core$Bit $tmp309;
    int $tmp4;
    {
        $tmp6 = self;
        $match$86_95 = $tmp6;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
        panda$core$Int64$init$builtin_int64(&$tmp7, 0);
        panda$core$Bit $tmp8 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp7);
        if ($tmp8.value) {
        {
            org$pandalanguage$pandac$Position* $tmp10 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position9 = *$tmp10;
            $returnValue11 = position9;
            $tmp4 = 0;
            goto $l2;
            $l12:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp14, 1);
        panda$core$Bit $tmp15 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp14);
        if ($tmp15.value) {
        {
            org$pandalanguage$pandac$Position* $tmp17 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position16 = *$tmp17;
            $returnValue11 = position16;
            $tmp4 = 1;
            goto $l2;
            $l18:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp20, 2);
        panda$core$Bit $tmp21 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp20);
        if ($tmp21.value) {
        {
            org$pandalanguage$pandac$Position* $tmp23 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position22 = *$tmp23;
            $returnValue11 = position22;
            $tmp4 = 2;
            goto $l2;
            $l24:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp26, 3);
        panda$core$Bit $tmp27 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp26);
        if ($tmp27.value) {
        {
            org$pandalanguage$pandac$Position* $tmp29 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position28 = *$tmp29;
            $returnValue11 = position28;
            $tmp4 = 3;
            goto $l2;
            $l30:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp32, 4);
        panda$core$Bit $tmp33 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp32);
        if ($tmp33.value) {
        {
            org$pandalanguage$pandac$Position* $tmp35 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position34 = *$tmp35;
            $returnValue11 = position34;
            $tmp4 = 4;
            goto $l2;
            $l36:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp38, 5);
        panda$core$Bit $tmp39 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp38);
        if ($tmp39.value) {
        {
            org$pandalanguage$pandac$Position* $tmp41 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position40 = *$tmp41;
            $returnValue11 = position40;
            $tmp4 = 5;
            goto $l2;
            $l42:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp44, 6);
        panda$core$Bit $tmp45 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp44);
        if ($tmp45.value) {
        {
            org$pandalanguage$pandac$Position* $tmp47 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position46 = *$tmp47;
            $returnValue11 = position46;
            $tmp4 = 6;
            goto $l2;
            $l48:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp50, 7);
        panda$core$Bit $tmp51 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp50);
        if ($tmp51.value) {
        {
            org$pandalanguage$pandac$Position* $tmp53 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position52 = *$tmp53;
            $returnValue11 = position52;
            $tmp4 = 7;
            goto $l2;
            $l54:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp56, 8);
        panda$core$Bit $tmp57 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp56);
        if ($tmp57.value) {
        {
            org$pandalanguage$pandac$Position* $tmp59 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position58 = *$tmp59;
            $returnValue11 = position58;
            $tmp4 = 8;
            goto $l2;
            $l60:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp62, 9);
        panda$core$Bit $tmp63 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp62);
        if ($tmp63.value) {
        {
            org$pandalanguage$pandac$Position* $tmp65 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position64 = *$tmp65;
            $returnValue11 = position64;
            $tmp4 = 9;
            goto $l2;
            $l66:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp68, 10);
        panda$core$Bit $tmp69 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp68);
        if ($tmp69.value) {
        {
            org$pandalanguage$pandac$Position* $tmp71 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position70 = *$tmp71;
            $returnValue11 = position70;
            $tmp4 = 10;
            goto $l2;
            $l72:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp74, 11);
        panda$core$Bit $tmp75 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp74);
        if ($tmp75.value) {
        {
            org$pandalanguage$pandac$Position* $tmp77 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position76 = *$tmp77;
            $returnValue11 = position76;
            $tmp4 = 11;
            goto $l2;
            $l78:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp80, 12);
        panda$core$Bit $tmp81 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp80);
        if ($tmp81.value) {
        {
            org$pandalanguage$pandac$Position* $tmp83 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position82 = *$tmp83;
            $returnValue11 = position82;
            $tmp4 = 12;
            goto $l2;
            $l84:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp86, 13);
        panda$core$Bit $tmp87 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp86);
        if ($tmp87.value) {
        {
            org$pandalanguage$pandac$Position* $tmp89 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position88 = *$tmp89;
            $returnValue11 = position88;
            $tmp4 = 13;
            goto $l2;
            $l90:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp92, 14);
        panda$core$Bit $tmp93 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp92);
        if ($tmp93.value) {
        {
            org$pandalanguage$pandac$Position* $tmp95 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position94 = *$tmp95;
            $returnValue11 = position94;
            $tmp4 = 14;
            goto $l2;
            $l96:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp98, 15);
        panda$core$Bit $tmp99 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp98);
        if ($tmp99.value) {
        {
            org$pandalanguage$pandac$Position* $tmp101 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position100 = *$tmp101;
            $returnValue11 = position100;
            $tmp4 = 15;
            goto $l2;
            $l102:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp104, 16);
        panda$core$Bit $tmp105 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp104);
        if ($tmp105.value) {
        {
            org$pandalanguage$pandac$Position* $tmp107 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position106 = *$tmp107;
            $returnValue11 = position106;
            $tmp4 = 16;
            goto $l2;
            $l108:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp110, 17);
        panda$core$Bit $tmp111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp110);
        if ($tmp111.value) {
        {
            org$pandalanguage$pandac$Position$init(&$tmp112);
            $returnValue11 = $tmp112;
            $tmp4 = 17;
            goto $l2;
            $l113:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp115, 18);
        panda$core$Bit $tmp116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp115);
        if ($tmp116.value) {
        {
            org$pandalanguage$pandac$Position* $tmp118 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position117 = *$tmp118;
            $returnValue11 = position117;
            $tmp4 = 18;
            goto $l2;
            $l119:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp121, 19);
        panda$core$Bit $tmp122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp121);
        if ($tmp122.value) {
        {
            org$pandalanguage$pandac$Position* $tmp124 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position123 = *$tmp124;
            $returnValue11 = position123;
            $tmp4 = 19;
            goto $l2;
            $l125:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp127, 20);
        panda$core$Bit $tmp128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp127);
        if ($tmp128.value) {
        {
            org$pandalanguage$pandac$Position* $tmp130 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position129 = *$tmp130;
            $returnValue11 = position129;
            $tmp4 = 20;
            goto $l2;
            $l131:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp133, 21);
        panda$core$Bit $tmp134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp133);
        if ($tmp134.value) {
        {
            org$pandalanguage$pandac$Position* $tmp136 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position135 = *$tmp136;
            $returnValue11 = position135;
            $tmp4 = 21;
            goto $l2;
            $l137:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp139, 22);
        panda$core$Bit $tmp140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp139);
        if ($tmp140.value) {
        {
            org$pandalanguage$pandac$Position* $tmp142 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position141 = *$tmp142;
            $returnValue11 = position141;
            $tmp4 = 22;
            goto $l2;
            $l143:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp145, 23);
        panda$core$Bit $tmp146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp145);
        if ($tmp146.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp148 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$86_95->$data + 0));
            ir147 = *$tmp148;
            org$pandalanguage$pandac$Position $tmp150 = (($fn149) ir147->$class->vtable[3])(ir147);
            $returnValue11 = $tmp150;
            $tmp4 = 23;
            goto $l2;
            $l151:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp153, 24);
        panda$core$Bit $tmp154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp153);
        if ($tmp154.value) {
        {
            org$pandalanguage$pandac$Position* $tmp156 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position155 = *$tmp156;
            $returnValue11 = position155;
            $tmp4 = 24;
            goto $l2;
            $l157:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp159, 25);
        panda$core$Bit $tmp160 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp159);
        if ($tmp160.value) {
        {
            org$pandalanguage$pandac$Position* $tmp162 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position161 = *$tmp162;
            $returnValue11 = position161;
            $tmp4 = 25;
            goto $l2;
            $l163:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp165, 26);
        panda$core$Bit $tmp166 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp165);
        if ($tmp166.value) {
        {
            org$pandalanguage$pandac$Position* $tmp168 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position167 = *$tmp168;
            $returnValue11 = position167;
            $tmp4 = 26;
            goto $l2;
            $l169:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp171, 27);
        panda$core$Bit $tmp172 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp171);
        if ($tmp172.value) {
        {
            org$pandalanguage$pandac$Position* $tmp174 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position173 = *$tmp174;
            $returnValue11 = position173;
            $tmp4 = 27;
            goto $l2;
            $l175:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp177, 28);
        panda$core$Bit $tmp178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp177);
        if ($tmp178.value) {
        {
            org$pandalanguage$pandac$Position* $tmp180 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position179 = *$tmp180;
            $returnValue11 = position179;
            $tmp4 = 28;
            goto $l2;
            $l181:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp183, 29);
        panda$core$Bit $tmp184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp183);
        if ($tmp184.value) {
        {
            org$pandalanguage$pandac$Position* $tmp186 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position185 = *$tmp186;
            $returnValue11 = position185;
            $tmp4 = 29;
            goto $l2;
            $l187:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp189, 30);
        panda$core$Bit $tmp190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp189);
        if ($tmp190.value) {
        {
            org$pandalanguage$pandac$Position* $tmp192 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position191 = *$tmp192;
            $returnValue11 = position191;
            $tmp4 = 30;
            goto $l2;
            $l193:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp195, 31);
        panda$core$Bit $tmp196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp195);
        if ($tmp196.value) {
        {
            org$pandalanguage$pandac$Position* $tmp198 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position197 = *$tmp198;
            $returnValue11 = position197;
            $tmp4 = 31;
            goto $l2;
            $l199:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp201, 32);
        panda$core$Bit $tmp202 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp201);
        if ($tmp202.value) {
        {
            org$pandalanguage$pandac$Position* $tmp204 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position203 = *$tmp204;
            $returnValue11 = position203;
            $tmp4 = 32;
            goto $l2;
            $l205:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp207, 33);
        panda$core$Bit $tmp208 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp207);
        if ($tmp208.value) {
        {
            org$pandalanguage$pandac$Position* $tmp210 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position209 = *$tmp210;
            $returnValue11 = position209;
            $tmp4 = 33;
            goto $l2;
            $l211:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp213, 34);
        panda$core$Bit $tmp214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp213);
        if ($tmp214.value) {
        {
            org$pandalanguage$pandac$Position* $tmp216 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position215 = *$tmp216;
            $returnValue11 = position215;
            $tmp4 = 34;
            goto $l2;
            $l217:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp219, 35);
        panda$core$Bit $tmp220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp219);
        if ($tmp220.value) {
        {
            org$pandalanguage$pandac$Position* $tmp222 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position221 = *$tmp222;
            $returnValue11 = position221;
            $tmp4 = 35;
            goto $l2;
            $l223:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp225, 36);
        panda$core$Bit $tmp226 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp225);
        if ($tmp226.value) {
        {
            org$pandalanguage$pandac$Position* $tmp228 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position227 = *$tmp228;
            $returnValue11 = position227;
            $tmp4 = 36;
            goto $l2;
            $l229:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp231, 37);
        panda$core$Bit $tmp232 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp231);
        if ($tmp232.value) {
        {
            org$pandalanguage$pandac$Position* $tmp234 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position233 = *$tmp234;
            $returnValue11 = position233;
            $tmp4 = 37;
            goto $l2;
            $l235:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp237, 38);
        panda$core$Bit $tmp238 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp237);
        if ($tmp238.value) {
        {
            org$pandalanguage$pandac$Position* $tmp240 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position239 = *$tmp240;
            $returnValue11 = position239;
            $tmp4 = 38;
            goto $l2;
            $l241:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp243, 39);
        panda$core$Bit $tmp244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp243);
        if ($tmp244.value) {
        {
            org$pandalanguage$pandac$Position* $tmp246 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position245 = *$tmp246;
            $returnValue11 = position245;
            $tmp4 = 39;
            goto $l2;
            $l247:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp249, 40);
        panda$core$Bit $tmp250 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp249);
        if ($tmp250.value) {
        {
            org$pandalanguage$pandac$Position* $tmp252 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position251 = *$tmp252;
            $returnValue11 = position251;
            $tmp4 = 40;
            goto $l2;
            $l253:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp255, 41);
        panda$core$Bit $tmp256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp255);
        if ($tmp256.value) {
        {
            org$pandalanguage$pandac$Position* $tmp258 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position257 = *$tmp258;
            $returnValue11 = position257;
            $tmp4 = 41;
            goto $l2;
            $l259:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp261, 42);
        panda$core$Bit $tmp262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp261);
        if ($tmp262.value) {
        {
            org$pandalanguage$pandac$Position* $tmp264 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position263 = *$tmp264;
            $returnValue11 = position263;
            $tmp4 = 42;
            goto $l2;
            $l265:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp267, 44);
        panda$core$Bit $tmp268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp267);
        if ($tmp268.value) {
        {
            org$pandalanguage$pandac$Position* $tmp270 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position269 = *$tmp270;
            $returnValue11 = position269;
            $tmp4 = 43;
            goto $l2;
            $l271:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp273, 43);
        panda$core$Bit $tmp274 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp273);
        if ($tmp274.value) {
        {
            org$pandalanguage$pandac$Position* $tmp276 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position275 = *$tmp276;
            $returnValue11 = position275;
            $tmp4 = 44;
            goto $l2;
            $l277:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp279, 45);
        panda$core$Bit $tmp280 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp279);
        if ($tmp280.value) {
        {
            org$pandalanguage$pandac$Position* $tmp282 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position281 = *$tmp282;
            $returnValue11 = position281;
            $tmp4 = 45;
            goto $l2;
            $l283:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp285, 46);
        panda$core$Bit $tmp286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp285);
        if ($tmp286.value) {
        {
            org$pandalanguage$pandac$Position* $tmp288 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position287 = *$tmp288;
            $returnValue11 = position287;
            $tmp4 = 46;
            goto $l2;
            $l289:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp291, 47);
        panda$core$Bit $tmp292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp291);
        if ($tmp292.value) {
        {
            org$pandalanguage$pandac$Position* $tmp294 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position293 = *$tmp294;
            $returnValue11 = position293;
            $tmp4 = 47;
            goto $l2;
            $l295:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp297, 48);
        panda$core$Bit $tmp298 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp297);
        if ($tmp298.value) {
        {
            org$pandalanguage$pandac$Position* $tmp300 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position299 = *$tmp300;
            $returnValue11 = position299;
            $tmp4 = 48;
            goto $l2;
            $l301:;
            return $returnValue11;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp303, 49);
        panda$core$Bit $tmp304 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$86_95->$rawValue, $tmp303);
        if ($tmp304.value) {
        {
            org$pandalanguage$pandac$Position* $tmp306 = ((org$pandalanguage$pandac$Position*) ((char*) $match$86_95->$data + 0));
            position305 = *$tmp306;
            $returnValue11 = position305;
            $tmp4 = 49;
            goto $l2;
            $l307:;
            return $returnValue11;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp309, false);
            if ($tmp309.value) goto $l310; else goto $l311;
            $l311:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s312, (panda$core$Int64) { 187 });
            abort();
            $l310:;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
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
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp6));
    switch ($tmp4) {
        case 21: goto $l137;
        case 46: goto $l289;
        case 7: goto $l54;
        case 33: goto $l211;
        case 26: goto $l169;
        case 17: goto $l113;
        case 40: goto $l253;
        case 16: goto $l108;
        case 47: goto $l295;
        case 13: goto $l90;
        case 6: goto $l48;
        case 44: goto $l277;
        case 28: goto $l181;
        case 39: goto $l247;
        case 22: goto $l143;
        case 1: goto $l18;
        case 2: goto $l24;
        case 0: goto $l12;
        case 49: goto $l307;
        case 30: goto $l193;
        case 12: goto $l84;
        case 15: goto $l102;
        case 38: goto $l241;
        case 29: goto $l187;
        case 11: goto $l78;
        case 48: goto $l301;
        case 20: goto $l131;
        case 36: goto $l229;
        case 31: goto $l199;
        case 10: goto $l72;
        case 37: goto $l235;
        case 9: goto $l66;
        case 34: goto $l217;
        case 14: goto $l96;
        case 19: goto $l125;
        case 24: goto $l157;
        case 32: goto $l205;
        case 18: goto $l119;
        case 25: goto $l163;
        case 45: goto $l283;
        case 41: goto $l259;
        case 8: goto $l60;
        case 5: goto $l42;
        case 4: goto $l36;
        case 35: goto $l223;
        case 42: goto $l265;
        case 43: goto $l271;
        case 27: goto $l175;
        case 3: goto $l30;
        case -1: goto $l313;
        case 23: goto $l151;
    }
    $l313:;
    if (false) goto $l314; else goto $l315;
    $l315:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s316, (panda$core$Int64) { 85 }, &$s317);
    abort();
    $l314:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$193_9321 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp322;
    panda$core$Int64 $tmp323;
    panda$core$String* name325 = NULL;
    org$pandalanguage$pandac$ASTNode* expr327 = NULL;
    panda$core$String* $returnValue329;
    panda$core$String* $tmp330;
    panda$core$String* $tmp331;
    panda$core$String* $tmp332;
    panda$core$String* $tmp333;
    panda$core$String* $tmp334;
    panda$core$String* $tmp343;
    panda$core$Int64 $tmp346;
    org$pandalanguage$pandac$ASTNode* test348 = NULL;
    org$pandalanguage$pandac$ASTNode* msg350 = NULL;
    panda$core$String* $tmp352;
    panda$core$String* $tmp353;
    panda$core$String* $tmp354;
    panda$core$String* $tmp361;
    panda$core$String* $tmp362;
    panda$core$String* $tmp363;
    panda$core$String* $tmp364;
    panda$core$String* $tmp365;
    panda$core$Int64 $tmp375;
    org$pandalanguage$pandac$ASTNode* expr377 = NULL;
    panda$core$String* $tmp379;
    panda$core$String* $tmp380;
    panda$core$String* $tmp381;
    panda$core$Int64 $tmp388;
    panda$core$String* $tmp390;
    panda$core$Int64 $tmp394;
    org$pandalanguage$pandac$ASTNode* left396 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op398;
    org$pandalanguage$pandac$ASTNode* right400 = NULL;
    panda$core$String* $tmp402;
    panda$core$String* $tmp403;
    panda$core$String* $tmp404;
    panda$core$String* $tmp405;
    panda$core$String* $tmp406;
    panda$core$String* $tmp407;
    panda$core$String* $tmp408;
    panda$core$Object* $tmp413;
    panda$core$Int64 $tmp423;
    panda$core$Bit value425;
    panda$core$String* $tmp427;
    panda$core$String* $tmp428;
    panda$core$Int64 $tmp432;
    panda$collections$ImmutableArray* statements434 = NULL;
    panda$core$MutableString* result439 = NULL;
    panda$core$MutableString* $tmp440;
    panda$core$MutableString* $tmp441;
    panda$collections$Iterator* Iter$214$17447 = NULL;
    panda$collections$Iterator* $tmp448;
    panda$collections$Iterator* $tmp449;
    org$pandalanguage$pandac$ASTNode* s465 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp466;
    panda$core$Object* $tmp467;
    panda$core$String* $tmp472;
    panda$core$Char8 $tmp477;
    panda$core$UInt8 $tmp478;
    panda$core$String* $tmp479;
    panda$core$String* $tmp480;
    panda$core$Int64 $tmp486;
    panda$core$String* label488 = NULL;
    panda$core$String* $tmp490;
    panda$core$String* $tmp491;
    panda$core$String* $tmp492;
    panda$core$String* $tmp499;
    panda$core$Int64 $tmp503;
    org$pandalanguage$pandac$ASTNode* target505 = NULL;
    panda$collections$ImmutableArray* args507 = NULL;
    panda$core$String* $tmp509;
    panda$core$String* $tmp510;
    panda$core$String* $tmp511;
    panda$core$String* $tmp512;
    panda$core$String* $tmp513;
    panda$core$String* $tmp518;
    panda$core$Int64 $tmp528;
    org$pandalanguage$pandac$ASTNode* dc530 = NULL;
    panda$core$String* name532 = NULL;
    panda$collections$ImmutableArray* fields534 = NULL;
    panda$core$MutableString* result539 = NULL;
    panda$core$MutableString* $tmp540;
    panda$core$MutableString* $tmp541;
    panda$core$String* $tmp543;
    panda$core$String* $tmp546;
    panda$core$String* $tmp547;
    panda$core$String* $tmp548;
    panda$core$String* $tmp549;
    panda$core$String* $tmp553;
    panda$core$String* $tmp561;
    panda$core$String* $tmp562;
    panda$core$Int64 $tmp568;
    org$pandalanguage$pandac$ASTNode* base570 = NULL;
    org$pandalanguage$pandac$ChoiceCase* ce572 = NULL;
    panda$core$Int64 index574;
    panda$core$String* $tmp576;
    panda$core$String* $tmp577;
    panda$core$String* $tmp578;
    panda$core$String* $tmp579;
    panda$core$String* $tmp580;
    panda$core$String* $tmp581;
    panda$core$String* $tmp582;
    panda$core$Object* $tmp590;
    panda$core$Int64 $tmp597;
    org$pandalanguage$pandac$ASTNode* dc599 = NULL;
    panda$collections$ImmutableArray* annotations601 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind603;
    panda$core$String* name605 = NULL;
    panda$collections$ImmutableArray* generics607 = NULL;
    panda$collections$ImmutableArray* supertypes609 = NULL;
    panda$collections$ImmutableArray* members611 = NULL;
    panda$core$MutableString* result616 = NULL;
    panda$core$MutableString* $tmp617;
    panda$core$MutableString* $tmp618;
    panda$core$String* $tmp620;
    panda$collections$Iterator* Iter$240$17626 = NULL;
    panda$collections$Iterator* $tmp627;
    panda$collections$Iterator* $tmp628;
    org$pandalanguage$pandac$ASTNode* a644 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp645;
    panda$core$Object* $tmp646;
    panda$core$String* $tmp651;
    org$pandalanguage$pandac$ClassDecl$Kind $match$243_17656;
    panda$core$Int64 $tmp657;
    panda$core$Int64 $tmp660;
    panda$core$Int64 $tmp663;
    panda$core$String* $tmp666;
    panda$core$String* $tmp667;
    panda$core$String* $tmp669;
    panda$core$String* $tmp677;
    panda$core$String* $tmp678;
    panda$core$String* $tmp680;
    panda$collections$Iterator* Iter$256$17692 = NULL;
    panda$collections$Iterator* $tmp693;
    panda$collections$Iterator* $tmp694;
    org$pandalanguage$pandac$ASTNode* m710 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp711;
    panda$core$Object* $tmp712;
    panda$core$String* $tmp717;
    panda$core$Char8 $tmp722;
    panda$core$UInt8 $tmp723;
    panda$core$String* $tmp724;
    panda$core$String* $tmp725;
    panda$core$Int64 $tmp731;
    panda$core$String* label733 = NULL;
    panda$core$String* $tmp735;
    panda$core$String* $tmp736;
    panda$core$String* $tmp737;
    panda$core$String* $tmp744;
    panda$core$Int64 $tmp748;
    org$pandalanguage$pandac$ASTNode* target750 = NULL;
    org$pandalanguage$pandac$ASTNode* value752 = NULL;
    panda$core$String* $tmp754;
    panda$core$String* $tmp755;
    panda$core$String* $tmp756;
    panda$core$String* $tmp757;
    panda$core$String* $tmp758;
    panda$core$String* $tmp768;
    panda$core$String* $tmp769;
    panda$core$Int64 $tmp774;
    panda$core$String* label776 = NULL;
    panda$collections$ImmutableArray* statements778 = NULL;
    org$pandalanguage$pandac$ASTNode* test780 = NULL;
    panda$core$MutableString* result785 = NULL;
    panda$core$MutableString* $tmp786;
    panda$core$MutableString* $tmp787;
    panda$core$String* $tmp789;
    panda$core$String* $tmp790;
    panda$collections$Iterator* Iter$277$17798 = NULL;
    panda$collections$Iterator* $tmp799;
    panda$collections$Iterator* $tmp800;
    org$pandalanguage$pandac$ASTNode* s816 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp817;
    panda$core$Object* $tmp818;
    panda$core$String* $tmp823;
    panda$core$String* $tmp828;
    panda$core$String* $tmp829;
    panda$core$String* $tmp834;
    panda$core$String* $tmp835;
    panda$core$Int64 $tmp841;
    org$pandalanguage$pandac$ASTNode* base843 = NULL;
    panda$core$String* field845 = NULL;
    panda$core$String* $tmp847;
    panda$core$String* $tmp848;
    panda$core$String* $tmp849;
    panda$core$String* $tmp850;
    panda$core$String* $tmp851;
    panda$core$Int64 $tmp861;
    org$pandalanguage$pandac$ASTNode* dc863 = NULL;
    panda$collections$ImmutableArray* annotations865 = NULL;
    org$pandalanguage$pandac$ASTNode* decl867 = NULL;
    panda$core$MutableString* result872 = NULL;
    panda$core$MutableString* $tmp873;
    panda$core$MutableString* $tmp874;
    panda$core$String* $tmp876;
    panda$collections$Iterator* Iter$289$17882 = NULL;
    panda$collections$Iterator* $tmp883;
    panda$collections$Iterator* $tmp884;
    org$pandalanguage$pandac$ASTNode* a900 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp901;
    panda$core$Object* $tmp902;
    panda$core$String* $tmp907;
    panda$core$String* $tmp912;
    panda$core$String* $tmp913;
    panda$core$Int64 $tmp919;
    panda$collections$ImmutableArray* entries921 = NULL;
    panda$core$MutableString* result926 = NULL;
    panda$core$MutableString* $tmp927;
    panda$core$MutableString* $tmp928;
    panda$collections$Iterator* Iter$296$17933 = NULL;
    panda$collections$Iterator* $tmp934;
    panda$collections$Iterator* $tmp935;
    org$pandalanguage$pandac$ASTNode* e951 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp952;
    panda$core$Object* $tmp953;
    panda$core$String* $tmp958;
    panda$core$String* $tmp963;
    panda$core$String* $tmp964;
    panda$core$Int64 $tmp970;
    panda$core$String* label972 = NULL;
    org$pandalanguage$pandac$ASTNode* target974 = NULL;
    org$pandalanguage$pandac$ASTNode* list976 = NULL;
    panda$collections$ImmutableArray* statements978 = NULL;
    panda$core$MutableString* result983 = NULL;
    panda$core$MutableString* $tmp984;
    panda$core$MutableString* $tmp985;
    panda$core$String* $tmp987;
    panda$core$String* $tmp990;
    panda$core$String* $tmp991;
    panda$core$String* $tmp992;
    panda$core$String* $tmp993;
    panda$collections$Iterator* Iter$306$171004 = NULL;
    panda$collections$Iterator* $tmp1005;
    panda$collections$Iterator* $tmp1006;
    org$pandalanguage$pandac$ASTNode* s1022 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1023;
    panda$core$Object* $tmp1024;
    panda$core$String* $tmp1029;
    panda$core$Char8 $tmp1034;
    panda$core$UInt8 $tmp1035;
    panda$core$String* $tmp1036;
    panda$core$String* $tmp1037;
    panda$core$Int64 $tmp1043;
    panda$core$String* name1045 = NULL;
    panda$collections$ImmutableArray* subtypes1047 = NULL;
    panda$core$String* $tmp1049;
    panda$core$String* $tmp1050;
    panda$core$String* $tmp1051;
    panda$core$String* $tmp1052;
    panda$core$String* $tmp1053;
    panda$core$String* $tmp1057;
    panda$core$Int64 $tmp1067;
    panda$core$String* name1069 = NULL;
    panda$core$String* $tmp1071;
    panda$core$Int64 $tmp1074;
    org$pandalanguage$pandac$ASTNode* test1076 = NULL;
    panda$collections$ImmutableArray* ifTrue1078 = NULL;
    org$pandalanguage$pandac$ASTNode* ifFalse1080 = NULL;
    panda$core$MutableString* result1085 = NULL;
    panda$core$MutableString* $tmp1086;
    panda$core$MutableString* $tmp1087;
    panda$core$String* $tmp1089;
    panda$core$String* $tmp1090;
    panda$collections$Iterator* Iter$317$171098 = NULL;
    panda$collections$Iterator* $tmp1099;
    panda$collections$Iterator* $tmp1100;
    org$pandalanguage$pandac$ASTNode* s1116 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1117;
    panda$core$Object* $tmp1118;
    panda$core$String* $tmp1123;
    panda$core$Char8 $tmp1128;
    panda$core$UInt8 $tmp1129;
    panda$core$String* $tmp1130;
    panda$core$String* $tmp1131;
    panda$core$String* $tmp1136;
    panda$core$String* $tmp1137;
    panda$core$Int64 $tmp1143;
    panda$core$UInt64 value1145;
    panda$core$String* $tmp1147;
    panda$core$String* $tmp1148;
    panda$core$Int64 $tmp1152;
    org$pandalanguage$pandac$IRNode* ir1154 = NULL;
    panda$core$String* $tmp1156;
    panda$core$String* $tmp1157;
    panda$core$Int64 $tmp1162;
    panda$core$String* label1164 = NULL;
    panda$collections$ImmutableArray* statements1166 = NULL;
    panda$core$MutableString* result1171 = NULL;
    panda$core$MutableString* $tmp1172;
    panda$core$MutableString* $tmp1173;
    panda$core$String* $tmp1175;
    panda$core$String* $tmp1176;
    panda$collections$Iterator* Iter$335$171184 = NULL;
    panda$collections$Iterator* $tmp1185;
    panda$collections$Iterator* $tmp1186;
    org$pandalanguage$pandac$ASTNode* s1202 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1203;
    panda$core$Object* $tmp1204;
    panda$core$String* $tmp1209;
    panda$core$Char8 $tmp1214;
    panda$core$UInt8 $tmp1215;
    panda$core$String* $tmp1216;
    panda$core$String* $tmp1217;
    panda$core$Int64 $tmp1223;
    org$pandalanguage$pandac$ASTNode* value1225 = NULL;
    panda$collections$ImmutableArray* whens1227 = NULL;
    panda$collections$ImmutableArray* other1229 = NULL;
    panda$core$MutableString* result1234 = NULL;
    panda$core$MutableString* $tmp1235;
    panda$core$MutableString* $tmp1236;
    panda$core$String* $tmp1238;
    panda$core$String* $tmp1239;
    panda$collections$Iterator* Iter$342$171247 = NULL;
    panda$collections$Iterator* $tmp1248;
    panda$collections$Iterator* $tmp1249;
    org$pandalanguage$pandac$ASTNode* w1265 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1266;
    panda$core$Object* $tmp1267;
    panda$core$String* $tmp1272;
    panda$core$String* $tmp1277;
    panda$core$Char8 $tmp1280;
    panda$core$UInt8 $tmp1281;
    panda$core$String* $tmp1282;
    panda$core$String* $tmp1283;
    panda$core$Int64 $tmp1289;
    org$pandalanguage$pandac$ASTNode* dc1291 = NULL;
    panda$collections$ImmutableArray* annotations1293 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind1295;
    panda$core$String* name1297 = NULL;
    panda$collections$ImmutableArray* generics1299 = NULL;
    panda$collections$ImmutableArray* parameters1301 = NULL;
    org$pandalanguage$pandac$ASTNode* returnType1303 = NULL;
    panda$collections$ImmutableArray* statements1305 = NULL;
    panda$core$MutableString* result1310 = NULL;
    panda$core$MutableString* $tmp1311;
    panda$core$MutableString* $tmp1312;
    panda$core$String* $tmp1314;
    panda$collections$Iterator* Iter$355$171320 = NULL;
    panda$collections$Iterator* $tmp1321;
    panda$collections$Iterator* $tmp1322;
    org$pandalanguage$pandac$ASTNode* a1338 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1339;
    panda$core$Object* $tmp1340;
    panda$core$String* $tmp1345;
    org$pandalanguage$pandac$MethodDecl$Kind $match$358_171350;
    panda$core$Int64 $tmp1351;
    panda$core$Int64 $tmp1354;
    panda$core$Int64 $tmp1357;
    panda$core$String* $tmp1359;
    panda$core$String* $tmp1360;
    panda$core$String* $tmp1362;
    panda$core$String* $tmp1370;
    panda$core$String* $tmp1371;
    panda$core$String* $tmp1373;
    panda$core$String* $tmp1381;
    panda$core$String* $tmp1382;
    panda$collections$Iterator* Iter$373$211391 = NULL;
    panda$collections$Iterator* $tmp1392;
    panda$collections$Iterator* $tmp1393;
    org$pandalanguage$pandac$ASTNode* s1409 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1410;
    panda$core$Object* $tmp1411;
    panda$core$String* $tmp1416;
    panda$core$Char8 $tmp1421;
    panda$core$UInt8 $tmp1422;
    panda$core$String* $tmp1423;
    panda$core$String* $tmp1424;
    panda$core$Int64 $tmp1430;
    org$pandalanguage$pandac$parser$Token$Kind kind1432;
    panda$collections$ImmutableArray* paramTypes1434 = NULL;
    org$pandalanguage$pandac$ASTNode* returnType1436 = NULL;
    panda$core$String* yield1441 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $match$381_171442;
    panda$core$Int64 $tmp1443;
    panda$core$String* $tmp1445;
    panda$core$String* $tmp1446;
    panda$core$Int64 $tmp1448;
    panda$core$String* $tmp1450;
    panda$core$String* $tmp1451;
    panda$core$Int64 $tmp1453;
    panda$core$String* $tmp1455;
    panda$core$String* $tmp1456;
    panda$core$Int64 $tmp1458;
    panda$core$String* $tmp1460;
    panda$core$String* $tmp1461;
    panda$core$String* partial1463 = NULL;
    panda$core$String* $tmp1464;
    panda$core$String* $tmp1465;
    panda$core$String* $tmp1466;
    panda$core$String* $tmp1467;
    panda$core$String* $tmp1468;
    panda$core$String* $tmp1470;
    panda$core$String* $tmp1481;
    panda$core$String* $tmp1482;
    panda$core$String* $tmp1483;
    panda$core$String* $tmp1484;
    panda$core$String* $tmp1485;
    panda$core$String* $tmp1495;
    panda$core$String* $tmp1496;
    panda$core$String* $tmp1497;
    panda$core$Int64 $tmp1505;
    panda$core$String* $tmp1507;
    panda$core$Int64 $tmp1511;
    org$pandalanguage$pandac$ASTNode* base1513 = NULL;
    panda$core$String* $tmp1515;
    panda$core$String* $tmp1516;
    panda$core$Int64 $tmp1521;
    panda$core$String* name1523 = NULL;
    panda$core$String* $tmp1525;
    panda$core$Int64 $tmp1528;
    panda$core$String* name1530 = NULL;
    org$pandalanguage$pandac$ASTNode* type1532 = NULL;
    panda$core$String* $tmp1534;
    panda$core$String* $tmp1535;
    panda$core$String* $tmp1536;
    panda$core$String* $tmp1537;
    panda$core$String* $tmp1538;
    panda$core$Int64 $tmp1547;
    org$pandalanguage$pandac$parser$Token$Kind kind1549;
    org$pandalanguage$pandac$ASTNode* base1551 = NULL;
    panda$core$String* $tmp1553;
    panda$core$String* $tmp1554;
    panda$core$String* $tmp1555;
    panda$core$String* $tmp1556;
    panda$core$String* $tmp1557;
    panda$core$Int64 $tmp1566;
    org$pandalanguage$pandac$ASTNode* start1568 = NULL;
    org$pandalanguage$pandac$ASTNode* end1570 = NULL;
    panda$core$Bit inclusive1572;
    org$pandalanguage$pandac$ASTNode* step1574 = NULL;
    panda$core$MutableString* result1579 = NULL;
    panda$core$MutableString* $tmp1580;
    panda$core$MutableString* $tmp1581;
    panda$core$String* $tmp1585;
    panda$core$String* $tmp1588;
    panda$core$String* $tmp1589;
    panda$core$Int64 $tmp1595;
    panda$core$Real64 value1597;
    panda$core$String* $tmp1599;
    panda$core$String* $tmp1600;
    panda$core$Int64 $tmp1604;
    panda$core$String* src1606 = NULL;
    panda$core$String* $tmp1608;
    panda$core$String* $tmp1609;
    panda$core$String* $tmp1610;
    panda$core$Int64 $tmp1617;
    org$pandalanguage$pandac$ASTNode* value1619 = NULL;
    panda$core$String* $tmp1621;
    panda$core$String* $tmp1622;
    panda$core$String* $tmp1623;
    panda$core$String* $tmp1630;
    panda$core$Int64 $tmp1634;
    panda$core$String* $tmp1636;
    panda$core$Int64 $tmp1640;
    panda$core$String* str1642 = NULL;
    panda$core$String* $tmp1644;
    panda$core$String* $tmp1645;
    panda$core$Int64 $tmp1650;
    panda$core$String* $tmp1652;
    panda$core$Int64 $tmp1656;
    panda$collections$ImmutableArray* arguments1658 = NULL;
    panda$core$String* $tmp1660;
    panda$core$String* $tmp1661;
    panda$core$String* $tmp1662;
    panda$core$String* $tmp1664;
    panda$core$Int64 $tmp1674;
    panda$collections$ImmutableArray* parameters1676 = NULL;
    panda$core$String* $tmp1678;
    panda$core$String* $tmp1679;
    panda$core$String* $tmp1680;
    panda$core$String* $tmp1682;
    panda$core$Int64 $tmp1692;
    panda$core$String* name1694 = NULL;
    panda$core$String* $tmp1696;
    panda$core$Int64 $tmp1699;
    panda$core$String* name1701 = NULL;
    org$pandalanguage$pandac$ASTNode* type1703 = NULL;
    panda$core$String* $tmp1705;
    panda$core$String* $tmp1706;
    panda$core$String* $tmp1707;
    panda$core$String* $tmp1708;
    panda$core$String* $tmp1709;
    panda$core$String* $tmp1718;
    panda$core$Int64 $tmp1721;
    panda$collections$ImmutableArray* parameters1723 = NULL;
    org$pandalanguage$pandac$ASTNode* body1725 = NULL;
    panda$core$String* $tmp1727;
    panda$core$String* $tmp1728;
    panda$core$String* $tmp1729;
    panda$core$String* $tmp1730;
    panda$core$String* $tmp1731;
    panda$core$String* $tmp1733;
    panda$core$Int64 $tmp1746;
    panda$collections$ImmutableArray* parameters1748 = NULL;
    org$pandalanguage$pandac$ASTNode* body1750 = NULL;
    panda$core$String* $tmp1752;
    panda$core$String* $tmp1753;
    panda$core$String* $tmp1754;
    panda$core$String* $tmp1755;
    panda$core$String* $tmp1756;
    panda$core$String* $tmp1758;
    panda$core$Int64 $tmp1771;
    panda$core$String* name1773 = NULL;
    panda$core$String* $tmp1775;
    panda$core$Int64 $tmp1778;
    org$pandalanguage$pandac$Variable$Kind kind1780;
    panda$collections$ImmutableArray* decls1782 = NULL;
    panda$core$MutableString* result1787 = NULL;
    panda$core$MutableString* $tmp1788;
    panda$core$MutableString* $tmp1789;
    org$pandalanguage$pandac$Variable$Kind $match$458_171791;
    panda$core$Int64 $tmp1792;
    panda$core$Int64 $tmp1795;
    panda$core$Int64 $tmp1798;
    panda$core$Int64 $tmp1801;
    panda$core$String* $tmp1804;
    panda$core$String* $tmp1809;
    panda$core$String* $tmp1810;
    panda$core$Int64 $tmp1816;
    panda$collections$ImmutableArray* tests1818 = NULL;
    panda$collections$ImmutableArray* statements1820 = NULL;
    panda$core$MutableString* result1825 = NULL;
    panda$core$MutableString* $tmp1826;
    panda$core$MutableString* $tmp1827;
    panda$core$String* separator1830 = NULL;
    panda$core$String* $tmp1831;
    panda$collections$Iterator* Iter$469$171836 = NULL;
    panda$collections$Iterator* $tmp1837;
    panda$collections$Iterator* $tmp1838;
    org$pandalanguage$pandac$ASTNode* t1854 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1855;
    panda$core$Object* $tmp1856;
    panda$core$String* $tmp1861;
    panda$core$String* $tmp1862;
    panda$core$String* $tmp1863;
    panda$core$String* $tmp1864;
    panda$core$Char8 $tmp1873;
    panda$core$UInt8 $tmp1874;
    panda$collections$Iterator* Iter$473$171878 = NULL;
    panda$collections$Iterator* $tmp1879;
    panda$collections$Iterator* $tmp1880;
    org$pandalanguage$pandac$ASTNode* s1896 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1897;
    panda$core$Object* $tmp1898;
    panda$core$String* $tmp1903;
    panda$core$String* $tmp1908;
    panda$core$String* $tmp1909;
    panda$core$Int64 $tmp1915;
    panda$core$String* label1917 = NULL;
    org$pandalanguage$pandac$ASTNode* test1919 = NULL;
    panda$collections$ImmutableArray* statements1921 = NULL;
    panda$core$MutableString* result1926 = NULL;
    panda$core$MutableString* $tmp1927;
    panda$core$MutableString* $tmp1928;
    panda$core$String* $tmp1930;
    panda$core$String* $tmp1931;
    panda$core$String* $tmp1935;
    panda$core$String* $tmp1936;
    panda$collections$Iterator* Iter$483$171944 = NULL;
    panda$collections$Iterator* $tmp1945;
    panda$collections$Iterator* $tmp1946;
    org$pandalanguage$pandac$ASTNode* s1962 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1963;
    panda$core$Object* $tmp1964;
    panda$core$String* $tmp1969;
    panda$core$Char8 $tmp1974;
    panda$core$UInt8 $tmp1975;
    panda$core$String* $tmp1976;
    panda$core$String* $tmp1977;
    panda$core$Bit $tmp1983;
    panda$core$String* $tmp1987;
    panda$core$String* $tmp1988;
    panda$core$Object* $tmp1990;
    int $tmp320;
    {
        $tmp322 = self;
        $match$193_9321 = $tmp322;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
        panda$core$Int64$init$builtin_int64(&$tmp323, 0);
        panda$core$Bit $tmp324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp323);
        if ($tmp324.value) {
        {
            panda$core$String** $tmp326 = ((panda$core$String**) ((char*) $match$193_9321->$data + 16));
            name325 = *$tmp326;
            org$pandalanguage$pandac$ASTNode** $tmp328 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 32));
            expr327 = *$tmp328;
            if (((panda$core$Bit) { expr327 != NULL }).value) {
            {
                panda$core$String* $tmp335 = panda$core$String$convert$R$panda$core$String(name325);
                $tmp334 = $tmp335;
                panda$core$String* $tmp337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp334, &$s336);
                $tmp333 = $tmp337;
                panda$core$String* $tmp338 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp333, ((panda$core$Object*) expr327));
                $tmp332 = $tmp338;
                panda$core$String* $tmp340 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp332, &$s339);
                $tmp331 = $tmp340;
                $tmp330 = $tmp331;
                $returnValue329 = $tmp330;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp330));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp331));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp332));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp333));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp334));
                $tmp320 = 0;
                goto $l318;
                $l341:;
                return $returnValue329;
            }
            }
            $tmp343 = name325;
            $returnValue329 = $tmp343;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp343));
            $tmp320 = 1;
            goto $l318;
            $l344:;
            return $returnValue329;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp346, 1);
        panda$core$Bit $tmp347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp346);
        if ($tmp347.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp349 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 16));
            test348 = *$tmp349;
            org$pandalanguage$pandac$ASTNode** $tmp351 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 24));
            msg350 = *$tmp351;
            if (((panda$core$Bit) { msg350 == NULL }).value) {
            {
                panda$core$String* $tmp356 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s355, ((panda$core$Object*) test348));
                $tmp354 = $tmp356;
                panda$core$String* $tmp358 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp354, &$s357);
                $tmp353 = $tmp358;
                $tmp352 = $tmp353;
                $returnValue329 = $tmp352;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp352));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp353));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp354));
                $tmp320 = 2;
                goto $l318;
                $l359:;
                return $returnValue329;
            }
            }
            panda$core$String* $tmp367 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s366, ((panda$core$Object*) test348));
            $tmp365 = $tmp367;
            panda$core$String* $tmp369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp365, &$s368);
            $tmp364 = $tmp369;
            panda$core$String* $tmp370 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp364, ((panda$core$Object*) msg350));
            $tmp363 = $tmp370;
            panda$core$String* $tmp372 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp363, &$s371);
            $tmp362 = $tmp372;
            $tmp361 = $tmp362;
            $returnValue329 = $tmp361;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp361));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp362));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp363));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp364));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp365));
            $tmp320 = 3;
            goto $l318;
            $l373:;
            return $returnValue329;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp375, 2);
        panda$core$Bit $tmp376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp375);
        if ($tmp376.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp378 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 16));
            expr377 = *$tmp378;
            panda$core$String* $tmp383 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s382, ((panda$core$Object*) expr377));
            $tmp381 = $tmp383;
            panda$core$String* $tmp385 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp381, &$s384);
            $tmp380 = $tmp385;
            $tmp379 = $tmp380;
            $returnValue329 = $tmp379;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp379));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp380));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp381));
            $tmp320 = 4;
            goto $l318;
            $l386:;
            return $returnValue329;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp388, 3);
        panda$core$Bit $tmp389 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp388);
        if ($tmp389.value) {
        {
            $tmp390 = &$s391;
            $returnValue329 = $tmp390;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp390));
            $tmp320 = 5;
            goto $l318;
            $l392:;
            return $returnValue329;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp394, 4);
        panda$core$Bit $tmp395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp394);
        if ($tmp395.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp397 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 16));
            left396 = *$tmp397;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp399 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$193_9321->$data + 24));
            op398 = *$tmp399;
            org$pandalanguage$pandac$ASTNode** $tmp401 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 32));
            right400 = *$tmp401;
            panda$core$String* $tmp410 = (($fn409) left396->$class->vtable[0])(left396);
            $tmp408 = $tmp410;
            panda$core$String* $tmp412 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp408, &$s411);
            $tmp407 = $tmp412;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp414;
            $tmp414 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp414->value = op398;
            $tmp413 = ((panda$core$Object*) $tmp414);
            panda$core$String* $tmp415 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp407, $tmp413);
            $tmp406 = $tmp415;
            panda$core$String* $tmp417 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp406, &$s416);
            $tmp405 = $tmp417;
            panda$core$String* $tmp418 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp405, ((panda$core$Object*) right400));
            $tmp404 = $tmp418;
            panda$core$String* $tmp420 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp404, &$s419);
            $tmp403 = $tmp420;
            $tmp402 = $tmp403;
            $returnValue329 = $tmp402;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp402));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp403));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp404));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp405));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp406));
            panda$core$Panda$unref$panda$core$Object$Q($tmp413);
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp407));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp408));
            $tmp320 = 6;
            goto $l318;
            $l421:;
            return $returnValue329;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp423, 5);
        panda$core$Bit $tmp424 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp423);
        if ($tmp424.value) {
        {
            panda$core$Bit* $tmp426 = ((panda$core$Bit*) ((char*) $match$193_9321->$data + 16));
            value425 = *$tmp426;
            panda$core$String* $tmp429 = panda$core$Bit$convert$R$panda$core$String(value425);
            $tmp428 = $tmp429;
            $tmp427 = $tmp428;
            $returnValue329 = $tmp427;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp427));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp428));
            $tmp320 = 7;
            goto $l318;
            $l430:;
            return $returnValue329;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp432, 6);
        panda$core$Bit $tmp433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp432);
        if ($tmp433.value) {
        {
            panda$collections$ImmutableArray** $tmp435 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9321->$data + 16));
            statements434 = *$tmp435;
            int $tmp438;
            {
                panda$core$MutableString* $tmp442 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp442, &$s443);
                $tmp441 = $tmp442;
                $tmp440 = $tmp441;
                result439 = $tmp440;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp440));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp441));
                {
                    int $tmp446;
                    {
                        ITable* $tmp450 = ((panda$collections$Iterable*) statements434)->$class->itable;
                        while ($tmp450->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp450 = $tmp450->next;
                        }
                        $fn452 $tmp451 = $tmp450->methods[0];
                        panda$collections$Iterator* $tmp453 = $tmp451(((panda$collections$Iterable*) statements434));
                        $tmp449 = $tmp453;
                        $tmp448 = $tmp449;
                        Iter$214$17447 = $tmp448;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp448));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp449));
                        $l454:;
                        ITable* $tmp457 = Iter$214$17447->$class->itable;
                        while ($tmp457->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp457 = $tmp457->next;
                        }
                        $fn459 $tmp458 = $tmp457->methods[0];
                        panda$core$Bit $tmp460 = $tmp458(Iter$214$17447);
                        panda$core$Bit $tmp461 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp460);
                        bool $tmp456 = $tmp461.value;
                        if (!$tmp456) goto $l455;
                        {
                            int $tmp464;
                            {
                                ITable* $tmp468 = Iter$214$17447->$class->itable;
                                while ($tmp468->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp468 = $tmp468->next;
                                }
                                $fn470 $tmp469 = $tmp468->methods[1];
                                panda$core$Object* $tmp471 = $tmp469(Iter$214$17447);
                                $tmp467 = $tmp471;
                                $tmp466 = ((org$pandalanguage$pandac$ASTNode*) $tmp467);
                                s465 = $tmp466;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp466));
                                panda$core$Panda$unref$panda$core$Object$Q($tmp467);
                                panda$core$String* $tmp474 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s465), &$s473);
                                $tmp472 = $tmp474;
                                panda$core$MutableString$append$panda$core$String(result439, $tmp472);
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp472));
                            }
                            $tmp464 = -1;
                            goto $l462;
                            $l462:;
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) s465));
                            s465 = NULL;
                            switch ($tmp464) {
                                case -1: goto $l475;
                            }
                            $l475:;
                        }
                        goto $l454;
                        $l455:;
                    }
                    $tmp446 = -1;
                    goto $l444;
                    $l444:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$214$17447));
                    Iter$214$17447 = NULL;
                    switch ($tmp446) {
                        case -1: goto $l476;
                    }
                    $l476:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp478, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp477, $tmp478);
                panda$core$MutableString$append$panda$core$Char8(result439, $tmp477);
                panda$core$String* $tmp481 = panda$core$MutableString$finish$R$panda$core$String(result439);
                $tmp480 = $tmp481;
                $tmp479 = $tmp480;
                $returnValue329 = $tmp479;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp479));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp480));
                $tmp438 = 0;
                goto $l436;
                $l482:;
                $tmp320 = 8;
                goto $l318;
                $l483:;
                return $returnValue329;
            }
            $l436:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result439));
            result439 = NULL;
            switch ($tmp438) {
                case 0: goto $l482;
            }
            $l485:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp486, 7);
        panda$core$Bit $tmp487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp486);
        if ($tmp487.value) {
        {
            panda$core$String** $tmp489 = ((panda$core$String**) ((char*) $match$193_9321->$data + 16));
            label488 = *$tmp489;
            if (((panda$core$Bit) { label488 != NULL }).value) {
            {
                panda$core$String* $tmp494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s493, label488);
                $tmp492 = $tmp494;
                panda$core$String* $tmp496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp492, &$s495);
                $tmp491 = $tmp496;
                $tmp490 = $tmp491;
                $returnValue329 = $tmp490;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp490));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp491));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp492));
                $tmp320 = 9;
                goto $l318;
                $l497:;
                return $returnValue329;
            }
            }
            $tmp499 = &$s500;
            $returnValue329 = $tmp499;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp499));
            $tmp320 = 10;
            goto $l318;
            $l501:;
            return $returnValue329;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp503, 8);
        panda$core$Bit $tmp504 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp503);
        if ($tmp504.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp506 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 16));
            target505 = *$tmp506;
            panda$collections$ImmutableArray** $tmp508 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9321->$data + 24));
            args507 = *$tmp508;
            panda$core$String* $tmp515 = (($fn514) target505->$class->vtable[0])(target505);
            $tmp513 = $tmp515;
            panda$core$String* $tmp517 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp513, &$s516);
            $tmp512 = $tmp517;
            ITable* $tmp519 = ((panda$collections$CollectionView*) args507)->$class->itable;
            while ($tmp519->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp519 = $tmp519->next;
            }
            $fn521 $tmp520 = $tmp519->methods[1];
            panda$core$String* $tmp522 = $tmp520(((panda$collections$CollectionView*) args507));
            $tmp518 = $tmp522;
            panda$core$String* $tmp523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp512, $tmp518);
            $tmp511 = $tmp523;
            panda$core$String* $tmp525 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp511, &$s524);
            $tmp510 = $tmp525;
            $tmp509 = $tmp510;
            $returnValue329 = $tmp509;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp509));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp510));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp511));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp518));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp512));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp513));
            $tmp320 = 11;
            goto $l318;
            $l526:;
            return $returnValue329;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp528, 9);
        panda$core$Bit $tmp529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp528);
        if ($tmp529.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp531 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 16));
            dc530 = *$tmp531;
            panda$core$String** $tmp533 = ((panda$core$String**) ((char*) $match$193_9321->$data + 24));
            name532 = *$tmp533;
            panda$collections$ImmutableArray** $tmp535 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9321->$data + 32));
            fields534 = *$tmp535;
            int $tmp538;
            {
                panda$core$MutableString* $tmp542 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp542);
                $tmp541 = $tmp542;
                $tmp540 = $tmp541;
                result539 = $tmp540;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp540));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp541));
                if (((panda$core$Bit) { dc530 != NULL }).value) {
                {
                    panda$core$String* $tmp545 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc530), &$s544);
                    $tmp543 = $tmp545;
                    panda$core$MutableString$append$panda$core$String(result539, $tmp543);
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp543));
                }
                }
                panda$core$String* $tmp550 = panda$core$String$convert$R$panda$core$String(name532);
                $tmp549 = $tmp550;
                panda$core$String* $tmp552 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp549, &$s551);
                $tmp548 = $tmp552;
                ITable* $tmp554 = ((panda$collections$CollectionView*) fields534)->$class->itable;
                while ($tmp554->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp554 = $tmp554->next;
                }
                $fn556 $tmp555 = $tmp554->methods[1];
                panda$core$String* $tmp557 = $tmp555(((panda$collections$CollectionView*) fields534));
                $tmp553 = $tmp557;
                panda$core$String* $tmp558 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp548, $tmp553);
                $tmp547 = $tmp558;
                panda$core$String* $tmp560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp547, &$s559);
                $tmp546 = $tmp560;
                panda$core$MutableString$append$panda$core$String(result539, $tmp546);
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp546));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp547));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp553));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp548));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp549));
                panda$core$String* $tmp563 = panda$core$MutableString$finish$R$panda$core$String(result539);
                $tmp562 = $tmp563;
                $tmp561 = $tmp562;
                $returnValue329 = $tmp561;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp561));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp562));
                $tmp538 = 0;
                goto $l536;
                $l564:;
                $tmp320 = 12;
                goto $l318;
                $l565:;
                return $returnValue329;
            }
            $l536:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result539));
            result539 = NULL;
            switch ($tmp538) {
                case 0: goto $l564;
            }
            $l567:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp568, 10);
        panda$core$Bit $tmp569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp568);
        if ($tmp569.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp571 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 16));
            base570 = *$tmp571;
            org$pandalanguage$pandac$ChoiceCase** $tmp573 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) $match$193_9321->$data + 24));
            ce572 = *$tmp573;
            panda$core$Int64* $tmp575 = ((panda$core$Int64*) ((char*) $match$193_9321->$data + 32));
            index574 = *$tmp575;
            panda$core$String* $tmp584 = (($fn583) base570->$class->vtable[0])(base570);
            $tmp582 = $tmp584;
            panda$core$String* $tmp586 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp582, &$s585);
            $tmp581 = $tmp586;
            panda$core$String* $tmp587 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp581, ((panda$core$Object*) ce572));
            $tmp580 = $tmp587;
            panda$core$String* $tmp589 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp580, &$s588);
            $tmp579 = $tmp589;
            panda$core$Int64$wrapper* $tmp591;
            $tmp591 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp591->value = index574;
            $tmp590 = ((panda$core$Object*) $tmp591);
            panda$core$String* $tmp592 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp579, $tmp590);
            $tmp578 = $tmp592;
            panda$core$String* $tmp594 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp578, &$s593);
            $tmp577 = $tmp594;
            $tmp576 = $tmp577;
            $returnValue329 = $tmp576;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp576));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp577));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp578));
            panda$core$Panda$unref$panda$core$Object$Q($tmp590);
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp579));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp580));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp581));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp582));
            $tmp320 = 13;
            goto $l318;
            $l595:;
            return $returnValue329;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp597, 11);
        panda$core$Bit $tmp598 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp597);
        if ($tmp598.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp600 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 16));
            dc599 = *$tmp600;
            panda$collections$ImmutableArray** $tmp602 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9321->$data + 24));
            annotations601 = *$tmp602;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp604 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$193_9321->$data + 32));
            kind603 = *$tmp604;
            panda$core$String** $tmp606 = ((panda$core$String**) ((char*) $match$193_9321->$data + 40));
            name605 = *$tmp606;
            panda$collections$ImmutableArray** $tmp608 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9321->$data + 48));
            generics607 = *$tmp608;
            panda$collections$ImmutableArray** $tmp610 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9321->$data + 56));
            supertypes609 = *$tmp610;
            panda$collections$ImmutableArray** $tmp612 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9321->$data + 64));
            members611 = *$tmp612;
            int $tmp615;
            {
                panda$core$MutableString* $tmp619 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp619);
                $tmp618 = $tmp619;
                $tmp617 = $tmp618;
                result616 = $tmp617;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp617));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp618));
                if (((panda$core$Bit) { dc599 != NULL }).value) {
                {
                    panda$core$String* $tmp622 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc599), &$s621);
                    $tmp620 = $tmp622;
                    panda$core$MutableString$append$panda$core$String(result616, $tmp620);
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp620));
                }
                }
                {
                    int $tmp625;
                    {
                        ITable* $tmp629 = ((panda$collections$Iterable*) annotations601)->$class->itable;
                        while ($tmp629->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp629 = $tmp629->next;
                        }
                        $fn631 $tmp630 = $tmp629->methods[0];
                        panda$collections$Iterator* $tmp632 = $tmp630(((panda$collections$Iterable*) annotations601));
                        $tmp628 = $tmp632;
                        $tmp627 = $tmp628;
                        Iter$240$17626 = $tmp627;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp627));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp628));
                        $l633:;
                        ITable* $tmp636 = Iter$240$17626->$class->itable;
                        while ($tmp636->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp636 = $tmp636->next;
                        }
                        $fn638 $tmp637 = $tmp636->methods[0];
                        panda$core$Bit $tmp639 = $tmp637(Iter$240$17626);
                        panda$core$Bit $tmp640 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp639);
                        bool $tmp635 = $tmp640.value;
                        if (!$tmp635) goto $l634;
                        {
                            int $tmp643;
                            {
                                ITable* $tmp647 = Iter$240$17626->$class->itable;
                                while ($tmp647->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp647 = $tmp647->next;
                                }
                                $fn649 $tmp648 = $tmp647->methods[1];
                                panda$core$Object* $tmp650 = $tmp648(Iter$240$17626);
                                $tmp646 = $tmp650;
                                $tmp645 = ((org$pandalanguage$pandac$ASTNode*) $tmp646);
                                a644 = $tmp645;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp645));
                                panda$core$Panda$unref$panda$core$Object$Q($tmp646);
                                panda$core$String* $tmp653 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a644), &$s652);
                                $tmp651 = $tmp653;
                                panda$core$MutableString$append$panda$core$String(result616, $tmp651);
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp651));
                            }
                            $tmp643 = -1;
                            goto $l641;
                            $l641:;
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) a644));
                            a644 = NULL;
                            switch ($tmp643) {
                                case -1: goto $l654;
                            }
                            $l654:;
                        }
                        goto $l633;
                        $l634:;
                    }
                    $tmp625 = -1;
                    goto $l623;
                    $l623:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$240$17626));
                    Iter$240$17626 = NULL;
                    switch ($tmp625) {
                        case -1: goto $l655;
                    }
                    $l655:;
                }
                {
                    $match$243_17656 = kind603;
                    panda$core$Int64$init$builtin_int64(&$tmp657, 0);
                    panda$core$Bit $tmp658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_17656.$rawValue, $tmp657);
                    if ($tmp658.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result616, &$s659);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp660, 1);
                    panda$core$Bit $tmp661 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_17656.$rawValue, $tmp660);
                    if ($tmp661.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result616, &$s662);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp663, 2);
                    panda$core$Bit $tmp664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_17656.$rawValue, $tmp663);
                    if ($tmp664.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result616, &$s665);
                    }
                    }
                    }
                    }
                }
                panda$core$MutableString$append$panda$core$String(result616, name605);
                if (((panda$core$Bit) { generics607 != NULL }).value) {
                {
                    ITable* $tmp670 = ((panda$collections$CollectionView*) generics607)->$class->itable;
                    while ($tmp670->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                        $tmp670 = $tmp670->next;
                    }
                    $fn672 $tmp671 = $tmp670->methods[1];
                    panda$core$String* $tmp673 = $tmp671(((panda$collections$CollectionView*) generics607));
                    $tmp669 = $tmp673;
                    panda$core$String* $tmp674 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s668, $tmp669);
                    $tmp667 = $tmp674;
                    panda$core$String* $tmp676 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp667, &$s675);
                    $tmp666 = $tmp676;
                    panda$core$MutableString$append$panda$core$String(result616, $tmp666);
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp666));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp667));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp669));
                }
                }
                if (((panda$core$Bit) { supertypes609 != NULL }).value) {
                {
                    ITable* $tmp681 = ((panda$collections$CollectionView*) supertypes609)->$class->itable;
                    while ($tmp681->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                        $tmp681 = $tmp681->next;
                    }
                    $fn683 $tmp682 = $tmp681->methods[1];
                    panda$core$String* $tmp684 = $tmp682(((panda$collections$CollectionView*) supertypes609));
                    $tmp680 = $tmp684;
                    panda$core$String* $tmp685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s679, $tmp680);
                    $tmp678 = $tmp685;
                    panda$core$String* $tmp687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp678, &$s686);
                    $tmp677 = $tmp687;
                    panda$core$MutableString$append$panda$core$String(result616, $tmp677);
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp677));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp678));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp680));
                }
                }
                panda$core$MutableString$append$panda$core$String(result616, &$s688);
                {
                    int $tmp691;
                    {
                        ITable* $tmp695 = ((panda$collections$Iterable*) members611)->$class->itable;
                        while ($tmp695->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp695 = $tmp695->next;
                        }
                        $fn697 $tmp696 = $tmp695->methods[0];
                        panda$collections$Iterator* $tmp698 = $tmp696(((panda$collections$Iterable*) members611));
                        $tmp694 = $tmp698;
                        $tmp693 = $tmp694;
                        Iter$256$17692 = $tmp693;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp693));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp694));
                        $l699:;
                        ITable* $tmp702 = Iter$256$17692->$class->itable;
                        while ($tmp702->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp702 = $tmp702->next;
                        }
                        $fn704 $tmp703 = $tmp702->methods[0];
                        panda$core$Bit $tmp705 = $tmp703(Iter$256$17692);
                        panda$core$Bit $tmp706 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp705);
                        bool $tmp701 = $tmp706.value;
                        if (!$tmp701) goto $l700;
                        {
                            int $tmp709;
                            {
                                ITable* $tmp713 = Iter$256$17692->$class->itable;
                                while ($tmp713->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp713 = $tmp713->next;
                                }
                                $fn715 $tmp714 = $tmp713->methods[1];
                                panda$core$Object* $tmp716 = $tmp714(Iter$256$17692);
                                $tmp712 = $tmp716;
                                $tmp711 = ((org$pandalanguage$pandac$ASTNode*) $tmp712);
                                m710 = $tmp711;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp711));
                                panda$core$Panda$unref$panda$core$Object$Q($tmp712);
                                panda$core$String* $tmp719 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) m710), &$s718);
                                $tmp717 = $tmp719;
                                panda$core$MutableString$append$panda$core$String(result616, $tmp717);
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp717));
                            }
                            $tmp709 = -1;
                            goto $l707;
                            $l707:;
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) m710));
                            m710 = NULL;
                            switch ($tmp709) {
                                case -1: goto $l720;
                            }
                            $l720:;
                        }
                        goto $l699;
                        $l700:;
                    }
                    $tmp691 = -1;
                    goto $l689;
                    $l689:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$256$17692));
                    Iter$256$17692 = NULL;
                    switch ($tmp691) {
                        case -1: goto $l721;
                    }
                    $l721:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp723, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp722, $tmp723);
                panda$core$MutableString$append$panda$core$Char8(result616, $tmp722);
                panda$core$String* $tmp726 = panda$core$MutableString$finish$R$panda$core$String(result616);
                $tmp725 = $tmp726;
                $tmp724 = $tmp725;
                $returnValue329 = $tmp724;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp724));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp725));
                $tmp615 = 0;
                goto $l613;
                $l727:;
                $tmp320 = 14;
                goto $l318;
                $l728:;
                return $returnValue329;
            }
            $l613:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result616));
            result616 = NULL;
            switch ($tmp615) {
                case 0: goto $l727;
            }
            $l730:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp731, 12);
        panda$core$Bit $tmp732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp731);
        if ($tmp732.value) {
        {
            panda$core$String** $tmp734 = ((panda$core$String**) ((char*) $match$193_9321->$data + 16));
            label733 = *$tmp734;
            if (((panda$core$Bit) { label733 != NULL }).value) {
            {
                panda$core$String* $tmp739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s738, label733);
                $tmp737 = $tmp739;
                panda$core$String* $tmp741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp737, &$s740);
                $tmp736 = $tmp741;
                $tmp735 = $tmp736;
                $returnValue329 = $tmp735;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp735));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp736));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp737));
                $tmp320 = 15;
                goto $l318;
                $l742:;
                return $returnValue329;
            }
            }
            $tmp744 = &$s745;
            $returnValue329 = $tmp744;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp744));
            $tmp320 = 16;
            goto $l318;
            $l746:;
            return $returnValue329;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp748, 13);
        panda$core$Bit $tmp749 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp748);
        if ($tmp749.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp751 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 16));
            target750 = *$tmp751;
            org$pandalanguage$pandac$ASTNode** $tmp753 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 24));
            value752 = *$tmp753;
            if (((panda$core$Bit) { value752 != NULL }).value) {
            {
                panda$core$String* $tmp760 = (($fn759) target750->$class->vtable[0])(target750);
                $tmp758 = $tmp760;
                panda$core$String* $tmp762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp758, &$s761);
                $tmp757 = $tmp762;
                panda$core$String* $tmp763 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp757, ((panda$core$Object*) value752));
                $tmp756 = $tmp763;
                panda$core$String* $tmp765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp756, &$s764);
                $tmp755 = $tmp765;
                $tmp754 = $tmp755;
                $returnValue329 = $tmp754;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp754));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp755));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp756));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp757));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp758));
                $tmp320 = 17;
                goto $l318;
                $l766:;
                return $returnValue329;
            }
            }
            panda$core$String* $tmp771 = (($fn770) target750->$class->vtable[0])(target750);
            $tmp769 = $tmp771;
            $tmp768 = $tmp769;
            $returnValue329 = $tmp768;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp768));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp769));
            $tmp320 = 18;
            goto $l318;
            $l772:;
            return $returnValue329;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp774, 14);
        panda$core$Bit $tmp775 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp774);
        if ($tmp775.value) {
        {
            panda$core$String** $tmp777 = ((panda$core$String**) ((char*) $match$193_9321->$data + 16));
            label776 = *$tmp777;
            panda$collections$ImmutableArray** $tmp779 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9321->$data + 24));
            statements778 = *$tmp779;
            org$pandalanguage$pandac$ASTNode** $tmp781 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 32));
            test780 = *$tmp781;
            int $tmp784;
            {
                panda$core$MutableString* $tmp788 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp788);
                $tmp787 = $tmp788;
                $tmp786 = $tmp787;
                result785 = $tmp786;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp786));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp787));
                if (((panda$core$Bit) { label776 != NULL }).value) {
                {
                    panda$core$String* $tmp791 = panda$core$String$convert$R$panda$core$String(label776);
                    $tmp790 = $tmp791;
                    panda$core$String* $tmp793 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp790, &$s792);
                    $tmp789 = $tmp793;
                    panda$core$MutableString$append$panda$core$String(result785, $tmp789);
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp789));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp790));
                }
                }
                panda$core$MutableString$append$panda$core$String(result785, &$s794);
                {
                    int $tmp797;
                    {
                        ITable* $tmp801 = ((panda$collections$Iterable*) statements778)->$class->itable;
                        while ($tmp801->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp801 = $tmp801->next;
                        }
                        $fn803 $tmp802 = $tmp801->methods[0];
                        panda$collections$Iterator* $tmp804 = $tmp802(((panda$collections$Iterable*) statements778));
                        $tmp800 = $tmp804;
                        $tmp799 = $tmp800;
                        Iter$277$17798 = $tmp799;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp799));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp800));
                        $l805:;
                        ITable* $tmp808 = Iter$277$17798->$class->itable;
                        while ($tmp808->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp808 = $tmp808->next;
                        }
                        $fn810 $tmp809 = $tmp808->methods[0];
                        panda$core$Bit $tmp811 = $tmp809(Iter$277$17798);
                        panda$core$Bit $tmp812 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp811);
                        bool $tmp807 = $tmp812.value;
                        if (!$tmp807) goto $l806;
                        {
                            int $tmp815;
                            {
                                ITable* $tmp819 = Iter$277$17798->$class->itable;
                                while ($tmp819->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp819 = $tmp819->next;
                                }
                                $fn821 $tmp820 = $tmp819->methods[1];
                                panda$core$Object* $tmp822 = $tmp820(Iter$277$17798);
                                $tmp818 = $tmp822;
                                $tmp817 = ((org$pandalanguage$pandac$ASTNode*) $tmp818);
                                s816 = $tmp817;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp817));
                                panda$core$Panda$unref$panda$core$Object$Q($tmp818);
                                panda$core$String* $tmp825 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s816), &$s824);
                                $tmp823 = $tmp825;
                                panda$core$MutableString$append$panda$core$String(result785, $tmp823);
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp823));
                            }
                            $tmp815 = -1;
                            goto $l813;
                            $l813:;
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) s816));
                            s816 = NULL;
                            switch ($tmp815) {
                                case -1: goto $l826;
                            }
                            $l826:;
                        }
                        goto $l805;
                        $l806:;
                    }
                    $tmp797 = -1;
                    goto $l795;
                    $l795:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$277$17798));
                    Iter$277$17798 = NULL;
                    switch ($tmp797) {
                        case -1: goto $l827;
                    }
                    $l827:;
                }
                panda$core$String* $tmp831 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s830, ((panda$core$Object*) test780));
                $tmp829 = $tmp831;
                panda$core$String* $tmp833 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp829, &$s832);
                $tmp828 = $tmp833;
                panda$core$MutableString$append$panda$core$String(result785, $tmp828);
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp828));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp829));
                panda$core$String* $tmp836 = panda$core$MutableString$finish$R$panda$core$String(result785);
                $tmp835 = $tmp836;
                $tmp834 = $tmp835;
                $returnValue329 = $tmp834;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp834));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp835));
                $tmp784 = 0;
                goto $l782;
                $l837:;
                $tmp320 = 19;
                goto $l318;
                $l838:;
                return $returnValue329;
            }
            $l782:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result785));
            result785 = NULL;
            switch ($tmp784) {
                case 0: goto $l837;
            }
            $l840:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp841, 15);
        panda$core$Bit $tmp842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp841);
        if ($tmp842.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp844 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 16));
            base843 = *$tmp844;
            panda$core$String** $tmp846 = ((panda$core$String**) ((char*) $match$193_9321->$data + 24));
            field845 = *$tmp846;
            panda$core$String* $tmp853 = (($fn852) base843->$class->vtable[0])(base843);
            $tmp851 = $tmp853;
            panda$core$String* $tmp855 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp851, &$s854);
            $tmp850 = $tmp855;
            panda$core$String* $tmp856 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp850, field845);
            $tmp849 = $tmp856;
            panda$core$String* $tmp858 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp849, &$s857);
            $tmp848 = $tmp858;
            $tmp847 = $tmp848;
            $returnValue329 = $tmp847;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp847));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp848));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp849));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp850));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp851));
            $tmp320 = 20;
            goto $l318;
            $l859:;
            return $returnValue329;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp861, 16);
        panda$core$Bit $tmp862 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp861);
        if ($tmp862.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp864 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 16));
            dc863 = *$tmp864;
            panda$collections$ImmutableArray** $tmp866 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9321->$data + 24));
            annotations865 = *$tmp866;
            org$pandalanguage$pandac$ASTNode** $tmp868 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 32));
            decl867 = *$tmp868;
            int $tmp871;
            {
                panda$core$MutableString* $tmp875 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp875);
                $tmp874 = $tmp875;
                $tmp873 = $tmp874;
                result872 = $tmp873;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp873));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp874));
                if (((panda$core$Bit) { dc863 != NULL }).value) {
                {
                    panda$core$String* $tmp878 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc863), &$s877);
                    $tmp876 = $tmp878;
                    panda$core$MutableString$append$panda$core$String(result872, $tmp876);
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp876));
                }
                }
                {
                    int $tmp881;
                    {
                        ITable* $tmp885 = ((panda$collections$Iterable*) annotations865)->$class->itable;
                        while ($tmp885->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp885 = $tmp885->next;
                        }
                        $fn887 $tmp886 = $tmp885->methods[0];
                        panda$collections$Iterator* $tmp888 = $tmp886(((panda$collections$Iterable*) annotations865));
                        $tmp884 = $tmp888;
                        $tmp883 = $tmp884;
                        Iter$289$17882 = $tmp883;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp883));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp884));
                        $l889:;
                        ITable* $tmp892 = Iter$289$17882->$class->itable;
                        while ($tmp892->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp892 = $tmp892->next;
                        }
                        $fn894 $tmp893 = $tmp892->methods[0];
                        panda$core$Bit $tmp895 = $tmp893(Iter$289$17882);
                        panda$core$Bit $tmp896 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp895);
                        bool $tmp891 = $tmp896.value;
                        if (!$tmp891) goto $l890;
                        {
                            int $tmp899;
                            {
                                ITable* $tmp903 = Iter$289$17882->$class->itable;
                                while ($tmp903->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp903 = $tmp903->next;
                                }
                                $fn905 $tmp904 = $tmp903->methods[1];
                                panda$core$Object* $tmp906 = $tmp904(Iter$289$17882);
                                $tmp902 = $tmp906;
                                $tmp901 = ((org$pandalanguage$pandac$ASTNode*) $tmp902);
                                a900 = $tmp901;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp901));
                                panda$core$Panda$unref$panda$core$Object$Q($tmp902);
                                panda$core$String* $tmp909 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a900), &$s908);
                                $tmp907 = $tmp909;
                                panda$core$MutableString$append$panda$core$String(result872, $tmp907);
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp907));
                            }
                            $tmp899 = -1;
                            goto $l897;
                            $l897:;
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) a900));
                            a900 = NULL;
                            switch ($tmp899) {
                                case -1: goto $l910;
                            }
                            $l910:;
                        }
                        goto $l889;
                        $l890:;
                    }
                    $tmp881 = -1;
                    goto $l879;
                    $l879:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$289$17882));
                    Iter$289$17882 = NULL;
                    switch ($tmp881) {
                        case -1: goto $l911;
                    }
                    $l911:;
                }
                panda$core$MutableString$append$panda$core$Object(result872, ((panda$core$Object*) decl867));
                panda$core$String* $tmp914 = panda$core$MutableString$finish$R$panda$core$String(result872);
                $tmp913 = $tmp914;
                $tmp912 = $tmp913;
                $returnValue329 = $tmp912;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp912));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp913));
                $tmp871 = 0;
                goto $l869;
                $l915:;
                $tmp320 = 21;
                goto $l318;
                $l916:;
                return $returnValue329;
            }
            $l869:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result872));
            result872 = NULL;
            switch ($tmp871) {
                case 0: goto $l915;
            }
            $l918:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp919, 17);
        panda$core$Bit $tmp920 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp919);
        if ($tmp920.value) {
        {
            panda$collections$ImmutableArray** $tmp922 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9321->$data + 0));
            entries921 = *$tmp922;
            int $tmp925;
            {
                panda$core$MutableString* $tmp929 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp929);
                $tmp928 = $tmp929;
                $tmp927 = $tmp928;
                result926 = $tmp927;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp927));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp928));
                {
                    int $tmp932;
                    {
                        ITable* $tmp936 = ((panda$collections$Iterable*) entries921)->$class->itable;
                        while ($tmp936->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp936 = $tmp936->next;
                        }
                        $fn938 $tmp937 = $tmp936->methods[0];
                        panda$collections$Iterator* $tmp939 = $tmp937(((panda$collections$Iterable*) entries921));
                        $tmp935 = $tmp939;
                        $tmp934 = $tmp935;
                        Iter$296$17933 = $tmp934;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp934));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp935));
                        $l940:;
                        ITable* $tmp943 = Iter$296$17933->$class->itable;
                        while ($tmp943->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp943 = $tmp943->next;
                        }
                        $fn945 $tmp944 = $tmp943->methods[0];
                        panda$core$Bit $tmp946 = $tmp944(Iter$296$17933);
                        panda$core$Bit $tmp947 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp946);
                        bool $tmp942 = $tmp947.value;
                        if (!$tmp942) goto $l941;
                        {
                            int $tmp950;
                            {
                                ITable* $tmp954 = Iter$296$17933->$class->itable;
                                while ($tmp954->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp954 = $tmp954->next;
                                }
                                $fn956 $tmp955 = $tmp954->methods[1];
                                panda$core$Object* $tmp957 = $tmp955(Iter$296$17933);
                                $tmp953 = $tmp957;
                                $tmp952 = ((org$pandalanguage$pandac$ASTNode*) $tmp953);
                                e951 = $tmp952;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp952));
                                panda$core$Panda$unref$panda$core$Object$Q($tmp953);
                                panda$core$String* $tmp960 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) e951), &$s959);
                                $tmp958 = $tmp960;
                                panda$core$MutableString$append$panda$core$String(result926, $tmp958);
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp958));
                            }
                            $tmp950 = -1;
                            goto $l948;
                            $l948:;
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) e951));
                            e951 = NULL;
                            switch ($tmp950) {
                                case -1: goto $l961;
                            }
                            $l961:;
                        }
                        goto $l940;
                        $l941:;
                    }
                    $tmp932 = -1;
                    goto $l930;
                    $l930:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$296$17933));
                    Iter$296$17933 = NULL;
                    switch ($tmp932) {
                        case -1: goto $l962;
                    }
                    $l962:;
                }
                panda$core$String* $tmp965 = panda$core$MutableString$finish$R$panda$core$String(result926);
                $tmp964 = $tmp965;
                $tmp963 = $tmp964;
                $returnValue329 = $tmp963;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp963));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp964));
                $tmp925 = 0;
                goto $l923;
                $l966:;
                $tmp320 = 22;
                goto $l318;
                $l967:;
                return $returnValue329;
            }
            $l923:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result926));
            result926 = NULL;
            switch ($tmp925) {
                case 0: goto $l966;
            }
            $l969:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp970, 18);
        panda$core$Bit $tmp971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp970);
        if ($tmp971.value) {
        {
            panda$core$String** $tmp973 = ((panda$core$String**) ((char*) $match$193_9321->$data + 16));
            label972 = *$tmp973;
            org$pandalanguage$pandac$ASTNode** $tmp975 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 24));
            target974 = *$tmp975;
            org$pandalanguage$pandac$ASTNode** $tmp977 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 32));
            list976 = *$tmp977;
            panda$collections$ImmutableArray** $tmp979 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9321->$data + 40));
            statements978 = *$tmp979;
            int $tmp982;
            {
                panda$core$MutableString* $tmp986 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp986);
                $tmp985 = $tmp986;
                $tmp984 = $tmp985;
                result983 = $tmp984;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp984));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp985));
                if (((panda$core$Bit) { label972 != NULL }).value) {
                {
                    panda$core$String* $tmp989 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(label972, &$s988);
                    $tmp987 = $tmp989;
                    panda$core$MutableString$append$panda$core$String(result983, $tmp987);
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp987));
                }
                }
                panda$core$String* $tmp995 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s994, ((panda$core$Object*) target974));
                $tmp993 = $tmp995;
                panda$core$String* $tmp997 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp993, &$s996);
                $tmp992 = $tmp997;
                panda$core$String* $tmp998 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp992, ((panda$core$Object*) list976));
                $tmp991 = $tmp998;
                panda$core$String* $tmp1000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp991, &$s999);
                $tmp990 = $tmp1000;
                panda$core$MutableString$append$panda$core$String(result983, $tmp990);
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp990));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp991));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp992));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp993));
                {
                    int $tmp1003;
                    {
                        ITable* $tmp1007 = ((panda$collections$Iterable*) statements978)->$class->itable;
                        while ($tmp1007->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1007 = $tmp1007->next;
                        }
                        $fn1009 $tmp1008 = $tmp1007->methods[0];
                        panda$collections$Iterator* $tmp1010 = $tmp1008(((panda$collections$Iterable*) statements978));
                        $tmp1006 = $tmp1010;
                        $tmp1005 = $tmp1006;
                        Iter$306$171004 = $tmp1005;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1005));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1006));
                        $l1011:;
                        ITable* $tmp1014 = Iter$306$171004->$class->itable;
                        while ($tmp1014->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1014 = $tmp1014->next;
                        }
                        $fn1016 $tmp1015 = $tmp1014->methods[0];
                        panda$core$Bit $tmp1017 = $tmp1015(Iter$306$171004);
                        panda$core$Bit $tmp1018 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1017);
                        bool $tmp1013 = $tmp1018.value;
                        if (!$tmp1013) goto $l1012;
                        {
                            int $tmp1021;
                            {
                                ITable* $tmp1025 = Iter$306$171004->$class->itable;
                                while ($tmp1025->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1025 = $tmp1025->next;
                                }
                                $fn1027 $tmp1026 = $tmp1025->methods[1];
                                panda$core$Object* $tmp1028 = $tmp1026(Iter$306$171004);
                                $tmp1024 = $tmp1028;
                                $tmp1023 = ((org$pandalanguage$pandac$ASTNode*) $tmp1024);
                                s1022 = $tmp1023;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1023));
                                panda$core$Panda$unref$panda$core$Object$Q($tmp1024);
                                panda$core$String* $tmp1031 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1022), &$s1030);
                                $tmp1029 = $tmp1031;
                                panda$core$MutableString$append$panda$core$String(result983, $tmp1029);
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1029));
                            }
                            $tmp1021 = -1;
                            goto $l1019;
                            $l1019:;
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) s1022));
                            s1022 = NULL;
                            switch ($tmp1021) {
                                case -1: goto $l1032;
                            }
                            $l1032:;
                        }
                        goto $l1011;
                        $l1012:;
                    }
                    $tmp1003 = -1;
                    goto $l1001;
                    $l1001:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$306$171004));
                    Iter$306$171004 = NULL;
                    switch ($tmp1003) {
                        case -1: goto $l1033;
                    }
                    $l1033:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp1035, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp1034, $tmp1035);
                panda$core$MutableString$append$panda$core$Char8(result983, $tmp1034);
                panda$core$String* $tmp1038 = panda$core$MutableString$finish$R$panda$core$String(result983);
                $tmp1037 = $tmp1038;
                $tmp1036 = $tmp1037;
                $returnValue329 = $tmp1036;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1036));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1037));
                $tmp982 = 0;
                goto $l980;
                $l1039:;
                $tmp320 = 23;
                goto $l318;
                $l1040:;
                return $returnValue329;
            }
            $l980:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result983));
            result983 = NULL;
            switch ($tmp982) {
                case 0: goto $l1039;
            }
            $l1042:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1043, 19);
        panda$core$Bit $tmp1044 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp1043);
        if ($tmp1044.value) {
        {
            panda$core$String** $tmp1046 = ((panda$core$String**) ((char*) $match$193_9321->$data + 16));
            name1045 = *$tmp1046;
            panda$collections$ImmutableArray** $tmp1048 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9321->$data + 24));
            subtypes1047 = *$tmp1048;
            panda$core$String* $tmp1054 = panda$core$String$convert$R$panda$core$String(name1045);
            $tmp1053 = $tmp1054;
            panda$core$String* $tmp1056 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1053, &$s1055);
            $tmp1052 = $tmp1056;
            ITable* $tmp1058 = ((panda$collections$CollectionView*) subtypes1047)->$class->itable;
            while ($tmp1058->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1058 = $tmp1058->next;
            }
            $fn1060 $tmp1059 = $tmp1058->methods[1];
            panda$core$String* $tmp1061 = $tmp1059(((panda$collections$CollectionView*) subtypes1047));
            $tmp1057 = $tmp1061;
            panda$core$String* $tmp1062 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1052, $tmp1057);
            $tmp1051 = $tmp1062;
            panda$core$String* $tmp1064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1051, &$s1063);
            $tmp1050 = $tmp1064;
            $tmp1049 = $tmp1050;
            $returnValue329 = $tmp1049;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1049));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1050));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1051));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1057));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1052));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1053));
            $tmp320 = 24;
            goto $l318;
            $l1065:;
            return $returnValue329;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1067, 20);
        panda$core$Bit $tmp1068 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp1067);
        if ($tmp1068.value) {
        {
            panda$core$String** $tmp1070 = ((panda$core$String**) ((char*) $match$193_9321->$data + 16));
            name1069 = *$tmp1070;
            $tmp1071 = name1069;
            $returnValue329 = $tmp1071;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1071));
            $tmp320 = 25;
            goto $l318;
            $l1072:;
            return $returnValue329;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1074, 21);
        panda$core$Bit $tmp1075 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp1074);
        if ($tmp1075.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1077 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 16));
            test1076 = *$tmp1077;
            panda$collections$ImmutableArray** $tmp1079 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9321->$data + 24));
            ifTrue1078 = *$tmp1079;
            org$pandalanguage$pandac$ASTNode** $tmp1081 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 32));
            ifFalse1080 = *$tmp1081;
            int $tmp1084;
            {
                panda$core$MutableString* $tmp1088 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1092 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1091, ((panda$core$Object*) test1076));
                $tmp1090 = $tmp1092;
                panda$core$String* $tmp1094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1090, &$s1093);
                $tmp1089 = $tmp1094;
                panda$core$MutableString$init$panda$core$String($tmp1088, $tmp1089);
                $tmp1087 = $tmp1088;
                $tmp1086 = $tmp1087;
                result1085 = $tmp1086;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1086));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1087));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1089));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1090));
                {
                    int $tmp1097;
                    {
                        ITable* $tmp1101 = ((panda$collections$Iterable*) ifTrue1078)->$class->itable;
                        while ($tmp1101->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1101 = $tmp1101->next;
                        }
                        $fn1103 $tmp1102 = $tmp1101->methods[0];
                        panda$collections$Iterator* $tmp1104 = $tmp1102(((panda$collections$Iterable*) ifTrue1078));
                        $tmp1100 = $tmp1104;
                        $tmp1099 = $tmp1100;
                        Iter$317$171098 = $tmp1099;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1099));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1100));
                        $l1105:;
                        ITable* $tmp1108 = Iter$317$171098->$class->itable;
                        while ($tmp1108->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1108 = $tmp1108->next;
                        }
                        $fn1110 $tmp1109 = $tmp1108->methods[0];
                        panda$core$Bit $tmp1111 = $tmp1109(Iter$317$171098);
                        panda$core$Bit $tmp1112 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1111);
                        bool $tmp1107 = $tmp1112.value;
                        if (!$tmp1107) goto $l1106;
                        {
                            int $tmp1115;
                            {
                                ITable* $tmp1119 = Iter$317$171098->$class->itable;
                                while ($tmp1119->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1119 = $tmp1119->next;
                                }
                                $fn1121 $tmp1120 = $tmp1119->methods[1];
                                panda$core$Object* $tmp1122 = $tmp1120(Iter$317$171098);
                                $tmp1118 = $tmp1122;
                                $tmp1117 = ((org$pandalanguage$pandac$ASTNode*) $tmp1118);
                                s1116 = $tmp1117;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1117));
                                panda$core$Panda$unref$panda$core$Object$Q($tmp1118);
                                panda$core$String* $tmp1125 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1116), &$s1124);
                                $tmp1123 = $tmp1125;
                                panda$core$MutableString$append$panda$core$String(result1085, $tmp1123);
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1123));
                            }
                            $tmp1115 = -1;
                            goto $l1113;
                            $l1113:;
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) s1116));
                            s1116 = NULL;
                            switch ($tmp1115) {
                                case -1: goto $l1126;
                            }
                            $l1126:;
                        }
                        goto $l1105;
                        $l1106:;
                    }
                    $tmp1097 = -1;
                    goto $l1095;
                    $l1095:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$317$171098));
                    Iter$317$171098 = NULL;
                    switch ($tmp1097) {
                        case -1: goto $l1127;
                    }
                    $l1127:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp1129, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp1128, $tmp1129);
                panda$core$MutableString$append$panda$core$Char8(result1085, $tmp1128);
                if (((panda$core$Bit) { ifFalse1080 != NULL }).value) {
                {
                    panda$core$String* $tmp1133 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1132, ((panda$core$Object*) ifFalse1080));
                    $tmp1131 = $tmp1133;
                    panda$core$String* $tmp1135 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1131, &$s1134);
                    $tmp1130 = $tmp1135;
                    panda$core$MutableString$append$panda$core$String(result1085, $tmp1130);
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1130));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1131));
                }
                }
                panda$core$String* $tmp1138 = panda$core$MutableString$finish$R$panda$core$String(result1085);
                $tmp1137 = $tmp1138;
                $tmp1136 = $tmp1137;
                $returnValue329 = $tmp1136;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1136));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1137));
                $tmp1084 = 0;
                goto $l1082;
                $l1139:;
                $tmp320 = 26;
                goto $l318;
                $l1140:;
                return $returnValue329;
            }
            $l1082:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result1085));
            result1085 = NULL;
            switch ($tmp1084) {
                case 0: goto $l1139;
            }
            $l1142:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1143, 22);
        panda$core$Bit $tmp1144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp1143);
        if ($tmp1144.value) {
        {
            panda$core$UInt64* $tmp1146 = ((panda$core$UInt64*) ((char*) $match$193_9321->$data + 16));
            value1145 = *$tmp1146;
            panda$core$String* $tmp1149 = panda$core$UInt64$convert$R$panda$core$String(value1145);
            $tmp1148 = $tmp1149;
            $tmp1147 = $tmp1148;
            $returnValue329 = $tmp1147;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1147));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1148));
            $tmp320 = 27;
            goto $l318;
            $l1150:;
            return $returnValue329;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1152, 23);
        panda$core$Bit $tmp1153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp1152);
        if ($tmp1153.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1155 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$193_9321->$data + 0));
            ir1154 = *$tmp1155;
            panda$core$String* $tmp1159 = (($fn1158) ir1154->$class->vtable[0])(ir1154);
            $tmp1157 = $tmp1159;
            $tmp1156 = $tmp1157;
            $returnValue329 = $tmp1156;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1156));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1157));
            $tmp320 = 28;
            goto $l318;
            $l1160:;
            return $returnValue329;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1162, 24);
        panda$core$Bit $tmp1163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp1162);
        if ($tmp1163.value) {
        {
            panda$core$String** $tmp1165 = ((panda$core$String**) ((char*) $match$193_9321->$data + 16));
            label1164 = *$tmp1165;
            panda$collections$ImmutableArray** $tmp1167 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9321->$data + 24));
            statements1166 = *$tmp1167;
            int $tmp1170;
            {
                panda$core$MutableString* $tmp1174 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1174);
                $tmp1173 = $tmp1174;
                $tmp1172 = $tmp1173;
                result1171 = $tmp1172;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1172));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1173));
                if (((panda$core$Bit) { label1164 != NULL }).value) {
                {
                    panda$core$String* $tmp1177 = panda$core$String$convert$R$panda$core$String(label1164);
                    $tmp1176 = $tmp1177;
                    panda$core$String* $tmp1179 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1176, &$s1178);
                    $tmp1175 = $tmp1179;
                    panda$core$MutableString$append$panda$core$String(result1171, $tmp1175);
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1175));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1176));
                }
                }
                panda$core$MutableString$append$panda$core$String(result1171, &$s1180);
                {
                    int $tmp1183;
                    {
                        ITable* $tmp1187 = ((panda$collections$Iterable*) statements1166)->$class->itable;
                        while ($tmp1187->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1187 = $tmp1187->next;
                        }
                        $fn1189 $tmp1188 = $tmp1187->methods[0];
                        panda$collections$Iterator* $tmp1190 = $tmp1188(((panda$collections$Iterable*) statements1166));
                        $tmp1186 = $tmp1190;
                        $tmp1185 = $tmp1186;
                        Iter$335$171184 = $tmp1185;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1185));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1186));
                        $l1191:;
                        ITable* $tmp1194 = Iter$335$171184->$class->itable;
                        while ($tmp1194->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1194 = $tmp1194->next;
                        }
                        $fn1196 $tmp1195 = $tmp1194->methods[0];
                        panda$core$Bit $tmp1197 = $tmp1195(Iter$335$171184);
                        panda$core$Bit $tmp1198 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1197);
                        bool $tmp1193 = $tmp1198.value;
                        if (!$tmp1193) goto $l1192;
                        {
                            int $tmp1201;
                            {
                                ITable* $tmp1205 = Iter$335$171184->$class->itable;
                                while ($tmp1205->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1205 = $tmp1205->next;
                                }
                                $fn1207 $tmp1206 = $tmp1205->methods[1];
                                panda$core$Object* $tmp1208 = $tmp1206(Iter$335$171184);
                                $tmp1204 = $tmp1208;
                                $tmp1203 = ((org$pandalanguage$pandac$ASTNode*) $tmp1204);
                                s1202 = $tmp1203;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1203));
                                panda$core$Panda$unref$panda$core$Object$Q($tmp1204);
                                panda$core$String* $tmp1211 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1202), &$s1210);
                                $tmp1209 = $tmp1211;
                                panda$core$MutableString$append$panda$core$String(result1171, $tmp1209);
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1209));
                            }
                            $tmp1201 = -1;
                            goto $l1199;
                            $l1199:;
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) s1202));
                            s1202 = NULL;
                            switch ($tmp1201) {
                                case -1: goto $l1212;
                            }
                            $l1212:;
                        }
                        goto $l1191;
                        $l1192:;
                    }
                    $tmp1183 = -1;
                    goto $l1181;
                    $l1181:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$335$171184));
                    Iter$335$171184 = NULL;
                    switch ($tmp1183) {
                        case -1: goto $l1213;
                    }
                    $l1213:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp1215, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp1214, $tmp1215);
                panda$core$MutableString$append$panda$core$Char8(result1171, $tmp1214);
                panda$core$String* $tmp1218 = panda$core$MutableString$finish$R$panda$core$String(result1171);
                $tmp1217 = $tmp1218;
                $tmp1216 = $tmp1217;
                $returnValue329 = $tmp1216;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1216));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1217));
                $tmp1170 = 0;
                goto $l1168;
                $l1219:;
                $tmp320 = 29;
                goto $l318;
                $l1220:;
                return $returnValue329;
            }
            $l1168:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result1171));
            result1171 = NULL;
            switch ($tmp1170) {
                case 0: goto $l1219;
            }
            $l1222:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1223, 25);
        panda$core$Bit $tmp1224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp1223);
        if ($tmp1224.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1226 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 16));
            value1225 = *$tmp1226;
            panda$collections$ImmutableArray** $tmp1228 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9321->$data + 24));
            whens1227 = *$tmp1228;
            panda$collections$ImmutableArray** $tmp1230 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9321->$data + 32));
            other1229 = *$tmp1230;
            int $tmp1233;
            {
                panda$core$MutableString* $tmp1237 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1241 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1240, ((panda$core$Object*) value1225));
                $tmp1239 = $tmp1241;
                panda$core$String* $tmp1243 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1239, &$s1242);
                $tmp1238 = $tmp1243;
                panda$core$MutableString$init$panda$core$String($tmp1237, $tmp1238);
                $tmp1236 = $tmp1237;
                $tmp1235 = $tmp1236;
                result1234 = $tmp1235;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1235));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1236));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1238));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1239));
                {
                    int $tmp1246;
                    {
                        ITable* $tmp1250 = ((panda$collections$Iterable*) whens1227)->$class->itable;
                        while ($tmp1250->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1250 = $tmp1250->next;
                        }
                        $fn1252 $tmp1251 = $tmp1250->methods[0];
                        panda$collections$Iterator* $tmp1253 = $tmp1251(((panda$collections$Iterable*) whens1227));
                        $tmp1249 = $tmp1253;
                        $tmp1248 = $tmp1249;
                        Iter$342$171247 = $tmp1248;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1248));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1249));
                        $l1254:;
                        ITable* $tmp1257 = Iter$342$171247->$class->itable;
                        while ($tmp1257->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1257 = $tmp1257->next;
                        }
                        $fn1259 $tmp1258 = $tmp1257->methods[0];
                        panda$core$Bit $tmp1260 = $tmp1258(Iter$342$171247);
                        panda$core$Bit $tmp1261 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1260);
                        bool $tmp1256 = $tmp1261.value;
                        if (!$tmp1256) goto $l1255;
                        {
                            int $tmp1264;
                            {
                                ITable* $tmp1268 = Iter$342$171247->$class->itable;
                                while ($tmp1268->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1268 = $tmp1268->next;
                                }
                                $fn1270 $tmp1269 = $tmp1268->methods[1];
                                panda$core$Object* $tmp1271 = $tmp1269(Iter$342$171247);
                                $tmp1267 = $tmp1271;
                                $tmp1266 = ((org$pandalanguage$pandac$ASTNode*) $tmp1267);
                                w1265 = $tmp1266;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1266));
                                panda$core$Panda$unref$panda$core$Object$Q($tmp1267);
                                panda$core$String* $tmp1274 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w1265), &$s1273);
                                $tmp1272 = $tmp1274;
                                panda$core$MutableString$append$panda$core$String(result1234, $tmp1272);
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1272));
                            }
                            $tmp1264 = -1;
                            goto $l1262;
                            $l1262:;
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) w1265));
                            w1265 = NULL;
                            switch ($tmp1264) {
                                case -1: goto $l1275;
                            }
                            $l1275:;
                        }
                        goto $l1254;
                        $l1255:;
                    }
                    $tmp1246 = -1;
                    goto $l1244;
                    $l1244:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$342$171247));
                    Iter$342$171247 = NULL;
                    switch ($tmp1246) {
                        case -1: goto $l1276;
                    }
                    $l1276:;
                }
                if (((panda$core$Bit) { other1229 != NULL }).value) {
                {
                    panda$core$String* $tmp1279 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) other1229), &$s1278);
                    $tmp1277 = $tmp1279;
                    panda$core$MutableString$append$panda$core$String(result1234, $tmp1277);
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1277));
                }
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp1281, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp1280, $tmp1281);
                panda$core$MutableString$append$panda$core$Char8(result1234, $tmp1280);
                panda$core$String* $tmp1284 = panda$core$MutableString$finish$R$panda$core$String(result1234);
                $tmp1283 = $tmp1284;
                $tmp1282 = $tmp1283;
                $returnValue329 = $tmp1282;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1282));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1283));
                $tmp1233 = 0;
                goto $l1231;
                $l1285:;
                $tmp320 = 30;
                goto $l318;
                $l1286:;
                return $returnValue329;
            }
            $l1231:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result1234));
            result1234 = NULL;
            switch ($tmp1233) {
                case 0: goto $l1285;
            }
            $l1288:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1289, 26);
        panda$core$Bit $tmp1290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp1289);
        if ($tmp1290.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1292 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 16));
            dc1291 = *$tmp1292;
            panda$collections$ImmutableArray** $tmp1294 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9321->$data + 24));
            annotations1293 = *$tmp1294;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1296 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$193_9321->$data + 32));
            kind1295 = *$tmp1296;
            panda$core$String** $tmp1298 = ((panda$core$String**) ((char*) $match$193_9321->$data + 40));
            name1297 = *$tmp1298;
            panda$collections$ImmutableArray** $tmp1300 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9321->$data + 48));
            generics1299 = *$tmp1300;
            panda$collections$ImmutableArray** $tmp1302 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9321->$data + 56));
            parameters1301 = *$tmp1302;
            org$pandalanguage$pandac$ASTNode** $tmp1304 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 64));
            returnType1303 = *$tmp1304;
            panda$collections$ImmutableArray** $tmp1306 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9321->$data + 72));
            statements1305 = *$tmp1306;
            int $tmp1309;
            {
                panda$core$MutableString* $tmp1313 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1313);
                $tmp1312 = $tmp1313;
                $tmp1311 = $tmp1312;
                result1310 = $tmp1311;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1311));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1312));
                if (((panda$core$Bit) { dc1291 != NULL }).value) {
                {
                    panda$core$String* $tmp1316 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc1291), &$s1315);
                    $tmp1314 = $tmp1316;
                    panda$core$MutableString$append$panda$core$String(result1310, $tmp1314);
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1314));
                }
                }
                {
                    int $tmp1319;
                    {
                        ITable* $tmp1323 = ((panda$collections$Iterable*) annotations1293)->$class->itable;
                        while ($tmp1323->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1323 = $tmp1323->next;
                        }
                        $fn1325 $tmp1324 = $tmp1323->methods[0];
                        panda$collections$Iterator* $tmp1326 = $tmp1324(((panda$collections$Iterable*) annotations1293));
                        $tmp1322 = $tmp1326;
                        $tmp1321 = $tmp1322;
                        Iter$355$171320 = $tmp1321;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1321));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1322));
                        $l1327:;
                        ITable* $tmp1330 = Iter$355$171320->$class->itable;
                        while ($tmp1330->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1330 = $tmp1330->next;
                        }
                        $fn1332 $tmp1331 = $tmp1330->methods[0];
                        panda$core$Bit $tmp1333 = $tmp1331(Iter$355$171320);
                        panda$core$Bit $tmp1334 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1333);
                        bool $tmp1329 = $tmp1334.value;
                        if (!$tmp1329) goto $l1328;
                        {
                            int $tmp1337;
                            {
                                ITable* $tmp1341 = Iter$355$171320->$class->itable;
                                while ($tmp1341->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1341 = $tmp1341->next;
                                }
                                $fn1343 $tmp1342 = $tmp1341->methods[1];
                                panda$core$Object* $tmp1344 = $tmp1342(Iter$355$171320);
                                $tmp1340 = $tmp1344;
                                $tmp1339 = ((org$pandalanguage$pandac$ASTNode*) $tmp1340);
                                a1338 = $tmp1339;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1339));
                                panda$core$Panda$unref$panda$core$Object$Q($tmp1340);
                                panda$core$String* $tmp1347 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a1338), &$s1346);
                                $tmp1345 = $tmp1347;
                                panda$core$MutableString$append$panda$core$String(result1310, $tmp1345);
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1345));
                            }
                            $tmp1337 = -1;
                            goto $l1335;
                            $l1335:;
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) a1338));
                            a1338 = NULL;
                            switch ($tmp1337) {
                                case -1: goto $l1348;
                            }
                            $l1348:;
                        }
                        goto $l1327;
                        $l1328:;
                    }
                    $tmp1319 = -1;
                    goto $l1317;
                    $l1317:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$355$171320));
                    Iter$355$171320 = NULL;
                    switch ($tmp1319) {
                        case -1: goto $l1349;
                    }
                    $l1349:;
                }
                {
                    $match$358_171350 = kind1295;
                    panda$core$Int64$init$builtin_int64(&$tmp1351, 0);
                    panda$core$Bit $tmp1352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$358_171350.$rawValue, $tmp1351);
                    if ($tmp1352.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1310, &$s1353);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp1354, 1);
                    panda$core$Bit $tmp1355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$358_171350.$rawValue, $tmp1354);
                    if ($tmp1355.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1310, &$s1356);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp1357, 2);
                    panda$core$Bit $tmp1358 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$358_171350.$rawValue, $tmp1357);
                    if ($tmp1358.value) {
                    {
                    }
                    }
                    }
                    }
                }
                panda$core$MutableString$append$panda$core$String(result1310, name1297);
                if (((panda$core$Bit) { generics1299 != NULL }).value) {
                {
                    ITable* $tmp1363 = ((panda$collections$CollectionView*) generics1299)->$class->itable;
                    while ($tmp1363->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                        $tmp1363 = $tmp1363->next;
                    }
                    $fn1365 $tmp1364 = $tmp1363->methods[1];
                    panda$core$String* $tmp1366 = $tmp1364(((panda$collections$CollectionView*) generics1299));
                    $tmp1362 = $tmp1366;
                    panda$core$String* $tmp1367 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1361, $tmp1362);
                    $tmp1360 = $tmp1367;
                    panda$core$String* $tmp1369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1360, &$s1368);
                    $tmp1359 = $tmp1369;
                    panda$core$MutableString$append$panda$core$String(result1310, $tmp1359);
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1359));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1360));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1362));
                }
                }
                ITable* $tmp1374 = ((panda$collections$CollectionView*) parameters1301)->$class->itable;
                while ($tmp1374->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp1374 = $tmp1374->next;
                }
                $fn1376 $tmp1375 = $tmp1374->methods[1];
                panda$core$String* $tmp1377 = $tmp1375(((panda$collections$CollectionView*) parameters1301));
                $tmp1373 = $tmp1377;
                panda$core$String* $tmp1378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1372, $tmp1373);
                $tmp1371 = $tmp1378;
                panda$core$String* $tmp1380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1371, &$s1379);
                $tmp1370 = $tmp1380;
                panda$core$MutableString$append$panda$core$String(result1310, $tmp1370);
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1370));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1371));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1373));
                if (((panda$core$Bit) { returnType1303 != NULL }).value) {
                {
                    panda$core$String* $tmp1384 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1383, ((panda$core$Object*) returnType1303));
                    $tmp1382 = $tmp1384;
                    panda$core$String* $tmp1386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1382, &$s1385);
                    $tmp1381 = $tmp1386;
                    panda$core$MutableString$append$panda$core$String(result1310, $tmp1381);
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1381));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1382));
                }
                }
                if (((panda$core$Bit) { statements1305 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1310, &$s1387);
                    {
                        int $tmp1390;
                        {
                            ITable* $tmp1394 = ((panda$collections$Iterable*) statements1305)->$class->itable;
                            while ($tmp1394->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp1394 = $tmp1394->next;
                            }
                            $fn1396 $tmp1395 = $tmp1394->methods[0];
                            panda$collections$Iterator* $tmp1397 = $tmp1395(((panda$collections$Iterable*) statements1305));
                            $tmp1393 = $tmp1397;
                            $tmp1392 = $tmp1393;
                            Iter$373$211391 = $tmp1392;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1392));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1393));
                            $l1398:;
                            ITable* $tmp1401 = Iter$373$211391->$class->itable;
                            while ($tmp1401->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1401 = $tmp1401->next;
                            }
                            $fn1403 $tmp1402 = $tmp1401->methods[0];
                            panda$core$Bit $tmp1404 = $tmp1402(Iter$373$211391);
                            panda$core$Bit $tmp1405 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1404);
                            bool $tmp1400 = $tmp1405.value;
                            if (!$tmp1400) goto $l1399;
                            {
                                int $tmp1408;
                                {
                                    ITable* $tmp1412 = Iter$373$211391->$class->itable;
                                    while ($tmp1412->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp1412 = $tmp1412->next;
                                    }
                                    $fn1414 $tmp1413 = $tmp1412->methods[1];
                                    panda$core$Object* $tmp1415 = $tmp1413(Iter$373$211391);
                                    $tmp1411 = $tmp1415;
                                    $tmp1410 = ((org$pandalanguage$pandac$ASTNode*) $tmp1411);
                                    s1409 = $tmp1410;
                                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1410));
                                    panda$core$Panda$unref$panda$core$Object$Q($tmp1411);
                                    panda$core$String* $tmp1418 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1409), &$s1417);
                                    $tmp1416 = $tmp1418;
                                    panda$core$MutableString$append$panda$core$String(result1310, $tmp1416);
                                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1416));
                                }
                                $tmp1408 = -1;
                                goto $l1406;
                                $l1406:;
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) s1409));
                                s1409 = NULL;
                                switch ($tmp1408) {
                                    case -1: goto $l1419;
                                }
                                $l1419:;
                            }
                            goto $l1398;
                            $l1399:;
                        }
                        $tmp1390 = -1;
                        goto $l1388;
                        $l1388:;
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$373$211391));
                        Iter$373$211391 = NULL;
                        switch ($tmp1390) {
                            case -1: goto $l1420;
                        }
                        $l1420:;
                    }
                    panda$core$UInt8$init$builtin_uint8(&$tmp1422, 125);
                    panda$core$Char8$init$panda$core$UInt8(&$tmp1421, $tmp1422);
                    panda$core$MutableString$append$panda$core$Char8(result1310, $tmp1421);
                }
                }
                panda$core$String* $tmp1425 = panda$core$MutableString$finish$R$panda$core$String(result1310);
                $tmp1424 = $tmp1425;
                $tmp1423 = $tmp1424;
                $returnValue329 = $tmp1423;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1423));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1424));
                $tmp1309 = 0;
                goto $l1307;
                $l1426:;
                $tmp320 = 31;
                goto $l318;
                $l1427:;
                return $returnValue329;
            }
            $l1307:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result1310));
            result1310 = NULL;
            switch ($tmp1309) {
                case 0: goto $l1426;
            }
            $l1429:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1430, 27);
        panda$core$Bit $tmp1431 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp1430);
        if ($tmp1431.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1433 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$193_9321->$data + 16));
            kind1432 = *$tmp1433;
            panda$collections$ImmutableArray** $tmp1435 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9321->$data + 24));
            paramTypes1434 = *$tmp1435;
            org$pandalanguage$pandac$ASTNode** $tmp1437 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 32));
            returnType1436 = *$tmp1437;
            int $tmp1440;
            {
                memset(&yield1441, 0, sizeof(yield1441));
                {
                    $match$381_171442 = kind1432;
                    panda$core$Int64$init$builtin_int64(&$tmp1443, 91);
                    panda$core$Bit $tmp1444 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381_171442.$rawValue, $tmp1443);
                    if ($tmp1444.value) {
                    {
                        {
                            $tmp1445 = yield1441;
                            $tmp1446 = &$s1447;
                            yield1441 = $tmp1446;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1446));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1445));
                        }
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp1448, 92);
                    panda$core$Bit $tmp1449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381_171442.$rawValue, $tmp1448);
                    if ($tmp1449.value) {
                    {
                        {
                            $tmp1450 = yield1441;
                            $tmp1451 = &$s1452;
                            yield1441 = $tmp1451;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1451));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1450));
                        }
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp1453, 93);
                    panda$core$Bit $tmp1454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381_171442.$rawValue, $tmp1453);
                    if ($tmp1454.value) {
                    {
                        {
                            $tmp1455 = yield1441;
                            $tmp1456 = &$s1457;
                            yield1441 = $tmp1456;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1456));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1455));
                        }
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp1458, 94);
                    panda$core$Bit $tmp1459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381_171442.$rawValue, $tmp1458);
                    if ($tmp1459.value) {
                    {
                        {
                            $tmp1460 = yield1441;
                            $tmp1461 = &$s1462;
                            yield1441 = $tmp1461;
                            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1461));
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1460));
                        }
                    }
                    }
                    }
                    }
                    }
                }
                ITable* $tmp1471 = ((panda$collections$CollectionView*) paramTypes1434)->$class->itable;
                while ($tmp1471->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp1471 = $tmp1471->next;
                }
                $fn1473 $tmp1472 = $tmp1471->methods[1];
                panda$core$String* $tmp1474 = $tmp1472(((panda$collections$CollectionView*) paramTypes1434));
                $tmp1470 = $tmp1474;
                panda$core$String* $tmp1475 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1469, $tmp1470);
                $tmp1468 = $tmp1475;
                panda$core$String* $tmp1477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1468, &$s1476);
                $tmp1467 = $tmp1477;
                panda$core$String* $tmp1478 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1467, yield1441);
                $tmp1466 = $tmp1478;
                panda$core$String* $tmp1480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1466, &$s1479);
                $tmp1465 = $tmp1480;
                $tmp1464 = $tmp1465;
                partial1463 = $tmp1464;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1464));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1465));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1466));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1467));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1468));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1470));
                if (((panda$core$Bit) { returnType1436 != NULL }).value) {
                {
                    panda$core$String* $tmp1486 = panda$core$String$convert$R$panda$core$String(partial1463);
                    $tmp1485 = $tmp1486;
                    panda$core$String* $tmp1488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1485, &$s1487);
                    $tmp1484 = $tmp1488;
                    panda$core$String* $tmp1489 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1484, ((panda$core$Object*) returnType1436));
                    $tmp1483 = $tmp1489;
                    panda$core$String* $tmp1491 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1483, &$s1490);
                    $tmp1482 = $tmp1491;
                    $tmp1481 = $tmp1482;
                    $returnValue329 = $tmp1481;
                    panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1481));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1482));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1483));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1484));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1485));
                    $tmp1440 = 0;
                    goto $l1438;
                    $l1492:;
                    $tmp320 = 32;
                    goto $l318;
                    $l1493:;
                    return $returnValue329;
                }
                }
                panda$core$String* $tmp1498 = panda$core$String$convert$R$panda$core$String(partial1463);
                $tmp1497 = $tmp1498;
                panda$core$String* $tmp1500 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1497, &$s1499);
                $tmp1496 = $tmp1500;
                $tmp1495 = $tmp1496;
                $returnValue329 = $tmp1495;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1495));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1496));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1497));
                $tmp1440 = 1;
                goto $l1438;
                $l1501:;
                $tmp320 = 33;
                goto $l318;
                $l1502:;
                return $returnValue329;
            }
            $l1438:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) partial1463));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) yield1441));
            partial1463 = NULL;
            switch ($tmp1440) {
                case 0: goto $l1492;
                case 1: goto $l1501;
            }
            $l1504:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1505, 28);
        panda$core$Bit $tmp1506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp1505);
        if ($tmp1506.value) {
        {
            $tmp1507 = &$s1508;
            $returnValue329 = $tmp1507;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1507));
            $tmp320 = 34;
            goto $l318;
            $l1509:;
            return $returnValue329;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1511, 29);
        panda$core$Bit $tmp1512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp1511);
        if ($tmp1512.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1514 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 16));
            base1513 = *$tmp1514;
            panda$core$String* $tmp1518 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) base1513), &$s1517);
            $tmp1516 = $tmp1518;
            $tmp1515 = $tmp1516;
            $returnValue329 = $tmp1515;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1515));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1516));
            $tmp320 = 35;
            goto $l318;
            $l1519:;
            return $returnValue329;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1521, 30);
        panda$core$Bit $tmp1522 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp1521);
        if ($tmp1522.value) {
        {
            panda$core$String** $tmp1524 = ((panda$core$String**) ((char*) $match$193_9321->$data + 16));
            name1523 = *$tmp1524;
            $tmp1525 = name1523;
            $returnValue329 = $tmp1525;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1525));
            $tmp320 = 36;
            goto $l318;
            $l1526:;
            return $returnValue329;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1528, 31);
        panda$core$Bit $tmp1529 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp1528);
        if ($tmp1529.value) {
        {
            panda$core$String** $tmp1531 = ((panda$core$String**) ((char*) $match$193_9321->$data + 16));
            name1530 = *$tmp1531;
            org$pandalanguage$pandac$ASTNode** $tmp1533 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 24));
            type1532 = *$tmp1533;
            panda$core$String* $tmp1539 = panda$core$String$convert$R$panda$core$String(name1530);
            $tmp1538 = $tmp1539;
            panda$core$String* $tmp1541 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1538, &$s1540);
            $tmp1537 = $tmp1541;
            panda$core$String* $tmp1542 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1537, ((panda$core$Object*) type1532));
            $tmp1536 = $tmp1542;
            panda$core$String* $tmp1544 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1536, &$s1543);
            $tmp1535 = $tmp1544;
            $tmp1534 = $tmp1535;
            $returnValue329 = $tmp1534;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1534));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1535));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1536));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1537));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1538));
            $tmp320 = 37;
            goto $l318;
            $l1545:;
            return $returnValue329;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1547, 32);
        panda$core$Bit $tmp1548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp1547);
        if ($tmp1548.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1550 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$193_9321->$data + 16));
            kind1549 = *$tmp1550;
            org$pandalanguage$pandac$ASTNode** $tmp1552 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 24));
            base1551 = *$tmp1552;
            panda$core$String* $tmp1558 = org$pandalanguage$pandac$parser$Token$Kind$convert$R$panda$core$String(kind1549);
            $tmp1557 = $tmp1558;
            panda$core$String* $tmp1560 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1557, &$s1559);
            $tmp1556 = $tmp1560;
            panda$core$String* $tmp1561 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1556, ((panda$core$Object*) base1551));
            $tmp1555 = $tmp1561;
            panda$core$String* $tmp1563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1555, &$s1562);
            $tmp1554 = $tmp1563;
            $tmp1553 = $tmp1554;
            $returnValue329 = $tmp1553;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1553));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1554));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1555));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1556));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1557));
            $tmp320 = 38;
            goto $l318;
            $l1564:;
            return $returnValue329;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1566, 33);
        panda$core$Bit $tmp1567 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp1566);
        if ($tmp1567.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1569 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 16));
            start1568 = *$tmp1569;
            org$pandalanguage$pandac$ASTNode** $tmp1571 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 24));
            end1570 = *$tmp1571;
            panda$core$Bit* $tmp1573 = ((panda$core$Bit*) ((char*) $match$193_9321->$data + 32));
            inclusive1572 = *$tmp1573;
            org$pandalanguage$pandac$ASTNode** $tmp1575 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 33));
            step1574 = *$tmp1575;
            int $tmp1578;
            {
                panda$core$MutableString* $tmp1582 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1582);
                $tmp1581 = $tmp1582;
                $tmp1580 = $tmp1581;
                result1579 = $tmp1580;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1580));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1581));
                if (((panda$core$Bit) { start1568 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result1579, ((panda$core$Object*) start1568));
                }
                }
                if (inclusive1572.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1579, &$s1583);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(result1579, &$s1584);
                }
                }
                if (((panda$core$Bit) { end1570 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result1579, ((panda$core$Object*) end1570));
                }
                }
                if (((panda$core$Bit) { step1574 != NULL }).value) {
                {
                    panda$core$String* $tmp1587 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1586, ((panda$core$Object*) step1574));
                    $tmp1585 = $tmp1587;
                    panda$core$MutableString$append$panda$core$String(result1579, $tmp1585);
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1585));
                }
                }
                panda$core$String* $tmp1590 = panda$core$MutableString$finish$R$panda$core$String(result1579);
                $tmp1589 = $tmp1590;
                $tmp1588 = $tmp1589;
                $returnValue329 = $tmp1588;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1588));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1589));
                $tmp1578 = 0;
                goto $l1576;
                $l1591:;
                $tmp320 = 39;
                goto $l318;
                $l1592:;
                return $returnValue329;
            }
            $l1576:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result1579));
            result1579 = NULL;
            switch ($tmp1578) {
                case 0: goto $l1591;
            }
            $l1594:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1595, 34);
        panda$core$Bit $tmp1596 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp1595);
        if ($tmp1596.value) {
        {
            panda$core$Real64* $tmp1598 = ((panda$core$Real64*) ((char*) $match$193_9321->$data + 16));
            value1597 = *$tmp1598;
            panda$core$String* $tmp1601 = panda$core$Real64$convert$R$panda$core$String(value1597);
            $tmp1600 = $tmp1601;
            $tmp1599 = $tmp1600;
            $returnValue329 = $tmp1599;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1599));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1600));
            $tmp320 = 40;
            goto $l318;
            $l1602:;
            return $returnValue329;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1604, 35);
        panda$core$Bit $tmp1605 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp1604);
        if ($tmp1605.value) {
        {
            panda$core$String** $tmp1607 = ((panda$core$String**) ((char*) $match$193_9321->$data + 16));
            src1606 = *$tmp1607;
            panda$core$String* $tmp1612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1611, src1606);
            $tmp1610 = $tmp1612;
            panda$core$String* $tmp1614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1610, &$s1613);
            $tmp1609 = $tmp1614;
            $tmp1608 = $tmp1609;
            $returnValue329 = $tmp1608;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1608));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1609));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1610));
            $tmp320 = 41;
            goto $l318;
            $l1615:;
            return $returnValue329;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1617, 36);
        panda$core$Bit $tmp1618 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp1617);
        if ($tmp1618.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1620 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 16));
            value1619 = *$tmp1620;
            if (((panda$core$Bit) { value1619 != NULL }).value) {
            {
                panda$core$String* $tmp1625 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1624, ((panda$core$Object*) value1619));
                $tmp1623 = $tmp1625;
                panda$core$String* $tmp1627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1623, &$s1626);
                $tmp1622 = $tmp1627;
                $tmp1621 = $tmp1622;
                $returnValue329 = $tmp1621;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1621));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1622));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1623));
                $tmp320 = 42;
                goto $l318;
                $l1628:;
                return $returnValue329;
            }
            }
            $tmp1630 = &$s1631;
            $returnValue329 = $tmp1630;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1630));
            $tmp320 = 43;
            goto $l318;
            $l1632:;
            return $returnValue329;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1634, 37);
        panda$core$Bit $tmp1635 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp1634);
        if ($tmp1635.value) {
        {
            $tmp1636 = &$s1637;
            $returnValue329 = $tmp1636;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1636));
            $tmp320 = 44;
            goto $l318;
            $l1638:;
            return $returnValue329;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1640, 38);
        panda$core$Bit $tmp1641 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp1640);
        if ($tmp1641.value) {
        {
            panda$core$String** $tmp1643 = ((panda$core$String**) ((char*) $match$193_9321->$data + 16));
            str1642 = *$tmp1643;
            panda$core$String* $tmp1647 = panda$core$String$format$panda$core$String$R$panda$core$String(str1642, &$s1646);
            $tmp1645 = $tmp1647;
            $tmp1644 = $tmp1645;
            $returnValue329 = $tmp1644;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1644));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1645));
            $tmp320 = 45;
            goto $l318;
            $l1648:;
            return $returnValue329;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1650, 39);
        panda$core$Bit $tmp1651 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp1650);
        if ($tmp1651.value) {
        {
            $tmp1652 = &$s1653;
            $returnValue329 = $tmp1652;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1652));
            $tmp320 = 46;
            goto $l318;
            $l1654:;
            return $returnValue329;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1656, 40);
        panda$core$Bit $tmp1657 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp1656);
        if ($tmp1657.value) {
        {
            panda$collections$ImmutableArray** $tmp1659 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9321->$data + 16));
            arguments1658 = *$tmp1659;
            ITable* $tmp1665 = ((panda$collections$CollectionView*) arguments1658)->$class->itable;
            while ($tmp1665->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1665 = $tmp1665->next;
            }
            $fn1667 $tmp1666 = $tmp1665->methods[1];
            panda$core$String* $tmp1668 = $tmp1666(((panda$collections$CollectionView*) arguments1658));
            $tmp1664 = $tmp1668;
            panda$core$String* $tmp1669 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1663, $tmp1664);
            $tmp1662 = $tmp1669;
            panda$core$String* $tmp1671 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1662, &$s1670);
            $tmp1661 = $tmp1671;
            $tmp1660 = $tmp1661;
            $returnValue329 = $tmp1660;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1660));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1661));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1662));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1664));
            $tmp320 = 47;
            goto $l318;
            $l1672:;
            return $returnValue329;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1674, 41);
        panda$core$Bit $tmp1675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp1674);
        if ($tmp1675.value) {
        {
            panda$collections$ImmutableArray** $tmp1677 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9321->$data + 16));
            parameters1676 = *$tmp1677;
            ITable* $tmp1683 = ((panda$collections$CollectionView*) parameters1676)->$class->itable;
            while ($tmp1683->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1683 = $tmp1683->next;
            }
            $fn1685 $tmp1684 = $tmp1683->methods[1];
            panda$core$String* $tmp1686 = $tmp1684(((panda$collections$CollectionView*) parameters1676));
            $tmp1682 = $tmp1686;
            panda$core$String* $tmp1687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1681, $tmp1682);
            $tmp1680 = $tmp1687;
            panda$core$String* $tmp1689 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1680, &$s1688);
            $tmp1679 = $tmp1689;
            $tmp1678 = $tmp1679;
            $returnValue329 = $tmp1678;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1678));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1679));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1680));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1682));
            $tmp320 = 48;
            goto $l318;
            $l1690:;
            return $returnValue329;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1692, 42);
        panda$core$Bit $tmp1693 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp1692);
        if ($tmp1693.value) {
        {
            panda$core$String** $tmp1695 = ((panda$core$String**) ((char*) $match$193_9321->$data + 16));
            name1694 = *$tmp1695;
            $tmp1696 = name1694;
            $returnValue329 = $tmp1696;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1696));
            $tmp320 = 49;
            goto $l318;
            $l1697:;
            return $returnValue329;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1699, 44);
        panda$core$Bit $tmp1700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp1699);
        if ($tmp1700.value) {
        {
            panda$core$String** $tmp1702 = ((panda$core$String**) ((char*) $match$193_9321->$data + 16));
            name1701 = *$tmp1702;
            org$pandalanguage$pandac$ASTNode** $tmp1704 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 24));
            type1703 = *$tmp1704;
            if (((panda$core$Bit) { type1703 != NULL }).value) {
            {
                panda$core$String* $tmp1710 = panda$core$String$convert$R$panda$core$String(name1701);
                $tmp1709 = $tmp1710;
                panda$core$String* $tmp1712 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1709, &$s1711);
                $tmp1708 = $tmp1712;
                panda$core$String* $tmp1713 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1708, ((panda$core$Object*) type1703));
                $tmp1707 = $tmp1713;
                panda$core$String* $tmp1715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1707, &$s1714);
                $tmp1706 = $tmp1715;
                $tmp1705 = $tmp1706;
                $returnValue329 = $tmp1705;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1705));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1706));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1707));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1708));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1709));
                $tmp320 = 50;
                goto $l318;
                $l1716:;
                return $returnValue329;
            }
            }
            $tmp1718 = name1701;
            $returnValue329 = $tmp1718;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1718));
            $tmp320 = 51;
            goto $l318;
            $l1719:;
            return $returnValue329;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1721, 43);
        panda$core$Bit $tmp1722 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp1721);
        if ($tmp1722.value) {
        {
            panda$collections$ImmutableArray** $tmp1724 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9321->$data + 16));
            parameters1723 = *$tmp1724;
            org$pandalanguage$pandac$ASTNode** $tmp1726 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 24));
            body1725 = *$tmp1726;
            ITable* $tmp1734 = ((panda$collections$CollectionView*) parameters1723)->$class->itable;
            while ($tmp1734->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1734 = $tmp1734->next;
            }
            $fn1736 $tmp1735 = $tmp1734->methods[1];
            panda$core$String* $tmp1737 = $tmp1735(((panda$collections$CollectionView*) parameters1723));
            $tmp1733 = $tmp1737;
            panda$core$String* $tmp1738 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1732, $tmp1733);
            $tmp1731 = $tmp1738;
            panda$core$String* $tmp1740 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1731, &$s1739);
            $tmp1730 = $tmp1740;
            panda$core$String* $tmp1741 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1730, ((panda$core$Object*) body1725));
            $tmp1729 = $tmp1741;
            panda$core$String* $tmp1743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1729, &$s1742);
            $tmp1728 = $tmp1743;
            $tmp1727 = $tmp1728;
            $returnValue329 = $tmp1727;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1727));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1728));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1729));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1730));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1731));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1733));
            $tmp320 = 52;
            goto $l318;
            $l1744:;
            return $returnValue329;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1746, 45);
        panda$core$Bit $tmp1747 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp1746);
        if ($tmp1747.value) {
        {
            panda$collections$ImmutableArray** $tmp1749 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9321->$data + 16));
            parameters1748 = *$tmp1749;
            org$pandalanguage$pandac$ASTNode** $tmp1751 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 24));
            body1750 = *$tmp1751;
            ITable* $tmp1759 = ((panda$collections$CollectionView*) parameters1748)->$class->itable;
            while ($tmp1759->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1759 = $tmp1759->next;
            }
            $fn1761 $tmp1760 = $tmp1759->methods[1];
            panda$core$String* $tmp1762 = $tmp1760(((panda$collections$CollectionView*) parameters1748));
            $tmp1758 = $tmp1762;
            panda$core$String* $tmp1763 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1757, $tmp1758);
            $tmp1756 = $tmp1763;
            panda$core$String* $tmp1765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1756, &$s1764);
            $tmp1755 = $tmp1765;
            panda$core$String* $tmp1766 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1755, ((panda$core$Object*) body1750));
            $tmp1754 = $tmp1766;
            panda$core$String* $tmp1768 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1754, &$s1767);
            $tmp1753 = $tmp1768;
            $tmp1752 = $tmp1753;
            $returnValue329 = $tmp1752;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1752));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1753));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1754));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1755));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1756));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1758));
            $tmp320 = 53;
            goto $l318;
            $l1769:;
            return $returnValue329;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1771, 46);
        panda$core$Bit $tmp1772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp1771);
        if ($tmp1772.value) {
        {
            panda$core$String** $tmp1774 = ((panda$core$String**) ((char*) $match$193_9321->$data + 16));
            name1773 = *$tmp1774;
            $tmp1775 = name1773;
            $returnValue329 = $tmp1775;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1775));
            $tmp320 = 54;
            goto $l318;
            $l1776:;
            return $returnValue329;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1778, 47);
        panda$core$Bit $tmp1779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp1778);
        if ($tmp1779.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp1781 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$193_9321->$data + 16));
            kind1780 = *$tmp1781;
            panda$collections$ImmutableArray** $tmp1783 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9321->$data + 24));
            decls1782 = *$tmp1783;
            int $tmp1786;
            {
                panda$core$MutableString* $tmp1790 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1790);
                $tmp1789 = $tmp1790;
                $tmp1788 = $tmp1789;
                result1787 = $tmp1788;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1788));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1789));
                {
                    $match$458_171791 = kind1780;
                    panda$core$Int64$init$builtin_int64(&$tmp1792, 0);
                    panda$core$Bit $tmp1793 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$458_171791.$rawValue, $tmp1792);
                    if ($tmp1793.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1787, &$s1794);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp1795, 1);
                    panda$core$Bit $tmp1796 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$458_171791.$rawValue, $tmp1795);
                    if ($tmp1796.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1787, &$s1797);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp1798, 2);
                    panda$core$Bit $tmp1799 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$458_171791.$rawValue, $tmp1798);
                    if ($tmp1799.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1787, &$s1800);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp1801, 3);
                    panda$core$Bit $tmp1802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$458_171791.$rawValue, $tmp1801);
                    if ($tmp1802.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1787, &$s1803);
                    }
                    }
                    }
                    }
                    }
                }
                ITable* $tmp1805 = ((panda$collections$CollectionView*) decls1782)->$class->itable;
                while ($tmp1805->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp1805 = $tmp1805->next;
                }
                $fn1807 $tmp1806 = $tmp1805->methods[1];
                panda$core$String* $tmp1808 = $tmp1806(((panda$collections$CollectionView*) decls1782));
                $tmp1804 = $tmp1808;
                panda$core$MutableString$append$panda$core$String(result1787, $tmp1804);
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1804));
                panda$core$String* $tmp1811 = panda$core$MutableString$finish$R$panda$core$String(result1787);
                $tmp1810 = $tmp1811;
                $tmp1809 = $tmp1810;
                $returnValue329 = $tmp1809;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1809));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1810));
                $tmp1786 = 0;
                goto $l1784;
                $l1812:;
                $tmp320 = 55;
                goto $l318;
                $l1813:;
                return $returnValue329;
            }
            $l1784:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result1787));
            result1787 = NULL;
            switch ($tmp1786) {
                case 0: goto $l1812;
            }
            $l1815:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1816, 48);
        panda$core$Bit $tmp1817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp1816);
        if ($tmp1817.value) {
        {
            panda$collections$ImmutableArray** $tmp1819 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9321->$data + 16));
            tests1818 = *$tmp1819;
            panda$collections$ImmutableArray** $tmp1821 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9321->$data + 24));
            statements1820 = *$tmp1821;
            int $tmp1824;
            {
                panda$core$MutableString* $tmp1828 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1828, &$s1829);
                $tmp1827 = $tmp1828;
                $tmp1826 = $tmp1827;
                result1825 = $tmp1826;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1826));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1827));
                $tmp1831 = &$s1832;
                separator1830 = $tmp1831;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1831));
                {
                    int $tmp1835;
                    {
                        ITable* $tmp1839 = ((panda$collections$Iterable*) tests1818)->$class->itable;
                        while ($tmp1839->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1839 = $tmp1839->next;
                        }
                        $fn1841 $tmp1840 = $tmp1839->methods[0];
                        panda$collections$Iterator* $tmp1842 = $tmp1840(((panda$collections$Iterable*) tests1818));
                        $tmp1838 = $tmp1842;
                        $tmp1837 = $tmp1838;
                        Iter$469$171836 = $tmp1837;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1837));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1838));
                        $l1843:;
                        ITable* $tmp1846 = Iter$469$171836->$class->itable;
                        while ($tmp1846->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1846 = $tmp1846->next;
                        }
                        $fn1848 $tmp1847 = $tmp1846->methods[0];
                        panda$core$Bit $tmp1849 = $tmp1847(Iter$469$171836);
                        panda$core$Bit $tmp1850 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1849);
                        bool $tmp1845 = $tmp1850.value;
                        if (!$tmp1845) goto $l1844;
                        {
                            int $tmp1853;
                            {
                                ITable* $tmp1857 = Iter$469$171836->$class->itable;
                                while ($tmp1857->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1857 = $tmp1857->next;
                                }
                                $fn1859 $tmp1858 = $tmp1857->methods[1];
                                panda$core$Object* $tmp1860 = $tmp1858(Iter$469$171836);
                                $tmp1856 = $tmp1860;
                                $tmp1855 = ((org$pandalanguage$pandac$ASTNode*) $tmp1856);
                                t1854 = $tmp1855;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1855));
                                panda$core$Panda$unref$panda$core$Object$Q($tmp1856);
                                panda$core$String* $tmp1865 = panda$core$String$convert$R$panda$core$String(separator1830);
                                $tmp1864 = $tmp1865;
                                panda$core$String* $tmp1867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1864, &$s1866);
                                $tmp1863 = $tmp1867;
                                panda$core$String* $tmp1868 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1863, ((panda$core$Object*) t1854));
                                $tmp1862 = $tmp1868;
                                panda$core$String* $tmp1870 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1862, &$s1869);
                                $tmp1861 = $tmp1870;
                                panda$core$MutableString$append$panda$core$String(result1825, $tmp1861);
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1861));
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1862));
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1863));
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1864));
                            }
                            $tmp1853 = -1;
                            goto $l1851;
                            $l1851:;
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) t1854));
                            t1854 = NULL;
                            switch ($tmp1853) {
                                case -1: goto $l1871;
                            }
                            $l1871:;
                        }
                        goto $l1843;
                        $l1844:;
                    }
                    $tmp1835 = -1;
                    goto $l1833;
                    $l1833:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$469$171836));
                    Iter$469$171836 = NULL;
                    switch ($tmp1835) {
                        case -1: goto $l1872;
                    }
                    $l1872:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp1874, 58);
                panda$core$Char8$init$panda$core$UInt8(&$tmp1873, $tmp1874);
                panda$core$MutableString$append$panda$core$Char8(result1825, $tmp1873);
                {
                    int $tmp1877;
                    {
                        ITable* $tmp1881 = ((panda$collections$Iterable*) statements1820)->$class->itable;
                        while ($tmp1881->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1881 = $tmp1881->next;
                        }
                        $fn1883 $tmp1882 = $tmp1881->methods[0];
                        panda$collections$Iterator* $tmp1884 = $tmp1882(((panda$collections$Iterable*) statements1820));
                        $tmp1880 = $tmp1884;
                        $tmp1879 = $tmp1880;
                        Iter$473$171878 = $tmp1879;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1879));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1880));
                        $l1885:;
                        ITable* $tmp1888 = Iter$473$171878->$class->itable;
                        while ($tmp1888->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1888 = $tmp1888->next;
                        }
                        $fn1890 $tmp1889 = $tmp1888->methods[0];
                        panda$core$Bit $tmp1891 = $tmp1889(Iter$473$171878);
                        panda$core$Bit $tmp1892 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1891);
                        bool $tmp1887 = $tmp1892.value;
                        if (!$tmp1887) goto $l1886;
                        {
                            int $tmp1895;
                            {
                                ITable* $tmp1899 = Iter$473$171878->$class->itable;
                                while ($tmp1899->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1899 = $tmp1899->next;
                                }
                                $fn1901 $tmp1900 = $tmp1899->methods[1];
                                panda$core$Object* $tmp1902 = $tmp1900(Iter$473$171878);
                                $tmp1898 = $tmp1902;
                                $tmp1897 = ((org$pandalanguage$pandac$ASTNode*) $tmp1898);
                                s1896 = $tmp1897;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1897));
                                panda$core$Panda$unref$panda$core$Object$Q($tmp1898);
                                panda$core$String* $tmp1905 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1904, ((panda$core$Object*) s1896));
                                $tmp1903 = $tmp1905;
                                panda$core$MutableString$append$panda$core$String(result1825, $tmp1903);
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1903));
                            }
                            $tmp1895 = -1;
                            goto $l1893;
                            $l1893:;
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) s1896));
                            s1896 = NULL;
                            switch ($tmp1895) {
                                case -1: goto $l1906;
                            }
                            $l1906:;
                        }
                        goto $l1885;
                        $l1886:;
                    }
                    $tmp1877 = -1;
                    goto $l1875;
                    $l1875:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$473$171878));
                    Iter$473$171878 = NULL;
                    switch ($tmp1877) {
                        case -1: goto $l1907;
                    }
                    $l1907:;
                }
                panda$core$String* $tmp1910 = panda$core$MutableString$finish$R$panda$core$String(result1825);
                $tmp1909 = $tmp1910;
                $tmp1908 = $tmp1909;
                $returnValue329 = $tmp1908;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1908));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1909));
                $tmp1824 = 0;
                goto $l1822;
                $l1911:;
                $tmp320 = 56;
                goto $l318;
                $l1912:;
                return $returnValue329;
            }
            $l1822:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) separator1830));
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result1825));
            result1825 = NULL;
            separator1830 = NULL;
            switch ($tmp1824) {
                case 0: goto $l1911;
            }
            $l1914:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1915, 49);
        panda$core$Bit $tmp1916 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9321->$rawValue, $tmp1915);
        if ($tmp1916.value) {
        {
            panda$core$String** $tmp1918 = ((panda$core$String**) ((char*) $match$193_9321->$data + 16));
            label1917 = *$tmp1918;
            org$pandalanguage$pandac$ASTNode** $tmp1920 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9321->$data + 24));
            test1919 = *$tmp1920;
            panda$collections$ImmutableArray** $tmp1922 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9321->$data + 32));
            statements1921 = *$tmp1922;
            int $tmp1925;
            {
                panda$core$MutableString* $tmp1929 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1929);
                $tmp1928 = $tmp1929;
                $tmp1927 = $tmp1928;
                result1926 = $tmp1927;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1927));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1928));
                if (((panda$core$Bit) { label1917 != NULL }).value) {
                {
                    panda$core$String* $tmp1932 = panda$core$String$convert$R$panda$core$String(label1917);
                    $tmp1931 = $tmp1932;
                    panda$core$String* $tmp1934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1931, &$s1933);
                    $tmp1930 = $tmp1934;
                    panda$core$MutableString$append$panda$core$String(result1926, $tmp1930);
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1930));
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1931));
                }
                }
                panda$core$String* $tmp1938 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1937, ((panda$core$Object*) test1919));
                $tmp1936 = $tmp1938;
                panda$core$String* $tmp1940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1936, &$s1939);
                $tmp1935 = $tmp1940;
                panda$core$MutableString$append$panda$core$String(result1926, $tmp1935);
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1935));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1936));
                {
                    int $tmp1943;
                    {
                        ITable* $tmp1947 = ((panda$collections$Iterable*) statements1921)->$class->itable;
                        while ($tmp1947->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1947 = $tmp1947->next;
                        }
                        $fn1949 $tmp1948 = $tmp1947->methods[0];
                        panda$collections$Iterator* $tmp1950 = $tmp1948(((panda$collections$Iterable*) statements1921));
                        $tmp1946 = $tmp1950;
                        $tmp1945 = $tmp1946;
                        Iter$483$171944 = $tmp1945;
                        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1945));
                        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1946));
                        $l1951:;
                        ITable* $tmp1954 = Iter$483$171944->$class->itable;
                        while ($tmp1954->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1954 = $tmp1954->next;
                        }
                        $fn1956 $tmp1955 = $tmp1954->methods[0];
                        panda$core$Bit $tmp1957 = $tmp1955(Iter$483$171944);
                        panda$core$Bit $tmp1958 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1957);
                        bool $tmp1953 = $tmp1958.value;
                        if (!$tmp1953) goto $l1952;
                        {
                            int $tmp1961;
                            {
                                ITable* $tmp1965 = Iter$483$171944->$class->itable;
                                while ($tmp1965->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1965 = $tmp1965->next;
                                }
                                $fn1967 $tmp1966 = $tmp1965->methods[1];
                                panda$core$Object* $tmp1968 = $tmp1966(Iter$483$171944);
                                $tmp1964 = $tmp1968;
                                $tmp1963 = ((org$pandalanguage$pandac$ASTNode*) $tmp1964);
                                s1962 = $tmp1963;
                                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1963));
                                panda$core$Panda$unref$panda$core$Object$Q($tmp1964);
                                panda$core$String* $tmp1971 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1962), &$s1970);
                                $tmp1969 = $tmp1971;
                                panda$core$MutableString$append$panda$core$String(result1926, $tmp1969);
                                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1969));
                            }
                            $tmp1961 = -1;
                            goto $l1959;
                            $l1959:;
                            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) s1962));
                            s1962 = NULL;
                            switch ($tmp1961) {
                                case -1: goto $l1972;
                            }
                            $l1972:;
                        }
                        goto $l1951;
                        $l1952:;
                    }
                    $tmp1943 = -1;
                    goto $l1941;
                    $l1941:;
                    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) Iter$483$171944));
                    Iter$483$171944 = NULL;
                    switch ($tmp1943) {
                        case -1: goto $l1973;
                    }
                    $l1973:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp1975, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp1974, $tmp1975);
                panda$core$MutableString$append$panda$core$Char8(result1926, $tmp1974);
                panda$core$String* $tmp1978 = panda$core$MutableString$finish$R$panda$core$String(result1926);
                $tmp1977 = $tmp1978;
                $tmp1976 = $tmp1977;
                $returnValue329 = $tmp1976;
                panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1976));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1977));
                $tmp1925 = 0;
                goto $l1923;
                $l1979:;
                $tmp320 = 57;
                goto $l318;
                $l1980:;
                return $returnValue329;
            }
            $l1923:;
            panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) result1926));
            result1926 = NULL;
            switch ($tmp1925) {
                case 0: goto $l1979;
            }
            $l1982:;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1983, false);
            if ($tmp1983.value) goto $l1984; else goto $l1985;
            $l1985:;
            panda$core$Int64$wrapper* $tmp1991;
            $tmp1991 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1991->value = self->$rawValue;
            $tmp1990 = ((panda$core$Object*) $tmp1991);
            panda$core$String* $tmp1992 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1989, $tmp1990);
            $tmp1988 = $tmp1992;
            panda$core$String* $tmp1994 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1988, &$s1993);
            $tmp1987 = $tmp1994;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1986, (panda$core$Int64) { 489 }, $tmp1987);
            abort();
            $l1984:;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
    $tmp320 = -1;
    goto $l318;
    $l318:;
    panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp322));
    switch ($tmp320) {
        case 18: goto $l772;
        case 21: goto $l916;
        case 23: goto $l1040;
        case 48: goto $l1690;
        case 27: goto $l1150;
        case 4: goto $l386;
        case 7: goto $l430;
        case 42: goto $l1628;
        case 8: goto $l483;
        case 36: goto $l1526;
        case 9: goto $l497;
        case 0: goto $l341;
        case 47: goto $l1672;
        case 19: goto $l838;
        case 56: goto $l1912;
        case 52: goto $l1744;
        case 51: goto $l1719;
        case 28: goto $l1160;
        case 25: goto $l1072;
        case 37: goto $l1545;
        case 46: goto $l1654;
        case 41: goto $l1615;
        case 2: goto $l359;
        case 50: goto $l1716;
        case 31: goto $l1427;
        case 44: goto $l1638;
        case 54: goto $l1776;
        case 17: goto $l766;
        case 55: goto $l1813;
        case 16: goto $l746;
        case 1: goto $l344;
        case 24: goto $l1065;
        case 6: goto $l421;
        case 53: goto $l1769;
        case 30: goto $l1286;
        case -1: goto $l1995;
        case 45: goto $l1648;
        case 49: goto $l1697;
        case 35: goto $l1519;
        case 12: goto $l565;
        case 5: goto $l392;
        case 34: goto $l1509;
        case 38: goto $l1564;
        case 13: goto $l595;
        case 33: goto $l1502;
        case 11: goto $l526;
        case 32: goto $l1493;
        case 15: goto $l742;
        case 3: goto $l373;
        case 26: goto $l1140;
        case 10: goto $l501;
        case 22: goto $l967;
        case 14: goto $l728;
        case 20: goto $l859;
        case 39: goto $l1592;
        case 29: goto $l1220;
        case 57: goto $l1980;
        case 40: goto $l1602;
        case 43: goto $l1632;
    }
    $l1995:;
    if (false) goto $l1996; else goto $l1997;
    $l1997:;
    panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1998, (panda$core$Int64) { 192 }, &$s1999);
    abort();
    $l1996:;
    abort();
}
void org$pandalanguage$pandac$ASTNode$cleanup(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$5_12006 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2007;
    panda$core$Int64 $tmp2008;
    org$pandalanguage$pandac$Position _f02010;
    panda$core$String* _f12012 = NULL;
    panda$core$String* _f22014 = NULL;
    org$pandalanguage$pandac$ASTNode* _f32016 = NULL;
    panda$core$Int64 $tmp2018;
    org$pandalanguage$pandac$Position _f02020;
    org$pandalanguage$pandac$ASTNode* _f12022 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22024 = NULL;
    panda$core$Int64 $tmp2026;
    org$pandalanguage$pandac$Position _f02028;
    org$pandalanguage$pandac$ASTNode* _f12030 = NULL;
    panda$core$Int64 $tmp2032;
    org$pandalanguage$pandac$Position _f02034;
    panda$core$Int64 $tmp2036;
    org$pandalanguage$pandac$Position _f02038;
    org$pandalanguage$pandac$ASTNode* _f12040 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind _f22042;
    org$pandalanguage$pandac$ASTNode* _f32044 = NULL;
    panda$core$Int64 $tmp2046;
    org$pandalanguage$pandac$Position _f02048;
    panda$core$Bit _f12050;
    panda$core$Int64 $tmp2052;
    org$pandalanguage$pandac$Position _f02054;
    panda$collections$ImmutableArray* _f12056 = NULL;
    panda$core$Int64 $tmp2058;
    org$pandalanguage$pandac$Position _f02060;
    panda$core$String* _f12062 = NULL;
    panda$core$Int64 $tmp2064;
    org$pandalanguage$pandac$Position _f02066;
    org$pandalanguage$pandac$ASTNode* _f12068 = NULL;
    panda$collections$ImmutableArray* _f22070 = NULL;
    panda$core$Int64 $tmp2072;
    org$pandalanguage$pandac$Position _f02074;
    org$pandalanguage$pandac$ASTNode* _f12076 = NULL;
    panda$core$String* _f22078 = NULL;
    panda$collections$ImmutableArray* _f32080 = NULL;
    panda$core$Int64 $tmp2082;
    org$pandalanguage$pandac$Position _f02084;
    org$pandalanguage$pandac$ASTNode* _f12086 = NULL;
    org$pandalanguage$pandac$ChoiceCase* _f22088 = NULL;
    panda$core$Int64 _f32090;
    panda$core$Int64 $tmp2092;
    org$pandalanguage$pandac$Position _f02094;
    org$pandalanguage$pandac$ASTNode* _f12096 = NULL;
    panda$collections$ImmutableArray* _f22098 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind _f32100;
    panda$core$String* _f42102 = NULL;
    panda$collections$ImmutableArray* _f52104 = NULL;
    panda$collections$ImmutableArray* _f62106 = NULL;
    panda$collections$ImmutableArray* _f72108 = NULL;
    panda$core$Int64 $tmp2110;
    org$pandalanguage$pandac$Position _f02112;
    panda$core$String* _f12114 = NULL;
    panda$core$Int64 $tmp2116;
    org$pandalanguage$pandac$Position _f02118;
    org$pandalanguage$pandac$ASTNode* _f12120 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22122 = NULL;
    panda$core$Int64 $tmp2124;
    org$pandalanguage$pandac$Position _f02126;
    panda$core$String* _f12128 = NULL;
    panda$collections$ImmutableArray* _f22130 = NULL;
    org$pandalanguage$pandac$ASTNode* _f32132 = NULL;
    panda$core$Int64 $tmp2134;
    org$pandalanguage$pandac$Position _f02136;
    org$pandalanguage$pandac$ASTNode* _f12138 = NULL;
    panda$core$String* _f22140 = NULL;
    panda$core$Int64 $tmp2142;
    org$pandalanguage$pandac$Position _f02144;
    org$pandalanguage$pandac$ASTNode* _f12146 = NULL;
    panda$collections$ImmutableArray* _f22148 = NULL;
    org$pandalanguage$pandac$ASTNode* _f32150 = NULL;
    panda$core$Int64 $tmp2152;
    panda$collections$ImmutableArray* _f02154 = NULL;
    panda$core$Int64 $tmp2156;
    org$pandalanguage$pandac$Position _f02158;
    panda$core$String* _f12160 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22162 = NULL;
    org$pandalanguage$pandac$ASTNode* _f32164 = NULL;
    panda$collections$ImmutableArray* _f42166 = NULL;
    panda$core$Int64 $tmp2168;
    org$pandalanguage$pandac$Position _f02170;
    panda$core$String* _f12172 = NULL;
    panda$collections$ImmutableArray* _f22174 = NULL;
    panda$core$Int64 $tmp2176;
    org$pandalanguage$pandac$Position _f02178;
    panda$core$String* _f12180 = NULL;
    panda$core$Int64 $tmp2182;
    org$pandalanguage$pandac$Position _f02184;
    org$pandalanguage$pandac$ASTNode* _f12186 = NULL;
    panda$collections$ImmutableArray* _f22188 = NULL;
    org$pandalanguage$pandac$ASTNode* _f32190 = NULL;
    panda$core$Int64 $tmp2192;
    org$pandalanguage$pandac$Position _f02194;
    panda$core$UInt64 _f12196;
    panda$core$Int64 $tmp2198;
    org$pandalanguage$pandac$IRNode* _f02200 = NULL;
    panda$core$Int64 $tmp2202;
    org$pandalanguage$pandac$Position _f02204;
    panda$core$String* _f12206 = NULL;
    panda$collections$ImmutableArray* _f22208 = NULL;
    panda$core$Int64 $tmp2210;
    org$pandalanguage$pandac$Position _f02212;
    org$pandalanguage$pandac$ASTNode* _f12214 = NULL;
    panda$collections$ImmutableArray* _f22216 = NULL;
    panda$collections$ImmutableArray* _f32218 = NULL;
    panda$core$Int64 $tmp2220;
    org$pandalanguage$pandac$Position _f02222;
    org$pandalanguage$pandac$ASTNode* _f12224 = NULL;
    panda$collections$ImmutableArray* _f22226 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind _f32228;
    panda$core$String* _f42230 = NULL;
    panda$collections$ImmutableArray* _f52232 = NULL;
    panda$collections$ImmutableArray* _f62234 = NULL;
    org$pandalanguage$pandac$ASTNode* _f72236 = NULL;
    panda$collections$ImmutableArray* _f82238 = NULL;
    panda$core$Int64 $tmp2240;
    org$pandalanguage$pandac$Position _f02242;
    org$pandalanguage$pandac$parser$Token$Kind _f12244;
    panda$collections$ImmutableArray* _f22246 = NULL;
    org$pandalanguage$pandac$ASTNode* _f32248 = NULL;
    panda$core$Int64 $tmp2250;
    org$pandalanguage$pandac$Position _f02252;
    panda$core$Int64 $tmp2254;
    org$pandalanguage$pandac$Position _f02256;
    org$pandalanguage$pandac$ASTNode* _f12258 = NULL;
    panda$core$Int64 $tmp2260;
    org$pandalanguage$pandac$Position _f02262;
    panda$core$String* _f12264 = NULL;
    panda$core$Int64 $tmp2266;
    org$pandalanguage$pandac$Position _f02268;
    panda$core$String* _f12270 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22272 = NULL;
    panda$core$Int64 $tmp2274;
    org$pandalanguage$pandac$Position _f02276;
    org$pandalanguage$pandac$parser$Token$Kind _f12278;
    org$pandalanguage$pandac$ASTNode* _f22280 = NULL;
    panda$core$Int64 $tmp2282;
    org$pandalanguage$pandac$Position _f02284;
    org$pandalanguage$pandac$ASTNode* _f12286 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22288 = NULL;
    panda$core$Bit _f32290;
    org$pandalanguage$pandac$ASTNode* _f42292 = NULL;
    panda$core$Int64 $tmp2294;
    org$pandalanguage$pandac$Position _f02296;
    panda$core$Real64 _f12298;
    panda$core$Int64 $tmp2300;
    org$pandalanguage$pandac$Position _f02302;
    panda$core$String* _f12304 = NULL;
    panda$core$Int64 $tmp2306;
    org$pandalanguage$pandac$Position _f02308;
    org$pandalanguage$pandac$ASTNode* _f12310 = NULL;
    panda$core$Int64 $tmp2312;
    org$pandalanguage$pandac$Position _f02314;
    panda$core$Int64 $tmp2316;
    org$pandalanguage$pandac$Position _f02318;
    panda$core$String* _f12320 = NULL;
    panda$core$Int64 $tmp2322;
    org$pandalanguage$pandac$Position _f02324;
    panda$core$Int64 $tmp2326;
    org$pandalanguage$pandac$Position _f02328;
    panda$collections$ImmutableArray* _f12330 = NULL;
    panda$core$Int64 $tmp2332;
    org$pandalanguage$pandac$Position _f02334;
    panda$collections$ImmutableArray* _f12336 = NULL;
    panda$core$Int64 $tmp2338;
    org$pandalanguage$pandac$Position _f02340;
    panda$core$String* _f12342 = NULL;
    panda$core$Int64 $tmp2344;
    org$pandalanguage$pandac$Position _f02346;
    panda$collections$ImmutableArray* _f12348 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22350 = NULL;
    panda$core$Int64 $tmp2352;
    org$pandalanguage$pandac$Position _f02354;
    panda$core$String* _f12356 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22358 = NULL;
    panda$core$Int64 $tmp2360;
    org$pandalanguage$pandac$Position _f02362;
    panda$collections$ImmutableArray* _f12364 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22366 = NULL;
    panda$core$Int64 $tmp2368;
    org$pandalanguage$pandac$Position _f02370;
    panda$core$String* _f12372 = NULL;
    panda$core$Int64 $tmp2374;
    org$pandalanguage$pandac$Position _f02376;
    org$pandalanguage$pandac$Variable$Kind _f12378;
    panda$collections$ImmutableArray* _f22380 = NULL;
    panda$core$Int64 $tmp2382;
    org$pandalanguage$pandac$Position _f02384;
    panda$collections$ImmutableArray* _f12386 = NULL;
    panda$collections$ImmutableArray* _f22388 = NULL;
    panda$core$Int64 $tmp2390;
    org$pandalanguage$pandac$Position _f02392;
    panda$core$String* _f12394 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22396 = NULL;
    panda$collections$ImmutableArray* _f32398 = NULL;
    int $tmp2002;
    {
        int $tmp2005;
        {
            $tmp2007 = self;
            $match$5_12006 = $tmp2007;
            panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2007));
            panda$core$Int64$init$builtin_int64(&$tmp2008, 0);
            panda$core$Bit $tmp2009 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2008);
            if ($tmp2009.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2011 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02010 = *$tmp2011;
                panda$core$String** $tmp2013 = ((panda$core$String**) ((char*) $match$5_12006->$data + 16));
                _f12012 = *$tmp2013;
                panda$core$String** $tmp2015 = ((panda$core$String**) ((char*) $match$5_12006->$data + 24));
                _f22014 = *$tmp2015;
                org$pandalanguage$pandac$ASTNode** $tmp2017 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 32));
                _f32016 = *$tmp2017;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12012));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f22014));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f32016));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2018, 1);
            panda$core$Bit $tmp2019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2018);
            if ($tmp2019.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2021 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02020 = *$tmp2021;
                org$pandalanguage$pandac$ASTNode** $tmp2023 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 16));
                _f12022 = *$tmp2023;
                org$pandalanguage$pandac$ASTNode** $tmp2025 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 24));
                _f22024 = *$tmp2025;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12022));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f22024));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2026, 2);
            panda$core$Bit $tmp2027 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2026);
            if ($tmp2027.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2029 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02028 = *$tmp2029;
                org$pandalanguage$pandac$ASTNode** $tmp2031 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 16));
                _f12030 = *$tmp2031;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12030));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2032, 3);
            panda$core$Bit $tmp2033 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2032);
            if ($tmp2033.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2035 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02034 = *$tmp2035;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2036, 4);
            panda$core$Bit $tmp2037 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2036);
            if ($tmp2037.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2039 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02038 = *$tmp2039;
                org$pandalanguage$pandac$ASTNode** $tmp2041 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 16));
                _f12040 = *$tmp2041;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2043 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12006->$data + 24));
                _f22042 = *$tmp2043;
                org$pandalanguage$pandac$ASTNode** $tmp2045 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 32));
                _f32044 = *$tmp2045;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12040));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f32044));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2046, 5);
            panda$core$Bit $tmp2047 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2046);
            if ($tmp2047.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2049 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02048 = *$tmp2049;
                panda$core$Bit* $tmp2051 = ((panda$core$Bit*) ((char*) $match$5_12006->$data + 16));
                _f12050 = *$tmp2051;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2052, 6);
            panda$core$Bit $tmp2053 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2052);
            if ($tmp2053.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2055 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02054 = *$tmp2055;
                panda$collections$ImmutableArray** $tmp2057 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12006->$data + 16));
                _f12056 = *$tmp2057;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12056));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2058, 7);
            panda$core$Bit $tmp2059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2058);
            if ($tmp2059.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2061 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02060 = *$tmp2061;
                panda$core$String** $tmp2063 = ((panda$core$String**) ((char*) $match$5_12006->$data + 16));
                _f12062 = *$tmp2063;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12062));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2064, 8);
            panda$core$Bit $tmp2065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2064);
            if ($tmp2065.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2067 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02066 = *$tmp2067;
                org$pandalanguage$pandac$ASTNode** $tmp2069 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 16));
                _f12068 = *$tmp2069;
                panda$collections$ImmutableArray** $tmp2071 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12006->$data + 24));
                _f22070 = *$tmp2071;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12068));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f22070));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2072, 9);
            panda$core$Bit $tmp2073 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2072);
            if ($tmp2073.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2075 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02074 = *$tmp2075;
                org$pandalanguage$pandac$ASTNode** $tmp2077 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 16));
                _f12076 = *$tmp2077;
                panda$core$String** $tmp2079 = ((panda$core$String**) ((char*) $match$5_12006->$data + 24));
                _f22078 = *$tmp2079;
                panda$collections$ImmutableArray** $tmp2081 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12006->$data + 32));
                _f32080 = *$tmp2081;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12076));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f22078));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f32080));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2082, 10);
            panda$core$Bit $tmp2083 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2082);
            if ($tmp2083.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2085 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02084 = *$tmp2085;
                org$pandalanguage$pandac$ASTNode** $tmp2087 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 16));
                _f12086 = *$tmp2087;
                org$pandalanguage$pandac$ChoiceCase** $tmp2089 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) $match$5_12006->$data + 24));
                _f22088 = *$tmp2089;
                panda$core$Int64* $tmp2091 = ((panda$core$Int64*) ((char*) $match$5_12006->$data + 32));
                _f32090 = *$tmp2091;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12086));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f22088));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2092, 11);
            panda$core$Bit $tmp2093 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2092);
            if ($tmp2093.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2095 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02094 = *$tmp2095;
                org$pandalanguage$pandac$ASTNode** $tmp2097 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 16));
                _f12096 = *$tmp2097;
                panda$collections$ImmutableArray** $tmp2099 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12006->$data + 24));
                _f22098 = *$tmp2099;
                org$pandalanguage$pandac$ClassDecl$Kind* $tmp2101 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$5_12006->$data + 32));
                _f32100 = *$tmp2101;
                panda$core$String** $tmp2103 = ((panda$core$String**) ((char*) $match$5_12006->$data + 40));
                _f42102 = *$tmp2103;
                panda$collections$ImmutableArray** $tmp2105 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12006->$data + 48));
                _f52104 = *$tmp2105;
                panda$collections$ImmutableArray** $tmp2107 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12006->$data + 56));
                _f62106 = *$tmp2107;
                panda$collections$ImmutableArray** $tmp2109 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12006->$data + 64));
                _f72108 = *$tmp2109;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12096));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f22098));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f42102));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f52104));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f62106));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f72108));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2110, 12);
            panda$core$Bit $tmp2111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2110);
            if ($tmp2111.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2113 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02112 = *$tmp2113;
                panda$core$String** $tmp2115 = ((panda$core$String**) ((char*) $match$5_12006->$data + 16));
                _f12114 = *$tmp2115;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12114));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2116, 13);
            panda$core$Bit $tmp2117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2116);
            if ($tmp2117.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2119 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02118 = *$tmp2119;
                org$pandalanguage$pandac$ASTNode** $tmp2121 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 16));
                _f12120 = *$tmp2121;
                org$pandalanguage$pandac$ASTNode** $tmp2123 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 24));
                _f22122 = *$tmp2123;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12120));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f22122));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2124, 14);
            panda$core$Bit $tmp2125 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2124);
            if ($tmp2125.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2127 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02126 = *$tmp2127;
                panda$core$String** $tmp2129 = ((panda$core$String**) ((char*) $match$5_12006->$data + 16));
                _f12128 = *$tmp2129;
                panda$collections$ImmutableArray** $tmp2131 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12006->$data + 24));
                _f22130 = *$tmp2131;
                org$pandalanguage$pandac$ASTNode** $tmp2133 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 32));
                _f32132 = *$tmp2133;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12128));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f22130));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f32132));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2134, 15);
            panda$core$Bit $tmp2135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2134);
            if ($tmp2135.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2137 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02136 = *$tmp2137;
                org$pandalanguage$pandac$ASTNode** $tmp2139 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 16));
                _f12138 = *$tmp2139;
                panda$core$String** $tmp2141 = ((panda$core$String**) ((char*) $match$5_12006->$data + 24));
                _f22140 = *$tmp2141;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12138));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f22140));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2142, 16);
            panda$core$Bit $tmp2143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2142);
            if ($tmp2143.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2145 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02144 = *$tmp2145;
                org$pandalanguage$pandac$ASTNode** $tmp2147 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 16));
                _f12146 = *$tmp2147;
                panda$collections$ImmutableArray** $tmp2149 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12006->$data + 24));
                _f22148 = *$tmp2149;
                org$pandalanguage$pandac$ASTNode** $tmp2151 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 32));
                _f32150 = *$tmp2151;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12146));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f22148));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f32150));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2152, 17);
            panda$core$Bit $tmp2153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2152);
            if ($tmp2153.value) {
            {
                panda$collections$ImmutableArray** $tmp2155 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12006->$data + 0));
                _f02154 = *$tmp2155;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f02154));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2156, 18);
            panda$core$Bit $tmp2157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2156);
            if ($tmp2157.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2159 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02158 = *$tmp2159;
                panda$core$String** $tmp2161 = ((panda$core$String**) ((char*) $match$5_12006->$data + 16));
                _f12160 = *$tmp2161;
                org$pandalanguage$pandac$ASTNode** $tmp2163 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 24));
                _f22162 = *$tmp2163;
                org$pandalanguage$pandac$ASTNode** $tmp2165 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 32));
                _f32164 = *$tmp2165;
                panda$collections$ImmutableArray** $tmp2167 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12006->$data + 40));
                _f42166 = *$tmp2167;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12160));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f22162));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f32164));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f42166));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2168, 19);
            panda$core$Bit $tmp2169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2168);
            if ($tmp2169.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2171 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02170 = *$tmp2171;
                panda$core$String** $tmp2173 = ((panda$core$String**) ((char*) $match$5_12006->$data + 16));
                _f12172 = *$tmp2173;
                panda$collections$ImmutableArray** $tmp2175 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12006->$data + 24));
                _f22174 = *$tmp2175;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12172));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f22174));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2176, 20);
            panda$core$Bit $tmp2177 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2176);
            if ($tmp2177.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2179 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02178 = *$tmp2179;
                panda$core$String** $tmp2181 = ((panda$core$String**) ((char*) $match$5_12006->$data + 16));
                _f12180 = *$tmp2181;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12180));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2182, 21);
            panda$core$Bit $tmp2183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2182);
            if ($tmp2183.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2185 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02184 = *$tmp2185;
                org$pandalanguage$pandac$ASTNode** $tmp2187 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 16));
                _f12186 = *$tmp2187;
                panda$collections$ImmutableArray** $tmp2189 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12006->$data + 24));
                _f22188 = *$tmp2189;
                org$pandalanguage$pandac$ASTNode** $tmp2191 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 32));
                _f32190 = *$tmp2191;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12186));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f22188));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f32190));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2192, 22);
            panda$core$Bit $tmp2193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2192);
            if ($tmp2193.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2195 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02194 = *$tmp2195;
                panda$core$UInt64* $tmp2197 = ((panda$core$UInt64*) ((char*) $match$5_12006->$data + 16));
                _f12196 = *$tmp2197;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2198, 23);
            panda$core$Bit $tmp2199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2198);
            if ($tmp2199.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2201 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12006->$data + 0));
                _f02200 = *$tmp2201;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f02200));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2202, 24);
            panda$core$Bit $tmp2203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2202);
            if ($tmp2203.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2205 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02204 = *$tmp2205;
                panda$core$String** $tmp2207 = ((panda$core$String**) ((char*) $match$5_12006->$data + 16));
                _f12206 = *$tmp2207;
                panda$collections$ImmutableArray** $tmp2209 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12006->$data + 24));
                _f22208 = *$tmp2209;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12206));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f22208));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2210, 25);
            panda$core$Bit $tmp2211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2210);
            if ($tmp2211.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2213 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02212 = *$tmp2213;
                org$pandalanguage$pandac$ASTNode** $tmp2215 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 16));
                _f12214 = *$tmp2215;
                panda$collections$ImmutableArray** $tmp2217 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12006->$data + 24));
                _f22216 = *$tmp2217;
                panda$collections$ImmutableArray** $tmp2219 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12006->$data + 32));
                _f32218 = *$tmp2219;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12214));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f22216));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f32218));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2220, 26);
            panda$core$Bit $tmp2221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2220);
            if ($tmp2221.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2223 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02222 = *$tmp2223;
                org$pandalanguage$pandac$ASTNode** $tmp2225 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 16));
                _f12224 = *$tmp2225;
                panda$collections$ImmutableArray** $tmp2227 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12006->$data + 24));
                _f22226 = *$tmp2227;
                org$pandalanguage$pandac$MethodDecl$Kind* $tmp2229 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$5_12006->$data + 32));
                _f32228 = *$tmp2229;
                panda$core$String** $tmp2231 = ((panda$core$String**) ((char*) $match$5_12006->$data + 40));
                _f42230 = *$tmp2231;
                panda$collections$ImmutableArray** $tmp2233 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12006->$data + 48));
                _f52232 = *$tmp2233;
                panda$collections$ImmutableArray** $tmp2235 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12006->$data + 56));
                _f62234 = *$tmp2235;
                org$pandalanguage$pandac$ASTNode** $tmp2237 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 64));
                _f72236 = *$tmp2237;
                panda$collections$ImmutableArray** $tmp2239 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12006->$data + 72));
                _f82238 = *$tmp2239;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12224));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f22226));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f42230));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f52232));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f62234));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f72236));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f82238));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2240, 27);
            panda$core$Bit $tmp2241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2240);
            if ($tmp2241.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2243 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02242 = *$tmp2243;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2245 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12006->$data + 16));
                _f12244 = *$tmp2245;
                panda$collections$ImmutableArray** $tmp2247 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12006->$data + 24));
                _f22246 = *$tmp2247;
                org$pandalanguage$pandac$ASTNode** $tmp2249 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 32));
                _f32248 = *$tmp2249;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f22246));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f32248));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2250, 28);
            panda$core$Bit $tmp2251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2250);
            if ($tmp2251.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2253 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02252 = *$tmp2253;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2254, 29);
            panda$core$Bit $tmp2255 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2254);
            if ($tmp2255.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2257 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02256 = *$tmp2257;
                org$pandalanguage$pandac$ASTNode** $tmp2259 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 16));
                _f12258 = *$tmp2259;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12258));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2260, 30);
            panda$core$Bit $tmp2261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2260);
            if ($tmp2261.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2263 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02262 = *$tmp2263;
                panda$core$String** $tmp2265 = ((panda$core$String**) ((char*) $match$5_12006->$data + 16));
                _f12264 = *$tmp2265;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12264));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2266, 31);
            panda$core$Bit $tmp2267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2266);
            if ($tmp2267.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2269 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02268 = *$tmp2269;
                panda$core$String** $tmp2271 = ((panda$core$String**) ((char*) $match$5_12006->$data + 16));
                _f12270 = *$tmp2271;
                org$pandalanguage$pandac$ASTNode** $tmp2273 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 24));
                _f22272 = *$tmp2273;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12270));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f22272));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2274, 32);
            panda$core$Bit $tmp2275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2274);
            if ($tmp2275.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2277 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02276 = *$tmp2277;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2279 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12006->$data + 16));
                _f12278 = *$tmp2279;
                org$pandalanguage$pandac$ASTNode** $tmp2281 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 24));
                _f22280 = *$tmp2281;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f22280));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2282, 33);
            panda$core$Bit $tmp2283 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2282);
            if ($tmp2283.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2285 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02284 = *$tmp2285;
                org$pandalanguage$pandac$ASTNode** $tmp2287 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 16));
                _f12286 = *$tmp2287;
                org$pandalanguage$pandac$ASTNode** $tmp2289 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 24));
                _f22288 = *$tmp2289;
                panda$core$Bit* $tmp2291 = ((panda$core$Bit*) ((char*) $match$5_12006->$data + 32));
                _f32290 = *$tmp2291;
                org$pandalanguage$pandac$ASTNode** $tmp2293 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 33));
                _f42292 = *$tmp2293;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12286));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f22288));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f42292));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2294, 34);
            panda$core$Bit $tmp2295 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2294);
            if ($tmp2295.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2297 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02296 = *$tmp2297;
                panda$core$Real64* $tmp2299 = ((panda$core$Real64*) ((char*) $match$5_12006->$data + 16));
                _f12298 = *$tmp2299;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2300, 35);
            panda$core$Bit $tmp2301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2300);
            if ($tmp2301.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2303 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02302 = *$tmp2303;
                panda$core$String** $tmp2305 = ((panda$core$String**) ((char*) $match$5_12006->$data + 16));
                _f12304 = *$tmp2305;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12304));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2306, 36);
            panda$core$Bit $tmp2307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2306);
            if ($tmp2307.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2309 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02308 = *$tmp2309;
                org$pandalanguage$pandac$ASTNode** $tmp2311 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 16));
                _f12310 = *$tmp2311;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12310));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2312, 37);
            panda$core$Bit $tmp2313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2312);
            if ($tmp2313.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2315 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02314 = *$tmp2315;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2316, 38);
            panda$core$Bit $tmp2317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2316);
            if ($tmp2317.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2319 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02318 = *$tmp2319;
                panda$core$String** $tmp2321 = ((panda$core$String**) ((char*) $match$5_12006->$data + 16));
                _f12320 = *$tmp2321;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12320));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2322, 39);
            panda$core$Bit $tmp2323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2322);
            if ($tmp2323.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2325 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02324 = *$tmp2325;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2326, 40);
            panda$core$Bit $tmp2327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2326);
            if ($tmp2327.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2329 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02328 = *$tmp2329;
                panda$collections$ImmutableArray** $tmp2331 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12006->$data + 16));
                _f12330 = *$tmp2331;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12330));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2332, 41);
            panda$core$Bit $tmp2333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2332);
            if ($tmp2333.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2335 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02334 = *$tmp2335;
                panda$collections$ImmutableArray** $tmp2337 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12006->$data + 16));
                _f12336 = *$tmp2337;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12336));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2338, 42);
            panda$core$Bit $tmp2339 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2338);
            if ($tmp2339.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2341 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02340 = *$tmp2341;
                panda$core$String** $tmp2343 = ((panda$core$String**) ((char*) $match$5_12006->$data + 16));
                _f12342 = *$tmp2343;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12342));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2344, 43);
            panda$core$Bit $tmp2345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2344);
            if ($tmp2345.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2347 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02346 = *$tmp2347;
                panda$collections$ImmutableArray** $tmp2349 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12006->$data + 16));
                _f12348 = *$tmp2349;
                org$pandalanguage$pandac$ASTNode** $tmp2351 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 24));
                _f22350 = *$tmp2351;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12348));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f22350));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2352, 44);
            panda$core$Bit $tmp2353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2352);
            if ($tmp2353.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2355 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02354 = *$tmp2355;
                panda$core$String** $tmp2357 = ((panda$core$String**) ((char*) $match$5_12006->$data + 16));
                _f12356 = *$tmp2357;
                org$pandalanguage$pandac$ASTNode** $tmp2359 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 24));
                _f22358 = *$tmp2359;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12356));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f22358));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2360, 45);
            panda$core$Bit $tmp2361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2360);
            if ($tmp2361.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2363 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02362 = *$tmp2363;
                panda$collections$ImmutableArray** $tmp2365 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12006->$data + 16));
                _f12364 = *$tmp2365;
                org$pandalanguage$pandac$ASTNode** $tmp2367 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 24));
                _f22366 = *$tmp2367;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12364));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f22366));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2368, 46);
            panda$core$Bit $tmp2369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2368);
            if ($tmp2369.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2371 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02370 = *$tmp2371;
                panda$core$String** $tmp2373 = ((panda$core$String**) ((char*) $match$5_12006->$data + 16));
                _f12372 = *$tmp2373;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12372));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2374, 47);
            panda$core$Bit $tmp2375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2374);
            if ($tmp2375.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2377 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02376 = *$tmp2377;
                org$pandalanguage$pandac$Variable$Kind* $tmp2379 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_12006->$data + 16));
                _f12378 = *$tmp2379;
                panda$collections$ImmutableArray** $tmp2381 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12006->$data + 24));
                _f22380 = *$tmp2381;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f22380));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2382, 48);
            panda$core$Bit $tmp2383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2382);
            if ($tmp2383.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2385 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02384 = *$tmp2385;
                panda$collections$ImmutableArray** $tmp2387 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12006->$data + 16));
                _f12386 = *$tmp2387;
                panda$collections$ImmutableArray** $tmp2389 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12006->$data + 24));
                _f22388 = *$tmp2389;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12386));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f22388));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2390, 49);
            panda$core$Bit $tmp2391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12006->$rawValue, $tmp2390);
            if ($tmp2391.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2393 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12006->$data + 0));
                _f02392 = *$tmp2393;
                panda$core$String** $tmp2395 = ((panda$core$String**) ((char*) $match$5_12006->$data + 16));
                _f12394 = *$tmp2395;
                org$pandalanguage$pandac$ASTNode** $tmp2397 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12006->$data + 24));
                _f22396 = *$tmp2397;
                panda$collections$ImmutableArray** $tmp2399 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12006->$data + 32));
                _f32398 = *$tmp2399;
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f12394));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f22396));
                panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) _f32398));
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
        }
        $tmp2005 = -1;
        goto $l2003;
        $l2003:;
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2007));
        switch ($tmp2005) {
            case -1: goto $l2400;
        }
        $l2400:;
    }
    $tmp2002 = -1;
    goto $l2000;
    $l2000:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp2002) {
        case -1: goto $l2401;
    }
    $l2401:;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$core$String* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    panda$core$String* $tmp2403;
    panda$core$String* $tmp2406;
    panda$core$String* $tmp2407;
    panda$core$String* $tmp2410;
    org$pandalanguage$pandac$ASTNode* $tmp2411;
    org$pandalanguage$pandac$ASTNode* $tmp2414;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2402 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2402 = p_f0;
    {
        panda$core$String** $tmp2404 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2403 = *$tmp2404;
        panda$core$String** $tmp2405 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2406 = p_f1;
        *$tmp2405 = $tmp2406;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2406));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2403));
    }
    {
        panda$core$String** $tmp2408 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2407 = *$tmp2408;
        panda$core$String** $tmp2409 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2410 = p_f2;
        *$tmp2409 = $tmp2410;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2410));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2407));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2412 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2411 = *$tmp2412;
        org$pandalanguage$pandac$ASTNode** $tmp2413 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2414 = p_f3;
        *$tmp2413 = $tmp2414;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2414));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2411));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2416;
    org$pandalanguage$pandac$ASTNode* $tmp2419;
    org$pandalanguage$pandac$ASTNode* $tmp2420;
    org$pandalanguage$pandac$ASTNode* $tmp2423;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2415 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2415 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2417 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2416 = *$tmp2417;
        org$pandalanguage$pandac$ASTNode** $tmp2418 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2419 = p_f1;
        *$tmp2418 = $tmp2419;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2419));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2416));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2421 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2420 = *$tmp2421;
        org$pandalanguage$pandac$ASTNode** $tmp2422 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2423 = p_f2;
        *$tmp2422 = $tmp2423;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2423));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2420));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    org$pandalanguage$pandac$ASTNode* $tmp2425;
    org$pandalanguage$pandac$ASTNode* $tmp2428;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2424 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2424 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2426 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2425 = *$tmp2426;
        org$pandalanguage$pandac$ASTNode** $tmp2427 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2428 = p_f1;
        *$tmp2427 = $tmp2428;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2428));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2425));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2429 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2429 = p_f0;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$parser$Token$Kind p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2431;
    org$pandalanguage$pandac$ASTNode* $tmp2434;
    org$pandalanguage$pandac$ASTNode* $tmp2436;
    org$pandalanguage$pandac$ASTNode* $tmp2439;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2430 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2430 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2432 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2431 = *$tmp2432;
        org$pandalanguage$pandac$ASTNode** $tmp2433 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2434 = p_f1;
        *$tmp2433 = $tmp2434;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2434));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2431));
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2435 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 24));
    *$tmp2435 = p_f2;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2437 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2436 = *$tmp2437;
        org$pandalanguage$pandac$ASTNode** $tmp2438 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2439 = p_f3;
        *$tmp2438 = $tmp2439;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2439));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2436));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Bit p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2440 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2440 = p_f0;
    panda$core$Bit* $tmp2441 = ((panda$core$Bit*) ((char*) self->$data + 16));
    *$tmp2441 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    panda$collections$ImmutableArray* $tmp2443;
    panda$collections$ImmutableArray* $tmp2446;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2442 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2442 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2444 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2443 = *$tmp2444;
        panda$collections$ImmutableArray** $tmp2445 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2446 = p_f1;
        *$tmp2445 = $tmp2446;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2446));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2443));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp2448;
    panda$core$String* $tmp2451;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2447 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2447 = p_f0;
    {
        panda$core$String** $tmp2449 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2448 = *$tmp2449;
        panda$core$String** $tmp2450 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2451 = p_f1;
        *$tmp2450 = $tmp2451;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2451));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2448));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2453;
    org$pandalanguage$pandac$ASTNode* $tmp2456;
    panda$collections$ImmutableArray* $tmp2457;
    panda$collections$ImmutableArray* $tmp2460;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2452 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2452 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2454 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2453 = *$tmp2454;
        org$pandalanguage$pandac$ASTNode** $tmp2455 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2456 = p_f1;
        *$tmp2455 = $tmp2456;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2456));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2453));
    }
    {
        panda$collections$ImmutableArray** $tmp2458 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2457 = *$tmp2458;
        panda$collections$ImmutableArray** $tmp2459 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2460 = p_f2;
        *$tmp2459 = $tmp2460;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2460));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2457));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2462;
    org$pandalanguage$pandac$ASTNode* $tmp2465;
    panda$core$String* $tmp2466;
    panda$core$String* $tmp2469;
    panda$collections$ImmutableArray* $tmp2470;
    panda$collections$ImmutableArray* $tmp2473;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2461 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2461 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2463 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2462 = *$tmp2463;
        org$pandalanguage$pandac$ASTNode** $tmp2464 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2465 = p_f1;
        *$tmp2464 = $tmp2465;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2465));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2462));
    }
    {
        panda$core$String** $tmp2467 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2466 = *$tmp2467;
        panda$core$String** $tmp2468 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2469 = p_f2;
        *$tmp2468 = $tmp2469;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2469));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2466));
    }
    {
        panda$collections$ImmutableArray** $tmp2471 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2470 = *$tmp2471;
        panda$collections$ImmutableArray** $tmp2472 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2473 = p_f3;
        *$tmp2472 = $tmp2473;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2473));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2470));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ChoiceCase* p_f2, panda$core$Int64 p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2475;
    org$pandalanguage$pandac$ASTNode* $tmp2478;
    org$pandalanguage$pandac$ChoiceCase* $tmp2479;
    org$pandalanguage$pandac$ChoiceCase* $tmp2482;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2474 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2474 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2476 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2475 = *$tmp2476;
        org$pandalanguage$pandac$ASTNode** $tmp2477 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2478 = p_f1;
        *$tmp2477 = $tmp2478;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2478));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2475));
    }
    {
        org$pandalanguage$pandac$ChoiceCase** $tmp2480 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) self->$data + 24));
        $tmp2479 = *$tmp2480;
        org$pandalanguage$pandac$ChoiceCase** $tmp2481 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) self->$data + 24));
        $tmp2482 = p_f2;
        *$tmp2481 = $tmp2482;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2482));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2479));
    }
    panda$core$Int64* $tmp2483 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp2483 = p_f3;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ClassDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, panda$collections$ImmutableArray* p_f6, panda$collections$ImmutableArray* p_f7) {
    org$pandalanguage$pandac$ASTNode* $tmp2485;
    org$pandalanguage$pandac$ASTNode* $tmp2488;
    panda$collections$ImmutableArray* $tmp2489;
    panda$collections$ImmutableArray* $tmp2492;
    panda$core$String* $tmp2494;
    panda$core$String* $tmp2497;
    panda$collections$ImmutableArray* $tmp2498;
    panda$collections$ImmutableArray* $tmp2501;
    panda$collections$ImmutableArray* $tmp2502;
    panda$collections$ImmutableArray* $tmp2505;
    panda$collections$ImmutableArray* $tmp2506;
    panda$collections$ImmutableArray* $tmp2509;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2484 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2484 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2486 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2485 = *$tmp2486;
        org$pandalanguage$pandac$ASTNode** $tmp2487 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2488 = p_f1;
        *$tmp2487 = $tmp2488;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2488));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2485));
    }
    {
        panda$collections$ImmutableArray** $tmp2490 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2489 = *$tmp2490;
        panda$collections$ImmutableArray** $tmp2491 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2492 = p_f2;
        *$tmp2491 = $tmp2492;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2492));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2489));
    }
    org$pandalanguage$pandac$ClassDecl$Kind* $tmp2493 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) self->$data + 32));
    *$tmp2493 = p_f3;
    {
        panda$core$String** $tmp2495 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2494 = *$tmp2495;
        panda$core$String** $tmp2496 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2497 = p_f4;
        *$tmp2496 = $tmp2497;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2497));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2494));
    }
    {
        panda$collections$ImmutableArray** $tmp2499 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2498 = *$tmp2499;
        panda$collections$ImmutableArray** $tmp2500 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2501 = p_f5;
        *$tmp2500 = $tmp2501;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2501));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2498));
    }
    {
        panda$collections$ImmutableArray** $tmp2503 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2502 = *$tmp2503;
        panda$collections$ImmutableArray** $tmp2504 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2505 = p_f6;
        *$tmp2504 = $tmp2505;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2505));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2502));
    }
    {
        panda$collections$ImmutableArray** $tmp2507 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2506 = *$tmp2507;
        panda$collections$ImmutableArray** $tmp2508 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2509 = p_f7;
        *$tmp2508 = $tmp2509;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2509));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2506));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    panda$core$String* $tmp2511;
    panda$core$String* $tmp2514;
    panda$collections$ImmutableArray* $tmp2515;
    panda$collections$ImmutableArray* $tmp2518;
    org$pandalanguage$pandac$ASTNode* $tmp2519;
    org$pandalanguage$pandac$ASTNode* $tmp2522;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2510 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2510 = p_f0;
    {
        panda$core$String** $tmp2512 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2511 = *$tmp2512;
        panda$core$String** $tmp2513 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2514 = p_f1;
        *$tmp2513 = $tmp2514;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2514));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2511));
    }
    {
        panda$collections$ImmutableArray** $tmp2516 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2515 = *$tmp2516;
        panda$collections$ImmutableArray** $tmp2517 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2518 = p_f2;
        *$tmp2517 = $tmp2518;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2518));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2515));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2520 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2519 = *$tmp2520;
        org$pandalanguage$pandac$ASTNode** $tmp2521 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2522 = p_f3;
        *$tmp2521 = $tmp2522;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2522));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2519));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2524;
    org$pandalanguage$pandac$ASTNode* $tmp2527;
    panda$core$String* $tmp2528;
    panda$core$String* $tmp2531;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2523 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2523 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2525 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2524 = *$tmp2525;
        org$pandalanguage$pandac$ASTNode** $tmp2526 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2527 = p_f1;
        *$tmp2526 = $tmp2527;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2527));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2524));
    }
    {
        panda$core$String** $tmp2529 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2528 = *$tmp2529;
        panda$core$String** $tmp2530 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2531 = p_f2;
        *$tmp2530 = $tmp2531;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2531));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2528));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2533;
    org$pandalanguage$pandac$ASTNode* $tmp2536;
    panda$collections$ImmutableArray* $tmp2537;
    panda$collections$ImmutableArray* $tmp2540;
    org$pandalanguage$pandac$ASTNode* $tmp2541;
    org$pandalanguage$pandac$ASTNode* $tmp2544;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2532 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2532 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2534 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2533 = *$tmp2534;
        org$pandalanguage$pandac$ASTNode** $tmp2535 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2536 = p_f1;
        *$tmp2535 = $tmp2536;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2536));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2533));
    }
    {
        panda$collections$ImmutableArray** $tmp2538 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2537 = *$tmp2538;
        panda$collections$ImmutableArray** $tmp2539 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2540 = p_f2;
        *$tmp2539 = $tmp2540;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2540));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2537));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2542 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2541 = *$tmp2542;
        org$pandalanguage$pandac$ASTNode** $tmp2543 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2544 = p_f3;
        *$tmp2543 = $tmp2544;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2544));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2541));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, panda$collections$ImmutableArray* p_f0) {
    panda$collections$ImmutableArray* $tmp2545;
    panda$collections$ImmutableArray* $tmp2548;
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableArray** $tmp2546 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp2545 = *$tmp2546;
        panda$collections$ImmutableArray** $tmp2547 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp2548 = p_f0;
        *$tmp2547 = $tmp2548;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2548));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2545));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, org$pandalanguage$pandac$ASTNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    panda$core$String* $tmp2550;
    panda$core$String* $tmp2553;
    org$pandalanguage$pandac$ASTNode* $tmp2554;
    org$pandalanguage$pandac$ASTNode* $tmp2557;
    org$pandalanguage$pandac$ASTNode* $tmp2558;
    org$pandalanguage$pandac$ASTNode* $tmp2561;
    panda$collections$ImmutableArray* $tmp2562;
    panda$collections$ImmutableArray* $tmp2565;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2549 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2549 = p_f0;
    {
        panda$core$String** $tmp2551 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2550 = *$tmp2551;
        panda$core$String** $tmp2552 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2553 = p_f1;
        *$tmp2552 = $tmp2553;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2553));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2550));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2555 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2554 = *$tmp2555;
        org$pandalanguage$pandac$ASTNode** $tmp2556 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2557 = p_f2;
        *$tmp2556 = $tmp2557;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2557));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2554));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2559 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2558 = *$tmp2559;
        org$pandalanguage$pandac$ASTNode** $tmp2560 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2561 = p_f3;
        *$tmp2560 = $tmp2561;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2561));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2558));
    }
    {
        panda$collections$ImmutableArray** $tmp2563 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp2562 = *$tmp2563;
        panda$collections$ImmutableArray** $tmp2564 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp2565 = p_f4;
        *$tmp2564 = $tmp2565;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2565));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2562));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp2567;
    panda$core$String* $tmp2570;
    panda$collections$ImmutableArray* $tmp2571;
    panda$collections$ImmutableArray* $tmp2574;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2566 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2566 = p_f0;
    {
        panda$core$String** $tmp2568 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2567 = *$tmp2568;
        panda$core$String** $tmp2569 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2570 = p_f1;
        *$tmp2569 = $tmp2570;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2570));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2567));
    }
    {
        panda$collections$ImmutableArray** $tmp2572 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2571 = *$tmp2572;
        panda$collections$ImmutableArray** $tmp2573 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2574 = p_f2;
        *$tmp2573 = $tmp2574;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2574));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2571));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp2576;
    panda$core$String* $tmp2579;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2575 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2575 = p_f0;
    {
        panda$core$String** $tmp2577 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2576 = *$tmp2577;
        panda$core$String** $tmp2578 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2579 = p_f1;
        *$tmp2578 = $tmp2579;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2579));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2576));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2581;
    org$pandalanguage$pandac$ASTNode* $tmp2584;
    panda$collections$ImmutableArray* $tmp2585;
    panda$collections$ImmutableArray* $tmp2588;
    org$pandalanguage$pandac$ASTNode* $tmp2589;
    org$pandalanguage$pandac$ASTNode* $tmp2592;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2580 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2580 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2582 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2581 = *$tmp2582;
        org$pandalanguage$pandac$ASTNode** $tmp2583 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2584 = p_f1;
        *$tmp2583 = $tmp2584;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2584));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2581));
    }
    {
        panda$collections$ImmutableArray** $tmp2586 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2585 = *$tmp2586;
        panda$collections$ImmutableArray** $tmp2587 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2588 = p_f2;
        *$tmp2587 = $tmp2588;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2588));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2585));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2590 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2589 = *$tmp2590;
        org$pandalanguage$pandac$ASTNode** $tmp2591 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2592 = p_f3;
        *$tmp2591 = $tmp2592;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2592));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2589));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$UInt64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2593 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2593 = p_f0;
    panda$core$UInt64* $tmp2594 = ((panda$core$UInt64*) ((char*) self->$data + 16));
    *$tmp2594 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0) {
    org$pandalanguage$pandac$IRNode* $tmp2595;
    org$pandalanguage$pandac$IRNode* $tmp2598;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp2596 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp2595 = *$tmp2596;
        org$pandalanguage$pandac$IRNode** $tmp2597 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp2598 = p_f0;
        *$tmp2597 = $tmp2598;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2598));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2595));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp2600;
    panda$core$String* $tmp2603;
    panda$collections$ImmutableArray* $tmp2604;
    panda$collections$ImmutableArray* $tmp2607;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2599 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2599 = p_f0;
    {
        panda$core$String** $tmp2601 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2600 = *$tmp2601;
        panda$core$String** $tmp2602 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2603 = p_f1;
        *$tmp2602 = $tmp2603;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2603));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2600));
    }
    {
        panda$collections$ImmutableArray** $tmp2605 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2604 = *$tmp2605;
        panda$collections$ImmutableArray** $tmp2606 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2607 = p_f2;
        *$tmp2606 = $tmp2607;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2607));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2604));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2609;
    org$pandalanguage$pandac$ASTNode* $tmp2612;
    panda$collections$ImmutableArray* $tmp2613;
    panda$collections$ImmutableArray* $tmp2616;
    panda$collections$ImmutableArray* $tmp2617;
    panda$collections$ImmutableArray* $tmp2620;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2608 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2608 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2610 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2609 = *$tmp2610;
        org$pandalanguage$pandac$ASTNode** $tmp2611 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2612 = p_f1;
        *$tmp2611 = $tmp2612;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2612));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2609));
    }
    {
        panda$collections$ImmutableArray** $tmp2614 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2613 = *$tmp2614;
        panda$collections$ImmutableArray** $tmp2615 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2616 = p_f2;
        *$tmp2615 = $tmp2616;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2616));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2613));
    }
    {
        panda$collections$ImmutableArray** $tmp2618 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2617 = *$tmp2618;
        panda$collections$ImmutableArray** $tmp2619 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2620 = p_f3;
        *$tmp2619 = $tmp2620;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2620));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2617));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$MethodDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, panda$collections$ImmutableArray* p_f6, org$pandalanguage$pandac$ASTNode* p_f7, panda$collections$ImmutableArray* p_f8) {
    org$pandalanguage$pandac$ASTNode* $tmp2622;
    org$pandalanguage$pandac$ASTNode* $tmp2625;
    panda$collections$ImmutableArray* $tmp2626;
    panda$collections$ImmutableArray* $tmp2629;
    panda$core$String* $tmp2631;
    panda$core$String* $tmp2634;
    panda$collections$ImmutableArray* $tmp2635;
    panda$collections$ImmutableArray* $tmp2638;
    panda$collections$ImmutableArray* $tmp2639;
    panda$collections$ImmutableArray* $tmp2642;
    org$pandalanguage$pandac$ASTNode* $tmp2643;
    org$pandalanguage$pandac$ASTNode* $tmp2646;
    panda$collections$ImmutableArray* $tmp2647;
    panda$collections$ImmutableArray* $tmp2650;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2621 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2621 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2623 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2622 = *$tmp2623;
        org$pandalanguage$pandac$ASTNode** $tmp2624 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2625 = p_f1;
        *$tmp2624 = $tmp2625;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2625));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2622));
    }
    {
        panda$collections$ImmutableArray** $tmp2627 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2626 = *$tmp2627;
        panda$collections$ImmutableArray** $tmp2628 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2629 = p_f2;
        *$tmp2628 = $tmp2629;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2629));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2626));
    }
    org$pandalanguage$pandac$MethodDecl$Kind* $tmp2630 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) self->$data + 32));
    *$tmp2630 = p_f3;
    {
        panda$core$String** $tmp2632 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2631 = *$tmp2632;
        panda$core$String** $tmp2633 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2634 = p_f4;
        *$tmp2633 = $tmp2634;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2634));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2631));
    }
    {
        panda$collections$ImmutableArray** $tmp2636 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2635 = *$tmp2636;
        panda$collections$ImmutableArray** $tmp2637 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2638 = p_f5;
        *$tmp2637 = $tmp2638;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2638));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2635));
    }
    {
        panda$collections$ImmutableArray** $tmp2640 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2639 = *$tmp2640;
        panda$collections$ImmutableArray** $tmp2641 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2642 = p_f6;
        *$tmp2641 = $tmp2642;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2642));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2639));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2644 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 64));
        $tmp2643 = *$tmp2644;
        org$pandalanguage$pandac$ASTNode** $tmp2645 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 64));
        $tmp2646 = p_f7;
        *$tmp2645 = $tmp2646;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2646));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2643));
    }
    {
        panda$collections$ImmutableArray** $tmp2648 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 72));
        $tmp2647 = *$tmp2648;
        panda$collections$ImmutableArray** $tmp2649 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 72));
        $tmp2650 = p_f8;
        *$tmp2649 = $tmp2650;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2650));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2647));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    panda$collections$ImmutableArray* $tmp2653;
    panda$collections$ImmutableArray* $tmp2656;
    org$pandalanguage$pandac$ASTNode* $tmp2657;
    org$pandalanguage$pandac$ASTNode* $tmp2660;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2651 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2651 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2652 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp2652 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp2654 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2653 = *$tmp2654;
        panda$collections$ImmutableArray** $tmp2655 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2656 = p_f2;
        *$tmp2655 = $tmp2656;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2656));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2653));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2658 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2657 = *$tmp2658;
        org$pandalanguage$pandac$ASTNode** $tmp2659 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2660 = p_f3;
        *$tmp2659 = $tmp2660;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2660));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2657));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$core$String* $tmp2662;
    panda$core$String* $tmp2665;
    org$pandalanguage$pandac$ASTNode* $tmp2666;
    org$pandalanguage$pandac$ASTNode* $tmp2669;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2661 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2661 = p_f0;
    {
        panda$core$String** $tmp2663 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2662 = *$tmp2663;
        panda$core$String** $tmp2664 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2665 = p_f1;
        *$tmp2664 = $tmp2665;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2665));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2662));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2667 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2666 = *$tmp2667;
        org$pandalanguage$pandac$ASTNode** $tmp2668 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2669 = p_f2;
        *$tmp2668 = $tmp2669;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2669));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2666));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2672;
    org$pandalanguage$pandac$ASTNode* $tmp2675;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2670 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2670 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2671 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp2671 = p_f1;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2673 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2672 = *$tmp2673;
        org$pandalanguage$pandac$ASTNode** $tmp2674 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2675 = p_f2;
        *$tmp2674 = $tmp2675;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2675));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2672));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$ASTNode* p_f4) {
    org$pandalanguage$pandac$ASTNode* $tmp2677;
    org$pandalanguage$pandac$ASTNode* $tmp2680;
    org$pandalanguage$pandac$ASTNode* $tmp2681;
    org$pandalanguage$pandac$ASTNode* $tmp2684;
    org$pandalanguage$pandac$ASTNode* $tmp2686;
    org$pandalanguage$pandac$ASTNode* $tmp2689;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2676 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2676 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2678 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2677 = *$tmp2678;
        org$pandalanguage$pandac$ASTNode** $tmp2679 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2680 = p_f1;
        *$tmp2679 = $tmp2680;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2680));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2677));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2682 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2681 = *$tmp2682;
        org$pandalanguage$pandac$ASTNode** $tmp2683 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2684 = p_f2;
        *$tmp2683 = $tmp2684;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2684));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2681));
    }
    panda$core$Bit* $tmp2685 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp2685 = p_f3;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2687 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        $tmp2686 = *$tmp2687;
        org$pandalanguage$pandac$ASTNode** $tmp2688 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        $tmp2689 = p_f4;
        *$tmp2688 = $tmp2689;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2689));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2686));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Real64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2690 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2690 = p_f0;
    panda$core$Real64* $tmp2691 = ((panda$core$Real64*) ((char*) self->$data + 16));
    *$tmp2691 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    org$pandalanguage$pandac$ASTNode* $tmp2693;
    org$pandalanguage$pandac$ASTNode* $tmp2696;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2692 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2692 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2694 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2693 = *$tmp2694;
        org$pandalanguage$pandac$ASTNode** $tmp2695 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2696 = p_f1;
        *$tmp2695 = $tmp2696;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2696));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2693));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$collections$ImmutableArray* $tmp2698;
    panda$collections$ImmutableArray* $tmp2701;
    org$pandalanguage$pandac$ASTNode* $tmp2702;
    org$pandalanguage$pandac$ASTNode* $tmp2705;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2697 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2697 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2699 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2698 = *$tmp2699;
        panda$collections$ImmutableArray** $tmp2700 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2701 = p_f1;
        *$tmp2700 = $tmp2701;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2701));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2698));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2703 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2702 = *$tmp2703;
        org$pandalanguage$pandac$ASTNode** $tmp2704 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2705 = p_f2;
        *$tmp2704 = $tmp2705;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2705));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2702));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$core$String* $tmp2707;
    panda$core$String* $tmp2710;
    org$pandalanguage$pandac$ASTNode* $tmp2711;
    org$pandalanguage$pandac$ASTNode* $tmp2714;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2706 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2706 = p_f0;
    {
        panda$core$String** $tmp2708 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2707 = *$tmp2708;
        panda$core$String** $tmp2709 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2710 = p_f1;
        *$tmp2709 = $tmp2710;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2710));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2707));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2712 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2711 = *$tmp2712;
        org$pandalanguage$pandac$ASTNode** $tmp2713 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2714 = p_f2;
        *$tmp2713 = $tmp2714;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2714));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2711));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp2717;
    panda$collections$ImmutableArray* $tmp2720;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2715 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2715 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp2716 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp2716 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp2718 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2717 = *$tmp2718;
        panda$collections$ImmutableArray** $tmp2719 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2720 = p_f2;
        *$tmp2719 = $tmp2720;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2720));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2717));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp2722;
    panda$collections$ImmutableArray* $tmp2725;
    panda$collections$ImmutableArray* $tmp2726;
    panda$collections$ImmutableArray* $tmp2729;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2721 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2721 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2723 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2722 = *$tmp2723;
        panda$collections$ImmutableArray** $tmp2724 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2725 = p_f1;
        *$tmp2724 = $tmp2725;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2725));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2722));
    }
    {
        panda$collections$ImmutableArray** $tmp2727 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2726 = *$tmp2727;
        panda$collections$ImmutableArray** $tmp2728 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2729 = p_f2;
        *$tmp2728 = $tmp2729;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2729));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2726));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    panda$core$String* $tmp2731;
    panda$core$String* $tmp2734;
    org$pandalanguage$pandac$ASTNode* $tmp2735;
    org$pandalanguage$pandac$ASTNode* $tmp2738;
    panda$collections$ImmutableArray* $tmp2739;
    panda$collections$ImmutableArray* $tmp2742;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2730 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2730 = p_f0;
    {
        panda$core$String** $tmp2732 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2731 = *$tmp2732;
        panda$core$String** $tmp2733 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2734 = p_f1;
        *$tmp2733 = $tmp2734;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2734));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2731));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2736 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2735 = *$tmp2736;
        org$pandalanguage$pandac$ASTNode** $tmp2737 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2738 = p_f2;
        *$tmp2737 = $tmp2738;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2738));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2735));
    }
    {
        panda$collections$ImmutableArray** $tmp2740 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2739 = *$tmp2740;
        panda$collections$ImmutableArray** $tmp2741 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2742 = p_f3;
        *$tmp2741 = $tmp2742;
        panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2742));
        panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2739));
    }
}





