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
#include "org/pandalanguage/pandac/ChoiceEntry.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "panda/core/Real64.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"


static panda$core$String $s1;
org$pandalanguage$pandac$ASTNode$class_type org$pandalanguage$pandac$ASTNode$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String, org$pandalanguage$pandac$ASTNode$cleanup, org$pandalanguage$pandac$ASTNode$position$R$org$pandalanguage$pandac$Position} };

typedef org$pandalanguage$pandac$Position (*$fn125)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn316)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn357)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn364)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn375)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn416)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn477)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn524)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn531)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn542)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn581)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn588)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn599)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn640)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn651)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn683)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn690)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn701)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn731)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn765)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn772)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn783)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn815)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn822)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn833)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn885)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn892)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn903)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn972)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn979)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn990)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1024)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1054)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1061)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1072)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1115)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1122)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1133)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1184)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1191)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1202)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1242)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1249)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1260)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1325)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn1507)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1514)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1525)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1548)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1555)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1566)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1613)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1620)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1631)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 32, -9211815390615587804, NULL };
static panda$core$String $s247 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s265 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s276 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s278 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s281 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x28", 5, 17286533032, NULL };
static panda$core$String $s293 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s299 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s348 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s398 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s403 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s418 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s423 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s442 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s454 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s482 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s545 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s551 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s553 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static panda$core$String $s558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s572 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s602 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s620 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s622 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s627 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s672 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s674 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s704 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s710 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 24242135792659305, NULL };
static panda$core$String $s712 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s733 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s736 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s755 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s786 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s836 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s864 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s870 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s872 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s875 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s906 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s929 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s934 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s960 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s962 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s993 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1000 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s1002 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1043 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1045 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s1075 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1103 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s1105 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1141 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1205 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1211 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s1213 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s1220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1225 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1229 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1233 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1263 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s1285 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s1306 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1327 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1356 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s1357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s1371 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s1394 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s1396 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s1406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s1417 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s1437 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1440 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1467 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s1469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s1471 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1473 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s1495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s1498 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1535 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1569 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1597 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1601 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s1603 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1634 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

