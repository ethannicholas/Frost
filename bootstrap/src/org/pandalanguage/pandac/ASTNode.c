#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "panda/core/Int64.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Panda.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "panda/core/Bit.h"
#include "panda/collections/ImmutableArray.h"
#include "org/pandalanguage/pandac/ChoiceEntry.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/IRNode.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "panda/core/Real64.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/Iterable.h"
#include "panda/core/Char8.h"
#include "panda/core/UInt8.h"


static panda$core$String $s1;
org$pandalanguage$pandac$ASTNode$class_type org$pandalanguage$pandac$ASTNode$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String, org$pandalanguage$pandac$ASTNode$cleanup, org$pandalanguage$pandac$ASTNode$position$R$org$pandalanguage$pandac$Position} };

typedef org$pandalanguage$pandac$Position (*$fn395)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn524)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn556)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn563)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn571)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn607)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn662)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn701)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn708)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn716)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn750)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn757)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn765)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn801)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn811)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn835)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn842)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn850)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn877)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn903)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn910)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn918)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn940)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn947)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn955)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn997)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1004)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1012)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1069)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1076)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1084)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1114)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1136)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1143)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1151)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1184)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1191)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1199)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1240)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1247)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1255)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1290)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1297)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1305)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1363)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn1517)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1524)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1532)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1550)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1557)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1565)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1602)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1609)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1617)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 32, -9211815390615587804, NULL };
static panda$core$String $s492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s494 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s502 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s504 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s507 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s531 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s534 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s550 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s574 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s589 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s591 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s595 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s609 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s614 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s628 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s635 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s640 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s664 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s667 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s672 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s694 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s719 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s723 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s725 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static panda$core$String $s727 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static panda$core$String $s730 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s734 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s738 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s742 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s744 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s768 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s783 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s785 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s803 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s806 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s827 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s829 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s853 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s857 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 24242135792659305, NULL };
static panda$core$String $s859 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s879 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s882 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s896 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s921 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s958 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s979 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s985 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s987 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s990 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1015 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1035 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1040 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1060 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s1062 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1087 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1092 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s1094 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s1154 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1175 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s1177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1202 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1258 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1262 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s1264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s1271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1308 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s1326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s1345 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1365 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1389 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s1390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s1404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s1425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s1427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s1435 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s1444 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s1462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s1487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s1489 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s1508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s1511 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1542 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1568 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1589 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s1595 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1620 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2 = p_f0;
    {
        panda$core$String** $tmp4 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String* $tmp3 = *$tmp4;
        panda$core$String** $tmp5 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String* $tmp6 = p_f1;
        *$tmp5 = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp3));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp7 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp7 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp9 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode* $tmp8 = *$tmp9;
        org$pandalanguage$pandac$ASTNode** $tmp10 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode* $tmp11 = p_f1;
        *$tmp10 = $tmp11;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp11));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp8));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp13 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$ASTNode* $tmp12 = *$tmp13;
        org$pandalanguage$pandac$ASTNode** $tmp14 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$ASTNode* $tmp15 = p_f2;
        *$tmp14 = $tmp15;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp15));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp12));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$parser$Token$Kind p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp16 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp16 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp18 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode* $tmp17 = *$tmp18;
        org$pandalanguage$pandac$ASTNode** $tmp19 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode* $tmp20 = p_f1;
        *$tmp19 = $tmp20;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp20));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp17));
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp21 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 24));
    *$tmp21 = p_f2;
    {
        org$pandalanguage$pandac$ASTNode** $tmp23 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        org$pandalanguage$pandac$ASTNode* $tmp22 = *$tmp23;
        org$pandalanguage$pandac$ASTNode** $tmp24 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        org$pandalanguage$pandac$ASTNode* $tmp25 = p_f3;
        *$tmp24 = $tmp25;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp25));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp22));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Bit p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp26 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp26 = p_f0;
    panda$core$Bit* $tmp27 = ((panda$core$Bit*) ((char*) self->$data + 16));
    *$tmp27 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp28 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp28 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp30 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        panda$collections$ImmutableArray* $tmp29 = *$tmp30;
        panda$collections$ImmutableArray** $tmp31 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        panda$collections$ImmutableArray* $tmp32 = p_f1;
        *$tmp31 = $tmp32;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp32));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp29));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp33 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp33 = p_f0;
    {
        panda$core$String** $tmp35 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String* $tmp34 = *$tmp35;
        panda$core$String** $tmp36 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String* $tmp37 = p_f1;
        *$tmp36 = $tmp37;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp37));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp34));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp38 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp38 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp40 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode* $tmp39 = *$tmp40;
        org$pandalanguage$pandac$ASTNode** $tmp41 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode* $tmp42 = p_f1;
        *$tmp41 = $tmp42;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp42));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp39));
    }
    {
        panda$collections$ImmutableArray** $tmp44 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp43 = *$tmp44;
        panda$collections$ImmutableArray** $tmp45 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp46 = p_f2;
        *$tmp45 = $tmp46;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp46));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp43));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp47 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp47 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp49 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode* $tmp48 = *$tmp49;
        org$pandalanguage$pandac$ASTNode** $tmp50 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode* $tmp51 = p_f1;
        *$tmp50 = $tmp51;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp51));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp48));
    }
    {
        panda$core$String** $tmp53 = ((panda$core$String**) ((char*) self->$data + 24));
        panda$core$String* $tmp52 = *$tmp53;
        panda$core$String** $tmp54 = ((panda$core$String**) ((char*) self->$data + 24));
        panda$core$String* $tmp55 = p_f2;
        *$tmp54 = $tmp55;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp55));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp52));
    }
    {
        panda$collections$ImmutableArray** $tmp57 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        panda$collections$ImmutableArray* $tmp56 = *$tmp57;
        panda$collections$ImmutableArray** $tmp58 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        panda$collections$ImmutableArray* $tmp59 = p_f3;
        *$tmp58 = $tmp59;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp59));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp56));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp60 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp60 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp62 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode* $tmp61 = *$tmp62;
        org$pandalanguage$pandac$ASTNode** $tmp63 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode* $tmp64 = p_f1;
        *$tmp63 = $tmp64;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp64));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp61));
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp66 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$ChoiceEntry* $tmp65 = *$tmp66;
        org$pandalanguage$pandac$ChoiceEntry** $tmp67 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$ChoiceEntry* $tmp68 = p_f2;
        *$tmp67 = $tmp68;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp68));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp65));
    }
    panda$core$Int64* $tmp69 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp69 = p_f3;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ClassDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, panda$collections$ImmutableArray* p_f6, panda$collections$ImmutableArray* p_f7) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp70 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp70 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp72 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode* $tmp71 = *$tmp72;
        org$pandalanguage$pandac$ASTNode** $tmp73 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode* $tmp74 = p_f1;
        *$tmp73 = $tmp74;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp74));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp71));
    }
    {
        panda$collections$ImmutableArray** $tmp76 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp75 = *$tmp76;
        panda$collections$ImmutableArray** $tmp77 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp78 = p_f2;
        *$tmp77 = $tmp78;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp78));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp75));
    }
    org$pandalanguage$pandac$ClassDecl$Kind* $tmp79 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) self->$data + 32));
    *$tmp79 = p_f3;
    {
        panda$core$String** $tmp81 = ((panda$core$String**) ((char*) self->$data + 40));
        panda$core$String* $tmp80 = *$tmp81;
        panda$core$String** $tmp82 = ((panda$core$String**) ((char*) self->$data + 40));
        panda$core$String* $tmp83 = p_f4;
        *$tmp82 = $tmp83;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp83));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp80));
    }
    {
        panda$collections$ImmutableArray** $tmp85 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        panda$collections$ImmutableArray* $tmp84 = *$tmp85;
        panda$collections$ImmutableArray** $tmp86 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        panda$collections$ImmutableArray* $tmp87 = p_f5;
        *$tmp86 = $tmp87;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp87));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp84));
    }
    {
        panda$collections$ImmutableArray** $tmp89 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        panda$collections$ImmutableArray* $tmp88 = *$tmp89;
        panda$collections$ImmutableArray** $tmp90 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        panda$collections$ImmutableArray* $tmp91 = p_f6;
        *$tmp90 = $tmp91;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp91));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp88));
    }
    {
        panda$collections$ImmutableArray** $tmp93 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        panda$collections$ImmutableArray* $tmp92 = *$tmp93;
        panda$collections$ImmutableArray** $tmp94 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        panda$collections$ImmutableArray* $tmp95 = p_f7;
        *$tmp94 = $tmp95;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp95));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp92));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp96 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp96 = p_f0;
    {
        panda$core$String** $tmp98 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String* $tmp97 = *$tmp98;
        panda$core$String** $tmp99 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String* $tmp100 = p_f1;
        *$tmp99 = $tmp100;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp100));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp97));
    }
    {
        panda$collections$ImmutableArray** $tmp102 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp101 = *$tmp102;
        panda$collections$ImmutableArray** $tmp103 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp104 = p_f2;
        *$tmp103 = $tmp104;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp104));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp101));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp106 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        org$pandalanguage$pandac$ASTNode* $tmp105 = *$tmp106;
        org$pandalanguage$pandac$ASTNode** $tmp107 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        org$pandalanguage$pandac$ASTNode* $tmp108 = p_f3;
        *$tmp107 = $tmp108;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp108));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp105));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp109 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp109 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp111 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode* $tmp110 = *$tmp111;
        org$pandalanguage$pandac$ASTNode** $tmp112 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode* $tmp113 = p_f1;
        *$tmp112 = $tmp113;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp113));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp110));
    }
    {
        panda$core$String** $tmp115 = ((panda$core$String**) ((char*) self->$data + 24));
        panda$core$String* $tmp114 = *$tmp115;
        panda$core$String** $tmp116 = ((panda$core$String**) ((char*) self->$data + 24));
        panda$core$String* $tmp117 = p_f2;
        *$tmp116 = $tmp117;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp117));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp114));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp118 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp118 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp120 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode* $tmp119 = *$tmp120;
        org$pandalanguage$pandac$ASTNode** $tmp121 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode* $tmp122 = p_f1;
        *$tmp121 = $tmp122;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp122));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp119));
    }
    {
        panda$collections$ImmutableArray** $tmp124 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp123 = *$tmp124;
        panda$collections$ImmutableArray** $tmp125 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp126 = p_f2;
        *$tmp125 = $tmp126;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp126));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp123));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp128 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        org$pandalanguage$pandac$ASTNode* $tmp127 = *$tmp128;
        org$pandalanguage$pandac$ASTNode** $tmp129 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        org$pandalanguage$pandac$ASTNode* $tmp130 = p_f3;
        *$tmp129 = $tmp130;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp130));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp127));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, panda$collections$ImmutableArray* p_f0) {
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableArray** $tmp132 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        panda$collections$ImmutableArray* $tmp131 = *$tmp132;
        panda$collections$ImmutableArray** $tmp133 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        panda$collections$ImmutableArray* $tmp134 = p_f0;
        *$tmp133 = $tmp134;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp134));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp131));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, org$pandalanguage$pandac$ASTNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp135 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp135 = p_f0;
    {
        panda$core$String** $tmp137 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String* $tmp136 = *$tmp137;
        panda$core$String** $tmp138 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String* $tmp139 = p_f1;
        *$tmp138 = $tmp139;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp139));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp136));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp141 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$ASTNode* $tmp140 = *$tmp141;
        org$pandalanguage$pandac$ASTNode** $tmp142 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$ASTNode* $tmp143 = p_f2;
        *$tmp142 = $tmp143;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp143));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp140));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp145 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        org$pandalanguage$pandac$ASTNode* $tmp144 = *$tmp145;
        org$pandalanguage$pandac$ASTNode** $tmp146 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        org$pandalanguage$pandac$ASTNode* $tmp147 = p_f3;
        *$tmp146 = $tmp147;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp147));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp144));
    }
    {
        panda$collections$ImmutableArray** $tmp149 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        panda$collections$ImmutableArray* $tmp148 = *$tmp149;
        panda$collections$ImmutableArray** $tmp150 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        panda$collections$ImmutableArray* $tmp151 = p_f4;
        *$tmp150 = $tmp151;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp151));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp148));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp152 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp152 = p_f0;
    {
        panda$core$String** $tmp154 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String* $tmp153 = *$tmp154;
        panda$core$String** $tmp155 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String* $tmp156 = p_f1;
        *$tmp155 = $tmp156;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp156));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp153));
    }
    {
        panda$collections$ImmutableArray** $tmp158 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp157 = *$tmp158;
        panda$collections$ImmutableArray** $tmp159 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp160 = p_f2;
        *$tmp159 = $tmp160;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp160));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp157));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp161 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp161 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp163 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode* $tmp162 = *$tmp163;
        org$pandalanguage$pandac$ASTNode** $tmp164 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode* $tmp165 = p_f1;
        *$tmp164 = $tmp165;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp165));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp162));
    }
    {
        panda$collections$ImmutableArray** $tmp167 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp166 = *$tmp167;
        panda$collections$ImmutableArray** $tmp168 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp169 = p_f2;
        *$tmp168 = $tmp169;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp169));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp166));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp171 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        org$pandalanguage$pandac$ASTNode* $tmp170 = *$tmp171;
        org$pandalanguage$pandac$ASTNode** $tmp172 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        org$pandalanguage$pandac$ASTNode* $tmp173 = p_f3;
        *$tmp172 = $tmp173;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp173));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp170));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$UInt64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp174 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp174 = p_f0;
    panda$core$UInt64* $tmp175 = ((panda$core$UInt64*) ((char*) self->$data + 16));
    *$tmp175 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0) {
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp177 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        org$pandalanguage$pandac$IRNode* $tmp176 = *$tmp177;
        org$pandalanguage$pandac$IRNode** $tmp178 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        org$pandalanguage$pandac$IRNode* $tmp179 = p_f0;
        *$tmp178 = $tmp179;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp179));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp176));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp180 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp180 = p_f0;
    {
        panda$core$String** $tmp182 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String* $tmp181 = *$tmp182;
        panda$core$String** $tmp183 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String* $tmp184 = p_f1;
        *$tmp183 = $tmp184;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp184));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp181));
    }
    {
        panda$collections$ImmutableArray** $tmp186 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp185 = *$tmp186;
        panda$collections$ImmutableArray** $tmp187 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp188 = p_f2;
        *$tmp187 = $tmp188;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp188));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp185));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp189 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp189 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp191 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode* $tmp190 = *$tmp191;
        org$pandalanguage$pandac$ASTNode** $tmp192 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode* $tmp193 = p_f1;
        *$tmp192 = $tmp193;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp193));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp190));
    }
    {
        panda$collections$ImmutableArray** $tmp195 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp194 = *$tmp195;
        panda$collections$ImmutableArray** $tmp196 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp197 = p_f2;
        *$tmp196 = $tmp197;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp197));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp194));
    }
    {
        panda$collections$ImmutableArray** $tmp199 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        panda$collections$ImmutableArray* $tmp198 = *$tmp199;
        panda$collections$ImmutableArray** $tmp200 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        panda$collections$ImmutableArray* $tmp201 = p_f3;
        *$tmp200 = $tmp201;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp201));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp198));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$MethodDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, org$pandalanguage$pandac$ASTNode* p_f6, panda$collections$ImmutableArray* p_f7) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp202 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp202 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp204 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode* $tmp203 = *$tmp204;
        org$pandalanguage$pandac$ASTNode** $tmp205 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode* $tmp206 = p_f1;
        *$tmp205 = $tmp206;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp206));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp203));
    }
    {
        panda$collections$ImmutableArray** $tmp208 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp207 = *$tmp208;
        panda$collections$ImmutableArray** $tmp209 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp210 = p_f2;
        *$tmp209 = $tmp210;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp210));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp207));
    }
    org$pandalanguage$pandac$MethodDecl$Kind* $tmp211 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) self->$data + 32));
    *$tmp211 = p_f3;
    {
        panda$core$String** $tmp213 = ((panda$core$String**) ((char*) self->$data + 40));
        panda$core$String* $tmp212 = *$tmp213;
        panda$core$String** $tmp214 = ((panda$core$String**) ((char*) self->$data + 40));
        panda$core$String* $tmp215 = p_f4;
        *$tmp214 = $tmp215;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp215));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp212));
    }
    {
        panda$collections$ImmutableArray** $tmp217 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        panda$collections$ImmutableArray* $tmp216 = *$tmp217;
        panda$collections$ImmutableArray** $tmp218 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        panda$collections$ImmutableArray* $tmp219 = p_f5;
        *$tmp218 = $tmp219;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp219));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp216));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp221 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 56));
        org$pandalanguage$pandac$ASTNode* $tmp220 = *$tmp221;
        org$pandalanguage$pandac$ASTNode** $tmp222 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 56));
        org$pandalanguage$pandac$ASTNode* $tmp223 = p_f6;
        *$tmp222 = $tmp223;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp223));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp220));
    }
    {
        panda$collections$ImmutableArray** $tmp225 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        panda$collections$ImmutableArray* $tmp224 = *$tmp225;
        panda$collections$ImmutableArray** $tmp226 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        panda$collections$ImmutableArray* $tmp227 = p_f7;
        *$tmp226 = $tmp227;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp227));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp224));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp228 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp228 = p_f0;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp229 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp229 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp231 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode* $tmp230 = *$tmp231;
        org$pandalanguage$pandac$ASTNode** $tmp232 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode* $tmp233 = p_f1;
        *$tmp232 = $tmp233;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp233));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp230));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp234 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp234 = p_f0;
    {
        panda$core$String** $tmp236 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String* $tmp235 = *$tmp236;
        panda$core$String** $tmp237 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String* $tmp238 = p_f1;
        *$tmp237 = $tmp238;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp238));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp235));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp240 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$ASTNode* $tmp239 = *$tmp240;
        org$pandalanguage$pandac$ASTNode** $tmp241 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$ASTNode* $tmp242 = p_f2;
        *$tmp241 = $tmp242;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp242));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp239));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp243 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp243 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp244 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp244 = p_f1;
    {
        org$pandalanguage$pandac$ASTNode** $tmp246 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$ASTNode* $tmp245 = *$tmp246;
        org$pandalanguage$pandac$ASTNode** $tmp247 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$ASTNode* $tmp248 = p_f2;
        *$tmp247 = $tmp248;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp248));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp245));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$ASTNode* p_f4) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp249 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp249 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp251 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode* $tmp250 = *$tmp251;
        org$pandalanguage$pandac$ASTNode** $tmp252 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode* $tmp253 = p_f1;
        *$tmp252 = $tmp253;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp253));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp250));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp255 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$ASTNode* $tmp254 = *$tmp255;
        org$pandalanguage$pandac$ASTNode** $tmp256 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$ASTNode* $tmp257 = p_f2;
        *$tmp256 = $tmp257;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp257));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp254));
    }
    panda$core$Bit* $tmp258 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp258 = p_f3;
    {
        org$pandalanguage$pandac$ASTNode** $tmp260 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        org$pandalanguage$pandac$ASTNode* $tmp259 = *$tmp260;
        org$pandalanguage$pandac$ASTNode** $tmp261 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        org$pandalanguage$pandac$ASTNode* $tmp262 = p_f4;
        *$tmp261 = $tmp262;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp262));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp259));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Real64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp263 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp263 = p_f0;
    panda$core$Real64* $tmp264 = ((panda$core$Real64*) ((char*) self->$data + 16));
    *$tmp264 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp265 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp265 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp267 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode* $tmp266 = *$tmp267;
        org$pandalanguage$pandac$ASTNode** $tmp268 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        org$pandalanguage$pandac$ASTNode* $tmp269 = p_f1;
        *$tmp268 = $tmp269;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp269));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp266));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp270 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp270 = p_f0;
    {
        panda$core$String** $tmp272 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String* $tmp271 = *$tmp272;
        panda$core$String** $tmp273 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String* $tmp274 = p_f1;
        *$tmp273 = $tmp274;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp274));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp271));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp276 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$ASTNode* $tmp275 = *$tmp276;
        org$pandalanguage$pandac$ASTNode** $tmp277 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$ASTNode* $tmp278 = p_f2;
        *$tmp277 = $tmp278;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp278));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp275));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp279 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp279 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp280 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp280 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp282 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp281 = *$tmp282;
        panda$collections$ImmutableArray** $tmp283 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp284 = p_f2;
        *$tmp283 = $tmp284;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp284));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp281));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp285 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp285 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp287 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        panda$collections$ImmutableArray* $tmp286 = *$tmp287;
        panda$collections$ImmutableArray** $tmp288 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        panda$collections$ImmutableArray* $tmp289 = p_f1;
        *$tmp288 = $tmp289;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp289));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp286));
    }
    {
        panda$collections$ImmutableArray** $tmp291 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp290 = *$tmp291;
        panda$collections$ImmutableArray** $tmp292 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        panda$collections$ImmutableArray* $tmp293 = p_f2;
        *$tmp292 = $tmp293;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp293));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp290));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp294 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp294 = p_f0;
    {
        panda$core$String** $tmp296 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String* $tmp295 = *$tmp296;
        panda$core$String** $tmp297 = ((panda$core$String**) ((char*) self->$data + 16));
        panda$core$String* $tmp298 = p_f1;
        *$tmp297 = $tmp298;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp298));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp295));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp300 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$ASTNode* $tmp299 = *$tmp300;
        org$pandalanguage$pandac$ASTNode** $tmp301 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        org$pandalanguage$pandac$ASTNode* $tmp302 = p_f2;
        *$tmp301 = $tmp302;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp302));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp299));
    }
    {
        panda$collections$ImmutableArray** $tmp304 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        panda$collections$ImmutableArray* $tmp303 = *$tmp304;
        panda$collections$ImmutableArray** $tmp305 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        panda$collections$ImmutableArray* $tmp306 = p_f3;
        *$tmp305 = $tmp306;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp306));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp303));
    }
}
org$pandalanguage$pandac$Position org$pandalanguage$pandac$ASTNode$position$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$77_9307;
    org$pandalanguage$pandac$Position position309;
    org$pandalanguage$pandac$Position position313;
    org$pandalanguage$pandac$Position position317;
    org$pandalanguage$pandac$Position position321;
    org$pandalanguage$pandac$Position position325;
    org$pandalanguage$pandac$Position position329;
    org$pandalanguage$pandac$Position position333;
    org$pandalanguage$pandac$Position position337;
    org$pandalanguage$pandac$Position position341;
    org$pandalanguage$pandac$Position position345;
    org$pandalanguage$pandac$Position position349;
    org$pandalanguage$pandac$Position position353;
    org$pandalanguage$pandac$Position position357;
    org$pandalanguage$pandac$Position position361;
    org$pandalanguage$pandac$Position position365;
    org$pandalanguage$pandac$Position $tmp370;
    org$pandalanguage$pandac$Position position372;
    org$pandalanguage$pandac$Position position376;
    org$pandalanguage$pandac$Position position380;
    org$pandalanguage$pandac$Position position384;
    org$pandalanguage$pandac$Position position388;
    org$pandalanguage$pandac$IRNode* ir392;
    org$pandalanguage$pandac$Position position398;
    org$pandalanguage$pandac$Position position402;
    org$pandalanguage$pandac$Position position406;
    org$pandalanguage$pandac$Position position410;
    org$pandalanguage$pandac$Position position414;
    org$pandalanguage$pandac$Position position418;
    org$pandalanguage$pandac$Position position422;
    org$pandalanguage$pandac$Position position426;
    org$pandalanguage$pandac$Position position430;
    org$pandalanguage$pandac$Position position434;
    org$pandalanguage$pandac$Position position438;
    org$pandalanguage$pandac$Position position442;
    org$pandalanguage$pandac$Position position446;
    org$pandalanguage$pandac$Position position450;
    org$pandalanguage$pandac$Position position454;
    org$pandalanguage$pandac$Position position458;
    org$pandalanguage$pandac$Position position462;
    org$pandalanguage$pandac$Position position466;
    org$pandalanguage$pandac$Position position470;
    org$pandalanguage$pandac$Position position474;
    {
        $match$77_9307 = self;
        panda$core$Bit $tmp308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp308.value) {
        {
            org$pandalanguage$pandac$Position* $tmp310 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position309 = *$tmp310;
            org$pandalanguage$pandac$Position $tmp311 = position309;
            return $tmp311;
        }
        }
        else {
        panda$core$Bit $tmp312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp312.value) {
        {
            org$pandalanguage$pandac$Position* $tmp314 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position313 = *$tmp314;
            org$pandalanguage$pandac$Position $tmp315 = position313;
            return $tmp315;
        }
        }
        else {
        panda$core$Bit $tmp316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp316.value) {
        {
            org$pandalanguage$pandac$Position* $tmp318 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position317 = *$tmp318;
            org$pandalanguage$pandac$Position $tmp319 = position317;
            return $tmp319;
        }
        }
        else {
        panda$core$Bit $tmp320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp320.value) {
        {
            org$pandalanguage$pandac$Position* $tmp322 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position321 = *$tmp322;
            org$pandalanguage$pandac$Position $tmp323 = position321;
            return $tmp323;
        }
        }
        else {
        panda$core$Bit $tmp324 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp324.value) {
        {
            org$pandalanguage$pandac$Position* $tmp326 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position325 = *$tmp326;
            org$pandalanguage$pandac$Position $tmp327 = position325;
            return $tmp327;
        }
        }
        else {
        panda$core$Bit $tmp328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp328.value) {
        {
            org$pandalanguage$pandac$Position* $tmp330 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position329 = *$tmp330;
            org$pandalanguage$pandac$Position $tmp331 = position329;
            return $tmp331;
        }
        }
        else {
        panda$core$Bit $tmp332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp332.value) {
        {
            org$pandalanguage$pandac$Position* $tmp334 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position333 = *$tmp334;
            org$pandalanguage$pandac$Position $tmp335 = position333;
            return $tmp335;
        }
        }
        else {
        panda$core$Bit $tmp336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp336.value) {
        {
            org$pandalanguage$pandac$Position* $tmp338 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position337 = *$tmp338;
            org$pandalanguage$pandac$Position $tmp339 = position337;
            return $tmp339;
        }
        }
        else {
        panda$core$Bit $tmp340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp340.value) {
        {
            org$pandalanguage$pandac$Position* $tmp342 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position341 = *$tmp342;
            org$pandalanguage$pandac$Position $tmp343 = position341;
            return $tmp343;
        }
        }
        else {
        panda$core$Bit $tmp344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp344.value) {
        {
            org$pandalanguage$pandac$Position* $tmp346 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position345 = *$tmp346;
            org$pandalanguage$pandac$Position $tmp347 = position345;
            return $tmp347;
        }
        }
        else {
        panda$core$Bit $tmp348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp348.value) {
        {
            org$pandalanguage$pandac$Position* $tmp350 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position349 = *$tmp350;
            org$pandalanguage$pandac$Position $tmp351 = position349;
            return $tmp351;
        }
        }
        else {
        panda$core$Bit $tmp352 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp352.value) {
        {
            org$pandalanguage$pandac$Position* $tmp354 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position353 = *$tmp354;
            org$pandalanguage$pandac$Position $tmp355 = position353;
            return $tmp355;
        }
        }
        else {
        panda$core$Bit $tmp356 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp356.value) {
        {
            org$pandalanguage$pandac$Position* $tmp358 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position357 = *$tmp358;
            org$pandalanguage$pandac$Position $tmp359 = position357;
            return $tmp359;
        }
        }
        else {
        panda$core$Bit $tmp360 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp360.value) {
        {
            org$pandalanguage$pandac$Position* $tmp362 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position361 = *$tmp362;
            org$pandalanguage$pandac$Position $tmp363 = position361;
            return $tmp363;
        }
        }
        else {
        panda$core$Bit $tmp364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp364.value) {
        {
            org$pandalanguage$pandac$Position* $tmp366 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position365 = *$tmp366;
            org$pandalanguage$pandac$Position $tmp367 = position365;
            return $tmp367;
        }
        }
        else {
        panda$core$Bit $tmp368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp368.value) {
        {
            org$pandalanguage$pandac$Position$init(&$tmp370);
            org$pandalanguage$pandac$Position $tmp369 = $tmp370;
            return $tmp369;
        }
        }
        else {
        panda$core$Bit $tmp371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp371.value) {
        {
            org$pandalanguage$pandac$Position* $tmp373 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position372 = *$tmp373;
            org$pandalanguage$pandac$Position $tmp374 = position372;
            return $tmp374;
        }
        }
        else {
        panda$core$Bit $tmp375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp375.value) {
        {
            org$pandalanguage$pandac$Position* $tmp377 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position376 = *$tmp377;
            org$pandalanguage$pandac$Position $tmp378 = position376;
            return $tmp378;
        }
        }
        else {
        panda$core$Bit $tmp379 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp379.value) {
        {
            org$pandalanguage$pandac$Position* $tmp381 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position380 = *$tmp381;
            org$pandalanguage$pandac$Position $tmp382 = position380;
            return $tmp382;
        }
        }
        else {
        panda$core$Bit $tmp383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp383.value) {
        {
            org$pandalanguage$pandac$Position* $tmp385 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position384 = *$tmp385;
            org$pandalanguage$pandac$Position $tmp386 = position384;
            return $tmp386;
        }
        }
        else {
        panda$core$Bit $tmp387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp387.value) {
        {
            org$pandalanguage$pandac$Position* $tmp389 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position388 = *$tmp389;
            org$pandalanguage$pandac$Position $tmp390 = position388;
            return $tmp390;
        }
        }
        else {
        panda$core$Bit $tmp391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp391.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp393 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$77_9307->$data + 0));
            ir392 = *$tmp393;
            org$pandalanguage$pandac$Position $tmp396 = (($fn395) ir392->$class->vtable[3])(ir392);
            org$pandalanguage$pandac$Position $tmp394 = $tmp396;
            return $tmp394;
        }
        }
        else {
        panda$core$Bit $tmp397 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp397.value) {
        {
            org$pandalanguage$pandac$Position* $tmp399 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position398 = *$tmp399;
            org$pandalanguage$pandac$Position $tmp400 = position398;
            return $tmp400;
        }
        }
        else {
        panda$core$Bit $tmp401 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp401.value) {
        {
            org$pandalanguage$pandac$Position* $tmp403 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position402 = *$tmp403;
            org$pandalanguage$pandac$Position $tmp404 = position402;
            return $tmp404;
        }
        }
        else {
        panda$core$Bit $tmp405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp405.value) {
        {
            org$pandalanguage$pandac$Position* $tmp407 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position406 = *$tmp407;
            org$pandalanguage$pandac$Position $tmp408 = position406;
            return $tmp408;
        }
        }
        else {
        panda$core$Bit $tmp409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp409.value) {
        {
            org$pandalanguage$pandac$Position* $tmp411 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position410 = *$tmp411;
            org$pandalanguage$pandac$Position $tmp412 = position410;
            return $tmp412;
        }
        }
        else {
        panda$core$Bit $tmp413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp413.value) {
        {
            org$pandalanguage$pandac$Position* $tmp415 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position414 = *$tmp415;
            org$pandalanguage$pandac$Position $tmp416 = position414;
            return $tmp416;
        }
        }
        else {
        panda$core$Bit $tmp417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp417.value) {
        {
            org$pandalanguage$pandac$Position* $tmp419 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position418 = *$tmp419;
            org$pandalanguage$pandac$Position $tmp420 = position418;
            return $tmp420;
        }
        }
        else {
        panda$core$Bit $tmp421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp421.value) {
        {
            org$pandalanguage$pandac$Position* $tmp423 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position422 = *$tmp423;
            org$pandalanguage$pandac$Position $tmp424 = position422;
            return $tmp424;
        }
        }
        else {
        panda$core$Bit $tmp425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp425.value) {
        {
            org$pandalanguage$pandac$Position* $tmp427 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position426 = *$tmp427;
            org$pandalanguage$pandac$Position $tmp428 = position426;
            return $tmp428;
        }
        }
        else {
        panda$core$Bit $tmp429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp429.value) {
        {
            org$pandalanguage$pandac$Position* $tmp431 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position430 = *$tmp431;
            org$pandalanguage$pandac$Position $tmp432 = position430;
            return $tmp432;
        }
        }
        else {
        panda$core$Bit $tmp433 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp433.value) {
        {
            org$pandalanguage$pandac$Position* $tmp435 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position434 = *$tmp435;
            org$pandalanguage$pandac$Position $tmp436 = position434;
            return $tmp436;
        }
        }
        else {
        panda$core$Bit $tmp437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp437.value) {
        {
            org$pandalanguage$pandac$Position* $tmp439 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position438 = *$tmp439;
            org$pandalanguage$pandac$Position $tmp440 = position438;
            return $tmp440;
        }
        }
        else {
        panda$core$Bit $tmp441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp441.value) {
        {
            org$pandalanguage$pandac$Position* $tmp443 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position442 = *$tmp443;
            org$pandalanguage$pandac$Position $tmp444 = position442;
            return $tmp444;
        }
        }
        else {
        panda$core$Bit $tmp445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp445.value) {
        {
            org$pandalanguage$pandac$Position* $tmp447 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position446 = *$tmp447;
            org$pandalanguage$pandac$Position $tmp448 = position446;
            return $tmp448;
        }
        }
        else {
        panda$core$Bit $tmp449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp449.value) {
        {
            org$pandalanguage$pandac$Position* $tmp451 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position450 = *$tmp451;
            org$pandalanguage$pandac$Position $tmp452 = position450;
            return $tmp452;
        }
        }
        else {
        panda$core$Bit $tmp453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp453.value) {
        {
            org$pandalanguage$pandac$Position* $tmp455 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position454 = *$tmp455;
            org$pandalanguage$pandac$Position $tmp456 = position454;
            return $tmp456;
        }
        }
        else {
        panda$core$Bit $tmp457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp457.value) {
        {
            org$pandalanguage$pandac$Position* $tmp459 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position458 = *$tmp459;
            org$pandalanguage$pandac$Position $tmp460 = position458;
            return $tmp460;
        }
        }
        else {
        panda$core$Bit $tmp461 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp461.value) {
        {
            org$pandalanguage$pandac$Position* $tmp463 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position462 = *$tmp463;
            org$pandalanguage$pandac$Position $tmp464 = position462;
            return $tmp464;
        }
        }
        else {
        panda$core$Bit $tmp465 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp465.value) {
        {
            org$pandalanguage$pandac$Position* $tmp467 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position466 = *$tmp467;
            org$pandalanguage$pandac$Position $tmp468 = position466;
            return $tmp468;
        }
        }
        else {
        panda$core$Bit $tmp469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp469.value) {
        {
            org$pandalanguage$pandac$Position* $tmp471 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position470 = *$tmp471;
            org$pandalanguage$pandac$Position $tmp472 = position470;
            return $tmp472;
        }
        }
        else {
        panda$core$Bit $tmp473 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$77_9307->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp473.value) {
        {
            org$pandalanguage$pandac$Position* $tmp475 = ((org$pandalanguage$pandac$Position*) ((char*) $match$77_9307->$data + 0));
            position474 = *$tmp475;
            org$pandalanguage$pandac$Position $tmp476 = position474;
            return $tmp476;
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
panda$core$String* org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$168_9477;
    panda$core$String* name479;
    org$pandalanguage$pandac$ASTNode* test484;
    org$pandalanguage$pandac$ASTNode* msg486;
    org$pandalanguage$pandac$ASTNode* left510;
    org$pandalanguage$pandac$parser$Token$Kind op512;
    org$pandalanguage$pandac$ASTNode* right514;
    panda$core$Bit value537;
    panda$collections$ImmutableArray* statements544;
    panda$core$MutableString* result546;
    panda$collections$Iterator* Iter$182$17551;
    org$pandalanguage$pandac$ASTNode* s566;
    panda$core$Char8 $tmp576;
    panda$core$String* tmp1577;
    panda$core$String* label583;
    org$pandalanguage$pandac$ASTNode* target597;
    panda$collections$ImmutableArray* args599;
    org$pandalanguage$pandac$ASTNode* dc617;
    panda$core$String* name619;
    panda$collections$ImmutableArray* fields621;
    panda$core$MutableString* result623;
    panda$core$String* tmp2642;
    org$pandalanguage$pandac$ASTNode* base648;
    org$pandalanguage$pandac$ChoiceEntry* ce650;
    panda$core$Int64 index652;
    org$pandalanguage$pandac$ASTNode* dc675;
    panda$collections$ImmutableArray* annotations677;
    org$pandalanguage$pandac$ClassDecl$Kind kind679;
    panda$core$String* name681;
    panda$collections$ImmutableArray* generics683;
    panda$collections$ImmutableArray* supertypes685;
    panda$collections$ImmutableArray* members687;
    panda$core$MutableString* result689;
    panda$collections$Iterator* Iter$208$17696;
    org$pandalanguage$pandac$ASTNode* a711;
    org$pandalanguage$pandac$ClassDecl$Kind $match$211_17721;
    panda$collections$Iterator* Iter$224$17745;
    org$pandalanguage$pandac$ASTNode* m760;
    panda$core$Char8 $tmp770;
    panda$core$String* tmp3771;
    panda$core$String* label777;
    org$pandalanguage$pandac$ASTNode* target791;
    org$pandalanguage$pandac$ASTNode* value793;
    panda$core$String* label814;
    panda$collections$ImmutableArray* statements816;
    org$pandalanguage$pandac$ASTNode* test818;
    panda$core$MutableString* result820;
    panda$collections$Iterator* Iter$245$17830;
    org$pandalanguage$pandac$ASTNode* s845;
    panda$core$String* tmp4861;
    org$pandalanguage$pandac$ASTNode* base867;
    panda$core$String* field869;
    org$pandalanguage$pandac$ASTNode* dc885;
    panda$collections$ImmutableArray* annotations887;
    org$pandalanguage$pandac$ASTNode* decl889;
    panda$core$MutableString* result891;
    panda$collections$Iterator* Iter$257$17898;
    org$pandalanguage$pandac$ASTNode* a913;
    panda$core$String* tmp5923;
    panda$collections$ImmutableArray* entries929;
    panda$core$MutableString* result931;
    panda$collections$Iterator* Iter$264$17935;
    org$pandalanguage$pandac$ASTNode* e950;
    panda$core$String* tmp6960;
    panda$core$String* label966;
    org$pandalanguage$pandac$ASTNode* target968;
    org$pandalanguage$pandac$ASTNode* list970;
    panda$collections$ImmutableArray* statements972;
    panda$core$MutableString* result974;
    panda$collections$Iterator* Iter$274$17992;
    org$pandalanguage$pandac$ASTNode* s1007;
    panda$core$Char8 $tmp1017;
    panda$core$String* tmp71018;
    panda$core$String* name1024;
    panda$collections$ImmutableArray* subtypes1026;
    panda$core$String* name1043;
    org$pandalanguage$pandac$ASTNode* test1048;
    panda$collections$ImmutableArray* ifTrue1050;
    org$pandalanguage$pandac$ASTNode* ifFalse1052;
    panda$core$MutableString* result1054;
    panda$collections$Iterator* Iter$285$171064;
    org$pandalanguage$pandac$ASTNode* s1079;
    panda$core$Char8 $tmp1089;
    panda$core$String* tmp81096;
    panda$core$UInt64 value1102;
    org$pandalanguage$pandac$IRNode* ir1109;
    panda$core$String* label1117;
    panda$collections$ImmutableArray* statements1119;
    panda$core$MutableString* result1121;
    panda$collections$Iterator* Iter$303$171131;
    org$pandalanguage$pandac$ASTNode* s1146;
    panda$core$Char8 $tmp1156;
    panda$core$String* tmp91157;
    org$pandalanguage$pandac$ASTNode* value1163;
    panda$collections$ImmutableArray* whens1165;
    panda$collections$ImmutableArray* other1167;
    panda$core$MutableString* result1169;
    panda$collections$Iterator* Iter$310$171179;
    org$pandalanguage$pandac$ASTNode* w1194;
    panda$core$Char8 $tmp1207;
    panda$core$String* tmp101208;
    org$pandalanguage$pandac$ASTNode* dc1214;
    panda$collections$ImmutableArray* annotations1216;
    org$pandalanguage$pandac$MethodDecl$Kind kind1218;
    panda$core$String* name1220;
    panda$collections$ImmutableArray* parameters1222;
    org$pandalanguage$pandac$ASTNode* returnType1224;
    panda$collections$ImmutableArray* statements1226;
    panda$core$MutableString* result1228;
    panda$collections$Iterator* Iter$323$171235;
    org$pandalanguage$pandac$ASTNode* a1250;
    org$pandalanguage$pandac$MethodDecl$Kind $match$326_171260;
    panda$collections$Iterator* Iter$337$211285;
    org$pandalanguage$pandac$ASTNode* s1300;
    panda$core$Char8 $tmp1310;
    panda$core$String* tmp111311;
    org$pandalanguage$pandac$ASTNode* base1321;
    panda$core$String* name1329;
    panda$core$String* name1334;
    org$pandalanguage$pandac$ASTNode* type1336;
    org$pandalanguage$pandac$parser$Token$Kind kind1351;
    org$pandalanguage$pandac$ASTNode* base1353;
    org$pandalanguage$pandac$ASTNode* start1371;
    org$pandalanguage$pandac$ASTNode* end1373;
    panda$core$Bit inclusive1375;
    org$pandalanguage$pandac$ASTNode* step1377;
    panda$core$MutableString* result1379;
    panda$core$String* tmp121406;
    panda$core$Real64 value1412;
    org$pandalanguage$pandac$ASTNode* value1419;
    panda$core$String* str1437;
    panda$core$String* name1446;
    panda$core$String* name1451;
    org$pandalanguage$pandac$ASTNode* type1453;
    panda$core$String* name1470;
    org$pandalanguage$pandac$Variable$Kind kind1475;
    panda$collections$ImmutableArray* decls1477;
    panda$core$MutableString* result1479;
    org$pandalanguage$pandac$Variable$Kind $match$395_171483;
    panda$core$String* tmp131494;
    panda$collections$ImmutableArray* tests1500;
    panda$collections$ImmutableArray* statements1502;
    panda$core$MutableString* result1504;
    panda$core$String* separator1509;
    panda$collections$Iterator* Iter$406$171512;
    org$pandalanguage$pandac$ASTNode* t1527;
    panda$core$Char8 $tmp1544;
    panda$collections$Iterator* Iter$410$171545;
    org$pandalanguage$pandac$ASTNode* s1560;
    panda$core$String* tmp141570;
    panda$core$String* label1576;
    org$pandalanguage$pandac$ASTNode* test1578;
    panda$collections$ImmutableArray* statements1580;
    panda$core$MutableString* result1582;
    panda$collections$Iterator* Iter$420$171597;
    org$pandalanguage$pandac$ASTNode* s1612;
    panda$core$Char8 $tmp1622;
    panda$core$String* tmp151623;
    {
        $match$168_9477 = self;
        panda$core$Bit $tmp478 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp478.value) {
        {
            panda$core$String** $tmp480 = ((panda$core$String**) ((char*) $match$168_9477->$data + 16));
            name479 = *$tmp480;
            panda$core$String* $tmp482 = name479;
            panda$core$String* $tmp481 = $tmp482;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp482));
            return $tmp481;
        }
        }
        else {
        panda$core$Bit $tmp483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp483.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp485 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9477->$data + 16));
            test484 = *$tmp485;
            org$pandalanguage$pandac$ASTNode** $tmp487 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9477->$data + 24));
            msg486 = *$tmp487;
            if (((panda$core$Bit) { msg486 == NULL }).value) {
            {
                panda$core$String* $tmp493 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s492, ((panda$core$Object*) test484));
                panda$core$String* $tmp491 = $tmp493;
                panda$core$String* $tmp495 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp491, &$s494);
                panda$core$String* $tmp490 = $tmp495;
                panda$core$String* $tmp489 = $tmp490;
                panda$core$String* $tmp488 = $tmp489;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp489));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp490));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp491));
                return $tmp488;
            }
            }
            panda$core$String* $tmp503 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s502, ((panda$core$Object*) test484));
            panda$core$String* $tmp501 = $tmp503;
            panda$core$String* $tmp505 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp501, &$s504);
            panda$core$String* $tmp500 = $tmp505;
            panda$core$String* $tmp506 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp500, ((panda$core$Object*) msg486));
            panda$core$String* $tmp499 = $tmp506;
            panda$core$String* $tmp508 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp499, &$s507);
            panda$core$String* $tmp498 = $tmp508;
            panda$core$String* $tmp497 = $tmp498;
            panda$core$String* $tmp496 = $tmp497;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp497));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp498));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp499));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp500));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp501));
            return $tmp496;
        }
        }
        else {
        panda$core$Bit $tmp509 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp509.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp511 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9477->$data + 16));
            left510 = *$tmp511;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp513 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$168_9477->$data + 24));
            op512 = *$tmp513;
            org$pandalanguage$pandac$ASTNode** $tmp515 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9477->$data + 32));
            right514 = *$tmp515;
            panda$core$String* $tmp525 = (($fn524) left510->$class->vtable[0])(left510);
            panda$core$String* $tmp523 = $tmp525;
            panda$core$String* $tmp527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp523, &$s526);
            panda$core$String* $tmp522 = $tmp527;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp529;
            $tmp529 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp529->value = op512;
            panda$core$Object* $tmp528 = ((panda$core$Object*) $tmp529);
            panda$core$String* $tmp530 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp522, $tmp528);
            panda$core$String* $tmp521 = $tmp530;
            panda$core$String* $tmp532 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp521, &$s531);
            panda$core$String* $tmp520 = $tmp532;
            panda$core$String* $tmp533 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp520, ((panda$core$Object*) right514));
            panda$core$String* $tmp519 = $tmp533;
            panda$core$String* $tmp535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp519, &$s534);
            panda$core$String* $tmp518 = $tmp535;
            panda$core$String* $tmp517 = $tmp518;
            panda$core$String* $tmp516 = $tmp517;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp517));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp518));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp519));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp520));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp521));
            panda$core$Panda$unref$panda$core$Object($tmp528);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp522));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp523));
            return $tmp516;
        }
        }
        else {
        panda$core$Bit $tmp536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp536.value) {
        {
            panda$core$Bit* $tmp538 = ((panda$core$Bit*) ((char*) $match$168_9477->$data + 16));
            value537 = *$tmp538;
            panda$core$String* $tmp542 = panda$core$Bit$convert$R$panda$core$String(value537);
            panda$core$String* $tmp541 = $tmp542;
            panda$core$String* $tmp540 = $tmp541;
            panda$core$String* $tmp539 = $tmp540;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp540));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp541));
            return $tmp539;
        }
        }
        else {
        panda$core$Bit $tmp543 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp543.value) {
        {
            panda$collections$ImmutableArray** $tmp545 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9477->$data + 16));
            statements544 = *$tmp545;
            panda$core$MutableString* $tmp549 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init$panda$core$String($tmp549, &$s550);
            panda$core$MutableString* $tmp548 = $tmp549;
            panda$core$MutableString* $tmp547 = $tmp548;
            result546 = $tmp547;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp547));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp548));
            {
                ITable* $tmp554 = ((panda$collections$Iterable*) statements544)->$class->itable;
                while ($tmp554->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp554 = $tmp554->next;
                }
                $fn556 $tmp555 = $tmp554->methods[0];
                panda$collections$Iterator* $tmp557 = $tmp555(((panda$collections$Iterable*) statements544));
                panda$collections$Iterator* $tmp553 = $tmp557;
                panda$collections$Iterator* $tmp552 = $tmp553;
                Iter$182$17551 = $tmp552;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp552));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp553));
                $l558:;
                ITable* $tmp561 = Iter$182$17551->$class->itable;
                while ($tmp561->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp561 = $tmp561->next;
                }
                $fn563 $tmp562 = $tmp561->methods[0];
                panda$core$Bit $tmp564 = $tmp562(Iter$182$17551);
                panda$core$Bit $tmp565 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp564);
                bool $tmp560 = $tmp565.value;
                if (!$tmp560) goto $l559;
                {
                    ITable* $tmp569 = Iter$182$17551->$class->itable;
                    while ($tmp569->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp569 = $tmp569->next;
                    }
                    $fn571 $tmp570 = $tmp569->methods[1];
                    panda$core$Object* $tmp572 = $tmp570(Iter$182$17551);
                    panda$core$Object* $tmp568 = $tmp572;
                    org$pandalanguage$pandac$ASTNode* $tmp567 = ((org$pandalanguage$pandac$ASTNode*) $tmp568);
                    s566 = $tmp567;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp567));
                    panda$core$Panda$unref$panda$core$Object($tmp568);
                    panda$core$String* $tmp575 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s566), &$s574);
                    panda$core$String* $tmp573 = $tmp575;
                    panda$core$MutableString$append$panda$core$String(result546, $tmp573);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp573));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s566));
                }
                goto $l558;
                $l559:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$182$17551));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp576, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result546, $tmp576);
            {
                panda$core$String* $tmp580 = panda$core$MutableString$finish$R$panda$core$String(result546);
                panda$core$String* $tmp579 = $tmp580;
                panda$core$String* $tmp578 = $tmp579;
                tmp1577 = $tmp578;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp578));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp579));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result546));
                panda$core$String* $tmp581 = tmp1577;
                return $tmp581;
            }
        }
        }
        else {
        panda$core$Bit $tmp582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp582.value) {
        {
            panda$core$String** $tmp584 = ((panda$core$String**) ((char*) $match$168_9477->$data + 16));
            label583 = *$tmp584;
            if (((panda$core$Bit) { label583 != NULL }).value) {
            {
                panda$core$String* $tmp590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s589, label583);
                panda$core$String* $tmp588 = $tmp590;
                panda$core$String* $tmp592 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp588, &$s591);
                panda$core$String* $tmp587 = $tmp592;
                panda$core$String* $tmp586 = $tmp587;
                panda$core$String* $tmp585 = $tmp586;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp586));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp587));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp588));
                return $tmp585;
            }
            }
            panda$core$String* $tmp594 = &$s595;
            panda$core$String* $tmp593 = $tmp594;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp594));
            return $tmp593;
        }
        }
        else {
        panda$core$Bit $tmp596 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp596.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp598 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9477->$data + 16));
            target597 = *$tmp598;
            panda$collections$ImmutableArray** $tmp600 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9477->$data + 24));
            args599 = *$tmp600;
            panda$core$String* $tmp608 = (($fn607) target597->$class->vtable[0])(target597);
            panda$core$String* $tmp606 = $tmp608;
            panda$core$String* $tmp610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp606, &$s609);
            panda$core$String* $tmp605 = $tmp610;
            panda$core$String* $tmp612 = panda$collections$ImmutableArray$join$R$panda$core$String(args599);
            panda$core$String* $tmp611 = $tmp612;
            panda$core$String* $tmp613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp605, $tmp611);
            panda$core$String* $tmp604 = $tmp613;
            panda$core$String* $tmp615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp604, &$s614);
            panda$core$String* $tmp603 = $tmp615;
            panda$core$String* $tmp602 = $tmp603;
            panda$core$String* $tmp601 = $tmp602;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp602));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp603));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp604));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp611));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp605));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp606));
            return $tmp601;
        }
        }
        else {
        panda$core$Bit $tmp616 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp616.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp618 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9477->$data + 16));
            dc617 = *$tmp618;
            panda$core$String** $tmp620 = ((panda$core$String**) ((char*) $match$168_9477->$data + 24));
            name619 = *$tmp620;
            panda$collections$ImmutableArray** $tmp622 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9477->$data + 32));
            fields621 = *$tmp622;
            panda$core$MutableString* $tmp626 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp626);
            panda$core$MutableString* $tmp625 = $tmp626;
            panda$core$MutableString* $tmp624 = $tmp625;
            result623 = $tmp624;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp624));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp625));
            if (((panda$core$Bit) { dc617 != NULL }).value) {
            {
                panda$core$String* $tmp629 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc617), &$s628);
                panda$core$String* $tmp627 = $tmp629;
                panda$core$MutableString$append$panda$core$String(result623, $tmp627);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp627));
            }
            }
            panda$core$String* $tmp634 = panda$core$String$convert$R$panda$core$String(name619);
            panda$core$String* $tmp633 = $tmp634;
            panda$core$String* $tmp636 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp633, &$s635);
            panda$core$String* $tmp632 = $tmp636;
            panda$core$String* $tmp638 = panda$collections$ImmutableArray$join$R$panda$core$String(fields621);
            panda$core$String* $tmp637 = $tmp638;
            panda$core$String* $tmp639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp632, $tmp637);
            panda$core$String* $tmp631 = $tmp639;
            panda$core$String* $tmp641 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp631, &$s640);
            panda$core$String* $tmp630 = $tmp641;
            panda$core$MutableString$append$panda$core$String(result623, $tmp630);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp630));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp631));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp637));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp632));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp633));
            {
                panda$core$String* $tmp645 = panda$core$MutableString$finish$R$panda$core$String(result623);
                panda$core$String* $tmp644 = $tmp645;
                panda$core$String* $tmp643 = $tmp644;
                tmp2642 = $tmp643;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp643));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp644));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result623));
                panda$core$String* $tmp646 = tmp2642;
                return $tmp646;
            }
        }
        }
        else {
        panda$core$Bit $tmp647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp647.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp649 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9477->$data + 16));
            base648 = *$tmp649;
            org$pandalanguage$pandac$ChoiceEntry** $tmp651 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$168_9477->$data + 24));
            ce650 = *$tmp651;
            panda$core$Int64* $tmp653 = ((panda$core$Int64*) ((char*) $match$168_9477->$data + 32));
            index652 = *$tmp653;
            panda$core$String* $tmp663 = (($fn662) base648->$class->vtable[0])(base648);
            panda$core$String* $tmp661 = $tmp663;
            panda$core$String* $tmp665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp661, &$s664);
            panda$core$String* $tmp660 = $tmp665;
            panda$core$String* $tmp666 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp660, ((panda$core$Object*) ce650));
            panda$core$String* $tmp659 = $tmp666;
            panda$core$String* $tmp668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp659, &$s667);
            panda$core$String* $tmp658 = $tmp668;
            panda$core$Int64$wrapper* $tmp670;
            $tmp670 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp670->value = index652;
            panda$core$Object* $tmp669 = ((panda$core$Object*) $tmp670);
            panda$core$String* $tmp671 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp658, $tmp669);
            panda$core$String* $tmp657 = $tmp671;
            panda$core$String* $tmp673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp657, &$s672);
            panda$core$String* $tmp656 = $tmp673;
            panda$core$String* $tmp655 = $tmp656;
            panda$core$String* $tmp654 = $tmp655;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp655));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp656));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp657));
            panda$core$Panda$unref$panda$core$Object($tmp669);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp658));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp659));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp660));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp661));
            return $tmp654;
        }
        }
        else {
        panda$core$Bit $tmp674 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp674.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp676 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9477->$data + 16));
            dc675 = *$tmp676;
            panda$collections$ImmutableArray** $tmp678 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9477->$data + 24));
            annotations677 = *$tmp678;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp680 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$168_9477->$data + 32));
            kind679 = *$tmp680;
            panda$core$String** $tmp682 = ((panda$core$String**) ((char*) $match$168_9477->$data + 40));
            name681 = *$tmp682;
            panda$collections$ImmutableArray** $tmp684 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9477->$data + 48));
            generics683 = *$tmp684;
            panda$collections$ImmutableArray** $tmp686 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9477->$data + 56));
            supertypes685 = *$tmp686;
            panda$collections$ImmutableArray** $tmp688 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9477->$data + 64));
            members687 = *$tmp688;
            panda$core$MutableString* $tmp692 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp692);
            panda$core$MutableString* $tmp691 = $tmp692;
            panda$core$MutableString* $tmp690 = $tmp691;
            result689 = $tmp690;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp690));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp691));
            if (((panda$core$Bit) { dc675 != NULL }).value) {
            {
                panda$core$String* $tmp695 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc675), &$s694);
                panda$core$String* $tmp693 = $tmp695;
                panda$core$MutableString$append$panda$core$String(result689, $tmp693);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp693));
            }
            }
            {
                ITable* $tmp699 = ((panda$collections$Iterable*) annotations677)->$class->itable;
                while ($tmp699->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp699 = $tmp699->next;
                }
                $fn701 $tmp700 = $tmp699->methods[0];
                panda$collections$Iterator* $tmp702 = $tmp700(((panda$collections$Iterable*) annotations677));
                panda$collections$Iterator* $tmp698 = $tmp702;
                panda$collections$Iterator* $tmp697 = $tmp698;
                Iter$208$17696 = $tmp697;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp697));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp698));
                $l703:;
                ITable* $tmp706 = Iter$208$17696->$class->itable;
                while ($tmp706->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp706 = $tmp706->next;
                }
                $fn708 $tmp707 = $tmp706->methods[0];
                panda$core$Bit $tmp709 = $tmp707(Iter$208$17696);
                panda$core$Bit $tmp710 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp709);
                bool $tmp705 = $tmp710.value;
                if (!$tmp705) goto $l704;
                {
                    ITable* $tmp714 = Iter$208$17696->$class->itable;
                    while ($tmp714->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp714 = $tmp714->next;
                    }
                    $fn716 $tmp715 = $tmp714->methods[1];
                    panda$core$Object* $tmp717 = $tmp715(Iter$208$17696);
                    panda$core$Object* $tmp713 = $tmp717;
                    org$pandalanguage$pandac$ASTNode* $tmp712 = ((org$pandalanguage$pandac$ASTNode*) $tmp713);
                    a711 = $tmp712;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp712));
                    panda$core$Panda$unref$panda$core$Object($tmp713);
                    panda$core$String* $tmp720 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a711), &$s719);
                    panda$core$String* $tmp718 = $tmp720;
                    panda$core$MutableString$append$panda$core$String(result689, $tmp718);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp718));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a711));
                }
                goto $l703;
                $l704:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$208$17696));
            }
            {
                $match$211_17721 = kind679;
                panda$core$Bit $tmp722 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$211_17721.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp722.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result689, &$s723);
                }
                }
                else {
                panda$core$Bit $tmp724 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$211_17721.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp724.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result689, &$s725);
                }
                }
                else {
                panda$core$Bit $tmp726 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$211_17721.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp726.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result689, &$s727);
                }
                }
                }
                }
            }
            panda$core$MutableString$append$panda$core$String(result689, name681);
            if (((panda$core$Bit) { generics683 != NULL }).value) {
            {
                panda$core$String* $tmp732 = panda$collections$ImmutableArray$join$R$panda$core$String(generics683);
                panda$core$String* $tmp731 = $tmp732;
                panda$core$String* $tmp733 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s730, $tmp731);
                panda$core$String* $tmp729 = $tmp733;
                panda$core$String* $tmp735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp729, &$s734);
                panda$core$String* $tmp728 = $tmp735;
                panda$core$MutableString$append$panda$core$String(result689, $tmp728);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp728));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp729));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp731));
            }
            }
            if (((panda$core$Bit) { supertypes685 != NULL }).value) {
            {
                panda$core$String* $tmp740 = panda$collections$ImmutableArray$join$R$panda$core$String(supertypes685);
                panda$core$String* $tmp739 = $tmp740;
                panda$core$String* $tmp741 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s738, $tmp739);
                panda$core$String* $tmp737 = $tmp741;
                panda$core$String* $tmp743 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp737, &$s742);
                panda$core$String* $tmp736 = $tmp743;
                panda$core$MutableString$append$panda$core$String(result689, $tmp736);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp736));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp737));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp739));
            }
            }
            panda$core$MutableString$append$panda$core$String(result689, &$s744);
            {
                ITable* $tmp748 = ((panda$collections$Iterable*) members687)->$class->itable;
                while ($tmp748->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp748 = $tmp748->next;
                }
                $fn750 $tmp749 = $tmp748->methods[0];
                panda$collections$Iterator* $tmp751 = $tmp749(((panda$collections$Iterable*) members687));
                panda$collections$Iterator* $tmp747 = $tmp751;
                panda$collections$Iterator* $tmp746 = $tmp747;
                Iter$224$17745 = $tmp746;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp746));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp747));
                $l752:;
                ITable* $tmp755 = Iter$224$17745->$class->itable;
                while ($tmp755->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp755 = $tmp755->next;
                }
                $fn757 $tmp756 = $tmp755->methods[0];
                panda$core$Bit $tmp758 = $tmp756(Iter$224$17745);
                panda$core$Bit $tmp759 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp758);
                bool $tmp754 = $tmp759.value;
                if (!$tmp754) goto $l753;
                {
                    ITable* $tmp763 = Iter$224$17745->$class->itable;
                    while ($tmp763->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp763 = $tmp763->next;
                    }
                    $fn765 $tmp764 = $tmp763->methods[1];
                    panda$core$Object* $tmp766 = $tmp764(Iter$224$17745);
                    panda$core$Object* $tmp762 = $tmp766;
                    org$pandalanguage$pandac$ASTNode* $tmp761 = ((org$pandalanguage$pandac$ASTNode*) $tmp762);
                    m760 = $tmp761;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp761));
                    panda$core$Panda$unref$panda$core$Object($tmp762);
                    panda$core$String* $tmp769 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) m760), &$s768);
                    panda$core$String* $tmp767 = $tmp769;
                    panda$core$MutableString$append$panda$core$String(result689, $tmp767);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp767));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m760));
                }
                goto $l752;
                $l753:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$224$17745));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp770, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result689, $tmp770);
            {
                panda$core$String* $tmp774 = panda$core$MutableString$finish$R$panda$core$String(result689);
                panda$core$String* $tmp773 = $tmp774;
                panda$core$String* $tmp772 = $tmp773;
                tmp3771 = $tmp772;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp772));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp773));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result689));
                panda$core$String* $tmp775 = tmp3771;
                return $tmp775;
            }
        }
        }
        else {
        panda$core$Bit $tmp776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp776.value) {
        {
            panda$core$String** $tmp778 = ((panda$core$String**) ((char*) $match$168_9477->$data + 16));
            label777 = *$tmp778;
            if (((panda$core$Bit) { label777 != NULL }).value) {
            {
                panda$core$String* $tmp784 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s783, label777);
                panda$core$String* $tmp782 = $tmp784;
                panda$core$String* $tmp786 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp782, &$s785);
                panda$core$String* $tmp781 = $tmp786;
                panda$core$String* $tmp780 = $tmp781;
                panda$core$String* $tmp779 = $tmp780;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp780));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp781));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp782));
                return $tmp779;
            }
            }
            panda$core$String* $tmp788 = &$s789;
            panda$core$String* $tmp787 = $tmp788;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp788));
            return $tmp787;
        }
        }
        else {
        panda$core$Bit $tmp790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp790.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp792 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9477->$data + 16));
            target791 = *$tmp792;
            org$pandalanguage$pandac$ASTNode** $tmp794 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9477->$data + 24));
            value793 = *$tmp794;
            if (((panda$core$Bit) { value793 != NULL }).value) {
            {
                panda$core$String* $tmp802 = (($fn801) target791->$class->vtable[0])(target791);
                panda$core$String* $tmp800 = $tmp802;
                panda$core$String* $tmp804 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp800, &$s803);
                panda$core$String* $tmp799 = $tmp804;
                panda$core$String* $tmp805 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp799, ((panda$core$Object*) value793));
                panda$core$String* $tmp798 = $tmp805;
                panda$core$String* $tmp807 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp798, &$s806);
                panda$core$String* $tmp797 = $tmp807;
                panda$core$String* $tmp796 = $tmp797;
                panda$core$String* $tmp795 = $tmp796;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp796));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp797));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp798));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp799));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp800));
                return $tmp795;
            }
            }
            panda$core$String* $tmp812 = (($fn811) target791->$class->vtable[0])(target791);
            panda$core$String* $tmp810 = $tmp812;
            panda$core$String* $tmp809 = $tmp810;
            panda$core$String* $tmp808 = $tmp809;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp809));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp810));
            return $tmp808;
        }
        }
        else {
        panda$core$Bit $tmp813 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp813.value) {
        {
            panda$core$String** $tmp815 = ((panda$core$String**) ((char*) $match$168_9477->$data + 16));
            label814 = *$tmp815;
            panda$collections$ImmutableArray** $tmp817 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9477->$data + 24));
            statements816 = *$tmp817;
            org$pandalanguage$pandac$ASTNode** $tmp819 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9477->$data + 32));
            test818 = *$tmp819;
            panda$core$MutableString* $tmp823 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp823);
            panda$core$MutableString* $tmp822 = $tmp823;
            panda$core$MutableString* $tmp821 = $tmp822;
            result820 = $tmp821;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp821));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp822));
            if (((panda$core$Bit) { label814 != NULL }).value) {
            {
                panda$core$String* $tmp826 = panda$core$String$convert$R$panda$core$String(label814);
                panda$core$String* $tmp825 = $tmp826;
                panda$core$String* $tmp828 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp825, &$s827);
                panda$core$String* $tmp824 = $tmp828;
                panda$core$MutableString$append$panda$core$String(result820, $tmp824);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp824));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp825));
            }
            }
            panda$core$MutableString$append$panda$core$String(result820, &$s829);
            {
                ITable* $tmp833 = ((panda$collections$Iterable*) statements816)->$class->itable;
                while ($tmp833->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp833 = $tmp833->next;
                }
                $fn835 $tmp834 = $tmp833->methods[0];
                panda$collections$Iterator* $tmp836 = $tmp834(((panda$collections$Iterable*) statements816));
                panda$collections$Iterator* $tmp832 = $tmp836;
                panda$collections$Iterator* $tmp831 = $tmp832;
                Iter$245$17830 = $tmp831;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp831));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp832));
                $l837:;
                ITable* $tmp840 = Iter$245$17830->$class->itable;
                while ($tmp840->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp840 = $tmp840->next;
                }
                $fn842 $tmp841 = $tmp840->methods[0];
                panda$core$Bit $tmp843 = $tmp841(Iter$245$17830);
                panda$core$Bit $tmp844 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp843);
                bool $tmp839 = $tmp844.value;
                if (!$tmp839) goto $l838;
                {
                    ITable* $tmp848 = Iter$245$17830->$class->itable;
                    while ($tmp848->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp848 = $tmp848->next;
                    }
                    $fn850 $tmp849 = $tmp848->methods[1];
                    panda$core$Object* $tmp851 = $tmp849(Iter$245$17830);
                    panda$core$Object* $tmp847 = $tmp851;
                    org$pandalanguage$pandac$ASTNode* $tmp846 = ((org$pandalanguage$pandac$ASTNode*) $tmp847);
                    s845 = $tmp846;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp846));
                    panda$core$Panda$unref$panda$core$Object($tmp847);
                    panda$core$String* $tmp854 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s845), &$s853);
                    panda$core$String* $tmp852 = $tmp854;
                    panda$core$MutableString$append$panda$core$String(result820, $tmp852);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp852));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s845));
                }
                goto $l837;
                $l838:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$245$17830));
            }
            panda$core$String* $tmp858 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s857, ((panda$core$Object*) test818));
            panda$core$String* $tmp856 = $tmp858;
            panda$core$String* $tmp860 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp856, &$s859);
            panda$core$String* $tmp855 = $tmp860;
            panda$core$MutableString$append$panda$core$String(result820, $tmp855);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp855));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp856));
            {
                panda$core$String* $tmp864 = panda$core$MutableString$finish$R$panda$core$String(result820);
                panda$core$String* $tmp863 = $tmp864;
                panda$core$String* $tmp862 = $tmp863;
                tmp4861 = $tmp862;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp862));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp863));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result820));
                panda$core$String* $tmp865 = tmp4861;
                return $tmp865;
            }
        }
        }
        else {
        panda$core$Bit $tmp866 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp866.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp868 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9477->$data + 16));
            base867 = *$tmp868;
            panda$core$String** $tmp870 = ((panda$core$String**) ((char*) $match$168_9477->$data + 24));
            field869 = *$tmp870;
            panda$core$String* $tmp878 = (($fn877) base867->$class->vtable[0])(base867);
            panda$core$String* $tmp876 = $tmp878;
            panda$core$String* $tmp880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp876, &$s879);
            panda$core$String* $tmp875 = $tmp880;
            panda$core$String* $tmp881 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp875, field869);
            panda$core$String* $tmp874 = $tmp881;
            panda$core$String* $tmp883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp874, &$s882);
            panda$core$String* $tmp873 = $tmp883;
            panda$core$String* $tmp872 = $tmp873;
            panda$core$String* $tmp871 = $tmp872;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp872));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp873));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp874));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp875));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp876));
            return $tmp871;
        }
        }
        else {
        panda$core$Bit $tmp884 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp884.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp886 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9477->$data + 16));
            dc885 = *$tmp886;
            panda$collections$ImmutableArray** $tmp888 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9477->$data + 24));
            annotations887 = *$tmp888;
            org$pandalanguage$pandac$ASTNode** $tmp890 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9477->$data + 32));
            decl889 = *$tmp890;
            panda$core$MutableString* $tmp894 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp894);
            panda$core$MutableString* $tmp893 = $tmp894;
            panda$core$MutableString* $tmp892 = $tmp893;
            result891 = $tmp892;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp892));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp893));
            if (((panda$core$Bit) { dc885 != NULL }).value) {
            {
                panda$core$String* $tmp897 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc885), &$s896);
                panda$core$String* $tmp895 = $tmp897;
                panda$core$MutableString$append$panda$core$String(result891, $tmp895);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp895));
            }
            }
            {
                ITable* $tmp901 = ((panda$collections$Iterable*) annotations887)->$class->itable;
                while ($tmp901->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp901 = $tmp901->next;
                }
                $fn903 $tmp902 = $tmp901->methods[0];
                panda$collections$Iterator* $tmp904 = $tmp902(((panda$collections$Iterable*) annotations887));
                panda$collections$Iterator* $tmp900 = $tmp904;
                panda$collections$Iterator* $tmp899 = $tmp900;
                Iter$257$17898 = $tmp899;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp899));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp900));
                $l905:;
                ITable* $tmp908 = Iter$257$17898->$class->itable;
                while ($tmp908->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp908 = $tmp908->next;
                }
                $fn910 $tmp909 = $tmp908->methods[0];
                panda$core$Bit $tmp911 = $tmp909(Iter$257$17898);
                panda$core$Bit $tmp912 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp911);
                bool $tmp907 = $tmp912.value;
                if (!$tmp907) goto $l906;
                {
                    ITable* $tmp916 = Iter$257$17898->$class->itable;
                    while ($tmp916->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp916 = $tmp916->next;
                    }
                    $fn918 $tmp917 = $tmp916->methods[1];
                    panda$core$Object* $tmp919 = $tmp917(Iter$257$17898);
                    panda$core$Object* $tmp915 = $tmp919;
                    org$pandalanguage$pandac$ASTNode* $tmp914 = ((org$pandalanguage$pandac$ASTNode*) $tmp915);
                    a913 = $tmp914;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp914));
                    panda$core$Panda$unref$panda$core$Object($tmp915);
                    panda$core$String* $tmp922 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a913), &$s921);
                    panda$core$String* $tmp920 = $tmp922;
                    panda$core$MutableString$append$panda$core$String(result891, $tmp920);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp920));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a913));
                }
                goto $l905;
                $l906:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$257$17898));
            }
            panda$core$MutableString$append$panda$core$Object(result891, ((panda$core$Object*) decl889));
            {
                panda$core$String* $tmp926 = panda$core$MutableString$finish$R$panda$core$String(result891);
                panda$core$String* $tmp925 = $tmp926;
                panda$core$String* $tmp924 = $tmp925;
                tmp5923 = $tmp924;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp924));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp925));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result891));
                panda$core$String* $tmp927 = tmp5923;
                return $tmp927;
            }
        }
        }
        else {
        panda$core$Bit $tmp928 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp928.value) {
        {
            panda$collections$ImmutableArray** $tmp930 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9477->$data + 0));
            entries929 = *$tmp930;
            panda$core$MutableString* $tmp934 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp934);
            panda$core$MutableString* $tmp933 = $tmp934;
            panda$core$MutableString* $tmp932 = $tmp933;
            result931 = $tmp932;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp932));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp933));
            {
                ITable* $tmp938 = ((panda$collections$Iterable*) entries929)->$class->itable;
                while ($tmp938->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp938 = $tmp938->next;
                }
                $fn940 $tmp939 = $tmp938->methods[0];
                panda$collections$Iterator* $tmp941 = $tmp939(((panda$collections$Iterable*) entries929));
                panda$collections$Iterator* $tmp937 = $tmp941;
                panda$collections$Iterator* $tmp936 = $tmp937;
                Iter$264$17935 = $tmp936;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp936));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp937));
                $l942:;
                ITable* $tmp945 = Iter$264$17935->$class->itable;
                while ($tmp945->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp945 = $tmp945->next;
                }
                $fn947 $tmp946 = $tmp945->methods[0];
                panda$core$Bit $tmp948 = $tmp946(Iter$264$17935);
                panda$core$Bit $tmp949 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp948);
                bool $tmp944 = $tmp949.value;
                if (!$tmp944) goto $l943;
                {
                    ITable* $tmp953 = Iter$264$17935->$class->itable;
                    while ($tmp953->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp953 = $tmp953->next;
                    }
                    $fn955 $tmp954 = $tmp953->methods[1];
                    panda$core$Object* $tmp956 = $tmp954(Iter$264$17935);
                    panda$core$Object* $tmp952 = $tmp956;
                    org$pandalanguage$pandac$ASTNode* $tmp951 = ((org$pandalanguage$pandac$ASTNode*) $tmp952);
                    e950 = $tmp951;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp951));
                    panda$core$Panda$unref$panda$core$Object($tmp952);
                    panda$core$String* $tmp959 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) e950), &$s958);
                    panda$core$String* $tmp957 = $tmp959;
                    panda$core$MutableString$append$panda$core$String(result931, $tmp957);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp957));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e950));
                }
                goto $l942;
                $l943:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$264$17935));
            }
            {
                panda$core$String* $tmp963 = panda$core$MutableString$finish$R$panda$core$String(result931);
                panda$core$String* $tmp962 = $tmp963;
                panda$core$String* $tmp961 = $tmp962;
                tmp6960 = $tmp961;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp961));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp962));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result931));
                panda$core$String* $tmp964 = tmp6960;
                return $tmp964;
            }
        }
        }
        else {
        panda$core$Bit $tmp965 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp965.value) {
        {
            panda$core$String** $tmp967 = ((panda$core$String**) ((char*) $match$168_9477->$data + 16));
            label966 = *$tmp967;
            org$pandalanguage$pandac$ASTNode** $tmp969 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9477->$data + 24));
            target968 = *$tmp969;
            org$pandalanguage$pandac$ASTNode** $tmp971 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9477->$data + 32));
            list970 = *$tmp971;
            panda$collections$ImmutableArray** $tmp973 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9477->$data + 40));
            statements972 = *$tmp973;
            panda$core$MutableString* $tmp977 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp977);
            panda$core$MutableString* $tmp976 = $tmp977;
            panda$core$MutableString* $tmp975 = $tmp976;
            result974 = $tmp975;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp975));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp976));
            if (((panda$core$Bit) { label966 != NULL }).value) {
            {
                panda$core$String* $tmp980 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(label966, &$s979);
                panda$core$String* $tmp978 = $tmp980;
                panda$core$MutableString$append$panda$core$String(result974, $tmp978);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp978));
            }
            }
            panda$core$String* $tmp986 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s985, ((panda$core$Object*) target968));
            panda$core$String* $tmp984 = $tmp986;
            panda$core$String* $tmp988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp984, &$s987);
            panda$core$String* $tmp983 = $tmp988;
            panda$core$String* $tmp989 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp983, ((panda$core$Object*) list970));
            panda$core$String* $tmp982 = $tmp989;
            panda$core$String* $tmp991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp982, &$s990);
            panda$core$String* $tmp981 = $tmp991;
            panda$core$MutableString$append$panda$core$String(result974, $tmp981);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp981));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp982));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp983));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp984));
            {
                ITable* $tmp995 = ((panda$collections$Iterable*) statements972)->$class->itable;
                while ($tmp995->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp995 = $tmp995->next;
                }
                $fn997 $tmp996 = $tmp995->methods[0];
                panda$collections$Iterator* $tmp998 = $tmp996(((panda$collections$Iterable*) statements972));
                panda$collections$Iterator* $tmp994 = $tmp998;
                panda$collections$Iterator* $tmp993 = $tmp994;
                Iter$274$17992 = $tmp993;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp993));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp994));
                $l999:;
                ITable* $tmp1002 = Iter$274$17992->$class->itable;
                while ($tmp1002->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1002 = $tmp1002->next;
                }
                $fn1004 $tmp1003 = $tmp1002->methods[0];
                panda$core$Bit $tmp1005 = $tmp1003(Iter$274$17992);
                panda$core$Bit $tmp1006 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1005);
                bool $tmp1001 = $tmp1006.value;
                if (!$tmp1001) goto $l1000;
                {
                    ITable* $tmp1010 = Iter$274$17992->$class->itable;
                    while ($tmp1010->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1010 = $tmp1010->next;
                    }
                    $fn1012 $tmp1011 = $tmp1010->methods[1];
                    panda$core$Object* $tmp1013 = $tmp1011(Iter$274$17992);
                    panda$core$Object* $tmp1009 = $tmp1013;
                    org$pandalanguage$pandac$ASTNode* $tmp1008 = ((org$pandalanguage$pandac$ASTNode*) $tmp1009);
                    s1007 = $tmp1008;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1008));
                    panda$core$Panda$unref$panda$core$Object($tmp1009);
                    panda$core$String* $tmp1016 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1007), &$s1015);
                    panda$core$String* $tmp1014 = $tmp1016;
                    panda$core$MutableString$append$panda$core$String(result974, $tmp1014);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1014));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1007));
                }
                goto $l999;
                $l1000:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$274$17992));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1017, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result974, $tmp1017);
            {
                panda$core$String* $tmp1021 = panda$core$MutableString$finish$R$panda$core$String(result974);
                panda$core$String* $tmp1020 = $tmp1021;
                panda$core$String* $tmp1019 = $tmp1020;
                tmp71018 = $tmp1019;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1019));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1020));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result974));
                panda$core$String* $tmp1022 = tmp71018;
                return $tmp1022;
            }
        }
        }
        else {
        panda$core$Bit $tmp1023 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp1023.value) {
        {
            panda$core$String** $tmp1025 = ((panda$core$String**) ((char*) $match$168_9477->$data + 16));
            name1024 = *$tmp1025;
            panda$collections$ImmutableArray** $tmp1027 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9477->$data + 24));
            subtypes1026 = *$tmp1027;
            panda$core$String* $tmp1034 = panda$core$String$convert$R$panda$core$String(name1024);
            panda$core$String* $tmp1033 = $tmp1034;
            panda$core$String* $tmp1036 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1033, &$s1035);
            panda$core$String* $tmp1032 = $tmp1036;
            panda$core$String* $tmp1038 = panda$collections$ImmutableArray$join$R$panda$core$String(subtypes1026);
            panda$core$String* $tmp1037 = $tmp1038;
            panda$core$String* $tmp1039 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1032, $tmp1037);
            panda$core$String* $tmp1031 = $tmp1039;
            panda$core$String* $tmp1041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1031, &$s1040);
            panda$core$String* $tmp1030 = $tmp1041;
            panda$core$String* $tmp1029 = $tmp1030;
            panda$core$String* $tmp1028 = $tmp1029;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1029));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1030));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1031));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1037));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1032));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1033));
            return $tmp1028;
        }
        }
        else {
        panda$core$Bit $tmp1042 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp1042.value) {
        {
            panda$core$String** $tmp1044 = ((panda$core$String**) ((char*) $match$168_9477->$data + 16));
            name1043 = *$tmp1044;
            panda$core$String* $tmp1046 = name1043;
            panda$core$String* $tmp1045 = $tmp1046;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1046));
            return $tmp1045;
        }
        }
        else {
        panda$core$Bit $tmp1047 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp1047.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1049 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9477->$data + 16));
            test1048 = *$tmp1049;
            panda$collections$ImmutableArray** $tmp1051 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9477->$data + 24));
            ifTrue1050 = *$tmp1051;
            org$pandalanguage$pandac$ASTNode** $tmp1053 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9477->$data + 32));
            ifFalse1052 = *$tmp1053;
            panda$core$MutableString* $tmp1057 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$String* $tmp1061 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1060, ((panda$core$Object*) test1048));
            panda$core$String* $tmp1059 = $tmp1061;
            panda$core$String* $tmp1063 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1059, &$s1062);
            panda$core$String* $tmp1058 = $tmp1063;
            panda$core$MutableString$init$panda$core$String($tmp1057, $tmp1058);
            panda$core$MutableString* $tmp1056 = $tmp1057;
            panda$core$MutableString* $tmp1055 = $tmp1056;
            result1054 = $tmp1055;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1055));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1056));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1058));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1059));
            {
                ITable* $tmp1067 = ((panda$collections$Iterable*) ifTrue1050)->$class->itable;
                while ($tmp1067->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1067 = $tmp1067->next;
                }
                $fn1069 $tmp1068 = $tmp1067->methods[0];
                panda$collections$Iterator* $tmp1070 = $tmp1068(((panda$collections$Iterable*) ifTrue1050));
                panda$collections$Iterator* $tmp1066 = $tmp1070;
                panda$collections$Iterator* $tmp1065 = $tmp1066;
                Iter$285$171064 = $tmp1065;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1065));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1066));
                $l1071:;
                ITable* $tmp1074 = Iter$285$171064->$class->itable;
                while ($tmp1074->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1074 = $tmp1074->next;
                }
                $fn1076 $tmp1075 = $tmp1074->methods[0];
                panda$core$Bit $tmp1077 = $tmp1075(Iter$285$171064);
                panda$core$Bit $tmp1078 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1077);
                bool $tmp1073 = $tmp1078.value;
                if (!$tmp1073) goto $l1072;
                {
                    ITable* $tmp1082 = Iter$285$171064->$class->itable;
                    while ($tmp1082->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1082 = $tmp1082->next;
                    }
                    $fn1084 $tmp1083 = $tmp1082->methods[1];
                    panda$core$Object* $tmp1085 = $tmp1083(Iter$285$171064);
                    panda$core$Object* $tmp1081 = $tmp1085;
                    org$pandalanguage$pandac$ASTNode* $tmp1080 = ((org$pandalanguage$pandac$ASTNode*) $tmp1081);
                    s1079 = $tmp1080;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1080));
                    panda$core$Panda$unref$panda$core$Object($tmp1081);
                    panda$core$String* $tmp1088 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1079), &$s1087);
                    panda$core$String* $tmp1086 = $tmp1088;
                    panda$core$MutableString$append$panda$core$String(result1054, $tmp1086);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1086));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1079));
                }
                goto $l1071;
                $l1072:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$285$171064));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1089, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1054, $tmp1089);
            if (((panda$core$Bit) { ifFalse1052 != NULL }).value) {
            {
                panda$core$String* $tmp1093 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1092, ((panda$core$Object*) ifFalse1052));
                panda$core$String* $tmp1091 = $tmp1093;
                panda$core$String* $tmp1095 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1091, &$s1094);
                panda$core$String* $tmp1090 = $tmp1095;
                panda$core$MutableString$append$panda$core$String(result1054, $tmp1090);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1090));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1091));
            }
            }
            {
                panda$core$String* $tmp1099 = panda$core$MutableString$finish$R$panda$core$String(result1054);
                panda$core$String* $tmp1098 = $tmp1099;
                panda$core$String* $tmp1097 = $tmp1098;
                tmp81096 = $tmp1097;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1097));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1098));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1054));
                panda$core$String* $tmp1100 = tmp81096;
                return $tmp1100;
            }
        }
        }
        else {
        panda$core$Bit $tmp1101 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp1101.value) {
        {
            panda$core$UInt64* $tmp1103 = ((panda$core$UInt64*) ((char*) $match$168_9477->$data + 16));
            value1102 = *$tmp1103;
            panda$core$String* $tmp1107 = panda$core$UInt64$convert$R$panda$core$String(value1102);
            panda$core$String* $tmp1106 = $tmp1107;
            panda$core$String* $tmp1105 = $tmp1106;
            panda$core$String* $tmp1104 = $tmp1105;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1105));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1106));
            return $tmp1104;
        }
        }
        else {
        panda$core$Bit $tmp1108 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp1108.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1110 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$168_9477->$data + 0));
            ir1109 = *$tmp1110;
            panda$core$String* $tmp1115 = (($fn1114) ir1109->$class->vtable[0])(ir1109);
            panda$core$String* $tmp1113 = $tmp1115;
            panda$core$String* $tmp1112 = $tmp1113;
            panda$core$String* $tmp1111 = $tmp1112;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1112));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1113));
            return $tmp1111;
        }
        }
        else {
        panda$core$Bit $tmp1116 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1116.value) {
        {
            panda$core$String** $tmp1118 = ((panda$core$String**) ((char*) $match$168_9477->$data + 16));
            label1117 = *$tmp1118;
            panda$collections$ImmutableArray** $tmp1120 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9477->$data + 24));
            statements1119 = *$tmp1120;
            panda$core$MutableString* $tmp1124 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1124);
            panda$core$MutableString* $tmp1123 = $tmp1124;
            panda$core$MutableString* $tmp1122 = $tmp1123;
            result1121 = $tmp1122;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1122));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1123));
            if (((panda$core$Bit) { label1117 != NULL }).value) {
            {
                panda$core$String* $tmp1127 = panda$core$String$convert$R$panda$core$String(label1117);
                panda$core$String* $tmp1126 = $tmp1127;
                panda$core$String* $tmp1129 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1126, &$s1128);
                panda$core$String* $tmp1125 = $tmp1129;
                panda$core$MutableString$append$panda$core$String(result1121, $tmp1125);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1125));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1126));
            }
            }
            panda$core$MutableString$append$panda$core$String(result1121, &$s1130);
            {
                ITable* $tmp1134 = ((panda$collections$Iterable*) statements1119)->$class->itable;
                while ($tmp1134->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1134 = $tmp1134->next;
                }
                $fn1136 $tmp1135 = $tmp1134->methods[0];
                panda$collections$Iterator* $tmp1137 = $tmp1135(((panda$collections$Iterable*) statements1119));
                panda$collections$Iterator* $tmp1133 = $tmp1137;
                panda$collections$Iterator* $tmp1132 = $tmp1133;
                Iter$303$171131 = $tmp1132;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1132));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1133));
                $l1138:;
                ITable* $tmp1141 = Iter$303$171131->$class->itable;
                while ($tmp1141->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1141 = $tmp1141->next;
                }
                $fn1143 $tmp1142 = $tmp1141->methods[0];
                panda$core$Bit $tmp1144 = $tmp1142(Iter$303$171131);
                panda$core$Bit $tmp1145 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1144);
                bool $tmp1140 = $tmp1145.value;
                if (!$tmp1140) goto $l1139;
                {
                    ITable* $tmp1149 = Iter$303$171131->$class->itable;
                    while ($tmp1149->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1149 = $tmp1149->next;
                    }
                    $fn1151 $tmp1150 = $tmp1149->methods[1];
                    panda$core$Object* $tmp1152 = $tmp1150(Iter$303$171131);
                    panda$core$Object* $tmp1148 = $tmp1152;
                    org$pandalanguage$pandac$ASTNode* $tmp1147 = ((org$pandalanguage$pandac$ASTNode*) $tmp1148);
                    s1146 = $tmp1147;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1147));
                    panda$core$Panda$unref$panda$core$Object($tmp1148);
                    panda$core$String* $tmp1155 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1146), &$s1154);
                    panda$core$String* $tmp1153 = $tmp1155;
                    panda$core$MutableString$append$panda$core$String(result1121, $tmp1153);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1153));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1146));
                }
                goto $l1138;
                $l1139:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$303$171131));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1156, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1121, $tmp1156);
            {
                panda$core$String* $tmp1160 = panda$core$MutableString$finish$R$panda$core$String(result1121);
                panda$core$String* $tmp1159 = $tmp1160;
                panda$core$String* $tmp1158 = $tmp1159;
                tmp91157 = $tmp1158;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1158));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1159));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1121));
                panda$core$String* $tmp1161 = tmp91157;
                return $tmp1161;
            }
        }
        }
        else {
        panda$core$Bit $tmp1162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1162.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1164 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9477->$data + 16));
            value1163 = *$tmp1164;
            panda$collections$ImmutableArray** $tmp1166 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9477->$data + 24));
            whens1165 = *$tmp1166;
            panda$collections$ImmutableArray** $tmp1168 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9477->$data + 32));
            other1167 = *$tmp1168;
            panda$core$MutableString* $tmp1172 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$String* $tmp1176 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1175, ((panda$core$Object*) value1163));
            panda$core$String* $tmp1174 = $tmp1176;
            panda$core$String* $tmp1178 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1174, &$s1177);
            panda$core$String* $tmp1173 = $tmp1178;
            panda$core$MutableString$init$panda$core$String($tmp1172, $tmp1173);
            panda$core$MutableString* $tmp1171 = $tmp1172;
            panda$core$MutableString* $tmp1170 = $tmp1171;
            result1169 = $tmp1170;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1170));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1171));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1173));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1174));
            {
                ITable* $tmp1182 = ((panda$collections$Iterable*) whens1165)->$class->itable;
                while ($tmp1182->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1182 = $tmp1182->next;
                }
                $fn1184 $tmp1183 = $tmp1182->methods[0];
                panda$collections$Iterator* $tmp1185 = $tmp1183(((panda$collections$Iterable*) whens1165));
                panda$collections$Iterator* $tmp1181 = $tmp1185;
                panda$collections$Iterator* $tmp1180 = $tmp1181;
                Iter$310$171179 = $tmp1180;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1180));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1181));
                $l1186:;
                ITable* $tmp1189 = Iter$310$171179->$class->itable;
                while ($tmp1189->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1189 = $tmp1189->next;
                }
                $fn1191 $tmp1190 = $tmp1189->methods[0];
                panda$core$Bit $tmp1192 = $tmp1190(Iter$310$171179);
                panda$core$Bit $tmp1193 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1192);
                bool $tmp1188 = $tmp1193.value;
                if (!$tmp1188) goto $l1187;
                {
                    ITable* $tmp1197 = Iter$310$171179->$class->itable;
                    while ($tmp1197->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1197 = $tmp1197->next;
                    }
                    $fn1199 $tmp1198 = $tmp1197->methods[1];
                    panda$core$Object* $tmp1200 = $tmp1198(Iter$310$171179);
                    panda$core$Object* $tmp1196 = $tmp1200;
                    org$pandalanguage$pandac$ASTNode* $tmp1195 = ((org$pandalanguage$pandac$ASTNode*) $tmp1196);
                    w1194 = $tmp1195;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1195));
                    panda$core$Panda$unref$panda$core$Object($tmp1196);
                    panda$core$String* $tmp1203 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w1194), &$s1202);
                    panda$core$String* $tmp1201 = $tmp1203;
                    panda$core$MutableString$append$panda$core$String(result1169, $tmp1201);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1201));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w1194));
                }
                goto $l1186;
                $l1187:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$310$171179));
            }
            if (((panda$core$Bit) { other1167 != NULL }).value) {
            {
                panda$core$String* $tmp1206 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) other1167), &$s1205);
                panda$core$String* $tmp1204 = $tmp1206;
                panda$core$MutableString$append$panda$core$String(result1169, $tmp1204);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1204));
            }
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1207, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1169, $tmp1207);
            {
                panda$core$String* $tmp1211 = panda$core$MutableString$finish$R$panda$core$String(result1169);
                panda$core$String* $tmp1210 = $tmp1211;
                panda$core$String* $tmp1209 = $tmp1210;
                tmp101208 = $tmp1209;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1209));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1210));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1169));
                panda$core$String* $tmp1212 = tmp101208;
                return $tmp1212;
            }
        }
        }
        else {
        panda$core$Bit $tmp1213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1213.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1215 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9477->$data + 16));
            dc1214 = *$tmp1215;
            panda$collections$ImmutableArray** $tmp1217 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9477->$data + 24));
            annotations1216 = *$tmp1217;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1219 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$168_9477->$data + 32));
            kind1218 = *$tmp1219;
            panda$core$String** $tmp1221 = ((panda$core$String**) ((char*) $match$168_9477->$data + 40));
            name1220 = *$tmp1221;
            panda$collections$ImmutableArray** $tmp1223 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9477->$data + 48));
            parameters1222 = *$tmp1223;
            org$pandalanguage$pandac$ASTNode** $tmp1225 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9477->$data + 56));
            returnType1224 = *$tmp1225;
            panda$collections$ImmutableArray** $tmp1227 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9477->$data + 64));
            statements1226 = *$tmp1227;
            panda$core$MutableString* $tmp1231 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1231);
            panda$core$MutableString* $tmp1230 = $tmp1231;
            panda$core$MutableString* $tmp1229 = $tmp1230;
            result1228 = $tmp1229;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1229));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1230));
            if (((panda$core$Bit) { dc1214 != NULL }).value) {
            {
                panda$core$String* $tmp1234 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc1214), &$s1233);
                panda$core$String* $tmp1232 = $tmp1234;
                panda$core$MutableString$append$panda$core$String(result1228, $tmp1232);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1232));
            }
            }
            {
                ITable* $tmp1238 = ((panda$collections$Iterable*) annotations1216)->$class->itable;
                while ($tmp1238->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1238 = $tmp1238->next;
                }
                $fn1240 $tmp1239 = $tmp1238->methods[0];
                panda$collections$Iterator* $tmp1241 = $tmp1239(((panda$collections$Iterable*) annotations1216));
                panda$collections$Iterator* $tmp1237 = $tmp1241;
                panda$collections$Iterator* $tmp1236 = $tmp1237;
                Iter$323$171235 = $tmp1236;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1236));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1237));
                $l1242:;
                ITable* $tmp1245 = Iter$323$171235->$class->itable;
                while ($tmp1245->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1245 = $tmp1245->next;
                }
                $fn1247 $tmp1246 = $tmp1245->methods[0];
                panda$core$Bit $tmp1248 = $tmp1246(Iter$323$171235);
                panda$core$Bit $tmp1249 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1248);
                bool $tmp1244 = $tmp1249.value;
                if (!$tmp1244) goto $l1243;
                {
                    ITable* $tmp1253 = Iter$323$171235->$class->itable;
                    while ($tmp1253->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1253 = $tmp1253->next;
                    }
                    $fn1255 $tmp1254 = $tmp1253->methods[1];
                    panda$core$Object* $tmp1256 = $tmp1254(Iter$323$171235);
                    panda$core$Object* $tmp1252 = $tmp1256;
                    org$pandalanguage$pandac$ASTNode* $tmp1251 = ((org$pandalanguage$pandac$ASTNode*) $tmp1252);
                    a1250 = $tmp1251;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1251));
                    panda$core$Panda$unref$panda$core$Object($tmp1252);
                    panda$core$String* $tmp1259 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a1250), &$s1258);
                    panda$core$String* $tmp1257 = $tmp1259;
                    panda$core$MutableString$append$panda$core$String(result1228, $tmp1257);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1257));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1250));
                }
                goto $l1242;
                $l1243:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$323$171235));
            }
            {
                $match$326_171260 = kind1218;
                panda$core$Bit $tmp1261 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$326_171260.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp1261.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1228, &$s1262);
                }
                }
                else {
                panda$core$Bit $tmp1263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$326_171260.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp1263.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1228, &$s1264);
                }
                }
                else {
                panda$core$Bit $tmp1265 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$326_171260.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp1265.value) {
                {
                }
                }
                }
                }
            }
            panda$core$String* $tmp1270 = panda$core$String$convert$R$panda$core$String(name1220);
            panda$core$String* $tmp1269 = $tmp1270;
            panda$core$String* $tmp1272 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1269, &$s1271);
            panda$core$String* $tmp1268 = $tmp1272;
            panda$core$String* $tmp1274 = panda$collections$ImmutableArray$join$R$panda$core$String(parameters1222);
            panda$core$String* $tmp1273 = $tmp1274;
            panda$core$String* $tmp1275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1268, $tmp1273);
            panda$core$String* $tmp1267 = $tmp1275;
            panda$core$String* $tmp1277 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1267, &$s1276);
            panda$core$String* $tmp1266 = $tmp1277;
            panda$core$MutableString$append$panda$core$String(result1228, $tmp1266);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1266));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1267));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1273));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1268));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1269));
            if (((panda$core$Bit) { returnType1224 != NULL }).value) {
            {
                panda$core$String* $tmp1281 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1280, ((panda$core$Object*) returnType1224));
                panda$core$String* $tmp1279 = $tmp1281;
                panda$core$String* $tmp1283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1279, &$s1282);
                panda$core$String* $tmp1278 = $tmp1283;
                panda$core$MutableString$append$panda$core$String(result1228, $tmp1278);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1278));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1279));
            }
            }
            if (((panda$core$Bit) { statements1226 != NULL }).value) {
            {
                panda$core$MutableString$append$panda$core$String(result1228, &$s1284);
                {
                    ITable* $tmp1288 = ((panda$collections$Iterable*) statements1226)->$class->itable;
                    while ($tmp1288->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                        $tmp1288 = $tmp1288->next;
                    }
                    $fn1290 $tmp1289 = $tmp1288->methods[0];
                    panda$collections$Iterator* $tmp1291 = $tmp1289(((panda$collections$Iterable*) statements1226));
                    panda$collections$Iterator* $tmp1287 = $tmp1291;
                    panda$collections$Iterator* $tmp1286 = $tmp1287;
                    Iter$337$211285 = $tmp1286;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1286));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1287));
                    $l1292:;
                    ITable* $tmp1295 = Iter$337$211285->$class->itable;
                    while ($tmp1295->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1295 = $tmp1295->next;
                    }
                    $fn1297 $tmp1296 = $tmp1295->methods[0];
                    panda$core$Bit $tmp1298 = $tmp1296(Iter$337$211285);
                    panda$core$Bit $tmp1299 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1298);
                    bool $tmp1294 = $tmp1299.value;
                    if (!$tmp1294) goto $l1293;
                    {
                        ITable* $tmp1303 = Iter$337$211285->$class->itable;
                        while ($tmp1303->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1303 = $tmp1303->next;
                        }
                        $fn1305 $tmp1304 = $tmp1303->methods[1];
                        panda$core$Object* $tmp1306 = $tmp1304(Iter$337$211285);
                        panda$core$Object* $tmp1302 = $tmp1306;
                        org$pandalanguage$pandac$ASTNode* $tmp1301 = ((org$pandalanguage$pandac$ASTNode*) $tmp1302);
                        s1300 = $tmp1301;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1301));
                        panda$core$Panda$unref$panda$core$Object($tmp1302);
                        panda$core$String* $tmp1309 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1300), &$s1308);
                        panda$core$String* $tmp1307 = $tmp1309;
                        panda$core$MutableString$append$panda$core$String(result1228, $tmp1307);
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1307));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1300));
                    }
                    goto $l1292;
                    $l1293:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$337$211285));
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1310, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1228, $tmp1310);
            }
            }
            {
                panda$core$String* $tmp1314 = panda$core$MutableString$finish$R$panda$core$String(result1228);
                panda$core$String* $tmp1313 = $tmp1314;
                panda$core$String* $tmp1312 = $tmp1313;
                tmp111311 = $tmp1312;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1312));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1313));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1228));
                panda$core$String* $tmp1315 = tmp111311;
                return $tmp1315;
            }
        }
        }
        else {
        panda$core$Bit $tmp1316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1316.value) {
        {
            panda$core$String* $tmp1318 = &$s1319;
            panda$core$String* $tmp1317 = $tmp1318;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1318));
            return $tmp1317;
        }
        }
        else {
        panda$core$Bit $tmp1320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1320.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1322 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9477->$data + 16));
            base1321 = *$tmp1322;
            panda$core$String* $tmp1327 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) base1321), &$s1326);
            panda$core$String* $tmp1325 = $tmp1327;
            panda$core$String* $tmp1324 = $tmp1325;
            panda$core$String* $tmp1323 = $tmp1324;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1324));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1325));
            return $tmp1323;
        }
        }
        else {
        panda$core$Bit $tmp1328 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1328.value) {
        {
            panda$core$String** $tmp1330 = ((panda$core$String**) ((char*) $match$168_9477->$data + 16));
            name1329 = *$tmp1330;
            panda$core$String* $tmp1332 = name1329;
            panda$core$String* $tmp1331 = $tmp1332;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1332));
            return $tmp1331;
        }
        }
        else {
        panda$core$Bit $tmp1333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1333.value) {
        {
            panda$core$String** $tmp1335 = ((panda$core$String**) ((char*) $match$168_9477->$data + 16));
            name1334 = *$tmp1335;
            org$pandalanguage$pandac$ASTNode** $tmp1337 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9477->$data + 24));
            type1336 = *$tmp1337;
            panda$core$String* $tmp1344 = panda$core$String$convert$R$panda$core$String(name1334);
            panda$core$String* $tmp1343 = $tmp1344;
            panda$core$String* $tmp1346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1343, &$s1345);
            panda$core$String* $tmp1342 = $tmp1346;
            panda$core$String* $tmp1347 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1342, ((panda$core$Object*) type1336));
            panda$core$String* $tmp1341 = $tmp1347;
            panda$core$String* $tmp1349 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1341, &$s1348);
            panda$core$String* $tmp1340 = $tmp1349;
            panda$core$String* $tmp1339 = $tmp1340;
            panda$core$String* $tmp1338 = $tmp1339;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1339));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1340));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1341));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1342));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1343));
            return $tmp1338;
        }
        }
        else {
        panda$core$Bit $tmp1350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1350.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1352 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$168_9477->$data + 16));
            kind1351 = *$tmp1352;
            org$pandalanguage$pandac$ASTNode** $tmp1354 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9477->$data + 24));
            base1353 = *$tmp1354;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1362;
            $tmp1362 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp1362->value = kind1351;
            panda$core$Object* $tmp1361 = ((panda$core$Object*) $tmp1362);
            panda$core$String* $tmp1364 = (($fn1363) $tmp1361->$class->vtable[0])($tmp1361);
            panda$core$String* $tmp1360 = $tmp1364;
            panda$core$String* $tmp1366 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1360, &$s1365);
            panda$core$String* $tmp1359 = $tmp1366;
            panda$core$String* $tmp1367 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1359, ((panda$core$Object*) base1353));
            panda$core$String* $tmp1358 = $tmp1367;
            panda$core$String* $tmp1369 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1358, &$s1368);
            panda$core$String* $tmp1357 = $tmp1369;
            panda$core$String* $tmp1356 = $tmp1357;
            panda$core$String* $tmp1355 = $tmp1356;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1356));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1357));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1358));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1359));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1360));
            panda$core$Panda$unref$panda$core$Object($tmp1361);
            return $tmp1355;
        }
        }
        else {
        panda$core$Bit $tmp1370 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1370.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1372 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9477->$data + 16));
            start1371 = *$tmp1372;
            org$pandalanguage$pandac$ASTNode** $tmp1374 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9477->$data + 24));
            end1373 = *$tmp1374;
            panda$core$Bit* $tmp1376 = ((panda$core$Bit*) ((char*) $match$168_9477->$data + 32));
            inclusive1375 = *$tmp1376;
            org$pandalanguage$pandac$ASTNode** $tmp1378 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9477->$data + 33));
            step1377 = *$tmp1378;
            panda$core$MutableString* $tmp1382 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1382);
            panda$core$MutableString* $tmp1381 = $tmp1382;
            panda$core$MutableString* $tmp1380 = $tmp1381;
            result1379 = $tmp1380;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1380));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1381));
            org$pandalanguage$pandac$ASTNode* $tmp1383 = start1371;
            panda$core$Bit $tmp1387;
            if (((panda$core$Bit) { $tmp1383 != NULL }).value) goto $l1384; else goto $l1385;
            $l1384:;
            panda$core$Bit $tmp1388 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1383->$rawValue, ((panda$core$Int64) { 25 }));
            $tmp1387 = $tmp1388;
            goto $l1386;
            $l1385:;
            $tmp1387 = ((panda$core$Bit) { true });
            goto $l1386;
            $l1386:;
            if ($tmp1387.value) {
            {
                panda$core$MutableString$append$panda$core$Object(result1379, ((panda$core$Object*) start1371));
            }
            }
            if (inclusive1375.value) {
            {
                panda$core$MutableString$append$panda$core$String(result1379, &$s1389);
            }
            }
            else {
            {
                panda$core$MutableString$append$panda$core$String(result1379, &$s1390);
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1391 = end1373;
            panda$core$Bit $tmp1395;
            if (((panda$core$Bit) { $tmp1391 != NULL }).value) goto $l1392; else goto $l1393;
            $l1392:;
            panda$core$Bit $tmp1396 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1391->$rawValue, ((panda$core$Int64) { 25 }));
            $tmp1395 = $tmp1396;
            goto $l1394;
            $l1393:;
            $tmp1395 = ((panda$core$Bit) { true });
            goto $l1394;
            $l1394:;
            if ($tmp1395.value) {
            {
                panda$core$MutableString$append$panda$core$Object(result1379, ((panda$core$Object*) end1373));
            }
            }
            org$pandalanguage$pandac$ASTNode* $tmp1397 = step1377;
            panda$core$Bit $tmp1401;
            if (((panda$core$Bit) { $tmp1397 != NULL }).value) goto $l1398; else goto $l1399;
            $l1398:;
            panda$core$Bit $tmp1402 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1397->$rawValue, ((panda$core$Int64) { 25 }));
            $tmp1401 = $tmp1402;
            goto $l1400;
            $l1399:;
            $tmp1401 = ((panda$core$Bit) { true });
            goto $l1400;
            $l1400:;
            if ($tmp1401.value) {
            {
                panda$core$String* $tmp1405 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1404, ((panda$core$Object*) step1377));
                panda$core$String* $tmp1403 = $tmp1405;
                panda$core$MutableString$append$panda$core$String(result1379, $tmp1403);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1403));
            }
            }
            {
                panda$core$String* $tmp1409 = panda$core$MutableString$finish$R$panda$core$String(result1379);
                panda$core$String* $tmp1408 = $tmp1409;
                panda$core$String* $tmp1407 = $tmp1408;
                tmp121406 = $tmp1407;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1407));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1408));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1379));
                panda$core$String* $tmp1410 = tmp121406;
                return $tmp1410;
            }
        }
        }
        else {
        panda$core$Bit $tmp1411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1411.value) {
        {
            panda$core$Real64* $tmp1413 = ((panda$core$Real64*) ((char*) $match$168_9477->$data + 16));
            value1412 = *$tmp1413;
            panda$core$String* $tmp1417 = panda$core$Real64$convert$R$panda$core$String(value1412);
            panda$core$String* $tmp1416 = $tmp1417;
            panda$core$String* $tmp1415 = $tmp1416;
            panda$core$String* $tmp1414 = $tmp1415;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1415));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1416));
            return $tmp1414;
        }
        }
        else {
        panda$core$Bit $tmp1418 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1418.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1420 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9477->$data + 16));
            value1419 = *$tmp1420;
            if (((panda$core$Bit) { value1419 != NULL }).value) {
            {
                panda$core$String* $tmp1426 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1425, ((panda$core$Object*) value1419));
                panda$core$String* $tmp1424 = $tmp1426;
                panda$core$String* $tmp1428 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1424, &$s1427);
                panda$core$String* $tmp1423 = $tmp1428;
                panda$core$String* $tmp1422 = $tmp1423;
                panda$core$String* $tmp1421 = $tmp1422;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1422));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1423));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1424));
                return $tmp1421;
            }
            }
            panda$core$String* $tmp1430 = &$s1431;
            panda$core$String* $tmp1429 = $tmp1430;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1430));
            return $tmp1429;
        }
        }
        else {
        panda$core$Bit $tmp1432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1432.value) {
        {
            panda$core$String* $tmp1434 = &$s1435;
            panda$core$String* $tmp1433 = $tmp1434;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1434));
            return $tmp1433;
        }
        }
        else {
        panda$core$Bit $tmp1436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1436.value) {
        {
            panda$core$String** $tmp1438 = ((panda$core$String**) ((char*) $match$168_9477->$data + 16));
            str1437 = *$tmp1438;
            panda$core$String* $tmp1440 = str1437;
            panda$core$String* $tmp1439 = $tmp1440;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1440));
            return $tmp1439;
        }
        }
        else {
        panda$core$Bit $tmp1441 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1441.value) {
        {
            panda$core$String* $tmp1443 = &$s1444;
            panda$core$String* $tmp1442 = $tmp1443;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1443));
            return $tmp1442;
        }
        }
        else {
        panda$core$Bit $tmp1445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1445.value) {
        {
            panda$core$String** $tmp1447 = ((panda$core$String**) ((char*) $match$168_9477->$data + 16));
            name1446 = *$tmp1447;
            panda$core$String* $tmp1449 = name1446;
            panda$core$String* $tmp1448 = $tmp1449;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1449));
            return $tmp1448;
        }
        }
        else {
        panda$core$Bit $tmp1450 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1450.value) {
        {
            panda$core$String** $tmp1452 = ((panda$core$String**) ((char*) $match$168_9477->$data + 16));
            name1451 = *$tmp1452;
            org$pandalanguage$pandac$ASTNode** $tmp1454 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9477->$data + 24));
            type1453 = *$tmp1454;
            if (((panda$core$Bit) { type1453 != NULL }).value) {
            {
                panda$core$String* $tmp1461 = panda$core$String$convert$R$panda$core$String(name1451);
                panda$core$String* $tmp1460 = $tmp1461;
                panda$core$String* $tmp1463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1460, &$s1462);
                panda$core$String* $tmp1459 = $tmp1463;
                panda$core$String* $tmp1464 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1459, ((panda$core$Object*) type1453));
                panda$core$String* $tmp1458 = $tmp1464;
                panda$core$String* $tmp1466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1458, &$s1465);
                panda$core$String* $tmp1457 = $tmp1466;
                panda$core$String* $tmp1456 = $tmp1457;
                panda$core$String* $tmp1455 = $tmp1456;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1456));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1457));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1458));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1459));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1460));
                return $tmp1455;
            }
            }
            panda$core$String* $tmp1468 = name1451;
            panda$core$String* $tmp1467 = $tmp1468;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1468));
            return $tmp1467;
        }
        }
        else {
        panda$core$Bit $tmp1469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1469.value) {
        {
            panda$core$String** $tmp1471 = ((panda$core$String**) ((char*) $match$168_9477->$data + 16));
            name1470 = *$tmp1471;
            panda$core$String* $tmp1473 = name1470;
            panda$core$String* $tmp1472 = $tmp1473;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1473));
            return $tmp1472;
        }
        }
        else {
        panda$core$Bit $tmp1474 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1474.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp1476 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$168_9477->$data + 16));
            kind1475 = *$tmp1476;
            panda$collections$ImmutableArray** $tmp1478 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9477->$data + 24));
            decls1477 = *$tmp1478;
            panda$core$MutableString* $tmp1482 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1482);
            panda$core$MutableString* $tmp1481 = $tmp1482;
            panda$core$MutableString* $tmp1480 = $tmp1481;
            result1479 = $tmp1480;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1480));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1481));
            {
                $match$395_171483 = kind1475;
                panda$core$Bit $tmp1484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$395_171483.$rawValue, ((panda$core$Int64) { 0 }));
                if ($tmp1484.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1479, &$s1485);
                }
                }
                else {
                panda$core$Bit $tmp1486 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$395_171483.$rawValue, ((panda$core$Int64) { 1 }));
                if ($tmp1486.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1479, &$s1487);
                }
                }
                else {
                panda$core$Bit $tmp1488 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$395_171483.$rawValue, ((panda$core$Int64) { 2 }));
                if ($tmp1488.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1479, &$s1489);
                }
                }
                else {
                panda$core$Bit $tmp1490 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$395_171483.$rawValue, ((panda$core$Int64) { 3 }));
                if ($tmp1490.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1479, &$s1491);
                }
                }
                }
                }
                }
            }
            panda$core$String* $tmp1493 = panda$collections$ImmutableArray$join$R$panda$core$String(decls1477);
            panda$core$String* $tmp1492 = $tmp1493;
            panda$core$MutableString$append$panda$core$String(result1479, $tmp1492);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1492));
            {
                panda$core$String* $tmp1497 = panda$core$MutableString$finish$R$panda$core$String(result1479);
                panda$core$String* $tmp1496 = $tmp1497;
                panda$core$String* $tmp1495 = $tmp1496;
                tmp131494 = $tmp1495;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1495));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1496));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1479));
                panda$core$String* $tmp1498 = tmp131494;
                return $tmp1498;
            }
        }
        }
        else {
        panda$core$Bit $tmp1499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1499.value) {
        {
            panda$collections$ImmutableArray** $tmp1501 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9477->$data + 16));
            tests1500 = *$tmp1501;
            panda$collections$ImmutableArray** $tmp1503 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9477->$data + 24));
            statements1502 = *$tmp1503;
            panda$core$MutableString* $tmp1507 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init$panda$core$String($tmp1507, &$s1508);
            panda$core$MutableString* $tmp1506 = $tmp1507;
            panda$core$MutableString* $tmp1505 = $tmp1506;
            result1504 = $tmp1505;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1505));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1506));
            panda$core$String* $tmp1510 = &$s1511;
            separator1509 = $tmp1510;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1510));
            {
                ITable* $tmp1515 = ((panda$collections$Iterable*) tests1500)->$class->itable;
                while ($tmp1515->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1515 = $tmp1515->next;
                }
                $fn1517 $tmp1516 = $tmp1515->methods[0];
                panda$collections$Iterator* $tmp1518 = $tmp1516(((panda$collections$Iterable*) tests1500));
                panda$collections$Iterator* $tmp1514 = $tmp1518;
                panda$collections$Iterator* $tmp1513 = $tmp1514;
                Iter$406$171512 = $tmp1513;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1513));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1514));
                $l1519:;
                ITable* $tmp1522 = Iter$406$171512->$class->itable;
                while ($tmp1522->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1522 = $tmp1522->next;
                }
                $fn1524 $tmp1523 = $tmp1522->methods[0];
                panda$core$Bit $tmp1525 = $tmp1523(Iter$406$171512);
                panda$core$Bit $tmp1526 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1525);
                bool $tmp1521 = $tmp1526.value;
                if (!$tmp1521) goto $l1520;
                {
                    ITable* $tmp1530 = Iter$406$171512->$class->itable;
                    while ($tmp1530->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1530 = $tmp1530->next;
                    }
                    $fn1532 $tmp1531 = $tmp1530->methods[1];
                    panda$core$Object* $tmp1533 = $tmp1531(Iter$406$171512);
                    panda$core$Object* $tmp1529 = $tmp1533;
                    org$pandalanguage$pandac$ASTNode* $tmp1528 = ((org$pandalanguage$pandac$ASTNode*) $tmp1529);
                    t1527 = $tmp1528;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1528));
                    panda$core$Panda$unref$panda$core$Object($tmp1529);
                    panda$core$String* $tmp1538 = panda$core$String$convert$R$panda$core$String(separator1509);
                    panda$core$String* $tmp1537 = $tmp1538;
                    panda$core$String* $tmp1540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1537, &$s1539);
                    panda$core$String* $tmp1536 = $tmp1540;
                    panda$core$String* $tmp1541 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1536, ((panda$core$Object*) t1527));
                    panda$core$String* $tmp1535 = $tmp1541;
                    panda$core$String* $tmp1543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1535, &$s1542);
                    panda$core$String* $tmp1534 = $tmp1543;
                    panda$core$MutableString$append$panda$core$String(result1504, $tmp1534);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1534));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1535));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1536));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1537));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1527));
                }
                goto $l1519;
                $l1520:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$406$171512));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1544, ((panda$core$UInt8) { 58 }));
            panda$core$MutableString$append$panda$core$Char8(result1504, $tmp1544);
            {
                ITable* $tmp1548 = ((panda$collections$Iterable*) statements1502)->$class->itable;
                while ($tmp1548->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1548 = $tmp1548->next;
                }
                $fn1550 $tmp1549 = $tmp1548->methods[0];
                panda$collections$Iterator* $tmp1551 = $tmp1549(((panda$collections$Iterable*) statements1502));
                panda$collections$Iterator* $tmp1547 = $tmp1551;
                panda$collections$Iterator* $tmp1546 = $tmp1547;
                Iter$410$171545 = $tmp1546;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1546));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1547));
                $l1552:;
                ITable* $tmp1555 = Iter$410$171545->$class->itable;
                while ($tmp1555->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1555 = $tmp1555->next;
                }
                $fn1557 $tmp1556 = $tmp1555->methods[0];
                panda$core$Bit $tmp1558 = $tmp1556(Iter$410$171545);
                panda$core$Bit $tmp1559 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1558);
                bool $tmp1554 = $tmp1559.value;
                if (!$tmp1554) goto $l1553;
                {
                    ITable* $tmp1563 = Iter$410$171545->$class->itable;
                    while ($tmp1563->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1563 = $tmp1563->next;
                    }
                    $fn1565 $tmp1564 = $tmp1563->methods[1];
                    panda$core$Object* $tmp1566 = $tmp1564(Iter$410$171545);
                    panda$core$Object* $tmp1562 = $tmp1566;
                    org$pandalanguage$pandac$ASTNode* $tmp1561 = ((org$pandalanguage$pandac$ASTNode*) $tmp1562);
                    s1560 = $tmp1561;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1561));
                    panda$core$Panda$unref$panda$core$Object($tmp1562);
                    panda$core$String* $tmp1569 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1568, ((panda$core$Object*) s1560));
                    panda$core$String* $tmp1567 = $tmp1569;
                    panda$core$MutableString$append$panda$core$String(result1504, $tmp1567);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1567));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1560));
                }
                goto $l1552;
                $l1553:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$410$171545));
            }
            {
                panda$core$String* $tmp1573 = panda$core$MutableString$finish$R$panda$core$String(result1504);
                panda$core$String* $tmp1572 = $tmp1573;
                panda$core$String* $tmp1571 = $tmp1572;
                tmp141570 = $tmp1571;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1571));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1572));
                {
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1509));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1504));
                }
                panda$core$String* $tmp1574 = tmp141570;
                return $tmp1574;
            }
        }
        }
        else {
        panda$core$Bit $tmp1575 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$168_9477->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1575.value) {
        {
            panda$core$String** $tmp1577 = ((panda$core$String**) ((char*) $match$168_9477->$data + 16));
            label1576 = *$tmp1577;
            org$pandalanguage$pandac$ASTNode** $tmp1579 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$168_9477->$data + 24));
            test1578 = *$tmp1579;
            panda$collections$ImmutableArray** $tmp1581 = ((panda$collections$ImmutableArray**) ((char*) $match$168_9477->$data + 32));
            statements1580 = *$tmp1581;
            panda$core$MutableString* $tmp1585 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
            panda$core$MutableString$init($tmp1585);
            panda$core$MutableString* $tmp1584 = $tmp1585;
            panda$core$MutableString* $tmp1583 = $tmp1584;
            result1582 = $tmp1583;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1583));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1584));
            if (((panda$core$Bit) { label1576 != NULL }).value) {
            {
                panda$core$String* $tmp1588 = panda$core$String$convert$R$panda$core$String(label1576);
                panda$core$String* $tmp1587 = $tmp1588;
                panda$core$String* $tmp1590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1587, &$s1589);
                panda$core$String* $tmp1586 = $tmp1590;
                panda$core$MutableString$append$panda$core$String(result1582, $tmp1586);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1586));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1587));
            }
            }
            panda$core$String* $tmp1594 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1593, ((panda$core$Object*) test1578));
            panda$core$String* $tmp1592 = $tmp1594;
            panda$core$String* $tmp1596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1592, &$s1595);
            panda$core$String* $tmp1591 = $tmp1596;
            panda$core$MutableString$append$panda$core$String(result1582, $tmp1591);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1591));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1592));
            {
                ITable* $tmp1600 = ((panda$collections$Iterable*) statements1580)->$class->itable;
                while ($tmp1600->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                    $tmp1600 = $tmp1600->next;
                }
                $fn1602 $tmp1601 = $tmp1600->methods[0];
                panda$collections$Iterator* $tmp1603 = $tmp1601(((panda$collections$Iterable*) statements1580));
                panda$collections$Iterator* $tmp1599 = $tmp1603;
                panda$collections$Iterator* $tmp1598 = $tmp1599;
                Iter$420$171597 = $tmp1598;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1598));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1599));
                $l1604:;
                ITable* $tmp1607 = Iter$420$171597->$class->itable;
                while ($tmp1607->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                    $tmp1607 = $tmp1607->next;
                }
                $fn1609 $tmp1608 = $tmp1607->methods[0];
                panda$core$Bit $tmp1610 = $tmp1608(Iter$420$171597);
                panda$core$Bit $tmp1611 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1610);
                bool $tmp1606 = $tmp1611.value;
                if (!$tmp1606) goto $l1605;
                {
                    ITable* $tmp1615 = Iter$420$171597->$class->itable;
                    while ($tmp1615->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                        $tmp1615 = $tmp1615->next;
                    }
                    $fn1617 $tmp1616 = $tmp1615->methods[1];
                    panda$core$Object* $tmp1618 = $tmp1616(Iter$420$171597);
                    panda$core$Object* $tmp1614 = $tmp1618;
                    org$pandalanguage$pandac$ASTNode* $tmp1613 = ((org$pandalanguage$pandac$ASTNode*) $tmp1614);
                    s1612 = $tmp1613;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1613));
                    panda$core$Panda$unref$panda$core$Object($tmp1614);
                    panda$core$String* $tmp1621 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1612), &$s1620);
                    panda$core$String* $tmp1619 = $tmp1621;
                    panda$core$MutableString$append$panda$core$String(result1582, $tmp1619);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1619));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1612));
                }
                goto $l1604;
                $l1605:;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$420$171597));
            }
            panda$core$Char8$init$panda$core$UInt8(&$tmp1622, ((panda$core$UInt8) { 125 }));
            panda$core$MutableString$append$panda$core$Char8(result1582, $tmp1622);
            {
                panda$core$String* $tmp1626 = panda$core$MutableString$finish$R$panda$core$String(result1582);
                panda$core$String* $tmp1625 = $tmp1626;
                panda$core$String* $tmp1624 = $tmp1625;
                tmp151623 = $tmp1624;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1624));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1625));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1582));
                panda$core$String* $tmp1627 = tmp151623;
                return $tmp1627;
            }
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
void org$pandalanguage$pandac$ASTNode$cleanup(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$5_11628;
    org$pandalanguage$pandac$Position _f01630;
    panda$core$String* _f11632;
    org$pandalanguage$pandac$Position _f01635;
    org$pandalanguage$pandac$ASTNode* _f11637;
    org$pandalanguage$pandac$ASTNode* _f21639;
    org$pandalanguage$pandac$Position _f01642;
    org$pandalanguage$pandac$ASTNode* _f11644;
    org$pandalanguage$pandac$parser$Token$Kind _f21646;
    org$pandalanguage$pandac$ASTNode* _f31648;
    org$pandalanguage$pandac$Position _f01651;
    panda$core$Bit _f11653;
    org$pandalanguage$pandac$Position _f01656;
    panda$collections$ImmutableArray* _f11658;
    org$pandalanguage$pandac$Position _f01661;
    panda$core$String* _f11663;
    org$pandalanguage$pandac$Position _f01666;
    org$pandalanguage$pandac$ASTNode* _f11668;
    panda$collections$ImmutableArray* _f21670;
    org$pandalanguage$pandac$Position _f01673;
    org$pandalanguage$pandac$ASTNode* _f11675;
    panda$core$String* _f21677;
    panda$collections$ImmutableArray* _f31679;
    org$pandalanguage$pandac$Position _f01682;
    org$pandalanguage$pandac$ASTNode* _f11684;
    org$pandalanguage$pandac$ChoiceEntry* _f21686;
    panda$core$Int64 _f31688;
    org$pandalanguage$pandac$Position _f01691;
    org$pandalanguage$pandac$ASTNode* _f11693;
    panda$collections$ImmutableArray* _f21695;
    org$pandalanguage$pandac$ClassDecl$Kind _f31697;
    panda$core$String* _f41699;
    panda$collections$ImmutableArray* _f51701;
    panda$collections$ImmutableArray* _f61703;
    panda$collections$ImmutableArray* _f71705;
    org$pandalanguage$pandac$Position _f01708;
    panda$core$String* _f11710;
    org$pandalanguage$pandac$Position _f01713;
    org$pandalanguage$pandac$ASTNode* _f11715;
    org$pandalanguage$pandac$ASTNode* _f21717;
    org$pandalanguage$pandac$Position _f01720;
    panda$core$String* _f11722;
    panda$collections$ImmutableArray* _f21724;
    org$pandalanguage$pandac$ASTNode* _f31726;
    org$pandalanguage$pandac$Position _f01729;
    org$pandalanguage$pandac$ASTNode* _f11731;
    panda$core$String* _f21733;
    org$pandalanguage$pandac$Position _f01736;
    org$pandalanguage$pandac$ASTNode* _f11738;
    panda$collections$ImmutableArray* _f21740;
    org$pandalanguage$pandac$ASTNode* _f31742;
    panda$collections$ImmutableArray* _f01745;
    org$pandalanguage$pandac$Position _f01748;
    panda$core$String* _f11750;
    org$pandalanguage$pandac$ASTNode* _f21752;
    org$pandalanguage$pandac$ASTNode* _f31754;
    panda$collections$ImmutableArray* _f41756;
    org$pandalanguage$pandac$Position _f01759;
    panda$core$String* _f11761;
    panda$collections$ImmutableArray* _f21763;
    org$pandalanguage$pandac$Position _f01766;
    panda$core$String* _f11768;
    org$pandalanguage$pandac$Position _f01771;
    org$pandalanguage$pandac$ASTNode* _f11773;
    panda$collections$ImmutableArray* _f21775;
    org$pandalanguage$pandac$ASTNode* _f31777;
    org$pandalanguage$pandac$Position _f01780;
    panda$core$UInt64 _f11782;
    org$pandalanguage$pandac$IRNode* _f01785;
    org$pandalanguage$pandac$Position _f01788;
    panda$core$String* _f11790;
    panda$collections$ImmutableArray* _f21792;
    org$pandalanguage$pandac$Position _f01795;
    org$pandalanguage$pandac$ASTNode* _f11797;
    panda$collections$ImmutableArray* _f21799;
    panda$collections$ImmutableArray* _f31801;
    org$pandalanguage$pandac$Position _f01804;
    org$pandalanguage$pandac$ASTNode* _f11806;
    panda$collections$ImmutableArray* _f21808;
    org$pandalanguage$pandac$MethodDecl$Kind _f31810;
    panda$core$String* _f41812;
    panda$collections$ImmutableArray* _f51814;
    org$pandalanguage$pandac$ASTNode* _f61816;
    panda$collections$ImmutableArray* _f71818;
    org$pandalanguage$pandac$Position _f01821;
    org$pandalanguage$pandac$Position _f01824;
    org$pandalanguage$pandac$ASTNode* _f11826;
    org$pandalanguage$pandac$Position _f01829;
    panda$core$String* _f11831;
    org$pandalanguage$pandac$Position _f01834;
    panda$core$String* _f11836;
    org$pandalanguage$pandac$ASTNode* _f21838;
    org$pandalanguage$pandac$Position _f01841;
    org$pandalanguage$pandac$parser$Token$Kind _f11843;
    org$pandalanguage$pandac$ASTNode* _f21845;
    org$pandalanguage$pandac$Position _f01848;
    org$pandalanguage$pandac$ASTNode* _f11850;
    org$pandalanguage$pandac$ASTNode* _f21852;
    panda$core$Bit _f31854;
    org$pandalanguage$pandac$ASTNode* _f41856;
    org$pandalanguage$pandac$Position _f01859;
    panda$core$Real64 _f11861;
    org$pandalanguage$pandac$Position _f01864;
    org$pandalanguage$pandac$ASTNode* _f11866;
    org$pandalanguage$pandac$Position _f01869;
    org$pandalanguage$pandac$Position _f01872;
    panda$core$String* _f11874;
    org$pandalanguage$pandac$Position _f01877;
    org$pandalanguage$pandac$Position _f01880;
    panda$core$String* _f11882;
    org$pandalanguage$pandac$Position _f01885;
    panda$core$String* _f11887;
    org$pandalanguage$pandac$ASTNode* _f21889;
    org$pandalanguage$pandac$Position _f01892;
    panda$core$String* _f11894;
    org$pandalanguage$pandac$Position _f01897;
    org$pandalanguage$pandac$Variable$Kind _f11899;
    panda$collections$ImmutableArray* _f21901;
    org$pandalanguage$pandac$Position _f01904;
    panda$collections$ImmutableArray* _f11906;
    panda$collections$ImmutableArray* _f21908;
    org$pandalanguage$pandac$Position _f01911;
    panda$core$String* _f11913;
    org$pandalanguage$pandac$ASTNode* _f21915;
    panda$collections$ImmutableArray* _f31917;
    {
        $match$5_11628 = self;
        panda$core$Bit $tmp1629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp1629.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1631 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01630 = *$tmp1631;
            panda$core$String** $tmp1633 = ((panda$core$String**) ((char*) $match$5_11628->$data + 16));
            _f11632 = *$tmp1633;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11632));
        }
        }
        else {
        panda$core$Bit $tmp1634 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp1634.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1636 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01635 = *$tmp1636;
            org$pandalanguage$pandac$ASTNode** $tmp1638 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11628->$data + 16));
            _f11637 = *$tmp1638;
            org$pandalanguage$pandac$ASTNode** $tmp1640 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11628->$data + 24));
            _f21639 = *$tmp1640;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11637));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21639));
        }
        }
        else {
        panda$core$Bit $tmp1641 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp1641.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1643 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01642 = *$tmp1643;
            org$pandalanguage$pandac$ASTNode** $tmp1645 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11628->$data + 16));
            _f11644 = *$tmp1645;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1647 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11628->$data + 24));
            _f21646 = *$tmp1647;
            org$pandalanguage$pandac$ASTNode** $tmp1649 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11628->$data + 32));
            _f31648 = *$tmp1649;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11644));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31648));
        }
        }
        else {
        panda$core$Bit $tmp1650 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp1650.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1652 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01651 = *$tmp1652;
            panda$core$Bit* $tmp1654 = ((panda$core$Bit*) ((char*) $match$5_11628->$data + 16));
            _f11653 = *$tmp1654;
        }
        }
        else {
        panda$core$Bit $tmp1655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp1655.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1657 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01656 = *$tmp1657;
            panda$collections$ImmutableArray** $tmp1659 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11628->$data + 16));
            _f11658 = *$tmp1659;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11658));
        }
        }
        else {
        panda$core$Bit $tmp1660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp1660.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1662 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01661 = *$tmp1662;
            panda$core$String** $tmp1664 = ((panda$core$String**) ((char*) $match$5_11628->$data + 16));
            _f11663 = *$tmp1664;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11663));
        }
        }
        else {
        panda$core$Bit $tmp1665 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp1665.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1667 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01666 = *$tmp1667;
            org$pandalanguage$pandac$ASTNode** $tmp1669 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11628->$data + 16));
            _f11668 = *$tmp1669;
            panda$collections$ImmutableArray** $tmp1671 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11628->$data + 24));
            _f21670 = *$tmp1671;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11668));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21670));
        }
        }
        else {
        panda$core$Bit $tmp1672 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp1672.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1674 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01673 = *$tmp1674;
            org$pandalanguage$pandac$ASTNode** $tmp1676 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11628->$data + 16));
            _f11675 = *$tmp1676;
            panda$core$String** $tmp1678 = ((panda$core$String**) ((char*) $match$5_11628->$data + 24));
            _f21677 = *$tmp1678;
            panda$collections$ImmutableArray** $tmp1680 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11628->$data + 32));
            _f31679 = *$tmp1680;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11675));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21677));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31679));
        }
        }
        else {
        panda$core$Bit $tmp1681 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp1681.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1683 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01682 = *$tmp1683;
            org$pandalanguage$pandac$ASTNode** $tmp1685 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11628->$data + 16));
            _f11684 = *$tmp1685;
            org$pandalanguage$pandac$ChoiceEntry** $tmp1687 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_11628->$data + 24));
            _f21686 = *$tmp1687;
            panda$core$Int64* $tmp1689 = ((panda$core$Int64*) ((char*) $match$5_11628->$data + 32));
            _f31688 = *$tmp1689;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11684));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21686));
        }
        }
        else {
        panda$core$Bit $tmp1690 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp1690.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1692 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01691 = *$tmp1692;
            org$pandalanguage$pandac$ASTNode** $tmp1694 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11628->$data + 16));
            _f11693 = *$tmp1694;
            panda$collections$ImmutableArray** $tmp1696 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11628->$data + 24));
            _f21695 = *$tmp1696;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp1698 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$5_11628->$data + 32));
            _f31697 = *$tmp1698;
            panda$core$String** $tmp1700 = ((panda$core$String**) ((char*) $match$5_11628->$data + 40));
            _f41699 = *$tmp1700;
            panda$collections$ImmutableArray** $tmp1702 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11628->$data + 48));
            _f51701 = *$tmp1702;
            panda$collections$ImmutableArray** $tmp1704 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11628->$data + 56));
            _f61703 = *$tmp1704;
            panda$collections$ImmutableArray** $tmp1706 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11628->$data + 64));
            _f71705 = *$tmp1706;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11693));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21695));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41699));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f51701));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f61703));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f71705));
        }
        }
        else {
        panda$core$Bit $tmp1707 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp1707.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1709 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01708 = *$tmp1709;
            panda$core$String** $tmp1711 = ((panda$core$String**) ((char*) $match$5_11628->$data + 16));
            _f11710 = *$tmp1711;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11710));
        }
        }
        else {
        panda$core$Bit $tmp1712 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp1712.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1714 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01713 = *$tmp1714;
            org$pandalanguage$pandac$ASTNode** $tmp1716 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11628->$data + 16));
            _f11715 = *$tmp1716;
            org$pandalanguage$pandac$ASTNode** $tmp1718 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11628->$data + 24));
            _f21717 = *$tmp1718;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11715));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21717));
        }
        }
        else {
        panda$core$Bit $tmp1719 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp1719.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1721 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01720 = *$tmp1721;
            panda$core$String** $tmp1723 = ((panda$core$String**) ((char*) $match$5_11628->$data + 16));
            _f11722 = *$tmp1723;
            panda$collections$ImmutableArray** $tmp1725 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11628->$data + 24));
            _f21724 = *$tmp1725;
            org$pandalanguage$pandac$ASTNode** $tmp1727 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11628->$data + 32));
            _f31726 = *$tmp1727;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11722));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21724));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31726));
        }
        }
        else {
        panda$core$Bit $tmp1728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp1728.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1730 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01729 = *$tmp1730;
            org$pandalanguage$pandac$ASTNode** $tmp1732 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11628->$data + 16));
            _f11731 = *$tmp1732;
            panda$core$String** $tmp1734 = ((panda$core$String**) ((char*) $match$5_11628->$data + 24));
            _f21733 = *$tmp1734;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11731));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21733));
        }
        }
        else {
        panda$core$Bit $tmp1735 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp1735.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1737 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01736 = *$tmp1737;
            org$pandalanguage$pandac$ASTNode** $tmp1739 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11628->$data + 16));
            _f11738 = *$tmp1739;
            panda$collections$ImmutableArray** $tmp1741 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11628->$data + 24));
            _f21740 = *$tmp1741;
            org$pandalanguage$pandac$ASTNode** $tmp1743 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11628->$data + 32));
            _f31742 = *$tmp1743;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11738));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21740));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31742));
        }
        }
        else {
        panda$core$Bit $tmp1744 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp1744.value) {
        {
            panda$collections$ImmutableArray** $tmp1746 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11628->$data + 0));
            _f01745 = *$tmp1746;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f01745));
        }
        }
        else {
        panda$core$Bit $tmp1747 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp1747.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1749 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01748 = *$tmp1749;
            panda$core$String** $tmp1751 = ((panda$core$String**) ((char*) $match$5_11628->$data + 16));
            _f11750 = *$tmp1751;
            org$pandalanguage$pandac$ASTNode** $tmp1753 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11628->$data + 24));
            _f21752 = *$tmp1753;
            org$pandalanguage$pandac$ASTNode** $tmp1755 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11628->$data + 32));
            _f31754 = *$tmp1755;
            panda$collections$ImmutableArray** $tmp1757 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11628->$data + 40));
            _f41756 = *$tmp1757;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11750));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21752));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31754));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41756));
        }
        }
        else {
        panda$core$Bit $tmp1758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp1758.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1760 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01759 = *$tmp1760;
            panda$core$String** $tmp1762 = ((panda$core$String**) ((char*) $match$5_11628->$data + 16));
            _f11761 = *$tmp1762;
            panda$collections$ImmutableArray** $tmp1764 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11628->$data + 24));
            _f21763 = *$tmp1764;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11761));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21763));
        }
        }
        else {
        panda$core$Bit $tmp1765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp1765.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1767 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01766 = *$tmp1767;
            panda$core$String** $tmp1769 = ((panda$core$String**) ((char*) $match$5_11628->$data + 16));
            _f11768 = *$tmp1769;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11768));
        }
        }
        else {
        panda$core$Bit $tmp1770 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp1770.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1772 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01771 = *$tmp1772;
            org$pandalanguage$pandac$ASTNode** $tmp1774 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11628->$data + 16));
            _f11773 = *$tmp1774;
            panda$collections$ImmutableArray** $tmp1776 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11628->$data + 24));
            _f21775 = *$tmp1776;
            org$pandalanguage$pandac$ASTNode** $tmp1778 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11628->$data + 32));
            _f31777 = *$tmp1778;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11773));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21775));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31777));
        }
        }
        else {
        panda$core$Bit $tmp1779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp1779.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1781 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01780 = *$tmp1781;
            panda$core$UInt64* $tmp1783 = ((panda$core$UInt64*) ((char*) $match$5_11628->$data + 16));
            _f11782 = *$tmp1783;
        }
        }
        else {
        panda$core$Bit $tmp1784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp1784.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1786 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11628->$data + 0));
            _f01785 = *$tmp1786;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f01785));
        }
        }
        else {
        panda$core$Bit $tmp1787 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1787.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1789 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01788 = *$tmp1789;
            panda$core$String** $tmp1791 = ((panda$core$String**) ((char*) $match$5_11628->$data + 16));
            _f11790 = *$tmp1791;
            panda$collections$ImmutableArray** $tmp1793 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11628->$data + 24));
            _f21792 = *$tmp1793;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11790));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21792));
        }
        }
        else {
        panda$core$Bit $tmp1794 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1794.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1796 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01795 = *$tmp1796;
            org$pandalanguage$pandac$ASTNode** $tmp1798 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11628->$data + 16));
            _f11797 = *$tmp1798;
            panda$collections$ImmutableArray** $tmp1800 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11628->$data + 24));
            _f21799 = *$tmp1800;
            panda$collections$ImmutableArray** $tmp1802 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11628->$data + 32));
            _f31801 = *$tmp1802;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11797));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21799));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31801));
        }
        }
        else {
        panda$core$Bit $tmp1803 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1803.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1805 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01804 = *$tmp1805;
            org$pandalanguage$pandac$ASTNode** $tmp1807 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11628->$data + 16));
            _f11806 = *$tmp1807;
            panda$collections$ImmutableArray** $tmp1809 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11628->$data + 24));
            _f21808 = *$tmp1809;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1811 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$5_11628->$data + 32));
            _f31810 = *$tmp1811;
            panda$core$String** $tmp1813 = ((panda$core$String**) ((char*) $match$5_11628->$data + 40));
            _f41812 = *$tmp1813;
            panda$collections$ImmutableArray** $tmp1815 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11628->$data + 48));
            _f51814 = *$tmp1815;
            org$pandalanguage$pandac$ASTNode** $tmp1817 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11628->$data + 56));
            _f61816 = *$tmp1817;
            panda$collections$ImmutableArray** $tmp1819 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11628->$data + 64));
            _f71818 = *$tmp1819;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11806));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21808));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41812));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f51814));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f61816));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f71818));
        }
        }
        else {
        panda$core$Bit $tmp1820 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1820.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1822 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01821 = *$tmp1822;
        }
        }
        else {
        panda$core$Bit $tmp1823 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1823.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1825 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01824 = *$tmp1825;
            org$pandalanguage$pandac$ASTNode** $tmp1827 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11628->$data + 16));
            _f11826 = *$tmp1827;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11826));
        }
        }
        else {
        panda$core$Bit $tmp1828 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1828.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1830 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01829 = *$tmp1830;
            panda$core$String** $tmp1832 = ((panda$core$String**) ((char*) $match$5_11628->$data + 16));
            _f11831 = *$tmp1832;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11831));
        }
        }
        else {
        panda$core$Bit $tmp1833 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1833.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1835 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01834 = *$tmp1835;
            panda$core$String** $tmp1837 = ((panda$core$String**) ((char*) $match$5_11628->$data + 16));
            _f11836 = *$tmp1837;
            org$pandalanguage$pandac$ASTNode** $tmp1839 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11628->$data + 24));
            _f21838 = *$tmp1839;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11836));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21838));
        }
        }
        else {
        panda$core$Bit $tmp1840 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1840.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1842 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01841 = *$tmp1842;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1844 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11628->$data + 16));
            _f11843 = *$tmp1844;
            org$pandalanguage$pandac$ASTNode** $tmp1846 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11628->$data + 24));
            _f21845 = *$tmp1846;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21845));
        }
        }
        else {
        panda$core$Bit $tmp1847 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1847.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1849 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01848 = *$tmp1849;
            org$pandalanguage$pandac$ASTNode** $tmp1851 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11628->$data + 16));
            _f11850 = *$tmp1851;
            org$pandalanguage$pandac$ASTNode** $tmp1853 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11628->$data + 24));
            _f21852 = *$tmp1853;
            panda$core$Bit* $tmp1855 = ((panda$core$Bit*) ((char*) $match$5_11628->$data + 32));
            _f31854 = *$tmp1855;
            org$pandalanguage$pandac$ASTNode** $tmp1857 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11628->$data + 33));
            _f41856 = *$tmp1857;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11850));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21852));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41856));
        }
        }
        else {
        panda$core$Bit $tmp1858 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1858.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1860 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01859 = *$tmp1860;
            panda$core$Real64* $tmp1862 = ((panda$core$Real64*) ((char*) $match$5_11628->$data + 16));
            _f11861 = *$tmp1862;
        }
        }
        else {
        panda$core$Bit $tmp1863 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1863.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1865 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01864 = *$tmp1865;
            org$pandalanguage$pandac$ASTNode** $tmp1867 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11628->$data + 16));
            _f11866 = *$tmp1867;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11866));
        }
        }
        else {
        panda$core$Bit $tmp1868 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1868.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1870 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01869 = *$tmp1870;
        }
        }
        else {
        panda$core$Bit $tmp1871 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1871.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1873 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01872 = *$tmp1873;
            panda$core$String** $tmp1875 = ((panda$core$String**) ((char*) $match$5_11628->$data + 16));
            _f11874 = *$tmp1875;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11874));
        }
        }
        else {
        panda$core$Bit $tmp1876 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1876.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1878 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01877 = *$tmp1878;
        }
        }
        else {
        panda$core$Bit $tmp1879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1879.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1881 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01880 = *$tmp1881;
            panda$core$String** $tmp1883 = ((panda$core$String**) ((char*) $match$5_11628->$data + 16));
            _f11882 = *$tmp1883;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11882));
        }
        }
        else {
        panda$core$Bit $tmp1884 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1884.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1886 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01885 = *$tmp1886;
            panda$core$String** $tmp1888 = ((panda$core$String**) ((char*) $match$5_11628->$data + 16));
            _f11887 = *$tmp1888;
            org$pandalanguage$pandac$ASTNode** $tmp1890 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11628->$data + 24));
            _f21889 = *$tmp1890;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11887));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21889));
        }
        }
        else {
        panda$core$Bit $tmp1891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1891.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1893 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01892 = *$tmp1893;
            panda$core$String** $tmp1895 = ((panda$core$String**) ((char*) $match$5_11628->$data + 16));
            _f11894 = *$tmp1895;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11894));
        }
        }
        else {
        panda$core$Bit $tmp1896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1896.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1898 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01897 = *$tmp1898;
            org$pandalanguage$pandac$Variable$Kind* $tmp1900 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_11628->$data + 16));
            _f11899 = *$tmp1900;
            panda$collections$ImmutableArray** $tmp1902 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11628->$data + 24));
            _f21901 = *$tmp1902;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21901));
        }
        }
        else {
        panda$core$Bit $tmp1903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1903.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1905 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01904 = *$tmp1905;
            panda$collections$ImmutableArray** $tmp1907 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11628->$data + 16));
            _f11906 = *$tmp1907;
            panda$collections$ImmutableArray** $tmp1909 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11628->$data + 24));
            _f21908 = *$tmp1909;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11906));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21908));
        }
        }
        else {
        panda$core$Bit $tmp1910 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11628->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1910.value) {
        {
            org$pandalanguage$pandac$Position* $tmp1912 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11628->$data + 0));
            _f01911 = *$tmp1912;
            panda$core$String** $tmp1914 = ((panda$core$String**) ((char*) $match$5_11628->$data + 16));
            _f11913 = *$tmp1914;
            org$pandalanguage$pandac$ASTNode** $tmp1916 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11628->$data + 24));
            _f21915 = *$tmp1916;
            panda$collections$ImmutableArray** $tmp1918 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11628->$data + 32));
            _f31917 = *$tmp1918;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11913));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21915));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31917));
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
    panda$core$Object$cleanup(((panda$core$Object*) self));
}

