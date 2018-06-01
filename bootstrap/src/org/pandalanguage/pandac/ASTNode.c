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
typedef panda$core$String* (*$fn349)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn390)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn397)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn408)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn449)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn456)(panda$collections$ListView*);
typedef panda$core$String* (*$fn490)(panda$collections$ListView*);
typedef panda$core$String* (*$fn516)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn563)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn570)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn581)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn601)(panda$collections$ListView*);
typedef panda$core$String* (*$fn612)(panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn626)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn633)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn644)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn685)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn696)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn728)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn735)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn746)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn776)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn810)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn817)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn828)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn860)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn867)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn878)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn930)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn937)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn948)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn979)(panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn1020)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1027)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1038)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1072)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1102)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1109)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1120)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1163)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1170)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1181)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1234)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1241)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1252)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1271)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1282)(panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn1302)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1309)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1320)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1373)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1455)(panda$core$Object*);
typedef panda$core$String* (*$fn1557)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1574)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1622)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1646)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1686)(panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn1719)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1726)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1737)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1760)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1767)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1778)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1825)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1832)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1843)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 32, -9211815390615587804, NULL };
static panda$core$String $s261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 13, -8809212395465398403, NULL };
static panda$core$String $s280 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s283 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s298 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s300 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s314 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s324 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x28", 5, 17286533032, NULL };
static panda$core$String $s326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s359 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s478 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s521 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s553 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s590 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s592 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static panda$core$String $s594 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static panda$core$String $s597 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s604 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s647 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s665 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s667 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s672 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s687 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s690 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s717 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s719 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s749 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s755 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 24242135792659305, NULL };
static panda$core$String $s757 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s778 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s800 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s831 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s881 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s909 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s915 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s917 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s920 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s951 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s974 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s982 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1008 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s1010 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1041 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1048 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s1050 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1091 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1093 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s1123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s1153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1189 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1224 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1255 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s1263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s1267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1278 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1285 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1350 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static panda$core$String $s1354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static panda$core$String $s1358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static panda$core$String $s1362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static panda$core$String $s1369 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1390 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x29", 2, 14282, NULL };
static panda$core$String $s1407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s1415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s1436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1480 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s1481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s1483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s1506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1518 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s1520 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1525 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s1530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s1538 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s1544 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s1553 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1560 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1598 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1601 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1625 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static panda$core$String $s1628 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1649 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static panda$core$String $s1652 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1676 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s1678 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s1680 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1682 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s1707 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s1710 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1744 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1747 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1809 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1813 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s1815 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1846 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1860 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 13, -8809212395465398403, NULL };
static panda$core$String $s1863 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x41\x53\x54\x4e\x6f\x64\x65\x3a\x20", 21, -8877512154781713630, NULL };
static panda$core$String $s1867 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

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
            if (((panda$core$Bit) { false }).value) goto $l259; else goto $l260;
            $l260:;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s261, (panda$core$Int64) { 187 });
            abort();
            $l259:;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
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
        case 49: goto $l257;
        case 6: goto $l41;
        case -1: goto $l262;
        case 9: goto $l56;
        case 42: goto $l222;
        case 5: goto $l36;
        case 28: goto $l152;
        case 10: goto $l61;
        case 3: goto $l26;
        case 32: goto $l172;
        case 27: goto $l147;
    }
    $l262:;
    abort();
}
panda$core$String* org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$193_9266 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp267;
    panda$core$String* name269 = NULL;
    org$pandalanguage$pandac$ASTNode* expr271 = NULL;
    panda$core$String* $returnValue273;
    panda$core$String* $tmp274;
    panda$core$String* $tmp275;
    panda$core$String* $tmp276;
    panda$core$String* $tmp277;
    panda$core$String* $tmp278;
    panda$core$String* $tmp287;
    org$pandalanguage$pandac$ASTNode* test291 = NULL;
    org$pandalanguage$pandac$ASTNode* msg293 = NULL;
    panda$core$String* $tmp295;
    panda$core$String* $tmp296;
    panda$core$String* $tmp297;
    panda$core$String* $tmp304;
    panda$core$String* $tmp305;
    panda$core$String* $tmp306;
    panda$core$String* $tmp307;
    panda$core$String* $tmp308;
    org$pandalanguage$pandac$ASTNode* expr319 = NULL;
    panda$core$String* $tmp321;
    panda$core$String* $tmp322;
    panda$core$String* $tmp323;
    panda$core$String* $tmp331;
    org$pandalanguage$pandac$ASTNode* left336 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op338;
    org$pandalanguage$pandac$ASTNode* right340 = NULL;
    panda$core$String* $tmp342;
    panda$core$String* $tmp343;
    panda$core$String* $tmp344;
    panda$core$String* $tmp345;
    panda$core$String* $tmp346;
    panda$core$String* $tmp347;
    panda$core$String* $tmp348;
    panda$core$Object* $tmp353;
    panda$core$Bit value364;
    panda$core$String* $tmp366;
    panda$core$String* $tmp367;
    panda$collections$ImmutableArray* statements372 = NULL;
    panda$core$MutableString* result377 = NULL;
    panda$core$MutableString* $tmp378;
    panda$core$MutableString* $tmp379;
    panda$collections$Iterator* Iter$214$17385 = NULL;
    panda$collections$Iterator* $tmp386;
    panda$collections$Iterator* $tmp387;
    org$pandalanguage$pandac$ASTNode* s403 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp404;
    panda$core$Object* $tmp405;
    panda$core$String* $tmp410;
    panda$core$Char8 $tmp415;
    panda$core$String* $tmp416;
    panda$core$String* $tmp417;
    panda$core$String* label424 = NULL;
    panda$core$String* $tmp426;
    panda$core$String* $tmp427;
    panda$core$String* $tmp428;
    panda$core$String* $tmp435;
    org$pandalanguage$pandac$ASTNode* target440 = NULL;
    panda$collections$ImmutableArray* args442 = NULL;
    panda$core$String* $tmp444;
    panda$core$String* $tmp445;
    panda$core$String* $tmp446;
    panda$core$String* $tmp447;
    panda$core$String* $tmp448;
    panda$core$String* $tmp453;
    org$pandalanguage$pandac$ASTNode* dc464 = NULL;
    panda$core$String* name466 = NULL;
    panda$collections$ImmutableArray* fields468 = NULL;
    panda$core$MutableString* result473 = NULL;
    panda$core$MutableString* $tmp474;
    panda$core$MutableString* $tmp475;
    panda$core$String* $tmp477;
    panda$core$String* $tmp480;
    panda$core$String* $tmp481;
    panda$core$String* $tmp482;
    panda$core$String* $tmp483;
    panda$core$String* $tmp487;
    panda$core$String* $tmp495;
    panda$core$String* $tmp496;
    org$pandalanguage$pandac$ASTNode* base503 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce505 = NULL;
    panda$core$Int64 index507;
    panda$core$String* $tmp509;
    panda$core$String* $tmp510;
    panda$core$String* $tmp511;
    panda$core$String* $tmp512;
    panda$core$String* $tmp513;
    panda$core$String* $tmp514;
    panda$core$String* $tmp515;
    panda$core$Object* $tmp523;
    org$pandalanguage$pandac$ASTNode* dc531 = NULL;
    panda$collections$ImmutableArray* annotations533 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind535;
    panda$core$String* name537 = NULL;
    panda$collections$ImmutableArray* generics539 = NULL;
    panda$collections$ImmutableArray* supertypes541 = NULL;
    panda$collections$ImmutableArray* members543 = NULL;
    panda$core$MutableString* result548 = NULL;
    panda$core$MutableString* $tmp549;
    panda$core$MutableString* $tmp550;
    panda$core$String* $tmp552;
    panda$collections$Iterator* Iter$240$17558 = NULL;
    panda$collections$Iterator* $tmp559;
    panda$collections$Iterator* $tmp560;
    org$pandalanguage$pandac$ASTNode* a576 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp577;
    panda$core$Object* $tmp578;
    panda$core$String* $tmp583;
    org$pandalanguage$pandac$ClassDecl$Kind $match$243_17588;
    panda$core$String* $tmp595;
    panda$core$String* $tmp596;
    panda$core$String* $tmp598;
    panda$core$String* $tmp606;
    panda$core$String* $tmp607;
    panda$core$String* $tmp609;
    panda$collections$Iterator* Iter$256$17621 = NULL;
    panda$collections$Iterator* $tmp622;
    panda$collections$Iterator* $tmp623;
    org$pandalanguage$pandac$ASTNode* m639 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp640;
    panda$core$Object* $tmp641;
    panda$core$String* $tmp646;
    panda$core$Char8 $tmp651;
    panda$core$String* $tmp652;
    panda$core$String* $tmp653;
    panda$core$String* label660 = NULL;
    panda$core$String* $tmp662;
    panda$core$String* $tmp663;
    panda$core$String* $tmp664;
    panda$core$String* $tmp671;
    org$pandalanguage$pandac$ASTNode* target676 = NULL;
    org$pandalanguage$pandac$ASTNode* value678 = NULL;
    panda$core$String* $tmp680;
    panda$core$String* $tmp681;
    panda$core$String* $tmp682;
    panda$core$String* $tmp683;
    panda$core$String* $tmp684;
    panda$core$String* $tmp694;
    panda$core$String* $tmp695;
    panda$core$String* label701 = NULL;
    panda$collections$ImmutableArray* statements703 = NULL;
    org$pandalanguage$pandac$ASTNode* test705 = NULL;
    panda$core$MutableString* result710 = NULL;
    panda$core$MutableString* $tmp711;
    panda$core$MutableString* $tmp712;
    panda$core$String* $tmp714;
    panda$core$String* $tmp715;
    panda$collections$Iterator* Iter$277$17723 = NULL;
    panda$collections$Iterator* $tmp724;
    panda$collections$Iterator* $tmp725;
    org$pandalanguage$pandac$ASTNode* s741 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp742;
    panda$core$Object* $tmp743;
    panda$core$String* $tmp748;
    panda$core$String* $tmp753;
    panda$core$String* $tmp754;
    panda$core$String* $tmp759;
    panda$core$String* $tmp760;
    org$pandalanguage$pandac$ASTNode* base767 = NULL;
    panda$core$String* field769 = NULL;
    panda$core$String* $tmp771;
    panda$core$String* $tmp772;
    panda$core$String* $tmp773;
    panda$core$String* $tmp774;
    panda$core$String* $tmp775;
    org$pandalanguage$pandac$ASTNode* dc786 = NULL;
    panda$collections$ImmutableArray* annotations788 = NULL;
    org$pandalanguage$pandac$ASTNode* decl790 = NULL;
    panda$core$MutableString* result795 = NULL;
    panda$core$MutableString* $tmp796;
    panda$core$MutableString* $tmp797;
    panda$core$String* $tmp799;
    panda$collections$Iterator* Iter$289$17805 = NULL;
    panda$collections$Iterator* $tmp806;
    panda$collections$Iterator* $tmp807;
    org$pandalanguage$pandac$ASTNode* a823 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp824;
    panda$core$Object* $tmp825;
    panda$core$String* $tmp830;
    panda$core$String* $tmp835;
    panda$core$String* $tmp836;
    panda$collections$ImmutableArray* entries843 = NULL;
    panda$core$MutableString* result848 = NULL;
    panda$core$MutableString* $tmp849;
    panda$core$MutableString* $tmp850;
    panda$collections$Iterator* Iter$296$17855 = NULL;
    panda$collections$Iterator* $tmp856;
    panda$collections$Iterator* $tmp857;
    org$pandalanguage$pandac$ASTNode* e873 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp874;
    panda$core$Object* $tmp875;
    panda$core$String* $tmp880;
    panda$core$String* $tmp885;
    panda$core$String* $tmp886;
    panda$core$String* label893 = NULL;
    org$pandalanguage$pandac$ASTNode* target895 = NULL;
    org$pandalanguage$pandac$ASTNode* list897 = NULL;
    panda$collections$ImmutableArray* statements899 = NULL;
    panda$core$MutableString* result904 = NULL;
    panda$core$MutableString* $tmp905;
    panda$core$MutableString* $tmp906;
    panda$core$String* $tmp908;
    panda$core$String* $tmp911;
    panda$core$String* $tmp912;
    panda$core$String* $tmp913;
    panda$core$String* $tmp914;
    panda$collections$Iterator* Iter$306$17925 = NULL;
    panda$collections$Iterator* $tmp926;
    panda$collections$Iterator* $tmp927;
    org$pandalanguage$pandac$ASTNode* s943 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp944;
    panda$core$Object* $tmp945;
    panda$core$String* $tmp950;
    panda$core$Char8 $tmp955;
    panda$core$String* $tmp956;
    panda$core$String* $tmp957;
    panda$core$String* name964 = NULL;
    panda$collections$ImmutableArray* subtypes966 = NULL;
    panda$core$String* $tmp968;
    panda$core$String* $tmp969;
    panda$core$String* $tmp970;
    panda$core$String* $tmp971;
    panda$core$String* $tmp972;
    panda$core$String* $tmp976;
    panda$core$String* name987 = NULL;
    panda$core$String* $tmp989;
    org$pandalanguage$pandac$ASTNode* test993 = NULL;
    panda$collections$ImmutableArray* ifTrue995 = NULL;
    org$pandalanguage$pandac$ASTNode* ifFalse997 = NULL;
    panda$core$MutableString* result1002 = NULL;
    panda$core$MutableString* $tmp1003;
    panda$core$MutableString* $tmp1004;
    panda$core$String* $tmp1006;
    panda$core$String* $tmp1007;
    panda$collections$Iterator* Iter$317$171015 = NULL;
    panda$collections$Iterator* $tmp1016;
    panda$collections$Iterator* $tmp1017;
    org$pandalanguage$pandac$ASTNode* s1033 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1034;
    panda$core$Object* $tmp1035;
    panda$core$String* $tmp1040;
    panda$core$Char8 $tmp1045;
    panda$core$String* $tmp1046;
    panda$core$String* $tmp1047;
    panda$core$String* $tmp1052;
    panda$core$String* $tmp1053;
    panda$core$UInt64 value1060;
    panda$core$String* $tmp1062;
    panda$core$String* $tmp1063;
    org$pandalanguage$pandac$IRNode* ir1068 = NULL;
    panda$core$String* $tmp1070;
    panda$core$String* $tmp1071;
    panda$core$String* label1077 = NULL;
    panda$collections$ImmutableArray* statements1079 = NULL;
    panda$core$MutableString* result1084 = NULL;
    panda$core$MutableString* $tmp1085;
    panda$core$MutableString* $tmp1086;
    panda$core$String* $tmp1088;
    panda$core$String* $tmp1089;
    panda$collections$Iterator* Iter$335$171097 = NULL;
    panda$collections$Iterator* $tmp1098;
    panda$collections$Iterator* $tmp1099;
    org$pandalanguage$pandac$ASTNode* s1115 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1116;
    panda$core$Object* $tmp1117;
    panda$core$String* $tmp1122;
    panda$core$Char8 $tmp1127;
    panda$core$String* $tmp1128;
    panda$core$String* $tmp1129;
    org$pandalanguage$pandac$ASTNode* value1136 = NULL;
    panda$collections$ImmutableArray* whens1138 = NULL;
    panda$collections$ImmutableArray* other1140 = NULL;
    panda$core$MutableString* result1145 = NULL;
    panda$core$MutableString* $tmp1146;
    panda$core$MutableString* $tmp1147;
    panda$core$String* $tmp1149;
    panda$core$String* $tmp1150;
    panda$collections$Iterator* Iter$342$171158 = NULL;
    panda$collections$Iterator* $tmp1159;
    panda$collections$Iterator* $tmp1160;
    org$pandalanguage$pandac$ASTNode* w1176 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1177;
    panda$core$Object* $tmp1178;
    panda$core$String* $tmp1183;
    panda$core$String* $tmp1188;
    panda$core$Char8 $tmp1191;
    panda$core$String* $tmp1192;
    panda$core$String* $tmp1193;
    org$pandalanguage$pandac$ASTNode* dc1200 = NULL;
    panda$collections$ImmutableArray* annotations1202 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind1204;
    panda$core$String* name1206 = NULL;
    panda$collections$ImmutableArray* generics1208 = NULL;
    panda$collections$ImmutableArray* parameters1210 = NULL;
    org$pandalanguage$pandac$ASTNode* returnType1212 = NULL;
    panda$collections$ImmutableArray* statements1214 = NULL;
    panda$core$MutableString* result1219 = NULL;
    panda$core$MutableString* $tmp1220;
    panda$core$MutableString* $tmp1221;
    panda$core$String* $tmp1223;
    panda$collections$Iterator* Iter$355$171229 = NULL;
    panda$collections$Iterator* $tmp1230;
    panda$collections$Iterator* $tmp1231;
    org$pandalanguage$pandac$ASTNode* a1247 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1248;
    panda$core$Object* $tmp1249;
    panda$core$String* $tmp1254;
    org$pandalanguage$pandac$MethodDecl$Kind $match$358_171259;
    panda$core$String* $tmp1265;
    panda$core$String* $tmp1266;
    panda$core$String* $tmp1268;
    panda$core$String* $tmp1276;
    panda$core$String* $tmp1277;
    panda$core$String* $tmp1279;
    panda$core$String* $tmp1287;
    panda$core$String* $tmp1288;
    panda$collections$Iterator* Iter$373$211297 = NULL;
    panda$collections$Iterator* $tmp1298;
    panda$collections$Iterator* $tmp1299;
    org$pandalanguage$pandac$ASTNode* s1315 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1316;
    panda$core$Object* $tmp1317;
    panda$core$String* $tmp1322;
    panda$core$Char8 $tmp1327;
    panda$core$String* $tmp1328;
    panda$core$String* $tmp1329;
    org$pandalanguage$pandac$parser$Token$Kind kind1336;
    panda$collections$ImmutableArray* paramTypes1338 = NULL;
    org$pandalanguage$pandac$ASTNode* returnType1340 = NULL;
    panda$core$String* yield1345 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $match$381_171346;
    panda$core$String* $tmp1348;
    panda$core$String* $tmp1349;
    panda$core$String* $tmp1352;
    panda$core$String* $tmp1353;
    panda$core$String* $tmp1356;
    panda$core$String* $tmp1357;
    panda$core$String* $tmp1360;
    panda$core$String* $tmp1361;
    panda$core$String* partial1363 = NULL;
    panda$core$String* $tmp1364;
    panda$core$String* $tmp1365;
    panda$core$String* $tmp1366;
    panda$core$String* $tmp1367;
    panda$core$String* $tmp1368;
    panda$core$String* $tmp1370;
    panda$core$String* $tmp1381;
    panda$core$String* $tmp1382;
    panda$core$String* $tmp1383;
    panda$core$String* $tmp1384;
    panda$core$String* $tmp1385;
    panda$core$String* $tmp1395;
    panda$core$String* $tmp1396;
    panda$core$String* $tmp1397;
    panda$core$String* $tmp1406;
    org$pandalanguage$pandac$ASTNode* base1411 = NULL;
    panda$core$String* $tmp1413;
    panda$core$String* $tmp1414;
    panda$core$String* name1420 = NULL;
    panda$core$String* $tmp1422;
    panda$core$String* name1426 = NULL;
    org$pandalanguage$pandac$ASTNode* type1428 = NULL;
    panda$core$String* $tmp1430;
    panda$core$String* $tmp1431;
    panda$core$String* $tmp1432;
    panda$core$String* $tmp1433;
    panda$core$String* $tmp1434;
    org$pandalanguage$pandac$parser$Token$Kind kind1444;
    org$pandalanguage$pandac$ASTNode* base1446 = NULL;
    panda$core$String* $tmp1448;
    panda$core$String* $tmp1449;
    panda$core$String* $tmp1450;
    panda$core$String* $tmp1451;
    panda$core$String* $tmp1452;
    panda$core$Object* $tmp1453;
    org$pandalanguage$pandac$ASTNode* start1465 = NULL;
    org$pandalanguage$pandac$ASTNode* end1467 = NULL;
    panda$core$Bit inclusive1469;
    org$pandalanguage$pandac$ASTNode* step1471 = NULL;
    panda$core$MutableString* result1476 = NULL;
    panda$core$MutableString* $tmp1477;
    panda$core$MutableString* $tmp1478;
    panda$core$String* $tmp1482;
    panda$core$String* $tmp1485;
    panda$core$String* $tmp1486;
    panda$core$Real64 value1493;
    panda$core$String* $tmp1495;
    panda$core$String* $tmp1496;
    panda$core$String* src1501 = NULL;
    panda$core$String* $tmp1503;
    panda$core$String* $tmp1504;
    panda$core$String* $tmp1505;
    org$pandalanguage$pandac$ASTNode* value1513 = NULL;
    panda$core$String* $tmp1515;
    panda$core$String* $tmp1516;
    panda$core$String* $tmp1517;
    panda$core$String* $tmp1524;
    panda$core$String* $tmp1529;
    panda$core$String* str1534 = NULL;
    panda$core$String* $tmp1536;
    panda$core$String* $tmp1537;
    panda$core$String* $tmp1543;
    panda$collections$ImmutableArray* arguments1548 = NULL;
    panda$core$String* $tmp1550;
    panda$core$String* $tmp1551;
    panda$core$String* $tmp1552;
    panda$core$String* $tmp1554;
    panda$collections$ImmutableArray* parameters1565 = NULL;
    panda$core$String* $tmp1567;
    panda$core$String* $tmp1568;
    panda$core$String* $tmp1569;
    panda$core$String* $tmp1571;
    panda$core$String* name1582 = NULL;
    panda$core$String* $tmp1584;
    panda$core$String* name1588 = NULL;
    org$pandalanguage$pandac$ASTNode* type1590 = NULL;
    panda$core$String* $tmp1592;
    panda$core$String* $tmp1593;
    panda$core$String* $tmp1594;
    panda$core$String* $tmp1595;
    panda$core$String* $tmp1596;
    panda$core$String* $tmp1605;
    panda$collections$ImmutableArray* parameters1609 = NULL;
    org$pandalanguage$pandac$ASTNode* body1611 = NULL;
    panda$core$String* $tmp1613;
    panda$core$String* $tmp1614;
    panda$core$String* $tmp1615;
    panda$core$String* $tmp1616;
    panda$core$String* $tmp1617;
    panda$core$String* $tmp1619;
    panda$collections$ImmutableArray* parameters1633 = NULL;
    org$pandalanguage$pandac$ASTNode* body1635 = NULL;
    panda$core$String* $tmp1637;
    panda$core$String* $tmp1638;
    panda$core$String* $tmp1639;
    panda$core$String* $tmp1640;
    panda$core$String* $tmp1641;
    panda$core$String* $tmp1643;
    panda$core$String* name1657 = NULL;
    panda$core$String* $tmp1659;
    org$pandalanguage$pandac$Variable$Kind kind1663;
    panda$collections$ImmutableArray* decls1665 = NULL;
    panda$core$MutableString* result1670 = NULL;
    panda$core$MutableString* $tmp1671;
    panda$core$MutableString* $tmp1672;
    org$pandalanguage$pandac$Variable$Kind $match$458_171674;
    panda$core$String* $tmp1683;
    panda$core$String* $tmp1688;
    panda$core$String* $tmp1689;
    panda$collections$ImmutableArray* tests1696 = NULL;
    panda$collections$ImmutableArray* statements1698 = NULL;
    panda$core$MutableString* result1703 = NULL;
    panda$core$MutableString* $tmp1704;
    panda$core$MutableString* $tmp1705;
    panda$core$String* separator1708 = NULL;
    panda$core$String* $tmp1709;
    panda$collections$Iterator* Iter$469$171714 = NULL;
    panda$collections$Iterator* $tmp1715;
    panda$collections$Iterator* $tmp1716;
    org$pandalanguage$pandac$ASTNode* t1732 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1733;
    panda$core$Object* $tmp1734;
    panda$core$String* $tmp1739;
    panda$core$String* $tmp1740;
    panda$core$String* $tmp1741;
    panda$core$String* $tmp1742;
    panda$core$Char8 $tmp1751;
    panda$collections$Iterator* Iter$473$171755 = NULL;
    panda$collections$Iterator* $tmp1756;
    panda$collections$Iterator* $tmp1757;
    org$pandalanguage$pandac$ASTNode* s1773 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1774;
    panda$core$Object* $tmp1775;
    panda$core$String* $tmp1780;
    panda$core$String* $tmp1785;
    panda$core$String* $tmp1786;
    panda$core$String* label1793 = NULL;
    org$pandalanguage$pandac$ASTNode* test1795 = NULL;
    panda$collections$ImmutableArray* statements1797 = NULL;
    panda$core$MutableString* result1802 = NULL;
    panda$core$MutableString* $tmp1803;
    panda$core$MutableString* $tmp1804;
    panda$core$String* $tmp1806;
    panda$core$String* $tmp1807;
    panda$core$String* $tmp1811;
    panda$core$String* $tmp1812;
    panda$collections$Iterator* Iter$483$171820 = NULL;
    panda$collections$Iterator* $tmp1821;
    panda$collections$Iterator* $tmp1822;
    org$pandalanguage$pandac$ASTNode* s1838 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1839;
    panda$core$Object* $tmp1840;
    panda$core$String* $tmp1845;
    panda$core$Char8 $tmp1850;
    panda$core$String* $tmp1851;
    panda$core$String* $tmp1852;
    panda$core$String* $tmp1861;
    panda$core$String* $tmp1862;
    panda$core$Object* $tmp1864;
    int $tmp265;
    {
        $tmp267 = self;
        $match$193_9266 = $tmp267;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp267));
        panda$core$Bit $tmp268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp268.value) {
        {
            panda$core$String** $tmp270 = ((panda$core$String**) ((char*) $match$193_9266->$data + 16));
            name269 = *$tmp270;
            org$pandalanguage$pandac$ASTNode** $tmp272 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 24));
            expr271 = *$tmp272;
            if (((panda$core$Bit) { expr271 != NULL }).value) {
            {
                panda$core$String* $tmp279 = panda$core$String$convert$R$panda$core$String(name269);
                $tmp278 = $tmp279;
                panda$core$String* $tmp281 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp278, &$s280);
                $tmp277 = $tmp281;
                panda$core$String* $tmp282 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp277, ((panda$core$Object*) expr271));
                $tmp276 = $tmp282;
                panda$core$String* $tmp284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp276, &$s283);
                $tmp275 = $tmp284;
                $tmp274 = $tmp275;
                $returnValue273 = $tmp274;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp274));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp275));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp276));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp277));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp278));
                $tmp265 = 0;
                goto $l263;
                $l285:;
                return $returnValue273;
            }
            }
            $tmp287 = name269;
            $returnValue273 = $tmp287;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp287));
            $tmp265 = 1;
            goto $l263;
            $l288:;
            return $returnValue273;
        }
        }
        else {
        panda$core$Bit $tmp290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp290.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp292 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 16));
            test291 = *$tmp292;
            org$pandalanguage$pandac$ASTNode** $tmp294 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 24));
            msg293 = *$tmp294;
            if (((panda$core$Bit) { msg293 == NULL }).value) {
            {
                panda$core$String* $tmp299 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s298, ((panda$core$Object*) test291));
                $tmp297 = $tmp299;
                panda$core$String* $tmp301 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp297, &$s300);
                $tmp296 = $tmp301;
                $tmp295 = $tmp296;
                $returnValue273 = $tmp295;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp295));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp296));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp297));
                $tmp265 = 2;
                goto $l263;
                $l302:;
                return $returnValue273;
            }
            }
            panda$core$String* $tmp310 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s309, ((panda$core$Object*) test291));
            $tmp308 = $tmp310;
            panda$core$String* $tmp312 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp308, &$s311);
            $tmp307 = $tmp312;
            panda$core$String* $tmp313 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp307, ((panda$core$Object*) msg293));
            $tmp306 = $tmp313;
            panda$core$String* $tmp315 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp306, &$s314);
            $tmp305 = $tmp315;
            $tmp304 = $tmp305;
            $returnValue273 = $tmp304;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp304));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp305));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp306));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp307));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp308));
            $tmp265 = 3;
            goto $l263;
            $l316:;
            return $returnValue273;
        }
        }
        else {
        panda$core$Bit $tmp318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp318.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp320 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 16));
            expr319 = *$tmp320;
            panda$core$String* $tmp325 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s324, ((panda$core$Object*) expr319));
            $tmp323 = $tmp325;
            panda$core$String* $tmp327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp323, &$s326);
            $tmp322 = $tmp327;
            $tmp321 = $tmp322;
            $returnValue273 = $tmp321;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp321));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp322));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp323));
            $tmp265 = 4;
            goto $l263;
            $l328:;
            return $returnValue273;
        }
        }
        else {
        panda$core$Bit $tmp330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp330.value) {
        {
            $tmp331 = &$s332;
            $returnValue273 = $tmp331;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp331));
            $tmp265 = 5;
            goto $l263;
            $l333:;
            return $returnValue273;
        }
        }
        else {
        panda$core$Bit $tmp335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp335.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp337 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 16));
            left336 = *$tmp337;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp339 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$193_9266->$data + 24));
            op338 = *$tmp339;
            org$pandalanguage$pandac$ASTNode** $tmp341 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 32));
            right340 = *$tmp341;
            panda$core$String* $tmp350 = (($fn349) left336->$class->vtable[0])(left336);
            $tmp348 = $tmp350;
            panda$core$String* $tmp352 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp348, &$s351);
            $tmp347 = $tmp352;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp354;
            $tmp354 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp354->value = op338;
            $tmp353 = ((panda$core$Object*) $tmp354);
            panda$core$String* $tmp355 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp347, $tmp353);
            $tmp346 = $tmp355;
            panda$core$String* $tmp357 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp346, &$s356);
            $tmp345 = $tmp357;
            panda$core$String* $tmp358 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp345, ((panda$core$Object*) right340));
            $tmp344 = $tmp358;
            panda$core$String* $tmp360 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp344, &$s359);
            $tmp343 = $tmp360;
            $tmp342 = $tmp343;
            $returnValue273 = $tmp342;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp342));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp343));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp344));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp345));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp346));
            panda$core$Panda$unref$panda$core$Object($tmp353);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp347));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp348));
            $tmp265 = 6;
            goto $l263;
            $l361:;
            return $returnValue273;
        }
        }
        else {
        panda$core$Bit $tmp363 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp363.value) {
        {
            panda$core$Bit* $tmp365 = ((panda$core$Bit*) ((char*) $match$193_9266->$data + 16));
            value364 = *$tmp365;
            panda$core$String* $tmp368 = panda$core$Bit$convert$R$panda$core$String(value364);
            $tmp367 = $tmp368;
            $tmp366 = $tmp367;
            $returnValue273 = $tmp366;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp366));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp367));
            $tmp265 = 7;
            goto $l263;
            $l369:;
            return $returnValue273;
        }
        }
        else {
        panda$core$Bit $tmp371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp371.value) {
        {
            panda$collections$ImmutableArray** $tmp373 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9266->$data + 16));
            statements372 = *$tmp373;
            int $tmp376;
            {
                panda$core$MutableString* $tmp380 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp380, &$s381);
                $tmp379 = $tmp380;
                $tmp378 = $tmp379;
                result377 = $tmp378;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp378));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp379));
                {
                    int $tmp384;
                    {
                        ITable* $tmp388 = ((panda$collections$Iterable*) statements372)->$class->itable;
                        while ($tmp388->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp388 = $tmp388->next;
                        }
                        $fn390 $tmp389 = $tmp388->methods[0];
                        panda$collections$Iterator* $tmp391 = $tmp389(((panda$collections$Iterable*) statements372));
                        $tmp387 = $tmp391;
                        $tmp386 = $tmp387;
                        Iter$214$17385 = $tmp386;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp386));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp387));
                        $l392:;
                        ITable* $tmp395 = Iter$214$17385->$class->itable;
                        while ($tmp395->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp395 = $tmp395->next;
                        }
                        $fn397 $tmp396 = $tmp395->methods[0];
                        panda$core$Bit $tmp398 = $tmp396(Iter$214$17385);
                        panda$core$Bit $tmp399 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp398);
                        bool $tmp394 = $tmp399.value;
                        if (!$tmp394) goto $l393;
                        {
                            int $tmp402;
                            {
                                ITable* $tmp406 = Iter$214$17385->$class->itable;
                                while ($tmp406->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp406 = $tmp406->next;
                                }
                                $fn408 $tmp407 = $tmp406->methods[1];
                                panda$core$Object* $tmp409 = $tmp407(Iter$214$17385);
                                $tmp405 = $tmp409;
                                $tmp404 = ((org$pandalanguage$pandac$ASTNode*) $tmp405);
                                s403 = $tmp404;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp404));
                                panda$core$Panda$unref$panda$core$Object($tmp405);
                                panda$core$String* $tmp412 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s403), &$s411);
                                $tmp410 = $tmp412;
                                panda$core$MutableString$append$panda$core$String(result377, $tmp410);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp410));
                            }
                            $tmp402 = -1;
                            goto $l400;
                            $l400:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s403));
                            s403 = NULL;
                            switch ($tmp402) {
                                case -1: goto $l413;
                            }
                            $l413:;
                        }
                        goto $l392;
                        $l393:;
                    }
                    $tmp384 = -1;
                    goto $l382;
                    $l382:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$214$17385));
                    Iter$214$17385 = NULL;
                    switch ($tmp384) {
                        case -1: goto $l414;
                    }
                    $l414:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp415, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result377, $tmp415);
                panda$core$String* $tmp418 = panda$core$MutableString$finish$R$panda$core$String(result377);
                $tmp417 = $tmp418;
                $tmp416 = $tmp417;
                $returnValue273 = $tmp416;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp416));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp417));
                $tmp376 = 0;
                goto $l374;
                $l419:;
                $tmp265 = 8;
                goto $l263;
                $l420:;
                return $returnValue273;
            }
            $l374:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result377));
            result377 = NULL;
            switch ($tmp376) {
                case 0: goto $l419;
            }
            $l422:;
        }
        }
        else {
        panda$core$Bit $tmp423 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp423.value) {
        {
            panda$core$String** $tmp425 = ((panda$core$String**) ((char*) $match$193_9266->$data + 16));
            label424 = *$tmp425;
            if (((panda$core$Bit) { label424 != NULL }).value) {
            {
                panda$core$String* $tmp430 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s429, label424);
                $tmp428 = $tmp430;
                panda$core$String* $tmp432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp428, &$s431);
                $tmp427 = $tmp432;
                $tmp426 = $tmp427;
                $returnValue273 = $tmp426;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp426));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp427));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp428));
                $tmp265 = 9;
                goto $l263;
                $l433:;
                return $returnValue273;
            }
            }
            $tmp435 = &$s436;
            $returnValue273 = $tmp435;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp435));
            $tmp265 = 10;
            goto $l263;
            $l437:;
            return $returnValue273;
        }
        }
        else {
        panda$core$Bit $tmp439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp439.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp441 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 16));
            target440 = *$tmp441;
            panda$collections$ImmutableArray** $tmp443 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9266->$data + 24));
            args442 = *$tmp443;
            panda$core$String* $tmp450 = (($fn449) target440->$class->vtable[0])(target440);
            $tmp448 = $tmp450;
            panda$core$String* $tmp452 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp448, &$s451);
            $tmp447 = $tmp452;
            ITable* $tmp454 = ((panda$collections$ListView*) args442)->$class->itable;
            while ($tmp454->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp454 = $tmp454->next;
            }
            $fn456 $tmp455 = $tmp454->methods[4];
            panda$core$String* $tmp457 = $tmp455(((panda$collections$ListView*) args442));
            $tmp453 = $tmp457;
            panda$core$String* $tmp458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp447, $tmp453);
            $tmp446 = $tmp458;
            panda$core$String* $tmp460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp446, &$s459);
            $tmp445 = $tmp460;
            $tmp444 = $tmp445;
            $returnValue273 = $tmp444;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp444));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp445));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp446));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp453));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp447));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp448));
            $tmp265 = 11;
            goto $l263;
            $l461:;
            return $returnValue273;
        }
        }
        else {
        panda$core$Bit $tmp463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp463.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp465 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 16));
            dc464 = *$tmp465;
            panda$core$String** $tmp467 = ((panda$core$String**) ((char*) $match$193_9266->$data + 24));
            name466 = *$tmp467;
            panda$collections$ImmutableArray** $tmp469 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9266->$data + 32));
            fields468 = *$tmp469;
            int $tmp472;
            {
                panda$core$MutableString* $tmp476 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp476);
                $tmp475 = $tmp476;
                $tmp474 = $tmp475;
                result473 = $tmp474;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp474));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp475));
                if (((panda$core$Bit) { dc464 != NULL }).value) {
                {
                    panda$core$String* $tmp479 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc464), &$s478);
                    $tmp477 = $tmp479;
                    panda$core$MutableString$append$panda$core$String(result473, $tmp477);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp477));
                }
                }
                panda$core$String* $tmp484 = panda$core$String$convert$R$panda$core$String(name466);
                $tmp483 = $tmp484;
                panda$core$String* $tmp486 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp483, &$s485);
                $tmp482 = $tmp486;
                ITable* $tmp488 = ((panda$collections$ListView*) fields468)->$class->itable;
                while ($tmp488->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp488 = $tmp488->next;
                }
                $fn490 $tmp489 = $tmp488->methods[4];
                panda$core$String* $tmp491 = $tmp489(((panda$collections$ListView*) fields468));
                $tmp487 = $tmp491;
                panda$core$String* $tmp492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp482, $tmp487);
                $tmp481 = $tmp492;
                panda$core$String* $tmp494 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp481, &$s493);
                $tmp480 = $tmp494;
                panda$core$MutableString$append$panda$core$String(result473, $tmp480);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp480));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp481));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp487));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp482));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp483));
                panda$core$String* $tmp497 = panda$core$MutableString$finish$R$panda$core$String(result473);
                $tmp496 = $tmp497;
                $tmp495 = $tmp496;
                $returnValue273 = $tmp495;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp495));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp496));
                $tmp472 = 0;
                goto $l470;
                $l498:;
                $tmp265 = 12;
                goto $l263;
                $l499:;
                return $returnValue273;
            }
            $l470:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result473));
            result473 = NULL;
            switch ($tmp472) {
                case 0: goto $l498;
            }
            $l501:;
        }
        }
        else {
        panda$core$Bit $tmp502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp502.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp504 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 16));
            base503 = *$tmp504;
            org$pandalanguage$pandac$ChoiceEntry** $tmp506 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$193_9266->$data + 24));
            ce505 = *$tmp506;
            panda$core$Int64* $tmp508 = ((panda$core$Int64*) ((char*) $match$193_9266->$data + 32));
            index507 = *$tmp508;
            panda$core$String* $tmp517 = (($fn516) base503->$class->vtable[0])(base503);
            $tmp515 = $tmp517;
            panda$core$String* $tmp519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp515, &$s518);
            $tmp514 = $tmp519;
            panda$core$String* $tmp520 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp514, ((panda$core$Object*) ce505));
            $tmp513 = $tmp520;
            panda$core$String* $tmp522 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp513, &$s521);
            $tmp512 = $tmp522;
            panda$core$Int64$wrapper* $tmp524;
            $tmp524 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp524->value = index507;
            $tmp523 = ((panda$core$Object*) $tmp524);
            panda$core$String* $tmp525 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp512, $tmp523);
            $tmp511 = $tmp525;
            panda$core$String* $tmp527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp511, &$s526);
            $tmp510 = $tmp527;
            $tmp509 = $tmp510;
            $returnValue273 = $tmp509;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp509));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp510));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp511));
            panda$core$Panda$unref$panda$core$Object($tmp523);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp512));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp513));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp514));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp515));
            $tmp265 = 13;
            goto $l263;
            $l528:;
            return $returnValue273;
        }
        }
        else {
        panda$core$Bit $tmp530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp530.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp532 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 16));
            dc531 = *$tmp532;
            panda$collections$ImmutableArray** $tmp534 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9266->$data + 24));
            annotations533 = *$tmp534;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp536 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$193_9266->$data + 32));
            kind535 = *$tmp536;
            panda$core$String** $tmp538 = ((panda$core$String**) ((char*) $match$193_9266->$data + 40));
            name537 = *$tmp538;
            panda$collections$ImmutableArray** $tmp540 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9266->$data + 48));
            generics539 = *$tmp540;
            panda$collections$ImmutableArray** $tmp542 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9266->$data + 56));
            supertypes541 = *$tmp542;
            panda$collections$ImmutableArray** $tmp544 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9266->$data + 64));
            members543 = *$tmp544;
            int $tmp547;
            {
                panda$core$MutableString* $tmp551 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp551);
                $tmp550 = $tmp551;
                $tmp549 = $tmp550;
                result548 = $tmp549;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp549));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp550));
                if (((panda$core$Bit) { dc531 != NULL }).value) {
                {
                    panda$core$String* $tmp554 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc531), &$s553);
                    $tmp552 = $tmp554;
                    panda$core$MutableString$append$panda$core$String(result548, $tmp552);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp552));
                }
                }
                {
                    int $tmp557;
                    {
                        ITable* $tmp561 = ((panda$collections$Iterable*) annotations533)->$class->itable;
                        while ($tmp561->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp561 = $tmp561->next;
                        }
                        $fn563 $tmp562 = $tmp561->methods[0];
                        panda$collections$Iterator* $tmp564 = $tmp562(((panda$collections$Iterable*) annotations533));
                        $tmp560 = $tmp564;
                        $tmp559 = $tmp560;
                        Iter$240$17558 = $tmp559;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp559));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp560));
                        $l565:;
                        ITable* $tmp568 = Iter$240$17558->$class->itable;
                        while ($tmp568->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp568 = $tmp568->next;
                        }
                        $fn570 $tmp569 = $tmp568->methods[0];
                        panda$core$Bit $tmp571 = $tmp569(Iter$240$17558);
                        panda$core$Bit $tmp572 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp571);
                        bool $tmp567 = $tmp572.value;
                        if (!$tmp567) goto $l566;
                        {
                            int $tmp575;
                            {
                                ITable* $tmp579 = Iter$240$17558->$class->itable;
                                while ($tmp579->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp579 = $tmp579->next;
                                }
                                $fn581 $tmp580 = $tmp579->methods[1];
                                panda$core$Object* $tmp582 = $tmp580(Iter$240$17558);
                                $tmp578 = $tmp582;
                                $tmp577 = ((org$pandalanguage$pandac$ASTNode*) $tmp578);
                                a576 = $tmp577;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp577));
                                panda$core$Panda$unref$panda$core$Object($tmp578);
                                panda$core$String* $tmp585 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a576), &$s584);
                                $tmp583 = $tmp585;
                                panda$core$MutableString$append$panda$core$String(result548, $tmp583);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp583));
                            }
                            $tmp575 = -1;
                            goto $l573;
                            $l573:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a576));
                            a576 = NULL;
                            switch ($tmp575) {
                                case -1: goto $l586;
                            }
                            $l586:;
                        }
                        goto $l565;
                        $l566:;
                    }
                    $tmp557 = -1;
                    goto $l555;
                    $l555:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$240$17558));
                    Iter$240$17558 = NULL;
                    switch ($tmp557) {
                        case -1: goto $l587;
                    }
                    $l587:;
                }
                {
                    $match$243_17588 = kind535;
                    panda$core$Bit $tmp589 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_17588.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp589.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result548, &$s590);
                    }
                    }
                    else {
                    panda$core$Bit $tmp591 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_17588.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp591.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result548, &$s592);
                    }
                    }
                    else {
                    panda$core$Bit $tmp593 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_17588.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp593.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result548, &$s594);
                    }
                    }
                    }
                    }
                }
                panda$core$MutableString$append$panda$core$String(result548, name537);
                if (((panda$core$Bit) { generics539 != NULL }).value) {
                {
                    ITable* $tmp599 = ((panda$collections$ListView*) generics539)->$class->itable;
                    while ($tmp599->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp599 = $tmp599->next;
                    }
                    $fn601 $tmp600 = $tmp599->methods[4];
                    panda$core$String* $tmp602 = $tmp600(((panda$collections$ListView*) generics539));
                    $tmp598 = $tmp602;
                    panda$core$String* $tmp603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s597, $tmp598);
                    $tmp596 = $tmp603;
                    panda$core$String* $tmp605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp596, &$s604);
                    $tmp595 = $tmp605;
                    panda$core$MutableString$append$panda$core$String(result548, $tmp595);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp595));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp596));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp598));
                }
                }
                if (((panda$core$Bit) { supertypes541 != NULL }).value) {
                {
                    ITable* $tmp610 = ((panda$collections$ListView*) supertypes541)->$class->itable;
                    while ($tmp610->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp610 = $tmp610->next;
                    }
                    $fn612 $tmp611 = $tmp610->methods[4];
                    panda$core$String* $tmp613 = $tmp611(((panda$collections$ListView*) supertypes541));
                    $tmp609 = $tmp613;
                    panda$core$String* $tmp614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s608, $tmp609);
                    $tmp607 = $tmp614;
                    panda$core$String* $tmp616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp607, &$s615);
                    $tmp606 = $tmp616;
                    panda$core$MutableString$append$panda$core$String(result548, $tmp606);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp606));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp607));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp609));
                }
                }
                panda$core$MutableString$append$panda$core$String(result548, &$s617);
                {
                    int $tmp620;
                    {
                        ITable* $tmp624 = ((panda$collections$Iterable*) members543)->$class->itable;
                        while ($tmp624->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp624 = $tmp624->next;
                        }
                        $fn626 $tmp625 = $tmp624->methods[0];
                        panda$collections$Iterator* $tmp627 = $tmp625(((panda$collections$Iterable*) members543));
                        $tmp623 = $tmp627;
                        $tmp622 = $tmp623;
                        Iter$256$17621 = $tmp622;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp622));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp623));
                        $l628:;
                        ITable* $tmp631 = Iter$256$17621->$class->itable;
                        while ($tmp631->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp631 = $tmp631->next;
                        }
                        $fn633 $tmp632 = $tmp631->methods[0];
                        panda$core$Bit $tmp634 = $tmp632(Iter$256$17621);
                        panda$core$Bit $tmp635 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp634);
                        bool $tmp630 = $tmp635.value;
                        if (!$tmp630) goto $l629;
                        {
                            int $tmp638;
                            {
                                ITable* $tmp642 = Iter$256$17621->$class->itable;
                                while ($tmp642->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp642 = $tmp642->next;
                                }
                                $fn644 $tmp643 = $tmp642->methods[1];
                                panda$core$Object* $tmp645 = $tmp643(Iter$256$17621);
                                $tmp641 = $tmp645;
                                $tmp640 = ((org$pandalanguage$pandac$ASTNode*) $tmp641);
                                m639 = $tmp640;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp640));
                                panda$core$Panda$unref$panda$core$Object($tmp641);
                                panda$core$String* $tmp648 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) m639), &$s647);
                                $tmp646 = $tmp648;
                                panda$core$MutableString$append$panda$core$String(result548, $tmp646);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp646));
                            }
                            $tmp638 = -1;
                            goto $l636;
                            $l636:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m639));
                            m639 = NULL;
                            switch ($tmp638) {
                                case -1: goto $l649;
                            }
                            $l649:;
                        }
                        goto $l628;
                        $l629:;
                    }
                    $tmp620 = -1;
                    goto $l618;
                    $l618:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$256$17621));
                    Iter$256$17621 = NULL;
                    switch ($tmp620) {
                        case -1: goto $l650;
                    }
                    $l650:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp651, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result548, $tmp651);
                panda$core$String* $tmp654 = panda$core$MutableString$finish$R$panda$core$String(result548);
                $tmp653 = $tmp654;
                $tmp652 = $tmp653;
                $returnValue273 = $tmp652;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp652));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp653));
                $tmp547 = 0;
                goto $l545;
                $l655:;
                $tmp265 = 14;
                goto $l263;
                $l656:;
                return $returnValue273;
            }
            $l545:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result548));
            result548 = NULL;
            switch ($tmp547) {
                case 0: goto $l655;
            }
            $l658:;
        }
        }
        else {
        panda$core$Bit $tmp659 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp659.value) {
        {
            panda$core$String** $tmp661 = ((panda$core$String**) ((char*) $match$193_9266->$data + 16));
            label660 = *$tmp661;
            if (((panda$core$Bit) { label660 != NULL }).value) {
            {
                panda$core$String* $tmp666 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s665, label660);
                $tmp664 = $tmp666;
                panda$core$String* $tmp668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp664, &$s667);
                $tmp663 = $tmp668;
                $tmp662 = $tmp663;
                $returnValue273 = $tmp662;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp662));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp663));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp664));
                $tmp265 = 15;
                goto $l263;
                $l669:;
                return $returnValue273;
            }
            }
            $tmp671 = &$s672;
            $returnValue273 = $tmp671;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp671));
            $tmp265 = 16;
            goto $l263;
            $l673:;
            return $returnValue273;
        }
        }
        else {
        panda$core$Bit $tmp675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp675.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp677 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 16));
            target676 = *$tmp677;
            org$pandalanguage$pandac$ASTNode** $tmp679 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 24));
            value678 = *$tmp679;
            if (((panda$core$Bit) { value678 != NULL }).value) {
            {
                panda$core$String* $tmp686 = (($fn685) target676->$class->vtable[0])(target676);
                $tmp684 = $tmp686;
                panda$core$String* $tmp688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp684, &$s687);
                $tmp683 = $tmp688;
                panda$core$String* $tmp689 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp683, ((panda$core$Object*) value678));
                $tmp682 = $tmp689;
                panda$core$String* $tmp691 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp682, &$s690);
                $tmp681 = $tmp691;
                $tmp680 = $tmp681;
                $returnValue273 = $tmp680;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp680));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp681));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp682));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp683));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp684));
                $tmp265 = 17;
                goto $l263;
                $l692:;
                return $returnValue273;
            }
            }
            panda$core$String* $tmp697 = (($fn696) target676->$class->vtable[0])(target676);
            $tmp695 = $tmp697;
            $tmp694 = $tmp695;
            $returnValue273 = $tmp694;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp694));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp695));
            $tmp265 = 18;
            goto $l263;
            $l698:;
            return $returnValue273;
        }
        }
        else {
        panda$core$Bit $tmp700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp700.value) {
        {
            panda$core$String** $tmp702 = ((panda$core$String**) ((char*) $match$193_9266->$data + 16));
            label701 = *$tmp702;
            panda$collections$ImmutableArray** $tmp704 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9266->$data + 24));
            statements703 = *$tmp704;
            org$pandalanguage$pandac$ASTNode** $tmp706 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 32));
            test705 = *$tmp706;
            int $tmp709;
            {
                panda$core$MutableString* $tmp713 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp713);
                $tmp712 = $tmp713;
                $tmp711 = $tmp712;
                result710 = $tmp711;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp711));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp712));
                if (((panda$core$Bit) { label701 != NULL }).value) {
                {
                    panda$core$String* $tmp716 = panda$core$String$convert$R$panda$core$String(label701);
                    $tmp715 = $tmp716;
                    panda$core$String* $tmp718 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp715, &$s717);
                    $tmp714 = $tmp718;
                    panda$core$MutableString$append$panda$core$String(result710, $tmp714);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp714));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp715));
                }
                }
                panda$core$MutableString$append$panda$core$String(result710, &$s719);
                {
                    int $tmp722;
                    {
                        ITable* $tmp726 = ((panda$collections$Iterable*) statements703)->$class->itable;
                        while ($tmp726->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp726 = $tmp726->next;
                        }
                        $fn728 $tmp727 = $tmp726->methods[0];
                        panda$collections$Iterator* $tmp729 = $tmp727(((panda$collections$Iterable*) statements703));
                        $tmp725 = $tmp729;
                        $tmp724 = $tmp725;
                        Iter$277$17723 = $tmp724;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp724));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp725));
                        $l730:;
                        ITable* $tmp733 = Iter$277$17723->$class->itable;
                        while ($tmp733->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp733 = $tmp733->next;
                        }
                        $fn735 $tmp734 = $tmp733->methods[0];
                        panda$core$Bit $tmp736 = $tmp734(Iter$277$17723);
                        panda$core$Bit $tmp737 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp736);
                        bool $tmp732 = $tmp737.value;
                        if (!$tmp732) goto $l731;
                        {
                            int $tmp740;
                            {
                                ITable* $tmp744 = Iter$277$17723->$class->itable;
                                while ($tmp744->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp744 = $tmp744->next;
                                }
                                $fn746 $tmp745 = $tmp744->methods[1];
                                panda$core$Object* $tmp747 = $tmp745(Iter$277$17723);
                                $tmp743 = $tmp747;
                                $tmp742 = ((org$pandalanguage$pandac$ASTNode*) $tmp743);
                                s741 = $tmp742;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp742));
                                panda$core$Panda$unref$panda$core$Object($tmp743);
                                panda$core$String* $tmp750 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s741), &$s749);
                                $tmp748 = $tmp750;
                                panda$core$MutableString$append$panda$core$String(result710, $tmp748);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp748));
                            }
                            $tmp740 = -1;
                            goto $l738;
                            $l738:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s741));
                            s741 = NULL;
                            switch ($tmp740) {
                                case -1: goto $l751;
                            }
                            $l751:;
                        }
                        goto $l730;
                        $l731:;
                    }
                    $tmp722 = -1;
                    goto $l720;
                    $l720:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$277$17723));
                    Iter$277$17723 = NULL;
                    switch ($tmp722) {
                        case -1: goto $l752;
                    }
                    $l752:;
                }
                panda$core$String* $tmp756 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s755, ((panda$core$Object*) test705));
                $tmp754 = $tmp756;
                panda$core$String* $tmp758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp754, &$s757);
                $tmp753 = $tmp758;
                panda$core$MutableString$append$panda$core$String(result710, $tmp753);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp753));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp754));
                panda$core$String* $tmp761 = panda$core$MutableString$finish$R$panda$core$String(result710);
                $tmp760 = $tmp761;
                $tmp759 = $tmp760;
                $returnValue273 = $tmp759;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp759));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp760));
                $tmp709 = 0;
                goto $l707;
                $l762:;
                $tmp265 = 19;
                goto $l263;
                $l763:;
                return $returnValue273;
            }
            $l707:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result710));
            result710 = NULL;
            switch ($tmp709) {
                case 0: goto $l762;
            }
            $l765:;
        }
        }
        else {
        panda$core$Bit $tmp766 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp766.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp768 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 16));
            base767 = *$tmp768;
            panda$core$String** $tmp770 = ((panda$core$String**) ((char*) $match$193_9266->$data + 24));
            field769 = *$tmp770;
            panda$core$String* $tmp777 = (($fn776) base767->$class->vtable[0])(base767);
            $tmp775 = $tmp777;
            panda$core$String* $tmp779 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp775, &$s778);
            $tmp774 = $tmp779;
            panda$core$String* $tmp780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp774, field769);
            $tmp773 = $tmp780;
            panda$core$String* $tmp782 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp773, &$s781);
            $tmp772 = $tmp782;
            $tmp771 = $tmp772;
            $returnValue273 = $tmp771;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp771));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp772));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp773));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp774));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp775));
            $tmp265 = 20;
            goto $l263;
            $l783:;
            return $returnValue273;
        }
        }
        else {
        panda$core$Bit $tmp785 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp785.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp787 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 16));
            dc786 = *$tmp787;
            panda$collections$ImmutableArray** $tmp789 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9266->$data + 24));
            annotations788 = *$tmp789;
            org$pandalanguage$pandac$ASTNode** $tmp791 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 32));
            decl790 = *$tmp791;
            int $tmp794;
            {
                panda$core$MutableString* $tmp798 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp798);
                $tmp797 = $tmp798;
                $tmp796 = $tmp797;
                result795 = $tmp796;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp796));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp797));
                if (((panda$core$Bit) { dc786 != NULL }).value) {
                {
                    panda$core$String* $tmp801 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc786), &$s800);
                    $tmp799 = $tmp801;
                    panda$core$MutableString$append$panda$core$String(result795, $tmp799);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp799));
                }
                }
                {
                    int $tmp804;
                    {
                        ITable* $tmp808 = ((panda$collections$Iterable*) annotations788)->$class->itable;
                        while ($tmp808->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp808 = $tmp808->next;
                        }
                        $fn810 $tmp809 = $tmp808->methods[0];
                        panda$collections$Iterator* $tmp811 = $tmp809(((panda$collections$Iterable*) annotations788));
                        $tmp807 = $tmp811;
                        $tmp806 = $tmp807;
                        Iter$289$17805 = $tmp806;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp806));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp807));
                        $l812:;
                        ITable* $tmp815 = Iter$289$17805->$class->itable;
                        while ($tmp815->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp815 = $tmp815->next;
                        }
                        $fn817 $tmp816 = $tmp815->methods[0];
                        panda$core$Bit $tmp818 = $tmp816(Iter$289$17805);
                        panda$core$Bit $tmp819 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp818);
                        bool $tmp814 = $tmp819.value;
                        if (!$tmp814) goto $l813;
                        {
                            int $tmp822;
                            {
                                ITable* $tmp826 = Iter$289$17805->$class->itable;
                                while ($tmp826->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp826 = $tmp826->next;
                                }
                                $fn828 $tmp827 = $tmp826->methods[1];
                                panda$core$Object* $tmp829 = $tmp827(Iter$289$17805);
                                $tmp825 = $tmp829;
                                $tmp824 = ((org$pandalanguage$pandac$ASTNode*) $tmp825);
                                a823 = $tmp824;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp824));
                                panda$core$Panda$unref$panda$core$Object($tmp825);
                                panda$core$String* $tmp832 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a823), &$s831);
                                $tmp830 = $tmp832;
                                panda$core$MutableString$append$panda$core$String(result795, $tmp830);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp830));
                            }
                            $tmp822 = -1;
                            goto $l820;
                            $l820:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a823));
                            a823 = NULL;
                            switch ($tmp822) {
                                case -1: goto $l833;
                            }
                            $l833:;
                        }
                        goto $l812;
                        $l813:;
                    }
                    $tmp804 = -1;
                    goto $l802;
                    $l802:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$289$17805));
                    Iter$289$17805 = NULL;
                    switch ($tmp804) {
                        case -1: goto $l834;
                    }
                    $l834:;
                }
                panda$core$MutableString$append$panda$core$Object(result795, ((panda$core$Object*) decl790));
                panda$core$String* $tmp837 = panda$core$MutableString$finish$R$panda$core$String(result795);
                $tmp836 = $tmp837;
                $tmp835 = $tmp836;
                $returnValue273 = $tmp835;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp835));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp836));
                $tmp794 = 0;
                goto $l792;
                $l838:;
                $tmp265 = 21;
                goto $l263;
                $l839:;
                return $returnValue273;
            }
            $l792:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result795));
            result795 = NULL;
            switch ($tmp794) {
                case 0: goto $l838;
            }
            $l841:;
        }
        }
        else {
        panda$core$Bit $tmp842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp842.value) {
        {
            panda$collections$ImmutableArray** $tmp844 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9266->$data + 0));
            entries843 = *$tmp844;
            int $tmp847;
            {
                panda$core$MutableString* $tmp851 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp851);
                $tmp850 = $tmp851;
                $tmp849 = $tmp850;
                result848 = $tmp849;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp849));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp850));
                {
                    int $tmp854;
                    {
                        ITable* $tmp858 = ((panda$collections$Iterable*) entries843)->$class->itable;
                        while ($tmp858->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp858 = $tmp858->next;
                        }
                        $fn860 $tmp859 = $tmp858->methods[0];
                        panda$collections$Iterator* $tmp861 = $tmp859(((panda$collections$Iterable*) entries843));
                        $tmp857 = $tmp861;
                        $tmp856 = $tmp857;
                        Iter$296$17855 = $tmp856;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp856));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp857));
                        $l862:;
                        ITable* $tmp865 = Iter$296$17855->$class->itable;
                        while ($tmp865->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp865 = $tmp865->next;
                        }
                        $fn867 $tmp866 = $tmp865->methods[0];
                        panda$core$Bit $tmp868 = $tmp866(Iter$296$17855);
                        panda$core$Bit $tmp869 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp868);
                        bool $tmp864 = $tmp869.value;
                        if (!$tmp864) goto $l863;
                        {
                            int $tmp872;
                            {
                                ITable* $tmp876 = Iter$296$17855->$class->itable;
                                while ($tmp876->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp876 = $tmp876->next;
                                }
                                $fn878 $tmp877 = $tmp876->methods[1];
                                panda$core$Object* $tmp879 = $tmp877(Iter$296$17855);
                                $tmp875 = $tmp879;
                                $tmp874 = ((org$pandalanguage$pandac$ASTNode*) $tmp875);
                                e873 = $tmp874;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp874));
                                panda$core$Panda$unref$panda$core$Object($tmp875);
                                panda$core$String* $tmp882 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) e873), &$s881);
                                $tmp880 = $tmp882;
                                panda$core$MutableString$append$panda$core$String(result848, $tmp880);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp880));
                            }
                            $tmp872 = -1;
                            goto $l870;
                            $l870:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e873));
                            e873 = NULL;
                            switch ($tmp872) {
                                case -1: goto $l883;
                            }
                            $l883:;
                        }
                        goto $l862;
                        $l863:;
                    }
                    $tmp854 = -1;
                    goto $l852;
                    $l852:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$296$17855));
                    Iter$296$17855 = NULL;
                    switch ($tmp854) {
                        case -1: goto $l884;
                    }
                    $l884:;
                }
                panda$core$String* $tmp887 = panda$core$MutableString$finish$R$panda$core$String(result848);
                $tmp886 = $tmp887;
                $tmp885 = $tmp886;
                $returnValue273 = $tmp885;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp885));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp886));
                $tmp847 = 0;
                goto $l845;
                $l888:;
                $tmp265 = 22;
                goto $l263;
                $l889:;
                return $returnValue273;
            }
            $l845:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result848));
            result848 = NULL;
            switch ($tmp847) {
                case 0: goto $l888;
            }
            $l891:;
        }
        }
        else {
        panda$core$Bit $tmp892 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp892.value) {
        {
            panda$core$String** $tmp894 = ((panda$core$String**) ((char*) $match$193_9266->$data + 16));
            label893 = *$tmp894;
            org$pandalanguage$pandac$ASTNode** $tmp896 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 24));
            target895 = *$tmp896;
            org$pandalanguage$pandac$ASTNode** $tmp898 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 32));
            list897 = *$tmp898;
            panda$collections$ImmutableArray** $tmp900 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9266->$data + 40));
            statements899 = *$tmp900;
            int $tmp903;
            {
                panda$core$MutableString* $tmp907 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp907);
                $tmp906 = $tmp907;
                $tmp905 = $tmp906;
                result904 = $tmp905;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp905));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp906));
                if (((panda$core$Bit) { label893 != NULL }).value) {
                {
                    panda$core$String* $tmp910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(label893, &$s909);
                    $tmp908 = $tmp910;
                    panda$core$MutableString$append$panda$core$String(result904, $tmp908);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp908));
                }
                }
                panda$core$String* $tmp916 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s915, ((panda$core$Object*) target895));
                $tmp914 = $tmp916;
                panda$core$String* $tmp918 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp914, &$s917);
                $tmp913 = $tmp918;
                panda$core$String* $tmp919 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp913, ((panda$core$Object*) list897));
                $tmp912 = $tmp919;
                panda$core$String* $tmp921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp912, &$s920);
                $tmp911 = $tmp921;
                panda$core$MutableString$append$panda$core$String(result904, $tmp911);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp911));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp912));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp913));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp914));
                {
                    int $tmp924;
                    {
                        ITable* $tmp928 = ((panda$collections$Iterable*) statements899)->$class->itable;
                        while ($tmp928->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp928 = $tmp928->next;
                        }
                        $fn930 $tmp929 = $tmp928->methods[0];
                        panda$collections$Iterator* $tmp931 = $tmp929(((panda$collections$Iterable*) statements899));
                        $tmp927 = $tmp931;
                        $tmp926 = $tmp927;
                        Iter$306$17925 = $tmp926;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp926));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp927));
                        $l932:;
                        ITable* $tmp935 = Iter$306$17925->$class->itable;
                        while ($tmp935->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp935 = $tmp935->next;
                        }
                        $fn937 $tmp936 = $tmp935->methods[0];
                        panda$core$Bit $tmp938 = $tmp936(Iter$306$17925);
                        panda$core$Bit $tmp939 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp938);
                        bool $tmp934 = $tmp939.value;
                        if (!$tmp934) goto $l933;
                        {
                            int $tmp942;
                            {
                                ITable* $tmp946 = Iter$306$17925->$class->itable;
                                while ($tmp946->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp946 = $tmp946->next;
                                }
                                $fn948 $tmp947 = $tmp946->methods[1];
                                panda$core$Object* $tmp949 = $tmp947(Iter$306$17925);
                                $tmp945 = $tmp949;
                                $tmp944 = ((org$pandalanguage$pandac$ASTNode*) $tmp945);
                                s943 = $tmp944;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp944));
                                panda$core$Panda$unref$panda$core$Object($tmp945);
                                panda$core$String* $tmp952 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s943), &$s951);
                                $tmp950 = $tmp952;
                                panda$core$MutableString$append$panda$core$String(result904, $tmp950);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp950));
                            }
                            $tmp942 = -1;
                            goto $l940;
                            $l940:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s943));
                            s943 = NULL;
                            switch ($tmp942) {
                                case -1: goto $l953;
                            }
                            $l953:;
                        }
                        goto $l932;
                        $l933:;
                    }
                    $tmp924 = -1;
                    goto $l922;
                    $l922:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$306$17925));
                    Iter$306$17925 = NULL;
                    switch ($tmp924) {
                        case -1: goto $l954;
                    }
                    $l954:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp955, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result904, $tmp955);
                panda$core$String* $tmp958 = panda$core$MutableString$finish$R$panda$core$String(result904);
                $tmp957 = $tmp958;
                $tmp956 = $tmp957;
                $returnValue273 = $tmp956;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp956));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp957));
                $tmp903 = 0;
                goto $l901;
                $l959:;
                $tmp265 = 23;
                goto $l263;
                $l960:;
                return $returnValue273;
            }
            $l901:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result904));
            result904 = NULL;
            switch ($tmp903) {
                case 0: goto $l959;
            }
            $l962:;
        }
        }
        else {
        panda$core$Bit $tmp963 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp963.value) {
        {
            panda$core$String** $tmp965 = ((panda$core$String**) ((char*) $match$193_9266->$data + 16));
            name964 = *$tmp965;
            panda$collections$ImmutableArray** $tmp967 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9266->$data + 24));
            subtypes966 = *$tmp967;
            panda$core$String* $tmp973 = panda$core$String$convert$R$panda$core$String(name964);
            $tmp972 = $tmp973;
            panda$core$String* $tmp975 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp972, &$s974);
            $tmp971 = $tmp975;
            ITable* $tmp977 = ((panda$collections$ListView*) subtypes966)->$class->itable;
            while ($tmp977->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp977 = $tmp977->next;
            }
            $fn979 $tmp978 = $tmp977->methods[4];
            panda$core$String* $tmp980 = $tmp978(((panda$collections$ListView*) subtypes966));
            $tmp976 = $tmp980;
            panda$core$String* $tmp981 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp971, $tmp976);
            $tmp970 = $tmp981;
            panda$core$String* $tmp983 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp970, &$s982);
            $tmp969 = $tmp983;
            $tmp968 = $tmp969;
            $returnValue273 = $tmp968;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp968));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp969));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp970));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp976));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp971));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp972));
            $tmp265 = 24;
            goto $l263;
            $l984:;
            return $returnValue273;
        }
        }
        else {
        panda$core$Bit $tmp986 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp986.value) {
        {
            panda$core$String** $tmp988 = ((panda$core$String**) ((char*) $match$193_9266->$data + 16));
            name987 = *$tmp988;
            $tmp989 = name987;
            $returnValue273 = $tmp989;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp989));
            $tmp265 = 25;
            goto $l263;
            $l990:;
            return $returnValue273;
        }
        }
        else {
        panda$core$Bit $tmp992 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp992.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp994 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 16));
            test993 = *$tmp994;
            panda$collections$ImmutableArray** $tmp996 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9266->$data + 24));
            ifTrue995 = *$tmp996;
            org$pandalanguage$pandac$ASTNode** $tmp998 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 32));
            ifFalse997 = *$tmp998;
            int $tmp1001;
            {
                panda$core$MutableString* $tmp1005 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1009 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1008, ((panda$core$Object*) test993));
                $tmp1007 = $tmp1009;
                panda$core$String* $tmp1011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1007, &$s1010);
                $tmp1006 = $tmp1011;
                panda$core$MutableString$init$panda$core$String($tmp1005, $tmp1006);
                $tmp1004 = $tmp1005;
                $tmp1003 = $tmp1004;
                result1002 = $tmp1003;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1003));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1004));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1006));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1007));
                {
                    int $tmp1014;
                    {
                        ITable* $tmp1018 = ((panda$collections$Iterable*) ifTrue995)->$class->itable;
                        while ($tmp1018->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1018 = $tmp1018->next;
                        }
                        $fn1020 $tmp1019 = $tmp1018->methods[0];
                        panda$collections$Iterator* $tmp1021 = $tmp1019(((panda$collections$Iterable*) ifTrue995));
                        $tmp1017 = $tmp1021;
                        $tmp1016 = $tmp1017;
                        Iter$317$171015 = $tmp1016;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1016));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1017));
                        $l1022:;
                        ITable* $tmp1025 = Iter$317$171015->$class->itable;
                        while ($tmp1025->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1025 = $tmp1025->next;
                        }
                        $fn1027 $tmp1026 = $tmp1025->methods[0];
                        panda$core$Bit $tmp1028 = $tmp1026(Iter$317$171015);
                        panda$core$Bit $tmp1029 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1028);
                        bool $tmp1024 = $tmp1029.value;
                        if (!$tmp1024) goto $l1023;
                        {
                            int $tmp1032;
                            {
                                ITable* $tmp1036 = Iter$317$171015->$class->itable;
                                while ($tmp1036->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1036 = $tmp1036->next;
                                }
                                $fn1038 $tmp1037 = $tmp1036->methods[1];
                                panda$core$Object* $tmp1039 = $tmp1037(Iter$317$171015);
                                $tmp1035 = $tmp1039;
                                $tmp1034 = ((org$pandalanguage$pandac$ASTNode*) $tmp1035);
                                s1033 = $tmp1034;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1034));
                                panda$core$Panda$unref$panda$core$Object($tmp1035);
                                panda$core$String* $tmp1042 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1033), &$s1041);
                                $tmp1040 = $tmp1042;
                                panda$core$MutableString$append$panda$core$String(result1002, $tmp1040);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1040));
                            }
                            $tmp1032 = -1;
                            goto $l1030;
                            $l1030:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1033));
                            s1033 = NULL;
                            switch ($tmp1032) {
                                case -1: goto $l1043;
                            }
                            $l1043:;
                        }
                        goto $l1022;
                        $l1023:;
                    }
                    $tmp1014 = -1;
                    goto $l1012;
                    $l1012:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$317$171015));
                    Iter$317$171015 = NULL;
                    switch ($tmp1014) {
                        case -1: goto $l1044;
                    }
                    $l1044:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1045, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1002, $tmp1045);
                if (((panda$core$Bit) { ifFalse997 != NULL }).value) {
                {
                    panda$core$String* $tmp1049 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1048, ((panda$core$Object*) ifFalse997));
                    $tmp1047 = $tmp1049;
                    panda$core$String* $tmp1051 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1047, &$s1050);
                    $tmp1046 = $tmp1051;
                    panda$core$MutableString$append$panda$core$String(result1002, $tmp1046);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1046));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1047));
                }
                }
                panda$core$String* $tmp1054 = panda$core$MutableString$finish$R$panda$core$String(result1002);
                $tmp1053 = $tmp1054;
                $tmp1052 = $tmp1053;
                $returnValue273 = $tmp1052;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1052));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1053));
                $tmp1001 = 0;
                goto $l999;
                $l1055:;
                $tmp265 = 26;
                goto $l263;
                $l1056:;
                return $returnValue273;
            }
            $l999:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1002));
            result1002 = NULL;
            switch ($tmp1001) {
                case 0: goto $l1055;
            }
            $l1058:;
        }
        }
        else {
        panda$core$Bit $tmp1059 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1059.value) {
        {
            panda$core$UInt64* $tmp1061 = ((panda$core$UInt64*) ((char*) $match$193_9266->$data + 16));
            value1060 = *$tmp1061;
            panda$core$String* $tmp1064 = panda$core$UInt64$convert$R$panda$core$String(value1060);
            $tmp1063 = $tmp1064;
            $tmp1062 = $tmp1063;
            $returnValue273 = $tmp1062;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1062));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1063));
            $tmp265 = 27;
            goto $l263;
            $l1065:;
            return $returnValue273;
        }
        }
        else {
        panda$core$Bit $tmp1067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1067.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1069 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$193_9266->$data + 0));
            ir1068 = *$tmp1069;
            panda$core$String* $tmp1073 = (($fn1072) ir1068->$class->vtable[0])(ir1068);
            $tmp1071 = $tmp1073;
            $tmp1070 = $tmp1071;
            $returnValue273 = $tmp1070;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1070));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1071));
            $tmp265 = 28;
            goto $l263;
            $l1074:;
            return $returnValue273;
        }
        }
        else {
        panda$core$Bit $tmp1076 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1076.value) {
        {
            panda$core$String** $tmp1078 = ((panda$core$String**) ((char*) $match$193_9266->$data + 16));
            label1077 = *$tmp1078;
            panda$collections$ImmutableArray** $tmp1080 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9266->$data + 24));
            statements1079 = *$tmp1080;
            int $tmp1083;
            {
                panda$core$MutableString* $tmp1087 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1087);
                $tmp1086 = $tmp1087;
                $tmp1085 = $tmp1086;
                result1084 = $tmp1085;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1085));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1086));
                if (((panda$core$Bit) { label1077 != NULL }).value) {
                {
                    panda$core$String* $tmp1090 = panda$core$String$convert$R$panda$core$String(label1077);
                    $tmp1089 = $tmp1090;
                    panda$core$String* $tmp1092 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1089, &$s1091);
                    $tmp1088 = $tmp1092;
                    panda$core$MutableString$append$panda$core$String(result1084, $tmp1088);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1088));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1089));
                }
                }
                panda$core$MutableString$append$panda$core$String(result1084, &$s1093);
                {
                    int $tmp1096;
                    {
                        ITable* $tmp1100 = ((panda$collections$Iterable*) statements1079)->$class->itable;
                        while ($tmp1100->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1100 = $tmp1100->next;
                        }
                        $fn1102 $tmp1101 = $tmp1100->methods[0];
                        panda$collections$Iterator* $tmp1103 = $tmp1101(((panda$collections$Iterable*) statements1079));
                        $tmp1099 = $tmp1103;
                        $tmp1098 = $tmp1099;
                        Iter$335$171097 = $tmp1098;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1098));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1099));
                        $l1104:;
                        ITable* $tmp1107 = Iter$335$171097->$class->itable;
                        while ($tmp1107->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1107 = $tmp1107->next;
                        }
                        $fn1109 $tmp1108 = $tmp1107->methods[0];
                        panda$core$Bit $tmp1110 = $tmp1108(Iter$335$171097);
                        panda$core$Bit $tmp1111 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1110);
                        bool $tmp1106 = $tmp1111.value;
                        if (!$tmp1106) goto $l1105;
                        {
                            int $tmp1114;
                            {
                                ITable* $tmp1118 = Iter$335$171097->$class->itable;
                                while ($tmp1118->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1118 = $tmp1118->next;
                                }
                                $fn1120 $tmp1119 = $tmp1118->methods[1];
                                panda$core$Object* $tmp1121 = $tmp1119(Iter$335$171097);
                                $tmp1117 = $tmp1121;
                                $tmp1116 = ((org$pandalanguage$pandac$ASTNode*) $tmp1117);
                                s1115 = $tmp1116;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1116));
                                panda$core$Panda$unref$panda$core$Object($tmp1117);
                                panda$core$String* $tmp1124 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1115), &$s1123);
                                $tmp1122 = $tmp1124;
                                panda$core$MutableString$append$panda$core$String(result1084, $tmp1122);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1122));
                            }
                            $tmp1114 = -1;
                            goto $l1112;
                            $l1112:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1115));
                            s1115 = NULL;
                            switch ($tmp1114) {
                                case -1: goto $l1125;
                            }
                            $l1125:;
                        }
                        goto $l1104;
                        $l1105:;
                    }
                    $tmp1096 = -1;
                    goto $l1094;
                    $l1094:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$335$171097));
                    Iter$335$171097 = NULL;
                    switch ($tmp1096) {
                        case -1: goto $l1126;
                    }
                    $l1126:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1127, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1084, $tmp1127);
                panda$core$String* $tmp1130 = panda$core$MutableString$finish$R$panda$core$String(result1084);
                $tmp1129 = $tmp1130;
                $tmp1128 = $tmp1129;
                $returnValue273 = $tmp1128;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1128));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1129));
                $tmp1083 = 0;
                goto $l1081;
                $l1131:;
                $tmp265 = 29;
                goto $l263;
                $l1132:;
                return $returnValue273;
            }
            $l1081:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1084));
            result1084 = NULL;
            switch ($tmp1083) {
                case 0: goto $l1131;
            }
            $l1134:;
        }
        }
        else {
        panda$core$Bit $tmp1135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1135.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1137 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 16));
            value1136 = *$tmp1137;
            panda$collections$ImmutableArray** $tmp1139 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9266->$data + 24));
            whens1138 = *$tmp1139;
            panda$collections$ImmutableArray** $tmp1141 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9266->$data + 32));
            other1140 = *$tmp1141;
            int $tmp1144;
            {
                panda$core$MutableString* $tmp1148 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1152 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1151, ((panda$core$Object*) value1136));
                $tmp1150 = $tmp1152;
                panda$core$String* $tmp1154 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1150, &$s1153);
                $tmp1149 = $tmp1154;
                panda$core$MutableString$init$panda$core$String($tmp1148, $tmp1149);
                $tmp1147 = $tmp1148;
                $tmp1146 = $tmp1147;
                result1145 = $tmp1146;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1146));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1147));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1149));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1150));
                {
                    int $tmp1157;
                    {
                        ITable* $tmp1161 = ((panda$collections$Iterable*) whens1138)->$class->itable;
                        while ($tmp1161->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1161 = $tmp1161->next;
                        }
                        $fn1163 $tmp1162 = $tmp1161->methods[0];
                        panda$collections$Iterator* $tmp1164 = $tmp1162(((panda$collections$Iterable*) whens1138));
                        $tmp1160 = $tmp1164;
                        $tmp1159 = $tmp1160;
                        Iter$342$171158 = $tmp1159;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1159));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1160));
                        $l1165:;
                        ITable* $tmp1168 = Iter$342$171158->$class->itable;
                        while ($tmp1168->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1168 = $tmp1168->next;
                        }
                        $fn1170 $tmp1169 = $tmp1168->methods[0];
                        panda$core$Bit $tmp1171 = $tmp1169(Iter$342$171158);
                        panda$core$Bit $tmp1172 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1171);
                        bool $tmp1167 = $tmp1172.value;
                        if (!$tmp1167) goto $l1166;
                        {
                            int $tmp1175;
                            {
                                ITable* $tmp1179 = Iter$342$171158->$class->itable;
                                while ($tmp1179->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1179 = $tmp1179->next;
                                }
                                $fn1181 $tmp1180 = $tmp1179->methods[1];
                                panda$core$Object* $tmp1182 = $tmp1180(Iter$342$171158);
                                $tmp1178 = $tmp1182;
                                $tmp1177 = ((org$pandalanguage$pandac$ASTNode*) $tmp1178);
                                w1176 = $tmp1177;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1177));
                                panda$core$Panda$unref$panda$core$Object($tmp1178);
                                panda$core$String* $tmp1185 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w1176), &$s1184);
                                $tmp1183 = $tmp1185;
                                panda$core$MutableString$append$panda$core$String(result1145, $tmp1183);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1183));
                            }
                            $tmp1175 = -1;
                            goto $l1173;
                            $l1173:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w1176));
                            w1176 = NULL;
                            switch ($tmp1175) {
                                case -1: goto $l1186;
                            }
                            $l1186:;
                        }
                        goto $l1165;
                        $l1166:;
                    }
                    $tmp1157 = -1;
                    goto $l1155;
                    $l1155:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$342$171158));
                    Iter$342$171158 = NULL;
                    switch ($tmp1157) {
                        case -1: goto $l1187;
                    }
                    $l1187:;
                }
                if (((panda$core$Bit) { other1140 != NULL }).value) {
                {
                    panda$core$String* $tmp1190 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) other1140), &$s1189);
                    $tmp1188 = $tmp1190;
                    panda$core$MutableString$append$panda$core$String(result1145, $tmp1188);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1188));
                }
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1191, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1145, $tmp1191);
                panda$core$String* $tmp1194 = panda$core$MutableString$finish$R$panda$core$String(result1145);
                $tmp1193 = $tmp1194;
                $tmp1192 = $tmp1193;
                $returnValue273 = $tmp1192;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1192));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1193));
                $tmp1144 = 0;
                goto $l1142;
                $l1195:;
                $tmp265 = 30;
                goto $l263;
                $l1196:;
                return $returnValue273;
            }
            $l1142:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1145));
            result1145 = NULL;
            switch ($tmp1144) {
                case 0: goto $l1195;
            }
            $l1198:;
        }
        }
        else {
        panda$core$Bit $tmp1199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1199.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1201 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 16));
            dc1200 = *$tmp1201;
            panda$collections$ImmutableArray** $tmp1203 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9266->$data + 24));
            annotations1202 = *$tmp1203;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1205 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$193_9266->$data + 32));
            kind1204 = *$tmp1205;
            panda$core$String** $tmp1207 = ((panda$core$String**) ((char*) $match$193_9266->$data + 40));
            name1206 = *$tmp1207;
            panda$collections$ImmutableArray** $tmp1209 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9266->$data + 48));
            generics1208 = *$tmp1209;
            panda$collections$ImmutableArray** $tmp1211 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9266->$data + 56));
            parameters1210 = *$tmp1211;
            org$pandalanguage$pandac$ASTNode** $tmp1213 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 64));
            returnType1212 = *$tmp1213;
            panda$collections$ImmutableArray** $tmp1215 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9266->$data + 72));
            statements1214 = *$tmp1215;
            int $tmp1218;
            {
                panda$core$MutableString* $tmp1222 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1222);
                $tmp1221 = $tmp1222;
                $tmp1220 = $tmp1221;
                result1219 = $tmp1220;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1220));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1221));
                if (((panda$core$Bit) { dc1200 != NULL }).value) {
                {
                    panda$core$String* $tmp1225 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc1200), &$s1224);
                    $tmp1223 = $tmp1225;
                    panda$core$MutableString$append$panda$core$String(result1219, $tmp1223);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1223));
                }
                }
                {
                    int $tmp1228;
                    {
                        ITable* $tmp1232 = ((panda$collections$Iterable*) annotations1202)->$class->itable;
                        while ($tmp1232->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1232 = $tmp1232->next;
                        }
                        $fn1234 $tmp1233 = $tmp1232->methods[0];
                        panda$collections$Iterator* $tmp1235 = $tmp1233(((panda$collections$Iterable*) annotations1202));
                        $tmp1231 = $tmp1235;
                        $tmp1230 = $tmp1231;
                        Iter$355$171229 = $tmp1230;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1230));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1231));
                        $l1236:;
                        ITable* $tmp1239 = Iter$355$171229->$class->itable;
                        while ($tmp1239->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1239 = $tmp1239->next;
                        }
                        $fn1241 $tmp1240 = $tmp1239->methods[0];
                        panda$core$Bit $tmp1242 = $tmp1240(Iter$355$171229);
                        panda$core$Bit $tmp1243 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1242);
                        bool $tmp1238 = $tmp1243.value;
                        if (!$tmp1238) goto $l1237;
                        {
                            int $tmp1246;
                            {
                                ITable* $tmp1250 = Iter$355$171229->$class->itable;
                                while ($tmp1250->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1250 = $tmp1250->next;
                                }
                                $fn1252 $tmp1251 = $tmp1250->methods[1];
                                panda$core$Object* $tmp1253 = $tmp1251(Iter$355$171229);
                                $tmp1249 = $tmp1253;
                                $tmp1248 = ((org$pandalanguage$pandac$ASTNode*) $tmp1249);
                                a1247 = $tmp1248;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1248));
                                panda$core$Panda$unref$panda$core$Object($tmp1249);
                                panda$core$String* $tmp1256 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a1247), &$s1255);
                                $tmp1254 = $tmp1256;
                                panda$core$MutableString$append$panda$core$String(result1219, $tmp1254);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1254));
                            }
                            $tmp1246 = -1;
                            goto $l1244;
                            $l1244:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1247));
                            a1247 = NULL;
                            switch ($tmp1246) {
                                case -1: goto $l1257;
                            }
                            $l1257:;
                        }
                        goto $l1236;
                        $l1237:;
                    }
                    $tmp1228 = -1;
                    goto $l1226;
                    $l1226:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$355$171229));
                    Iter$355$171229 = NULL;
                    switch ($tmp1228) {
                        case -1: goto $l1258;
                    }
                    $l1258:;
                }
                {
                    $match$358_171259 = kind1204;
                    panda$core$Bit $tmp1260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$358_171259.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp1260.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1219, &$s1261);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1262 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$358_171259.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp1262.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1219, &$s1263);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1264 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$358_171259.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp1264.value) {
                    {
                    }
                    }
                    }
                    }
                }
                panda$core$MutableString$append$panda$core$String(result1219, name1206);
                if (((panda$core$Bit) { generics1208 != NULL }).value) {
                {
                    ITable* $tmp1269 = ((panda$collections$ListView*) generics1208)->$class->itable;
                    while ($tmp1269->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp1269 = $tmp1269->next;
                    }
                    $fn1271 $tmp1270 = $tmp1269->methods[4];
                    panda$core$String* $tmp1272 = $tmp1270(((panda$collections$ListView*) generics1208));
                    $tmp1268 = $tmp1272;
                    panda$core$String* $tmp1273 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1267, $tmp1268);
                    $tmp1266 = $tmp1273;
                    panda$core$String* $tmp1275 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1266, &$s1274);
                    $tmp1265 = $tmp1275;
                    panda$core$MutableString$append$panda$core$String(result1219, $tmp1265);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1265));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1266));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1268));
                }
                }
                ITable* $tmp1280 = ((panda$collections$ListView*) parameters1210)->$class->itable;
                while ($tmp1280->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1280 = $tmp1280->next;
                }
                $fn1282 $tmp1281 = $tmp1280->methods[4];
                panda$core$String* $tmp1283 = $tmp1281(((panda$collections$ListView*) parameters1210));
                $tmp1279 = $tmp1283;
                panda$core$String* $tmp1284 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1278, $tmp1279);
                $tmp1277 = $tmp1284;
                panda$core$String* $tmp1286 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1277, &$s1285);
                $tmp1276 = $tmp1286;
                panda$core$MutableString$append$panda$core$String(result1219, $tmp1276);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1276));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1277));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1279));
                if (((panda$core$Bit) { returnType1212 != NULL }).value) {
                {
                    panda$core$String* $tmp1290 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1289, ((panda$core$Object*) returnType1212));
                    $tmp1288 = $tmp1290;
                    panda$core$String* $tmp1292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1288, &$s1291);
                    $tmp1287 = $tmp1292;
                    panda$core$MutableString$append$panda$core$String(result1219, $tmp1287);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1287));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1288));
                }
                }
                if (((panda$core$Bit) { statements1214 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1219, &$s1293);
                    {
                        int $tmp1296;
                        {
                            ITable* $tmp1300 = ((panda$collections$Iterable*) statements1214)->$class->itable;
                            while ($tmp1300->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp1300 = $tmp1300->next;
                            }
                            $fn1302 $tmp1301 = $tmp1300->methods[0];
                            panda$collections$Iterator* $tmp1303 = $tmp1301(((panda$collections$Iterable*) statements1214));
                            $tmp1299 = $tmp1303;
                            $tmp1298 = $tmp1299;
                            Iter$373$211297 = $tmp1298;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1298));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1299));
                            $l1304:;
                            ITable* $tmp1307 = Iter$373$211297->$class->itable;
                            while ($tmp1307->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1307 = $tmp1307->next;
                            }
                            $fn1309 $tmp1308 = $tmp1307->methods[0];
                            panda$core$Bit $tmp1310 = $tmp1308(Iter$373$211297);
                            panda$core$Bit $tmp1311 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1310);
                            bool $tmp1306 = $tmp1311.value;
                            if (!$tmp1306) goto $l1305;
                            {
                                int $tmp1314;
                                {
                                    ITable* $tmp1318 = Iter$373$211297->$class->itable;
                                    while ($tmp1318->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp1318 = $tmp1318->next;
                                    }
                                    $fn1320 $tmp1319 = $tmp1318->methods[1];
                                    panda$core$Object* $tmp1321 = $tmp1319(Iter$373$211297);
                                    $tmp1317 = $tmp1321;
                                    $tmp1316 = ((org$pandalanguage$pandac$ASTNode*) $tmp1317);
                                    s1315 = $tmp1316;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1316));
                                    panda$core$Panda$unref$panda$core$Object($tmp1317);
                                    panda$core$String* $tmp1324 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1315), &$s1323);
                                    $tmp1322 = $tmp1324;
                                    panda$core$MutableString$append$panda$core$String(result1219, $tmp1322);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1322));
                                }
                                $tmp1314 = -1;
                                goto $l1312;
                                $l1312:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1315));
                                s1315 = NULL;
                                switch ($tmp1314) {
                                    case -1: goto $l1325;
                                }
                                $l1325:;
                            }
                            goto $l1304;
                            $l1305:;
                        }
                        $tmp1296 = -1;
                        goto $l1294;
                        $l1294:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$373$211297));
                        Iter$373$211297 = NULL;
                        switch ($tmp1296) {
                            case -1: goto $l1326;
                        }
                        $l1326:;
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp1327, ((panda$core$UInt8) { 125 }));
                    panda$core$MutableString$append$panda$core$Char8(result1219, $tmp1327);
                }
                }
                panda$core$String* $tmp1330 = panda$core$MutableString$finish$R$panda$core$String(result1219);
                $tmp1329 = $tmp1330;
                $tmp1328 = $tmp1329;
                $returnValue273 = $tmp1328;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1328));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1329));
                $tmp1218 = 0;
                goto $l1216;
                $l1331:;
                $tmp265 = 31;
                goto $l263;
                $l1332:;
                return $returnValue273;
            }
            $l1216:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1219));
            result1219 = NULL;
            switch ($tmp1218) {
                case 0: goto $l1331;
            }
            $l1334:;
        }
        }
        else {
        panda$core$Bit $tmp1335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1335.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1337 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$193_9266->$data + 16));
            kind1336 = *$tmp1337;
            panda$collections$ImmutableArray** $tmp1339 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9266->$data + 24));
            paramTypes1338 = *$tmp1339;
            org$pandalanguage$pandac$ASTNode** $tmp1341 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 32));
            returnType1340 = *$tmp1341;
            int $tmp1344;
            {
                memset(&yield1345, 0, sizeof(yield1345));
                {
                    $match$381_171346 = kind1336;
                    panda$core$Bit $tmp1347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381_171346.$rawValue, ((panda$core$Int64) { 90 }));
                    if ($tmp1347.value) {
                    {
                        {
                            $tmp1348 = yield1345;
                            $tmp1349 = &$s1350;
                            yield1345 = $tmp1349;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1349));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1348));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp1351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381_171346.$rawValue, ((panda$core$Int64) { 91 }));
                    if ($tmp1351.value) {
                    {
                        {
                            $tmp1352 = yield1345;
                            $tmp1353 = &$s1354;
                            yield1345 = $tmp1353;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1353));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1352));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp1355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381_171346.$rawValue, ((panda$core$Int64) { 92 }));
                    if ($tmp1355.value) {
                    {
                        {
                            $tmp1356 = yield1345;
                            $tmp1357 = &$s1358;
                            yield1345 = $tmp1357;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1357));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1356));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp1359 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381_171346.$rawValue, ((panda$core$Int64) { 93 }));
                    if ($tmp1359.value) {
                    {
                        {
                            $tmp1360 = yield1345;
                            $tmp1361 = &$s1362;
                            yield1345 = $tmp1361;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1361));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1360));
                        }
                    }
                    }
                    }
                    }
                    }
                }
                ITable* $tmp1371 = ((panda$collections$ListView*) paramTypes1338)->$class->itable;
                while ($tmp1371->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1371 = $tmp1371->next;
                }
                $fn1373 $tmp1372 = $tmp1371->methods[4];
                panda$core$String* $tmp1374 = $tmp1372(((panda$collections$ListView*) paramTypes1338));
                $tmp1370 = $tmp1374;
                panda$core$String* $tmp1375 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1369, $tmp1370);
                $tmp1368 = $tmp1375;
                panda$core$String* $tmp1377 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1368, &$s1376);
                $tmp1367 = $tmp1377;
                panda$core$String* $tmp1378 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1367, yield1345);
                $tmp1366 = $tmp1378;
                panda$core$String* $tmp1380 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1366, &$s1379);
                $tmp1365 = $tmp1380;
                $tmp1364 = $tmp1365;
                partial1363 = $tmp1364;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1364));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1365));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1366));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1367));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1368));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1370));
                if (((panda$core$Bit) { returnType1340 != NULL }).value) {
                {
                    panda$core$String* $tmp1386 = panda$core$String$convert$R$panda$core$String(partial1363);
                    $tmp1385 = $tmp1386;
                    panda$core$String* $tmp1388 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1385, &$s1387);
                    $tmp1384 = $tmp1388;
                    panda$core$String* $tmp1389 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1384, ((panda$core$Object*) returnType1340));
                    $tmp1383 = $tmp1389;
                    panda$core$String* $tmp1391 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1383, &$s1390);
                    $tmp1382 = $tmp1391;
                    $tmp1381 = $tmp1382;
                    $returnValue273 = $tmp1381;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1381));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1382));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1383));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1384));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1385));
                    $tmp1344 = 0;
                    goto $l1342;
                    $l1392:;
                    $tmp265 = 32;
                    goto $l263;
                    $l1393:;
                    return $returnValue273;
                }
                }
                panda$core$String* $tmp1398 = panda$core$String$convert$R$panda$core$String(partial1363);
                $tmp1397 = $tmp1398;
                panda$core$String* $tmp1400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1397, &$s1399);
                $tmp1396 = $tmp1400;
                $tmp1395 = $tmp1396;
                $returnValue273 = $tmp1395;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1395));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1396));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1397));
                $tmp1344 = 1;
                goto $l1342;
                $l1401:;
                $tmp265 = 33;
                goto $l263;
                $l1402:;
                return $returnValue273;
            }
            $l1342:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) partial1363));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) yield1345));
            partial1363 = NULL;
            switch ($tmp1344) {
                case 1: goto $l1401;
                case 0: goto $l1392;
            }
            $l1404:;
        }
        }
        else {
        panda$core$Bit $tmp1405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1405.value) {
        {
            $tmp1406 = &$s1407;
            $returnValue273 = $tmp1406;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1406));
            $tmp265 = 34;
            goto $l263;
            $l1408:;
            return $returnValue273;
        }
        }
        else {
        panda$core$Bit $tmp1410 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1410.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1412 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 16));
            base1411 = *$tmp1412;
            panda$core$String* $tmp1416 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) base1411), &$s1415);
            $tmp1414 = $tmp1416;
            $tmp1413 = $tmp1414;
            $returnValue273 = $tmp1413;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1413));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1414));
            $tmp265 = 35;
            goto $l263;
            $l1417:;
            return $returnValue273;
        }
        }
        else {
        panda$core$Bit $tmp1419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1419.value) {
        {
            panda$core$String** $tmp1421 = ((panda$core$String**) ((char*) $match$193_9266->$data + 16));
            name1420 = *$tmp1421;
            $tmp1422 = name1420;
            $returnValue273 = $tmp1422;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1422));
            $tmp265 = 36;
            goto $l263;
            $l1423:;
            return $returnValue273;
        }
        }
        else {
        panda$core$Bit $tmp1425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1425.value) {
        {
            panda$core$String** $tmp1427 = ((panda$core$String**) ((char*) $match$193_9266->$data + 16));
            name1426 = *$tmp1427;
            org$pandalanguage$pandac$ASTNode** $tmp1429 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 24));
            type1428 = *$tmp1429;
            panda$core$String* $tmp1435 = panda$core$String$convert$R$panda$core$String(name1426);
            $tmp1434 = $tmp1435;
            panda$core$String* $tmp1437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1434, &$s1436);
            $tmp1433 = $tmp1437;
            panda$core$String* $tmp1438 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1433, ((panda$core$Object*) type1428));
            $tmp1432 = $tmp1438;
            panda$core$String* $tmp1440 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1432, &$s1439);
            $tmp1431 = $tmp1440;
            $tmp1430 = $tmp1431;
            $returnValue273 = $tmp1430;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1430));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1431));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1432));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1433));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1434));
            $tmp265 = 37;
            goto $l263;
            $l1441:;
            return $returnValue273;
        }
        }
        else {
        panda$core$Bit $tmp1443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1443.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1445 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$193_9266->$data + 16));
            kind1444 = *$tmp1445;
            org$pandalanguage$pandac$ASTNode** $tmp1447 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 24));
            base1446 = *$tmp1447;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1454;
            $tmp1454 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp1454->value = kind1444;
            $tmp1453 = ((panda$core$Object*) $tmp1454);
            panda$core$String* $tmp1456 = (($fn1455) $tmp1453->$class->vtable[0])($tmp1453);
            $tmp1452 = $tmp1456;
            panda$core$String* $tmp1458 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1452, &$s1457);
            $tmp1451 = $tmp1458;
            panda$core$String* $tmp1459 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1451, ((panda$core$Object*) base1446));
            $tmp1450 = $tmp1459;
            panda$core$String* $tmp1461 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1450, &$s1460);
            $tmp1449 = $tmp1461;
            $tmp1448 = $tmp1449;
            $returnValue273 = $tmp1448;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1448));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1449));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1450));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1451));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1452));
            panda$core$Panda$unref$panda$core$Object($tmp1453);
            $tmp265 = 38;
            goto $l263;
            $l1462:;
            return $returnValue273;
        }
        }
        else {
        panda$core$Bit $tmp1464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1464.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1466 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 16));
            start1465 = *$tmp1466;
            org$pandalanguage$pandac$ASTNode** $tmp1468 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 24));
            end1467 = *$tmp1468;
            panda$core$Bit* $tmp1470 = ((panda$core$Bit*) ((char*) $match$193_9266->$data + 32));
            inclusive1469 = *$tmp1470;
            org$pandalanguage$pandac$ASTNode** $tmp1472 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 33));
            step1471 = *$tmp1472;
            int $tmp1475;
            {
                panda$core$MutableString* $tmp1479 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1479);
                $tmp1478 = $tmp1479;
                $tmp1477 = $tmp1478;
                result1476 = $tmp1477;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1477));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1478));
                if (((panda$core$Bit) { start1465 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result1476, ((panda$core$Object*) start1465));
                }
                }
                if (inclusive1469.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1476, &$s1480);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(result1476, &$s1481);
                }
                }
                if (((panda$core$Bit) { end1467 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result1476, ((panda$core$Object*) end1467));
                }
                }
                if (((panda$core$Bit) { step1471 != NULL }).value) {
                {
                    panda$core$String* $tmp1484 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1483, ((panda$core$Object*) step1471));
                    $tmp1482 = $tmp1484;
                    panda$core$MutableString$append$panda$core$String(result1476, $tmp1482);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1482));
                }
                }
                panda$core$String* $tmp1487 = panda$core$MutableString$finish$R$panda$core$String(result1476);
                $tmp1486 = $tmp1487;
                $tmp1485 = $tmp1486;
                $returnValue273 = $tmp1485;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1485));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1486));
                $tmp1475 = 0;
                goto $l1473;
                $l1488:;
                $tmp265 = 39;
                goto $l263;
                $l1489:;
                return $returnValue273;
            }
            $l1473:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1476));
            result1476 = NULL;
            switch ($tmp1475) {
                case 0: goto $l1488;
            }
            $l1491:;
        }
        }
        else {
        panda$core$Bit $tmp1492 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1492.value) {
        {
            panda$core$Real64* $tmp1494 = ((panda$core$Real64*) ((char*) $match$193_9266->$data + 16));
            value1493 = *$tmp1494;
            panda$core$String* $tmp1497 = panda$core$Real64$convert$R$panda$core$String(value1493);
            $tmp1496 = $tmp1497;
            $tmp1495 = $tmp1496;
            $returnValue273 = $tmp1495;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1495));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1496));
            $tmp265 = 40;
            goto $l263;
            $l1498:;
            return $returnValue273;
        }
        }
        else {
        panda$core$Bit $tmp1500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1500.value) {
        {
            panda$core$String** $tmp1502 = ((panda$core$String**) ((char*) $match$193_9266->$data + 16));
            src1501 = *$tmp1502;
            panda$core$String* $tmp1507 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1506, src1501);
            $tmp1505 = $tmp1507;
            panda$core$String* $tmp1509 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1505, &$s1508);
            $tmp1504 = $tmp1509;
            $tmp1503 = $tmp1504;
            $returnValue273 = $tmp1503;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1503));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1504));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1505));
            $tmp265 = 41;
            goto $l263;
            $l1510:;
            return $returnValue273;
        }
        }
        else {
        panda$core$Bit $tmp1512 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1512.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1514 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 16));
            value1513 = *$tmp1514;
            if (((panda$core$Bit) { value1513 != NULL }).value) {
            {
                panda$core$String* $tmp1519 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1518, ((panda$core$Object*) value1513));
                $tmp1517 = $tmp1519;
                panda$core$String* $tmp1521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1517, &$s1520);
                $tmp1516 = $tmp1521;
                $tmp1515 = $tmp1516;
                $returnValue273 = $tmp1515;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1515));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1516));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1517));
                $tmp265 = 42;
                goto $l263;
                $l1522:;
                return $returnValue273;
            }
            }
            $tmp1524 = &$s1525;
            $returnValue273 = $tmp1524;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1524));
            $tmp265 = 43;
            goto $l263;
            $l1526:;
            return $returnValue273;
        }
        }
        else {
        panda$core$Bit $tmp1528 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1528.value) {
        {
            $tmp1529 = &$s1530;
            $returnValue273 = $tmp1529;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1529));
            $tmp265 = 44;
            goto $l263;
            $l1531:;
            return $returnValue273;
        }
        }
        else {
        panda$core$Bit $tmp1533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1533.value) {
        {
            panda$core$String** $tmp1535 = ((panda$core$String**) ((char*) $match$193_9266->$data + 16));
            str1534 = *$tmp1535;
            panda$core$String* $tmp1539 = panda$core$String$format$panda$core$String$R$panda$core$String(str1534, &$s1538);
            $tmp1537 = $tmp1539;
            $tmp1536 = $tmp1537;
            $returnValue273 = $tmp1536;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1536));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1537));
            $tmp265 = 45;
            goto $l263;
            $l1540:;
            return $returnValue273;
        }
        }
        else {
        panda$core$Bit $tmp1542 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1542.value) {
        {
            $tmp1543 = &$s1544;
            $returnValue273 = $tmp1543;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1543));
            $tmp265 = 46;
            goto $l263;
            $l1545:;
            return $returnValue273;
        }
        }
        else {
        panda$core$Bit $tmp1547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1547.value) {
        {
            panda$collections$ImmutableArray** $tmp1549 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9266->$data + 16));
            arguments1548 = *$tmp1549;
            ITable* $tmp1555 = ((panda$collections$ListView*) arguments1548)->$class->itable;
            while ($tmp1555->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1555 = $tmp1555->next;
            }
            $fn1557 $tmp1556 = $tmp1555->methods[4];
            panda$core$String* $tmp1558 = $tmp1556(((panda$collections$ListView*) arguments1548));
            $tmp1554 = $tmp1558;
            panda$core$String* $tmp1559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1553, $tmp1554);
            $tmp1552 = $tmp1559;
            panda$core$String* $tmp1561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1552, &$s1560);
            $tmp1551 = $tmp1561;
            $tmp1550 = $tmp1551;
            $returnValue273 = $tmp1550;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1550));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1551));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1552));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1554));
            $tmp265 = 47;
            goto $l263;
            $l1562:;
            return $returnValue273;
        }
        }
        else {
        panda$core$Bit $tmp1564 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1564.value) {
        {
            panda$collections$ImmutableArray** $tmp1566 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9266->$data + 16));
            parameters1565 = *$tmp1566;
            ITable* $tmp1572 = ((panda$collections$ListView*) parameters1565)->$class->itable;
            while ($tmp1572->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1572 = $tmp1572->next;
            }
            $fn1574 $tmp1573 = $tmp1572->methods[4];
            panda$core$String* $tmp1575 = $tmp1573(((panda$collections$ListView*) parameters1565));
            $tmp1571 = $tmp1575;
            panda$core$String* $tmp1576 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1570, $tmp1571);
            $tmp1569 = $tmp1576;
            panda$core$String* $tmp1578 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1569, &$s1577);
            $tmp1568 = $tmp1578;
            $tmp1567 = $tmp1568;
            $returnValue273 = $tmp1567;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1567));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1568));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1569));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1571));
            $tmp265 = 48;
            goto $l263;
            $l1579:;
            return $returnValue273;
        }
        }
        else {
        panda$core$Bit $tmp1581 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp1581.value) {
        {
            panda$core$String** $tmp1583 = ((panda$core$String**) ((char*) $match$193_9266->$data + 16));
            name1582 = *$tmp1583;
            $tmp1584 = name1582;
            $returnValue273 = $tmp1584;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1584));
            $tmp265 = 49;
            goto $l263;
            $l1585:;
            return $returnValue273;
        }
        }
        else {
        panda$core$Bit $tmp1587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp1587.value) {
        {
            panda$core$String** $tmp1589 = ((panda$core$String**) ((char*) $match$193_9266->$data + 16));
            name1588 = *$tmp1589;
            org$pandalanguage$pandac$ASTNode** $tmp1591 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 24));
            type1590 = *$tmp1591;
            if (((panda$core$Bit) { type1590 != NULL }).value) {
            {
                panda$core$String* $tmp1597 = panda$core$String$convert$R$panda$core$String(name1588);
                $tmp1596 = $tmp1597;
                panda$core$String* $tmp1599 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1596, &$s1598);
                $tmp1595 = $tmp1599;
                panda$core$String* $tmp1600 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1595, ((panda$core$Object*) type1590));
                $tmp1594 = $tmp1600;
                panda$core$String* $tmp1602 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1594, &$s1601);
                $tmp1593 = $tmp1602;
                $tmp1592 = $tmp1593;
                $returnValue273 = $tmp1592;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1592));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1593));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1594));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1595));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1596));
                $tmp265 = 50;
                goto $l263;
                $l1603:;
                return $returnValue273;
            }
            }
            $tmp1605 = name1588;
            $returnValue273 = $tmp1605;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1605));
            $tmp265 = 51;
            goto $l263;
            $l1606:;
            return $returnValue273;
        }
        }
        else {
        panda$core$Bit $tmp1608 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp1608.value) {
        {
            panda$collections$ImmutableArray** $tmp1610 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9266->$data + 16));
            parameters1609 = *$tmp1610;
            org$pandalanguage$pandac$ASTNode** $tmp1612 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 24));
            body1611 = *$tmp1612;
            ITable* $tmp1620 = ((panda$collections$ListView*) parameters1609)->$class->itable;
            while ($tmp1620->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1620 = $tmp1620->next;
            }
            $fn1622 $tmp1621 = $tmp1620->methods[4];
            panda$core$String* $tmp1623 = $tmp1621(((panda$collections$ListView*) parameters1609));
            $tmp1619 = $tmp1623;
            panda$core$String* $tmp1624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1618, $tmp1619);
            $tmp1617 = $tmp1624;
            panda$core$String* $tmp1626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1617, &$s1625);
            $tmp1616 = $tmp1626;
            panda$core$String* $tmp1627 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1616, ((panda$core$Object*) body1611));
            $tmp1615 = $tmp1627;
            panda$core$String* $tmp1629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1615, &$s1628);
            $tmp1614 = $tmp1629;
            $tmp1613 = $tmp1614;
            $returnValue273 = $tmp1613;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1613));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1614));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1615));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1616));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1617));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1619));
            $tmp265 = 52;
            goto $l263;
            $l1630:;
            return $returnValue273;
        }
        }
        else {
        panda$core$Bit $tmp1632 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp1632.value) {
        {
            panda$collections$ImmutableArray** $tmp1634 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9266->$data + 16));
            parameters1633 = *$tmp1634;
            org$pandalanguage$pandac$ASTNode** $tmp1636 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 24));
            body1635 = *$tmp1636;
            ITable* $tmp1644 = ((panda$collections$ListView*) parameters1633)->$class->itable;
            while ($tmp1644->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1644 = $tmp1644->next;
            }
            $fn1646 $tmp1645 = $tmp1644->methods[4];
            panda$core$String* $tmp1647 = $tmp1645(((panda$collections$ListView*) parameters1633));
            $tmp1643 = $tmp1647;
            panda$core$String* $tmp1648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1642, $tmp1643);
            $tmp1641 = $tmp1648;
            panda$core$String* $tmp1650 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1641, &$s1649);
            $tmp1640 = $tmp1650;
            panda$core$String* $tmp1651 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1640, ((panda$core$Object*) body1635));
            $tmp1639 = $tmp1651;
            panda$core$String* $tmp1653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1639, &$s1652);
            $tmp1638 = $tmp1653;
            $tmp1637 = $tmp1638;
            $returnValue273 = $tmp1637;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1637));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1638));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1639));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1640));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1641));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1643));
            $tmp265 = 53;
            goto $l263;
            $l1654:;
            return $returnValue273;
        }
        }
        else {
        panda$core$Bit $tmp1656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 46 }));
        if ($tmp1656.value) {
        {
            panda$core$String** $tmp1658 = ((panda$core$String**) ((char*) $match$193_9266->$data + 16));
            name1657 = *$tmp1658;
            $tmp1659 = name1657;
            $returnValue273 = $tmp1659;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1659));
            $tmp265 = 54;
            goto $l263;
            $l1660:;
            return $returnValue273;
        }
        }
        else {
        panda$core$Bit $tmp1662 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 47 }));
        if ($tmp1662.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp1664 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$193_9266->$data + 16));
            kind1663 = *$tmp1664;
            panda$collections$ImmutableArray** $tmp1666 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9266->$data + 24));
            decls1665 = *$tmp1666;
            int $tmp1669;
            {
                panda$core$MutableString* $tmp1673 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1673);
                $tmp1672 = $tmp1673;
                $tmp1671 = $tmp1672;
                result1670 = $tmp1671;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1671));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1672));
                {
                    $match$458_171674 = kind1663;
                    panda$core$Bit $tmp1675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$458_171674.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp1675.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1670, &$s1676);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$458_171674.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp1677.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1670, &$s1678);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$458_171674.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp1679.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1670, &$s1680);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1681 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$458_171674.$rawValue, ((panda$core$Int64) { 3 }));
                    if ($tmp1681.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1670, &$s1682);
                    }
                    }
                    }
                    }
                    }
                }
                ITable* $tmp1684 = ((panda$collections$ListView*) decls1665)->$class->itable;
                while ($tmp1684->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1684 = $tmp1684->next;
                }
                $fn1686 $tmp1685 = $tmp1684->methods[4];
                panda$core$String* $tmp1687 = $tmp1685(((panda$collections$ListView*) decls1665));
                $tmp1683 = $tmp1687;
                panda$core$MutableString$append$panda$core$String(result1670, $tmp1683);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1683));
                panda$core$String* $tmp1690 = panda$core$MutableString$finish$R$panda$core$String(result1670);
                $tmp1689 = $tmp1690;
                $tmp1688 = $tmp1689;
                $returnValue273 = $tmp1688;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1688));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1689));
                $tmp1669 = 0;
                goto $l1667;
                $l1691:;
                $tmp265 = 55;
                goto $l263;
                $l1692:;
                return $returnValue273;
            }
            $l1667:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1670));
            result1670 = NULL;
            switch ($tmp1669) {
                case 0: goto $l1691;
            }
            $l1694:;
        }
        }
        else {
        panda$core$Bit $tmp1695 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 48 }));
        if ($tmp1695.value) {
        {
            panda$collections$ImmutableArray** $tmp1697 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9266->$data + 16));
            tests1696 = *$tmp1697;
            panda$collections$ImmutableArray** $tmp1699 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9266->$data + 24));
            statements1698 = *$tmp1699;
            int $tmp1702;
            {
                panda$core$MutableString* $tmp1706 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1706, &$s1707);
                $tmp1705 = $tmp1706;
                $tmp1704 = $tmp1705;
                result1703 = $tmp1704;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1704));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1705));
                $tmp1709 = &$s1710;
                separator1708 = $tmp1709;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1709));
                {
                    int $tmp1713;
                    {
                        ITable* $tmp1717 = ((panda$collections$Iterable*) tests1696)->$class->itable;
                        while ($tmp1717->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1717 = $tmp1717->next;
                        }
                        $fn1719 $tmp1718 = $tmp1717->methods[0];
                        panda$collections$Iterator* $tmp1720 = $tmp1718(((panda$collections$Iterable*) tests1696));
                        $tmp1716 = $tmp1720;
                        $tmp1715 = $tmp1716;
                        Iter$469$171714 = $tmp1715;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1715));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1716));
                        $l1721:;
                        ITable* $tmp1724 = Iter$469$171714->$class->itable;
                        while ($tmp1724->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1724 = $tmp1724->next;
                        }
                        $fn1726 $tmp1725 = $tmp1724->methods[0];
                        panda$core$Bit $tmp1727 = $tmp1725(Iter$469$171714);
                        panda$core$Bit $tmp1728 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1727);
                        bool $tmp1723 = $tmp1728.value;
                        if (!$tmp1723) goto $l1722;
                        {
                            int $tmp1731;
                            {
                                ITable* $tmp1735 = Iter$469$171714->$class->itable;
                                while ($tmp1735->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1735 = $tmp1735->next;
                                }
                                $fn1737 $tmp1736 = $tmp1735->methods[1];
                                panda$core$Object* $tmp1738 = $tmp1736(Iter$469$171714);
                                $tmp1734 = $tmp1738;
                                $tmp1733 = ((org$pandalanguage$pandac$ASTNode*) $tmp1734);
                                t1732 = $tmp1733;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1733));
                                panda$core$Panda$unref$panda$core$Object($tmp1734);
                                panda$core$String* $tmp1743 = panda$core$String$convert$R$panda$core$String(separator1708);
                                $tmp1742 = $tmp1743;
                                panda$core$String* $tmp1745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1742, &$s1744);
                                $tmp1741 = $tmp1745;
                                panda$core$String* $tmp1746 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1741, ((panda$core$Object*) t1732));
                                $tmp1740 = $tmp1746;
                                panda$core$String* $tmp1748 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1740, &$s1747);
                                $tmp1739 = $tmp1748;
                                panda$core$MutableString$append$panda$core$String(result1703, $tmp1739);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1739));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1740));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1741));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1742));
                            }
                            $tmp1731 = -1;
                            goto $l1729;
                            $l1729:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1732));
                            t1732 = NULL;
                            switch ($tmp1731) {
                                case -1: goto $l1749;
                            }
                            $l1749:;
                        }
                        goto $l1721;
                        $l1722:;
                    }
                    $tmp1713 = -1;
                    goto $l1711;
                    $l1711:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$469$171714));
                    Iter$469$171714 = NULL;
                    switch ($tmp1713) {
                        case -1: goto $l1750;
                    }
                    $l1750:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1751, ((panda$core$UInt8) { 58 }));
                panda$core$MutableString$append$panda$core$Char8(result1703, $tmp1751);
                {
                    int $tmp1754;
                    {
                        ITable* $tmp1758 = ((panda$collections$Iterable*) statements1698)->$class->itable;
                        while ($tmp1758->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1758 = $tmp1758->next;
                        }
                        $fn1760 $tmp1759 = $tmp1758->methods[0];
                        panda$collections$Iterator* $tmp1761 = $tmp1759(((panda$collections$Iterable*) statements1698));
                        $tmp1757 = $tmp1761;
                        $tmp1756 = $tmp1757;
                        Iter$473$171755 = $tmp1756;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1756));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1757));
                        $l1762:;
                        ITable* $tmp1765 = Iter$473$171755->$class->itable;
                        while ($tmp1765->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1765 = $tmp1765->next;
                        }
                        $fn1767 $tmp1766 = $tmp1765->methods[0];
                        panda$core$Bit $tmp1768 = $tmp1766(Iter$473$171755);
                        panda$core$Bit $tmp1769 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1768);
                        bool $tmp1764 = $tmp1769.value;
                        if (!$tmp1764) goto $l1763;
                        {
                            int $tmp1772;
                            {
                                ITable* $tmp1776 = Iter$473$171755->$class->itable;
                                while ($tmp1776->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1776 = $tmp1776->next;
                                }
                                $fn1778 $tmp1777 = $tmp1776->methods[1];
                                panda$core$Object* $tmp1779 = $tmp1777(Iter$473$171755);
                                $tmp1775 = $tmp1779;
                                $tmp1774 = ((org$pandalanguage$pandac$ASTNode*) $tmp1775);
                                s1773 = $tmp1774;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1774));
                                panda$core$Panda$unref$panda$core$Object($tmp1775);
                                panda$core$String* $tmp1782 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1781, ((panda$core$Object*) s1773));
                                $tmp1780 = $tmp1782;
                                panda$core$MutableString$append$panda$core$String(result1703, $tmp1780);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1780));
                            }
                            $tmp1772 = -1;
                            goto $l1770;
                            $l1770:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1773));
                            s1773 = NULL;
                            switch ($tmp1772) {
                                case -1: goto $l1783;
                            }
                            $l1783:;
                        }
                        goto $l1762;
                        $l1763:;
                    }
                    $tmp1754 = -1;
                    goto $l1752;
                    $l1752:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$473$171755));
                    Iter$473$171755 = NULL;
                    switch ($tmp1754) {
                        case -1: goto $l1784;
                    }
                    $l1784:;
                }
                panda$core$String* $tmp1787 = panda$core$MutableString$finish$R$panda$core$String(result1703);
                $tmp1786 = $tmp1787;
                $tmp1785 = $tmp1786;
                $returnValue273 = $tmp1785;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1785));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1786));
                $tmp1702 = 0;
                goto $l1700;
                $l1788:;
                $tmp265 = 56;
                goto $l263;
                $l1789:;
                return $returnValue273;
            }
            $l1700:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1708));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1703));
            result1703 = NULL;
            separator1708 = NULL;
            switch ($tmp1702) {
                case 0: goto $l1788;
            }
            $l1791:;
        }
        }
        else {
        panda$core$Bit $tmp1792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9266->$rawValue, ((panda$core$Int64) { 49 }));
        if ($tmp1792.value) {
        {
            panda$core$String** $tmp1794 = ((panda$core$String**) ((char*) $match$193_9266->$data + 16));
            label1793 = *$tmp1794;
            org$pandalanguage$pandac$ASTNode** $tmp1796 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9266->$data + 24));
            test1795 = *$tmp1796;
            panda$collections$ImmutableArray** $tmp1798 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9266->$data + 32));
            statements1797 = *$tmp1798;
            int $tmp1801;
            {
                panda$core$MutableString* $tmp1805 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1805);
                $tmp1804 = $tmp1805;
                $tmp1803 = $tmp1804;
                result1802 = $tmp1803;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1803));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1804));
                if (((panda$core$Bit) { label1793 != NULL }).value) {
                {
                    panda$core$String* $tmp1808 = panda$core$String$convert$R$panda$core$String(label1793);
                    $tmp1807 = $tmp1808;
                    panda$core$String* $tmp1810 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1807, &$s1809);
                    $tmp1806 = $tmp1810;
                    panda$core$MutableString$append$panda$core$String(result1802, $tmp1806);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1806));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1807));
                }
                }
                panda$core$String* $tmp1814 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1813, ((panda$core$Object*) test1795));
                $tmp1812 = $tmp1814;
                panda$core$String* $tmp1816 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1812, &$s1815);
                $tmp1811 = $tmp1816;
                panda$core$MutableString$append$panda$core$String(result1802, $tmp1811);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1811));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1812));
                {
                    int $tmp1819;
                    {
                        ITable* $tmp1823 = ((panda$collections$Iterable*) statements1797)->$class->itable;
                        while ($tmp1823->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1823 = $tmp1823->next;
                        }
                        $fn1825 $tmp1824 = $tmp1823->methods[0];
                        panda$collections$Iterator* $tmp1826 = $tmp1824(((panda$collections$Iterable*) statements1797));
                        $tmp1822 = $tmp1826;
                        $tmp1821 = $tmp1822;
                        Iter$483$171820 = $tmp1821;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1821));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1822));
                        $l1827:;
                        ITable* $tmp1830 = Iter$483$171820->$class->itable;
                        while ($tmp1830->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1830 = $tmp1830->next;
                        }
                        $fn1832 $tmp1831 = $tmp1830->methods[0];
                        panda$core$Bit $tmp1833 = $tmp1831(Iter$483$171820);
                        panda$core$Bit $tmp1834 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1833);
                        bool $tmp1829 = $tmp1834.value;
                        if (!$tmp1829) goto $l1828;
                        {
                            int $tmp1837;
                            {
                                ITable* $tmp1841 = Iter$483$171820->$class->itable;
                                while ($tmp1841->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1841 = $tmp1841->next;
                                }
                                $fn1843 $tmp1842 = $tmp1841->methods[1];
                                panda$core$Object* $tmp1844 = $tmp1842(Iter$483$171820);
                                $tmp1840 = $tmp1844;
                                $tmp1839 = ((org$pandalanguage$pandac$ASTNode*) $tmp1840);
                                s1838 = $tmp1839;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1839));
                                panda$core$Panda$unref$panda$core$Object($tmp1840);
                                panda$core$String* $tmp1847 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1838), &$s1846);
                                $tmp1845 = $tmp1847;
                                panda$core$MutableString$append$panda$core$String(result1802, $tmp1845);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1845));
                            }
                            $tmp1837 = -1;
                            goto $l1835;
                            $l1835:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1838));
                            s1838 = NULL;
                            switch ($tmp1837) {
                                case -1: goto $l1848;
                            }
                            $l1848:;
                        }
                        goto $l1827;
                        $l1828:;
                    }
                    $tmp1819 = -1;
                    goto $l1817;
                    $l1817:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$483$171820));
                    Iter$483$171820 = NULL;
                    switch ($tmp1819) {
                        case -1: goto $l1849;
                    }
                    $l1849:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1850, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1802, $tmp1850);
                panda$core$String* $tmp1853 = panda$core$MutableString$finish$R$panda$core$String(result1802);
                $tmp1852 = $tmp1853;
                $tmp1851 = $tmp1852;
                $returnValue273 = $tmp1851;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1851));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1852));
                $tmp1801 = 0;
                goto $l1799;
                $l1854:;
                $tmp265 = 57;
                goto $l263;
                $l1855:;
                return $returnValue273;
            }
            $l1799:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1802));
            result1802 = NULL;
            switch ($tmp1801) {
                case 0: goto $l1854;
            }
            $l1857:;
        }
        }
        else {
        {
            if (((panda$core$Bit) { false }).value) goto $l1858; else goto $l1859;
            $l1859:;
            panda$core$Int64$wrapper* $tmp1865;
            $tmp1865 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1865->value = self->$rawValue;
            $tmp1864 = ((panda$core$Object*) $tmp1865);
            panda$core$String* $tmp1866 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1863, $tmp1864);
            $tmp1862 = $tmp1866;
            panda$core$String* $tmp1868 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1862, &$s1867);
            $tmp1861 = $tmp1868;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1860, (panda$core$Int64) { 489 }, $tmp1861);
            abort();
            $l1858:;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
    $tmp265 = -1;
    goto $l263;
    $l263:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp267));
    switch ($tmp265) {
        case 35: goto $l1417;
        case 39: goto $l1489;
        case 52: goto $l1630;
        case 2: goto $l302;
        case 42: goto $l1522;
        case 1: goto $l288;
        case 8: goto $l420;
        case 18: goto $l698;
        case 14: goto $l656;
        case 7: goto $l369;
        case 15: goto $l669;
        case 19: goto $l763;
        case 20: goto $l783;
        case 9: goto $l433;
        case -1: goto $l1869;
        case 48: goto $l1579;
        case 38: goto $l1462;
        case 57: goto $l1855;
        case 21: goto $l839;
        case 33: goto $l1402;
        case 16: goto $l673;
        case 3: goto $l316;
        case 5: goto $l333;
        case 54: goto $l1660;
        case 0: goto $l285;
        case 34: goto $l1408;
        case 25: goto $l990;
        case 30: goto $l1196;
        case 43: goto $l1526;
        case 28: goto $l1074;
        case 36: goto $l1423;
        case 44: goto $l1531;
        case 11: goto $l461;
        case 49: goto $l1585;
        case 10: goto $l437;
        case 6: goto $l361;
        case 56: goto $l1789;
        case 51: goto $l1606;
        case 53: goto $l1654;
        case 23: goto $l960;
        case 37: goto $l1441;
        case 45: goto $l1540;
        case 50: goto $l1603;
        case 55: goto $l1692;
        case 31: goto $l1332;
        case 27: goto $l1065;
        case 26: goto $l1056;
        case 32: goto $l1393;
        case 46: goto $l1545;
        case 29: goto $l1132;
        case 47: goto $l1562;
        case 41: goto $l1510;
        case 13: goto $l528;
        case 40: goto $l1498;
        case 12: goto $l499;
        case 4: goto $l328;
        case 22: goto $l889;
        case 17: goto $l692;
        case 24: goto $l984;
    }
    $l1869:;
    abort();
}
void org$pandalanguage$pandac$ASTNode$cleanup(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$5_11876 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1877;
    org$pandalanguage$pandac$Position _f01879;
    panda$core$String* _f11881 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21883 = NULL;
    org$pandalanguage$pandac$Position _f01886;
    org$pandalanguage$pandac$ASTNode* _f11888 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21890 = NULL;
    org$pandalanguage$pandac$Position _f01893;
    org$pandalanguage$pandac$ASTNode* _f11895 = NULL;
    org$pandalanguage$pandac$Position _f01898;
    org$pandalanguage$pandac$Position _f01901;
    org$pandalanguage$pandac$ASTNode* _f11903 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind _f21905;
    org$pandalanguage$pandac$ASTNode* _f31907 = NULL;
    org$pandalanguage$pandac$Position _f01910;
    panda$core$Bit _f11912;
    org$pandalanguage$pandac$Position _f01915;
    panda$collections$ImmutableArray* _f11917 = NULL;
    org$pandalanguage$pandac$Position _f01920;
    panda$core$String* _f11922 = NULL;
    org$pandalanguage$pandac$Position _f01925;
    org$pandalanguage$pandac$ASTNode* _f11927 = NULL;
    panda$collections$ImmutableArray* _f21929 = NULL;
    org$pandalanguage$pandac$Position _f01932;
    org$pandalanguage$pandac$ASTNode* _f11934 = NULL;
    panda$core$String* _f21936 = NULL;
    panda$collections$ImmutableArray* _f31938 = NULL;
    org$pandalanguage$pandac$Position _f01941;
    org$pandalanguage$pandac$ASTNode* _f11943 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* _f21945 = NULL;
    panda$core$Int64 _f31947;
    org$pandalanguage$pandac$Position _f01950;
    org$pandalanguage$pandac$ASTNode* _f11952 = NULL;
    panda$collections$ImmutableArray* _f21954 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind _f31956;
    panda$core$String* _f41958 = NULL;
    panda$collections$ImmutableArray* _f51960 = NULL;
    panda$collections$ImmutableArray* _f61962 = NULL;
    panda$collections$ImmutableArray* _f71964 = NULL;
    org$pandalanguage$pandac$Position _f01967;
    panda$core$String* _f11969 = NULL;
    org$pandalanguage$pandac$Position _f01972;
    org$pandalanguage$pandac$ASTNode* _f11974 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21976 = NULL;
    org$pandalanguage$pandac$Position _f01979;
    panda$core$String* _f11981 = NULL;
    panda$collections$ImmutableArray* _f21983 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31985 = NULL;
    org$pandalanguage$pandac$Position _f01988;
    org$pandalanguage$pandac$ASTNode* _f11990 = NULL;
    panda$core$String* _f21992 = NULL;
    org$pandalanguage$pandac$Position _f01995;
    org$pandalanguage$pandac$ASTNode* _f11997 = NULL;
    panda$collections$ImmutableArray* _f21999 = NULL;
    org$pandalanguage$pandac$ASTNode* _f32001 = NULL;
    panda$collections$ImmutableArray* _f02004 = NULL;
    org$pandalanguage$pandac$Position _f02007;
    panda$core$String* _f12009 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22011 = NULL;
    org$pandalanguage$pandac$ASTNode* _f32013 = NULL;
    panda$collections$ImmutableArray* _f42015 = NULL;
    org$pandalanguage$pandac$Position _f02018;
    panda$core$String* _f12020 = NULL;
    panda$collections$ImmutableArray* _f22022 = NULL;
    org$pandalanguage$pandac$Position _f02025;
    panda$core$String* _f12027 = NULL;
    org$pandalanguage$pandac$Position _f02030;
    org$pandalanguage$pandac$ASTNode* _f12032 = NULL;
    panda$collections$ImmutableArray* _f22034 = NULL;
    org$pandalanguage$pandac$ASTNode* _f32036 = NULL;
    org$pandalanguage$pandac$Position _f02039;
    panda$core$UInt64 _f12041;
    org$pandalanguage$pandac$IRNode* _f02044 = NULL;
    org$pandalanguage$pandac$Position _f02047;
    panda$core$String* _f12049 = NULL;
    panda$collections$ImmutableArray* _f22051 = NULL;
    org$pandalanguage$pandac$Position _f02054;
    org$pandalanguage$pandac$ASTNode* _f12056 = NULL;
    panda$collections$ImmutableArray* _f22058 = NULL;
    panda$collections$ImmutableArray* _f32060 = NULL;
    org$pandalanguage$pandac$Position _f02063;
    org$pandalanguage$pandac$ASTNode* _f12065 = NULL;
    panda$collections$ImmutableArray* _f22067 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind _f32069;
    panda$core$String* _f42071 = NULL;
    panda$collections$ImmutableArray* _f52073 = NULL;
    panda$collections$ImmutableArray* _f62075 = NULL;
    org$pandalanguage$pandac$ASTNode* _f72077 = NULL;
    panda$collections$ImmutableArray* _f82079 = NULL;
    org$pandalanguage$pandac$Position _f02082;
    org$pandalanguage$pandac$parser$Token$Kind _f12084;
    panda$collections$ImmutableArray* _f22086 = NULL;
    org$pandalanguage$pandac$ASTNode* _f32088 = NULL;
    org$pandalanguage$pandac$Position _f02091;
    org$pandalanguage$pandac$Position _f02094;
    org$pandalanguage$pandac$ASTNode* _f12096 = NULL;
    org$pandalanguage$pandac$Position _f02099;
    panda$core$String* _f12101 = NULL;
    org$pandalanguage$pandac$Position _f02104;
    panda$core$String* _f12106 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22108 = NULL;
    org$pandalanguage$pandac$Position _f02111;
    org$pandalanguage$pandac$parser$Token$Kind _f12113;
    org$pandalanguage$pandac$ASTNode* _f22115 = NULL;
    org$pandalanguage$pandac$Position _f02118;
    org$pandalanguage$pandac$ASTNode* _f12120 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22122 = NULL;
    panda$core$Bit _f32124;
    org$pandalanguage$pandac$ASTNode* _f42126 = NULL;
    org$pandalanguage$pandac$Position _f02129;
    panda$core$Real64 _f12131;
    org$pandalanguage$pandac$Position _f02134;
    panda$core$String* _f12136 = NULL;
    org$pandalanguage$pandac$Position _f02139;
    org$pandalanguage$pandac$ASTNode* _f12141 = NULL;
    org$pandalanguage$pandac$Position _f02144;
    org$pandalanguage$pandac$Position _f02147;
    panda$core$String* _f12149 = NULL;
    org$pandalanguage$pandac$Position _f02152;
    org$pandalanguage$pandac$Position _f02155;
    panda$collections$ImmutableArray* _f12157 = NULL;
    org$pandalanguage$pandac$Position _f02160;
    panda$collections$ImmutableArray* _f12162 = NULL;
    org$pandalanguage$pandac$Position _f02165;
    panda$core$String* _f12167 = NULL;
    org$pandalanguage$pandac$Position _f02170;
    panda$collections$ImmutableArray* _f12172 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22174 = NULL;
    org$pandalanguage$pandac$Position _f02177;
    panda$core$String* _f12179 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22181 = NULL;
    org$pandalanguage$pandac$Position _f02184;
    panda$collections$ImmutableArray* _f12186 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22188 = NULL;
    org$pandalanguage$pandac$Position _f02191;
    panda$core$String* _f12193 = NULL;
    org$pandalanguage$pandac$Position _f02196;
    org$pandalanguage$pandac$Variable$Kind _f12198;
    panda$collections$ImmutableArray* _f22200 = NULL;
    org$pandalanguage$pandac$Position _f02203;
    panda$collections$ImmutableArray* _f12205 = NULL;
    panda$collections$ImmutableArray* _f22207 = NULL;
    org$pandalanguage$pandac$Position _f02210;
    panda$core$String* _f12212 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22214 = NULL;
    panda$collections$ImmutableArray* _f32216 = NULL;
    int $tmp1872;
    {
        int $tmp1875;
        {
            $tmp1877 = self;
            $match$5_11876 = $tmp1877;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1877));
            panda$core$Bit $tmp1878 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp1878.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1880 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f01879 = *$tmp1880;
                panda$core$String** $tmp1882 = ((panda$core$String**) ((char*) $match$5_11876->$data + 16));
                _f11881 = *$tmp1882;
                org$pandalanguage$pandac$ASTNode** $tmp1884 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 24));
                _f21883 = *$tmp1884;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11881));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21883));
            }
            }
            else {
            panda$core$Bit $tmp1885 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp1885.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1887 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f01886 = *$tmp1887;
                org$pandalanguage$pandac$ASTNode** $tmp1889 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 16));
                _f11888 = *$tmp1889;
                org$pandalanguage$pandac$ASTNode** $tmp1891 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 24));
                _f21890 = *$tmp1891;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11888));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21890));
            }
            }
            else {
            panda$core$Bit $tmp1892 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1892.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1894 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f01893 = *$tmp1894;
                org$pandalanguage$pandac$ASTNode** $tmp1896 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 16));
                _f11895 = *$tmp1896;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11895));
            }
            }
            else {
            panda$core$Bit $tmp1897 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp1897.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1899 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f01898 = *$tmp1899;
            }
            }
            else {
            panda$core$Bit $tmp1900 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 4 }));
            if ($tmp1900.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1902 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f01901 = *$tmp1902;
                org$pandalanguage$pandac$ASTNode** $tmp1904 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 16));
                _f11903 = *$tmp1904;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp1906 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11876->$data + 24));
                _f21905 = *$tmp1906;
                org$pandalanguage$pandac$ASTNode** $tmp1908 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 32));
                _f31907 = *$tmp1908;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11903));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31907));
            }
            }
            else {
            panda$core$Bit $tmp1909 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 5 }));
            if ($tmp1909.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1911 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f01910 = *$tmp1911;
                panda$core$Bit* $tmp1913 = ((panda$core$Bit*) ((char*) $match$5_11876->$data + 16));
                _f11912 = *$tmp1913;
            }
            }
            else {
            panda$core$Bit $tmp1914 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 6 }));
            if ($tmp1914.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1916 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f01915 = *$tmp1916;
                panda$collections$ImmutableArray** $tmp1918 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11876->$data + 16));
                _f11917 = *$tmp1918;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11917));
            }
            }
            else {
            panda$core$Bit $tmp1919 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 7 }));
            if ($tmp1919.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1921 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f01920 = *$tmp1921;
                panda$core$String** $tmp1923 = ((panda$core$String**) ((char*) $match$5_11876->$data + 16));
                _f11922 = *$tmp1923;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11922));
            }
            }
            else {
            panda$core$Bit $tmp1924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 8 }));
            if ($tmp1924.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1926 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f01925 = *$tmp1926;
                org$pandalanguage$pandac$ASTNode** $tmp1928 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 16));
                _f11927 = *$tmp1928;
                panda$collections$ImmutableArray** $tmp1930 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11876->$data + 24));
                _f21929 = *$tmp1930;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11927));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21929));
            }
            }
            else {
            panda$core$Bit $tmp1931 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 9 }));
            if ($tmp1931.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1933 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f01932 = *$tmp1933;
                org$pandalanguage$pandac$ASTNode** $tmp1935 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 16));
                _f11934 = *$tmp1935;
                panda$core$String** $tmp1937 = ((panda$core$String**) ((char*) $match$5_11876->$data + 24));
                _f21936 = *$tmp1937;
                panda$collections$ImmutableArray** $tmp1939 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11876->$data + 32));
                _f31938 = *$tmp1939;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11934));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21936));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31938));
            }
            }
            else {
            panda$core$Bit $tmp1940 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 10 }));
            if ($tmp1940.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1942 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f01941 = *$tmp1942;
                org$pandalanguage$pandac$ASTNode** $tmp1944 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 16));
                _f11943 = *$tmp1944;
                org$pandalanguage$pandac$ChoiceEntry** $tmp1946 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_11876->$data + 24));
                _f21945 = *$tmp1946;
                panda$core$Int64* $tmp1948 = ((panda$core$Int64*) ((char*) $match$5_11876->$data + 32));
                _f31947 = *$tmp1948;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11943));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21945));
            }
            }
            else {
            panda$core$Bit $tmp1949 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp1949.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1951 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f01950 = *$tmp1951;
                org$pandalanguage$pandac$ASTNode** $tmp1953 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 16));
                _f11952 = *$tmp1953;
                panda$collections$ImmutableArray** $tmp1955 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11876->$data + 24));
                _f21954 = *$tmp1955;
                org$pandalanguage$pandac$ClassDecl$Kind* $tmp1957 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$5_11876->$data + 32));
                _f31956 = *$tmp1957;
                panda$core$String** $tmp1959 = ((panda$core$String**) ((char*) $match$5_11876->$data + 40));
                _f41958 = *$tmp1959;
                panda$collections$ImmutableArray** $tmp1961 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11876->$data + 48));
                _f51960 = *$tmp1961;
                panda$collections$ImmutableArray** $tmp1963 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11876->$data + 56));
                _f61962 = *$tmp1963;
                panda$collections$ImmutableArray** $tmp1965 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11876->$data + 64));
                _f71964 = *$tmp1965;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11952));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21954));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41958));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f51960));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f61962));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f71964));
            }
            }
            else {
            panda$core$Bit $tmp1966 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp1966.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1968 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f01967 = *$tmp1968;
                panda$core$String** $tmp1970 = ((panda$core$String**) ((char*) $match$5_11876->$data + 16));
                _f11969 = *$tmp1970;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11969));
            }
            }
            else {
            panda$core$Bit $tmp1971 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp1971.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1973 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f01972 = *$tmp1973;
                org$pandalanguage$pandac$ASTNode** $tmp1975 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 16));
                _f11974 = *$tmp1975;
                org$pandalanguage$pandac$ASTNode** $tmp1977 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 24));
                _f21976 = *$tmp1977;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11974));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21976));
            }
            }
            else {
            panda$core$Bit $tmp1978 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 14 }));
            if ($tmp1978.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1980 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f01979 = *$tmp1980;
                panda$core$String** $tmp1982 = ((panda$core$String**) ((char*) $match$5_11876->$data + 16));
                _f11981 = *$tmp1982;
                panda$collections$ImmutableArray** $tmp1984 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11876->$data + 24));
                _f21983 = *$tmp1984;
                org$pandalanguage$pandac$ASTNode** $tmp1986 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 32));
                _f31985 = *$tmp1986;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11981));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21983));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31985));
            }
            }
            else {
            panda$core$Bit $tmp1987 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 15 }));
            if ($tmp1987.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1989 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f01988 = *$tmp1989;
                org$pandalanguage$pandac$ASTNode** $tmp1991 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 16));
                _f11990 = *$tmp1991;
                panda$core$String** $tmp1993 = ((panda$core$String**) ((char*) $match$5_11876->$data + 24));
                _f21992 = *$tmp1993;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11990));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21992));
            }
            }
            else {
            panda$core$Bit $tmp1994 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 16 }));
            if ($tmp1994.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1996 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f01995 = *$tmp1996;
                org$pandalanguage$pandac$ASTNode** $tmp1998 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 16));
                _f11997 = *$tmp1998;
                panda$collections$ImmutableArray** $tmp2000 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11876->$data + 24));
                _f21999 = *$tmp2000;
                org$pandalanguage$pandac$ASTNode** $tmp2002 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 32));
                _f32001 = *$tmp2002;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11997));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21999));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32001));
            }
            }
            else {
            panda$core$Bit $tmp2003 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp2003.value) {
            {
                panda$collections$ImmutableArray** $tmp2005 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11876->$data + 0));
                _f02004 = *$tmp2005;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02004));
            }
            }
            else {
            panda$core$Bit $tmp2006 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp2006.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2008 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f02007 = *$tmp2008;
                panda$core$String** $tmp2010 = ((panda$core$String**) ((char*) $match$5_11876->$data + 16));
                _f12009 = *$tmp2010;
                org$pandalanguage$pandac$ASTNode** $tmp2012 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 24));
                _f22011 = *$tmp2012;
                org$pandalanguage$pandac$ASTNode** $tmp2014 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 32));
                _f32013 = *$tmp2014;
                panda$collections$ImmutableArray** $tmp2016 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11876->$data + 40));
                _f42015 = *$tmp2016;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12009));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22011));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32013));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42015));
            }
            }
            else {
            panda$core$Bit $tmp2017 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp2017.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2019 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f02018 = *$tmp2019;
                panda$core$String** $tmp2021 = ((panda$core$String**) ((char*) $match$5_11876->$data + 16));
                _f12020 = *$tmp2021;
                panda$collections$ImmutableArray** $tmp2023 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11876->$data + 24));
                _f22022 = *$tmp2023;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12020));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22022));
            }
            }
            else {
            panda$core$Bit $tmp2024 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 20 }));
            if ($tmp2024.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2026 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f02025 = *$tmp2026;
                panda$core$String** $tmp2028 = ((panda$core$String**) ((char*) $match$5_11876->$data + 16));
                _f12027 = *$tmp2028;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12027));
            }
            }
            else {
            panda$core$Bit $tmp2029 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 21 }));
            if ($tmp2029.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2031 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f02030 = *$tmp2031;
                org$pandalanguage$pandac$ASTNode** $tmp2033 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 16));
                _f12032 = *$tmp2033;
                panda$collections$ImmutableArray** $tmp2035 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11876->$data + 24));
                _f22034 = *$tmp2035;
                org$pandalanguage$pandac$ASTNode** $tmp2037 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 32));
                _f32036 = *$tmp2037;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12032));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22034));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32036));
            }
            }
            else {
            panda$core$Bit $tmp2038 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 22 }));
            if ($tmp2038.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2040 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f02039 = *$tmp2040;
                panda$core$UInt64* $tmp2042 = ((panda$core$UInt64*) ((char*) $match$5_11876->$data + 16));
                _f12041 = *$tmp2042;
            }
            }
            else {
            panda$core$Bit $tmp2043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 23 }));
            if ($tmp2043.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2045 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11876->$data + 0));
                _f02044 = *$tmp2045;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02044));
            }
            }
            else {
            panda$core$Bit $tmp2046 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 24 }));
            if ($tmp2046.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2048 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f02047 = *$tmp2048;
                panda$core$String** $tmp2050 = ((panda$core$String**) ((char*) $match$5_11876->$data + 16));
                _f12049 = *$tmp2050;
                panda$collections$ImmutableArray** $tmp2052 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11876->$data + 24));
                _f22051 = *$tmp2052;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12049));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22051));
            }
            }
            else {
            panda$core$Bit $tmp2053 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 25 }));
            if ($tmp2053.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2055 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f02054 = *$tmp2055;
                org$pandalanguage$pandac$ASTNode** $tmp2057 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 16));
                _f12056 = *$tmp2057;
                panda$collections$ImmutableArray** $tmp2059 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11876->$data + 24));
                _f22058 = *$tmp2059;
                panda$collections$ImmutableArray** $tmp2061 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11876->$data + 32));
                _f32060 = *$tmp2061;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12056));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22058));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32060));
            }
            }
            else {
            panda$core$Bit $tmp2062 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 26 }));
            if ($tmp2062.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2064 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f02063 = *$tmp2064;
                org$pandalanguage$pandac$ASTNode** $tmp2066 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 16));
                _f12065 = *$tmp2066;
                panda$collections$ImmutableArray** $tmp2068 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11876->$data + 24));
                _f22067 = *$tmp2068;
                org$pandalanguage$pandac$MethodDecl$Kind* $tmp2070 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$5_11876->$data + 32));
                _f32069 = *$tmp2070;
                panda$core$String** $tmp2072 = ((panda$core$String**) ((char*) $match$5_11876->$data + 40));
                _f42071 = *$tmp2072;
                panda$collections$ImmutableArray** $tmp2074 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11876->$data + 48));
                _f52073 = *$tmp2074;
                panda$collections$ImmutableArray** $tmp2076 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11876->$data + 56));
                _f62075 = *$tmp2076;
                org$pandalanguage$pandac$ASTNode** $tmp2078 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 64));
                _f72077 = *$tmp2078;
                panda$collections$ImmutableArray** $tmp2080 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11876->$data + 72));
                _f82079 = *$tmp2080;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12065));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22067));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42071));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f52073));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f62075));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f72077));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f82079));
            }
            }
            else {
            panda$core$Bit $tmp2081 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 27 }));
            if ($tmp2081.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2083 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f02082 = *$tmp2083;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2085 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11876->$data + 16));
                _f12084 = *$tmp2085;
                panda$collections$ImmutableArray** $tmp2087 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11876->$data + 24));
                _f22086 = *$tmp2087;
                org$pandalanguage$pandac$ASTNode** $tmp2089 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 32));
                _f32088 = *$tmp2089;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22086));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32088));
            }
            }
            else {
            panda$core$Bit $tmp2090 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 28 }));
            if ($tmp2090.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2092 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f02091 = *$tmp2092;
            }
            }
            else {
            panda$core$Bit $tmp2093 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 29 }));
            if ($tmp2093.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2095 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f02094 = *$tmp2095;
                org$pandalanguage$pandac$ASTNode** $tmp2097 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 16));
                _f12096 = *$tmp2097;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12096));
            }
            }
            else {
            panda$core$Bit $tmp2098 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 30 }));
            if ($tmp2098.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2100 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f02099 = *$tmp2100;
                panda$core$String** $tmp2102 = ((panda$core$String**) ((char*) $match$5_11876->$data + 16));
                _f12101 = *$tmp2102;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12101));
            }
            }
            else {
            panda$core$Bit $tmp2103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 31 }));
            if ($tmp2103.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2105 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f02104 = *$tmp2105;
                panda$core$String** $tmp2107 = ((panda$core$String**) ((char*) $match$5_11876->$data + 16));
                _f12106 = *$tmp2107;
                org$pandalanguage$pandac$ASTNode** $tmp2109 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 24));
                _f22108 = *$tmp2109;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12106));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22108));
            }
            }
            else {
            panda$core$Bit $tmp2110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 32 }));
            if ($tmp2110.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2112 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f02111 = *$tmp2112;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2114 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11876->$data + 16));
                _f12113 = *$tmp2114;
                org$pandalanguage$pandac$ASTNode** $tmp2116 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 24));
                _f22115 = *$tmp2116;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22115));
            }
            }
            else {
            panda$core$Bit $tmp2117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp2117.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2119 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f02118 = *$tmp2119;
                org$pandalanguage$pandac$ASTNode** $tmp2121 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 16));
                _f12120 = *$tmp2121;
                org$pandalanguage$pandac$ASTNode** $tmp2123 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 24));
                _f22122 = *$tmp2123;
                panda$core$Bit* $tmp2125 = ((panda$core$Bit*) ((char*) $match$5_11876->$data + 32));
                _f32124 = *$tmp2125;
                org$pandalanguage$pandac$ASTNode** $tmp2127 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 33));
                _f42126 = *$tmp2127;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12120));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22122));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42126));
            }
            }
            else {
            panda$core$Bit $tmp2128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp2128.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2130 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f02129 = *$tmp2130;
                panda$core$Real64* $tmp2132 = ((panda$core$Real64*) ((char*) $match$5_11876->$data + 16));
                _f12131 = *$tmp2132;
            }
            }
            else {
            panda$core$Bit $tmp2133 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 35 }));
            if ($tmp2133.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2135 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f02134 = *$tmp2135;
                panda$core$String** $tmp2137 = ((panda$core$String**) ((char*) $match$5_11876->$data + 16));
                _f12136 = *$tmp2137;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12136));
            }
            }
            else {
            panda$core$Bit $tmp2138 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 36 }));
            if ($tmp2138.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2140 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f02139 = *$tmp2140;
                org$pandalanguage$pandac$ASTNode** $tmp2142 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 16));
                _f12141 = *$tmp2142;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12141));
            }
            }
            else {
            panda$core$Bit $tmp2143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 37 }));
            if ($tmp2143.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2145 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f02144 = *$tmp2145;
            }
            }
            else {
            panda$core$Bit $tmp2146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 38 }));
            if ($tmp2146.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2148 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f02147 = *$tmp2148;
                panda$core$String** $tmp2150 = ((panda$core$String**) ((char*) $match$5_11876->$data + 16));
                _f12149 = *$tmp2150;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12149));
            }
            }
            else {
            panda$core$Bit $tmp2151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp2151.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2153 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f02152 = *$tmp2153;
            }
            }
            else {
            panda$core$Bit $tmp2154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 40 }));
            if ($tmp2154.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2156 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f02155 = *$tmp2156;
                panda$collections$ImmutableArray** $tmp2158 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11876->$data + 16));
                _f12157 = *$tmp2158;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12157));
            }
            }
            else {
            panda$core$Bit $tmp2159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 41 }));
            if ($tmp2159.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2161 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f02160 = *$tmp2161;
                panda$collections$ImmutableArray** $tmp2163 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11876->$data + 16));
                _f12162 = *$tmp2163;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12162));
            }
            }
            else {
            panda$core$Bit $tmp2164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 42 }));
            if ($tmp2164.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2166 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f02165 = *$tmp2166;
                panda$core$String** $tmp2168 = ((panda$core$String**) ((char*) $match$5_11876->$data + 16));
                _f12167 = *$tmp2168;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12167));
            }
            }
            else {
            panda$core$Bit $tmp2169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 43 }));
            if ($tmp2169.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2171 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f02170 = *$tmp2171;
                panda$collections$ImmutableArray** $tmp2173 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11876->$data + 16));
                _f12172 = *$tmp2173;
                org$pandalanguage$pandac$ASTNode** $tmp2175 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 24));
                _f22174 = *$tmp2175;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12172));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22174));
            }
            }
            else {
            panda$core$Bit $tmp2176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 44 }));
            if ($tmp2176.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2178 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f02177 = *$tmp2178;
                panda$core$String** $tmp2180 = ((panda$core$String**) ((char*) $match$5_11876->$data + 16));
                _f12179 = *$tmp2180;
                org$pandalanguage$pandac$ASTNode** $tmp2182 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 24));
                _f22181 = *$tmp2182;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12179));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22181));
            }
            }
            else {
            panda$core$Bit $tmp2183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 45 }));
            if ($tmp2183.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2185 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f02184 = *$tmp2185;
                panda$collections$ImmutableArray** $tmp2187 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11876->$data + 16));
                _f12186 = *$tmp2187;
                org$pandalanguage$pandac$ASTNode** $tmp2189 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 24));
                _f22188 = *$tmp2189;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12186));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22188));
            }
            }
            else {
            panda$core$Bit $tmp2190 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 46 }));
            if ($tmp2190.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2192 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f02191 = *$tmp2192;
                panda$core$String** $tmp2194 = ((panda$core$String**) ((char*) $match$5_11876->$data + 16));
                _f12193 = *$tmp2194;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12193));
            }
            }
            else {
            panda$core$Bit $tmp2195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 47 }));
            if ($tmp2195.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2197 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f02196 = *$tmp2197;
                org$pandalanguage$pandac$Variable$Kind* $tmp2199 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_11876->$data + 16));
                _f12198 = *$tmp2199;
                panda$collections$ImmutableArray** $tmp2201 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11876->$data + 24));
                _f22200 = *$tmp2201;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22200));
            }
            }
            else {
            panda$core$Bit $tmp2202 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 48 }));
            if ($tmp2202.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2204 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f02203 = *$tmp2204;
                panda$collections$ImmutableArray** $tmp2206 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11876->$data + 16));
                _f12205 = *$tmp2206;
                panda$collections$ImmutableArray** $tmp2208 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11876->$data + 24));
                _f22207 = *$tmp2208;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12205));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22207));
            }
            }
            else {
            panda$core$Bit $tmp2209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11876->$rawValue, ((panda$core$Int64) { 49 }));
            if ($tmp2209.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2211 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11876->$data + 0));
                _f02210 = *$tmp2211;
                panda$core$String** $tmp2213 = ((panda$core$String**) ((char*) $match$5_11876->$data + 16));
                _f12212 = *$tmp2213;
                org$pandalanguage$pandac$ASTNode** $tmp2215 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11876->$data + 24));
                _f22214 = *$tmp2215;
                panda$collections$ImmutableArray** $tmp2217 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11876->$data + 32));
                _f32216 = *$tmp2217;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12212));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22214));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32216));
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
        }
        $tmp1875 = -1;
        goto $l1873;
        $l1873:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1877));
        switch ($tmp1875) {
            case -1: goto $l2218;
        }
        $l2218:;
    }
    $tmp1872 = -1;
    goto $l1870;
    $l1870:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp1872) {
        case -1: goto $l2219;
    }
    $l2219:;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$core$String* $tmp2221;
    panda$core$String* $tmp2224;
    org$pandalanguage$pandac$ASTNode* $tmp2225;
    org$pandalanguage$pandac$ASTNode* $tmp2228;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2220 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2220 = p_f0;
    {
        panda$core$String** $tmp2222 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2221 = *$tmp2222;
        panda$core$String** $tmp2223 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2224 = p_f1;
        *$tmp2223 = $tmp2224;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2224));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2221));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2226 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2225 = *$tmp2226;
        org$pandalanguage$pandac$ASTNode** $tmp2227 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2228 = p_f2;
        *$tmp2227 = $tmp2228;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2228));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2225));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2230;
    org$pandalanguage$pandac$ASTNode* $tmp2233;
    org$pandalanguage$pandac$ASTNode* $tmp2234;
    org$pandalanguage$pandac$ASTNode* $tmp2237;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2229 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2229 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2231 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2230 = *$tmp2231;
        org$pandalanguage$pandac$ASTNode** $tmp2232 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2233 = p_f1;
        *$tmp2232 = $tmp2233;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2233));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2230));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2235 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2234 = *$tmp2235;
        org$pandalanguage$pandac$ASTNode** $tmp2236 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2237 = p_f2;
        *$tmp2236 = $tmp2237;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2237));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2234));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    org$pandalanguage$pandac$ASTNode* $tmp2239;
    org$pandalanguage$pandac$ASTNode* $tmp2242;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2238 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2238 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2240 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2239 = *$tmp2240;
        org$pandalanguage$pandac$ASTNode** $tmp2241 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2242 = p_f1;
        *$tmp2241 = $tmp2242;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2242));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2239));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2243 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2243 = p_f0;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$parser$Token$Kind p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2245;
    org$pandalanguage$pandac$ASTNode* $tmp2248;
    org$pandalanguage$pandac$ASTNode* $tmp2250;
    org$pandalanguage$pandac$ASTNode* $tmp2253;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2244 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2244 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2246 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2245 = *$tmp2246;
        org$pandalanguage$pandac$ASTNode** $tmp2247 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2248 = p_f1;
        *$tmp2247 = $tmp2248;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2248));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2245));
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2249 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 24));
    *$tmp2249 = p_f2;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2251 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2250 = *$tmp2251;
        org$pandalanguage$pandac$ASTNode** $tmp2252 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2253 = p_f3;
        *$tmp2252 = $tmp2253;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2253));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2250));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Bit p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2254 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2254 = p_f0;
    panda$core$Bit* $tmp2255 = ((panda$core$Bit*) ((char*) self->$data + 16));
    *$tmp2255 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    panda$collections$ImmutableArray* $tmp2257;
    panda$collections$ImmutableArray* $tmp2260;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2256 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2256 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2258 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2257 = *$tmp2258;
        panda$collections$ImmutableArray** $tmp2259 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2260 = p_f1;
        *$tmp2259 = $tmp2260;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2260));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2257));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp2262;
    panda$core$String* $tmp2265;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2261 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2261 = p_f0;
    {
        panda$core$String** $tmp2263 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2262 = *$tmp2263;
        panda$core$String** $tmp2264 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2265 = p_f1;
        *$tmp2264 = $tmp2265;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2265));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2262));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2267;
    org$pandalanguage$pandac$ASTNode* $tmp2270;
    panda$collections$ImmutableArray* $tmp2271;
    panda$collections$ImmutableArray* $tmp2274;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2266 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2266 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2268 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2267 = *$tmp2268;
        org$pandalanguage$pandac$ASTNode** $tmp2269 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2270 = p_f1;
        *$tmp2269 = $tmp2270;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2270));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2267));
    }
    {
        panda$collections$ImmutableArray** $tmp2272 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2271 = *$tmp2272;
        panda$collections$ImmutableArray** $tmp2273 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2274 = p_f2;
        *$tmp2273 = $tmp2274;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2274));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2271));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2276;
    org$pandalanguage$pandac$ASTNode* $tmp2279;
    panda$core$String* $tmp2280;
    panda$core$String* $tmp2283;
    panda$collections$ImmutableArray* $tmp2284;
    panda$collections$ImmutableArray* $tmp2287;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2275 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2275 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2277 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2276 = *$tmp2277;
        org$pandalanguage$pandac$ASTNode** $tmp2278 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2279 = p_f1;
        *$tmp2278 = $tmp2279;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2279));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2276));
    }
    {
        panda$core$String** $tmp2281 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2280 = *$tmp2281;
        panda$core$String** $tmp2282 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2283 = p_f2;
        *$tmp2282 = $tmp2283;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2283));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2280));
    }
    {
        panda$collections$ImmutableArray** $tmp2285 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2284 = *$tmp2285;
        panda$collections$ImmutableArray** $tmp2286 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2287 = p_f3;
        *$tmp2286 = $tmp2287;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2287));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2284));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2289;
    org$pandalanguage$pandac$ASTNode* $tmp2292;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2293;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2296;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2288 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2288 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2290 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2289 = *$tmp2290;
        org$pandalanguage$pandac$ASTNode** $tmp2291 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2292 = p_f1;
        *$tmp2291 = $tmp2292;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2292));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2289));
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp2294 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp2293 = *$tmp2294;
        org$pandalanguage$pandac$ChoiceEntry** $tmp2295 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp2296 = p_f2;
        *$tmp2295 = $tmp2296;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2296));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2293));
    }
    panda$core$Int64* $tmp2297 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp2297 = p_f3;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ClassDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, panda$collections$ImmutableArray* p_f6, panda$collections$ImmutableArray* p_f7) {
    org$pandalanguage$pandac$ASTNode* $tmp2299;
    org$pandalanguage$pandac$ASTNode* $tmp2302;
    panda$collections$ImmutableArray* $tmp2303;
    panda$collections$ImmutableArray* $tmp2306;
    panda$core$String* $tmp2308;
    panda$core$String* $tmp2311;
    panda$collections$ImmutableArray* $tmp2312;
    panda$collections$ImmutableArray* $tmp2315;
    panda$collections$ImmutableArray* $tmp2316;
    panda$collections$ImmutableArray* $tmp2319;
    panda$collections$ImmutableArray* $tmp2320;
    panda$collections$ImmutableArray* $tmp2323;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2298 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2298 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2300 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2299 = *$tmp2300;
        org$pandalanguage$pandac$ASTNode** $tmp2301 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2302 = p_f1;
        *$tmp2301 = $tmp2302;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2302));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2299));
    }
    {
        panda$collections$ImmutableArray** $tmp2304 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2303 = *$tmp2304;
        panda$collections$ImmutableArray** $tmp2305 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2306 = p_f2;
        *$tmp2305 = $tmp2306;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2306));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2303));
    }
    org$pandalanguage$pandac$ClassDecl$Kind* $tmp2307 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) self->$data + 32));
    *$tmp2307 = p_f3;
    {
        panda$core$String** $tmp2309 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2308 = *$tmp2309;
        panda$core$String** $tmp2310 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2311 = p_f4;
        *$tmp2310 = $tmp2311;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2311));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2308));
    }
    {
        panda$collections$ImmutableArray** $tmp2313 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2312 = *$tmp2313;
        panda$collections$ImmutableArray** $tmp2314 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2315 = p_f5;
        *$tmp2314 = $tmp2315;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2315));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2312));
    }
    {
        panda$collections$ImmutableArray** $tmp2317 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2316 = *$tmp2317;
        panda$collections$ImmutableArray** $tmp2318 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2319 = p_f6;
        *$tmp2318 = $tmp2319;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2319));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2316));
    }
    {
        panda$collections$ImmutableArray** $tmp2321 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2320 = *$tmp2321;
        panda$collections$ImmutableArray** $tmp2322 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2323 = p_f7;
        *$tmp2322 = $tmp2323;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2323));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2320));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    panda$core$String* $tmp2325;
    panda$core$String* $tmp2328;
    panda$collections$ImmutableArray* $tmp2329;
    panda$collections$ImmutableArray* $tmp2332;
    org$pandalanguage$pandac$ASTNode* $tmp2333;
    org$pandalanguage$pandac$ASTNode* $tmp2336;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2324 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2324 = p_f0;
    {
        panda$core$String** $tmp2326 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2325 = *$tmp2326;
        panda$core$String** $tmp2327 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2328 = p_f1;
        *$tmp2327 = $tmp2328;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2328));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2325));
    }
    {
        panda$collections$ImmutableArray** $tmp2330 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2329 = *$tmp2330;
        panda$collections$ImmutableArray** $tmp2331 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2332 = p_f2;
        *$tmp2331 = $tmp2332;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2332));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2329));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2334 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2333 = *$tmp2334;
        org$pandalanguage$pandac$ASTNode** $tmp2335 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2336 = p_f3;
        *$tmp2335 = $tmp2336;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2336));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2333));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2338;
    org$pandalanguage$pandac$ASTNode* $tmp2341;
    panda$core$String* $tmp2342;
    panda$core$String* $tmp2345;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2337 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2337 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2339 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2338 = *$tmp2339;
        org$pandalanguage$pandac$ASTNode** $tmp2340 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2341 = p_f1;
        *$tmp2340 = $tmp2341;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2341));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2338));
    }
    {
        panda$core$String** $tmp2343 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2342 = *$tmp2343;
        panda$core$String** $tmp2344 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2345 = p_f2;
        *$tmp2344 = $tmp2345;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2345));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2342));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2347;
    org$pandalanguage$pandac$ASTNode* $tmp2350;
    panda$collections$ImmutableArray* $tmp2351;
    panda$collections$ImmutableArray* $tmp2354;
    org$pandalanguage$pandac$ASTNode* $tmp2355;
    org$pandalanguage$pandac$ASTNode* $tmp2358;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2346 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2346 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2348 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2347 = *$tmp2348;
        org$pandalanguage$pandac$ASTNode** $tmp2349 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2350 = p_f1;
        *$tmp2349 = $tmp2350;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2350));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2347));
    }
    {
        panda$collections$ImmutableArray** $tmp2352 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2351 = *$tmp2352;
        panda$collections$ImmutableArray** $tmp2353 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2354 = p_f2;
        *$tmp2353 = $tmp2354;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2354));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2351));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2356 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2355 = *$tmp2356;
        org$pandalanguage$pandac$ASTNode** $tmp2357 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2358 = p_f3;
        *$tmp2357 = $tmp2358;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2358));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2355));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, panda$collections$ImmutableArray* p_f0) {
    panda$collections$ImmutableArray* $tmp2359;
    panda$collections$ImmutableArray* $tmp2362;
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableArray** $tmp2360 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp2359 = *$tmp2360;
        panda$collections$ImmutableArray** $tmp2361 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp2362 = p_f0;
        *$tmp2361 = $tmp2362;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2362));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2359));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, org$pandalanguage$pandac$ASTNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    panda$core$String* $tmp2364;
    panda$core$String* $tmp2367;
    org$pandalanguage$pandac$ASTNode* $tmp2368;
    org$pandalanguage$pandac$ASTNode* $tmp2371;
    org$pandalanguage$pandac$ASTNode* $tmp2372;
    org$pandalanguage$pandac$ASTNode* $tmp2375;
    panda$collections$ImmutableArray* $tmp2376;
    panda$collections$ImmutableArray* $tmp2379;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2363 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2363 = p_f0;
    {
        panda$core$String** $tmp2365 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2364 = *$tmp2365;
        panda$core$String** $tmp2366 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2367 = p_f1;
        *$tmp2366 = $tmp2367;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2367));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2364));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2369 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2368 = *$tmp2369;
        org$pandalanguage$pandac$ASTNode** $tmp2370 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2371 = p_f2;
        *$tmp2370 = $tmp2371;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2371));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2368));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2373 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2372 = *$tmp2373;
        org$pandalanguage$pandac$ASTNode** $tmp2374 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2375 = p_f3;
        *$tmp2374 = $tmp2375;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2375));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2372));
    }
    {
        panda$collections$ImmutableArray** $tmp2377 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp2376 = *$tmp2377;
        panda$collections$ImmutableArray** $tmp2378 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp2379 = p_f4;
        *$tmp2378 = $tmp2379;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2379));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2376));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp2381;
    panda$core$String* $tmp2384;
    panda$collections$ImmutableArray* $tmp2385;
    panda$collections$ImmutableArray* $tmp2388;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2380 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2380 = p_f0;
    {
        panda$core$String** $tmp2382 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2381 = *$tmp2382;
        panda$core$String** $tmp2383 = ((panda$core$String**) ((char*) self->$data + 16));
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
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp2390;
    panda$core$String* $tmp2393;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2389 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2389 = p_f0;
    {
        panda$core$String** $tmp2391 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2390 = *$tmp2391;
        panda$core$String** $tmp2392 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2393 = p_f1;
        *$tmp2392 = $tmp2393;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2393));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2390));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2395;
    org$pandalanguage$pandac$ASTNode* $tmp2398;
    panda$collections$ImmutableArray* $tmp2399;
    panda$collections$ImmutableArray* $tmp2402;
    org$pandalanguage$pandac$ASTNode* $tmp2403;
    org$pandalanguage$pandac$ASTNode* $tmp2406;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2394 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2394 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2396 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2395 = *$tmp2396;
        org$pandalanguage$pandac$ASTNode** $tmp2397 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2398 = p_f1;
        *$tmp2397 = $tmp2398;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2398));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2395));
    }
    {
        panda$collections$ImmutableArray** $tmp2400 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2399 = *$tmp2400;
        panda$collections$ImmutableArray** $tmp2401 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2402 = p_f2;
        *$tmp2401 = $tmp2402;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2402));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2399));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2404 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2403 = *$tmp2404;
        org$pandalanguage$pandac$ASTNode** $tmp2405 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2406 = p_f3;
        *$tmp2405 = $tmp2406;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2406));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2403));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$UInt64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2407 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2407 = p_f0;
    panda$core$UInt64* $tmp2408 = ((panda$core$UInt64*) ((char*) self->$data + 16));
    *$tmp2408 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0) {
    org$pandalanguage$pandac$IRNode* $tmp2409;
    org$pandalanguage$pandac$IRNode* $tmp2412;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp2410 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp2409 = *$tmp2410;
        org$pandalanguage$pandac$IRNode** $tmp2411 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp2412 = p_f0;
        *$tmp2411 = $tmp2412;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2412));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2409));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp2414;
    panda$core$String* $tmp2417;
    panda$collections$ImmutableArray* $tmp2418;
    panda$collections$ImmutableArray* $tmp2421;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2413 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2413 = p_f0;
    {
        panda$core$String** $tmp2415 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2414 = *$tmp2415;
        panda$core$String** $tmp2416 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2417 = p_f1;
        *$tmp2416 = $tmp2417;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2417));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2414));
    }
    {
        panda$collections$ImmutableArray** $tmp2419 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2418 = *$tmp2419;
        panda$collections$ImmutableArray** $tmp2420 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2421 = p_f2;
        *$tmp2420 = $tmp2421;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2421));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2418));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2423;
    org$pandalanguage$pandac$ASTNode* $tmp2426;
    panda$collections$ImmutableArray* $tmp2427;
    panda$collections$ImmutableArray* $tmp2430;
    panda$collections$ImmutableArray* $tmp2431;
    panda$collections$ImmutableArray* $tmp2434;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2422 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2422 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2424 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2423 = *$tmp2424;
        org$pandalanguage$pandac$ASTNode** $tmp2425 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2426 = p_f1;
        *$tmp2425 = $tmp2426;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2426));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2423));
    }
    {
        panda$collections$ImmutableArray** $tmp2428 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2427 = *$tmp2428;
        panda$collections$ImmutableArray** $tmp2429 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2430 = p_f2;
        *$tmp2429 = $tmp2430;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2430));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2427));
    }
    {
        panda$collections$ImmutableArray** $tmp2432 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2431 = *$tmp2432;
        panda$collections$ImmutableArray** $tmp2433 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2434 = p_f3;
        *$tmp2433 = $tmp2434;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2434));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2431));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$MethodDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, panda$collections$ImmutableArray* p_f6, org$pandalanguage$pandac$ASTNode* p_f7, panda$collections$ImmutableArray* p_f8) {
    org$pandalanguage$pandac$ASTNode* $tmp2436;
    org$pandalanguage$pandac$ASTNode* $tmp2439;
    panda$collections$ImmutableArray* $tmp2440;
    panda$collections$ImmutableArray* $tmp2443;
    panda$core$String* $tmp2445;
    panda$core$String* $tmp2448;
    panda$collections$ImmutableArray* $tmp2449;
    panda$collections$ImmutableArray* $tmp2452;
    panda$collections$ImmutableArray* $tmp2453;
    panda$collections$ImmutableArray* $tmp2456;
    org$pandalanguage$pandac$ASTNode* $tmp2457;
    org$pandalanguage$pandac$ASTNode* $tmp2460;
    panda$collections$ImmutableArray* $tmp2461;
    panda$collections$ImmutableArray* $tmp2464;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2435 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2435 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2437 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2436 = *$tmp2437;
        org$pandalanguage$pandac$ASTNode** $tmp2438 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2439 = p_f1;
        *$tmp2438 = $tmp2439;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2439));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2436));
    }
    {
        panda$collections$ImmutableArray** $tmp2441 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2440 = *$tmp2441;
        panda$collections$ImmutableArray** $tmp2442 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2443 = p_f2;
        *$tmp2442 = $tmp2443;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2443));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2440));
    }
    org$pandalanguage$pandac$MethodDecl$Kind* $tmp2444 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) self->$data + 32));
    *$tmp2444 = p_f3;
    {
        panda$core$String** $tmp2446 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2445 = *$tmp2446;
        panda$core$String** $tmp2447 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2448 = p_f4;
        *$tmp2447 = $tmp2448;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2448));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2445));
    }
    {
        panda$collections$ImmutableArray** $tmp2450 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2449 = *$tmp2450;
        panda$collections$ImmutableArray** $tmp2451 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2452 = p_f5;
        *$tmp2451 = $tmp2452;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2452));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2449));
    }
    {
        panda$collections$ImmutableArray** $tmp2454 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2453 = *$tmp2454;
        panda$collections$ImmutableArray** $tmp2455 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2456 = p_f6;
        *$tmp2455 = $tmp2456;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2456));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2453));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2458 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 64));
        $tmp2457 = *$tmp2458;
        org$pandalanguage$pandac$ASTNode** $tmp2459 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 64));
        $tmp2460 = p_f7;
        *$tmp2459 = $tmp2460;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2460));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2457));
    }
    {
        panda$collections$ImmutableArray** $tmp2462 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 72));
        $tmp2461 = *$tmp2462;
        panda$collections$ImmutableArray** $tmp2463 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 72));
        $tmp2464 = p_f8;
        *$tmp2463 = $tmp2464;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2464));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2461));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    panda$collections$ImmutableArray* $tmp2467;
    panda$collections$ImmutableArray* $tmp2470;
    org$pandalanguage$pandac$ASTNode* $tmp2471;
    org$pandalanguage$pandac$ASTNode* $tmp2474;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2465 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2465 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2466 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp2466 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp2468 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2467 = *$tmp2468;
        panda$collections$ImmutableArray** $tmp2469 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2470 = p_f2;
        *$tmp2469 = $tmp2470;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2470));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2467));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2472 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2471 = *$tmp2472;
        org$pandalanguage$pandac$ASTNode** $tmp2473 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2474 = p_f3;
        *$tmp2473 = $tmp2474;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2474));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2471));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$core$String* $tmp2476;
    panda$core$String* $tmp2479;
    org$pandalanguage$pandac$ASTNode* $tmp2480;
    org$pandalanguage$pandac$ASTNode* $tmp2483;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2475 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2475 = p_f0;
    {
        panda$core$String** $tmp2477 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2476 = *$tmp2477;
        panda$core$String** $tmp2478 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2479 = p_f1;
        *$tmp2478 = $tmp2479;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2479));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2476));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2481 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2480 = *$tmp2481;
        org$pandalanguage$pandac$ASTNode** $tmp2482 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2483 = p_f2;
        *$tmp2482 = $tmp2483;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2483));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2480));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2486;
    org$pandalanguage$pandac$ASTNode* $tmp2489;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2484 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2484 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2485 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp2485 = p_f1;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2487 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2486 = *$tmp2487;
        org$pandalanguage$pandac$ASTNode** $tmp2488 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2489 = p_f2;
        *$tmp2488 = $tmp2489;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2489));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2486));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$ASTNode* p_f4) {
    org$pandalanguage$pandac$ASTNode* $tmp2491;
    org$pandalanguage$pandac$ASTNode* $tmp2494;
    org$pandalanguage$pandac$ASTNode* $tmp2495;
    org$pandalanguage$pandac$ASTNode* $tmp2498;
    org$pandalanguage$pandac$ASTNode* $tmp2500;
    org$pandalanguage$pandac$ASTNode* $tmp2503;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2490 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2490 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2492 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2491 = *$tmp2492;
        org$pandalanguage$pandac$ASTNode** $tmp2493 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2494 = p_f1;
        *$tmp2493 = $tmp2494;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2494));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2491));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2496 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2495 = *$tmp2496;
        org$pandalanguage$pandac$ASTNode** $tmp2497 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2498 = p_f2;
        *$tmp2497 = $tmp2498;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2498));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2495));
    }
    panda$core$Bit* $tmp2499 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp2499 = p_f3;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2501 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        $tmp2500 = *$tmp2501;
        org$pandalanguage$pandac$ASTNode** $tmp2502 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        $tmp2503 = p_f4;
        *$tmp2502 = $tmp2503;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2503));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2500));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Real64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2504 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2504 = p_f0;
    panda$core$Real64* $tmp2505 = ((panda$core$Real64*) ((char*) self->$data + 16));
    *$tmp2505 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    org$pandalanguage$pandac$ASTNode* $tmp2507;
    org$pandalanguage$pandac$ASTNode* $tmp2510;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2506 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2506 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2508 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2507 = *$tmp2508;
        org$pandalanguage$pandac$ASTNode** $tmp2509 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2510 = p_f1;
        *$tmp2509 = $tmp2510;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2510));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2507));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$collections$ImmutableArray* $tmp2512;
    panda$collections$ImmutableArray* $tmp2515;
    org$pandalanguage$pandac$ASTNode* $tmp2516;
    org$pandalanguage$pandac$ASTNode* $tmp2519;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2511 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2511 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2513 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2512 = *$tmp2513;
        panda$collections$ImmutableArray** $tmp2514 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2515 = p_f1;
        *$tmp2514 = $tmp2515;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2515));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2512));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2517 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2516 = *$tmp2517;
        org$pandalanguage$pandac$ASTNode** $tmp2518 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2519 = p_f2;
        *$tmp2518 = $tmp2519;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2519));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2516));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp2522;
    panda$collections$ImmutableArray* $tmp2525;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2520 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2520 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp2521 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp2521 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp2523 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2522 = *$tmp2523;
        panda$collections$ImmutableArray** $tmp2524 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2525 = p_f2;
        *$tmp2524 = $tmp2525;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2525));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2522));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp2527;
    panda$collections$ImmutableArray* $tmp2530;
    panda$collections$ImmutableArray* $tmp2531;
    panda$collections$ImmutableArray* $tmp2534;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2526 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2526 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2528 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2527 = *$tmp2528;
        panda$collections$ImmutableArray** $tmp2529 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2530 = p_f1;
        *$tmp2529 = $tmp2530;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2530));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2527));
    }
    {
        panda$collections$ImmutableArray** $tmp2532 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2531 = *$tmp2532;
        panda$collections$ImmutableArray** $tmp2533 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2534 = p_f2;
        *$tmp2533 = $tmp2534;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2534));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2531));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    panda$core$String* $tmp2536;
    panda$core$String* $tmp2539;
    org$pandalanguage$pandac$ASTNode* $tmp2540;
    org$pandalanguage$pandac$ASTNode* $tmp2543;
    panda$collections$ImmutableArray* $tmp2544;
    panda$collections$ImmutableArray* $tmp2547;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2535 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2535 = p_f0;
    {
        panda$core$String** $tmp2537 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2536 = *$tmp2537;
        panda$core$String** $tmp2538 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2539 = p_f1;
        *$tmp2538 = $tmp2539;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2539));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2536));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2541 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2540 = *$tmp2541;
        org$pandalanguage$pandac$ASTNode** $tmp2542 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2543 = p_f2;
        *$tmp2542 = $tmp2543;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2543));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2540));
    }
    {
        panda$collections$ImmutableArray** $tmp2545 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2544 = *$tmp2545;
        panda$collections$ImmutableArray** $tmp2546 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2547 = p_f3;
        *$tmp2546 = $tmp2547;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2547));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2544));
    }
}