org$pandalanguage$pandac$Position org$pandalanguage$pandac$ASTNode$position$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$78_95 = NULL;
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
    int $tmp4;
    {
        $tmp6 = self;
        $match$78_95 = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Bit $tmp7 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp7.value) {
        {
            org$pandalanguage$pandac$Position* $tmp9 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position8 = *$tmp9;
            $returnValue10 = position8;
            $tmp4 = 0;
            goto $l2;
            $l11:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp13 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp13.value) {
        {
            org$pandalanguage$pandac$Position* $tmp15 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position14 = *$tmp15;
            $returnValue10 = position14;
            $tmp4 = 1;
            goto $l2;
            $l16:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp18 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp18.value) {
        {
            org$pandalanguage$pandac$Position* $tmp20 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position19 = *$tmp20;
            $returnValue10 = position19;
            $tmp4 = 2;
            goto $l2;
            $l21:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp23 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp23.value) {
        {
            org$pandalanguage$pandac$Position* $tmp25 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position24 = *$tmp25;
            $returnValue10 = position24;
            $tmp4 = 3;
            goto $l2;
            $l26:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp28 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp28.value) {
        {
            org$pandalanguage$pandac$Position* $tmp30 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position29 = *$tmp30;
            $returnValue10 = position29;
            $tmp4 = 4;
            goto $l2;
            $l31:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp33 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp33.value) {
        {
            org$pandalanguage$pandac$Position* $tmp35 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position34 = *$tmp35;
            $returnValue10 = position34;
            $tmp4 = 5;
            goto $l2;
            $l36:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp38 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp38.value) {
        {
            org$pandalanguage$pandac$Position* $tmp40 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position39 = *$tmp40;
            $returnValue10 = position39;
            $tmp4 = 6;
            goto $l2;
            $l41:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp43 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp43.value) {
        {
            org$pandalanguage$pandac$Position* $tmp45 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position44 = *$tmp45;
            $returnValue10 = position44;
            $tmp4 = 7;
            goto $l2;
            $l46:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp48 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp48.value) {
        {
            org$pandalanguage$pandac$Position* $tmp50 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position49 = *$tmp50;
            $returnValue10 = position49;
            $tmp4 = 8;
            goto $l2;
            $l51:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp53 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp53.value) {
        {
            org$pandalanguage$pandac$Position* $tmp55 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position54 = *$tmp55;
            $returnValue10 = position54;
            $tmp4 = 9;
            goto $l2;
            $l56:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp58 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp58.value) {
        {
            org$pandalanguage$pandac$Position* $tmp60 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position59 = *$tmp60;
            $returnValue10 = position59;
            $tmp4 = 10;
            goto $l2;
            $l61:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp63 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp63.value) {
        {
            org$pandalanguage$pandac$Position* $tmp65 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position64 = *$tmp65;
            $returnValue10 = position64;
            $tmp4 = 11;
            goto $l2;
            $l66:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp68 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp68.value) {
        {
            org$pandalanguage$pandac$Position* $tmp70 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position69 = *$tmp70;
            $returnValue10 = position69;
            $tmp4 = 12;
            goto $l2;
            $l71:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp73 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp73.value) {
        {
            org$pandalanguage$pandac$Position* $tmp75 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position74 = *$tmp75;
            $returnValue10 = position74;
            $tmp4 = 13;
            goto $l2;
            $l76:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp78 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp78.value) {
        {
            org$pandalanguage$pandac$Position* $tmp80 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position79 = *$tmp80;
            $returnValue10 = position79;
            $tmp4 = 14;
            goto $l2;
            $l81:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp83 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp83.value) {
        {
            org$pandalanguage$pandac$Position* $tmp85 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position84 = *$tmp85;
            $returnValue10 = position84;
            $tmp4 = 15;
            goto $l2;
            $l86:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp88 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp88.value) {
        {
            org$pandalanguage$pandac$Position* $tmp90 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position89 = *$tmp90;
            $returnValue10 = position89;
            $tmp4 = 16;
            goto $l2;
            $l91:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp93 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 17 }));
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
        panda$core$Bit $tmp97 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp97.value) {
        {
            org$pandalanguage$pandac$Position* $tmp99 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position98 = *$tmp99;
            $returnValue10 = position98;
            $tmp4 = 18;
            goto $l2;
            $l100:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp102.value) {
        {
            org$pandalanguage$pandac$Position* $tmp104 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position103 = *$tmp104;
            $returnValue10 = position103;
            $tmp4 = 19;
            goto $l2;
            $l105:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp107.value) {
        {
            org$pandalanguage$pandac$Position* $tmp109 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position108 = *$tmp109;
            $returnValue10 = position108;
            $tmp4 = 20;
            goto $l2;
            $l110:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp112.value) {
        {
            org$pandalanguage$pandac$Position* $tmp114 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position113 = *$tmp114;
            $returnValue10 = position113;
            $tmp4 = 21;
            goto $l2;
            $l115:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp117.value) {
        {
            org$pandalanguage$pandac$Position* $tmp119 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position118 = *$tmp119;
            $returnValue10 = position118;
            $tmp4 = 22;
            goto $l2;
            $l120:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp122.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp124 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$78_95->$data + 0));
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
        panda$core$Bit $tmp129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp129.value) {
        {
            org$pandalanguage$pandac$Position* $tmp131 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position130 = *$tmp131;
            $returnValue10 = position130;
            $tmp4 = 24;
            goto $l2;
            $l132:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp134.value) {
        {
            org$pandalanguage$pandac$Position* $tmp136 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position135 = *$tmp136;
            $returnValue10 = position135;
            $tmp4 = 25;
            goto $l2;
            $l137:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp139.value) {
        {
            org$pandalanguage$pandac$Position* $tmp141 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position140 = *$tmp141;
            $returnValue10 = position140;
            $tmp4 = 26;
            goto $l2;
            $l142:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp144.value) {
        {
            org$pandalanguage$pandac$Position* $tmp146 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position145 = *$tmp146;
            $returnValue10 = position145;
            $tmp4 = 27;
            goto $l2;
            $l147:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp149.value) {
        {
            org$pandalanguage$pandac$Position* $tmp151 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position150 = *$tmp151;
            $returnValue10 = position150;
            $tmp4 = 28;
            goto $l2;
            $l152:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp154.value) {
        {
            org$pandalanguage$pandac$Position* $tmp156 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position155 = *$tmp156;
            $returnValue10 = position155;
            $tmp4 = 29;
            goto $l2;
            $l157:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp159.value) {
        {
            org$pandalanguage$pandac$Position* $tmp161 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position160 = *$tmp161;
            $returnValue10 = position160;
            $tmp4 = 30;
            goto $l2;
            $l162:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp164.value) {
        {
            org$pandalanguage$pandac$Position* $tmp166 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position165 = *$tmp166;
            $returnValue10 = position165;
            $tmp4 = 31;
            goto $l2;
            $l167:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp169.value) {
        {
            org$pandalanguage$pandac$Position* $tmp171 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position170 = *$tmp171;
            $returnValue10 = position170;
            $tmp4 = 32;
            goto $l2;
            $l172:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp174.value) {
        {
            org$pandalanguage$pandac$Position* $tmp176 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position175 = *$tmp176;
            $returnValue10 = position175;
            $tmp4 = 33;
            goto $l2;
            $l177:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp179.value) {
        {
            org$pandalanguage$pandac$Position* $tmp181 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position180 = *$tmp181;
            $returnValue10 = position180;
            $tmp4 = 34;
            goto $l2;
            $l182:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp184.value) {
        {
            org$pandalanguage$pandac$Position* $tmp186 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position185 = *$tmp186;
            $returnValue10 = position185;
            $tmp4 = 35;
            goto $l2;
            $l187:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp189.value) {
        {
            org$pandalanguage$pandac$Position* $tmp191 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position190 = *$tmp191;
            $returnValue10 = position190;
            $tmp4 = 36;
            goto $l2;
            $l192:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp194.value) {
        {
            org$pandalanguage$pandac$Position* $tmp196 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position195 = *$tmp196;
            $returnValue10 = position195;
            $tmp4 = 37;
            goto $l2;
            $l197:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp199.value) {
        {
            org$pandalanguage$pandac$Position* $tmp201 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position200 = *$tmp201;
            $returnValue10 = position200;
            $tmp4 = 38;
            goto $l2;
            $l202:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp204.value) {
        {
            org$pandalanguage$pandac$Position* $tmp206 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position205 = *$tmp206;
            $returnValue10 = position205;
            $tmp4 = 39;
            goto $l2;
            $l207:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp209.value) {
        {
            org$pandalanguage$pandac$Position* $tmp211 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position210 = *$tmp211;
            $returnValue10 = position210;
            $tmp4 = 40;
            goto $l2;
            $l212:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp214.value) {
        {
            org$pandalanguage$pandac$Position* $tmp216 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position215 = *$tmp216;
            $returnValue10 = position215;
            $tmp4 = 41;
            goto $l2;
            $l217:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp219.value) {
        {
            org$pandalanguage$pandac$Position* $tmp221 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position220 = *$tmp221;
            $returnValue10 = position220;
            $tmp4 = 42;
            goto $l2;
            $l222:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$78_95->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp224.value) {
        {
            org$pandalanguage$pandac$Position* $tmp226 = ((org$pandalanguage$pandac$Position*) ((char*) $match$78_95->$data + 0));
            position225 = *$tmp226;
            $returnValue10 = position225;
            $tmp4 = 43;
            goto $l2;
            $l227:;
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
    $tmp4 = -1;
    goto $l2;
    $l2:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
    switch ($tmp4) {
        case 39: goto $l207;
        case 37: goto $l197;
        case 25: goto $l137;
        case 8: goto $l51;
        case 31: goto $l167;
        case 43: goto $l227;
        case 40: goto $l212;
        case 15: goto $l86;
        case 12: goto $l71;
        case 4: goto $l31;
        case -1: goto $l229;
        case 16: goto $l91;
        case 20: goto $l110;
        case 7: goto $l46;
        case 11: goto $l66;
        case 41: goto $l217;
        case 33: goto $l177;
        case 22: goto $l120;
        case 17: goto $l95;
        case 1: goto $l16;
        case 34: goto $l182;
        case 29: goto $l157;
        case 26: goto $l142;
        case 21: goto $l115;
        case 38: goto $l202;
        case 0: goto $l11;
        case 2: goto $l21;
        case 30: goto $l162;
        case 35: goto $l187;
        case 14: goto $l81;
        case 36: goto $l192;
        case 6: goto $l41;
        case 42: goto $l222;
        case 9: goto $l56;
        case 13: goto $l76;
        case 5: goto $l36;
        case 18: goto $l100;
        case 28: goto $l152;
        case 19: goto $l105;
        case 10: goto $l61;
        case 3: goto $l26;
        case 24: goto $l132;
        case 32: goto $l172;
        case 23: goto $l127;
        case 27: goto $l147;
    }
    $l229:;
}
panda$core$String* org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$173_9233 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp234;
    panda$core$String* name236 = NULL;
    org$pandalanguage$pandac$ASTNode* expr238 = NULL;
    panda$core$String* $returnValue240;
    panda$core$String* $tmp241;
    panda$core$String* $tmp242;
    panda$core$String* $tmp243;
    panda$core$String* $tmp244;
    panda$core$String* $tmp245;
    panda$core$String* $tmp254;
    org$pandalanguage$pandac$ASTNode* test258 = NULL;
    org$pandalanguage$pandac$ASTNode* msg260 = NULL;
    panda$core$String* $tmp262;
    panda$core$String* $tmp263;
    panda$core$String* $tmp264;
    panda$core$String* $tmp271;
    panda$core$String* $tmp272;
    panda$core$String* $tmp273;
    panda$core$String* $tmp274;
    panda$core$String* $tmp275;
    org$pandalanguage$pandac$ASTNode* expr286 = NULL;
    panda$core$String* $tmp288;
    panda$core$String* $tmp289;
    panda$core$String* $tmp290;
    panda$core$String* $tmp298;
    org$pandalanguage$pandac$ASTNode* left303 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op305;
    org$pandalanguage$pandac$ASTNode* right307 = NULL;
    panda$core$String* $tmp309;
    panda$core$String* $tmp310;
    panda$core$String* $tmp311;
    panda$core$String* $tmp312;
    panda$core$String* $tmp313;
    panda$core$String* $tmp314;
    panda$core$String* $tmp315;
    panda$core$Object* $tmp320;
    panda$core$Bit value331;
    panda$core$String* $tmp333;
    panda$core$String* $tmp334;
    panda$collections$ImmutableArray* statements339 = NULL;
    panda$core$MutableString* result344 = NULL;
    panda$core$MutableString* $tmp345;
    panda$core$MutableString* $tmp346;
    panda$collections$Iterator* Iter$194$17352 = NULL;
    panda$collections$Iterator* $tmp353;
    panda$collections$Iterator* $tmp354;
    org$pandalanguage$pandac$ASTNode* s370 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp371;
    panda$core$Object* $tmp372;
    panda$core$String* $tmp377;
    panda$core$Char8 $tmp382;
    panda$core$String* $tmp383;
    panda$core$String* $tmp384;
    panda$core$String* label391 = NULL;
    panda$core$String* $tmp393;
    panda$core$String* $tmp394;
    panda$core$String* $tmp395;
    panda$core$String* $tmp402;
    org$pandalanguage$pandac$ASTNode* target407 = NULL;
    panda$collections$ImmutableArray* args409 = NULL;
    panda$core$String* $tmp411;
    panda$core$String* $tmp412;
    panda$core$String* $tmp413;
    panda$core$String* $tmp414;
    panda$core$String* $tmp415;
    panda$core$String* $tmp420;
    org$pandalanguage$pandac$ASTNode* dc428 = NULL;
    panda$core$String* name430 = NULL;
    panda$collections$ImmutableArray* fields432 = NULL;
    panda$core$MutableString* result437 = NULL;
    panda$core$MutableString* $tmp438;
    panda$core$MutableString* $tmp439;
    panda$core$String* $tmp441;
    panda$core$String* $tmp444;
    panda$core$String* $tmp445;
    panda$core$String* $tmp446;
    panda$core$String* $tmp447;
    panda$core$String* $tmp451;
    panda$core$String* $tmp456;
    panda$core$String* $tmp457;
    org$pandalanguage$pandac$ASTNode* base464 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce466 = NULL;
    panda$core$Int64 index468;
    panda$core$String* $tmp470;
    panda$core$String* $tmp471;
    panda$core$String* $tmp472;
    panda$core$String* $tmp473;
    panda$core$String* $tmp474;
    panda$core$String* $tmp475;
    panda$core$String* $tmp476;
    panda$core$Object* $tmp484;
    org$pandalanguage$pandac$ASTNode* dc492 = NULL;
    panda$collections$ImmutableArray* annotations494 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind496;
    panda$core$String* name498 = NULL;
    panda$collections$ImmutableArray* generics500 = NULL;
    panda$collections$ImmutableArray* supertypes502 = NULL;
    panda$collections$ImmutableArray* members504 = NULL;
    panda$core$MutableString* result509 = NULL;
    panda$core$MutableString* $tmp510;
    panda$core$MutableString* $tmp511;
    panda$core$String* $tmp513;
    panda$collections$Iterator* Iter$220$17519 = NULL;
    panda$collections$Iterator* $tmp520;
    panda$collections$Iterator* $tmp521;
    org$pandalanguage$pandac$ASTNode* a537 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp538;
    panda$core$Object* $tmp539;
    panda$core$String* $tmp544;
    org$pandalanguage$pandac$ClassDecl$Kind $match$223_17549;
    panda$core$String* $tmp556;
    panda$core$String* $tmp557;
    panda$core$String* $tmp559;
    panda$core$String* $tmp564;
    panda$core$String* $tmp565;
    panda$core$String* $tmp567;
    panda$collections$Iterator* Iter$236$17576 = NULL;
    panda$collections$Iterator* $tmp577;
    panda$collections$Iterator* $tmp578;
    org$pandalanguage$pandac$ASTNode* m594 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp595;
    panda$core$Object* $tmp596;
    panda$core$String* $tmp601;
    panda$core$Char8 $tmp606;
    panda$core$String* $tmp607;
    panda$core$String* $tmp608;
    panda$core$String* label615 = NULL;
    panda$core$String* $tmp617;
    panda$core$String* $tmp618;
    panda$core$String* $tmp619;
    panda$core$String* $tmp626;
    org$pandalanguage$pandac$ASTNode* target631 = NULL;
    org$pandalanguage$pandac$ASTNode* value633 = NULL;
    panda$core$String* $tmp635;
    panda$core$String* $tmp636;
    panda$core$String* $tmp637;
    panda$core$String* $tmp638;
    panda$core$String* $tmp639;
    panda$core$String* $tmp649;
    panda$core$String* $tmp650;
    panda$core$String* label656 = NULL;
    panda$collections$ImmutableArray* statements658 = NULL;
    org$pandalanguage$pandac$ASTNode* test660 = NULL;
    panda$core$MutableString* result665 = NULL;
    panda$core$MutableString* $tmp666;
    panda$core$MutableString* $tmp667;
    panda$core$String* $tmp669;
    panda$core$String* $tmp670;
    panda$collections$Iterator* Iter$257$17678 = NULL;
    panda$collections$Iterator* $tmp679;
    panda$collections$Iterator* $tmp680;
    org$pandalanguage$pandac$ASTNode* s696 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp697;
    panda$core$Object* $tmp698;
    panda$core$String* $tmp703;
    panda$core$String* $tmp708;
    panda$core$String* $tmp709;
    panda$core$String* $tmp714;
    panda$core$String* $tmp715;
    org$pandalanguage$pandac$ASTNode* base722 = NULL;
    panda$core$String* field724 = NULL;
    panda$core$String* $tmp726;
    panda$core$String* $tmp727;
    panda$core$String* $tmp728;
    panda$core$String* $tmp729;
    panda$core$String* $tmp730;
    org$pandalanguage$pandac$ASTNode* dc741 = NULL;
    panda$collections$ImmutableArray* annotations743 = NULL;
    org$pandalanguage$pandac$ASTNode* decl745 = NULL;
    panda$core$MutableString* result750 = NULL;
    panda$core$MutableString* $tmp751;
    panda$core$MutableString* $tmp752;
    panda$core$String* $tmp754;
    panda$collections$Iterator* Iter$269$17760 = NULL;
    panda$collections$Iterator* $tmp761;
    panda$collections$Iterator* $tmp762;
    org$pandalanguage$pandac$ASTNode* a778 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp779;
    panda$core$Object* $tmp780;
    panda$core$String* $tmp785;
    panda$core$String* $tmp790;
    panda$core$String* $tmp791;
    panda$collections$ImmutableArray* entries798 = NULL;
    panda$core$MutableString* result803 = NULL;
    panda$core$MutableString* $tmp804;
    panda$core$MutableString* $tmp805;
    panda$collections$Iterator* Iter$276$17810 = NULL;
    panda$collections$Iterator* $tmp811;
    panda$collections$Iterator* $tmp812;
    org$pandalanguage$pandac$ASTNode* e828 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp829;
    panda$core$Object* $tmp830;
    panda$core$String* $tmp835;
    panda$core$String* $tmp840;
    panda$core$String* $tmp841;
    panda$core$String* label848 = NULL;
    org$pandalanguage$pandac$ASTNode* target850 = NULL;
    org$pandalanguage$pandac$ASTNode* list852 = NULL;
    panda$collections$ImmutableArray* statements854 = NULL;
    panda$core$MutableString* result859 = NULL;
    panda$core$MutableString* $tmp860;
    panda$core$MutableString* $tmp861;
    panda$core$String* $tmp863;
    panda$core$String* $tmp866;
    panda$core$String* $tmp867;
    panda$core$String* $tmp868;
    panda$core$String* $tmp869;
    panda$collections$Iterator* Iter$286$17880 = NULL;
    panda$collections$Iterator* $tmp881;
    panda$collections$Iterator* $tmp882;
    org$pandalanguage$pandac$ASTNode* s898 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp899;
    panda$core$Object* $tmp900;
    panda$core$String* $tmp905;
    panda$core$Char8 $tmp910;
    panda$core$String* $tmp911;
    panda$core$String* $tmp912;
    panda$core$String* name919 = NULL;
    panda$collections$ImmutableArray* subtypes921 = NULL;
    panda$core$String* $tmp923;
    panda$core$String* $tmp924;
    panda$core$String* $tmp925;
    panda$core$String* $tmp926;
    panda$core$String* $tmp927;
    panda$core$String* $tmp931;
    panda$core$String* name939 = NULL;
    panda$core$String* $tmp941;
    org$pandalanguage$pandac$ASTNode* test945 = NULL;
    panda$collections$ImmutableArray* ifTrue947 = NULL;
    org$pandalanguage$pandac$ASTNode* ifFalse949 = NULL;
    panda$core$MutableString* result954 = NULL;
    panda$core$MutableString* $tmp955;
    panda$core$MutableString* $tmp956;
    panda$core$String* $tmp958;
    panda$core$String* $tmp959;
    panda$collections$Iterator* Iter$297$17967 = NULL;
    panda$collections$Iterator* $tmp968;
    panda$collections$Iterator* $tmp969;
    org$pandalanguage$pandac$ASTNode* s985 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp986;
    panda$core$Object* $tmp987;
    panda$core$String* $tmp992;
    panda$core$Char8 $tmp997;
    panda$core$String* $tmp998;
    panda$core$String* $tmp999;
    panda$core$String* $tmp1004;
    panda$core$String* $tmp1005;
    panda$core$UInt64 value1012;
    panda$core$String* $tmp1014;
    panda$core$String* $tmp1015;
    org$pandalanguage$pandac$IRNode* ir1020 = NULL;
    panda$core$String* $tmp1022;
    panda$core$String* $tmp1023;
    panda$core$String* label1029 = NULL;
    panda$collections$ImmutableArray* statements1031 = NULL;
    panda$core$MutableString* result1036 = NULL;
    panda$core$MutableString* $tmp1037;
    panda$core$MutableString* $tmp1038;
    panda$core$String* $tmp1040;
    panda$core$String* $tmp1041;
    panda$collections$Iterator* Iter$315$171049 = NULL;
    panda$collections$Iterator* $tmp1050;
    panda$collections$Iterator* $tmp1051;
    org$pandalanguage$pandac$ASTNode* s1067 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1068;
    panda$core$Object* $tmp1069;
    panda$core$String* $tmp1074;
    panda$core$Char8 $tmp1079;
    panda$core$String* $tmp1080;
    panda$core$String* $tmp1081;
    org$pandalanguage$pandac$ASTNode* value1088 = NULL;
    panda$collections$ImmutableArray* whens1090 = NULL;
    panda$collections$ImmutableArray* other1092 = NULL;
    panda$core$MutableString* result1097 = NULL;
    panda$core$MutableString* $tmp1098;
    panda$core$MutableString* $tmp1099;
    panda$core$String* $tmp1101;
    panda$core$String* $tmp1102;
    panda$collections$Iterator* Iter$322$171110 = NULL;
    panda$collections$Iterator* $tmp1111;
    panda$collections$Iterator* $tmp1112;
    org$pandalanguage$pandac$ASTNode* w1128 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1129;
    panda$core$Object* $tmp1130;
    panda$core$String* $tmp1135;
    panda$core$String* $tmp1140;
    panda$core$Char8 $tmp1143;
    panda$core$String* $tmp1144;
    panda$core$String* $tmp1145;
    org$pandalanguage$pandac$ASTNode* dc1152 = NULL;
    panda$collections$ImmutableArray* annotations1154 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind1156;
    panda$core$String* name1158 = NULL;
    panda$collections$ImmutableArray* parameters1160 = NULL;
    org$pandalanguage$pandac$ASTNode* returnType1162 = NULL;
    panda$collections$ImmutableArray* statements1164 = NULL;
    panda$core$MutableString* result1169 = NULL;
    panda$core$MutableString* $tmp1170;
    panda$core$MutableString* $tmp1171;
    panda$core$String* $tmp1173;
    panda$collections$Iterator* Iter$335$171179 = NULL;
    panda$collections$Iterator* $tmp1180;
    panda$collections$Iterator* $tmp1181;
    org$pandalanguage$pandac$ASTNode* a1197 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1198;
    panda$core$Object* $tmp1199;
    panda$core$String* $tmp1204;
    org$pandalanguage$pandac$MethodDecl$Kind $match$338_171209;
    panda$core$String* $tmp1215;
    panda$core$String* $tmp1216;
    panda$core$String* $tmp1217;
    panda$core$String* $tmp1218;
    panda$core$String* $tmp1222;
    panda$core$String* $tmp1227;
    panda$core$String* $tmp1228;
    panda$collections$Iterator* Iter$349$211237 = NULL;
    panda$collections$Iterator* $tmp1238;
    panda$collections$Iterator* $tmp1239;
    org$pandalanguage$pandac$ASTNode* s1255 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1256;
    panda$core$Object* $tmp1257;
    panda$core$String* $tmp1262;
    panda$core$Char8 $tmp1267;
    panda$core$String* $tmp1268;
    panda$core$String* $tmp1269;
    panda$core$String* $tmp1276;
    org$pandalanguage$pandac$ASTNode* base1281 = NULL;
    panda$core$String* $tmp1283;
    panda$core$String* $tmp1284;
    panda$core$String* name1290 = NULL;
    panda$core$String* $tmp1292;
    panda$core$String* name1296 = NULL;
    org$pandalanguage$pandac$ASTNode* type1298 = NULL;
    panda$core$String* $tmp1300;
    panda$core$String* $tmp1301;
    panda$core$String* $tmp1302;
    panda$core$String* $tmp1303;
    panda$core$String* $tmp1304;
    org$pandalanguage$pandac$parser$Token$Kind kind1314;
    org$pandalanguage$pandac$ASTNode* base1316 = NULL;
    panda$core$String* $tmp1318;
    panda$core$String* $tmp1319;
    panda$core$String* $tmp1320;
    panda$core$String* $tmp1321;
    panda$core$String* $tmp1322;
    panda$core$Object* $tmp1323;
    org$pandalanguage$pandac$ASTNode* start1335 = NULL;
    org$pandalanguage$pandac$ASTNode* end1337 = NULL;
    panda$core$Bit inclusive1339;
    org$pandalanguage$pandac$ASTNode* step1341 = NULL;
    panda$core$MutableString* result1346 = NULL;
    panda$core$MutableString* $tmp1347;
    panda$core$MutableString* $tmp1348;
    org$pandalanguage$pandac$ASTNode* $tmp1350;
    org$pandalanguage$pandac$ASTNode* $tmp1358;
    org$pandalanguage$pandac$ASTNode* $tmp1364;
    panda$core$String* $tmp1370;
    panda$core$String* $tmp1373;
    panda$core$String* $tmp1374;
    panda$core$Real64 value1381;
    panda$core$String* $tmp1383;
    panda$core$String* $tmp1384;
    org$pandalanguage$pandac$ASTNode* value1389 = NULL;
    panda$core$String* $tmp1391;
    panda$core$String* $tmp1392;
    panda$core$String* $tmp1393;
    panda$core$String* $tmp1400;
    panda$core$String* $tmp1405;
    panda$core$String* str1410 = NULL;
    panda$core$String* $tmp1412;
    panda$core$String* $tmp1416;
    panda$core$String* name1421 = NULL;
    panda$core$String* $tmp1423;
    panda$core$String* name1427 = NULL;
    org$pandalanguage$pandac$ASTNode* type1429 = NULL;
    panda$core$String* $tmp1431;
    panda$core$String* $tmp1432;
    panda$core$String* $tmp1433;
    panda$core$String* $tmp1434;
    panda$core$String* $tmp1435;
    panda$core$String* $tmp1444;
    panda$core$String* name1448 = NULL;
    panda$core$String* $tmp1450;
    org$pandalanguage$pandac$Variable$Kind kind1454;
    panda$collections$ImmutableArray* decls1456 = NULL;
    panda$core$MutableString* result1461 = NULL;
    panda$core$MutableString* $tmp1462;
    panda$core$MutableString* $tmp1463;
    org$pandalanguage$pandac$Variable$Kind $match$407_171465;
    panda$core$String* $tmp1474;
    panda$core$String* $tmp1476;
    panda$core$String* $tmp1477;
    panda$collections$ImmutableArray* tests1484 = NULL;
    panda$collections$ImmutableArray* statements1486 = NULL;
    panda$core$MutableString* result1491 = NULL;
    panda$core$MutableString* $tmp1492;
    panda$core$MutableString* $tmp1493;
    panda$core$String* separator1496 = NULL;
    panda$core$String* $tmp1497;
    panda$collections$Iterator* Iter$418$171502 = NULL;
    panda$collections$Iterator* $tmp1503;
    panda$collections$Iterator* $tmp1504;
    org$pandalanguage$pandac$ASTNode* t1520 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1521;
    panda$core$Object* $tmp1522;
    panda$core$String* $tmp1527;
    panda$core$String* $tmp1528;
    panda$core$String* $tmp1529;
    panda$core$String* $tmp1530;
    panda$core$Char8 $tmp1539;
    panda$collections$Iterator* Iter$422$171543 = NULL;
    panda$collections$Iterator* $tmp1544;
    panda$collections$Iterator* $tmp1545;
    org$pandalanguage$pandac$ASTNode* s1561 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1562;
    panda$core$Object* $tmp1563;
    panda$core$String* $tmp1568;
    panda$core$String* $tmp1573;
    panda$core$String* $tmp1574;
    panda$core$String* label1581 = NULL;
    org$pandalanguage$pandac$ASTNode* test1583 = NULL;
    panda$collections$ImmutableArray* statements1585 = NULL;
    panda$core$MutableString* result1590 = NULL;
    panda$core$MutableString* $tmp1591;
    panda$core$MutableString* $tmp1592;
    panda$core$String* $tmp1594;
    panda$core$String* $tmp1595;
    panda$core$String* $tmp1599;
    panda$core$String* $tmp1600;
    panda$collections$Iterator* Iter$432$171608 = NULL;
    panda$collections$Iterator* $tmp1609;
    panda$collections$Iterator* $tmp1610;
    org$pandalanguage$pandac$ASTNode* s1626 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1627;
    panda$core$Object* $tmp1628;
    panda$core$String* $tmp1633;
    panda$core$Char8 $tmp1638;
    panda$core$String* $tmp1639;
    panda$core$String* $tmp1640;
    int $tmp232;
    {
        $tmp234 = self;
        $match$173_9233 = $tmp234;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp234));
        panda$core$Bit $tmp235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp235.value) {
        {
            panda$core$String** $tmp237 = ((panda$core$String**) ((char*) $match$173_9233->$data + 16));
            name236 = *$tmp237;
            org$pandalanguage$pandac$ASTNode** $tmp239 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$173_9233->$data + 24));
            expr238 = *$tmp239;
            if (((panda$core$Bit) { expr238 != NULL }).value) {
            {
                panda$core$String* $tmp246 = panda$core$String$convert$R$panda$core$String(name236);
                $tmp245 = $tmp246;
                panda$core$String* $tmp248 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp245, &$s247);
                $tmp244 = $tmp248;
                panda$core$String* $tmp249 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp244, ((panda$core$Object*) expr238));
                $tmp243 = $tmp249;
                panda$core$String* $tmp251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp243, &$s250);
                $tmp242 = $tmp251;
                $tmp241 = $tmp242;
                $returnValue240 = $tmp241;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp241));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp242));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp243));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp244));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp245));
                $tmp232 = 0;
                goto $l230;
                $l252:;
                return $returnValue240;
            }
            }
            $tmp254 = name236;
            $returnValue240 = $tmp254;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp254));
            $tmp232 = 1;
            goto $l230;
            $l255:;
            return $returnValue240;
        }
        }
        else {
        panda$core$Bit $tmp257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp257.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp259 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$173_9233->$data + 16));
            test258 = *$tmp259;
            org$pandalanguage$pandac$ASTNode** $tmp261 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$173_9233->$data + 24));
            msg260 = *$tmp261;
            if (((panda$core$Bit) { msg260 == NULL }).value) {
            {
                panda$core$String* $tmp266 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s265, ((panda$core$Object*) test258));
                $tmp264 = $tmp266;
                panda$core$String* $tmp268 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp264, &$s267);
                $tmp263 = $tmp268;
                $tmp262 = $tmp263;
                $returnValue240 = $tmp262;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp262));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp263));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp264));
                $tmp232 = 2;
                goto $l230;
                $l269:;
                return $returnValue240;
            }
            }
            panda$core$String* $tmp277 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s276, ((panda$core$Object*) test258));
            $tmp275 = $tmp277;
            panda$core$String* $tmp279 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp275, &$s278);
            $tmp274 = $tmp279;
            panda$core$String* $tmp280 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp274, ((panda$core$Object*) msg260));
            $tmp273 = $tmp280;
            panda$core$String* $tmp282 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp273, &$s281);
            $tmp272 = $tmp282;
            $tmp271 = $tmp272;
            $returnValue240 = $tmp271;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp271));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp272));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp273));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp274));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp275));
            $tmp232 = 3;
            goto $l230;
            $l283:;
            return $returnValue240;
        }
        }
        else {
        panda$core$Bit $tmp285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp285.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp287 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$173_9233->$data + 16));
            expr286 = *$tmp287;
            panda$core$String* $tmp292 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s291, ((panda$core$Object*) expr286));
            $tmp290 = $tmp292;
            panda$core$String* $tmp294 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp290, &$s293);
            $tmp289 = $tmp294;
            $tmp288 = $tmp289;
            $returnValue240 = $tmp288;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp288));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp289));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp290));
            $tmp232 = 4;
            goto $l230;
            $l295:;
            return $returnValue240;
        }
        }
        else {
        panda$core$Bit $tmp297 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp297.value) {
        {
            $tmp298 = &$s299;
            $returnValue240 = $tmp298;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp298));
            $tmp232 = 5;
            goto $l230;
            $l300:;
            return $returnValue240;
        }
        }
        else {
        panda$core$Bit $tmp302 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp302.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp304 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$173_9233->$data + 16));
            left303 = *$tmp304;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp306 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$173_9233->$data + 24));
            op305 = *$tmp306;
            org$pandalanguage$pandac$ASTNode** $tmp308 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$173_9233->$data + 32));
            right307 = *$tmp308;
            panda$core$String* $tmp317 = (($fn316) left303->$class->vtable[0])(left303);
            $tmp315 = $tmp317;
            panda$core$String* $tmp319 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp315, &$s318);
            $tmp314 = $tmp319;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp321;
            $tmp321 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp321->value = op305;
            $tmp320 = ((panda$core$Object*) $tmp321);
            panda$core$String* $tmp322 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp314, $tmp320);
            $tmp313 = $tmp322;
            panda$core$String* $tmp324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp313, &$s323);
            $tmp312 = $tmp324;
            panda$core$String* $tmp325 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp312, ((panda$core$Object*) right307));
            $tmp311 = $tmp325;
            panda$core$String* $tmp327 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp311, &$s326);
            $tmp310 = $tmp327;
            $tmp309 = $tmp310;
            $returnValue240 = $tmp309;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp309));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp310));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp311));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp312));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp313));
            panda$core$Panda$unref$panda$core$Object($tmp320);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp314));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp315));
            $tmp232 = 6;
            goto $l230;
            $l328:;
            return $returnValue240;
        }
        }
        else {
        panda$core$Bit $tmp330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp330.value) {
        {
            panda$core$Bit* $tmp332 = ((panda$core$Bit*) ((char*) $match$173_9233->$data + 16));
            value331 = *$tmp332;
            panda$core$String* $tmp335 = panda$core$Bit$convert$R$panda$core$String(value331);
            $tmp334 = $tmp335;
            $tmp333 = $tmp334;
            $returnValue240 = $tmp333;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp333));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp334));
            $tmp232 = 7;
            goto $l230;
            $l336:;
            return $returnValue240;
        }
        }
        else {
        panda$core$Bit $tmp338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp338.value) {
        {
            panda$collections$ImmutableArray** $tmp340 = ((panda$collections$ImmutableArray**) ((char*) $match$173_9233->$data + 16));
            statements339 = *$tmp340;
            int $tmp343;
            {
                panda$core$MutableString* $tmp347 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp347, &$s348);
                $tmp346 = $tmp347;
                $tmp345 = $tmp346;
                result344 = $tmp345;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp345));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp346));
                {
                    int $tmp351;
                    {
                        ITable* $tmp355 = ((panda$collections$Iterable*) statements339)->$class->itable;
                        while ($tmp355->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp355 = $tmp355->next;
                        }
                        $fn357 $tmp356 = $tmp355->methods[0];
                        panda$collections$Iterator* $tmp358 = $tmp356(((panda$collections$Iterable*) statements339));
                        $tmp354 = $tmp358;
                        $tmp353 = $tmp354;
                        Iter$194$17352 = $tmp353;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp353));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp354));
                        $l359:;
                        ITable* $tmp362 = Iter$194$17352->$class->itable;
                        while ($tmp362->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp362 = $tmp362->next;
                        }
                        $fn364 $tmp363 = $tmp362->methods[0];
                        panda$core$Bit $tmp365 = $tmp363(Iter$194$17352);
                        panda$core$Bit $tmp366 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp365);
                        bool $tmp361 = $tmp366.value;
                        if (!$tmp361) goto $l360;
                        {
                            int $tmp369;
                            {
                                ITable* $tmp373 = Iter$194$17352->$class->itable;
                                while ($tmp373->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp373 = $tmp373->next;
                                }
                                $fn375 $tmp374 = $tmp373->methods[1];
                                panda$core$Object* $tmp376 = $tmp374(Iter$194$17352);
                                $tmp372 = $tmp376;
                                $tmp371 = ((org$pandalanguage$pandac$ASTNode*) $tmp372);
                                s370 = $tmp371;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp371));
                                panda$core$Panda$unref$panda$core$Object($tmp372);
                                panda$core$String* $tmp379 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s370), &$s378);
                                $tmp377 = $tmp379;
                                panda$core$MutableString$append$panda$core$String(result344, $tmp377);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp377));
                            }
                            $tmp369 = -1;
                            goto $l367;
                            $l367:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s370));
                            s370 = NULL;
                            switch ($tmp369) {
                                case -1: goto $l380;
                            }
                            $l380:;
                        }
                        goto $l359;
                        $l360:;
                    }
                    $tmp351 = -1;
                    goto $l349;
                    $l349:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$194$17352));
                    Iter$194$17352 = NULL;
                    switch ($tmp351) {
                        case -1: goto $l381;
                    }
                    $l381:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp382, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result344, $tmp382);
                panda$core$String* $tmp385 = panda$core$MutableString$finish$R$panda$core$String(result344);
                $tmp384 = $tmp385;
                $tmp383 = $tmp384;
                $returnValue240 = $tmp383;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp383));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp384));
                $tmp343 = 0;
                goto $l341;
                $l386:;
                $tmp232 = 8;
                goto $l230;
                $l387:;
                return $returnValue240;
            }
            $l341:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result344));
            result344 = NULL;
            switch ($tmp343) {
                case 0: goto $l386;
            }
            $l389:;
        }
        }
        else {
        panda$core$Bit $tmp390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp390.value) {
        {
            panda$core$String** $tmp392 = ((panda$core$String**) ((char*) $match$173_9233->$data + 16));
            label391 = *$tmp392;
            if (((panda$core$Bit) { label391 != NULL }).value) {
            {
                panda$core$String* $tmp397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s396, label391);
                $tmp395 = $tmp397;
                panda$core$String* $tmp399 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp395, &$s398);
                $tmp394 = $tmp399;
                $tmp393 = $tmp394;
                $returnValue240 = $tmp393;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp393));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp394));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp395));
                $tmp232 = 9;
                goto $l230;
                $l400:;
                return $returnValue240;
            }
            }
            $tmp402 = &$s403;
            $returnValue240 = $tmp402;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp402));
            $tmp232 = 10;
            goto $l230;
            $l404:;
            return $returnValue240;
        }
        }
        else {
        panda$core$Bit $tmp406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp406.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp408 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$173_9233->$data + 16));
            target407 = *$tmp408;
            panda$collections$ImmutableArray** $tmp410 = ((panda$collections$ImmutableArray**) ((char*) $match$173_9233->$data + 24));
            args409 = *$tmp410;
            panda$core$String* $tmp417 = (($fn416) target407->$class->vtable[0])(target407);
            $tmp415 = $tmp417;
            panda$core$String* $tmp419 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp415, &$s418);
            $tmp414 = $tmp419;
            panda$core$String* $tmp421 = panda$collections$ImmutableArray$join$R$panda$core$String(args409);
            $tmp420 = $tmp421;
            panda$core$String* $tmp422 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp414, $tmp420);
            $tmp413 = $tmp422;
            panda$core$String* $tmp424 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp413, &$s423);
            $tmp412 = $tmp424;
            $tmp411 = $tmp412;
            $returnValue240 = $tmp411;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp411));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp412));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp413));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp420));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp414));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp415));
            $tmp232 = 11;
            goto $l230;
            $l425:;
            return $returnValue240;
        }
        }
        else {
        panda$core$Bit $tmp427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp427.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp429 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$173_9233->$data + 16));
            dc428 = *$tmp429;
            panda$core$String** $tmp431 = ((panda$core$String**) ((char*) $match$173_9233->$data + 24));
            name430 = *$tmp431;
            panda$collections$ImmutableArray** $tmp433 = ((panda$collections$ImmutableArray**) ((char*) $match$173_9233->$data + 32));
            fields432 = *$tmp433;
            int $tmp436;
            {
                panda$core$MutableString* $tmp440 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp440);
                $tmp439 = $tmp440;
                $tmp438 = $tmp439;
                result437 = $tmp438;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp438));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp439));
                if (((panda$core$Bit) { dc428 != NULL }).value) {
                {
                    panda$core$String* $tmp443 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc428), &$s442);
                    $tmp441 = $tmp443;
                    panda$core$MutableString$append$panda$core$String(result437, $tmp441);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp441));
                }
                }
                panda$core$String* $tmp448 = panda$core$String$convert$R$panda$core$String(name430);
                $tmp447 = $tmp448;
                panda$core$String* $tmp450 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp447, &$s449);
                $tmp446 = $tmp450;
                panda$core$String* $tmp452 = panda$collections$ImmutableArray$join$R$panda$core$String(fields432);
                $tmp451 = $tmp452;
                panda$core$String* $tmp453 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp446, $tmp451);
                $tmp445 = $tmp453;
                panda$core$String* $tmp455 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp445, &$s454);
                $tmp444 = $tmp455;
                panda$core$MutableString$append$panda$core$String(result437, $tmp444);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp444));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp445));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp451));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp446));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp447));
                panda$core$String* $tmp458 = panda$core$MutableString$finish$R$panda$core$String(result437);
                $tmp457 = $tmp458;
                $tmp456 = $tmp457;
                $returnValue240 = $tmp456;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp456));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp457));
                $tmp436 = 0;
                goto $l434;
                $l459:;
                $tmp232 = 12;
                goto $l230;
                $l460:;
                return $returnValue240;
            }
            $l434:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result437));
            result437 = NULL;
            switch ($tmp436) {
                case 0: goto $l459;
            }
            $l462:;
        }
        }
        else {
        panda$core$Bit $tmp463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp463.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp465 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$173_9233->$data + 16));
            base464 = *$tmp465;
            org$pandalanguage$pandac$ChoiceEntry** $tmp467 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$173_9233->$data + 24));
            ce466 = *$tmp467;
            panda$core$Int64* $tmp469 = ((panda$core$Int64*) ((char*) $match$173_9233->$data + 32));
            index468 = *$tmp469;
            panda$core$String* $tmp478 = (($fn477) base464->$class->vtable[0])(base464);
            $tmp476 = $tmp478;
            panda$core$String* $tmp480 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp476, &$s479);
            $tmp475 = $tmp480;
            panda$core$String* $tmp481 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp475, ((panda$core$Object*) ce466));
            $tmp474 = $tmp481;
            panda$core$String* $tmp483 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp474, &$s482);
            $tmp473 = $tmp483;
            panda$core$Int64$wrapper* $tmp485;
            $tmp485 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp485->value = index468;
            $tmp484 = ((panda$core$Object*) $tmp485);
            panda$core$String* $tmp486 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp473, $tmp484);
            $tmp472 = $tmp486;
            panda$core$String* $tmp488 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp472, &$s487);
            $tmp471 = $tmp488;
            $tmp470 = $tmp471;
            $returnValue240 = $tmp470;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp470));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp471));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp472));
            panda$core$Panda$unref$panda$core$Object($tmp484);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp473));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp474));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp475));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp476));
            $tmp232 = 13;
            goto $l230;
            $l489:;
            return $returnValue240;
        }
        }
        else {
        panda$core$Bit $tmp491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp491.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp493 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$173_9233->$data + 16));
            dc492 = *$tmp493;
            panda$collections$ImmutableArray** $tmp495 = ((panda$collections$ImmutableArray**) ((char*) $match$173_9233->$data + 24));
            annotations494 = *$tmp495;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp497 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$173_9233->$data + 32));
            kind496 = *$tmp497;
            panda$core$String** $tmp499 = ((panda$core$String**) ((char*) $match$173_9233->$data + 40));
            name498 = *$tmp499;
            panda$collections$ImmutableArray** $tmp501 = ((panda$collections$ImmutableArray**) ((char*) $match$173_9233->$data + 48));
            generics500 = *$tmp501;
            panda$collections$ImmutableArray** $tmp503 = ((panda$collections$ImmutableArray**) ((char*) $match$173_9233->$data + 56));
            supertypes502 = *$tmp503;
            panda$collections$ImmutableArray** $tmp505 = ((panda$collections$ImmutableArray**) ((char*) $match$173_9233->$data + 64));
            members504 = *$tmp505;
            int $tmp508;
            {
                panda$core$MutableString* $tmp512 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp512);
                $tmp511 = $tmp512;
                $tmp510 = $tmp511;
                result509 = $tmp510;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp510));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp511));
                if (((panda$core$Bit) { dc492 != NULL }).value) {
                {
                    panda$core$String* $tmp515 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc492), &$s514);
                    $tmp513 = $tmp515;
                    panda$core$MutableString$append$panda$core$String(result509, $tmp513);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp513));
                }
                }
                {
                    int $tmp518;
                    {
                        ITable* $tmp522 = ((panda$collections$Iterable*) annotations494)->$class->itable;
                        while ($tmp522->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp522 = $tmp522->next;
                        }
                        $fn524 $tmp523 = $tmp522->methods[0];
                        panda$collections$Iterator* $tmp525 = $tmp523(((panda$collections$Iterable*) annotations494));
                        $tmp521 = $tmp525;
                        $tmp520 = $tmp521;
                        Iter$220$17519 = $tmp520;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp520));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp521));
                        $l526:;
                        ITable* $tmp529 = Iter$220$17519->$class->itable;
                        while ($tmp529->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp529 = $tmp529->next;
                        }
                        $fn531 $tmp530 = $tmp529->methods[0];
                        panda$core$Bit $tmp532 = $tmp530(Iter$220$17519);
                        panda$core$Bit $tmp533 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp532);
                        bool $tmp528 = $tmp533.value;
                        if (!$tmp528) goto $l527;
                        {
                            int $tmp536;
                            {
                                ITable* $tmp540 = Iter$220$17519->$class->itable;
                                while ($tmp540->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp540 = $tmp540->next;
                                }
                                $fn542 $tmp541 = $tmp540->methods[1];
                                panda$core$Object* $tmp543 = $tmp541(Iter$220$17519);
                                $tmp539 = $tmp543;
                                $tmp538 = ((org$pandalanguage$pandac$ASTNode*) $tmp539);
                                a537 = $tmp538;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp538));
                                panda$core$Panda$unref$panda$core$Object($tmp539);
                                panda$core$String* $tmp546 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a537), &$s545);
                                $tmp544 = $tmp546;
                                panda$core$MutableString$append$panda$core$String(result509, $tmp544);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp544));
                            }
                            $tmp536 = -1;
                            goto $l534;
                            $l534:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a537));
                            a537 = NULL;
                            switch ($tmp536) {
                                case -1: goto $l547;
                            }
                            $l547:;
                        }
                        goto $l526;
                        $l527:;
                    }
                    $tmp518 = -1;
                    goto $l516;
                    $l516:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$220$17519));
                    Iter$220$17519 = NULL;
                    switch ($tmp518) {
                        case -1: goto $l548;
                    }
                    $l548:;
                }
                {
                    $match$223_17549 = kind496;
                    panda$core$Bit $tmp550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$223_17549.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp550.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result509, &$s551);
                    }
                    }
                    else {
                    panda$core$Bit $tmp552 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$223_17549.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp552.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result509, &$s553);
                    }
                    }
                    else {
                    panda$core$Bit $tmp554 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$223_17549.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp554.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result509, &$s555);
                    }
                    }
                    }
                    }
                }
                panda$core$MutableString$append$panda$core$String(result509, name498);
                if (((panda$core$Bit) { generics500 != NULL }).value) {
                {
                    panda$core$String* $tmp560 = panda$collections$ImmutableArray$join$R$panda$core$String(generics500);
                    $tmp559 = $tmp560;
                    panda$core$String* $tmp561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s558, $tmp559);
                    $tmp557 = $tmp561;
                    panda$core$String* $tmp563 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp557, &$s562);
                    $tmp556 = $tmp563;
                    panda$core$MutableString$append$panda$core$String(result509, $tmp556);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp556));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp557));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp559));
                }
                }
                if (((panda$core$Bit) { supertypes502 != NULL }).value) {
                {
                    panda$core$String* $tmp568 = panda$collections$ImmutableArray$join$R$panda$core$String(supertypes502);
                    $tmp567 = $tmp568;
                    panda$core$String* $tmp569 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s566, $tmp567);
                    $tmp565 = $tmp569;
                    panda$core$String* $tmp571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp565, &$s570);
                    $tmp564 = $tmp571;
                    panda$core$MutableString$append$panda$core$String(result509, $tmp564);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp564));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp565));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp567));
                }
                }
                panda$core$MutableString$append$panda$core$String(result509, &$s572);
                {
                    int $tmp575;
                    {
                        ITable* $tmp579 = ((panda$collections$Iterable*) members504)->$class->itable;
                        while ($tmp579->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp579 = $tmp579->next;
                        }
                        $fn581 $tmp580 = $tmp579->methods[0];
                        panda$collections$Iterator* $tmp582 = $tmp580(((panda$collections$Iterable*) members504));
                        $tmp578 = $tmp582;
                        $tmp577 = $tmp578;
                        Iter$236$17576 = $tmp577;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp577));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp578));
                        $l583:;
                        ITable* $tmp586 = Iter$236$17576->$class->itable;
                        while ($tmp586->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp586 = $tmp586->next;
                        }
                        $fn588 $tmp587 = $tmp586->methods[0];
                        panda$core$Bit $tmp589 = $tmp587(Iter$236$17576);
                        panda$core$Bit $tmp590 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp589);
                        bool $tmp585 = $tmp590.value;
                        if (!$tmp585) goto $l584;
                        {
                            int $tmp593;
                            {
                                ITable* $tmp597 = Iter$236$17576->$class->itable;
                                while ($tmp597->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp597 = $tmp597->next;
                                }
                                $fn599 $tmp598 = $tmp597->methods[1];
                                panda$core$Object* $tmp600 = $tmp598(Iter$236$17576);
                                $tmp596 = $tmp600;
                                $tmp595 = ((org$pandalanguage$pandac$ASTNode*) $tmp596);
                                m594 = $tmp595;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp595));
                                panda$core$Panda$unref$panda$core$Object($tmp596);
                                panda$core$String* $tmp603 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) m594), &$s602);
                                $tmp601 = $tmp603;
                                panda$core$MutableString$append$panda$core$String(result509, $tmp601);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp601));
                            }
                            $tmp593 = -1;
                            goto $l591;
                            $l591:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m594));
                            m594 = NULL;
                            switch ($tmp593) {
                                case -1: goto $l604;
                            }
                            $l604:;
                        }
                        goto $l583;
                        $l584:;
                    }
                    $tmp575 = -1;
                    goto $l573;
                    $l573:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$236$17576));
                    Iter$236$17576 = NULL;
                    switch ($tmp575) {
                        case -1: goto $l605;
                    }
                    $l605:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp606, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result509, $tmp606);
                panda$core$String* $tmp609 = panda$core$MutableString$finish$R$panda$core$String(result509);
                $tmp608 = $tmp609;
                $tmp607 = $tmp608;
                $returnValue240 = $tmp607;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp607));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp608));
                $tmp508 = 0;
                goto $l506;
                $l610:;
                $tmp232 = 14;
                goto $l230;
                $l611:;
                return $returnValue240;
            }
            $l506:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result509));
            result509 = NULL;
            switch ($tmp508) {
                case 0: goto $l610;
            }
            $l613:;
        }
        }
        else {
        panda$core$Bit $tmp614 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp614.value) {
        {
            panda$core$String** $tmp616 = ((panda$core$String**) ((char*) $match$173_9233->$data + 16));
            label615 = *$tmp616;
            if (((panda$core$Bit) { label615 != NULL }).value) {
            {
                panda$core$String* $tmp621 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s620, label615);
                $tmp619 = $tmp621;
                panda$core$String* $tmp623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp619, &$s622);
                $tmp618 = $tmp623;
                $tmp617 = $tmp618;
                $returnValue240 = $tmp617;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp617));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp618));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp619));
                $tmp232 = 15;
                goto $l230;
                $l624:;
                return $returnValue240;
            }
            }
            $tmp626 = &$s627;
            $returnValue240 = $tmp626;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp626));
            $tmp232 = 16;
            goto $l230;
            $l628:;
            return $returnValue240;
        }
        }
        else {
        panda$core$Bit $tmp630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp630.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp632 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$173_9233->$data + 16));
            target631 = *$tmp632;
            org$pandalanguage$pandac$ASTNode** $tmp634 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$173_9233->$data + 24));
            value633 = *$tmp634;
            if (((panda$core$Bit) { value633 != NULL }).value) {
            {
                panda$core$String* $tmp641 = (($fn640) target631->$class->vtable[0])(target631);
                $tmp639 = $tmp641;
                panda$core$String* $tmp643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp639, &$s642);
                $tmp638 = $tmp643;
                panda$core$String* $tmp644 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp638, ((panda$core$Object*) value633));
                $tmp637 = $tmp644;
                panda$core$String* $tmp646 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp637, &$s645);
                $tmp636 = $tmp646;
                $tmp635 = $tmp636;
                $returnValue240 = $tmp635;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp635));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp636));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp637));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp638));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp639));
                $tmp232 = 17;
                goto $l230;
                $l647:;
                return $returnValue240;
            }
            }
            panda$core$String* $tmp652 = (($fn651) target631->$class->vtable[0])(target631);
            $tmp650 = $tmp652;
            $tmp649 = $tmp650;
            $returnValue240 = $tmp649;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp649));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp650));
            $tmp232 = 18;
            goto $l230;
            $l653:;
            return $returnValue240;
        }
        }
        else {
        panda$core$Bit $tmp655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp655.value) {
        {
            panda$core$String** $tmp657 = ((panda$core$String**) ((char*) $match$173_9233->$data + 16));
            label656 = *$tmp657;
            panda$collections$ImmutableArray** $tmp659 = ((panda$collections$ImmutableArray**) ((char*) $match$173_9233->$data + 24));
            statements658 = *$tmp659;
            org$pandalanguage$pandac$ASTNode** $tmp661 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$173_9233->$data + 32));
            test660 = *$tmp661;
            int $tmp664;
            {
                panda$core$MutableString* $tmp668 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp668);
                $tmp667 = $tmp668;
                $tmp666 = $tmp667;
                result665 = $tmp666;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp666));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp667));
                if (((panda$core$Bit) { label656 != NULL }).value) {
                {
                    panda$core$String* $tmp671 = panda$core$String$convert$R$panda$core$String(label656);
                    $tmp670 = $tmp671;
                    panda$core$String* $tmp673 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp670, &$s672);
                    $tmp669 = $tmp673;
                    panda$core$MutableString$append$panda$core$String(result665, $tmp669);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp669));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp670));
                }
                }
                panda$core$MutableString$append$panda$core$String(result665, &$s674);
                {
                    int $tmp677;
                    {
                        ITable* $tmp681 = ((panda$collections$Iterable*) statements658)->$class->itable;
                        while ($tmp681->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp681 = $tmp681->next;
                        }
                        $fn683 $tmp682 = $tmp681->methods[0];
                        panda$collections$Iterator* $tmp684 = $tmp682(((panda$collections$Iterable*) statements658));
                        $tmp680 = $tmp684;
                        $tmp679 = $tmp680;
                        Iter$257$17678 = $tmp679;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp679));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp680));
                        $l685:;
                        ITable* $tmp688 = Iter$257$17678->$class->itable;
                        while ($tmp688->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp688 = $tmp688->next;
                        }
                        $fn690 $tmp689 = $tmp688->methods[0];
                        panda$core$Bit $tmp691 = $tmp689(Iter$257$17678);
                        panda$core$Bit $tmp692 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp691);
                        bool $tmp687 = $tmp692.value;
                        if (!$tmp687) goto $l686;
                        {
                            int $tmp695;
                            {
                                ITable* $tmp699 = Iter$257$17678->$class->itable;
                                while ($tmp699->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp699 = $tmp699->next;
                                }
                                $fn701 $tmp700 = $tmp699->methods[1];
                                panda$core$Object* $tmp702 = $tmp700(Iter$257$17678);
                                $tmp698 = $tmp702;
                                $tmp697 = ((org$pandalanguage$pandac$ASTNode*) $tmp698);
                                s696 = $tmp697;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp697));
                                panda$core$Panda$unref$panda$core$Object($tmp698);
                                panda$core$String* $tmp705 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s696), &$s704);
                                $tmp703 = $tmp705;
                                panda$core$MutableString$append$panda$core$String(result665, $tmp703);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp703));
                            }
                            $tmp695 = -1;
                            goto $l693;
                            $l693:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s696));
                            s696 = NULL;
                            switch ($tmp695) {
                                case -1: goto $l706;
                            }
                            $l706:;
                        }
                        goto $l685;
                        $l686:;
                    }
                    $tmp677 = -1;
                    goto $l675;
                    $l675:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$257$17678));
                    Iter$257$17678 = NULL;
                    switch ($tmp677) {
                        case -1: goto $l707;
                    }
                    $l707:;
                }
                panda$core$String* $tmp711 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s710, ((panda$core$Object*) test660));
                $tmp709 = $tmp711;
                panda$core$String* $tmp713 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp709, &$s712);
                $tmp708 = $tmp713;
                panda$core$MutableString$append$panda$core$String(result665, $tmp708);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp708));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp709));
                panda$core$String* $tmp716 = panda$core$MutableString$finish$R$panda$core$String(result665);
                $tmp715 = $tmp716;
                $tmp714 = $tmp715;
                $returnValue240 = $tmp714;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp714));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp715));
                $tmp664 = 0;
                goto $l662;
                $l717:;
                $tmp232 = 19;
                goto $l230;
                $l718:;
                return $returnValue240;
            }
            $l662:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result665));
            result665 = NULL;
            switch ($tmp664) {
                case 0: goto $l717;
            }
            $l720:;
        }
        }
        else {
        panda$core$Bit $tmp721 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp721.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp723 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$173_9233->$data + 16));
            base722 = *$tmp723;
            panda$core$String** $tmp725 = ((panda$core$String**) ((char*) $match$173_9233->$data + 24));
            field724 = *$tmp725;
            panda$core$String* $tmp732 = (($fn731) base722->$class->vtable[0])(base722);
            $tmp730 = $tmp732;
            panda$core$String* $tmp734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp730, &$s733);
            $tmp729 = $tmp734;
            panda$core$String* $tmp735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp729, field724);
            $tmp728 = $tmp735;
            panda$core$String* $tmp737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp728, &$s736);
            $tmp727 = $tmp737;
            $tmp726 = $tmp727;
            $returnValue240 = $tmp726;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp726));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp727));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp728));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp729));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp730));
            $tmp232 = 20;
            goto $l230;
            $l738:;
            return $returnValue240;
        }
        }
        else {
        panda$core$Bit $tmp740 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp740.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp742 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$173_9233->$data + 16));
            dc741 = *$tmp742;
            panda$collections$ImmutableArray** $tmp744 = ((panda$collections$ImmutableArray**) ((char*) $match$173_9233->$data + 24));
            annotations743 = *$tmp744;
            org$pandalanguage$pandac$ASTNode** $tmp746 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$173_9233->$data + 32));
            decl745 = *$tmp746;
            int $tmp749;
            {
                panda$core$MutableString* $tmp753 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp753);
                $tmp752 = $tmp753;
                $tmp751 = $tmp752;
                result750 = $tmp751;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp751));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp752));
                if (((panda$core$Bit) { dc741 != NULL }).value) {
                {
                    panda$core$String* $tmp756 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc741), &$s755);
                    $tmp754 = $tmp756;
                    panda$core$MutableString$append$panda$core$String(result750, $tmp754);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp754));
                }
                }
                {
                    int $tmp759;
                    {
                        ITable* $tmp763 = ((panda$collections$Iterable*) annotations743)->$class->itable;
                        while ($tmp763->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp763 = $tmp763->next;
                        }
                        $fn765 $tmp764 = $tmp763->methods[0];
                        panda$collections$Iterator* $tmp766 = $tmp764(((panda$collections$Iterable*) annotations743));
                        $tmp762 = $tmp766;
                        $tmp761 = $tmp762;
                        Iter$269$17760 = $tmp761;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp761));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp762));
                        $l767:;
                        ITable* $tmp770 = Iter$269$17760->$class->itable;
                        while ($tmp770->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp770 = $tmp770->next;
                        }
                        $fn772 $tmp771 = $tmp770->methods[0];
                        panda$core$Bit $tmp773 = $tmp771(Iter$269$17760);
                        panda$core$Bit $tmp774 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp773);
                        bool $tmp769 = $tmp774.value;
                        if (!$tmp769) goto $l768;
                        {
                            int $tmp777;
                            {
                                ITable* $tmp781 = Iter$269$17760->$class->itable;
                                while ($tmp781->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp781 = $tmp781->next;
                                }
                                $fn783 $tmp782 = $tmp781->methods[1];
                                panda$core$Object* $tmp784 = $tmp782(Iter$269$17760);
                                $tmp780 = $tmp784;
                                $tmp779 = ((org$pandalanguage$pandac$ASTNode*) $tmp780);
                                a778 = $tmp779;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp779));
                                panda$core$Panda$unref$panda$core$Object($tmp780);
                                panda$core$String* $tmp787 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a778), &$s786);
                                $tmp785 = $tmp787;
                                panda$core$MutableString$append$panda$core$String(result750, $tmp785);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp785));
                            }
                            $tmp777 = -1;
                            goto $l775;
                            $l775:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a778));
                            a778 = NULL;
                            switch ($tmp777) {
                                case -1: goto $l788;
                            }
                            $l788:;
                        }
                        goto $l767;
                        $l768:;
                    }
                    $tmp759 = -1;
                    goto $l757;
                    $l757:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$269$17760));
                    Iter$269$17760 = NULL;
                    switch ($tmp759) {
                        case -1: goto $l789;
                    }
                    $l789:;
                }
                panda$core$MutableString$append$panda$core$Object(result750, ((panda$core$Object*) decl745));
                panda$core$String* $tmp792 = panda$core$MutableString$finish$R$panda$core$String(result750);
                $tmp791 = $tmp792;
                $tmp790 = $tmp791;
                $returnValue240 = $tmp790;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp790));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp791));
                $tmp749 = 0;
                goto $l747;
                $l793:;
                $tmp232 = 21;
                goto $l230;
                $l794:;
                return $returnValue240;
            }
            $l747:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result750));
            result750 = NULL;
            switch ($tmp749) {
                case 0: goto $l793;
            }
            $l796:;
        }
        }
        else {
        panda$core$Bit $tmp797 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp797.value) {
        {
            panda$collections$ImmutableArray** $tmp799 = ((panda$collections$ImmutableArray**) ((char*) $match$173_9233->$data + 0));
            entries798 = *$tmp799;
            int $tmp802;
            {
                panda$core$MutableString* $tmp806 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp806);
                $tmp805 = $tmp806;
                $tmp804 = $tmp805;
                result803 = $tmp804;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp804));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp805));
                {
                    int $tmp809;
                    {
                        ITable* $tmp813 = ((panda$collections$Iterable*) entries798)->$class->itable;
                        while ($tmp813->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp813 = $tmp813->next;
                        }
                        $fn815 $tmp814 = $tmp813->methods[0];
                        panda$collections$Iterator* $tmp816 = $tmp814(((panda$collections$Iterable*) entries798));
                        $tmp812 = $tmp816;
                        $tmp811 = $tmp812;
                        Iter$276$17810 = $tmp811;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp811));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp812));
                        $l817:;
                        ITable* $tmp820 = Iter$276$17810->$class->itable;
                        while ($tmp820->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp820 = $tmp820->next;
                        }
                        $fn822 $tmp821 = $tmp820->methods[0];
                        panda$core$Bit $tmp823 = $tmp821(Iter$276$17810);
                        panda$core$Bit $tmp824 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp823);
                        bool $tmp819 = $tmp824.value;
                        if (!$tmp819) goto $l818;
                        {
                            int $tmp827;
                            {
                                ITable* $tmp831 = Iter$276$17810->$class->itable;
                                while ($tmp831->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp831 = $tmp831->next;
                                }
                                $fn833 $tmp832 = $tmp831->methods[1];
                                panda$core$Object* $tmp834 = $tmp832(Iter$276$17810);
                                $tmp830 = $tmp834;
                                $tmp829 = ((org$pandalanguage$pandac$ASTNode*) $tmp830);
                                e828 = $tmp829;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp829));
                                panda$core$Panda$unref$panda$core$Object($tmp830);
                                panda$core$String* $tmp837 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) e828), &$s836);
                                $tmp835 = $tmp837;
                                panda$core$MutableString$append$panda$core$String(result803, $tmp835);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp835));
                            }
                            $tmp827 = -1;
                            goto $l825;
                            $l825:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e828));
                            e828 = NULL;
                            switch ($tmp827) {
                                case -1: goto $l838;
                            }
                            $l838:;
                        }
                        goto $l817;
                        $l818:;
                    }
                    $tmp809 = -1;
                    goto $l807;
                    $l807:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$276$17810));
                    Iter$276$17810 = NULL;
                    switch ($tmp809) {
                        case -1: goto $l839;
                    }
                    $l839:;
                }
                panda$core$String* $tmp842 = panda$core$MutableString$finish$R$panda$core$String(result803);
                $tmp841 = $tmp842;
                $tmp840 = $tmp841;
                $returnValue240 = $tmp840;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp840));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp841));
                $tmp802 = 0;
                goto $l800;
                $l843:;
                $tmp232 = 22;
                goto $l230;
                $l844:;
                return $returnValue240;
            }
            $l800:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result803));
            result803 = NULL;
            switch ($tmp802) {
                case 0: goto $l843;
            }
            $l846:;
        }
        }
        else {
        panda$core$Bit $tmp847 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp847.value) {
        {
            panda$core$String** $tmp849 = ((panda$core$String**) ((char*) $match$173_9233->$data + 16));
            label848 = *$tmp849;
            org$pandalanguage$pandac$ASTNode** $tmp851 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$173_9233->$data + 24));
            target850 = *$tmp851;
            org$pandalanguage$pandac$ASTNode** $tmp853 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$173_9233->$data + 32));
            list852 = *$tmp853;
            panda$collections$ImmutableArray** $tmp855 = ((panda$collections$ImmutableArray**) ((char*) $match$173_9233->$data + 40));
            statements854 = *$tmp855;
            int $tmp858;
            {
                panda$core$MutableString* $tmp862 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp862);
                $tmp861 = $tmp862;
                $tmp860 = $tmp861;
                result859 = $tmp860;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp860));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp861));
                if (((panda$core$Bit) { label848 != NULL }).value) {
                {
                    panda$core$String* $tmp865 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(label848, &$s864);
                    $tmp863 = $tmp865;
                    panda$core$MutableString$append$panda$core$String(result859, $tmp863);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp863));
                }
                }
                panda$core$String* $tmp871 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s870, ((panda$core$Object*) target850));
                $tmp869 = $tmp871;
                panda$core$String* $tmp873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp869, &$s872);
                $tmp868 = $tmp873;
                panda$core$String* $tmp874 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp868, ((panda$core$Object*) list852));
                $tmp867 = $tmp874;
                panda$core$String* $tmp876 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp867, &$s875);
                $tmp866 = $tmp876;
                panda$core$MutableString$append$panda$core$String(result859, $tmp866);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp866));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp867));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp868));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp869));
                {
                    int $tmp879;
                    {
                        ITable* $tmp883 = ((panda$collections$Iterable*) statements854)->$class->itable;
                        while ($tmp883->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp883 = $tmp883->next;
                        }
                        $fn885 $tmp884 = $tmp883->methods[0];
                        panda$collections$Iterator* $tmp886 = $tmp884(((panda$collections$Iterable*) statements854));
                        $tmp882 = $tmp886;
                        $tmp881 = $tmp882;
                        Iter$286$17880 = $tmp881;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp881));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp882));
                        $l887:;
                        ITable* $tmp890 = Iter$286$17880->$class->itable;
                        while ($tmp890->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp890 = $tmp890->next;
                        }
                        $fn892 $tmp891 = $tmp890->methods[0];
                        panda$core$Bit $tmp893 = $tmp891(Iter$286$17880);
                        panda$core$Bit $tmp894 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp893);
                        bool $tmp889 = $tmp894.value;
                        if (!$tmp889) goto $l888;
                        {
                            int $tmp897;
                            {
                                ITable* $tmp901 = Iter$286$17880->$class->itable;
                                while ($tmp901->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp901 = $tmp901->next;
                                }
                                $fn903 $tmp902 = $tmp901->methods[1];
                                panda$core$Object* $tmp904 = $tmp902(Iter$286$17880);
                                $tmp900 = $tmp904;
                                $tmp899 = ((org$pandalanguage$pandac$ASTNode*) $tmp900);
                                s898 = $tmp899;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp899));
                                panda$core$Panda$unref$panda$core$Object($tmp900);
                                panda$core$String* $tmp907 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s898), &$s906);
                                $tmp905 = $tmp907;
                                panda$core$MutableString$append$panda$core$String(result859, $tmp905);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp905));
                            }
                            $tmp897 = -1;
                            goto $l895;
                            $l895:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s898));
                            s898 = NULL;
                            switch ($tmp897) {
                                case -1: goto $l908;
                            }
                            $l908:;
                        }
                        goto $l887;
                        $l888:;
                    }
                    $tmp879 = -1;
                    goto $l877;
                    $l877:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$286$17880));
                    Iter$286$17880 = NULL;
                    switch ($tmp879) {
                        case -1: goto $l909;
                    }
                    $l909:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp910, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result859, $tmp910);
                panda$core$String* $tmp913 = panda$core$MutableString$finish$R$panda$core$String(result859);
                $tmp912 = $tmp913;
                $tmp911 = $tmp912;
                $returnValue240 = $tmp911;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp911));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp912));
                $tmp858 = 0;
                goto $l856;
                $l914:;
                $tmp232 = 23;
                goto $l230;
                $l915:;
                return $returnValue240;
            }
            $l856:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result859));
            result859 = NULL;
            switch ($tmp858) {
                case 0: goto $l914;
            }
            $l917:;
        }
        }
        else {
        panda$core$Bit $tmp918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp918.value) {
        {
            panda$core$String** $tmp920 = ((panda$core$String**) ((char*) $match$173_9233->$data + 16));
            name919 = *$tmp920;
            panda$collections$ImmutableArray** $tmp922 = ((panda$collections$ImmutableArray**) ((char*) $match$173_9233->$data + 24));
            subtypes921 = *$tmp922;
            panda$core$String* $tmp928 = panda$core$String$convert$R$panda$core$String(name919);
            $tmp927 = $tmp928;
            panda$core$String* $tmp930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp927, &$s929);
            $tmp926 = $tmp930;
            panda$core$String* $tmp932 = panda$collections$ImmutableArray$join$R$panda$core$String(subtypes921);
            $tmp931 = $tmp932;
            panda$core$String* $tmp933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp926, $tmp931);
            $tmp925 = $tmp933;
            panda$core$String* $tmp935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp925, &$s934);
            $tmp924 = $tmp935;
            $tmp923 = $tmp924;
            $returnValue240 = $tmp923;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp923));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp924));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp925));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp931));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp926));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp927));
            $tmp232 = 24;
            goto $l230;
            $l936:;
            return $returnValue240;
        }
        }
        else {
        panda$core$Bit $tmp938 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp938.value) {
        {
            panda$core$String** $tmp940 = ((panda$core$String**) ((char*) $match$173_9233->$data + 16));
            name939 = *$tmp940;
            $tmp941 = name939;
            $returnValue240 = $tmp941;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp941));
            $tmp232 = 25;
            goto $l230;
            $l942:;
            return $returnValue240;
        }
        }
        else {
        panda$core$Bit $tmp944 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp944.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp946 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$173_9233->$data + 16));
            test945 = *$tmp946;
            panda$collections$ImmutableArray** $tmp948 = ((panda$collections$ImmutableArray**) ((char*) $match$173_9233->$data + 24));
            ifTrue947 = *$tmp948;
            org$pandalanguage$pandac$ASTNode** $tmp950 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$173_9233->$data + 32));
            ifFalse949 = *$tmp950;
            int $tmp953;
            {
                panda$core$MutableString* $tmp957 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp961 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s960, ((panda$core$Object*) test945));
                $tmp959 = $tmp961;
                panda$core$String* $tmp963 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp959, &$s962);
                $tmp958 = $tmp963;
                panda$core$MutableString$init$panda$core$String($tmp957, $tmp958);
                $tmp956 = $tmp957;
                $tmp955 = $tmp956;
                result954 = $tmp955;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp955));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp956));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp958));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp959));
                {
                    int $tmp966;
                    {
                        ITable* $tmp970 = ((panda$collections$Iterable*) ifTrue947)->$class->itable;
                        while ($tmp970->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp970 = $tmp970->next;
                        }
                        $fn972 $tmp971 = $tmp970->methods[0];
                        panda$collections$Iterator* $tmp973 = $tmp971(((panda$collections$Iterable*) ifTrue947));
                        $tmp969 = $tmp973;
                        $tmp968 = $tmp969;
                        Iter$297$17967 = $tmp968;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp968));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp969));
                        $l974:;
                        ITable* $tmp977 = Iter$297$17967->$class->itable;
                        while ($tmp977->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp977 = $tmp977->next;
                        }
                        $fn979 $tmp978 = $tmp977->methods[0];
                        panda$core$Bit $tmp980 = $tmp978(Iter$297$17967);
                        panda$core$Bit $tmp981 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp980);
                        bool $tmp976 = $tmp981.value;
                        if (!$tmp976) goto $l975;
                        {
                            int $tmp984;
                            {
                                ITable* $tmp988 = Iter$297$17967->$class->itable;
                                while ($tmp988->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp988 = $tmp988->next;
                                }
                                $fn990 $tmp989 = $tmp988->methods[1];
                                panda$core$Object* $tmp991 = $tmp989(Iter$297$17967);
                                $tmp987 = $tmp991;
                                $tmp986 = ((org$pandalanguage$pandac$ASTNode*) $tmp987);
                                s985 = $tmp986;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp986));
                                panda$core$Panda$unref$panda$core$Object($tmp987);
                                panda$core$String* $tmp994 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s985), &$s993);
                                $tmp992 = $tmp994;
                                panda$core$MutableString$append$panda$core$String(result954, $tmp992);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp992));
                            }
                            $tmp984 = -1;
                            goto $l982;
                            $l982:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s985));
                            s985 = NULL;
                            switch ($tmp984) {
                                case -1: goto $l995;
                            }
                            $l995:;
                        }
                        goto $l974;
                        $l975:;
                    }
                    $tmp966 = -1;
                    goto $l964;
                    $l964:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$297$17967));
                    Iter$297$17967 = NULL;
                    switch ($tmp966) {
                        case -1: goto $l996;
                    }
                    $l996:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp997, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result954, $tmp997);
                if (((panda$core$Bit) { ifFalse949 != NULL }).value) {
                {
                    panda$core$String* $tmp1001 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1000, ((panda$core$Object*) ifFalse949));
                    $tmp999 = $tmp1001;
                    panda$core$String* $tmp1003 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp999, &$s1002);
                    $tmp998 = $tmp1003;
                    panda$core$MutableString$append$panda$core$String(result954, $tmp998);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp998));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp999));
                }
                }
                panda$core$String* $tmp1006 = panda$core$MutableString$finish$R$panda$core$String(result954);
                $tmp1005 = $tmp1006;
                $tmp1004 = $tmp1005;
                $returnValue240 = $tmp1004;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1004));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1005));
                $tmp953 = 0;
                goto $l951;
                $l1007:;
                $tmp232 = 26;
                goto $l230;
                $l1008:;
                return $returnValue240;
            }
            $l951:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result954));
            result954 = NULL;
            switch ($tmp953) {
                case 0: goto $l1007;
            }
            $l1010:;
        }
        }
        else {
        panda$core$Bit $tmp1011 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1011.value) {
        {
            panda$core$UInt64* $tmp1013 = ((panda$core$UInt64*) ((char*) $match$173_9233->$data + 16));
            value1012 = *$tmp1013;
            panda$core$String* $tmp1016 = panda$core$UInt64$convert$R$panda$core$String(value1012);
            $tmp1015 = $tmp1016;
            $tmp1014 = $tmp1015;
            $returnValue240 = $tmp1014;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1014));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1015));
            $tmp232 = 27;
            goto $l230;
            $l1017:;
            return $returnValue240;
        }
        }
        else {
        panda$core$Bit $tmp1019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1019.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1021 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$173_9233->$data + 0));
            ir1020 = *$tmp1021;
            panda$core$String* $tmp1025 = (($fn1024) ir1020->$class->vtable[0])(ir1020);
            $tmp1023 = $tmp1025;
            $tmp1022 = $tmp1023;
            $returnValue240 = $tmp1022;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1022));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1023));
            $tmp232 = 28;
            goto $l230;
            $l1026:;
            return $returnValue240;
        }
        }
        else {
        panda$core$Bit $tmp1028 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1028.value) {
        {
            panda$core$String** $tmp1030 = ((panda$core$String**) ((char*) $match$173_9233->$data + 16));
            label1029 = *$tmp1030;
            panda$collections$ImmutableArray** $tmp1032 = ((panda$collections$ImmutableArray**) ((char*) $match$173_9233->$data + 24));
            statements1031 = *$tmp1032;
            int $tmp1035;
            {
                panda$core$MutableString* $tmp1039 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1039);
                $tmp1038 = $tmp1039;
                $tmp1037 = $tmp1038;
                result1036 = $tmp1037;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1037));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1038));
                if (((panda$core$Bit) { label1029 != NULL }).value) {
                {
                    panda$core$String* $tmp1042 = panda$core$String$convert$R$panda$core$String(label1029);
                    $tmp1041 = $tmp1042;
                    panda$core$String* $tmp1044 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1041, &$s1043);
                    $tmp1040 = $tmp1044;
                    panda$core$MutableString$append$panda$core$String(result1036, $tmp1040);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1040));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1041));
                }
                }
                panda$core$MutableString$append$panda$core$String(result1036, &$s1045);
                {
                    int $tmp1048;
                    {
                        ITable* $tmp1052 = ((panda$collections$Iterable*) statements1031)->$class->itable;
                        while ($tmp1052->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1052 = $tmp1052->next;
                        }
                        $fn1054 $tmp1053 = $tmp1052->methods[0];
                        panda$collections$Iterator* $tmp1055 = $tmp1053(((panda$collections$Iterable*) statements1031));
                        $tmp1051 = $tmp1055;
                        $tmp1050 = $tmp1051;
                        Iter$315$171049 = $tmp1050;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1050));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1051));
                        $l1056:;
                        ITable* $tmp1059 = Iter$315$171049->$class->itable;
                        while ($tmp1059->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1059 = $tmp1059->next;
                        }
                        $fn1061 $tmp1060 = $tmp1059->methods[0];
                        panda$core$Bit $tmp1062 = $tmp1060(Iter$315$171049);
                        panda$core$Bit $tmp1063 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1062);
                        bool $tmp1058 = $tmp1063.value;
                        if (!$tmp1058) goto $l1057;
                        {
                            int $tmp1066;
                            {
                                ITable* $tmp1070 = Iter$315$171049->$class->itable;
                                while ($tmp1070->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1070 = $tmp1070->next;
                                }
                                $fn1072 $tmp1071 = $tmp1070->methods[1];
                                panda$core$Object* $tmp1073 = $tmp1071(Iter$315$171049);
                                $tmp1069 = $tmp1073;
                                $tmp1068 = ((org$pandalanguage$pandac$ASTNode*) $tmp1069);
                                s1067 = $tmp1068;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1068));
                                panda$core$Panda$unref$panda$core$Object($tmp1069);
                                panda$core$String* $tmp1076 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1067), &$s1075);
                                $tmp1074 = $tmp1076;
                                panda$core$MutableString$append$panda$core$String(result1036, $tmp1074);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1074));
                            }
                            $tmp1066 = -1;
                            goto $l1064;
                            $l1064:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1067));
                            s1067 = NULL;
                            switch ($tmp1066) {
                                case -1: goto $l1077;
                            }
                            $l1077:;
                        }
                        goto $l1056;
                        $l1057:;
                    }
                    $tmp1048 = -1;
                    goto $l1046;
                    $l1046:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$315$171049));
                    Iter$315$171049 = NULL;
                    switch ($tmp1048) {
                        case -1: goto $l1078;
                    }
                    $l1078:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1079, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1036, $tmp1079);
                panda$core$String* $tmp1082 = panda$core$MutableString$finish$R$panda$core$String(result1036);
                $tmp1081 = $tmp1082;
                $tmp1080 = $tmp1081;
                $returnValue240 = $tmp1080;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1080));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1081));
                $tmp1035 = 0;
                goto $l1033;
                $l1083:;
                $tmp232 = 29;
                goto $l230;
                $l1084:;
                return $returnValue240;
            }
            $l1033:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1036));
            result1036 = NULL;
            switch ($tmp1035) {
                case 0: goto $l1083;
            }
            $l1086:;
        }
        }
        else {
        panda$core$Bit $tmp1087 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1087.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1089 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$173_9233->$data + 16));
            value1088 = *$tmp1089;
            panda$collections$ImmutableArray** $tmp1091 = ((panda$collections$ImmutableArray**) ((char*) $match$173_9233->$data + 24));
            whens1090 = *$tmp1091;
            panda$collections$ImmutableArray** $tmp1093 = ((panda$collections$ImmutableArray**) ((char*) $match$173_9233->$data + 32));
            other1092 = *$tmp1093;
            int $tmp1096;
            {
                panda$core$MutableString* $tmp1100 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1104 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1103, ((panda$core$Object*) value1088));
                $tmp1102 = $tmp1104;
                panda$core$String* $tmp1106 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1102, &$s1105);
                $tmp1101 = $tmp1106;
                panda$core$MutableString$init$panda$core$String($tmp1100, $tmp1101);
                $tmp1099 = $tmp1100;
                $tmp1098 = $tmp1099;
                result1097 = $tmp1098;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1098));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1099));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1101));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1102));
                {
                    int $tmp1109;
                    {
                        ITable* $tmp1113 = ((panda$collections$Iterable*) whens1090)->$class->itable;
                        while ($tmp1113->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1113 = $tmp1113->next;
                        }
                        $fn1115 $tmp1114 = $tmp1113->methods[0];
                        panda$collections$Iterator* $tmp1116 = $tmp1114(((panda$collections$Iterable*) whens1090));
                        $tmp1112 = $tmp1116;
                        $tmp1111 = $tmp1112;
                        Iter$322$171110 = $tmp1111;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1111));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1112));
                        $l1117:;
                        ITable* $tmp1120 = Iter$322$171110->$class->itable;
                        while ($tmp1120->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1120 = $tmp1120->next;
                        }
                        $fn1122 $tmp1121 = $tmp1120->methods[0];
                        panda$core$Bit $tmp1123 = $tmp1121(Iter$322$171110);
                        panda$core$Bit $tmp1124 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1123);
                        bool $tmp1119 = $tmp1124.value;
                        if (!$tmp1119) goto $l1118;
                        {
                            int $tmp1127;
                            {
                                ITable* $tmp1131 = Iter$322$171110->$class->itable;
                                while ($tmp1131->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1131 = $tmp1131->next;
                                }
                                $fn1133 $tmp1132 = $tmp1131->methods[1];
                                panda$core$Object* $tmp1134 = $tmp1132(Iter$322$171110);
                                $tmp1130 = $tmp1134;
                                $tmp1129 = ((org$pandalanguage$pandac$ASTNode*) $tmp1130);
                                w1128 = $tmp1129;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1129));
                                panda$core$Panda$unref$panda$core$Object($tmp1130);
                                panda$core$String* $tmp1137 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w1128), &$s1136);
                                $tmp1135 = $tmp1137;
                                panda$core$MutableString$append$panda$core$String(result1097, $tmp1135);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1135));
                            }
                            $tmp1127 = -1;
                            goto $l1125;
                            $l1125:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w1128));
                            w1128 = NULL;
                            switch ($tmp1127) {
                                case -1: goto $l1138;
                            }
                            $l1138:;
                        }
                        goto $l1117;
                        $l1118:;
                    }
                    $tmp1109 = -1;
                    goto $l1107;
                    $l1107:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$322$171110));
                    Iter$322$171110 = NULL;
                    switch ($tmp1109) {
                        case -1: goto $l1139;
                    }
                    $l1139:;
                }
                if (((panda$core$Bit) { other1092 != NULL }).value) {
                {
                    panda$core$String* $tmp1142 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) other1092), &$s1141);
                    $tmp1140 = $tmp1142;
                    panda$core$MutableString$append$panda$core$String(result1097, $tmp1140);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1140));
                }
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1143, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1097, $tmp1143);
                panda$core$String* $tmp1146 = panda$core$MutableString$finish$R$panda$core$String(result1097);
                $tmp1145 = $tmp1146;
                $tmp1144 = $tmp1145;
                $returnValue240 = $tmp1144;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1144));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1145));
                $tmp1096 = 0;
                goto $l1094;
                $l1147:;
                $tmp232 = 30;
                goto $l230;
                $l1148:;
                return $returnValue240;
            }
            $l1094:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1097));
            result1097 = NULL;
            switch ($tmp1096) {
                case 0: goto $l1147;
            }
            $l1150:;
        }
        }
        else {
        panda$core$Bit $tmp1151 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1151.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1153 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$173_9233->$data + 16));
            dc1152 = *$tmp1153;
            panda$collections$ImmutableArray** $tmp1155 = ((panda$collections$ImmutableArray**) ((char*) $match$173_9233->$data + 24));
            annotations1154 = *$tmp1155;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1157 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$173_9233->$data + 32));
            kind1156 = *$tmp1157;
            panda$core$String** $tmp1159 = ((panda$core$String**) ((char*) $match$173_9233->$data + 40));
            name1158 = *$tmp1159;
            panda$collections$ImmutableArray** $tmp1161 = ((panda$collections$ImmutableArray**) ((char*) $match$173_9233->$data + 48));
            parameters1160 = *$tmp1161;
            org$pandalanguage$pandac$ASTNode** $tmp1163 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$173_9233->$data + 56));
            returnType1162 = *$tmp1163;
            panda$collections$ImmutableArray** $tmp1165 = ((panda$collections$ImmutableArray**) ((char*) $match$173_9233->$data + 64));
            statements1164 = *$tmp1165;
            int $tmp1168;
            {
                panda$core$MutableString* $tmp1172 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1172);
                $tmp1171 = $tmp1172;
                $tmp1170 = $tmp1171;
                result1169 = $tmp1170;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1170));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1171));
                if (((panda$core$Bit) { dc1152 != NULL }).value) {
                {
                    panda$core$String* $tmp1175 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc1152), &$s1174);
                    $tmp1173 = $tmp1175;
                    panda$core$MutableString$append$panda$core$String(result1169, $tmp1173);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1173));
                }
                }
                {
                    int $tmp1178;
                    {
                        ITable* $tmp1182 = ((panda$collections$Iterable*) annotations1154)->$class->itable;
                        while ($tmp1182->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1182 = $tmp1182->next;
                        }
                        $fn1184 $tmp1183 = $tmp1182->methods[0];
                        panda$collections$Iterator* $tmp1185 = $tmp1183(((panda$collections$Iterable*) annotations1154));
                        $tmp1181 = $tmp1185;
                        $tmp1180 = $tmp1181;
                        Iter$335$171179 = $tmp1180;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1180));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1181));
                        $l1186:;
                        ITable* $tmp1189 = Iter$335$171179->$class->itable;
                        while ($tmp1189->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1189 = $tmp1189->next;
                        }
                        $fn1191 $tmp1190 = $tmp1189->methods[0];
                        panda$core$Bit $tmp1192 = $tmp1190(Iter$335$171179);
                        panda$core$Bit $tmp1193 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1192);
                        bool $tmp1188 = $tmp1193.value;
                        if (!$tmp1188) goto $l1187;
                        {
                            int $tmp1196;
                            {
                                ITable* $tmp1200 = Iter$335$171179->$class->itable;
                                while ($tmp1200->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1200 = $tmp1200->next;
                                }
                                $fn1202 $tmp1201 = $tmp1200->methods[1];
                                panda$core$Object* $tmp1203 = $tmp1201(Iter$335$171179);
                                $tmp1199 = $tmp1203;
                                $tmp1198 = ((org$pandalanguage$pandac$ASTNode*) $tmp1199);
                                a1197 = $tmp1198;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1198));
                                panda$core$Panda$unref$panda$core$Object($tmp1199);
                                panda$core$String* $tmp1206 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a1197), &$s1205);
                                $tmp1204 = $tmp1206;
                                panda$core$MutableString$append$panda$core$String(result1169, $tmp1204);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1204));
                            }
                            $tmp1196 = -1;
                            goto $l1194;
                            $l1194:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1197));
                            a1197 = NULL;
                            switch ($tmp1196) {
                                case -1: goto $l1207;
                            }
                            $l1207:;
                        }
                        goto $l1186;
                        $l1187:;
                    }
                    $tmp1178 = -1;
                    goto $l1176;
                    $l1176:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$335$171179));
                    Iter$335$171179 = NULL;
                    switch ($tmp1178) {
                        case -1: goto $l1208;
                    }
                    $l1208:;
                }
                {
                    $match$338_171209 = kind1156;
                    panda$core$Bit $tmp1210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$338_171209.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp1210.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1169, &$s1211);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1212 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$338_171209.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp1212.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1169, &$s1213);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$338_171209.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp1214.value) {
                    {
                    }
                    }
                    }
                    }
                }
                panda$core$String* $tmp1219 = panda$core$String$convert$R$panda$core$String(name1158);
                $tmp1218 = $tmp1219;
                panda$core$String* $tmp1221 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1218, &$s1220);
                $tmp1217 = $tmp1221;
                panda$core$String* $tmp1223 = panda$collections$ImmutableArray$join$R$panda$core$String(parameters1160);
                $tmp1222 = $tmp1223;
                panda$core$String* $tmp1224 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1217, $tmp1222);
                $tmp1216 = $tmp1224;
                panda$core$String* $tmp1226 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1216, &$s1225);
                $tmp1215 = $tmp1226;
                panda$core$MutableString$append$panda$core$String(result1169, $tmp1215);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1215));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1216));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1222));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1217));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1218));
                if (((panda$core$Bit) { returnType1162 != NULL }).value) {
                {
                    panda$core$String* $tmp1230 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1229, ((panda$core$Object*) returnType1162));
                    $tmp1228 = $tmp1230;
                    panda$core$String* $tmp1232 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1228, &$s1231);
                    $tmp1227 = $tmp1232;
                    panda$core$MutableString$append$panda$core$String(result1169, $tmp1227);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1227));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1228));
                }
                }
                if (((panda$core$Bit) { statements1164 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1169, &$s1233);
                    {
                        int $tmp1236;
                        {
                            ITable* $tmp1240 = ((panda$collections$Iterable*) statements1164)->$class->itable;
                            while ($tmp1240->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp1240 = $tmp1240->next;
                            }
                            $fn1242 $tmp1241 = $tmp1240->methods[0];
                            panda$collections$Iterator* $tmp1243 = $tmp1241(((panda$collections$Iterable*) statements1164));
                            $tmp1239 = $tmp1243;
                            $tmp1238 = $tmp1239;
                            Iter$349$211237 = $tmp1238;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1238));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1239));
                            $l1244:;
                            ITable* $tmp1247 = Iter$349$211237->$class->itable;
                            while ($tmp1247->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1247 = $tmp1247->next;
                            }
                            $fn1249 $tmp1248 = $tmp1247->methods[0];
                            panda$core$Bit $tmp1250 = $tmp1248(Iter$349$211237);
                            panda$core$Bit $tmp1251 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1250);
                            bool $tmp1246 = $tmp1251.value;
                            if (!$tmp1246) goto $l1245;
                            {
                                int $tmp1254;
                                {
                                    ITable* $tmp1258 = Iter$349$211237->$class->itable;
                                    while ($tmp1258->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp1258 = $tmp1258->next;
                                    }
                                    $fn1260 $tmp1259 = $tmp1258->methods[1];
                                    panda$core$Object* $tmp1261 = $tmp1259(Iter$349$211237);
                                    $tmp1257 = $tmp1261;
                                    $tmp1256 = ((org$pandalanguage$pandac$ASTNode*) $tmp1257);
                                    s1255 = $tmp1256;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1256));
                                    panda$core$Panda$unref$panda$core$Object($tmp1257);
                                    panda$core$String* $tmp1264 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1255), &$s1263);
                                    $tmp1262 = $tmp1264;
                                    panda$core$MutableString$append$panda$core$String(result1169, $tmp1262);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1262));
                                }
                                $tmp1254 = -1;
                                goto $l1252;
                                $l1252:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1255));
                                s1255 = NULL;
                                switch ($tmp1254) {
                                    case -1: goto $l1265;
                                }
                                $l1265:;
                            }
                            goto $l1244;
                            $l1245:;
                        }
                        $tmp1236 = -1;
                        goto $l1234;
                        $l1234:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$349$211237));
                        Iter$349$211237 = NULL;
                        switch ($tmp1236) {
                            case -1: goto $l1266;
                        }
                        $l1266:;
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp1267, ((panda$core$UInt8) { 125 }));
                    panda$core$MutableString$append$panda$core$Char8(result1169, $tmp1267);
                }
                }
                panda$core$String* $tmp1270 = panda$core$MutableString$finish$R$panda$core$String(result1169);
                $tmp1269 = $tmp1270;
                $tmp1268 = $tmp1269;
                $returnValue240 = $tmp1268;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1268));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1269));
                $tmp1168 = 0;
                goto $l1166;
                $l1271:;
                $tmp232 = 31;
                goto $l230;
                $l1272:;
                return $returnValue240;
            }
            $l1166:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1169));
            result1169 = NULL;
            switch ($tmp1168) {
                case 0: goto $l1271;
            }
            $l1274:;
        }
        }
        else {
        panda$core$Bit $tmp1275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1275.value) {
        {
            $tmp1276 = &$s1277;
            $returnValue240 = $tmp1276;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1276));
            $tmp232 = 32;
            goto $l230;
            $l1278:;
            return $returnValue240;
        }
        }
        else {
        panda$core$Bit $tmp1280 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1280.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1282 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$173_9233->$data + 16));
            base1281 = *$tmp1282;
            panda$core$String* $tmp1286 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) base1281), &$s1285);
            $tmp1284 = $tmp1286;
            $tmp1283 = $tmp1284;
            $returnValue240 = $tmp1283;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1283));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1284));
            $tmp232 = 33;
            goto $l230;
            $l1287:;
            return $returnValue240;
        }
        }
        else {
        panda$core$Bit $tmp1289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1289.value) {
        {
            panda$core$String** $tmp1291 = ((panda$core$String**) ((char*) $match$173_9233->$data + 16));
            name1290 = *$tmp1291;
            $tmp1292 = name1290;
            $returnValue240 = $tmp1292;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1292));
            $tmp232 = 34;
            goto $l230;
            $l1293:;
            return $returnValue240;
        }
        }
        else {
        panda$core$Bit $tmp1295 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1295.value) {
        {
            panda$core$String** $tmp1297 = ((panda$core$String**) ((char*) $match$173_9233->$data + 16));
            name1296 = *$tmp1297;
            org$pandalanguage$pandac$ASTNode** $tmp1299 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$173_9233->$data + 24));
            type1298 = *$tmp1299;
            panda$core$String* $tmp1305 = panda$core$String$convert$R$panda$core$String(name1296);
            $tmp1304 = $tmp1305;
            panda$core$String* $tmp1307 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1304, &$s1306);
            $tmp1303 = $tmp1307;
            panda$core$String* $tmp1308 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1303, ((panda$core$Object*) type1298));
            $tmp1302 = $tmp1308;
            panda$core$String* $tmp1310 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1302, &$s1309);
            $tmp1301 = $tmp1310;
            $tmp1300 = $tmp1301;
            $returnValue240 = $tmp1300;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1300));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1301));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1302));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1303));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1304));
            $tmp232 = 35;
            goto $l230;
            $l1311:;
            return $returnValue240;
        }
        }
        else {
        panda$core$Bit $tmp1313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1313.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1315 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$173_9233->$data + 16));
            kind1314 = *$tmp1315;
            org$pandalanguage$pandac$ASTNode** $tmp1317 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$173_9233->$data + 24));
            base1316 = *$tmp1317;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1324;
            $tmp1324 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp1324->value = kind1314;
            $tmp1323 = ((panda$core$Object*) $tmp1324);
            panda$core$String* $tmp1326 = (($fn1325) $tmp1323->$class->vtable[0])($tmp1323);
            $tmp1322 = $tmp1326;
            panda$core$String* $tmp1328 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1322, &$s1327);
            $tmp1321 = $tmp1328;
            panda$core$String* $tmp1329 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1321, ((panda$core$Object*) base1316));
            $tmp1320 = $tmp1329;
            panda$core$String* $tmp1331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1320, &$s1330);
            $tmp1319 = $tmp1331;
            $tmp1318 = $tmp1319;
            $returnValue240 = $tmp1318;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1318));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1319));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1320));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1321));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1322));
            panda$core$Panda$unref$panda$core$Object($tmp1323);
            $tmp232 = 36;
            goto $l230;
            $l1332:;
            return $returnValue240;
        }
        }
        else {
        panda$core$Bit $tmp1334 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1334.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1336 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$173_9233->$data + 16));
            start1335 = *$tmp1336;
            org$pandalanguage$pandac$ASTNode** $tmp1338 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$173_9233->$data + 24));
            end1337 = *$tmp1338;
            panda$core$Bit* $tmp1340 = ((panda$core$Bit*) ((char*) $match$173_9233->$data + 32));
            inclusive1339 = *$tmp1340;
            org$pandalanguage$pandac$ASTNode** $tmp1342 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$173_9233->$data + 33));
            step1341 = *$tmp1342;
            int $tmp1345;
            {
                panda$core$MutableString* $tmp1349 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1349);
                $tmp1348 = $tmp1349;
                $tmp1347 = $tmp1348;
                result1346 = $tmp1347;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1347));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1348));
                $tmp1350 = start1335;
                panda$core$Bit $tmp1354;
                if (((panda$core$Bit) { $tmp1350 != NULL }).value) goto $l1351; else goto $l1352;
                $l1351:;
                panda$core$Bit $tmp1355 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1350->$rawValue, ((panda$core$Int64) { 27 }));
                $tmp1354 = $tmp1355;
                goto $l1353;
                $l1352:;
                $tmp1354 = ((panda$core$Bit) { true });
                goto $l1353;
                $l1353:;
                if ($tmp1354.value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result1346, ((panda$core$Object*) start1335));
                }
                }
                if (inclusive1339.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1346, &$s1356);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(result1346, &$s1357);
                }
                }
                $tmp1358 = end1337;
                panda$core$Bit $tmp1362;
                if (((panda$core$Bit) { $tmp1358 != NULL }).value) goto $l1359; else goto $l1360;
                $l1359:;
                panda$core$Bit $tmp1363 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1358->$rawValue, ((panda$core$Int64) { 27 }));
                $tmp1362 = $tmp1363;
                goto $l1361;
                $l1360:;
                $tmp1362 = ((panda$core$Bit) { true });
                goto $l1361;
                $l1361:;
                if ($tmp1362.value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result1346, ((panda$core$Object*) end1337));
                }
                }
                $tmp1364 = step1341;
                panda$core$Bit $tmp1368;
                if (((panda$core$Bit) { $tmp1364 != NULL }).value) goto $l1365; else goto $l1366;
                $l1365:;
                panda$core$Bit $tmp1369 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1364->$rawValue, ((panda$core$Int64) { 27 }));
                $tmp1368 = $tmp1369;
                goto $l1367;
                $l1366:;
                $tmp1368 = ((panda$core$Bit) { true });
                goto $l1367;
                $l1367:;
                if ($tmp1368.value) {
                {
                    panda$core$String* $tmp1372 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1371, ((panda$core$Object*) step1341));
                    $tmp1370 = $tmp1372;
                    panda$core$MutableString$append$panda$core$String(result1346, $tmp1370);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1370));
                }
                }
                panda$core$String* $tmp1375 = panda$core$MutableString$finish$R$panda$core$String(result1346);
                $tmp1374 = $tmp1375;
                $tmp1373 = $tmp1374;
                $returnValue240 = $tmp1373;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1373));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1374));
                $tmp1345 = 0;
                goto $l1343;
                $l1376:;
                $tmp232 = 37;
                goto $l230;
                $l1377:;
                return $returnValue240;
            }
            $l1343:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1346));
            result1346 = NULL;
            switch ($tmp1345) {
                case 0: goto $l1376;
            }
            $l1379:;
        }
        }
        else {
        panda$core$Bit $tmp1380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1380.value) {
        {
            panda$core$Real64* $tmp1382 = ((panda$core$Real64*) ((char*) $match$173_9233->$data + 16));
            value1381 = *$tmp1382;
            panda$core$String* $tmp1385 = panda$core$Real64$convert$R$panda$core$String(value1381);
            $tmp1384 = $tmp1385;
            $tmp1383 = $tmp1384;
            $returnValue240 = $tmp1383;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1383));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1384));
            $tmp232 = 38;
            goto $l230;
            $l1386:;
            return $returnValue240;
        }
        }
        else {
        panda$core$Bit $tmp1388 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1388.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1390 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$173_9233->$data + 16));
            value1389 = *$tmp1390;
            if (((panda$core$Bit) { value1389 != NULL }).value) {
            {
                panda$core$String* $tmp1395 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1394, ((panda$core$Object*) value1389));
                $tmp1393 = $tmp1395;
                panda$core$String* $tmp1397 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1393, &$s1396);
                $tmp1392 = $tmp1397;
                $tmp1391 = $tmp1392;
                $returnValue240 = $tmp1391;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1391));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1392));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1393));
                $tmp232 = 39;
                goto $l230;
                $l1398:;
                return $returnValue240;
            }
            }
            $tmp1400 = &$s1401;
            $returnValue240 = $tmp1400;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1400));
            $tmp232 = 40;
            goto $l230;
            $l1402:;
            return $returnValue240;
        }
        }
        else {
        panda$core$Bit $tmp1404 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1404.value) {
        {
            $tmp1405 = &$s1406;
            $returnValue240 = $tmp1405;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1405));
            $tmp232 = 41;
            goto $l230;
            $l1407:;
            return $returnValue240;
        }
        }
        else {
        panda$core$Bit $tmp1409 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1409.value) {
        {
            panda$core$String** $tmp1411 = ((panda$core$String**) ((char*) $match$173_9233->$data + 16));
            str1410 = *$tmp1411;
            $tmp1412 = str1410;
            $returnValue240 = $tmp1412;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1412));
            $tmp232 = 42;
            goto $l230;
            $l1413:;
            return $returnValue240;
        }
        }
        else {
        panda$core$Bit $tmp1415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1415.value) {
        {
            $tmp1416 = &$s1417;
            $returnValue240 = $tmp1416;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1416));
            $tmp232 = 43;
            goto $l230;
            $l1418:;
            return $returnValue240;
        }
        }
        else {
        panda$core$Bit $tmp1420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1420.value) {
        {
            panda$core$String** $tmp1422 = ((panda$core$String**) ((char*) $match$173_9233->$data + 16));
            name1421 = *$tmp1422;
            $tmp1423 = name1421;
            $returnValue240 = $tmp1423;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1423));
            $tmp232 = 44;
            goto $l230;
            $l1424:;
            return $returnValue240;
        }
        }
        else {
        panda$core$Bit $tmp1426 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp1426.value) {
        {
            panda$core$String** $tmp1428 = ((panda$core$String**) ((char*) $match$173_9233->$data + 16));
            name1427 = *$tmp1428;
            org$pandalanguage$pandac$ASTNode** $tmp1430 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$173_9233->$data + 24));
            type1429 = *$tmp1430;
            if (((panda$core$Bit) { type1429 != NULL }).value) {
            {
                panda$core$String* $tmp1436 = panda$core$String$convert$R$panda$core$String(name1427);
                $tmp1435 = $tmp1436;
                panda$core$String* $tmp1438 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1435, &$s1437);
                $tmp1434 = $tmp1438;
                panda$core$String* $tmp1439 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1434, ((panda$core$Object*) type1429));
                $tmp1433 = $tmp1439;
                panda$core$String* $tmp1441 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1433, &$s1440);
                $tmp1432 = $tmp1441;
                $tmp1431 = $tmp1432;
                $returnValue240 = $tmp1431;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1431));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1432));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1433));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1434));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1435));
                $tmp232 = 45;
                goto $l230;
                $l1442:;
                return $returnValue240;
            }
            }
            $tmp1444 = name1427;
            $returnValue240 = $tmp1444;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1444));
            $tmp232 = 46;
            goto $l230;
            $l1445:;
            return $returnValue240;
        }
        }
        else {
        panda$core$Bit $tmp1447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1447.value) {
        {
            panda$core$String** $tmp1449 = ((panda$core$String**) ((char*) $match$173_9233->$data + 16));
            name1448 = *$tmp1449;
            $tmp1450 = name1448;
            $returnValue240 = $tmp1450;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1450));
            $tmp232 = 47;
            goto $l230;
            $l1451:;
            return $returnValue240;
        }
        }
        else {
        panda$core$Bit $tmp1453 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1453.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp1455 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$173_9233->$data + 16));
            kind1454 = *$tmp1455;
            panda$collections$ImmutableArray** $tmp1457 = ((panda$collections$ImmutableArray**) ((char*) $match$173_9233->$data + 24));
            decls1456 = *$tmp1457;
            int $tmp1460;
            {
                panda$core$MutableString* $tmp1464 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1464);
                $tmp1463 = $tmp1464;
                $tmp1462 = $tmp1463;
                result1461 = $tmp1462;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1462));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1463));
                {
                    $match$407_171465 = kind1454;
                    panda$core$Bit $tmp1466 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$407_171465.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp1466.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1461, &$s1467);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$407_171465.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp1468.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1461, &$s1469);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1470 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$407_171465.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp1470.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1461, &$s1471);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1472 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$407_171465.$rawValue, ((panda$core$Int64) { 3 }));
                    if ($tmp1472.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1461, &$s1473);
                    }
                    }
                    }
                    }
                    }
                }
                panda$core$String* $tmp1475 = panda$collections$ImmutableArray$join$R$panda$core$String(decls1456);
                $tmp1474 = $tmp1475;
                panda$core$MutableString$append$panda$core$String(result1461, $tmp1474);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1474));
                panda$core$String* $tmp1478 = panda$core$MutableString$finish$R$panda$core$String(result1461);
                $tmp1477 = $tmp1478;
                $tmp1476 = $tmp1477;
                $returnValue240 = $tmp1476;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1476));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1477));
                $tmp1460 = 0;
                goto $l1458;
                $l1479:;
                $tmp232 = 48;
                goto $l230;
                $l1480:;
                return $returnValue240;
            }
            $l1458:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1461));
            result1461 = NULL;
            switch ($tmp1460) {
                case 0: goto $l1479;
            }
            $l1482:;
        }
        }
        else {
        panda$core$Bit $tmp1483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp1483.value) {
        {
            panda$collections$ImmutableArray** $tmp1485 = ((panda$collections$ImmutableArray**) ((char*) $match$173_9233->$data + 16));
            tests1484 = *$tmp1485;
            panda$collections$ImmutableArray** $tmp1487 = ((panda$collections$ImmutableArray**) ((char*) $match$173_9233->$data + 24));
            statements1486 = *$tmp1487;
            int $tmp1490;
            {
                panda$core$MutableString* $tmp1494 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1494, &$s1495);
                $tmp1493 = $tmp1494;
                $tmp1492 = $tmp1493;
                result1491 = $tmp1492;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1492));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1493));
                $tmp1497 = &$s1498;
                separator1496 = $tmp1497;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1497));
                {
                    int $tmp1501;
                    {
                        ITable* $tmp1505 = ((panda$collections$Iterable*) tests1484)->$class->itable;
                        while ($tmp1505->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1505 = $tmp1505->next;
                        }
                        $fn1507 $tmp1506 = $tmp1505->methods[0];
                        panda$collections$Iterator* $tmp1508 = $tmp1506(((panda$collections$Iterable*) tests1484));
                        $tmp1504 = $tmp1508;
                        $tmp1503 = $tmp1504;
                        Iter$418$171502 = $tmp1503;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1503));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1504));
                        $l1509:;
                        ITable* $tmp1512 = Iter$418$171502->$class->itable;
                        while ($tmp1512->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1512 = $tmp1512->next;
                        }
                        $fn1514 $tmp1513 = $tmp1512->methods[0];
                        panda$core$Bit $tmp1515 = $tmp1513(Iter$418$171502);
                        panda$core$Bit $tmp1516 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1515);
                        bool $tmp1511 = $tmp1516.value;
                        if (!$tmp1511) goto $l1510;
                        {
                            int $tmp1519;
                            {
                                ITable* $tmp1523 = Iter$418$171502->$class->itable;
                                while ($tmp1523->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1523 = $tmp1523->next;
                                }
                                $fn1525 $tmp1524 = $tmp1523->methods[1];
                                panda$core$Object* $tmp1526 = $tmp1524(Iter$418$171502);
                                $tmp1522 = $tmp1526;
                                $tmp1521 = ((org$pandalanguage$pandac$ASTNode*) $tmp1522);
                                t1520 = $tmp1521;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1521));
                                panda$core$Panda$unref$panda$core$Object($tmp1522);
                                panda$core$String* $tmp1531 = panda$core$String$convert$R$panda$core$String(separator1496);
                                $tmp1530 = $tmp1531;
                                panda$core$String* $tmp1533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1530, &$s1532);
                                $tmp1529 = $tmp1533;
                                panda$core$String* $tmp1534 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1529, ((panda$core$Object*) t1520));
                                $tmp1528 = $tmp1534;
                                panda$core$String* $tmp1536 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1528, &$s1535);
                                $tmp1527 = $tmp1536;
                                panda$core$MutableString$append$panda$core$String(result1491, $tmp1527);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1527));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1528));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1529));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1530));
                            }
                            $tmp1519 = -1;
                            goto $l1517;
                            $l1517:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1520));
                            t1520 = NULL;
                            switch ($tmp1519) {
                                case -1: goto $l1537;
                            }
                            $l1537:;
                        }
                        goto $l1509;
                        $l1510:;
                    }
                    $tmp1501 = -1;
                    goto $l1499;
                    $l1499:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$418$171502));
                    Iter$418$171502 = NULL;
                    switch ($tmp1501) {
                        case -1: goto $l1538;
                    }
                    $l1538:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1539, ((panda$core$UInt8) { 58 }));
                panda$core$MutableString$append$panda$core$Char8(result1491, $tmp1539);
                {
                    int $tmp1542;
                    {
                        ITable* $tmp1546 = ((panda$collections$Iterable*) statements1486)->$class->itable;
                        while ($tmp1546->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1546 = $tmp1546->next;
                        }
                        $fn1548 $tmp1547 = $tmp1546->methods[0];
                        panda$collections$Iterator* $tmp1549 = $tmp1547(((panda$collections$Iterable*) statements1486));
                        $tmp1545 = $tmp1549;
                        $tmp1544 = $tmp1545;
                        Iter$422$171543 = $tmp1544;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1544));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1545));
                        $l1550:;
                        ITable* $tmp1553 = Iter$422$171543->$class->itable;
                        while ($tmp1553->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1553 = $tmp1553->next;
                        }
                        $fn1555 $tmp1554 = $tmp1553->methods[0];
                        panda$core$Bit $tmp1556 = $tmp1554(Iter$422$171543);
                        panda$core$Bit $tmp1557 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1556);
                        bool $tmp1552 = $tmp1557.value;
                        if (!$tmp1552) goto $l1551;
                        {
                            int $tmp1560;
                            {
                                ITable* $tmp1564 = Iter$422$171543->$class->itable;
                                while ($tmp1564->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1564 = $tmp1564->next;
                                }
                                $fn1566 $tmp1565 = $tmp1564->methods[1];
                                panda$core$Object* $tmp1567 = $tmp1565(Iter$422$171543);
                                $tmp1563 = $tmp1567;
                                $tmp1562 = ((org$pandalanguage$pandac$ASTNode*) $tmp1563);
                                s1561 = $tmp1562;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1562));
                                panda$core$Panda$unref$panda$core$Object($tmp1563);
                                panda$core$String* $tmp1570 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1569, ((panda$core$Object*) s1561));
                                $tmp1568 = $tmp1570;
                                panda$core$MutableString$append$panda$core$String(result1491, $tmp1568);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1568));
                            }
                            $tmp1560 = -1;
                            goto $l1558;
                            $l1558:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1561));
                            s1561 = NULL;
                            switch ($tmp1560) {
                                case -1: goto $l1571;
                            }
                            $l1571:;
                        }
                        goto $l1550;
                        $l1551:;
                    }
                    $tmp1542 = -1;
                    goto $l1540;
                    $l1540:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$422$171543));
                    Iter$422$171543 = NULL;
                    switch ($tmp1542) {
                        case -1: goto $l1572;
                    }
                    $l1572:;
                }
                panda$core$String* $tmp1575 = panda$core$MutableString$finish$R$panda$core$String(result1491);
                $tmp1574 = $tmp1575;
                $tmp1573 = $tmp1574;
                $returnValue240 = $tmp1573;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1573));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1574));
                $tmp1490 = 0;
                goto $l1488;
                $l1576:;
                $tmp232 = 49;
                goto $l230;
                $l1577:;
                return $returnValue240;
            }
            $l1488:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1491));
            result1491 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1496));
            separator1496 = NULL;
            switch ($tmp1490) {
                case 0: goto $l1576;
            }
            $l1579:;
        }
        }
        else {
        panda$core$Bit $tmp1580 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$173_9233->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp1580.value) {
        {
            panda$core$String** $tmp1582 = ((panda$core$String**) ((char*) $match$173_9233->$data + 16));
            label1581 = *$tmp1582;
            org$pandalanguage$pandac$ASTNode** $tmp1584 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$173_9233->$data + 24));
            test1583 = *$tmp1584;
            panda$collections$ImmutableArray** $tmp1586 = ((panda$collections$ImmutableArray**) ((char*) $match$173_9233->$data + 32));
            statements1585 = *$tmp1586;
            int $tmp1589;
            {
                panda$core$MutableString* $tmp1593 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1593);
                $tmp1592 = $tmp1593;
                $tmp1591 = $tmp1592;
                result1590 = $tmp1591;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1591));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1592));
                if (((panda$core$Bit) { label1581 != NULL }).value) {
                {
                    panda$core$String* $tmp1596 = panda$core$String$convert$R$panda$core$String(label1581);
                    $tmp1595 = $tmp1596;
                    panda$core$String* $tmp1598 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1595, &$s1597);
                    $tmp1594 = $tmp1598;
                    panda$core$MutableString$append$panda$core$String(result1590, $tmp1594);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1594));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1595));
                }
                }
                panda$core$String* $tmp1602 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1601, ((panda$core$Object*) test1583));
                $tmp1600 = $tmp1602;
                panda$core$String* $tmp1604 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1600, &$s1603);
                $tmp1599 = $tmp1604;
                panda$core$MutableString$append$panda$core$String(result1590, $tmp1599);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1599));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1600));
                {
                    int $tmp1607;
                    {
                        ITable* $tmp1611 = ((panda$collections$Iterable*) statements1585)->$class->itable;
                        while ($tmp1611->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1611 = $tmp1611->next;
                        }
                        $fn1613 $tmp1612 = $tmp1611->methods[0];
                        panda$collections$Iterator* $tmp1614 = $tmp1612(((panda$collections$Iterable*) statements1585));
                        $tmp1610 = $tmp1614;
                        $tmp1609 = $tmp1610;
                        Iter$432$171608 = $tmp1609;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1609));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1610));
                        $l1615:;
                        ITable* $tmp1618 = Iter$432$171608->$class->itable;
                        while ($tmp1618->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1618 = $tmp1618->next;
                        }
                        $fn1620 $tmp1619 = $tmp1618->methods[0];
                        panda$core$Bit $tmp1621 = $tmp1619(Iter$432$171608);
                        panda$core$Bit $tmp1622 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1621);
                        bool $tmp1617 = $tmp1622.value;
                        if (!$tmp1617) goto $l1616;
                        {
                            int $tmp1625;
                            {
                                ITable* $tmp1629 = Iter$432$171608->$class->itable;
                                while ($tmp1629->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1629 = $tmp1629->next;
                                }
                                $fn1631 $tmp1630 = $tmp1629->methods[1];
                                panda$core$Object* $tmp1632 = $tmp1630(Iter$432$171608);
                                $tmp1628 = $tmp1632;
                                $tmp1627 = ((org$pandalanguage$pandac$ASTNode*) $tmp1628);
                                s1626 = $tmp1627;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1627));
                                panda$core$Panda$unref$panda$core$Object($tmp1628);
                                panda$core$String* $tmp1635 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1626), &$s1634);
                                $tmp1633 = $tmp1635;
                                panda$core$MutableString$append$panda$core$String(result1590, $tmp1633);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1633));
                            }
                            $tmp1625 = -1;
                            goto $l1623;
                            $l1623:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1626));
                            s1626 = NULL;
                            switch ($tmp1625) {
                                case -1: goto $l1636;
                            }
                            $l1636:;
                        }
                        goto $l1615;
                        $l1616:;
                    }
                    $tmp1607 = -1;
                    goto $l1605;
                    $l1605:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$432$171608));
                    Iter$432$171608 = NULL;
                    switch ($tmp1607) {
                        case -1: goto $l1637;
                    }
                    $l1637:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1638, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1590, $tmp1638);
                panda$core$String* $tmp1641 = panda$core$MutableString$finish$R$panda$core$String(result1590);
                $tmp1640 = $tmp1641;
                $tmp1639 = $tmp1640;
                $returnValue240 = $tmp1639;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1639));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1640));
                $tmp1589 = 0;
                goto $l1587;
                $l1642:;
                $tmp232 = 50;
                goto $l230;
                $l1643:;
                return $returnValue240;
            }
            $l1587:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1590));
            result1590 = NULL;
            switch ($tmp1589) {
                case 0: goto $l1642;
            }
            $l1645:;
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
    $tmp232 = -1;
    goto $l230;
    $l230:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp234));
    switch ($tmp232) {
        case 30: goto $l1148;
        case 42: goto $l1413;
        case 20: goto $l738;
        case 4: goto $l295;
        case 24: goto $l936;
        case 9: goto $l400;
        case 38: goto $l1386;
        case 37: goto $l1377;
        case 23: goto $l915;
        case 16: goto $l628;
        case 7: goto $l336;
        case 0: goto $l252;
        case 6: goto $l328;
        case 17: goto $l647;
        case 41: goto $l1407;
        case 26: goto $l1008;
        case 43: goto $l1418;
        case 44: goto $l1424;
        case 49: goto $l1577;
        case 11: goto $l425;
        case 48: goto $l1480;
        case 5: goto $l300;
        case 10: goto $l404;
        case -1: goto $l1646;
        case 50: goto $l1643;
        case 33: goto $l1287;
        case 18: goto $l653;
        case 25: goto $l942;
        case 35: goto $l1311;
        case 31: goto $l1272;
        case 32: goto $l1278;
        case 45: goto $l1442;
        case 28: goto $l1026;
        case 27: goto $l1017;
        case 19: goto $l718;
        case 34: goto $l1293;
        case 12: goto $l460;
        case 2: goto $l269;
        case 40: goto $l1402;
        case 21: goto $l794;
        case 1: goto $l255;
        case 8: goto $l387;
        case 47: goto $l1451;
        case 46: goto $l1445;
        case 13: goto $l489;
        case 14: goto $l611;
        case 39: goto $l1398;
        case 3: goto $l283;
        case 15: goto $l624;
        case 29: goto $l1084;
        case 22: goto $l844;
        case 36: goto $l1332;
    }
    $l1646:;
}
void org$pandalanguage$pandac$ASTNode$cleanup(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$5_11653 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1654;
    org$pandalanguage$pandac$Position _f01656;
    panda$core$String* _f11658 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21660 = NULL;
    org$pandalanguage$pandac$Position _f01663;
    org$pandalanguage$pandac$ASTNode* _f11665 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21667 = NULL;
    org$pandalanguage$pandac$Position _f01670;
    org$pandalanguage$pandac$ASTNode* _f11672 = NULL;
    org$pandalanguage$pandac$Position _f01675;
    org$pandalanguage$pandac$Position _f01678;
    org$pandalanguage$pandac$ASTNode* _f11680 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind _f21682;
    org$pandalanguage$pandac$ASTNode* _f31684 = NULL;
    org$pandalanguage$pandac$Position _f01687;
    panda$core$Bit _f11689;
    org$pandalanguage$pandac$Position _f01692;
    panda$collections$ImmutableArray* _f11694 = NULL;
    org$pandalanguage$pandac$Position _f01697;
    panda$core$String* _f11699 = NULL;
    org$pandalanguage$pandac$Position _f01702;
    org$pandalanguage$pandac$ASTNode* _f11704 = NULL;
    panda$collections$ImmutableArray* _f21706 = NULL;
    org$pandalanguage$pandac$Position _f01709;
    org$pandalanguage$pandac$ASTNode* _f11711 = NULL;
    panda$core$String* _f21713 = NULL;
    panda$collections$ImmutableArray* _f31715 = NULL;
    org$pandalanguage$pandac$Position _f01718;
    org$pandalanguage$pandac$ASTNode* _f11720 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* _f21722 = NULL;
    panda$core$Int64 _f31724;
    org$pandalanguage$pandac$Position _f01727;
    org$pandalanguage$pandac$ASTNode* _f11729 = NULL;
    panda$collections$ImmutableArray* _f21731 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind _f31733;
    panda$core$String* _f41735 = NULL;
    panda$collections$ImmutableArray* _f51737 = NULL;
    panda$collections$ImmutableArray* _f61739 = NULL;
    panda$collections$ImmutableArray* _f71741 = NULL;
    org$pandalanguage$pandac$Position _f01744;
    panda$core$String* _f11746 = NULL;
    org$pandalanguage$pandac$Position _f01749;
    org$pandalanguage$pandac$ASTNode* _f11751 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21753 = NULL;
    org$pandalanguage$pandac$Position _f01756;
    panda$core$String* _f11758 = NULL;
    panda$collections$ImmutableArray* _f21760 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31762 = NULL;
    org$pandalanguage$pandac$Position _f01765;
    org$pandalanguage$pandac$ASTNode* _f11767 = NULL;
    panda$core$String* _f21769 = NULL;
    org$pandalanguage$pandac$Position _f01772;
    org$pandalanguage$pandac$ASTNode* _f11774 = NULL;
    panda$collections$ImmutableArray* _f21776 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31778 = NULL;
    panda$collections$ImmutableArray* _f01781 = NULL;
    org$pandalanguage$pandac$Position _f01784;
    panda$core$String* _f11786 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21788 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31790 = NULL;
    panda$collections$ImmutableArray* _f41792 = NULL;
    org$pandalanguage$pandac$Position _f01795;
    panda$core$String* _f11797 = NULL;
    panda$collections$ImmutableArray* _f21799 = NULL;
    org$pandalanguage$pandac$Position _f01802;
    panda$core$String* _f11804 = NULL;
    org$pandalanguage$pandac$Position _f01807;
    org$pandalanguage$pandac$ASTNode* _f11809 = NULL;
    panda$collections$ImmutableArray* _f21811 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31813 = NULL;
    org$pandalanguage$pandac$Position _f01816;
    panda$core$UInt64 _f11818;
    org$pandalanguage$pandac$IRNode* _f01821 = NULL;
    org$pandalanguage$pandac$Position _f01824;
    panda$core$String* _f11826 = NULL;
    panda$collections$ImmutableArray* _f21828 = NULL;
    org$pandalanguage$pandac$Position _f01831;
    org$pandalanguage$pandac$ASTNode* _f11833 = NULL;
    panda$collections$ImmutableArray* _f21835 = NULL;
    panda$collections$ImmutableArray* _f31837 = NULL;
    org$pandalanguage$pandac$Position _f01840;
    org$pandalanguage$pandac$ASTNode* _f11842 = NULL;
    panda$collections$ImmutableArray* _f21844 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind _f31846;
    panda$core$String* _f41848 = NULL;
    panda$collections$ImmutableArray* _f51850 = NULL;
    org$pandalanguage$pandac$ASTNode* _f61852 = NULL;
    panda$collections$ImmutableArray* _f71854 = NULL;
    org$pandalanguage$pandac$Position _f01857;
    org$pandalanguage$pandac$Position _f01860;
    org$pandalanguage$pandac$ASTNode* _f11862 = NULL;
    org$pandalanguage$pandac$Position _f01865;
    panda$core$String* _f11867 = NULL;
    org$pandalanguage$pandac$Position _f01870;
    panda$core$String* _f11872 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21874 = NULL;
    org$pandalanguage$pandac$Position _f01877;
    org$pandalanguage$pandac$parser$Token$Kind _f11879;
    org$pandalanguage$pandac$ASTNode* _f21881 = NULL;
    org$pandalanguage$pandac$Position _f01884;
    org$pandalanguage$pandac$ASTNode* _f11886 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21888 = NULL;
    panda$core$Bit _f31890;
    org$pandalanguage$pandac$ASTNode* _f41892 = NULL;
    org$pandalanguage$pandac$Position _f01895;
    panda$core$Real64 _f11897;
    org$pandalanguage$pandac$Position _f01900;
    org$pandalanguage$pandac$ASTNode* _f11902 = NULL;
    org$pandalanguage$pandac$Position _f01905;
    org$pandalanguage$pandac$Position _f01908;
    panda$core$String* _f11910 = NULL;
    org$pandalanguage$pandac$Position _f01913;
    org$pandalanguage$pandac$Position _f01916;
    panda$core$String* _f11918 = NULL;
    org$pandalanguage$pandac$Position _f01921;
    panda$core$String* _f11923 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21925 = NULL;
    org$pandalanguage$pandac$Position _f01928;
    panda$core$String* _f11930 = NULL;
    org$pandalanguage$pandac$Position _f01933;
    org$pandalanguage$pandac$Variable$Kind _f11935;
    panda$collections$ImmutableArray* _f21937 = NULL;
    org$pandalanguage$pandac$Position _f01940;
    panda$collections$ImmutableArray* _f11942 = NULL;
    panda$collections$ImmutableArray* _f21944 = NULL;
    org$pandalanguage$pandac$Position _f01947;
    panda$core$String* _f11949 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21951 = NULL;
    panda$collections$ImmutableArray* _f31953 = NULL;
    int $tmp1649;
    {
        int $tmp1652;
        {
            $tmp1654 = self;
            $match$5_11653 = $tmp1654;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1654));
            panda$core$Bit $tmp1655 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp1655.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1657 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01656 = *$tmp1657;
                panda$core$String** $tmp1659 = ((panda$core$String**) ((char*) $match$5_11653->$data + 16));
                _f11658 = *$tmp1659;
                org$pandalanguage$pandac$ASTNode** $tmp1661 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11653->$data + 24));
                _f21660 = *$tmp1661;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11658));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21660));
            }
            }
            else {
            panda$core$Bit $tmp1662 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp1662.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1664 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01663 = *$tmp1664;
                org$pandalanguage$pandac$ASTNode** $tmp1666 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11653->$data + 16));
                _f11665 = *$tmp1666;
                org$pandalanguage$pandac$ASTNode** $tmp1668 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11653->$data + 24));
                _f21667 = *$tmp1668;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11665));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21667));
            }
            }
            else {
            panda$core$Bit $tmp1669 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1669.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1671 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01670 = *$tmp1671;
                org$pandalanguage$pandac$ASTNode** $tmp1673 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11653->$data + 16));
                _f11672 = *$tmp1673;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11672));
            }
            }
            else {
            panda$core$Bit $tmp1674 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp1674.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1676 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01675 = *$tmp1676;
            }
            }
            else {
            panda$core$Bit $tmp1677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 4 }));
            if ($tmp1677.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1679 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01678 = *$tmp1679;
                org$pandalanguage$pandac$ASTNode** $tmp1681 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11653->$data + 16));
                _f11680 = *$tmp1681;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp1683 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11653->$data + 24));
                _f21682 = *$tmp1683;
                org$pandalanguage$pandac$ASTNode** $tmp1685 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11653->$data + 32));
                _f31684 = *$tmp1685;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11680));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31684));
            }
            }
            else {
            panda$core$Bit $tmp1686 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 5 }));
            if ($tmp1686.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1688 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01687 = *$tmp1688;
                panda$core$Bit* $tmp1690 = ((panda$core$Bit*) ((char*) $match$5_11653->$data + 16));
                _f11689 = *$tmp1690;
            }
            }
            else {
            panda$core$Bit $tmp1691 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 6 }));
            if ($tmp1691.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1693 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01692 = *$tmp1693;
                panda$collections$ImmutableArray** $tmp1695 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11653->$data + 16));
                _f11694 = *$tmp1695;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11694));
            }
            }
            else {
            panda$core$Bit $tmp1696 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 7 }));
            if ($tmp1696.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1698 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01697 = *$tmp1698;
                panda$core$String** $tmp1700 = ((panda$core$String**) ((char*) $match$5_11653->$data + 16));
                _f11699 = *$tmp1700;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11699));
            }
            }
            else {
            panda$core$Bit $tmp1701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 8 }));
            if ($tmp1701.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1703 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01702 = *$tmp1703;
                org$pandalanguage$pandac$ASTNode** $tmp1705 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11653->$data + 16));
                _f11704 = *$tmp1705;
                panda$collections$ImmutableArray** $tmp1707 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11653->$data + 24));
                _f21706 = *$tmp1707;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11704));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21706));
            }
            }
            else {
            panda$core$Bit $tmp1708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 9 }));
            if ($tmp1708.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1710 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01709 = *$tmp1710;
                org$pandalanguage$pandac$ASTNode** $tmp1712 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11653->$data + 16));
                _f11711 = *$tmp1712;
                panda$core$String** $tmp1714 = ((panda$core$String**) ((char*) $match$5_11653->$data + 24));
                _f21713 = *$tmp1714;
                panda$collections$ImmutableArray** $tmp1716 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11653->$data + 32));
                _f31715 = *$tmp1716;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11711));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21713));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31715));
            }
            }
            else {
            panda$core$Bit $tmp1717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 10 }));
            if ($tmp1717.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1719 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01718 = *$tmp1719;
                org$pandalanguage$pandac$ASTNode** $tmp1721 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11653->$data + 16));
                _f11720 = *$tmp1721;
                org$pandalanguage$pandac$ChoiceEntry** $tmp1723 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_11653->$data + 24));
                _f21722 = *$tmp1723;
                panda$core$Int64* $tmp1725 = ((panda$core$Int64*) ((char*) $match$5_11653->$data + 32));
                _f31724 = *$tmp1725;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11720));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21722));
            }
            }
            else {
            panda$core$Bit $tmp1726 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp1726.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1728 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01727 = *$tmp1728;
                org$pandalanguage$pandac$ASTNode** $tmp1730 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11653->$data + 16));
                _f11729 = *$tmp1730;
                panda$collections$ImmutableArray** $tmp1732 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11653->$data + 24));
                _f21731 = *$tmp1732;
                org$pandalanguage$pandac$ClassDecl$Kind* $tmp1734 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$5_11653->$data + 32));
                _f31733 = *$tmp1734;
                panda$core$String** $tmp1736 = ((panda$core$String**) ((char*) $match$5_11653->$data + 40));
                _f41735 = *$tmp1736;
                panda$collections$ImmutableArray** $tmp1738 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11653->$data + 48));
                _f51737 = *$tmp1738;
                panda$collections$ImmutableArray** $tmp1740 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11653->$data + 56));
                _f61739 = *$tmp1740;
                panda$collections$ImmutableArray** $tmp1742 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11653->$data + 64));
                _f71741 = *$tmp1742;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11729));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21731));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41735));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f51737));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f61739));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f71741));
            }
            }
            else {
            panda$core$Bit $tmp1743 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp1743.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1745 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01744 = *$tmp1745;
                panda$core$String** $tmp1747 = ((panda$core$String**) ((char*) $match$5_11653->$data + 16));
                _f11746 = *$tmp1747;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11746));
            }
            }
            else {
            panda$core$Bit $tmp1748 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp1748.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1750 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01749 = *$tmp1750;
                org$pandalanguage$pandac$ASTNode** $tmp1752 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11653->$data + 16));
                _f11751 = *$tmp1752;
                org$pandalanguage$pandac$ASTNode** $tmp1754 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11653->$data + 24));
                _f21753 = *$tmp1754;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11751));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21753));
            }
            }
            else {
            panda$core$Bit $tmp1755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 14 }));
            if ($tmp1755.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1757 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01756 = *$tmp1757;
                panda$core$String** $tmp1759 = ((panda$core$String**) ((char*) $match$5_11653->$data + 16));
                _f11758 = *$tmp1759;
                panda$collections$ImmutableArray** $tmp1761 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11653->$data + 24));
                _f21760 = *$tmp1761;
                org$pandalanguage$pandac$ASTNode** $tmp1763 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11653->$data + 32));
                _f31762 = *$tmp1763;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11758));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21760));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31762));
            }
            }
            else {
            panda$core$Bit $tmp1764 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 15 }));
            if ($tmp1764.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1766 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01765 = *$tmp1766;
                org$pandalanguage$pandac$ASTNode** $tmp1768 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11653->$data + 16));
                _f11767 = *$tmp1768;
                panda$core$String** $tmp1770 = ((panda$core$String**) ((char*) $match$5_11653->$data + 24));
                _f21769 = *$tmp1770;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11767));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21769));
            }
            }
            else {
            panda$core$Bit $tmp1771 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 16 }));
            if ($tmp1771.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1773 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01772 = *$tmp1773;
                org$pandalanguage$pandac$ASTNode** $tmp1775 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11653->$data + 16));
                _f11774 = *$tmp1775;
                panda$collections$ImmutableArray** $tmp1777 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11653->$data + 24));
                _f21776 = *$tmp1777;
                org$pandalanguage$pandac$ASTNode** $tmp1779 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11653->$data + 32));
                _f31778 = *$tmp1779;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11774));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21776));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31778));
            }
            }
            else {
            panda$core$Bit $tmp1780 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp1780.value) {
            {
                panda$collections$ImmutableArray** $tmp1782 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11653->$data + 0));
                _f01781 = *$tmp1782;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f01781));
            }
            }
            else {
            panda$core$Bit $tmp1783 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp1783.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1785 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01784 = *$tmp1785;
                panda$core$String** $tmp1787 = ((panda$core$String**) ((char*) $match$5_11653->$data + 16));
                _f11786 = *$tmp1787;
                org$pandalanguage$pandac$ASTNode** $tmp1789 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11653->$data + 24));
                _f21788 = *$tmp1789;
                org$pandalanguage$pandac$ASTNode** $tmp1791 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11653->$data + 32));
                _f31790 = *$tmp1791;
                panda$collections$ImmutableArray** $tmp1793 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11653->$data + 40));
                _f41792 = *$tmp1793;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11786));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21788));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31790));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41792));
            }
            }
            else {
            panda$core$Bit $tmp1794 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp1794.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1796 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01795 = *$tmp1796;
                panda$core$String** $tmp1798 = ((panda$core$String**) ((char*) $match$5_11653->$data + 16));
                _f11797 = *$tmp1798;
                panda$collections$ImmutableArray** $tmp1800 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11653->$data + 24));
                _f21799 = *$tmp1800;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11797));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21799));
            }
            }
            else {
            panda$core$Bit $tmp1801 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 20 }));
            if ($tmp1801.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1803 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01802 = *$tmp1803;
                panda$core$String** $tmp1805 = ((panda$core$String**) ((char*) $match$5_11653->$data + 16));
                _f11804 = *$tmp1805;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11804));
            }
            }
            else {
            panda$core$Bit $tmp1806 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 21 }));
            if ($tmp1806.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1808 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01807 = *$tmp1808;
                org$pandalanguage$pandac$ASTNode** $tmp1810 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11653->$data + 16));
                _f11809 = *$tmp1810;
                panda$collections$ImmutableArray** $tmp1812 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11653->$data + 24));
                _f21811 = *$tmp1812;
                org$pandalanguage$pandac$ASTNode** $tmp1814 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11653->$data + 32));
                _f31813 = *$tmp1814;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11809));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21811));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31813));
            }
            }
            else {
            panda$core$Bit $tmp1815 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 22 }));
            if ($tmp1815.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1817 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01816 = *$tmp1817;
                panda$core$UInt64* $tmp1819 = ((panda$core$UInt64*) ((char*) $match$5_11653->$data + 16));
                _f11818 = *$tmp1819;
            }
            }
            else {
            panda$core$Bit $tmp1820 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 23 }));
            if ($tmp1820.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp1822 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11653->$data + 0));
                _f01821 = *$tmp1822;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f01821));
            }
            }
            else {
            panda$core$Bit $tmp1823 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 24 }));
            if ($tmp1823.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1825 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01824 = *$tmp1825;
                panda$core$String** $tmp1827 = ((panda$core$String**) ((char*) $match$5_11653->$data + 16));
                _f11826 = *$tmp1827;
                panda$collections$ImmutableArray** $tmp1829 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11653->$data + 24));
                _f21828 = *$tmp1829;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11826));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21828));
            }
            }
            else {
            panda$core$Bit $tmp1830 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 25 }));
            if ($tmp1830.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1832 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01831 = *$tmp1832;
                org$pandalanguage$pandac$ASTNode** $tmp1834 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11653->$data + 16));
                _f11833 = *$tmp1834;
                panda$collections$ImmutableArray** $tmp1836 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11653->$data + 24));
                _f21835 = *$tmp1836;
                panda$collections$ImmutableArray** $tmp1838 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11653->$data + 32));
                _f31837 = *$tmp1838;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11833));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21835));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31837));
            }
            }
            else {
            panda$core$Bit $tmp1839 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 26 }));
            if ($tmp1839.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1841 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01840 = *$tmp1841;
                org$pandalanguage$pandac$ASTNode** $tmp1843 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11653->$data + 16));
                _f11842 = *$tmp1843;
                panda$collections$ImmutableArray** $tmp1845 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11653->$data + 24));
                _f21844 = *$tmp1845;
                org$pandalanguage$pandac$MethodDecl$Kind* $tmp1847 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$5_11653->$data + 32));
                _f31846 = *$tmp1847;
                panda$core$String** $tmp1849 = ((panda$core$String**) ((char*) $match$5_11653->$data + 40));
                _f41848 = *$tmp1849;
                panda$collections$ImmutableArray** $tmp1851 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11653->$data + 48));
                _f51850 = *$tmp1851;
                org$pandalanguage$pandac$ASTNode** $tmp1853 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11653->$data + 56));
                _f61852 = *$tmp1853;
                panda$collections$ImmutableArray** $tmp1855 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11653->$data + 64));
                _f71854 = *$tmp1855;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11842));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21844));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41848));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f51850));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f61852));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f71854));
            }
            }
            else {
            panda$core$Bit $tmp1856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 27 }));
            if ($tmp1856.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1858 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01857 = *$tmp1858;
            }
            }
            else {
            panda$core$Bit $tmp1859 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 28 }));
            if ($tmp1859.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1861 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01860 = *$tmp1861;
                org$pandalanguage$pandac$ASTNode** $tmp1863 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11653->$data + 16));
                _f11862 = *$tmp1863;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11862));
            }
            }
            else {
            panda$core$Bit $tmp1864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 29 }));
            if ($tmp1864.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1866 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01865 = *$tmp1866;
                panda$core$String** $tmp1868 = ((panda$core$String**) ((char*) $match$5_11653->$data + 16));
                _f11867 = *$tmp1868;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11867));
            }
            }
            else {
            panda$core$Bit $tmp1869 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 30 }));
            if ($tmp1869.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1871 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01870 = *$tmp1871;
                panda$core$String** $tmp1873 = ((panda$core$String**) ((char*) $match$5_11653->$data + 16));
                _f11872 = *$tmp1873;
                org$pandalanguage$pandac$ASTNode** $tmp1875 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11653->$data + 24));
                _f21874 = *$tmp1875;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11872));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21874));
            }
            }
            else {
            panda$core$Bit $tmp1876 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 31 }));
            if ($tmp1876.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1878 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01877 = *$tmp1878;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp1880 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11653->$data + 16));
                _f11879 = *$tmp1880;
                org$pandalanguage$pandac$ASTNode** $tmp1882 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11653->$data + 24));
                _f21881 = *$tmp1882;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21881));
            }
            }
            else {
            panda$core$Bit $tmp1883 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 32 }));
            if ($tmp1883.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1885 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01884 = *$tmp1885;
                org$pandalanguage$pandac$ASTNode** $tmp1887 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11653->$data + 16));
                _f11886 = *$tmp1887;
                org$pandalanguage$pandac$ASTNode** $tmp1889 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11653->$data + 24));
                _f21888 = *$tmp1889;
                panda$core$Bit* $tmp1891 = ((panda$core$Bit*) ((char*) $match$5_11653->$data + 32));
                _f31890 = *$tmp1891;
                org$pandalanguage$pandac$ASTNode** $tmp1893 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11653->$data + 33));
                _f41892 = *$tmp1893;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11886));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21888));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41892));
            }
            }
            else {
            panda$core$Bit $tmp1894 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp1894.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1896 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01895 = *$tmp1896;
                panda$core$Real64* $tmp1898 = ((panda$core$Real64*) ((char*) $match$5_11653->$data + 16));
                _f11897 = *$tmp1898;
            }
            }
            else {
            panda$core$Bit $tmp1899 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp1899.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1901 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01900 = *$tmp1901;
                org$pandalanguage$pandac$ASTNode** $tmp1903 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11653->$data + 16));
                _f11902 = *$tmp1903;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11902));
            }
            }
            else {
            panda$core$Bit $tmp1904 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 35 }));
            if ($tmp1904.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1906 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01905 = *$tmp1906;
            }
            }
            else {
            panda$core$Bit $tmp1907 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 36 }));
            if ($tmp1907.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1909 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01908 = *$tmp1909;
                panda$core$String** $tmp1911 = ((panda$core$String**) ((char*) $match$5_11653->$data + 16));
                _f11910 = *$tmp1911;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11910));
            }
            }
            else {
            panda$core$Bit $tmp1912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 37 }));
            if ($tmp1912.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1914 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01913 = *$tmp1914;
            }
            }
            else {
            panda$core$Bit $tmp1915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 38 }));
            if ($tmp1915.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1917 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01916 = *$tmp1917;
                panda$core$String** $tmp1919 = ((panda$core$String**) ((char*) $match$5_11653->$data + 16));
                _f11918 = *$tmp1919;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11918));
            }
            }
            else {
            panda$core$Bit $tmp1920 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp1920.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1922 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01921 = *$tmp1922;
                panda$core$String** $tmp1924 = ((panda$core$String**) ((char*) $match$5_11653->$data + 16));
                _f11923 = *$tmp1924;
                org$pandalanguage$pandac$ASTNode** $tmp1926 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11653->$data + 24));
                _f21925 = *$tmp1926;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11923));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21925));
            }
            }
            else {
            panda$core$Bit $tmp1927 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 40 }));
            if ($tmp1927.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1929 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01928 = *$tmp1929;
                panda$core$String** $tmp1931 = ((panda$core$String**) ((char*) $match$5_11653->$data + 16));
                _f11930 = *$tmp1931;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11930));
            }
            }
            else {
            panda$core$Bit $tmp1932 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 41 }));
            if ($tmp1932.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1934 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01933 = *$tmp1934;
                org$pandalanguage$pandac$Variable$Kind* $tmp1936 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_11653->$data + 16));
                _f11935 = *$tmp1936;
                panda$collections$ImmutableArray** $tmp1938 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11653->$data + 24));
                _f21937 = *$tmp1938;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21937));
            }
            }
            else {
            panda$core$Bit $tmp1939 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 42 }));
            if ($tmp1939.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1941 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01940 = *$tmp1941;
                panda$collections$ImmutableArray** $tmp1943 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11653->$data + 16));
                _f11942 = *$tmp1943;
                panda$collections$ImmutableArray** $tmp1945 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11653->$data + 24));
                _f21944 = *$tmp1945;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11942));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21944));
            }
            }
            else {
            panda$core$Bit $tmp1946 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11653->$rawValue, ((panda$core$Int64) { 43 }));
            if ($tmp1946.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1948 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11653->$data + 0));
                _f01947 = *$tmp1948;
                panda$core$String** $tmp1950 = ((panda$core$String**) ((char*) $match$5_11653->$data + 16));
                _f11949 = *$tmp1950;
                org$pandalanguage$pandac$ASTNode** $tmp1952 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11653->$data + 24));
                _f21951 = *$tmp1952;
                panda$collections$ImmutableArray** $tmp1954 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11653->$data + 32));
                _f31953 = *$tmp1954;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11949));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21951));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31953));
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
        }
        $tmp1652 = -1;
        goto $l1650;
        $l1650:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1654));
        switch ($tmp1652) {
            case -1: goto $l1955;
        }
        $l1955:;
    }
    $tmp1649 = -1;
    goto $l1647;
    $l1647:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp1649) {
        case -1: goto $l1956;
    }
    $l1956:;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$core$String* $tmp1958;
    panda$core$String* $tmp1961;
    org$pandalanguage$pandac$ASTNode* $tmp1962;
    org$pandalanguage$pandac$ASTNode* $tmp1965;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp1957 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp1957 = p_f0;
    {
        panda$core$String** $tmp1959 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp1958 = *$tmp1959;
        panda$core$String** $tmp1960 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp1961 = p_f1;
        *$tmp1960 = $tmp1961;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1961));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1958));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp1963 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp1962 = *$tmp1963;
        org$pandalanguage$pandac$ASTNode** $tmp1964 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp1965 = p_f2;
        *$tmp1964 = $tmp1965;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1965));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1962));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp1967;
    org$pandalanguage$pandac$ASTNode* $tmp1970;
    org$pandalanguage$pandac$ASTNode* $tmp1971;
    org$pandalanguage$pandac$ASTNode* $tmp1974;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp1966 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp1966 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp1968 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp1967 = *$tmp1968;
        org$pandalanguage$pandac$ASTNode** $tmp1969 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp1970 = p_f1;
        *$tmp1969 = $tmp1970;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1970));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1967));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp1972 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp1971 = *$tmp1972;
        org$pandalanguage$pandac$ASTNode** $tmp1973 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp1974 = p_f2;
        *$tmp1973 = $tmp1974;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1974));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1971));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    org$pandalanguage$pandac$ASTNode* $tmp1976;
    org$pandalanguage$pandac$ASTNode* $tmp1979;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp1975 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp1975 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp1977 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp1976 = *$tmp1977;
        org$pandalanguage$pandac$ASTNode** $tmp1978 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp1979 = p_f1;
        *$tmp1978 = $tmp1979;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1979));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1976));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp1980 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp1980 = p_f0;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$parser$Token$Kind p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp1982;
    org$pandalanguage$pandac$ASTNode* $tmp1985;
    org$pandalanguage$pandac$ASTNode* $tmp1987;
    org$pandalanguage$pandac$ASTNode* $tmp1990;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp1981 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp1981 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp1983 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp1982 = *$tmp1983;
        org$pandalanguage$pandac$ASTNode** $tmp1984 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp1985 = p_f1;
        *$tmp1984 = $tmp1985;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1985));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1982));
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp1986 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 24));
    *$tmp1986 = p_f2;
    {
        org$pandalanguage$pandac$ASTNode** $tmp1988 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp1987 = *$tmp1988;
        org$pandalanguage$pandac$ASTNode** $tmp1989 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp1990 = p_f3;
        *$tmp1989 = $tmp1990;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1990));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1987));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Bit p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp1991 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp1991 = p_f0;
    panda$core$Bit* $tmp1992 = ((panda$core$Bit*) ((char*) self->$data + 16));
    *$tmp1992 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    panda$collections$ImmutableArray* $tmp1994;
    panda$collections$ImmutableArray* $tmp1997;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp1993 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp1993 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp1995 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp1994 = *$tmp1995;
        panda$collections$ImmutableArray** $tmp1996 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp1997 = p_f1;
        *$tmp1996 = $tmp1997;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1997));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1994));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp1999;
    panda$core$String* $tmp2002;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp1998 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp1998 = p_f0;
    {
        panda$core$String** $tmp2000 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp1999 = *$tmp2000;
        panda$core$String** $tmp2001 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2002 = p_f1;
        *$tmp2001 = $tmp2002;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2002));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1999));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2004;
    org$pandalanguage$pandac$ASTNode* $tmp2007;
    panda$collections$ImmutableArray* $tmp2008;
    panda$collections$ImmutableArray* $tmp2011;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2003 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2003 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2005 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2004 = *$tmp2005;
        org$pandalanguage$pandac$ASTNode** $tmp2006 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2007 = p_f1;
        *$tmp2006 = $tmp2007;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2007));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2004));
    }
    {
        panda$collections$ImmutableArray** $tmp2009 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2008 = *$tmp2009;
        panda$collections$ImmutableArray** $tmp2010 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2011 = p_f2;
        *$tmp2010 = $tmp2011;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2011));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2008));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2013;
    org$pandalanguage$pandac$ASTNode* $tmp2016;
    panda$core$String* $tmp2017;
    panda$core$String* $tmp2020;
    panda$collections$ImmutableArray* $tmp2021;
    panda$collections$ImmutableArray* $tmp2024;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2012 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2012 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2014 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2013 = *$tmp2014;
        org$pandalanguage$pandac$ASTNode** $tmp2015 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2016 = p_f1;
        *$tmp2015 = $tmp2016;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2016));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2013));
    }
    {
        panda$core$String** $tmp2018 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2017 = *$tmp2018;
        panda$core$String** $tmp2019 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2020 = p_f2;
        *$tmp2019 = $tmp2020;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2020));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2017));
    }
    {
        panda$collections$ImmutableArray** $tmp2022 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2021 = *$tmp2022;
        panda$collections$ImmutableArray** $tmp2023 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2024 = p_f3;
        *$tmp2023 = $tmp2024;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2024));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2021));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2026;
    org$pandalanguage$pandac$ASTNode* $tmp2029;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2030;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2033;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2025 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2025 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2027 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2026 = *$tmp2027;
        org$pandalanguage$pandac$ASTNode** $tmp2028 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2029 = p_f1;
        *$tmp2028 = $tmp2029;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2029));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2026));
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp2031 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp2030 = *$tmp2031;
        org$pandalanguage$pandac$ChoiceEntry** $tmp2032 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp2033 = p_f2;
        *$tmp2032 = $tmp2033;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2033));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2030));
    }
    panda$core$Int64* $tmp2034 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp2034 = p_f3;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ClassDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, panda$collections$ImmutableArray* p_f6, panda$collections$ImmutableArray* p_f7) {
    org$pandalanguage$pandac$ASTNode* $tmp2036;
    org$pandalanguage$pandac$ASTNode* $tmp2039;
    panda$collections$ImmutableArray* $tmp2040;
    panda$collections$ImmutableArray* $tmp2043;
    panda$core$String* $tmp2045;
    panda$core$String* $tmp2048;
    panda$collections$ImmutableArray* $tmp2049;
    panda$collections$ImmutableArray* $tmp2052;
    panda$collections$ImmutableArray* $tmp2053;
    panda$collections$ImmutableArray* $tmp2056;
    panda$collections$ImmutableArray* $tmp2057;
    panda$collections$ImmutableArray* $tmp2060;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2035 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2035 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2037 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2036 = *$tmp2037;
        org$pandalanguage$pandac$ASTNode** $tmp2038 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2039 = p_f1;
        *$tmp2038 = $tmp2039;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2039));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2036));
    }
    {
        panda$collections$ImmutableArray** $tmp2041 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2040 = *$tmp2041;
        panda$collections$ImmutableArray** $tmp2042 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2043 = p_f2;
        *$tmp2042 = $tmp2043;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2043));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2040));
    }
    org$pandalanguage$pandac$ClassDecl$Kind* $tmp2044 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) self->$data + 32));
    *$tmp2044 = p_f3;
    {
        panda$core$String** $tmp2046 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2045 = *$tmp2046;
        panda$core$String** $tmp2047 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2048 = p_f4;
        *$tmp2047 = $tmp2048;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2048));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2045));
    }
    {
        panda$collections$ImmutableArray** $tmp2050 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2049 = *$tmp2050;
        panda$collections$ImmutableArray** $tmp2051 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2052 = p_f5;
        *$tmp2051 = $tmp2052;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2052));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2049));
    }
    {
        panda$collections$ImmutableArray** $tmp2054 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2053 = *$tmp2054;
        panda$collections$ImmutableArray** $tmp2055 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2056 = p_f6;
        *$tmp2055 = $tmp2056;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2056));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2053));
    }
    {
        panda$collections$ImmutableArray** $tmp2058 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2057 = *$tmp2058;
        panda$collections$ImmutableArray** $tmp2059 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2060 = p_f7;
        *$tmp2059 = $tmp2060;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2060));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2057));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    panda$core$String* $tmp2062;
    panda$core$String* $tmp2065;
    panda$collections$ImmutableArray* $tmp2066;
    panda$collections$ImmutableArray* $tmp2069;
    org$pandalanguage$pandac$ASTNode* $tmp2070;
    org$pandalanguage$pandac$ASTNode* $tmp2073;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2061 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2061 = p_f0;
    {
        panda$core$String** $tmp2063 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2062 = *$tmp2063;
        panda$core$String** $tmp2064 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2065 = p_f1;
        *$tmp2064 = $tmp2065;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2065));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2062));
    }
    {
        panda$collections$ImmutableArray** $tmp2067 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2066 = *$tmp2067;
        panda$collections$ImmutableArray** $tmp2068 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2069 = p_f2;
        *$tmp2068 = $tmp2069;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2069));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2066));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2071 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2070 = *$tmp2071;
        org$pandalanguage$pandac$ASTNode** $tmp2072 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2073 = p_f3;
        *$tmp2072 = $tmp2073;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2073));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2070));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2075;
    org$pandalanguage$pandac$ASTNode* $tmp2078;
    panda$core$String* $tmp2079;
    panda$core$String* $tmp2082;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2074 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2074 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2076 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2075 = *$tmp2076;
        org$pandalanguage$pandac$ASTNode** $tmp2077 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2078 = p_f1;
        *$tmp2077 = $tmp2078;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2078));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2075));
    }
    {
        panda$core$String** $tmp2080 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2079 = *$tmp2080;
        panda$core$String** $tmp2081 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2082 = p_f2;
        *$tmp2081 = $tmp2082;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2082));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2079));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2084;
    org$pandalanguage$pandac$ASTNode* $tmp2087;
    panda$collections$ImmutableArray* $tmp2088;
    panda$collections$ImmutableArray* $tmp2091;
    org$pandalanguage$pandac$ASTNode* $tmp2092;
    org$pandalanguage$pandac$ASTNode* $tmp2095;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2083 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2083 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2085 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2084 = *$tmp2085;
        org$pandalanguage$pandac$ASTNode** $tmp2086 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2087 = p_f1;
        *$tmp2086 = $tmp2087;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2087));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2084));
    }
    {
        panda$collections$ImmutableArray** $tmp2089 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2088 = *$tmp2089;
        panda$collections$ImmutableArray** $tmp2090 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2091 = p_f2;
        *$tmp2090 = $tmp2091;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2091));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2088));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2093 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2092 = *$tmp2093;
        org$pandalanguage$pandac$ASTNode** $tmp2094 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2095 = p_f3;
        *$tmp2094 = $tmp2095;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2095));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2092));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, panda$collections$ImmutableArray* p_f0) {
    panda$collections$ImmutableArray* $tmp2096;
    panda$collections$ImmutableArray* $tmp2099;
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableArray** $tmp2097 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp2096 = *$tmp2097;
        panda$collections$ImmutableArray** $tmp2098 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp2099 = p_f0;
        *$tmp2098 = $tmp2099;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2099));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2096));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, org$pandalanguage$pandac$ASTNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    panda$core$String* $tmp2101;
    panda$core$String* $tmp2104;
    org$pandalanguage$pandac$ASTNode* $tmp2105;
    org$pandalanguage$pandac$ASTNode* $tmp2108;
    org$pandalanguage$pandac$ASTNode* $tmp2109;
    org$pandalanguage$pandac$ASTNode* $tmp2112;
    panda$collections$ImmutableArray* $tmp2113;
    panda$collections$ImmutableArray* $tmp2116;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2100 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2100 = p_f0;
    {
        panda$core$String** $tmp2102 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2101 = *$tmp2102;
        panda$core$String** $tmp2103 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2104 = p_f1;
        *$tmp2103 = $tmp2104;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2104));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2101));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2106 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2105 = *$tmp2106;
        org$pandalanguage$pandac$ASTNode** $tmp2107 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2108 = p_f2;
        *$tmp2107 = $tmp2108;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2108));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2105));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2110 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2109 = *$tmp2110;
        org$pandalanguage$pandac$ASTNode** $tmp2111 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2112 = p_f3;
        *$tmp2111 = $tmp2112;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2112));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2109));
    }
    {
        panda$collections$ImmutableArray** $tmp2114 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp2113 = *$tmp2114;
        panda$collections$ImmutableArray** $tmp2115 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp2116 = p_f4;
        *$tmp2115 = $tmp2116;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2116));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2113));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp2118;
    panda$core$String* $tmp2121;
    panda$collections$ImmutableArray* $tmp2122;
    panda$collections$ImmutableArray* $tmp2125;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2117 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2117 = p_f0;
    {
        panda$core$String** $tmp2119 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2118 = *$tmp2119;
        panda$core$String** $tmp2120 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2121 = p_f1;
        *$tmp2120 = $tmp2121;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2121));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2118));
    }
    {
        panda$collections$ImmutableArray** $tmp2123 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2122 = *$tmp2123;
        panda$collections$ImmutableArray** $tmp2124 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2125 = p_f2;
        *$tmp2124 = $tmp2125;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2125));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2122));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp2127;
    panda$core$String* $tmp2130;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2126 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2126 = p_f0;
    {
        panda$core$String** $tmp2128 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2127 = *$tmp2128;
        panda$core$String** $tmp2129 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2130 = p_f1;
        *$tmp2129 = $tmp2130;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2130));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2127));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2132;
    org$pandalanguage$pandac$ASTNode* $tmp2135;
    panda$collections$ImmutableArray* $tmp2136;
    panda$collections$ImmutableArray* $tmp2139;
    org$pandalanguage$pandac$ASTNode* $tmp2140;
    org$pandalanguage$pandac$ASTNode* $tmp2143;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2131 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2131 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2133 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2132 = *$tmp2133;
        org$pandalanguage$pandac$ASTNode** $tmp2134 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2135 = p_f1;
        *$tmp2134 = $tmp2135;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2135));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2132));
    }
    {
        panda$collections$ImmutableArray** $tmp2137 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2136 = *$tmp2137;
        panda$collections$ImmutableArray** $tmp2138 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2139 = p_f2;
        *$tmp2138 = $tmp2139;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2139));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2136));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2141 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2140 = *$tmp2141;
        org$pandalanguage$pandac$ASTNode** $tmp2142 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2143 = p_f3;
        *$tmp2142 = $tmp2143;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2143));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2140));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$UInt64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2144 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2144 = p_f0;
    panda$core$UInt64* $tmp2145 = ((panda$core$UInt64*) ((char*) self->$data + 16));
    *$tmp2145 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0) {
    org$pandalanguage$pandac$IRNode* $tmp2146;
    org$pandalanguage$pandac$IRNode* $tmp2149;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp2147 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp2146 = *$tmp2147;
        org$pandalanguage$pandac$IRNode** $tmp2148 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp2149 = p_f0;
        *$tmp2148 = $tmp2149;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2149));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2146));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp2151;
    panda$core$String* $tmp2154;
    panda$collections$ImmutableArray* $tmp2155;
    panda$collections$ImmutableArray* $tmp2158;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2150 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2150 = p_f0;
    {
        panda$core$String** $tmp2152 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2151 = *$tmp2152;
        panda$core$String** $tmp2153 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2154 = p_f1;
        *$tmp2153 = $tmp2154;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2154));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2151));
    }
    {
        panda$collections$ImmutableArray** $tmp2156 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2155 = *$tmp2156;
        panda$collections$ImmutableArray** $tmp2157 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2158 = p_f2;
        *$tmp2157 = $tmp2158;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2158));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2155));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2160;
    org$pandalanguage$pandac$ASTNode* $tmp2163;
    panda$collections$ImmutableArray* $tmp2164;
    panda$collections$ImmutableArray* $tmp2167;
    panda$collections$ImmutableArray* $tmp2168;
    panda$collections$ImmutableArray* $tmp2171;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2159 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2159 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2161 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2160 = *$tmp2161;
        org$pandalanguage$pandac$ASTNode** $tmp2162 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2163 = p_f1;
        *$tmp2162 = $tmp2163;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2163));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2160));
    }
    {
        panda$collections$ImmutableArray** $tmp2165 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2164 = *$tmp2165;
        panda$collections$ImmutableArray** $tmp2166 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2167 = p_f2;
        *$tmp2166 = $tmp2167;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2167));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2164));
    }
    {
        panda$collections$ImmutableArray** $tmp2169 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2168 = *$tmp2169;
        panda$collections$ImmutableArray** $tmp2170 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2171 = p_f3;
        *$tmp2170 = $tmp2171;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2171));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2168));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$MethodDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, org$pandalanguage$pandac$ASTNode* p_f6, panda$collections$ImmutableArray* p_f7) {
    org$pandalanguage$pandac$ASTNode* $tmp2173;
    org$pandalanguage$pandac$ASTNode* $tmp2176;
    panda$collections$ImmutableArray* $tmp2177;
    panda$collections$ImmutableArray* $tmp2180;
    panda$core$String* $tmp2182;
    panda$core$String* $tmp2185;
    panda$collections$ImmutableArray* $tmp2186;
    panda$collections$ImmutableArray* $tmp2189;
    org$pandalanguage$pandac$ASTNode* $tmp2190;
    org$pandalanguage$pandac$ASTNode* $tmp2193;
    panda$collections$ImmutableArray* $tmp2194;
    panda$collections$ImmutableArray* $tmp2197;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2172 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2172 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2174 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2173 = *$tmp2174;
        org$pandalanguage$pandac$ASTNode** $tmp2175 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2176 = p_f1;
        *$tmp2175 = $tmp2176;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2176));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2173));
    }
    {
        panda$collections$ImmutableArray** $tmp2178 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2177 = *$tmp2178;
        panda$collections$ImmutableArray** $tmp2179 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2180 = p_f2;
        *$tmp2179 = $tmp2180;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2180));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2177));
    }
    org$pandalanguage$pandac$MethodDecl$Kind* $tmp2181 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) self->$data + 32));
    *$tmp2181 = p_f3;
    {
        panda$core$String** $tmp2183 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2182 = *$tmp2183;
        panda$core$String** $tmp2184 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2185 = p_f4;
        *$tmp2184 = $tmp2185;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2185));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2182));
    }
    {
        panda$collections$ImmutableArray** $tmp2187 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2186 = *$tmp2187;
        panda$collections$ImmutableArray** $tmp2188 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2189 = p_f5;
        *$tmp2188 = $tmp2189;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2189));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2186));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2191 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 56));
        $tmp2190 = *$tmp2191;
        org$pandalanguage$pandac$ASTNode** $tmp2192 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 56));
        $tmp2193 = p_f6;
        *$tmp2192 = $tmp2193;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2193));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2190));
    }
    {
        panda$collections$ImmutableArray** $tmp2195 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2194 = *$tmp2195;
        panda$collections$ImmutableArray** $tmp2196 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2197 = p_f7;
        *$tmp2196 = $tmp2197;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2197));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2194));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$core$String* $tmp2199;
    panda$core$String* $tmp2202;
    org$pandalanguage$pandac$ASTNode* $tmp2203;
    org$pandalanguage$pandac$ASTNode* $tmp2206;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2198 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2198 = p_f0;
    {
        panda$core$String** $tmp2200 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2199 = *$tmp2200;
        panda$core$String** $tmp2201 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2202 = p_f1;
        *$tmp2201 = $tmp2202;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2202));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2199));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2204 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2203 = *$tmp2204;
        org$pandalanguage$pandac$ASTNode** $tmp2205 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2206 = p_f2;
        *$tmp2205 = $tmp2206;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2206));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2203));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2209;
    org$pandalanguage$pandac$ASTNode* $tmp2212;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2207 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2207 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2208 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp2208 = p_f1;
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
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$ASTNode* p_f4) {
    org$pandalanguage$pandac$ASTNode* $tmp2214;
    org$pandalanguage$pandac$ASTNode* $tmp2217;
    org$pandalanguage$pandac$ASTNode* $tmp2218;
    org$pandalanguage$pandac$ASTNode* $tmp2221;
    org$pandalanguage$pandac$ASTNode* $tmp2223;
    org$pandalanguage$pandac$ASTNode* $tmp2226;
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
    {
        org$pandalanguage$pandac$ASTNode** $tmp2219 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2218 = *$tmp2219;
        org$pandalanguage$pandac$ASTNode** $tmp2220 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2221 = p_f2;
        *$tmp2220 = $tmp2221;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2221));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2218));
    }
    panda$core$Bit* $tmp2222 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp2222 = p_f3;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2224 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        $tmp2223 = *$tmp2224;
        org$pandalanguage$pandac$ASTNode** $tmp2225 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        $tmp2226 = p_f4;
        *$tmp2225 = $tmp2226;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2226));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2223));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Real64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2227 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2227 = p_f0;
    panda$core$Real64* $tmp2228 = ((panda$core$Real64*) ((char*) self->$data + 16));
    *$tmp2228 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    org$pandalanguage$pandac$ASTNode* $tmp2230;
    org$pandalanguage$pandac$ASTNode* $tmp2233;
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
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp2236;
    panda$collections$ImmutableArray* $tmp2239;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2234 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2234 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp2235 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp2235 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp2237 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2236 = *$tmp2237;
        panda$collections$ImmutableArray** $tmp2238 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2239 = p_f2;
        *$tmp2238 = $tmp2239;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2239));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2236));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp2241;
    panda$collections$ImmutableArray* $tmp2244;
    panda$collections$ImmutableArray* $tmp2245;
    panda$collections$ImmutableArray* $tmp2248;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2240 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2240 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2242 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2241 = *$tmp2242;
        panda$collections$ImmutableArray** $tmp2243 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2244 = p_f1;
        *$tmp2243 = $tmp2244;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2244));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2241));
    }
    {
        panda$collections$ImmutableArray** $tmp2246 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2245 = *$tmp2246;
        panda$collections$ImmutableArray** $tmp2247 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2248 = p_f2;
        *$tmp2247 = $tmp2248;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2248));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2245));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    panda$core$String* $tmp2250;
    panda$core$String* $tmp2253;
    org$pandalanguage$pandac$ASTNode* $tmp2254;
    org$pandalanguage$pandac$ASTNode* $tmp2257;
    panda$collections$ImmutableArray* $tmp2258;
    panda$collections$ImmutableArray* $tmp2261;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2249 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2249 = p_f0;
    {
        panda$core$String** $tmp2251 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2250 = *$tmp2251;
        panda$core$String** $tmp2252 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2253 = p_f1;
        *$tmp2252 = $tmp2253;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2253));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2250));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2255 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2254 = *$tmp2255;
        org$pandalanguage$pandac$ASTNode** $tmp2256 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2257 = p_f2;
        *$tmp2256 = $tmp2257;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2257));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2254));
    }
    {
        panda$collections$ImmutableArray** $tmp2259 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2258 = *$tmp2259;
        panda$collections$ImmutableArray** $tmp2260 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2261 = p_f3;
        *$tmp2260 = $tmp2261;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2261));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2258));
    }
}






