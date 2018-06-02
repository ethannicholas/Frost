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

typedef org$pandalanguage$pandac$Position (*$fn149)(org$pandalanguage$pandac$IRNode*);
typedef panda$core$String* (*$fn405)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn448)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn455)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn466)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn510)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn517)(panda$collections$ListView*);
typedef panda$core$String* (*$fn552)(panda$collections$ListView*);
typedef panda$core$String* (*$fn579)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn627)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn634)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn645)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn668)(panda$collections$ListView*);
typedef panda$core$String* (*$fn679)(panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn693)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn700)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn711)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn755)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn766)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn799)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn806)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn817)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn848)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn883)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn890)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn901)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn934)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn941)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn952)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1005)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1012)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1023)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1056)(panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn1099)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1106)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1117)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1154)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1185)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1192)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1203)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1248)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1255)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1266)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1321)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1328)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1339)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1361)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1372)(panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn1392)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1399)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1410)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1469)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1556)(panda$core$Object*);
typedef panda$core$String* (*$fn1666)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1684)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1735)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1760)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1806)(panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn1840)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1847)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1858)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1882)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1889)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1900)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1948)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1955)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1966)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 32, -9211815390615587804, NULL };
static panda$core$String $s312 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 13, -8809212395465398403, NULL };
static panda$core$String $s332 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s351 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s362 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x28", 5, 17286533032, NULL };
static panda$core$String $s380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s415 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s439 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s469 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s489 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s491 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s496 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s512 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s520 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s540 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s547 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s581 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s584 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s589 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s648 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s655 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s658 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static panda$core$String $s661 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static panda$core$String $s664 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s671 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s675 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s682 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s684 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s714 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s734 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s736 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s741 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s757 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s760 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s788 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s790 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s820 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s826 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 24242135792659305, NULL };
static panda$core$String $s828 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s850 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s853 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s873 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s904 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s955 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s984 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s990 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s992 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s995 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1026 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1051 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1059 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1087 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s1089 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s1130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1174 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1176 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s1206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s1238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1274 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1311 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1342 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1349 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s1352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s1357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1364 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1368 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1379 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1413 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1443 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static panda$core$String $s1448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static panda$core$String $s1453 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static panda$core$String $s1458 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static panda$core$String $s1465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1472 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1475 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1486 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x29", 2, 14282, NULL };
static panda$core$String $s1504 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s1513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s1536 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1539 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1561 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s1583 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s1585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s1610 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1623 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s1625 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1630 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s1636 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s1645 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s1652 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s1662 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1669 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1680 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1687 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1710 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1713 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1731 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1738 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static panda$core$String $s1741 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1756 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1763 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static panda$core$String $s1766 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1793 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s1796 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s1799 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1802 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s1828 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s1831 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1865 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1868 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1903 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1932 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1936 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s1938 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1969 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1985 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 13, -8809212395465398403, NULL };
static panda$core$String $s1988 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x41\x53\x54\x4e\x6f\x64\x65\x3a\x20", 21, -8877512154781713630, NULL };
static panda$core$String $s1992 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

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
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
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
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp6));
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
    abort();
}
panda$core$String* org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$193_9317 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp318;
    panda$core$Int64 $tmp319;
    panda$core$String* name321 = NULL;
    org$pandalanguage$pandac$ASTNode* expr323 = NULL;
    panda$core$String* $returnValue325;
    panda$core$String* $tmp326;
    panda$core$String* $tmp327;
    panda$core$String* $tmp328;
    panda$core$String* $tmp329;
    panda$core$String* $tmp330;
    panda$core$String* $tmp339;
    panda$core$Int64 $tmp342;
    org$pandalanguage$pandac$ASTNode* test344 = NULL;
    org$pandalanguage$pandac$ASTNode* msg346 = NULL;
    panda$core$String* $tmp348;
    panda$core$String* $tmp349;
    panda$core$String* $tmp350;
    panda$core$String* $tmp357;
    panda$core$String* $tmp358;
    panda$core$String* $tmp359;
    panda$core$String* $tmp360;
    panda$core$String* $tmp361;
    panda$core$Int64 $tmp371;
    org$pandalanguage$pandac$ASTNode* expr373 = NULL;
    panda$core$String* $tmp375;
    panda$core$String* $tmp376;
    panda$core$String* $tmp377;
    panda$core$Int64 $tmp384;
    panda$core$String* $tmp386;
    panda$core$Int64 $tmp390;
    org$pandalanguage$pandac$ASTNode* left392 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op394;
    org$pandalanguage$pandac$ASTNode* right396 = NULL;
    panda$core$String* $tmp398;
    panda$core$String* $tmp399;
    panda$core$String* $tmp400;
    panda$core$String* $tmp401;
    panda$core$String* $tmp402;
    panda$core$String* $tmp403;
    panda$core$String* $tmp404;
    panda$core$Object* $tmp409;
    panda$core$Int64 $tmp419;
    panda$core$Bit value421;
    panda$core$String* $tmp423;
    panda$core$String* $tmp424;
    panda$core$Int64 $tmp428;
    panda$collections$ImmutableArray* statements430 = NULL;
    panda$core$MutableString* result435 = NULL;
    panda$core$MutableString* $tmp436;
    panda$core$MutableString* $tmp437;
    panda$collections$Iterator* Iter$214$17443 = NULL;
    panda$collections$Iterator* $tmp444;
    panda$collections$Iterator* $tmp445;
    org$pandalanguage$pandac$ASTNode* s461 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp462;
    panda$core$Object* $tmp463;
    panda$core$String* $tmp468;
    panda$core$Char8 $tmp473;
    panda$core$UInt8 $tmp474;
    panda$core$String* $tmp475;
    panda$core$String* $tmp476;
    panda$core$Int64 $tmp482;
    panda$core$String* label484 = NULL;
    panda$core$String* $tmp486;
    panda$core$String* $tmp487;
    panda$core$String* $tmp488;
    panda$core$String* $tmp495;
    panda$core$Int64 $tmp499;
    org$pandalanguage$pandac$ASTNode* target501 = NULL;
    panda$collections$ImmutableArray* args503 = NULL;
    panda$core$String* $tmp505;
    panda$core$String* $tmp506;
    panda$core$String* $tmp507;
    panda$core$String* $tmp508;
    panda$core$String* $tmp509;
    panda$core$String* $tmp514;
    panda$core$Int64 $tmp524;
    org$pandalanguage$pandac$ASTNode* dc526 = NULL;
    panda$core$String* name528 = NULL;
    panda$collections$ImmutableArray* fields530 = NULL;
    panda$core$MutableString* result535 = NULL;
    panda$core$MutableString* $tmp536;
    panda$core$MutableString* $tmp537;
    panda$core$String* $tmp539;
    panda$core$String* $tmp542;
    panda$core$String* $tmp543;
    panda$core$String* $tmp544;
    panda$core$String* $tmp545;
    panda$core$String* $tmp549;
    panda$core$String* $tmp557;
    panda$core$String* $tmp558;
    panda$core$Int64 $tmp564;
    org$pandalanguage$pandac$ASTNode* base566 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce568 = NULL;
    panda$core$Int64 index570;
    panda$core$String* $tmp572;
    panda$core$String* $tmp573;
    panda$core$String* $tmp574;
    panda$core$String* $tmp575;
    panda$core$String* $tmp576;
    panda$core$String* $tmp577;
    panda$core$String* $tmp578;
    panda$core$Object* $tmp586;
    panda$core$Int64 $tmp593;
    org$pandalanguage$pandac$ASTNode* dc595 = NULL;
    panda$collections$ImmutableArray* annotations597 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind599;
    panda$core$String* name601 = NULL;
    panda$collections$ImmutableArray* generics603 = NULL;
    panda$collections$ImmutableArray* supertypes605 = NULL;
    panda$collections$ImmutableArray* members607 = NULL;
    panda$core$MutableString* result612 = NULL;
    panda$core$MutableString* $tmp613;
    panda$core$MutableString* $tmp614;
    panda$core$String* $tmp616;
    panda$collections$Iterator* Iter$240$17622 = NULL;
    panda$collections$Iterator* $tmp623;
    panda$collections$Iterator* $tmp624;
    org$pandalanguage$pandac$ASTNode* a640 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp641;
    panda$core$Object* $tmp642;
    panda$core$String* $tmp647;
    org$pandalanguage$pandac$ClassDecl$Kind $match$243_17652;
    panda$core$Int64 $tmp653;
    panda$core$Int64 $tmp656;
    panda$core$Int64 $tmp659;
    panda$core$String* $tmp662;
    panda$core$String* $tmp663;
    panda$core$String* $tmp665;
    panda$core$String* $tmp673;
    panda$core$String* $tmp674;
    panda$core$String* $tmp676;
    panda$collections$Iterator* Iter$256$17688 = NULL;
    panda$collections$Iterator* $tmp689;
    panda$collections$Iterator* $tmp690;
    org$pandalanguage$pandac$ASTNode* m706 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp707;
    panda$core$Object* $tmp708;
    panda$core$String* $tmp713;
    panda$core$Char8 $tmp718;
    panda$core$UInt8 $tmp719;
    panda$core$String* $tmp720;
    panda$core$String* $tmp721;
    panda$core$Int64 $tmp727;
    panda$core$String* label729 = NULL;
    panda$core$String* $tmp731;
    panda$core$String* $tmp732;
    panda$core$String* $tmp733;
    panda$core$String* $tmp740;
    panda$core$Int64 $tmp744;
    org$pandalanguage$pandac$ASTNode* target746 = NULL;
    org$pandalanguage$pandac$ASTNode* value748 = NULL;
    panda$core$String* $tmp750;
    panda$core$String* $tmp751;
    panda$core$String* $tmp752;
    panda$core$String* $tmp753;
    panda$core$String* $tmp754;
    panda$core$String* $tmp764;
    panda$core$String* $tmp765;
    panda$core$Int64 $tmp770;
    panda$core$String* label772 = NULL;
    panda$collections$ImmutableArray* statements774 = NULL;
    org$pandalanguage$pandac$ASTNode* test776 = NULL;
    panda$core$MutableString* result781 = NULL;
    panda$core$MutableString* $tmp782;
    panda$core$MutableString* $tmp783;
    panda$core$String* $tmp785;
    panda$core$String* $tmp786;
    panda$collections$Iterator* Iter$277$17794 = NULL;
    panda$collections$Iterator* $tmp795;
    panda$collections$Iterator* $tmp796;
    org$pandalanguage$pandac$ASTNode* s812 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp813;
    panda$core$Object* $tmp814;
    panda$core$String* $tmp819;
    panda$core$String* $tmp824;
    panda$core$String* $tmp825;
    panda$core$String* $tmp830;
    panda$core$String* $tmp831;
    panda$core$Int64 $tmp837;
    org$pandalanguage$pandac$ASTNode* base839 = NULL;
    panda$core$String* field841 = NULL;
    panda$core$String* $tmp843;
    panda$core$String* $tmp844;
    panda$core$String* $tmp845;
    panda$core$String* $tmp846;
    panda$core$String* $tmp847;
    panda$core$Int64 $tmp857;
    org$pandalanguage$pandac$ASTNode* dc859 = NULL;
    panda$collections$ImmutableArray* annotations861 = NULL;
    org$pandalanguage$pandac$ASTNode* decl863 = NULL;
    panda$core$MutableString* result868 = NULL;
    panda$core$MutableString* $tmp869;
    panda$core$MutableString* $tmp870;
    panda$core$String* $tmp872;
    panda$collections$Iterator* Iter$289$17878 = NULL;
    panda$collections$Iterator* $tmp879;
    panda$collections$Iterator* $tmp880;
    org$pandalanguage$pandac$ASTNode* a896 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp897;
    panda$core$Object* $tmp898;
    panda$core$String* $tmp903;
    panda$core$String* $tmp908;
    panda$core$String* $tmp909;
    panda$core$Int64 $tmp915;
    panda$collections$ImmutableArray* entries917 = NULL;
    panda$core$MutableString* result922 = NULL;
    panda$core$MutableString* $tmp923;
    panda$core$MutableString* $tmp924;
    panda$collections$Iterator* Iter$296$17929 = NULL;
    panda$collections$Iterator* $tmp930;
    panda$collections$Iterator* $tmp931;
    org$pandalanguage$pandac$ASTNode* e947 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp948;
    panda$core$Object* $tmp949;
    panda$core$String* $tmp954;
    panda$core$String* $tmp959;
    panda$core$String* $tmp960;
    panda$core$Int64 $tmp966;
    panda$core$String* label968 = NULL;
    org$pandalanguage$pandac$ASTNode* target970 = NULL;
    org$pandalanguage$pandac$ASTNode* list972 = NULL;
    panda$collections$ImmutableArray* statements974 = NULL;
    panda$core$MutableString* result979 = NULL;
    panda$core$MutableString* $tmp980;
    panda$core$MutableString* $tmp981;
    panda$core$String* $tmp983;
    panda$core$String* $tmp986;
    panda$core$String* $tmp987;
    panda$core$String* $tmp988;
    panda$core$String* $tmp989;
    panda$collections$Iterator* Iter$306$171000 = NULL;
    panda$collections$Iterator* $tmp1001;
    panda$collections$Iterator* $tmp1002;
    org$pandalanguage$pandac$ASTNode* s1018 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1019;
    panda$core$Object* $tmp1020;
    panda$core$String* $tmp1025;
    panda$core$Char8 $tmp1030;
    panda$core$UInt8 $tmp1031;
    panda$core$String* $tmp1032;
    panda$core$String* $tmp1033;
    panda$core$Int64 $tmp1039;
    panda$core$String* name1041 = NULL;
    panda$collections$ImmutableArray* subtypes1043 = NULL;
    panda$core$String* $tmp1045;
    panda$core$String* $tmp1046;
    panda$core$String* $tmp1047;
    panda$core$String* $tmp1048;
    panda$core$String* $tmp1049;
    panda$core$String* $tmp1053;
    panda$core$Int64 $tmp1063;
    panda$core$String* name1065 = NULL;
    panda$core$String* $tmp1067;
    panda$core$Int64 $tmp1070;
    org$pandalanguage$pandac$ASTNode* test1072 = NULL;
    panda$collections$ImmutableArray* ifTrue1074 = NULL;
    org$pandalanguage$pandac$ASTNode* ifFalse1076 = NULL;
    panda$core$MutableString* result1081 = NULL;
    panda$core$MutableString* $tmp1082;
    panda$core$MutableString* $tmp1083;
    panda$core$String* $tmp1085;
    panda$core$String* $tmp1086;
    panda$collections$Iterator* Iter$317$171094 = NULL;
    panda$collections$Iterator* $tmp1095;
    panda$collections$Iterator* $tmp1096;
    org$pandalanguage$pandac$ASTNode* s1112 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1113;
    panda$core$Object* $tmp1114;
    panda$core$String* $tmp1119;
    panda$core$Char8 $tmp1124;
    panda$core$UInt8 $tmp1125;
    panda$core$String* $tmp1126;
    panda$core$String* $tmp1127;
    panda$core$String* $tmp1132;
    panda$core$String* $tmp1133;
    panda$core$Int64 $tmp1139;
    panda$core$UInt64 value1141;
    panda$core$String* $tmp1143;
    panda$core$String* $tmp1144;
    panda$core$Int64 $tmp1148;
    org$pandalanguage$pandac$IRNode* ir1150 = NULL;
    panda$core$String* $tmp1152;
    panda$core$String* $tmp1153;
    panda$core$Int64 $tmp1158;
    panda$core$String* label1160 = NULL;
    panda$collections$ImmutableArray* statements1162 = NULL;
    panda$core$MutableString* result1167 = NULL;
    panda$core$MutableString* $tmp1168;
    panda$core$MutableString* $tmp1169;
    panda$core$String* $tmp1171;
    panda$core$String* $tmp1172;
    panda$collections$Iterator* Iter$335$171180 = NULL;
    panda$collections$Iterator* $tmp1181;
    panda$collections$Iterator* $tmp1182;
    org$pandalanguage$pandac$ASTNode* s1198 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1199;
    panda$core$Object* $tmp1200;
    panda$core$String* $tmp1205;
    panda$core$Char8 $tmp1210;
    panda$core$UInt8 $tmp1211;
    panda$core$String* $tmp1212;
    panda$core$String* $tmp1213;
    panda$core$Int64 $tmp1219;
    org$pandalanguage$pandac$ASTNode* value1221 = NULL;
    panda$collections$ImmutableArray* whens1223 = NULL;
    panda$collections$ImmutableArray* other1225 = NULL;
    panda$core$MutableString* result1230 = NULL;
    panda$core$MutableString* $tmp1231;
    panda$core$MutableString* $tmp1232;
    panda$core$String* $tmp1234;
    panda$core$String* $tmp1235;
    panda$collections$Iterator* Iter$342$171243 = NULL;
    panda$collections$Iterator* $tmp1244;
    panda$collections$Iterator* $tmp1245;
    org$pandalanguage$pandac$ASTNode* w1261 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1262;
    panda$core$Object* $tmp1263;
    panda$core$String* $tmp1268;
    panda$core$String* $tmp1273;
    panda$core$Char8 $tmp1276;
    panda$core$UInt8 $tmp1277;
    panda$core$String* $tmp1278;
    panda$core$String* $tmp1279;
    panda$core$Int64 $tmp1285;
    org$pandalanguage$pandac$ASTNode* dc1287 = NULL;
    panda$collections$ImmutableArray* annotations1289 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind1291;
    panda$core$String* name1293 = NULL;
    panda$collections$ImmutableArray* generics1295 = NULL;
    panda$collections$ImmutableArray* parameters1297 = NULL;
    org$pandalanguage$pandac$ASTNode* returnType1299 = NULL;
    panda$collections$ImmutableArray* statements1301 = NULL;
    panda$core$MutableString* result1306 = NULL;
    panda$core$MutableString* $tmp1307;
    panda$core$MutableString* $tmp1308;
    panda$core$String* $tmp1310;
    panda$collections$Iterator* Iter$355$171316 = NULL;
    panda$collections$Iterator* $tmp1317;
    panda$collections$Iterator* $tmp1318;
    org$pandalanguage$pandac$ASTNode* a1334 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1335;
    panda$core$Object* $tmp1336;
    panda$core$String* $tmp1341;
    org$pandalanguage$pandac$MethodDecl$Kind $match$358_171346;
    panda$core$Int64 $tmp1347;
    panda$core$Int64 $tmp1350;
    panda$core$Int64 $tmp1353;
    panda$core$String* $tmp1355;
    panda$core$String* $tmp1356;
    panda$core$String* $tmp1358;
    panda$core$String* $tmp1366;
    panda$core$String* $tmp1367;
    panda$core$String* $tmp1369;
    panda$core$String* $tmp1377;
    panda$core$String* $tmp1378;
    panda$collections$Iterator* Iter$373$211387 = NULL;
    panda$collections$Iterator* $tmp1388;
    panda$collections$Iterator* $tmp1389;
    org$pandalanguage$pandac$ASTNode* s1405 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1406;
    panda$core$Object* $tmp1407;
    panda$core$String* $tmp1412;
    panda$core$Char8 $tmp1417;
    panda$core$UInt8 $tmp1418;
    panda$core$String* $tmp1419;
    panda$core$String* $tmp1420;
    panda$core$Int64 $tmp1426;
    org$pandalanguage$pandac$parser$Token$Kind kind1428;
    panda$collections$ImmutableArray* paramTypes1430 = NULL;
    org$pandalanguage$pandac$ASTNode* returnType1432 = NULL;
    panda$core$String* yield1437 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $match$381_171438;
    panda$core$Int64 $tmp1439;
    panda$core$String* $tmp1441;
    panda$core$String* $tmp1442;
    panda$core$Int64 $tmp1444;
    panda$core$String* $tmp1446;
    panda$core$String* $tmp1447;
    panda$core$Int64 $tmp1449;
    panda$core$String* $tmp1451;
    panda$core$String* $tmp1452;
    panda$core$Int64 $tmp1454;
    panda$core$String* $tmp1456;
    panda$core$String* $tmp1457;
    panda$core$String* partial1459 = NULL;
    panda$core$String* $tmp1460;
    panda$core$String* $tmp1461;
    panda$core$String* $tmp1462;
    panda$core$String* $tmp1463;
    panda$core$String* $tmp1464;
    panda$core$String* $tmp1466;
    panda$core$String* $tmp1477;
    panda$core$String* $tmp1478;
    panda$core$String* $tmp1479;
    panda$core$String* $tmp1480;
    panda$core$String* $tmp1481;
    panda$core$String* $tmp1491;
    panda$core$String* $tmp1492;
    panda$core$String* $tmp1493;
    panda$core$Int64 $tmp1501;
    panda$core$String* $tmp1503;
    panda$core$Int64 $tmp1507;
    org$pandalanguage$pandac$ASTNode* base1509 = NULL;
    panda$core$String* $tmp1511;
    panda$core$String* $tmp1512;
    panda$core$Int64 $tmp1517;
    panda$core$String* name1519 = NULL;
    panda$core$String* $tmp1521;
    panda$core$Int64 $tmp1524;
    panda$core$String* name1526 = NULL;
    org$pandalanguage$pandac$ASTNode* type1528 = NULL;
    panda$core$String* $tmp1530;
    panda$core$String* $tmp1531;
    panda$core$String* $tmp1532;
    panda$core$String* $tmp1533;
    panda$core$String* $tmp1534;
    panda$core$Int64 $tmp1543;
    org$pandalanguage$pandac$parser$Token$Kind kind1545;
    org$pandalanguage$pandac$ASTNode* base1547 = NULL;
    panda$core$String* $tmp1549;
    panda$core$String* $tmp1550;
    panda$core$String* $tmp1551;
    panda$core$String* $tmp1552;
    panda$core$String* $tmp1553;
    panda$core$Object* $tmp1554;
    panda$core$Int64 $tmp1565;
    org$pandalanguage$pandac$ASTNode* start1567 = NULL;
    org$pandalanguage$pandac$ASTNode* end1569 = NULL;
    panda$core$Bit inclusive1571;
    org$pandalanguage$pandac$ASTNode* step1573 = NULL;
    panda$core$MutableString* result1578 = NULL;
    panda$core$MutableString* $tmp1579;
    panda$core$MutableString* $tmp1580;
    panda$core$String* $tmp1584;
    panda$core$String* $tmp1587;
    panda$core$String* $tmp1588;
    panda$core$Int64 $tmp1594;
    panda$core$Real64 value1596;
    panda$core$String* $tmp1598;
    panda$core$String* $tmp1599;
    panda$core$Int64 $tmp1603;
    panda$core$String* src1605 = NULL;
    panda$core$String* $tmp1607;
    panda$core$String* $tmp1608;
    panda$core$String* $tmp1609;
    panda$core$Int64 $tmp1616;
    org$pandalanguage$pandac$ASTNode* value1618 = NULL;
    panda$core$String* $tmp1620;
    panda$core$String* $tmp1621;
    panda$core$String* $tmp1622;
    panda$core$String* $tmp1629;
    panda$core$Int64 $tmp1633;
    panda$core$String* $tmp1635;
    panda$core$Int64 $tmp1639;
    panda$core$String* str1641 = NULL;
    panda$core$String* $tmp1643;
    panda$core$String* $tmp1644;
    panda$core$Int64 $tmp1649;
    panda$core$String* $tmp1651;
    panda$core$Int64 $tmp1655;
    panda$collections$ImmutableArray* arguments1657 = NULL;
    panda$core$String* $tmp1659;
    panda$core$String* $tmp1660;
    panda$core$String* $tmp1661;
    panda$core$String* $tmp1663;
    panda$core$Int64 $tmp1673;
    panda$collections$ImmutableArray* parameters1675 = NULL;
    panda$core$String* $tmp1677;
    panda$core$String* $tmp1678;
    panda$core$String* $tmp1679;
    panda$core$String* $tmp1681;
    panda$core$Int64 $tmp1691;
    panda$core$String* name1693 = NULL;
    panda$core$String* $tmp1695;
    panda$core$Int64 $tmp1698;
    panda$core$String* name1700 = NULL;
    org$pandalanguage$pandac$ASTNode* type1702 = NULL;
    panda$core$String* $tmp1704;
    panda$core$String* $tmp1705;
    panda$core$String* $tmp1706;
    panda$core$String* $tmp1707;
    panda$core$String* $tmp1708;
    panda$core$String* $tmp1717;
    panda$core$Int64 $tmp1720;
    panda$collections$ImmutableArray* parameters1722 = NULL;
    org$pandalanguage$pandac$ASTNode* body1724 = NULL;
    panda$core$String* $tmp1726;
    panda$core$String* $tmp1727;
    panda$core$String* $tmp1728;
    panda$core$String* $tmp1729;
    panda$core$String* $tmp1730;
    panda$core$String* $tmp1732;
    panda$core$Int64 $tmp1745;
    panda$collections$ImmutableArray* parameters1747 = NULL;
    org$pandalanguage$pandac$ASTNode* body1749 = NULL;
    panda$core$String* $tmp1751;
    panda$core$String* $tmp1752;
    panda$core$String* $tmp1753;
    panda$core$String* $tmp1754;
    panda$core$String* $tmp1755;
    panda$core$String* $tmp1757;
    panda$core$Int64 $tmp1770;
    panda$core$String* name1772 = NULL;
    panda$core$String* $tmp1774;
    panda$core$Int64 $tmp1777;
    org$pandalanguage$pandac$Variable$Kind kind1779;
    panda$collections$ImmutableArray* decls1781 = NULL;
    panda$core$MutableString* result1786 = NULL;
    panda$core$MutableString* $tmp1787;
    panda$core$MutableString* $tmp1788;
    org$pandalanguage$pandac$Variable$Kind $match$458_171790;
    panda$core$Int64 $tmp1791;
    panda$core$Int64 $tmp1794;
    panda$core$Int64 $tmp1797;
    panda$core$Int64 $tmp1800;
    panda$core$String* $tmp1803;
    panda$core$String* $tmp1808;
    panda$core$String* $tmp1809;
    panda$core$Int64 $tmp1815;
    panda$collections$ImmutableArray* tests1817 = NULL;
    panda$collections$ImmutableArray* statements1819 = NULL;
    panda$core$MutableString* result1824 = NULL;
    panda$core$MutableString* $tmp1825;
    panda$core$MutableString* $tmp1826;
    panda$core$String* separator1829 = NULL;
    panda$core$String* $tmp1830;
    panda$collections$Iterator* Iter$469$171835 = NULL;
    panda$collections$Iterator* $tmp1836;
    panda$collections$Iterator* $tmp1837;
    org$pandalanguage$pandac$ASTNode* t1853 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1854;
    panda$core$Object* $tmp1855;
    panda$core$String* $tmp1860;
    panda$core$String* $tmp1861;
    panda$core$String* $tmp1862;
    panda$core$String* $tmp1863;
    panda$core$Char8 $tmp1872;
    panda$core$UInt8 $tmp1873;
    panda$collections$Iterator* Iter$473$171877 = NULL;
    panda$collections$Iterator* $tmp1878;
    panda$collections$Iterator* $tmp1879;
    org$pandalanguage$pandac$ASTNode* s1895 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1896;
    panda$core$Object* $tmp1897;
    panda$core$String* $tmp1902;
    panda$core$String* $tmp1907;
    panda$core$String* $tmp1908;
    panda$core$Int64 $tmp1914;
    panda$core$String* label1916 = NULL;
    org$pandalanguage$pandac$ASTNode* test1918 = NULL;
    panda$collections$ImmutableArray* statements1920 = NULL;
    panda$core$MutableString* result1925 = NULL;
    panda$core$MutableString* $tmp1926;
    panda$core$MutableString* $tmp1927;
    panda$core$String* $tmp1929;
    panda$core$String* $tmp1930;
    panda$core$String* $tmp1934;
    panda$core$String* $tmp1935;
    panda$collections$Iterator* Iter$483$171943 = NULL;
    panda$collections$Iterator* $tmp1944;
    panda$collections$Iterator* $tmp1945;
    org$pandalanguage$pandac$ASTNode* s1961 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1962;
    panda$core$Object* $tmp1963;
    panda$core$String* $tmp1968;
    panda$core$Char8 $tmp1973;
    panda$core$UInt8 $tmp1974;
    panda$core$String* $tmp1975;
    panda$core$String* $tmp1976;
    panda$core$Bit $tmp1982;
    panda$core$String* $tmp1986;
    panda$core$String* $tmp1987;
    panda$core$Object* $tmp1989;
    int $tmp316;
    {
        $tmp318 = self;
        $match$193_9317 = $tmp318;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp318));
        panda$core$Int64$init$builtin_int64(&$tmp319, 0);
        panda$core$Bit $tmp320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp319);
        if ($tmp320.value) {
        {
            panda$core$String** $tmp322 = ((panda$core$String**) ((char*) $match$193_9317->$data + 16));
            name321 = *$tmp322;
            org$pandalanguage$pandac$ASTNode** $tmp324 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 24));
            expr323 = *$tmp324;
            if (((panda$core$Bit) { expr323 != NULL }).value) {
            {
                panda$core$String* $tmp331 = panda$core$String$convert$R$panda$core$String(name321);
                $tmp330 = $tmp331;
                panda$core$String* $tmp333 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp330, &$s332);
                $tmp329 = $tmp333;
                panda$core$String* $tmp334 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp329, ((panda$core$Object*) expr323));
                $tmp328 = $tmp334;
                panda$core$String* $tmp336 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp328, &$s335);
                $tmp327 = $tmp336;
                $tmp326 = $tmp327;
                $returnValue325 = $tmp326;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp326));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp327));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp328));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp329));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp330));
                $tmp316 = 0;
                goto $l314;
                $l337:;
                return $returnValue325;
            }
            }
            $tmp339 = name321;
            $returnValue325 = $tmp339;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp339));
            $tmp316 = 1;
            goto $l314;
            $l340:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp342, 1);
        panda$core$Bit $tmp343 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp342);
        if ($tmp343.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp345 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 16));
            test344 = *$tmp345;
            org$pandalanguage$pandac$ASTNode** $tmp347 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 24));
            msg346 = *$tmp347;
            if (((panda$core$Bit) { msg346 == NULL }).value) {
            {
                panda$core$String* $tmp352 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s351, ((panda$core$Object*) test344));
                $tmp350 = $tmp352;
                panda$core$String* $tmp354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp350, &$s353);
                $tmp349 = $tmp354;
                $tmp348 = $tmp349;
                $returnValue325 = $tmp348;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp348));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp349));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp350));
                $tmp316 = 2;
                goto $l314;
                $l355:;
                return $returnValue325;
            }
            }
            panda$core$String* $tmp363 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s362, ((panda$core$Object*) test344));
            $tmp361 = $tmp363;
            panda$core$String* $tmp365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp361, &$s364);
            $tmp360 = $tmp365;
            panda$core$String* $tmp366 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp360, ((panda$core$Object*) msg346));
            $tmp359 = $tmp366;
            panda$core$String* $tmp368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp359, &$s367);
            $tmp358 = $tmp368;
            $tmp357 = $tmp358;
            $returnValue325 = $tmp357;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp357));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp358));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp359));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp360));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp361));
            $tmp316 = 3;
            goto $l314;
            $l369:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp371, 2);
        panda$core$Bit $tmp372 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp371);
        if ($tmp372.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp374 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 16));
            expr373 = *$tmp374;
            panda$core$String* $tmp379 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s378, ((panda$core$Object*) expr373));
            $tmp377 = $tmp379;
            panda$core$String* $tmp381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp377, &$s380);
            $tmp376 = $tmp381;
            $tmp375 = $tmp376;
            $returnValue325 = $tmp375;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp375));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp376));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp377));
            $tmp316 = 4;
            goto $l314;
            $l382:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp384, 3);
        panda$core$Bit $tmp385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp384);
        if ($tmp385.value) {
        {
            $tmp386 = &$s387;
            $returnValue325 = $tmp386;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp386));
            $tmp316 = 5;
            goto $l314;
            $l388:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp390, 4);
        panda$core$Bit $tmp391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp390);
        if ($tmp391.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp393 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 16));
            left392 = *$tmp393;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp395 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$193_9317->$data + 24));
            op394 = *$tmp395;
            org$pandalanguage$pandac$ASTNode** $tmp397 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 32));
            right396 = *$tmp397;
            panda$core$String* $tmp406 = (($fn405) left392->$class->vtable[0])(left392);
            $tmp404 = $tmp406;
            panda$core$String* $tmp408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp404, &$s407);
            $tmp403 = $tmp408;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp410;
            $tmp410 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp410->value = op394;
            $tmp409 = ((panda$core$Object*) $tmp410);
            panda$core$String* $tmp411 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp403, $tmp409);
            $tmp402 = $tmp411;
            panda$core$String* $tmp413 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp402, &$s412);
            $tmp401 = $tmp413;
            panda$core$String* $tmp414 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp401, ((panda$core$Object*) right396));
            $tmp400 = $tmp414;
            panda$core$String* $tmp416 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp400, &$s415);
            $tmp399 = $tmp416;
            $tmp398 = $tmp399;
            $returnValue325 = $tmp398;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp398));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp399));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp400));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp401));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp402));
            panda$core$Panda$unref$panda$core$Object($tmp409);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp403));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp404));
            $tmp316 = 6;
            goto $l314;
            $l417:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp419, 5);
        panda$core$Bit $tmp420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp419);
        if ($tmp420.value) {
        {
            panda$core$Bit* $tmp422 = ((panda$core$Bit*) ((char*) $match$193_9317->$data + 16));
            value421 = *$tmp422;
            panda$core$String* $tmp425 = panda$core$Bit$convert$R$panda$core$String(value421);
            $tmp424 = $tmp425;
            $tmp423 = $tmp424;
            $returnValue325 = $tmp423;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp423));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp424));
            $tmp316 = 7;
            goto $l314;
            $l426:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp428, 6);
        panda$core$Bit $tmp429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp428);
        if ($tmp429.value) {
        {
            panda$collections$ImmutableArray** $tmp431 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 16));
            statements430 = *$tmp431;
            int $tmp434;
            {
                panda$core$MutableString* $tmp438 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp438, &$s439);
                $tmp437 = $tmp438;
                $tmp436 = $tmp437;
                result435 = $tmp436;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp436));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp437));
                {
                    int $tmp442;
                    {
                        ITable* $tmp446 = ((panda$collections$Iterable*) statements430)->$class->itable;
                        while ($tmp446->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp446 = $tmp446->next;
                        }
                        $fn448 $tmp447 = $tmp446->methods[0];
                        panda$collections$Iterator* $tmp449 = $tmp447(((panda$collections$Iterable*) statements430));
                        $tmp445 = $tmp449;
                        $tmp444 = $tmp445;
                        Iter$214$17443 = $tmp444;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp444));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp445));
                        $l450:;
                        ITable* $tmp453 = Iter$214$17443->$class->itable;
                        while ($tmp453->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp453 = $tmp453->next;
                        }
                        $fn455 $tmp454 = $tmp453->methods[0];
                        panda$core$Bit $tmp456 = $tmp454(Iter$214$17443);
                        panda$core$Bit $tmp457 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp456);
                        bool $tmp452 = $tmp457.value;
                        if (!$tmp452) goto $l451;
                        {
                            int $tmp460;
                            {
                                ITable* $tmp464 = Iter$214$17443->$class->itable;
                                while ($tmp464->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp464 = $tmp464->next;
                                }
                                $fn466 $tmp465 = $tmp464->methods[1];
                                panda$core$Object* $tmp467 = $tmp465(Iter$214$17443);
                                $tmp463 = $tmp467;
                                $tmp462 = ((org$pandalanguage$pandac$ASTNode*) $tmp463);
                                s461 = $tmp462;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp462));
                                panda$core$Panda$unref$panda$core$Object($tmp463);
                                panda$core$String* $tmp470 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s461), &$s469);
                                $tmp468 = $tmp470;
                                panda$core$MutableString$append$panda$core$String(result435, $tmp468);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp468));
                            }
                            $tmp460 = -1;
                            goto $l458;
                            $l458:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s461));
                            s461 = NULL;
                            switch ($tmp460) {
                                case -1: goto $l471;
                            }
                            $l471:;
                        }
                        goto $l450;
                        $l451:;
                    }
                    $tmp442 = -1;
                    goto $l440;
                    $l440:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$214$17443));
                    Iter$214$17443 = NULL;
                    switch ($tmp442) {
                        case -1: goto $l472;
                    }
                    $l472:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp474, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp473, $tmp474);
                panda$core$MutableString$append$panda$core$Char8(result435, $tmp473);
                panda$core$String* $tmp477 = panda$core$MutableString$finish$R$panda$core$String(result435);
                $tmp476 = $tmp477;
                $tmp475 = $tmp476;
                $returnValue325 = $tmp475;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp475));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp476));
                $tmp434 = 0;
                goto $l432;
                $l478:;
                $tmp316 = 8;
                goto $l314;
                $l479:;
                return $returnValue325;
            }
            $l432:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result435));
            result435 = NULL;
            switch ($tmp434) {
                case 0: goto $l478;
            }
            $l481:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp482, 7);
        panda$core$Bit $tmp483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp482);
        if ($tmp483.value) {
        {
            panda$core$String** $tmp485 = ((panda$core$String**) ((char*) $match$193_9317->$data + 16));
            label484 = *$tmp485;
            if (((panda$core$Bit) { label484 != NULL }).value) {
            {
                panda$core$String* $tmp490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s489, label484);
                $tmp488 = $tmp490;
                panda$core$String* $tmp492 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp488, &$s491);
                $tmp487 = $tmp492;
                $tmp486 = $tmp487;
                $returnValue325 = $tmp486;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp486));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp487));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp488));
                $tmp316 = 9;
                goto $l314;
                $l493:;
                return $returnValue325;
            }
            }
            $tmp495 = &$s496;
            $returnValue325 = $tmp495;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp495));
            $tmp316 = 10;
            goto $l314;
            $l497:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp499, 8);
        panda$core$Bit $tmp500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp499);
        if ($tmp500.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp502 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 16));
            target501 = *$tmp502;
            panda$collections$ImmutableArray** $tmp504 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 24));
            args503 = *$tmp504;
            panda$core$String* $tmp511 = (($fn510) target501->$class->vtable[0])(target501);
            $tmp509 = $tmp511;
            panda$core$String* $tmp513 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp509, &$s512);
            $tmp508 = $tmp513;
            ITable* $tmp515 = ((panda$collections$ListView*) args503)->$class->itable;
            while ($tmp515->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp515 = $tmp515->next;
            }
            $fn517 $tmp516 = $tmp515->methods[4];
            panda$core$String* $tmp518 = $tmp516(((panda$collections$ListView*) args503));
            $tmp514 = $tmp518;
            panda$core$String* $tmp519 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp508, $tmp514);
            $tmp507 = $tmp519;
            panda$core$String* $tmp521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp507, &$s520);
            $tmp506 = $tmp521;
            $tmp505 = $tmp506;
            $returnValue325 = $tmp505;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp505));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp506));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp507));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp514));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp508));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp509));
            $tmp316 = 11;
            goto $l314;
            $l522:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp524, 9);
        panda$core$Bit $tmp525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp524);
        if ($tmp525.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp527 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 16));
            dc526 = *$tmp527;
            panda$core$String** $tmp529 = ((panda$core$String**) ((char*) $match$193_9317->$data + 24));
            name528 = *$tmp529;
            panda$collections$ImmutableArray** $tmp531 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 32));
            fields530 = *$tmp531;
            int $tmp534;
            {
                panda$core$MutableString* $tmp538 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp538);
                $tmp537 = $tmp538;
                $tmp536 = $tmp537;
                result535 = $tmp536;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp536));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp537));
                if (((panda$core$Bit) { dc526 != NULL }).value) {
                {
                    panda$core$String* $tmp541 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc526), &$s540);
                    $tmp539 = $tmp541;
                    panda$core$MutableString$append$panda$core$String(result535, $tmp539);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp539));
                }
                }
                panda$core$String* $tmp546 = panda$core$String$convert$R$panda$core$String(name528);
                $tmp545 = $tmp546;
                panda$core$String* $tmp548 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp545, &$s547);
                $tmp544 = $tmp548;
                ITable* $tmp550 = ((panda$collections$ListView*) fields530)->$class->itable;
                while ($tmp550->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp550 = $tmp550->next;
                }
                $fn552 $tmp551 = $tmp550->methods[4];
                panda$core$String* $tmp553 = $tmp551(((panda$collections$ListView*) fields530));
                $tmp549 = $tmp553;
                panda$core$String* $tmp554 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp544, $tmp549);
                $tmp543 = $tmp554;
                panda$core$String* $tmp556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp543, &$s555);
                $tmp542 = $tmp556;
                panda$core$MutableString$append$panda$core$String(result535, $tmp542);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp542));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp543));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp549));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp544));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp545));
                panda$core$String* $tmp559 = panda$core$MutableString$finish$R$panda$core$String(result535);
                $tmp558 = $tmp559;
                $tmp557 = $tmp558;
                $returnValue325 = $tmp557;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp557));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp558));
                $tmp534 = 0;
                goto $l532;
                $l560:;
                $tmp316 = 12;
                goto $l314;
                $l561:;
                return $returnValue325;
            }
            $l532:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result535));
            result535 = NULL;
            switch ($tmp534) {
                case 0: goto $l560;
            }
            $l563:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp564, 10);
        panda$core$Bit $tmp565 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp564);
        if ($tmp565.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp567 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 16));
            base566 = *$tmp567;
            org$pandalanguage$pandac$ChoiceEntry** $tmp569 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$193_9317->$data + 24));
            ce568 = *$tmp569;
            panda$core$Int64* $tmp571 = ((panda$core$Int64*) ((char*) $match$193_9317->$data + 32));
            index570 = *$tmp571;
            panda$core$String* $tmp580 = (($fn579) base566->$class->vtable[0])(base566);
            $tmp578 = $tmp580;
            panda$core$String* $tmp582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp578, &$s581);
            $tmp577 = $tmp582;
            panda$core$String* $tmp583 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp577, ((panda$core$Object*) ce568));
            $tmp576 = $tmp583;
            panda$core$String* $tmp585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp576, &$s584);
            $tmp575 = $tmp585;
            panda$core$Int64$wrapper* $tmp587;
            $tmp587 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp587->value = index570;
            $tmp586 = ((panda$core$Object*) $tmp587);
            panda$core$String* $tmp588 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp575, $tmp586);
            $tmp574 = $tmp588;
            panda$core$String* $tmp590 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp574, &$s589);
            $tmp573 = $tmp590;
            $tmp572 = $tmp573;
            $returnValue325 = $tmp572;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp572));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp573));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp574));
            panda$core$Panda$unref$panda$core$Object($tmp586);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp575));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp576));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp577));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp578));
            $tmp316 = 13;
            goto $l314;
            $l591:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp593, 11);
        panda$core$Bit $tmp594 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp593);
        if ($tmp594.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp596 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 16));
            dc595 = *$tmp596;
            panda$collections$ImmutableArray** $tmp598 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 24));
            annotations597 = *$tmp598;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp600 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$193_9317->$data + 32));
            kind599 = *$tmp600;
            panda$core$String** $tmp602 = ((panda$core$String**) ((char*) $match$193_9317->$data + 40));
            name601 = *$tmp602;
            panda$collections$ImmutableArray** $tmp604 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 48));
            generics603 = *$tmp604;
            panda$collections$ImmutableArray** $tmp606 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 56));
            supertypes605 = *$tmp606;
            panda$collections$ImmutableArray** $tmp608 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 64));
            members607 = *$tmp608;
            int $tmp611;
            {
                panda$core$MutableString* $tmp615 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp615);
                $tmp614 = $tmp615;
                $tmp613 = $tmp614;
                result612 = $tmp613;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp613));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp614));
                if (((panda$core$Bit) { dc595 != NULL }).value) {
                {
                    panda$core$String* $tmp618 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc595), &$s617);
                    $tmp616 = $tmp618;
                    panda$core$MutableString$append$panda$core$String(result612, $tmp616);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp616));
                }
                }
                {
                    int $tmp621;
                    {
                        ITable* $tmp625 = ((panda$collections$Iterable*) annotations597)->$class->itable;
                        while ($tmp625->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp625 = $tmp625->next;
                        }
                        $fn627 $tmp626 = $tmp625->methods[0];
                        panda$collections$Iterator* $tmp628 = $tmp626(((panda$collections$Iterable*) annotations597));
                        $tmp624 = $tmp628;
                        $tmp623 = $tmp624;
                        Iter$240$17622 = $tmp623;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp623));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp624));
                        $l629:;
                        ITable* $tmp632 = Iter$240$17622->$class->itable;
                        while ($tmp632->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp632 = $tmp632->next;
                        }
                        $fn634 $tmp633 = $tmp632->methods[0];
                        panda$core$Bit $tmp635 = $tmp633(Iter$240$17622);
                        panda$core$Bit $tmp636 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp635);
                        bool $tmp631 = $tmp636.value;
                        if (!$tmp631) goto $l630;
                        {
                            int $tmp639;
                            {
                                ITable* $tmp643 = Iter$240$17622->$class->itable;
                                while ($tmp643->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp643 = $tmp643->next;
                                }
                                $fn645 $tmp644 = $tmp643->methods[1];
                                panda$core$Object* $tmp646 = $tmp644(Iter$240$17622);
                                $tmp642 = $tmp646;
                                $tmp641 = ((org$pandalanguage$pandac$ASTNode*) $tmp642);
                                a640 = $tmp641;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp641));
                                panda$core$Panda$unref$panda$core$Object($tmp642);
                                panda$core$String* $tmp649 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a640), &$s648);
                                $tmp647 = $tmp649;
                                panda$core$MutableString$append$panda$core$String(result612, $tmp647);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp647));
                            }
                            $tmp639 = -1;
                            goto $l637;
                            $l637:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a640));
                            a640 = NULL;
                            switch ($tmp639) {
                                case -1: goto $l650;
                            }
                            $l650:;
                        }
                        goto $l629;
                        $l630:;
                    }
                    $tmp621 = -1;
                    goto $l619;
                    $l619:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$240$17622));
                    Iter$240$17622 = NULL;
                    switch ($tmp621) {
                        case -1: goto $l651;
                    }
                    $l651:;
                }
                {
                    $match$243_17652 = kind599;
                    panda$core$Int64$init$builtin_int64(&$tmp653, 0);
                    panda$core$Bit $tmp654 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_17652.$rawValue, $tmp653);
                    if ($tmp654.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result612, &$s655);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp656, 1);
                    panda$core$Bit $tmp657 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_17652.$rawValue, $tmp656);
                    if ($tmp657.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result612, &$s658);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp659, 2);
                    panda$core$Bit $tmp660 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$243_17652.$rawValue, $tmp659);
                    if ($tmp660.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result612, &$s661);
                    }
                    }
                    }
                    }
                }
                panda$core$MutableString$append$panda$core$String(result612, name601);
                if (((panda$core$Bit) { generics603 != NULL }).value) {
                {
                    ITable* $tmp666 = ((panda$collections$ListView*) generics603)->$class->itable;
                    while ($tmp666->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp666 = $tmp666->next;
                    }
                    $fn668 $tmp667 = $tmp666->methods[4];
                    panda$core$String* $tmp669 = $tmp667(((panda$collections$ListView*) generics603));
                    $tmp665 = $tmp669;
                    panda$core$String* $tmp670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s664, $tmp665);
                    $tmp663 = $tmp670;
                    panda$core$String* $tmp672 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp663, &$s671);
                    $tmp662 = $tmp672;
                    panda$core$MutableString$append$panda$core$String(result612, $tmp662);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp662));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp663));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp665));
                }
                }
                if (((panda$core$Bit) { supertypes605 != NULL }).value) {
                {
                    ITable* $tmp677 = ((panda$collections$ListView*) supertypes605)->$class->itable;
                    while ($tmp677->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp677 = $tmp677->next;
                    }
                    $fn679 $tmp678 = $tmp677->methods[4];
                    panda$core$String* $tmp680 = $tmp678(((panda$collections$ListView*) supertypes605));
                    $tmp676 = $tmp680;
                    panda$core$String* $tmp681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s675, $tmp676);
                    $tmp674 = $tmp681;
                    panda$core$String* $tmp683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp674, &$s682);
                    $tmp673 = $tmp683;
                    panda$core$MutableString$append$panda$core$String(result612, $tmp673);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp673));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp674));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp676));
                }
                }
                panda$core$MutableString$append$panda$core$String(result612, &$s684);
                {
                    int $tmp687;
                    {
                        ITable* $tmp691 = ((panda$collections$Iterable*) members607)->$class->itable;
                        while ($tmp691->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp691 = $tmp691->next;
                        }
                        $fn693 $tmp692 = $tmp691->methods[0];
                        panda$collections$Iterator* $tmp694 = $tmp692(((panda$collections$Iterable*) members607));
                        $tmp690 = $tmp694;
                        $tmp689 = $tmp690;
                        Iter$256$17688 = $tmp689;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp689));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp690));
                        $l695:;
                        ITable* $tmp698 = Iter$256$17688->$class->itable;
                        while ($tmp698->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp698 = $tmp698->next;
                        }
                        $fn700 $tmp699 = $tmp698->methods[0];
                        panda$core$Bit $tmp701 = $tmp699(Iter$256$17688);
                        panda$core$Bit $tmp702 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp701);
                        bool $tmp697 = $tmp702.value;
                        if (!$tmp697) goto $l696;
                        {
                            int $tmp705;
                            {
                                ITable* $tmp709 = Iter$256$17688->$class->itable;
                                while ($tmp709->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp709 = $tmp709->next;
                                }
                                $fn711 $tmp710 = $tmp709->methods[1];
                                panda$core$Object* $tmp712 = $tmp710(Iter$256$17688);
                                $tmp708 = $tmp712;
                                $tmp707 = ((org$pandalanguage$pandac$ASTNode*) $tmp708);
                                m706 = $tmp707;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp707));
                                panda$core$Panda$unref$panda$core$Object($tmp708);
                                panda$core$String* $tmp715 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) m706), &$s714);
                                $tmp713 = $tmp715;
                                panda$core$MutableString$append$panda$core$String(result612, $tmp713);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp713));
                            }
                            $tmp705 = -1;
                            goto $l703;
                            $l703:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m706));
                            m706 = NULL;
                            switch ($tmp705) {
                                case -1: goto $l716;
                            }
                            $l716:;
                        }
                        goto $l695;
                        $l696:;
                    }
                    $tmp687 = -1;
                    goto $l685;
                    $l685:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$256$17688));
                    Iter$256$17688 = NULL;
                    switch ($tmp687) {
                        case -1: goto $l717;
                    }
                    $l717:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp719, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp718, $tmp719);
                panda$core$MutableString$append$panda$core$Char8(result612, $tmp718);
                panda$core$String* $tmp722 = panda$core$MutableString$finish$R$panda$core$String(result612);
                $tmp721 = $tmp722;
                $tmp720 = $tmp721;
                $returnValue325 = $tmp720;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp720));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp721));
                $tmp611 = 0;
                goto $l609;
                $l723:;
                $tmp316 = 14;
                goto $l314;
                $l724:;
                return $returnValue325;
            }
            $l609:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result612));
            result612 = NULL;
            switch ($tmp611) {
                case 0: goto $l723;
            }
            $l726:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp727, 12);
        panda$core$Bit $tmp728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp727);
        if ($tmp728.value) {
        {
            panda$core$String** $tmp730 = ((panda$core$String**) ((char*) $match$193_9317->$data + 16));
            label729 = *$tmp730;
            if (((panda$core$Bit) { label729 != NULL }).value) {
            {
                panda$core$String* $tmp735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s734, label729);
                $tmp733 = $tmp735;
                panda$core$String* $tmp737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp733, &$s736);
                $tmp732 = $tmp737;
                $tmp731 = $tmp732;
                $returnValue325 = $tmp731;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp731));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp732));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp733));
                $tmp316 = 15;
                goto $l314;
                $l738:;
                return $returnValue325;
            }
            }
            $tmp740 = &$s741;
            $returnValue325 = $tmp740;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp740));
            $tmp316 = 16;
            goto $l314;
            $l742:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp744, 13);
        panda$core$Bit $tmp745 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp744);
        if ($tmp745.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp747 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 16));
            target746 = *$tmp747;
            org$pandalanguage$pandac$ASTNode** $tmp749 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 24));
            value748 = *$tmp749;
            if (((panda$core$Bit) { value748 != NULL }).value) {
            {
                panda$core$String* $tmp756 = (($fn755) target746->$class->vtable[0])(target746);
                $tmp754 = $tmp756;
                panda$core$String* $tmp758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp754, &$s757);
                $tmp753 = $tmp758;
                panda$core$String* $tmp759 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp753, ((panda$core$Object*) value748));
                $tmp752 = $tmp759;
                panda$core$String* $tmp761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp752, &$s760);
                $tmp751 = $tmp761;
                $tmp750 = $tmp751;
                $returnValue325 = $tmp750;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp750));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp751));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp752));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp753));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp754));
                $tmp316 = 17;
                goto $l314;
                $l762:;
                return $returnValue325;
            }
            }
            panda$core$String* $tmp767 = (($fn766) target746->$class->vtable[0])(target746);
            $tmp765 = $tmp767;
            $tmp764 = $tmp765;
            $returnValue325 = $tmp764;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp764));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp765));
            $tmp316 = 18;
            goto $l314;
            $l768:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp770, 14);
        panda$core$Bit $tmp771 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp770);
        if ($tmp771.value) {
        {
            panda$core$String** $tmp773 = ((panda$core$String**) ((char*) $match$193_9317->$data + 16));
            label772 = *$tmp773;
            panda$collections$ImmutableArray** $tmp775 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 24));
            statements774 = *$tmp775;
            org$pandalanguage$pandac$ASTNode** $tmp777 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 32));
            test776 = *$tmp777;
            int $tmp780;
            {
                panda$core$MutableString* $tmp784 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp784);
                $tmp783 = $tmp784;
                $tmp782 = $tmp783;
                result781 = $tmp782;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp782));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp783));
                if (((panda$core$Bit) { label772 != NULL }).value) {
                {
                    panda$core$String* $tmp787 = panda$core$String$convert$R$panda$core$String(label772);
                    $tmp786 = $tmp787;
                    panda$core$String* $tmp789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp786, &$s788);
                    $tmp785 = $tmp789;
                    panda$core$MutableString$append$panda$core$String(result781, $tmp785);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp785));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp786));
                }
                }
                panda$core$MutableString$append$panda$core$String(result781, &$s790);
                {
                    int $tmp793;
                    {
                        ITable* $tmp797 = ((panda$collections$Iterable*) statements774)->$class->itable;
                        while ($tmp797->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp797 = $tmp797->next;
                        }
                        $fn799 $tmp798 = $tmp797->methods[0];
                        panda$collections$Iterator* $tmp800 = $tmp798(((panda$collections$Iterable*) statements774));
                        $tmp796 = $tmp800;
                        $tmp795 = $tmp796;
                        Iter$277$17794 = $tmp795;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp795));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp796));
                        $l801:;
                        ITable* $tmp804 = Iter$277$17794->$class->itable;
                        while ($tmp804->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp804 = $tmp804->next;
                        }
                        $fn806 $tmp805 = $tmp804->methods[0];
                        panda$core$Bit $tmp807 = $tmp805(Iter$277$17794);
                        panda$core$Bit $tmp808 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp807);
                        bool $tmp803 = $tmp808.value;
                        if (!$tmp803) goto $l802;
                        {
                            int $tmp811;
                            {
                                ITable* $tmp815 = Iter$277$17794->$class->itable;
                                while ($tmp815->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp815 = $tmp815->next;
                                }
                                $fn817 $tmp816 = $tmp815->methods[1];
                                panda$core$Object* $tmp818 = $tmp816(Iter$277$17794);
                                $tmp814 = $tmp818;
                                $tmp813 = ((org$pandalanguage$pandac$ASTNode*) $tmp814);
                                s812 = $tmp813;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp813));
                                panda$core$Panda$unref$panda$core$Object($tmp814);
                                panda$core$String* $tmp821 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s812), &$s820);
                                $tmp819 = $tmp821;
                                panda$core$MutableString$append$panda$core$String(result781, $tmp819);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp819));
                            }
                            $tmp811 = -1;
                            goto $l809;
                            $l809:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s812));
                            s812 = NULL;
                            switch ($tmp811) {
                                case -1: goto $l822;
                            }
                            $l822:;
                        }
                        goto $l801;
                        $l802:;
                    }
                    $tmp793 = -1;
                    goto $l791;
                    $l791:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$277$17794));
                    Iter$277$17794 = NULL;
                    switch ($tmp793) {
                        case -1: goto $l823;
                    }
                    $l823:;
                }
                panda$core$String* $tmp827 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s826, ((panda$core$Object*) test776));
                $tmp825 = $tmp827;
                panda$core$String* $tmp829 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp825, &$s828);
                $tmp824 = $tmp829;
                panda$core$MutableString$append$panda$core$String(result781, $tmp824);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp824));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp825));
                panda$core$String* $tmp832 = panda$core$MutableString$finish$R$panda$core$String(result781);
                $tmp831 = $tmp832;
                $tmp830 = $tmp831;
                $returnValue325 = $tmp830;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp830));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp831));
                $tmp780 = 0;
                goto $l778;
                $l833:;
                $tmp316 = 19;
                goto $l314;
                $l834:;
                return $returnValue325;
            }
            $l778:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result781));
            result781 = NULL;
            switch ($tmp780) {
                case 0: goto $l833;
            }
            $l836:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp837, 15);
        panda$core$Bit $tmp838 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp837);
        if ($tmp838.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp840 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 16));
            base839 = *$tmp840;
            panda$core$String** $tmp842 = ((panda$core$String**) ((char*) $match$193_9317->$data + 24));
            field841 = *$tmp842;
            panda$core$String* $tmp849 = (($fn848) base839->$class->vtable[0])(base839);
            $tmp847 = $tmp849;
            panda$core$String* $tmp851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp847, &$s850);
            $tmp846 = $tmp851;
            panda$core$String* $tmp852 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp846, field841);
            $tmp845 = $tmp852;
            panda$core$String* $tmp854 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp845, &$s853);
            $tmp844 = $tmp854;
            $tmp843 = $tmp844;
            $returnValue325 = $tmp843;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp843));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp844));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp845));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp846));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp847));
            $tmp316 = 20;
            goto $l314;
            $l855:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp857, 16);
        panda$core$Bit $tmp858 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp857);
        if ($tmp858.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp860 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 16));
            dc859 = *$tmp860;
            panda$collections$ImmutableArray** $tmp862 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 24));
            annotations861 = *$tmp862;
            org$pandalanguage$pandac$ASTNode** $tmp864 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 32));
            decl863 = *$tmp864;
            int $tmp867;
            {
                panda$core$MutableString* $tmp871 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp871);
                $tmp870 = $tmp871;
                $tmp869 = $tmp870;
                result868 = $tmp869;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp869));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp870));
                if (((panda$core$Bit) { dc859 != NULL }).value) {
                {
                    panda$core$String* $tmp874 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc859), &$s873);
                    $tmp872 = $tmp874;
                    panda$core$MutableString$append$panda$core$String(result868, $tmp872);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp872));
                }
                }
                {
                    int $tmp877;
                    {
                        ITable* $tmp881 = ((panda$collections$Iterable*) annotations861)->$class->itable;
                        while ($tmp881->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp881 = $tmp881->next;
                        }
                        $fn883 $tmp882 = $tmp881->methods[0];
                        panda$collections$Iterator* $tmp884 = $tmp882(((panda$collections$Iterable*) annotations861));
                        $tmp880 = $tmp884;
                        $tmp879 = $tmp880;
                        Iter$289$17878 = $tmp879;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp879));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp880));
                        $l885:;
                        ITable* $tmp888 = Iter$289$17878->$class->itable;
                        while ($tmp888->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp888 = $tmp888->next;
                        }
                        $fn890 $tmp889 = $tmp888->methods[0];
                        panda$core$Bit $tmp891 = $tmp889(Iter$289$17878);
                        panda$core$Bit $tmp892 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp891);
                        bool $tmp887 = $tmp892.value;
                        if (!$tmp887) goto $l886;
                        {
                            int $tmp895;
                            {
                                ITable* $tmp899 = Iter$289$17878->$class->itable;
                                while ($tmp899->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp899 = $tmp899->next;
                                }
                                $fn901 $tmp900 = $tmp899->methods[1];
                                panda$core$Object* $tmp902 = $tmp900(Iter$289$17878);
                                $tmp898 = $tmp902;
                                $tmp897 = ((org$pandalanguage$pandac$ASTNode*) $tmp898);
                                a896 = $tmp897;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp897));
                                panda$core$Panda$unref$panda$core$Object($tmp898);
                                panda$core$String* $tmp905 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a896), &$s904);
                                $tmp903 = $tmp905;
                                panda$core$MutableString$append$panda$core$String(result868, $tmp903);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp903));
                            }
                            $tmp895 = -1;
                            goto $l893;
                            $l893:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a896));
                            a896 = NULL;
                            switch ($tmp895) {
                                case -1: goto $l906;
                            }
                            $l906:;
                        }
                        goto $l885;
                        $l886:;
                    }
                    $tmp877 = -1;
                    goto $l875;
                    $l875:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$289$17878));
                    Iter$289$17878 = NULL;
                    switch ($tmp877) {
                        case -1: goto $l907;
                    }
                    $l907:;
                }
                panda$core$MutableString$append$panda$core$Object(result868, ((panda$core$Object*) decl863));
                panda$core$String* $tmp910 = panda$core$MutableString$finish$R$panda$core$String(result868);
                $tmp909 = $tmp910;
                $tmp908 = $tmp909;
                $returnValue325 = $tmp908;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp908));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp909));
                $tmp867 = 0;
                goto $l865;
                $l911:;
                $tmp316 = 21;
                goto $l314;
                $l912:;
                return $returnValue325;
            }
            $l865:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result868));
            result868 = NULL;
            switch ($tmp867) {
                case 0: goto $l911;
            }
            $l914:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp915, 17);
        panda$core$Bit $tmp916 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp915);
        if ($tmp916.value) {
        {
            panda$collections$ImmutableArray** $tmp918 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 0));
            entries917 = *$tmp918;
            int $tmp921;
            {
                panda$core$MutableString* $tmp925 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp925);
                $tmp924 = $tmp925;
                $tmp923 = $tmp924;
                result922 = $tmp923;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp923));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp924));
                {
                    int $tmp928;
                    {
                        ITable* $tmp932 = ((panda$collections$Iterable*) entries917)->$class->itable;
                        while ($tmp932->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp932 = $tmp932->next;
                        }
                        $fn934 $tmp933 = $tmp932->methods[0];
                        panda$collections$Iterator* $tmp935 = $tmp933(((panda$collections$Iterable*) entries917));
                        $tmp931 = $tmp935;
                        $tmp930 = $tmp931;
                        Iter$296$17929 = $tmp930;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp930));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp931));
                        $l936:;
                        ITable* $tmp939 = Iter$296$17929->$class->itable;
                        while ($tmp939->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp939 = $tmp939->next;
                        }
                        $fn941 $tmp940 = $tmp939->methods[0];
                        panda$core$Bit $tmp942 = $tmp940(Iter$296$17929);
                        panda$core$Bit $tmp943 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp942);
                        bool $tmp938 = $tmp943.value;
                        if (!$tmp938) goto $l937;
                        {
                            int $tmp946;
                            {
                                ITable* $tmp950 = Iter$296$17929->$class->itable;
                                while ($tmp950->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp950 = $tmp950->next;
                                }
                                $fn952 $tmp951 = $tmp950->methods[1];
                                panda$core$Object* $tmp953 = $tmp951(Iter$296$17929);
                                $tmp949 = $tmp953;
                                $tmp948 = ((org$pandalanguage$pandac$ASTNode*) $tmp949);
                                e947 = $tmp948;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp948));
                                panda$core$Panda$unref$panda$core$Object($tmp949);
                                panda$core$String* $tmp956 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) e947), &$s955);
                                $tmp954 = $tmp956;
                                panda$core$MutableString$append$panda$core$String(result922, $tmp954);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp954));
                            }
                            $tmp946 = -1;
                            goto $l944;
                            $l944:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e947));
                            e947 = NULL;
                            switch ($tmp946) {
                                case -1: goto $l957;
                            }
                            $l957:;
                        }
                        goto $l936;
                        $l937:;
                    }
                    $tmp928 = -1;
                    goto $l926;
                    $l926:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$296$17929));
                    Iter$296$17929 = NULL;
                    switch ($tmp928) {
                        case -1: goto $l958;
                    }
                    $l958:;
                }
                panda$core$String* $tmp961 = panda$core$MutableString$finish$R$panda$core$String(result922);
                $tmp960 = $tmp961;
                $tmp959 = $tmp960;
                $returnValue325 = $tmp959;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp959));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp960));
                $tmp921 = 0;
                goto $l919;
                $l962:;
                $tmp316 = 22;
                goto $l314;
                $l963:;
                return $returnValue325;
            }
            $l919:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result922));
            result922 = NULL;
            switch ($tmp921) {
                case 0: goto $l962;
            }
            $l965:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp966, 18);
        panda$core$Bit $tmp967 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp966);
        if ($tmp967.value) {
        {
            panda$core$String** $tmp969 = ((panda$core$String**) ((char*) $match$193_9317->$data + 16));
            label968 = *$tmp969;
            org$pandalanguage$pandac$ASTNode** $tmp971 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 24));
            target970 = *$tmp971;
            org$pandalanguage$pandac$ASTNode** $tmp973 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 32));
            list972 = *$tmp973;
            panda$collections$ImmutableArray** $tmp975 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 40));
            statements974 = *$tmp975;
            int $tmp978;
            {
                panda$core$MutableString* $tmp982 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp982);
                $tmp981 = $tmp982;
                $tmp980 = $tmp981;
                result979 = $tmp980;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp980));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp981));
                if (((panda$core$Bit) { label968 != NULL }).value) {
                {
                    panda$core$String* $tmp985 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(label968, &$s984);
                    $tmp983 = $tmp985;
                    panda$core$MutableString$append$panda$core$String(result979, $tmp983);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp983));
                }
                }
                panda$core$String* $tmp991 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s990, ((panda$core$Object*) target970));
                $tmp989 = $tmp991;
                panda$core$String* $tmp993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp989, &$s992);
                $tmp988 = $tmp993;
                panda$core$String* $tmp994 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp988, ((panda$core$Object*) list972));
                $tmp987 = $tmp994;
                panda$core$String* $tmp996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp987, &$s995);
                $tmp986 = $tmp996;
                panda$core$MutableString$append$panda$core$String(result979, $tmp986);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp986));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp987));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp988));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp989));
                {
                    int $tmp999;
                    {
                        ITable* $tmp1003 = ((panda$collections$Iterable*) statements974)->$class->itable;
                        while ($tmp1003->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1003 = $tmp1003->next;
                        }
                        $fn1005 $tmp1004 = $tmp1003->methods[0];
                        panda$collections$Iterator* $tmp1006 = $tmp1004(((panda$collections$Iterable*) statements974));
                        $tmp1002 = $tmp1006;
                        $tmp1001 = $tmp1002;
                        Iter$306$171000 = $tmp1001;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1001));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1002));
                        $l1007:;
                        ITable* $tmp1010 = Iter$306$171000->$class->itable;
                        while ($tmp1010->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1010 = $tmp1010->next;
                        }
                        $fn1012 $tmp1011 = $tmp1010->methods[0];
                        panda$core$Bit $tmp1013 = $tmp1011(Iter$306$171000);
                        panda$core$Bit $tmp1014 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1013);
                        bool $tmp1009 = $tmp1014.value;
                        if (!$tmp1009) goto $l1008;
                        {
                            int $tmp1017;
                            {
                                ITable* $tmp1021 = Iter$306$171000->$class->itable;
                                while ($tmp1021->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1021 = $tmp1021->next;
                                }
                                $fn1023 $tmp1022 = $tmp1021->methods[1];
                                panda$core$Object* $tmp1024 = $tmp1022(Iter$306$171000);
                                $tmp1020 = $tmp1024;
                                $tmp1019 = ((org$pandalanguage$pandac$ASTNode*) $tmp1020);
                                s1018 = $tmp1019;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1019));
                                panda$core$Panda$unref$panda$core$Object($tmp1020);
                                panda$core$String* $tmp1027 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1018), &$s1026);
                                $tmp1025 = $tmp1027;
                                panda$core$MutableString$append$panda$core$String(result979, $tmp1025);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1025));
                            }
                            $tmp1017 = -1;
                            goto $l1015;
                            $l1015:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1018));
                            s1018 = NULL;
                            switch ($tmp1017) {
                                case -1: goto $l1028;
                            }
                            $l1028:;
                        }
                        goto $l1007;
                        $l1008:;
                    }
                    $tmp999 = -1;
                    goto $l997;
                    $l997:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$306$171000));
                    Iter$306$171000 = NULL;
                    switch ($tmp999) {
                        case -1: goto $l1029;
                    }
                    $l1029:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp1031, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp1030, $tmp1031);
                panda$core$MutableString$append$panda$core$Char8(result979, $tmp1030);
                panda$core$String* $tmp1034 = panda$core$MutableString$finish$R$panda$core$String(result979);
                $tmp1033 = $tmp1034;
                $tmp1032 = $tmp1033;
                $returnValue325 = $tmp1032;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1032));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1033));
                $tmp978 = 0;
                goto $l976;
                $l1035:;
                $tmp316 = 23;
                goto $l314;
                $l1036:;
                return $returnValue325;
            }
            $l976:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result979));
            result979 = NULL;
            switch ($tmp978) {
                case 0: goto $l1035;
            }
            $l1038:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1039, 19);
        panda$core$Bit $tmp1040 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1039);
        if ($tmp1040.value) {
        {
            panda$core$String** $tmp1042 = ((panda$core$String**) ((char*) $match$193_9317->$data + 16));
            name1041 = *$tmp1042;
            panda$collections$ImmutableArray** $tmp1044 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 24));
            subtypes1043 = *$tmp1044;
            panda$core$String* $tmp1050 = panda$core$String$convert$R$panda$core$String(name1041);
            $tmp1049 = $tmp1050;
            panda$core$String* $tmp1052 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1049, &$s1051);
            $tmp1048 = $tmp1052;
            ITable* $tmp1054 = ((panda$collections$ListView*) subtypes1043)->$class->itable;
            while ($tmp1054->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1054 = $tmp1054->next;
            }
            $fn1056 $tmp1055 = $tmp1054->methods[4];
            panda$core$String* $tmp1057 = $tmp1055(((panda$collections$ListView*) subtypes1043));
            $tmp1053 = $tmp1057;
            panda$core$String* $tmp1058 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1048, $tmp1053);
            $tmp1047 = $tmp1058;
            panda$core$String* $tmp1060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1047, &$s1059);
            $tmp1046 = $tmp1060;
            $tmp1045 = $tmp1046;
            $returnValue325 = $tmp1045;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1045));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1046));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1047));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1053));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1048));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1049));
            $tmp316 = 24;
            goto $l314;
            $l1061:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1063, 20);
        panda$core$Bit $tmp1064 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1063);
        if ($tmp1064.value) {
        {
            panda$core$String** $tmp1066 = ((panda$core$String**) ((char*) $match$193_9317->$data + 16));
            name1065 = *$tmp1066;
            $tmp1067 = name1065;
            $returnValue325 = $tmp1067;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1067));
            $tmp316 = 25;
            goto $l314;
            $l1068:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1070, 21);
        panda$core$Bit $tmp1071 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1070);
        if ($tmp1071.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1073 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 16));
            test1072 = *$tmp1073;
            panda$collections$ImmutableArray** $tmp1075 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 24));
            ifTrue1074 = *$tmp1075;
            org$pandalanguage$pandac$ASTNode** $tmp1077 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 32));
            ifFalse1076 = *$tmp1077;
            int $tmp1080;
            {
                panda$core$MutableString* $tmp1084 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1088 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1087, ((panda$core$Object*) test1072));
                $tmp1086 = $tmp1088;
                panda$core$String* $tmp1090 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1086, &$s1089);
                $tmp1085 = $tmp1090;
                panda$core$MutableString$init$panda$core$String($tmp1084, $tmp1085);
                $tmp1083 = $tmp1084;
                $tmp1082 = $tmp1083;
                result1081 = $tmp1082;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1082));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1083));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1085));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1086));
                {
                    int $tmp1093;
                    {
                        ITable* $tmp1097 = ((panda$collections$Iterable*) ifTrue1074)->$class->itable;
                        while ($tmp1097->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1097 = $tmp1097->next;
                        }
                        $fn1099 $tmp1098 = $tmp1097->methods[0];
                        panda$collections$Iterator* $tmp1100 = $tmp1098(((panda$collections$Iterable*) ifTrue1074));
                        $tmp1096 = $tmp1100;
                        $tmp1095 = $tmp1096;
                        Iter$317$171094 = $tmp1095;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1095));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1096));
                        $l1101:;
                        ITable* $tmp1104 = Iter$317$171094->$class->itable;
                        while ($tmp1104->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1104 = $tmp1104->next;
                        }
                        $fn1106 $tmp1105 = $tmp1104->methods[0];
                        panda$core$Bit $tmp1107 = $tmp1105(Iter$317$171094);
                        panda$core$Bit $tmp1108 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1107);
                        bool $tmp1103 = $tmp1108.value;
                        if (!$tmp1103) goto $l1102;
                        {
                            int $tmp1111;
                            {
                                ITable* $tmp1115 = Iter$317$171094->$class->itable;
                                while ($tmp1115->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1115 = $tmp1115->next;
                                }
                                $fn1117 $tmp1116 = $tmp1115->methods[1];
                                panda$core$Object* $tmp1118 = $tmp1116(Iter$317$171094);
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$317$171094));
                    Iter$317$171094 = NULL;
                    switch ($tmp1093) {
                        case -1: goto $l1123;
                    }
                    $l1123:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp1125, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp1124, $tmp1125);
                panda$core$MutableString$append$panda$core$Char8(result1081, $tmp1124);
                if (((panda$core$Bit) { ifFalse1076 != NULL }).value) {
                {
                    panda$core$String* $tmp1129 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1128, ((panda$core$Object*) ifFalse1076));
                    $tmp1127 = $tmp1129;
                    panda$core$String* $tmp1131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1127, &$s1130);
                    $tmp1126 = $tmp1131;
                    panda$core$MutableString$append$panda$core$String(result1081, $tmp1126);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1126));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1127));
                }
                }
                panda$core$String* $tmp1134 = panda$core$MutableString$finish$R$panda$core$String(result1081);
                $tmp1133 = $tmp1134;
                $tmp1132 = $tmp1133;
                $returnValue325 = $tmp1132;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1132));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1133));
                $tmp1080 = 0;
                goto $l1078;
                $l1135:;
                $tmp316 = 26;
                goto $l314;
                $l1136:;
                return $returnValue325;
            }
            $l1078:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1081));
            result1081 = NULL;
            switch ($tmp1080) {
                case 0: goto $l1135;
            }
            $l1138:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1139, 22);
        panda$core$Bit $tmp1140 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1139);
        if ($tmp1140.value) {
        {
            panda$core$UInt64* $tmp1142 = ((panda$core$UInt64*) ((char*) $match$193_9317->$data + 16));
            value1141 = *$tmp1142;
            panda$core$String* $tmp1145 = panda$core$UInt64$convert$R$panda$core$String(value1141);
            $tmp1144 = $tmp1145;
            $tmp1143 = $tmp1144;
            $returnValue325 = $tmp1143;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1143));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1144));
            $tmp316 = 27;
            goto $l314;
            $l1146:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1148, 23);
        panda$core$Bit $tmp1149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1148);
        if ($tmp1149.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1151 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$193_9317->$data + 0));
            ir1150 = *$tmp1151;
            panda$core$String* $tmp1155 = (($fn1154) ir1150->$class->vtable[0])(ir1150);
            $tmp1153 = $tmp1155;
            $tmp1152 = $tmp1153;
            $returnValue325 = $tmp1152;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1152));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1153));
            $tmp316 = 28;
            goto $l314;
            $l1156:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1158, 24);
        panda$core$Bit $tmp1159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1158);
        if ($tmp1159.value) {
        {
            panda$core$String** $tmp1161 = ((panda$core$String**) ((char*) $match$193_9317->$data + 16));
            label1160 = *$tmp1161;
            panda$collections$ImmutableArray** $tmp1163 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 24));
            statements1162 = *$tmp1163;
            int $tmp1166;
            {
                panda$core$MutableString* $tmp1170 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1170);
                $tmp1169 = $tmp1170;
                $tmp1168 = $tmp1169;
                result1167 = $tmp1168;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1168));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1169));
                if (((panda$core$Bit) { label1160 != NULL }).value) {
                {
                    panda$core$String* $tmp1173 = panda$core$String$convert$R$panda$core$String(label1160);
                    $tmp1172 = $tmp1173;
                    panda$core$String* $tmp1175 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1172, &$s1174);
                    $tmp1171 = $tmp1175;
                    panda$core$MutableString$append$panda$core$String(result1167, $tmp1171);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1171));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1172));
                }
                }
                panda$core$MutableString$append$panda$core$String(result1167, &$s1176);
                {
                    int $tmp1179;
                    {
                        ITable* $tmp1183 = ((panda$collections$Iterable*) statements1162)->$class->itable;
                        while ($tmp1183->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1183 = $tmp1183->next;
                        }
                        $fn1185 $tmp1184 = $tmp1183->methods[0];
                        panda$collections$Iterator* $tmp1186 = $tmp1184(((panda$collections$Iterable*) statements1162));
                        $tmp1182 = $tmp1186;
                        $tmp1181 = $tmp1182;
                        Iter$335$171180 = $tmp1181;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1181));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1182));
                        $l1187:;
                        ITable* $tmp1190 = Iter$335$171180->$class->itable;
                        while ($tmp1190->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1190 = $tmp1190->next;
                        }
                        $fn1192 $tmp1191 = $tmp1190->methods[0];
                        panda$core$Bit $tmp1193 = $tmp1191(Iter$335$171180);
                        panda$core$Bit $tmp1194 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1193);
                        bool $tmp1189 = $tmp1194.value;
                        if (!$tmp1189) goto $l1188;
                        {
                            int $tmp1197;
                            {
                                ITable* $tmp1201 = Iter$335$171180->$class->itable;
                                while ($tmp1201->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1201 = $tmp1201->next;
                                }
                                $fn1203 $tmp1202 = $tmp1201->methods[1];
                                panda$core$Object* $tmp1204 = $tmp1202(Iter$335$171180);
                                $tmp1200 = $tmp1204;
                                $tmp1199 = ((org$pandalanguage$pandac$ASTNode*) $tmp1200);
                                s1198 = $tmp1199;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1199));
                                panda$core$Panda$unref$panda$core$Object($tmp1200);
                                panda$core$String* $tmp1207 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1198), &$s1206);
                                $tmp1205 = $tmp1207;
                                panda$core$MutableString$append$panda$core$String(result1167, $tmp1205);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1205));
                            }
                            $tmp1197 = -1;
                            goto $l1195;
                            $l1195:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1198));
                            s1198 = NULL;
                            switch ($tmp1197) {
                                case -1: goto $l1208;
                            }
                            $l1208:;
                        }
                        goto $l1187;
                        $l1188:;
                    }
                    $tmp1179 = -1;
                    goto $l1177;
                    $l1177:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$335$171180));
                    Iter$335$171180 = NULL;
                    switch ($tmp1179) {
                        case -1: goto $l1209;
                    }
                    $l1209:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp1211, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp1210, $tmp1211);
                panda$core$MutableString$append$panda$core$Char8(result1167, $tmp1210);
                panda$core$String* $tmp1214 = panda$core$MutableString$finish$R$panda$core$String(result1167);
                $tmp1213 = $tmp1214;
                $tmp1212 = $tmp1213;
                $returnValue325 = $tmp1212;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1212));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1213));
                $tmp1166 = 0;
                goto $l1164;
                $l1215:;
                $tmp316 = 29;
                goto $l314;
                $l1216:;
                return $returnValue325;
            }
            $l1164:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1167));
            result1167 = NULL;
            switch ($tmp1166) {
                case 0: goto $l1215;
            }
            $l1218:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1219, 25);
        panda$core$Bit $tmp1220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1219);
        if ($tmp1220.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1222 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 16));
            value1221 = *$tmp1222;
            panda$collections$ImmutableArray** $tmp1224 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 24));
            whens1223 = *$tmp1224;
            panda$collections$ImmutableArray** $tmp1226 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 32));
            other1225 = *$tmp1226;
            int $tmp1229;
            {
                panda$core$MutableString* $tmp1233 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1237 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1236, ((panda$core$Object*) value1221));
                $tmp1235 = $tmp1237;
                panda$core$String* $tmp1239 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1235, &$s1238);
                $tmp1234 = $tmp1239;
                panda$core$MutableString$init$panda$core$String($tmp1233, $tmp1234);
                $tmp1232 = $tmp1233;
                $tmp1231 = $tmp1232;
                result1230 = $tmp1231;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1231));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1232));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1234));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1235));
                {
                    int $tmp1242;
                    {
                        ITable* $tmp1246 = ((panda$collections$Iterable*) whens1223)->$class->itable;
                        while ($tmp1246->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1246 = $tmp1246->next;
                        }
                        $fn1248 $tmp1247 = $tmp1246->methods[0];
                        panda$collections$Iterator* $tmp1249 = $tmp1247(((panda$collections$Iterable*) whens1223));
                        $tmp1245 = $tmp1249;
                        $tmp1244 = $tmp1245;
                        Iter$342$171243 = $tmp1244;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1244));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1245));
                        $l1250:;
                        ITable* $tmp1253 = Iter$342$171243->$class->itable;
                        while ($tmp1253->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1253 = $tmp1253->next;
                        }
                        $fn1255 $tmp1254 = $tmp1253->methods[0];
                        panda$core$Bit $tmp1256 = $tmp1254(Iter$342$171243);
                        panda$core$Bit $tmp1257 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1256);
                        bool $tmp1252 = $tmp1257.value;
                        if (!$tmp1252) goto $l1251;
                        {
                            int $tmp1260;
                            {
                                ITable* $tmp1264 = Iter$342$171243->$class->itable;
                                while ($tmp1264->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1264 = $tmp1264->next;
                                }
                                $fn1266 $tmp1265 = $tmp1264->methods[1];
                                panda$core$Object* $tmp1267 = $tmp1265(Iter$342$171243);
                                $tmp1263 = $tmp1267;
                                $tmp1262 = ((org$pandalanguage$pandac$ASTNode*) $tmp1263);
                                w1261 = $tmp1262;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1262));
                                panda$core$Panda$unref$panda$core$Object($tmp1263);
                                panda$core$String* $tmp1270 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w1261), &$s1269);
                                $tmp1268 = $tmp1270;
                                panda$core$MutableString$append$panda$core$String(result1230, $tmp1268);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1268));
                            }
                            $tmp1260 = -1;
                            goto $l1258;
                            $l1258:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w1261));
                            w1261 = NULL;
                            switch ($tmp1260) {
                                case -1: goto $l1271;
                            }
                            $l1271:;
                        }
                        goto $l1250;
                        $l1251:;
                    }
                    $tmp1242 = -1;
                    goto $l1240;
                    $l1240:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$342$171243));
                    Iter$342$171243 = NULL;
                    switch ($tmp1242) {
                        case -1: goto $l1272;
                    }
                    $l1272:;
                }
                if (((panda$core$Bit) { other1225 != NULL }).value) {
                {
                    panda$core$String* $tmp1275 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) other1225), &$s1274);
                    $tmp1273 = $tmp1275;
                    panda$core$MutableString$append$panda$core$String(result1230, $tmp1273);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1273));
                }
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp1277, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp1276, $tmp1277);
                panda$core$MutableString$append$panda$core$Char8(result1230, $tmp1276);
                panda$core$String* $tmp1280 = panda$core$MutableString$finish$R$panda$core$String(result1230);
                $tmp1279 = $tmp1280;
                $tmp1278 = $tmp1279;
                $returnValue325 = $tmp1278;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1278));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1279));
                $tmp1229 = 0;
                goto $l1227;
                $l1281:;
                $tmp316 = 30;
                goto $l314;
                $l1282:;
                return $returnValue325;
            }
            $l1227:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1230));
            result1230 = NULL;
            switch ($tmp1229) {
                case 0: goto $l1281;
            }
            $l1284:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1285, 26);
        panda$core$Bit $tmp1286 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1285);
        if ($tmp1286.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1288 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 16));
            dc1287 = *$tmp1288;
            panda$collections$ImmutableArray** $tmp1290 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 24));
            annotations1289 = *$tmp1290;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1292 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$193_9317->$data + 32));
            kind1291 = *$tmp1292;
            panda$core$String** $tmp1294 = ((panda$core$String**) ((char*) $match$193_9317->$data + 40));
            name1293 = *$tmp1294;
            panda$collections$ImmutableArray** $tmp1296 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 48));
            generics1295 = *$tmp1296;
            panda$collections$ImmutableArray** $tmp1298 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 56));
            parameters1297 = *$tmp1298;
            org$pandalanguage$pandac$ASTNode** $tmp1300 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 64));
            returnType1299 = *$tmp1300;
            panda$collections$ImmutableArray** $tmp1302 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 72));
            statements1301 = *$tmp1302;
            int $tmp1305;
            {
                panda$core$MutableString* $tmp1309 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1309);
                $tmp1308 = $tmp1309;
                $tmp1307 = $tmp1308;
                result1306 = $tmp1307;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1307));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1308));
                if (((panda$core$Bit) { dc1287 != NULL }).value) {
                {
                    panda$core$String* $tmp1312 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc1287), &$s1311);
                    $tmp1310 = $tmp1312;
                    panda$core$MutableString$append$panda$core$String(result1306, $tmp1310);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1310));
                }
                }
                {
                    int $tmp1315;
                    {
                        ITable* $tmp1319 = ((panda$collections$Iterable*) annotations1289)->$class->itable;
                        while ($tmp1319->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1319 = $tmp1319->next;
                        }
                        $fn1321 $tmp1320 = $tmp1319->methods[0];
                        panda$collections$Iterator* $tmp1322 = $tmp1320(((panda$collections$Iterable*) annotations1289));
                        $tmp1318 = $tmp1322;
                        $tmp1317 = $tmp1318;
                        Iter$355$171316 = $tmp1317;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1317));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1318));
                        $l1323:;
                        ITable* $tmp1326 = Iter$355$171316->$class->itable;
                        while ($tmp1326->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1326 = $tmp1326->next;
                        }
                        $fn1328 $tmp1327 = $tmp1326->methods[0];
                        panda$core$Bit $tmp1329 = $tmp1327(Iter$355$171316);
                        panda$core$Bit $tmp1330 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1329);
                        bool $tmp1325 = $tmp1330.value;
                        if (!$tmp1325) goto $l1324;
                        {
                            int $tmp1333;
                            {
                                ITable* $tmp1337 = Iter$355$171316->$class->itable;
                                while ($tmp1337->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1337 = $tmp1337->next;
                                }
                                $fn1339 $tmp1338 = $tmp1337->methods[1];
                                panda$core$Object* $tmp1340 = $tmp1338(Iter$355$171316);
                                $tmp1336 = $tmp1340;
                                $tmp1335 = ((org$pandalanguage$pandac$ASTNode*) $tmp1336);
                                a1334 = $tmp1335;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1335));
                                panda$core$Panda$unref$panda$core$Object($tmp1336);
                                panda$core$String* $tmp1343 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a1334), &$s1342);
                                $tmp1341 = $tmp1343;
                                panda$core$MutableString$append$panda$core$String(result1306, $tmp1341);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1341));
                            }
                            $tmp1333 = -1;
                            goto $l1331;
                            $l1331:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1334));
                            a1334 = NULL;
                            switch ($tmp1333) {
                                case -1: goto $l1344;
                            }
                            $l1344:;
                        }
                        goto $l1323;
                        $l1324:;
                    }
                    $tmp1315 = -1;
                    goto $l1313;
                    $l1313:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$355$171316));
                    Iter$355$171316 = NULL;
                    switch ($tmp1315) {
                        case -1: goto $l1345;
                    }
                    $l1345:;
                }
                {
                    $match$358_171346 = kind1291;
                    panda$core$Int64$init$builtin_int64(&$tmp1347, 0);
                    panda$core$Bit $tmp1348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$358_171346.$rawValue, $tmp1347);
                    if ($tmp1348.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1306, &$s1349);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp1350, 1);
                    panda$core$Bit $tmp1351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$358_171346.$rawValue, $tmp1350);
                    if ($tmp1351.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1306, &$s1352);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp1353, 2);
                    panda$core$Bit $tmp1354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$358_171346.$rawValue, $tmp1353);
                    if ($tmp1354.value) {
                    {
                    }
                    }
                    }
                    }
                }
                panda$core$MutableString$append$panda$core$String(result1306, name1293);
                if (((panda$core$Bit) { generics1295 != NULL }).value) {
                {
                    ITable* $tmp1359 = ((panda$collections$ListView*) generics1295)->$class->itable;
                    while ($tmp1359->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp1359 = $tmp1359->next;
                    }
                    $fn1361 $tmp1360 = $tmp1359->methods[4];
                    panda$core$String* $tmp1362 = $tmp1360(((panda$collections$ListView*) generics1295));
                    $tmp1358 = $tmp1362;
                    panda$core$String* $tmp1363 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1357, $tmp1358);
                    $tmp1356 = $tmp1363;
                    panda$core$String* $tmp1365 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1356, &$s1364);
                    $tmp1355 = $tmp1365;
                    panda$core$MutableString$append$panda$core$String(result1306, $tmp1355);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1355));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1356));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1358));
                }
                }
                ITable* $tmp1370 = ((panda$collections$ListView*) parameters1297)->$class->itable;
                while ($tmp1370->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1370 = $tmp1370->next;
                }
                $fn1372 $tmp1371 = $tmp1370->methods[4];
                panda$core$String* $tmp1373 = $tmp1371(((panda$collections$ListView*) parameters1297));
                $tmp1369 = $tmp1373;
                panda$core$String* $tmp1374 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1368, $tmp1369);
                $tmp1367 = $tmp1374;
                panda$core$String* $tmp1376 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1367, &$s1375);
                $tmp1366 = $tmp1376;
                panda$core$MutableString$append$panda$core$String(result1306, $tmp1366);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1366));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1367));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1369));
                if (((panda$core$Bit) { returnType1299 != NULL }).value) {
                {
                    panda$core$String* $tmp1380 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1379, ((panda$core$Object*) returnType1299));
                    $tmp1378 = $tmp1380;
                    panda$core$String* $tmp1382 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1378, &$s1381);
                    $tmp1377 = $tmp1382;
                    panda$core$MutableString$append$panda$core$String(result1306, $tmp1377);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1377));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1378));
                }
                }
                if (((panda$core$Bit) { statements1301 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1306, &$s1383);
                    {
                        int $tmp1386;
                        {
                            ITable* $tmp1390 = ((panda$collections$Iterable*) statements1301)->$class->itable;
                            while ($tmp1390->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp1390 = $tmp1390->next;
                            }
                            $fn1392 $tmp1391 = $tmp1390->methods[0];
                            panda$collections$Iterator* $tmp1393 = $tmp1391(((panda$collections$Iterable*) statements1301));
                            $tmp1389 = $tmp1393;
                            $tmp1388 = $tmp1389;
                            Iter$373$211387 = $tmp1388;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1388));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1389));
                            $l1394:;
                            ITable* $tmp1397 = Iter$373$211387->$class->itable;
                            while ($tmp1397->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1397 = $tmp1397->next;
                            }
                            $fn1399 $tmp1398 = $tmp1397->methods[0];
                            panda$core$Bit $tmp1400 = $tmp1398(Iter$373$211387);
                            panda$core$Bit $tmp1401 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1400);
                            bool $tmp1396 = $tmp1401.value;
                            if (!$tmp1396) goto $l1395;
                            {
                                int $tmp1404;
                                {
                                    ITable* $tmp1408 = Iter$373$211387->$class->itable;
                                    while ($tmp1408->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp1408 = $tmp1408->next;
                                    }
                                    $fn1410 $tmp1409 = $tmp1408->methods[1];
                                    panda$core$Object* $tmp1411 = $tmp1409(Iter$373$211387);
                                    $tmp1407 = $tmp1411;
                                    $tmp1406 = ((org$pandalanguage$pandac$ASTNode*) $tmp1407);
                                    s1405 = $tmp1406;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1406));
                                    panda$core$Panda$unref$panda$core$Object($tmp1407);
                                    panda$core$String* $tmp1414 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1405), &$s1413);
                                    $tmp1412 = $tmp1414;
                                    panda$core$MutableString$append$panda$core$String(result1306, $tmp1412);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1412));
                                }
                                $tmp1404 = -1;
                                goto $l1402;
                                $l1402:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1405));
                                s1405 = NULL;
                                switch ($tmp1404) {
                                    case -1: goto $l1415;
                                }
                                $l1415:;
                            }
                            goto $l1394;
                            $l1395:;
                        }
                        $tmp1386 = -1;
                        goto $l1384;
                        $l1384:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$373$211387));
                        Iter$373$211387 = NULL;
                        switch ($tmp1386) {
                            case -1: goto $l1416;
                        }
                        $l1416:;
                    }
                    panda$core$UInt8$init$builtin_uint8(&$tmp1418, 125);
                    panda$core$Char8$init$panda$core$UInt8(&$tmp1417, $tmp1418);
                    panda$core$MutableString$append$panda$core$Char8(result1306, $tmp1417);
                }
                }
                panda$core$String* $tmp1421 = panda$core$MutableString$finish$R$panda$core$String(result1306);
                $tmp1420 = $tmp1421;
                $tmp1419 = $tmp1420;
                $returnValue325 = $tmp1419;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1419));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1420));
                $tmp1305 = 0;
                goto $l1303;
                $l1422:;
                $tmp316 = 31;
                goto $l314;
                $l1423:;
                return $returnValue325;
            }
            $l1303:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1306));
            result1306 = NULL;
            switch ($tmp1305) {
                case 0: goto $l1422;
            }
            $l1425:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1426, 27);
        panda$core$Bit $tmp1427 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1426);
        if ($tmp1427.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1429 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$193_9317->$data + 16));
            kind1428 = *$tmp1429;
            panda$collections$ImmutableArray** $tmp1431 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 24));
            paramTypes1430 = *$tmp1431;
            org$pandalanguage$pandac$ASTNode** $tmp1433 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 32));
            returnType1432 = *$tmp1433;
            int $tmp1436;
            {
                memset(&yield1437, 0, sizeof(yield1437));
                {
                    $match$381_171438 = kind1428;
                    panda$core$Int64$init$builtin_int64(&$tmp1439, 90);
                    panda$core$Bit $tmp1440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381_171438.$rawValue, $tmp1439);
                    if ($tmp1440.value) {
                    {
                        {
                            $tmp1441 = yield1437;
                            $tmp1442 = &$s1443;
                            yield1437 = $tmp1442;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1442));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1441));
                        }
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp1444, 91);
                    panda$core$Bit $tmp1445 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381_171438.$rawValue, $tmp1444);
                    if ($tmp1445.value) {
                    {
                        {
                            $tmp1446 = yield1437;
                            $tmp1447 = &$s1448;
                            yield1437 = $tmp1447;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1447));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1446));
                        }
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp1449, 92);
                    panda$core$Bit $tmp1450 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381_171438.$rawValue, $tmp1449);
                    if ($tmp1450.value) {
                    {
                        {
                            $tmp1451 = yield1437;
                            $tmp1452 = &$s1453;
                            yield1437 = $tmp1452;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1452));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1451));
                        }
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp1454, 93);
                    panda$core$Bit $tmp1455 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$381_171438.$rawValue, $tmp1454);
                    if ($tmp1455.value) {
                    {
                        {
                            $tmp1456 = yield1437;
                            $tmp1457 = &$s1458;
                            yield1437 = $tmp1457;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1457));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1456));
                        }
                    }
                    }
                    }
                    }
                    }
                }
                ITable* $tmp1467 = ((panda$collections$ListView*) paramTypes1430)->$class->itable;
                while ($tmp1467->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1467 = $tmp1467->next;
                }
                $fn1469 $tmp1468 = $tmp1467->methods[4];
                panda$core$String* $tmp1470 = $tmp1468(((panda$collections$ListView*) paramTypes1430));
                $tmp1466 = $tmp1470;
                panda$core$String* $tmp1471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1465, $tmp1466);
                $tmp1464 = $tmp1471;
                panda$core$String* $tmp1473 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1464, &$s1472);
                $tmp1463 = $tmp1473;
                panda$core$String* $tmp1474 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1463, yield1437);
                $tmp1462 = $tmp1474;
                panda$core$String* $tmp1476 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1462, &$s1475);
                $tmp1461 = $tmp1476;
                $tmp1460 = $tmp1461;
                partial1459 = $tmp1460;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1460));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1461));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1462));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1463));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1464));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1466));
                if (((panda$core$Bit) { returnType1432 != NULL }).value) {
                {
                    panda$core$String* $tmp1482 = panda$core$String$convert$R$panda$core$String(partial1459);
                    $tmp1481 = $tmp1482;
                    panda$core$String* $tmp1484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1481, &$s1483);
                    $tmp1480 = $tmp1484;
                    panda$core$String* $tmp1485 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1480, ((panda$core$Object*) returnType1432));
                    $tmp1479 = $tmp1485;
                    panda$core$String* $tmp1487 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1479, &$s1486);
                    $tmp1478 = $tmp1487;
                    $tmp1477 = $tmp1478;
                    $returnValue325 = $tmp1477;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1477));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1478));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1479));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1480));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1481));
                    $tmp1436 = 0;
                    goto $l1434;
                    $l1488:;
                    $tmp316 = 32;
                    goto $l314;
                    $l1489:;
                    return $returnValue325;
                }
                }
                panda$core$String* $tmp1494 = panda$core$String$convert$R$panda$core$String(partial1459);
                $tmp1493 = $tmp1494;
                panda$core$String* $tmp1496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1493, &$s1495);
                $tmp1492 = $tmp1496;
                $tmp1491 = $tmp1492;
                $returnValue325 = $tmp1491;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1491));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1492));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1493));
                $tmp1436 = 1;
                goto $l1434;
                $l1497:;
                $tmp316 = 33;
                goto $l314;
                $l1498:;
                return $returnValue325;
            }
            $l1434:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) partial1459));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) yield1437));
            partial1459 = NULL;
            switch ($tmp1436) {
                case 1: goto $l1497;
                case 0: goto $l1488;
            }
            $l1500:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1501, 28);
        panda$core$Bit $tmp1502 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1501);
        if ($tmp1502.value) {
        {
            $tmp1503 = &$s1504;
            $returnValue325 = $tmp1503;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1503));
            $tmp316 = 34;
            goto $l314;
            $l1505:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1507, 29);
        panda$core$Bit $tmp1508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1507);
        if ($tmp1508.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1510 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 16));
            base1509 = *$tmp1510;
            panda$core$String* $tmp1514 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) base1509), &$s1513);
            $tmp1512 = $tmp1514;
            $tmp1511 = $tmp1512;
            $returnValue325 = $tmp1511;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1511));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1512));
            $tmp316 = 35;
            goto $l314;
            $l1515:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1517, 30);
        panda$core$Bit $tmp1518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1517);
        if ($tmp1518.value) {
        {
            panda$core$String** $tmp1520 = ((panda$core$String**) ((char*) $match$193_9317->$data + 16));
            name1519 = *$tmp1520;
            $tmp1521 = name1519;
            $returnValue325 = $tmp1521;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1521));
            $tmp316 = 36;
            goto $l314;
            $l1522:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1524, 31);
        panda$core$Bit $tmp1525 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1524);
        if ($tmp1525.value) {
        {
            panda$core$String** $tmp1527 = ((panda$core$String**) ((char*) $match$193_9317->$data + 16));
            name1526 = *$tmp1527;
            org$pandalanguage$pandac$ASTNode** $tmp1529 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 24));
            type1528 = *$tmp1529;
            panda$core$String* $tmp1535 = panda$core$String$convert$R$panda$core$String(name1526);
            $tmp1534 = $tmp1535;
            panda$core$String* $tmp1537 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1534, &$s1536);
            $tmp1533 = $tmp1537;
            panda$core$String* $tmp1538 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1533, ((panda$core$Object*) type1528));
            $tmp1532 = $tmp1538;
            panda$core$String* $tmp1540 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1532, &$s1539);
            $tmp1531 = $tmp1540;
            $tmp1530 = $tmp1531;
            $returnValue325 = $tmp1530;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1530));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1531));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1532));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1533));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1534));
            $tmp316 = 37;
            goto $l314;
            $l1541:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1543, 32);
        panda$core$Bit $tmp1544 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1543);
        if ($tmp1544.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1546 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$193_9317->$data + 16));
            kind1545 = *$tmp1546;
            org$pandalanguage$pandac$ASTNode** $tmp1548 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 24));
            base1547 = *$tmp1548;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1555;
            $tmp1555 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp1555->value = kind1545;
            $tmp1554 = ((panda$core$Object*) $tmp1555);
            panda$core$String* $tmp1557 = (($fn1556) $tmp1554->$class->vtable[0])($tmp1554);
            $tmp1553 = $tmp1557;
            panda$core$String* $tmp1559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1553, &$s1558);
            $tmp1552 = $tmp1559;
            panda$core$String* $tmp1560 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1552, ((panda$core$Object*) base1547));
            $tmp1551 = $tmp1560;
            panda$core$String* $tmp1562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1551, &$s1561);
            $tmp1550 = $tmp1562;
            $tmp1549 = $tmp1550;
            $returnValue325 = $tmp1549;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1549));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1550));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1551));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1552));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1553));
            panda$core$Panda$unref$panda$core$Object($tmp1554);
            $tmp316 = 38;
            goto $l314;
            $l1563:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1565, 33);
        panda$core$Bit $tmp1566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1565);
        if ($tmp1566.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1568 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 16));
            start1567 = *$tmp1568;
            org$pandalanguage$pandac$ASTNode** $tmp1570 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 24));
            end1569 = *$tmp1570;
            panda$core$Bit* $tmp1572 = ((panda$core$Bit*) ((char*) $match$193_9317->$data + 32));
            inclusive1571 = *$tmp1572;
            org$pandalanguage$pandac$ASTNode** $tmp1574 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 33));
            step1573 = *$tmp1574;
            int $tmp1577;
            {
                panda$core$MutableString* $tmp1581 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1581);
                $tmp1580 = $tmp1581;
                $tmp1579 = $tmp1580;
                result1578 = $tmp1579;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1579));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1580));
                if (((panda$core$Bit) { start1567 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result1578, ((panda$core$Object*) start1567));
                }
                }
                if (inclusive1571.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1578, &$s1582);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(result1578, &$s1583);
                }
                }
                if (((panda$core$Bit) { end1569 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result1578, ((panda$core$Object*) end1569));
                }
                }
                if (((panda$core$Bit) { step1573 != NULL }).value) {
                {
                    panda$core$String* $tmp1586 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1585, ((panda$core$Object*) step1573));
                    $tmp1584 = $tmp1586;
                    panda$core$MutableString$append$panda$core$String(result1578, $tmp1584);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1584));
                }
                }
                panda$core$String* $tmp1589 = panda$core$MutableString$finish$R$panda$core$String(result1578);
                $tmp1588 = $tmp1589;
                $tmp1587 = $tmp1588;
                $returnValue325 = $tmp1587;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1587));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1588));
                $tmp1577 = 0;
                goto $l1575;
                $l1590:;
                $tmp316 = 39;
                goto $l314;
                $l1591:;
                return $returnValue325;
            }
            $l1575:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1578));
            result1578 = NULL;
            switch ($tmp1577) {
                case 0: goto $l1590;
            }
            $l1593:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1594, 34);
        panda$core$Bit $tmp1595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1594);
        if ($tmp1595.value) {
        {
            panda$core$Real64* $tmp1597 = ((panda$core$Real64*) ((char*) $match$193_9317->$data + 16));
            value1596 = *$tmp1597;
            panda$core$String* $tmp1600 = panda$core$Real64$convert$R$panda$core$String(value1596);
            $tmp1599 = $tmp1600;
            $tmp1598 = $tmp1599;
            $returnValue325 = $tmp1598;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1598));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1599));
            $tmp316 = 40;
            goto $l314;
            $l1601:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1603, 35);
        panda$core$Bit $tmp1604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1603);
        if ($tmp1604.value) {
        {
            panda$core$String** $tmp1606 = ((panda$core$String**) ((char*) $match$193_9317->$data + 16));
            src1605 = *$tmp1606;
            panda$core$String* $tmp1611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1610, src1605);
            $tmp1609 = $tmp1611;
            panda$core$String* $tmp1613 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1609, &$s1612);
            $tmp1608 = $tmp1613;
            $tmp1607 = $tmp1608;
            $returnValue325 = $tmp1607;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1607));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1608));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1609));
            $tmp316 = 41;
            goto $l314;
            $l1614:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1616, 36);
        panda$core$Bit $tmp1617 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1616);
        if ($tmp1617.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1619 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 16));
            value1618 = *$tmp1619;
            if (((panda$core$Bit) { value1618 != NULL }).value) {
            {
                panda$core$String* $tmp1624 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1623, ((panda$core$Object*) value1618));
                $tmp1622 = $tmp1624;
                panda$core$String* $tmp1626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1622, &$s1625);
                $tmp1621 = $tmp1626;
                $tmp1620 = $tmp1621;
                $returnValue325 = $tmp1620;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1620));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1621));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1622));
                $tmp316 = 42;
                goto $l314;
                $l1627:;
                return $returnValue325;
            }
            }
            $tmp1629 = &$s1630;
            $returnValue325 = $tmp1629;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1629));
            $tmp316 = 43;
            goto $l314;
            $l1631:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1633, 37);
        panda$core$Bit $tmp1634 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1633);
        if ($tmp1634.value) {
        {
            $tmp1635 = &$s1636;
            $returnValue325 = $tmp1635;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1635));
            $tmp316 = 44;
            goto $l314;
            $l1637:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1639, 38);
        panda$core$Bit $tmp1640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1639);
        if ($tmp1640.value) {
        {
            panda$core$String** $tmp1642 = ((panda$core$String**) ((char*) $match$193_9317->$data + 16));
            str1641 = *$tmp1642;
            panda$core$String* $tmp1646 = panda$core$String$format$panda$core$String$R$panda$core$String(str1641, &$s1645);
            $tmp1644 = $tmp1646;
            $tmp1643 = $tmp1644;
            $returnValue325 = $tmp1643;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1643));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1644));
            $tmp316 = 45;
            goto $l314;
            $l1647:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1649, 39);
        panda$core$Bit $tmp1650 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1649);
        if ($tmp1650.value) {
        {
            $tmp1651 = &$s1652;
            $returnValue325 = $tmp1651;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1651));
            $tmp316 = 46;
            goto $l314;
            $l1653:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1655, 40);
        panda$core$Bit $tmp1656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1655);
        if ($tmp1656.value) {
        {
            panda$collections$ImmutableArray** $tmp1658 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 16));
            arguments1657 = *$tmp1658;
            ITable* $tmp1664 = ((panda$collections$ListView*) arguments1657)->$class->itable;
            while ($tmp1664->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1664 = $tmp1664->next;
            }
            $fn1666 $tmp1665 = $tmp1664->methods[4];
            panda$core$String* $tmp1667 = $tmp1665(((panda$collections$ListView*) arguments1657));
            $tmp1663 = $tmp1667;
            panda$core$String* $tmp1668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1662, $tmp1663);
            $tmp1661 = $tmp1668;
            panda$core$String* $tmp1670 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1661, &$s1669);
            $tmp1660 = $tmp1670;
            $tmp1659 = $tmp1660;
            $returnValue325 = $tmp1659;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1659));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1660));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1661));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1663));
            $tmp316 = 47;
            goto $l314;
            $l1671:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1673, 41);
        panda$core$Bit $tmp1674 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1673);
        if ($tmp1674.value) {
        {
            panda$collections$ImmutableArray** $tmp1676 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 16));
            parameters1675 = *$tmp1676;
            ITable* $tmp1682 = ((panda$collections$ListView*) parameters1675)->$class->itable;
            while ($tmp1682->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1682 = $tmp1682->next;
            }
            $fn1684 $tmp1683 = $tmp1682->methods[4];
            panda$core$String* $tmp1685 = $tmp1683(((panda$collections$ListView*) parameters1675));
            $tmp1681 = $tmp1685;
            panda$core$String* $tmp1686 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1680, $tmp1681);
            $tmp1679 = $tmp1686;
            panda$core$String* $tmp1688 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1679, &$s1687);
            $tmp1678 = $tmp1688;
            $tmp1677 = $tmp1678;
            $returnValue325 = $tmp1677;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1677));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1678));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1679));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1681));
            $tmp316 = 48;
            goto $l314;
            $l1689:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1691, 42);
        panda$core$Bit $tmp1692 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1691);
        if ($tmp1692.value) {
        {
            panda$core$String** $tmp1694 = ((panda$core$String**) ((char*) $match$193_9317->$data + 16));
            name1693 = *$tmp1694;
            $tmp1695 = name1693;
            $returnValue325 = $tmp1695;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1695));
            $tmp316 = 49;
            goto $l314;
            $l1696:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1698, 44);
        panda$core$Bit $tmp1699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1698);
        if ($tmp1699.value) {
        {
            panda$core$String** $tmp1701 = ((panda$core$String**) ((char*) $match$193_9317->$data + 16));
            name1700 = *$tmp1701;
            org$pandalanguage$pandac$ASTNode** $tmp1703 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 24));
            type1702 = *$tmp1703;
            if (((panda$core$Bit) { type1702 != NULL }).value) {
            {
                panda$core$String* $tmp1709 = panda$core$String$convert$R$panda$core$String(name1700);
                $tmp1708 = $tmp1709;
                panda$core$String* $tmp1711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1708, &$s1710);
                $tmp1707 = $tmp1711;
                panda$core$String* $tmp1712 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1707, ((panda$core$Object*) type1702));
                $tmp1706 = $tmp1712;
                panda$core$String* $tmp1714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1706, &$s1713);
                $tmp1705 = $tmp1714;
                $tmp1704 = $tmp1705;
                $returnValue325 = $tmp1704;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1704));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1705));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1706));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1707));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1708));
                $tmp316 = 50;
                goto $l314;
                $l1715:;
                return $returnValue325;
            }
            }
            $tmp1717 = name1700;
            $returnValue325 = $tmp1717;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1717));
            $tmp316 = 51;
            goto $l314;
            $l1718:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1720, 43);
        panda$core$Bit $tmp1721 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1720);
        if ($tmp1721.value) {
        {
            panda$collections$ImmutableArray** $tmp1723 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 16));
            parameters1722 = *$tmp1723;
            org$pandalanguage$pandac$ASTNode** $tmp1725 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 24));
            body1724 = *$tmp1725;
            ITable* $tmp1733 = ((panda$collections$ListView*) parameters1722)->$class->itable;
            while ($tmp1733->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1733 = $tmp1733->next;
            }
            $fn1735 $tmp1734 = $tmp1733->methods[4];
            panda$core$String* $tmp1736 = $tmp1734(((panda$collections$ListView*) parameters1722));
            $tmp1732 = $tmp1736;
            panda$core$String* $tmp1737 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1731, $tmp1732);
            $tmp1730 = $tmp1737;
            panda$core$String* $tmp1739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1730, &$s1738);
            $tmp1729 = $tmp1739;
            panda$core$String* $tmp1740 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1729, ((panda$core$Object*) body1724));
            $tmp1728 = $tmp1740;
            panda$core$String* $tmp1742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1728, &$s1741);
            $tmp1727 = $tmp1742;
            $tmp1726 = $tmp1727;
            $returnValue325 = $tmp1726;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1726));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1727));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1728));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1729));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1730));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1732));
            $tmp316 = 52;
            goto $l314;
            $l1743:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1745, 45);
        panda$core$Bit $tmp1746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1745);
        if ($tmp1746.value) {
        {
            panda$collections$ImmutableArray** $tmp1748 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 16));
            parameters1747 = *$tmp1748;
            org$pandalanguage$pandac$ASTNode** $tmp1750 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 24));
            body1749 = *$tmp1750;
            ITable* $tmp1758 = ((panda$collections$ListView*) parameters1747)->$class->itable;
            while ($tmp1758->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp1758 = $tmp1758->next;
            }
            $fn1760 $tmp1759 = $tmp1758->methods[4];
            panda$core$String* $tmp1761 = $tmp1759(((panda$collections$ListView*) parameters1747));
            $tmp1757 = $tmp1761;
            panda$core$String* $tmp1762 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1756, $tmp1757);
            $tmp1755 = $tmp1762;
            panda$core$String* $tmp1764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1755, &$s1763);
            $tmp1754 = $tmp1764;
            panda$core$String* $tmp1765 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1754, ((panda$core$Object*) body1749));
            $tmp1753 = $tmp1765;
            panda$core$String* $tmp1767 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1753, &$s1766);
            $tmp1752 = $tmp1767;
            $tmp1751 = $tmp1752;
            $returnValue325 = $tmp1751;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1751));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1752));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1753));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1754));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1755));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1757));
            $tmp316 = 53;
            goto $l314;
            $l1768:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1770, 46);
        panda$core$Bit $tmp1771 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1770);
        if ($tmp1771.value) {
        {
            panda$core$String** $tmp1773 = ((panda$core$String**) ((char*) $match$193_9317->$data + 16));
            name1772 = *$tmp1773;
            $tmp1774 = name1772;
            $returnValue325 = $tmp1774;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1774));
            $tmp316 = 54;
            goto $l314;
            $l1775:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1777, 47);
        panda$core$Bit $tmp1778 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1777);
        if ($tmp1778.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp1780 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$193_9317->$data + 16));
            kind1779 = *$tmp1780;
            panda$collections$ImmutableArray** $tmp1782 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 24));
            decls1781 = *$tmp1782;
            int $tmp1785;
            {
                panda$core$MutableString* $tmp1789 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1789);
                $tmp1788 = $tmp1789;
                $tmp1787 = $tmp1788;
                result1786 = $tmp1787;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1787));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1788));
                {
                    $match$458_171790 = kind1779;
                    panda$core$Int64$init$builtin_int64(&$tmp1791, 0);
                    panda$core$Bit $tmp1792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$458_171790.$rawValue, $tmp1791);
                    if ($tmp1792.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1786, &$s1793);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp1794, 1);
                    panda$core$Bit $tmp1795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$458_171790.$rawValue, $tmp1794);
                    if ($tmp1795.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1786, &$s1796);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp1797, 2);
                    panda$core$Bit $tmp1798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$458_171790.$rawValue, $tmp1797);
                    if ($tmp1798.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1786, &$s1799);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp1800, 3);
                    panda$core$Bit $tmp1801 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$458_171790.$rawValue, $tmp1800);
                    if ($tmp1801.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1786, &$s1802);
                    }
                    }
                    }
                    }
                    }
                }
                ITable* $tmp1804 = ((panda$collections$ListView*) decls1781)->$class->itable;
                while ($tmp1804->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1804 = $tmp1804->next;
                }
                $fn1806 $tmp1805 = $tmp1804->methods[4];
                panda$core$String* $tmp1807 = $tmp1805(((panda$collections$ListView*) decls1781));
                $tmp1803 = $tmp1807;
                panda$core$MutableString$append$panda$core$String(result1786, $tmp1803);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1803));
                panda$core$String* $tmp1810 = panda$core$MutableString$finish$R$panda$core$String(result1786);
                $tmp1809 = $tmp1810;
                $tmp1808 = $tmp1809;
                $returnValue325 = $tmp1808;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1808));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1809));
                $tmp1785 = 0;
                goto $l1783;
                $l1811:;
                $tmp316 = 55;
                goto $l314;
                $l1812:;
                return $returnValue325;
            }
            $l1783:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1786));
            result1786 = NULL;
            switch ($tmp1785) {
                case 0: goto $l1811;
            }
            $l1814:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1815, 48);
        panda$core$Bit $tmp1816 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1815);
        if ($tmp1816.value) {
        {
            panda$collections$ImmutableArray** $tmp1818 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 16));
            tests1817 = *$tmp1818;
            panda$collections$ImmutableArray** $tmp1820 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 24));
            statements1819 = *$tmp1820;
            int $tmp1823;
            {
                panda$core$MutableString* $tmp1827 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1827, &$s1828);
                $tmp1826 = $tmp1827;
                $tmp1825 = $tmp1826;
                result1824 = $tmp1825;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1825));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1826));
                $tmp1830 = &$s1831;
                separator1829 = $tmp1830;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1830));
                {
                    int $tmp1834;
                    {
                        ITable* $tmp1838 = ((panda$collections$Iterable*) tests1817)->$class->itable;
                        while ($tmp1838->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1838 = $tmp1838->next;
                        }
                        $fn1840 $tmp1839 = $tmp1838->methods[0];
                        panda$collections$Iterator* $tmp1841 = $tmp1839(((panda$collections$Iterable*) tests1817));
                        $tmp1837 = $tmp1841;
                        $tmp1836 = $tmp1837;
                        Iter$469$171835 = $tmp1836;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1836));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1837));
                        $l1842:;
                        ITable* $tmp1845 = Iter$469$171835->$class->itable;
                        while ($tmp1845->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1845 = $tmp1845->next;
                        }
                        $fn1847 $tmp1846 = $tmp1845->methods[0];
                        panda$core$Bit $tmp1848 = $tmp1846(Iter$469$171835);
                        panda$core$Bit $tmp1849 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1848);
                        bool $tmp1844 = $tmp1849.value;
                        if (!$tmp1844) goto $l1843;
                        {
                            int $tmp1852;
                            {
                                ITable* $tmp1856 = Iter$469$171835->$class->itable;
                                while ($tmp1856->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1856 = $tmp1856->next;
                                }
                                $fn1858 $tmp1857 = $tmp1856->methods[1];
                                panda$core$Object* $tmp1859 = $tmp1857(Iter$469$171835);
                                $tmp1855 = $tmp1859;
                                $tmp1854 = ((org$pandalanguage$pandac$ASTNode*) $tmp1855);
                                t1853 = $tmp1854;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1854));
                                panda$core$Panda$unref$panda$core$Object($tmp1855);
                                panda$core$String* $tmp1864 = panda$core$String$convert$R$panda$core$String(separator1829);
                                $tmp1863 = $tmp1864;
                                panda$core$String* $tmp1866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1863, &$s1865);
                                $tmp1862 = $tmp1866;
                                panda$core$String* $tmp1867 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1862, ((panda$core$Object*) t1853));
                                $tmp1861 = $tmp1867;
                                panda$core$String* $tmp1869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1861, &$s1868);
                                $tmp1860 = $tmp1869;
                                panda$core$MutableString$append$panda$core$String(result1824, $tmp1860);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1860));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1861));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1862));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1863));
                            }
                            $tmp1852 = -1;
                            goto $l1850;
                            $l1850:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1853));
                            t1853 = NULL;
                            switch ($tmp1852) {
                                case -1: goto $l1870;
                            }
                            $l1870:;
                        }
                        goto $l1842;
                        $l1843:;
                    }
                    $tmp1834 = -1;
                    goto $l1832;
                    $l1832:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$469$171835));
                    Iter$469$171835 = NULL;
                    switch ($tmp1834) {
                        case -1: goto $l1871;
                    }
                    $l1871:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp1873, 58);
                panda$core$Char8$init$panda$core$UInt8(&$tmp1872, $tmp1873);
                panda$core$MutableString$append$panda$core$Char8(result1824, $tmp1872);
                {
                    int $tmp1876;
                    {
                        ITable* $tmp1880 = ((panda$collections$Iterable*) statements1819)->$class->itable;
                        while ($tmp1880->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1880 = $tmp1880->next;
                        }
                        $fn1882 $tmp1881 = $tmp1880->methods[0];
                        panda$collections$Iterator* $tmp1883 = $tmp1881(((panda$collections$Iterable*) statements1819));
                        $tmp1879 = $tmp1883;
                        $tmp1878 = $tmp1879;
                        Iter$473$171877 = $tmp1878;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1878));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1879));
                        $l1884:;
                        ITable* $tmp1887 = Iter$473$171877->$class->itable;
                        while ($tmp1887->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1887 = $tmp1887->next;
                        }
                        $fn1889 $tmp1888 = $tmp1887->methods[0];
                        panda$core$Bit $tmp1890 = $tmp1888(Iter$473$171877);
                        panda$core$Bit $tmp1891 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1890);
                        bool $tmp1886 = $tmp1891.value;
                        if (!$tmp1886) goto $l1885;
                        {
                            int $tmp1894;
                            {
                                ITable* $tmp1898 = Iter$473$171877->$class->itable;
                                while ($tmp1898->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1898 = $tmp1898->next;
                                }
                                $fn1900 $tmp1899 = $tmp1898->methods[1];
                                panda$core$Object* $tmp1901 = $tmp1899(Iter$473$171877);
                                $tmp1897 = $tmp1901;
                                $tmp1896 = ((org$pandalanguage$pandac$ASTNode*) $tmp1897);
                                s1895 = $tmp1896;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1896));
                                panda$core$Panda$unref$panda$core$Object($tmp1897);
                                panda$core$String* $tmp1904 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1903, ((panda$core$Object*) s1895));
                                $tmp1902 = $tmp1904;
                                panda$core$MutableString$append$panda$core$String(result1824, $tmp1902);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1902));
                            }
                            $tmp1894 = -1;
                            goto $l1892;
                            $l1892:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1895));
                            s1895 = NULL;
                            switch ($tmp1894) {
                                case -1: goto $l1905;
                            }
                            $l1905:;
                        }
                        goto $l1884;
                        $l1885:;
                    }
                    $tmp1876 = -1;
                    goto $l1874;
                    $l1874:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$473$171877));
                    Iter$473$171877 = NULL;
                    switch ($tmp1876) {
                        case -1: goto $l1906;
                    }
                    $l1906:;
                }
                panda$core$String* $tmp1909 = panda$core$MutableString$finish$R$panda$core$String(result1824);
                $tmp1908 = $tmp1909;
                $tmp1907 = $tmp1908;
                $returnValue325 = $tmp1907;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1907));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1908));
                $tmp1823 = 0;
                goto $l1821;
                $l1910:;
                $tmp316 = 56;
                goto $l314;
                $l1911:;
                return $returnValue325;
            }
            $l1821:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1829));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1824));
            result1824 = NULL;
            separator1829 = NULL;
            switch ($tmp1823) {
                case 0: goto $l1910;
            }
            $l1913:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1914, 49);
        panda$core$Bit $tmp1915 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1914);
        if ($tmp1915.value) {
        {
            panda$core$String** $tmp1917 = ((panda$core$String**) ((char*) $match$193_9317->$data + 16));
            label1916 = *$tmp1917;
            org$pandalanguage$pandac$ASTNode** $tmp1919 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 24));
            test1918 = *$tmp1919;
            panda$collections$ImmutableArray** $tmp1921 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 32));
            statements1920 = *$tmp1921;
            int $tmp1924;
            {
                panda$core$MutableString* $tmp1928 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1928);
                $tmp1927 = $tmp1928;
                $tmp1926 = $tmp1927;
                result1925 = $tmp1926;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1926));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1927));
                if (((panda$core$Bit) { label1916 != NULL }).value) {
                {
                    panda$core$String* $tmp1931 = panda$core$String$convert$R$panda$core$String(label1916);
                    $tmp1930 = $tmp1931;
                    panda$core$String* $tmp1933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1930, &$s1932);
                    $tmp1929 = $tmp1933;
                    panda$core$MutableString$append$panda$core$String(result1925, $tmp1929);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1929));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1930));
                }
                }
                panda$core$String* $tmp1937 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1936, ((panda$core$Object*) test1918));
                $tmp1935 = $tmp1937;
                panda$core$String* $tmp1939 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1935, &$s1938);
                $tmp1934 = $tmp1939;
                panda$core$MutableString$append$panda$core$String(result1925, $tmp1934);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1934));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1935));
                {
                    int $tmp1942;
                    {
                        ITable* $tmp1946 = ((panda$collections$Iterable*) statements1920)->$class->itable;
                        while ($tmp1946->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1946 = $tmp1946->next;
                        }
                        $fn1948 $tmp1947 = $tmp1946->methods[0];
                        panda$collections$Iterator* $tmp1949 = $tmp1947(((panda$collections$Iterable*) statements1920));
                        $tmp1945 = $tmp1949;
                        $tmp1944 = $tmp1945;
                        Iter$483$171943 = $tmp1944;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1944));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1945));
                        $l1950:;
                        ITable* $tmp1953 = Iter$483$171943->$class->itable;
                        while ($tmp1953->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1953 = $tmp1953->next;
                        }
                        $fn1955 $tmp1954 = $tmp1953->methods[0];
                        panda$core$Bit $tmp1956 = $tmp1954(Iter$483$171943);
                        panda$core$Bit $tmp1957 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1956);
                        bool $tmp1952 = $tmp1957.value;
                        if (!$tmp1952) goto $l1951;
                        {
                            int $tmp1960;
                            {
                                ITable* $tmp1964 = Iter$483$171943->$class->itable;
                                while ($tmp1964->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1964 = $tmp1964->next;
                                }
                                $fn1966 $tmp1965 = $tmp1964->methods[1];
                                panda$core$Object* $tmp1967 = $tmp1965(Iter$483$171943);
                                $tmp1963 = $tmp1967;
                                $tmp1962 = ((org$pandalanguage$pandac$ASTNode*) $tmp1963);
                                s1961 = $tmp1962;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1962));
                                panda$core$Panda$unref$panda$core$Object($tmp1963);
                                panda$core$String* $tmp1970 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1961), &$s1969);
                                $tmp1968 = $tmp1970;
                                panda$core$MutableString$append$panda$core$String(result1925, $tmp1968);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1968));
                            }
                            $tmp1960 = -1;
                            goto $l1958;
                            $l1958:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1961));
                            s1961 = NULL;
                            switch ($tmp1960) {
                                case -1: goto $l1971;
                            }
                            $l1971:;
                        }
                        goto $l1950;
                        $l1951:;
                    }
                    $tmp1942 = -1;
                    goto $l1940;
                    $l1940:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$483$171943));
                    Iter$483$171943 = NULL;
                    switch ($tmp1942) {
                        case -1: goto $l1972;
                    }
                    $l1972:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp1974, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp1973, $tmp1974);
                panda$core$MutableString$append$panda$core$Char8(result1925, $tmp1973);
                panda$core$String* $tmp1977 = panda$core$MutableString$finish$R$panda$core$String(result1925);
                $tmp1976 = $tmp1977;
                $tmp1975 = $tmp1976;
                $returnValue325 = $tmp1975;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1975));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1976));
                $tmp1924 = 0;
                goto $l1922;
                $l1978:;
                $tmp316 = 57;
                goto $l314;
                $l1979:;
                return $returnValue325;
            }
            $l1922:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1925));
            result1925 = NULL;
            switch ($tmp1924) {
                case 0: goto $l1978;
            }
            $l1981:;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1982, false);
            if ($tmp1982.value) goto $l1983; else goto $l1984;
            $l1984:;
            panda$core$Int64$wrapper* $tmp1990;
            $tmp1990 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1990->value = self->$rawValue;
            $tmp1989 = ((panda$core$Object*) $tmp1990);
            panda$core$String* $tmp1991 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1988, $tmp1989);
            $tmp1987 = $tmp1991;
            panda$core$String* $tmp1993 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1987, &$s1992);
            $tmp1986 = $tmp1993;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1985, (panda$core$Int64) { 489 }, $tmp1986);
            abort();
            $l1983:;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }
    $tmp316 = -1;
    goto $l314;
    $l314:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp318));
    switch ($tmp316) {
        case 28: goto $l1156;
        case 32: goto $l1489;
        case 7: goto $l426;
        case 36: goto $l1522;
        case 24: goto $l1061;
        case 48: goto $l1689;
        case 23: goto $l1036;
        case 18: goto $l768;
        case 6: goto $l417;
        case 19: goto $l834;
        case 4: goto $l382;
        case 51: goto $l1718;
        case 9: goto $l493;
        case 21: goto $l912;
        case 42: goto $l1627;
        case 47: goto $l1671;
        case 0: goto $l337;
        case 20: goto $l855;
        case 56: goto $l1911;
        case 25: goto $l1068;
        case 52: goto $l1743;
        case 37: goto $l1541;
        case 1: goto $l340;
        case 8: goto $l479;
        case 46: goto $l1653;
        case 49: goto $l1696;
        case 41: goto $l1614;
        case 44: goto $l1637;
        case 31: goto $l1423;
        case 55: goto $l1812;
        case 2: goto $l355;
        case 17: goto $l762;
        case 54: goto $l1775;
        case 30: goto $l1282;
        case 53: goto $l1768;
        case -1: goto $l1994;
        case 45: goto $l1647;
        case 50: goto $l1715;
        case 16: goto $l742;
        case 35: goto $l1515;
        case 33: goto $l1498;
        case 12: goto $l561;
        case 5: goto $l388;
        case 34: goto $l1505;
        case 3: goto $l369;
        case 38: goto $l1563;
        case 13: goto $l591;
        case 11: goto $l522;
        case 27: goto $l1146;
        case 26: goto $l1136;
        case 10: goto $l497;
        case 15: goto $l738;
        case 29: goto $l1216;
        case 40: goto $l1601;
        case 39: goto $l1591;
        case 14: goto $l724;
        case 43: goto $l1631;
        case 57: goto $l1979;
        case 22: goto $l963;
    }
    $l1994:;
    abort();
}
void org$pandalanguage$pandac$ASTNode$cleanup(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$5_12001 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp2002;
    panda$core$Int64 $tmp2003;
    org$pandalanguage$pandac$Position _f02005;
    panda$core$String* _f12007 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22009 = NULL;
    panda$core$Int64 $tmp2011;
    org$pandalanguage$pandac$Position _f02013;
    org$pandalanguage$pandac$ASTNode* _f12015 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22017 = NULL;
    panda$core$Int64 $tmp2019;
    org$pandalanguage$pandac$Position _f02021;
    org$pandalanguage$pandac$ASTNode* _f12023 = NULL;
    panda$core$Int64 $tmp2025;
    org$pandalanguage$pandac$Position _f02027;
    panda$core$Int64 $tmp2029;
    org$pandalanguage$pandac$Position _f02031;
    org$pandalanguage$pandac$ASTNode* _f12033 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind _f22035;
    org$pandalanguage$pandac$ASTNode* _f32037 = NULL;
    panda$core$Int64 $tmp2039;
    org$pandalanguage$pandac$Position _f02041;
    panda$core$Bit _f12043;
    panda$core$Int64 $tmp2045;
    org$pandalanguage$pandac$Position _f02047;
    panda$collections$ImmutableArray* _f12049 = NULL;
    panda$core$Int64 $tmp2051;
    org$pandalanguage$pandac$Position _f02053;
    panda$core$String* _f12055 = NULL;
    panda$core$Int64 $tmp2057;
    org$pandalanguage$pandac$Position _f02059;
    org$pandalanguage$pandac$ASTNode* _f12061 = NULL;
    panda$collections$ImmutableArray* _f22063 = NULL;
    panda$core$Int64 $tmp2065;
    org$pandalanguage$pandac$Position _f02067;
    org$pandalanguage$pandac$ASTNode* _f12069 = NULL;
    panda$core$String* _f22071 = NULL;
    panda$collections$ImmutableArray* _f32073 = NULL;
    panda$core$Int64 $tmp2075;
    org$pandalanguage$pandac$Position _f02077;
    org$pandalanguage$pandac$ASTNode* _f12079 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* _f22081 = NULL;
    panda$core$Int64 _f32083;
    panda$core$Int64 $tmp2085;
    org$pandalanguage$pandac$Position _f02087;
    org$pandalanguage$pandac$ASTNode* _f12089 = NULL;
    panda$collections$ImmutableArray* _f22091 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind _f32093;
    panda$core$String* _f42095 = NULL;
    panda$collections$ImmutableArray* _f52097 = NULL;
    panda$collections$ImmutableArray* _f62099 = NULL;
    panda$collections$ImmutableArray* _f72101 = NULL;
    panda$core$Int64 $tmp2103;
    org$pandalanguage$pandac$Position _f02105;
    panda$core$String* _f12107 = NULL;
    panda$core$Int64 $tmp2109;
    org$pandalanguage$pandac$Position _f02111;
    org$pandalanguage$pandac$ASTNode* _f12113 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22115 = NULL;
    panda$core$Int64 $tmp2117;
    org$pandalanguage$pandac$Position _f02119;
    panda$core$String* _f12121 = NULL;
    panda$collections$ImmutableArray* _f22123 = NULL;
    org$pandalanguage$pandac$ASTNode* _f32125 = NULL;
    panda$core$Int64 $tmp2127;
    org$pandalanguage$pandac$Position _f02129;
    org$pandalanguage$pandac$ASTNode* _f12131 = NULL;
    panda$core$String* _f22133 = NULL;
    panda$core$Int64 $tmp2135;
    org$pandalanguage$pandac$Position _f02137;
    org$pandalanguage$pandac$ASTNode* _f12139 = NULL;
    panda$collections$ImmutableArray* _f22141 = NULL;
    org$pandalanguage$pandac$ASTNode* _f32143 = NULL;
    panda$core$Int64 $tmp2145;
    panda$collections$ImmutableArray* _f02147 = NULL;
    panda$core$Int64 $tmp2149;
    org$pandalanguage$pandac$Position _f02151;
    panda$core$String* _f12153 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22155 = NULL;
    org$pandalanguage$pandac$ASTNode* _f32157 = NULL;
    panda$collections$ImmutableArray* _f42159 = NULL;
    panda$core$Int64 $tmp2161;
    org$pandalanguage$pandac$Position _f02163;
    panda$core$String* _f12165 = NULL;
    panda$collections$ImmutableArray* _f22167 = NULL;
    panda$core$Int64 $tmp2169;
    org$pandalanguage$pandac$Position _f02171;
    panda$core$String* _f12173 = NULL;
    panda$core$Int64 $tmp2175;
    org$pandalanguage$pandac$Position _f02177;
    org$pandalanguage$pandac$ASTNode* _f12179 = NULL;
    panda$collections$ImmutableArray* _f22181 = NULL;
    org$pandalanguage$pandac$ASTNode* _f32183 = NULL;
    panda$core$Int64 $tmp2185;
    org$pandalanguage$pandac$Position _f02187;
    panda$core$UInt64 _f12189;
    panda$core$Int64 $tmp2191;
    org$pandalanguage$pandac$IRNode* _f02193 = NULL;
    panda$core$Int64 $tmp2195;
    org$pandalanguage$pandac$Position _f02197;
    panda$core$String* _f12199 = NULL;
    panda$collections$ImmutableArray* _f22201 = NULL;
    panda$core$Int64 $tmp2203;
    org$pandalanguage$pandac$Position _f02205;
    org$pandalanguage$pandac$ASTNode* _f12207 = NULL;
    panda$collections$ImmutableArray* _f22209 = NULL;
    panda$collections$ImmutableArray* _f32211 = NULL;
    panda$core$Int64 $tmp2213;
    org$pandalanguage$pandac$Position _f02215;
    org$pandalanguage$pandac$ASTNode* _f12217 = NULL;
    panda$collections$ImmutableArray* _f22219 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind _f32221;
    panda$core$String* _f42223 = NULL;
    panda$collections$ImmutableArray* _f52225 = NULL;
    panda$collections$ImmutableArray* _f62227 = NULL;
    org$pandalanguage$pandac$ASTNode* _f72229 = NULL;
    panda$collections$ImmutableArray* _f82231 = NULL;
    panda$core$Int64 $tmp2233;
    org$pandalanguage$pandac$Position _f02235;
    org$pandalanguage$pandac$parser$Token$Kind _f12237;
    panda$collections$ImmutableArray* _f22239 = NULL;
    org$pandalanguage$pandac$ASTNode* _f32241 = NULL;
    panda$core$Int64 $tmp2243;
    org$pandalanguage$pandac$Position _f02245;
    panda$core$Int64 $tmp2247;
    org$pandalanguage$pandac$Position _f02249;
    org$pandalanguage$pandac$ASTNode* _f12251 = NULL;
    panda$core$Int64 $tmp2253;
    org$pandalanguage$pandac$Position _f02255;
    panda$core$String* _f12257 = NULL;
    panda$core$Int64 $tmp2259;
    org$pandalanguage$pandac$Position _f02261;
    panda$core$String* _f12263 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22265 = NULL;
    panda$core$Int64 $tmp2267;
    org$pandalanguage$pandac$Position _f02269;
    org$pandalanguage$pandac$parser$Token$Kind _f12271;
    org$pandalanguage$pandac$ASTNode* _f22273 = NULL;
    panda$core$Int64 $tmp2275;
    org$pandalanguage$pandac$Position _f02277;
    org$pandalanguage$pandac$ASTNode* _f12279 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22281 = NULL;
    panda$core$Bit _f32283;
    org$pandalanguage$pandac$ASTNode* _f42285 = NULL;
    panda$core$Int64 $tmp2287;
    org$pandalanguage$pandac$Position _f02289;
    panda$core$Real64 _f12291;
    panda$core$Int64 $tmp2293;
    org$pandalanguage$pandac$Position _f02295;
    panda$core$String* _f12297 = NULL;
    panda$core$Int64 $tmp2299;
    org$pandalanguage$pandac$Position _f02301;
    org$pandalanguage$pandac$ASTNode* _f12303 = NULL;
    panda$core$Int64 $tmp2305;
    org$pandalanguage$pandac$Position _f02307;
    panda$core$Int64 $tmp2309;
    org$pandalanguage$pandac$Position _f02311;
    panda$core$String* _f12313 = NULL;
    panda$core$Int64 $tmp2315;
    org$pandalanguage$pandac$Position _f02317;
    panda$core$Int64 $tmp2319;
    org$pandalanguage$pandac$Position _f02321;
    panda$collections$ImmutableArray* _f12323 = NULL;
    panda$core$Int64 $tmp2325;
    org$pandalanguage$pandac$Position _f02327;
    panda$collections$ImmutableArray* _f12329 = NULL;
    panda$core$Int64 $tmp2331;
    org$pandalanguage$pandac$Position _f02333;
    panda$core$String* _f12335 = NULL;
    panda$core$Int64 $tmp2337;
    org$pandalanguage$pandac$Position _f02339;
    panda$collections$ImmutableArray* _f12341 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22343 = NULL;
    panda$core$Int64 $tmp2345;
    org$pandalanguage$pandac$Position _f02347;
    panda$core$String* _f12349 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22351 = NULL;
    panda$core$Int64 $tmp2353;
    org$pandalanguage$pandac$Position _f02355;
    panda$collections$ImmutableArray* _f12357 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22359 = NULL;
    panda$core$Int64 $tmp2361;
    org$pandalanguage$pandac$Position _f02363;
    panda$core$String* _f12365 = NULL;
    panda$core$Int64 $tmp2367;
    org$pandalanguage$pandac$Position _f02369;
    org$pandalanguage$pandac$Variable$Kind _f12371;
    panda$collections$ImmutableArray* _f22373 = NULL;
    panda$core$Int64 $tmp2375;
    org$pandalanguage$pandac$Position _f02377;
    panda$collections$ImmutableArray* _f12379 = NULL;
    panda$collections$ImmutableArray* _f22381 = NULL;
    panda$core$Int64 $tmp2383;
    org$pandalanguage$pandac$Position _f02385;
    panda$core$String* _f12387 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22389 = NULL;
    panda$collections$ImmutableArray* _f32391 = NULL;
    int $tmp1997;
    {
        int $tmp2000;
        {
            $tmp2002 = self;
            $match$5_12001 = $tmp2002;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2002));
            panda$core$Int64$init$builtin_int64(&$tmp2003, 0);
            panda$core$Bit $tmp2004 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2003);
            if ($tmp2004.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2006 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02005 = *$tmp2006;
                panda$core$String** $tmp2008 = ((panda$core$String**) ((char*) $match$5_12001->$data + 16));
                _f12007 = *$tmp2008;
                org$pandalanguage$pandac$ASTNode** $tmp2010 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 24));
                _f22009 = *$tmp2010;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12007));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22009));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2011, 1);
            panda$core$Bit $tmp2012 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2011);
            if ($tmp2012.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2014 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02013 = *$tmp2014;
                org$pandalanguage$pandac$ASTNode** $tmp2016 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 16));
                _f12015 = *$tmp2016;
                org$pandalanguage$pandac$ASTNode** $tmp2018 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 24));
                _f22017 = *$tmp2018;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12015));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22017));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2019, 2);
            panda$core$Bit $tmp2020 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2019);
            if ($tmp2020.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2022 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02021 = *$tmp2022;
                org$pandalanguage$pandac$ASTNode** $tmp2024 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 16));
                _f12023 = *$tmp2024;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12023));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2025, 3);
            panda$core$Bit $tmp2026 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2025);
            if ($tmp2026.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2028 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02027 = *$tmp2028;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2029, 4);
            panda$core$Bit $tmp2030 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2029);
            if ($tmp2030.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2032 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02031 = *$tmp2032;
                org$pandalanguage$pandac$ASTNode** $tmp2034 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 16));
                _f12033 = *$tmp2034;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2036 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12001->$data + 24));
                _f22035 = *$tmp2036;
                org$pandalanguage$pandac$ASTNode** $tmp2038 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 32));
                _f32037 = *$tmp2038;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12033));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32037));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2039, 5);
            panda$core$Bit $tmp2040 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2039);
            if ($tmp2040.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2042 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02041 = *$tmp2042;
                panda$core$Bit* $tmp2044 = ((panda$core$Bit*) ((char*) $match$5_12001->$data + 16));
                _f12043 = *$tmp2044;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2045, 6);
            panda$core$Bit $tmp2046 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2045);
            if ($tmp2046.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2048 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02047 = *$tmp2048;
                panda$collections$ImmutableArray** $tmp2050 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12001->$data + 16));
                _f12049 = *$tmp2050;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12049));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2051, 7);
            panda$core$Bit $tmp2052 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2051);
            if ($tmp2052.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2054 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02053 = *$tmp2054;
                panda$core$String** $tmp2056 = ((panda$core$String**) ((char*) $match$5_12001->$data + 16));
                _f12055 = *$tmp2056;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12055));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2057, 8);
            panda$core$Bit $tmp2058 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2057);
            if ($tmp2058.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2060 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02059 = *$tmp2060;
                org$pandalanguage$pandac$ASTNode** $tmp2062 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 16));
                _f12061 = *$tmp2062;
                panda$collections$ImmutableArray** $tmp2064 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12001->$data + 24));
                _f22063 = *$tmp2064;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12061));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22063));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2065, 9);
            panda$core$Bit $tmp2066 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2065);
            if ($tmp2066.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2068 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02067 = *$tmp2068;
                org$pandalanguage$pandac$ASTNode** $tmp2070 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 16));
                _f12069 = *$tmp2070;
                panda$core$String** $tmp2072 = ((panda$core$String**) ((char*) $match$5_12001->$data + 24));
                _f22071 = *$tmp2072;
                panda$collections$ImmutableArray** $tmp2074 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12001->$data + 32));
                _f32073 = *$tmp2074;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12069));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22071));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32073));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2075, 10);
            panda$core$Bit $tmp2076 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2075);
            if ($tmp2076.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2078 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02077 = *$tmp2078;
                org$pandalanguage$pandac$ASTNode** $tmp2080 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 16));
                _f12079 = *$tmp2080;
                org$pandalanguage$pandac$ChoiceEntry** $tmp2082 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_12001->$data + 24));
                _f22081 = *$tmp2082;
                panda$core$Int64* $tmp2084 = ((panda$core$Int64*) ((char*) $match$5_12001->$data + 32));
                _f32083 = *$tmp2084;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12079));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22081));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2085, 11);
            panda$core$Bit $tmp2086 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2085);
            if ($tmp2086.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2088 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02087 = *$tmp2088;
                org$pandalanguage$pandac$ASTNode** $tmp2090 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 16));
                _f12089 = *$tmp2090;
                panda$collections$ImmutableArray** $tmp2092 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12001->$data + 24));
                _f22091 = *$tmp2092;
                org$pandalanguage$pandac$ClassDecl$Kind* $tmp2094 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$5_12001->$data + 32));
                _f32093 = *$tmp2094;
                panda$core$String** $tmp2096 = ((panda$core$String**) ((char*) $match$5_12001->$data + 40));
                _f42095 = *$tmp2096;
                panda$collections$ImmutableArray** $tmp2098 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12001->$data + 48));
                _f52097 = *$tmp2098;
                panda$collections$ImmutableArray** $tmp2100 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12001->$data + 56));
                _f62099 = *$tmp2100;
                panda$collections$ImmutableArray** $tmp2102 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12001->$data + 64));
                _f72101 = *$tmp2102;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12089));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22091));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42095));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f52097));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f62099));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f72101));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2103, 12);
            panda$core$Bit $tmp2104 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2103);
            if ($tmp2104.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2106 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02105 = *$tmp2106;
                panda$core$String** $tmp2108 = ((panda$core$String**) ((char*) $match$5_12001->$data + 16));
                _f12107 = *$tmp2108;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12107));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2109, 13);
            panda$core$Bit $tmp2110 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2109);
            if ($tmp2110.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2112 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02111 = *$tmp2112;
                org$pandalanguage$pandac$ASTNode** $tmp2114 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 16));
                _f12113 = *$tmp2114;
                org$pandalanguage$pandac$ASTNode** $tmp2116 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 24));
                _f22115 = *$tmp2116;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12113));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22115));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2117, 14);
            panda$core$Bit $tmp2118 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2117);
            if ($tmp2118.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2120 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02119 = *$tmp2120;
                panda$core$String** $tmp2122 = ((panda$core$String**) ((char*) $match$5_12001->$data + 16));
                _f12121 = *$tmp2122;
                panda$collections$ImmutableArray** $tmp2124 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12001->$data + 24));
                _f22123 = *$tmp2124;
                org$pandalanguage$pandac$ASTNode** $tmp2126 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 32));
                _f32125 = *$tmp2126;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12121));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22123));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32125));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2127, 15);
            panda$core$Bit $tmp2128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2127);
            if ($tmp2128.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2130 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02129 = *$tmp2130;
                org$pandalanguage$pandac$ASTNode** $tmp2132 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 16));
                _f12131 = *$tmp2132;
                panda$core$String** $tmp2134 = ((panda$core$String**) ((char*) $match$5_12001->$data + 24));
                _f22133 = *$tmp2134;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12131));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22133));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2135, 16);
            panda$core$Bit $tmp2136 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2135);
            if ($tmp2136.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2138 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02137 = *$tmp2138;
                org$pandalanguage$pandac$ASTNode** $tmp2140 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 16));
                _f12139 = *$tmp2140;
                panda$collections$ImmutableArray** $tmp2142 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12001->$data + 24));
                _f22141 = *$tmp2142;
                org$pandalanguage$pandac$ASTNode** $tmp2144 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 32));
                _f32143 = *$tmp2144;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12139));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22141));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32143));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2145, 17);
            panda$core$Bit $tmp2146 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2145);
            if ($tmp2146.value) {
            {
                panda$collections$ImmutableArray** $tmp2148 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12001->$data + 0));
                _f02147 = *$tmp2148;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02147));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2149, 18);
            panda$core$Bit $tmp2150 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2149);
            if ($tmp2150.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2152 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02151 = *$tmp2152;
                panda$core$String** $tmp2154 = ((panda$core$String**) ((char*) $match$5_12001->$data + 16));
                _f12153 = *$tmp2154;
                org$pandalanguage$pandac$ASTNode** $tmp2156 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 24));
                _f22155 = *$tmp2156;
                org$pandalanguage$pandac$ASTNode** $tmp2158 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 32));
                _f32157 = *$tmp2158;
                panda$collections$ImmutableArray** $tmp2160 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12001->$data + 40));
                _f42159 = *$tmp2160;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12153));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22155));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32157));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42159));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2161, 19);
            panda$core$Bit $tmp2162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2161);
            if ($tmp2162.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2164 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02163 = *$tmp2164;
                panda$core$String** $tmp2166 = ((panda$core$String**) ((char*) $match$5_12001->$data + 16));
                _f12165 = *$tmp2166;
                panda$collections$ImmutableArray** $tmp2168 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12001->$data + 24));
                _f22167 = *$tmp2168;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12165));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22167));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2169, 20);
            panda$core$Bit $tmp2170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2169);
            if ($tmp2170.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2172 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02171 = *$tmp2172;
                panda$core$String** $tmp2174 = ((panda$core$String**) ((char*) $match$5_12001->$data + 16));
                _f12173 = *$tmp2174;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12173));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2175, 21);
            panda$core$Bit $tmp2176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2175);
            if ($tmp2176.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2178 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02177 = *$tmp2178;
                org$pandalanguage$pandac$ASTNode** $tmp2180 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 16));
                _f12179 = *$tmp2180;
                panda$collections$ImmutableArray** $tmp2182 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12001->$data + 24));
                _f22181 = *$tmp2182;
                org$pandalanguage$pandac$ASTNode** $tmp2184 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 32));
                _f32183 = *$tmp2184;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12179));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22181));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32183));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2185, 22);
            panda$core$Bit $tmp2186 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2185);
            if ($tmp2186.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2188 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02187 = *$tmp2188;
                panda$core$UInt64* $tmp2190 = ((panda$core$UInt64*) ((char*) $match$5_12001->$data + 16));
                _f12189 = *$tmp2190;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2191, 23);
            panda$core$Bit $tmp2192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2191);
            if ($tmp2192.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2194 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_12001->$data + 0));
                _f02193 = *$tmp2194;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02193));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2195, 24);
            panda$core$Bit $tmp2196 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2195);
            if ($tmp2196.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2198 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02197 = *$tmp2198;
                panda$core$String** $tmp2200 = ((panda$core$String**) ((char*) $match$5_12001->$data + 16));
                _f12199 = *$tmp2200;
                panda$collections$ImmutableArray** $tmp2202 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12001->$data + 24));
                _f22201 = *$tmp2202;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12199));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22201));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2203, 25);
            panda$core$Bit $tmp2204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2203);
            if ($tmp2204.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2206 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02205 = *$tmp2206;
                org$pandalanguage$pandac$ASTNode** $tmp2208 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 16));
                _f12207 = *$tmp2208;
                panda$collections$ImmutableArray** $tmp2210 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12001->$data + 24));
                _f22209 = *$tmp2210;
                panda$collections$ImmutableArray** $tmp2212 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12001->$data + 32));
                _f32211 = *$tmp2212;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12207));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22209));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32211));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2213, 26);
            panda$core$Bit $tmp2214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2213);
            if ($tmp2214.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2216 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02215 = *$tmp2216;
                org$pandalanguage$pandac$ASTNode** $tmp2218 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 16));
                _f12217 = *$tmp2218;
                panda$collections$ImmutableArray** $tmp2220 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12001->$data + 24));
                _f22219 = *$tmp2220;
                org$pandalanguage$pandac$MethodDecl$Kind* $tmp2222 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$5_12001->$data + 32));
                _f32221 = *$tmp2222;
                panda$core$String** $tmp2224 = ((panda$core$String**) ((char*) $match$5_12001->$data + 40));
                _f42223 = *$tmp2224;
                panda$collections$ImmutableArray** $tmp2226 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12001->$data + 48));
                _f52225 = *$tmp2226;
                panda$collections$ImmutableArray** $tmp2228 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12001->$data + 56));
                _f62227 = *$tmp2228;
                org$pandalanguage$pandac$ASTNode** $tmp2230 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 64));
                _f72229 = *$tmp2230;
                panda$collections$ImmutableArray** $tmp2232 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12001->$data + 72));
                _f82231 = *$tmp2232;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12217));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22219));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42223));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f52225));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f62227));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f72229));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f82231));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2233, 27);
            panda$core$Bit $tmp2234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2233);
            if ($tmp2234.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2236 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02235 = *$tmp2236;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2238 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12001->$data + 16));
                _f12237 = *$tmp2238;
                panda$collections$ImmutableArray** $tmp2240 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12001->$data + 24));
                _f22239 = *$tmp2240;
                org$pandalanguage$pandac$ASTNode** $tmp2242 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 32));
                _f32241 = *$tmp2242;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22239));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32241));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2243, 28);
            panda$core$Bit $tmp2244 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2243);
            if ($tmp2244.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2246 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02245 = *$tmp2246;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2247, 29);
            panda$core$Bit $tmp2248 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2247);
            if ($tmp2248.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2250 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02249 = *$tmp2250;
                org$pandalanguage$pandac$ASTNode** $tmp2252 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 16));
                _f12251 = *$tmp2252;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12251));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2253, 30);
            panda$core$Bit $tmp2254 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2253);
            if ($tmp2254.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2256 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02255 = *$tmp2256;
                panda$core$String** $tmp2258 = ((panda$core$String**) ((char*) $match$5_12001->$data + 16));
                _f12257 = *$tmp2258;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12257));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2259, 31);
            panda$core$Bit $tmp2260 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2259);
            if ($tmp2260.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2262 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02261 = *$tmp2262;
                panda$core$String** $tmp2264 = ((panda$core$String**) ((char*) $match$5_12001->$data + 16));
                _f12263 = *$tmp2264;
                org$pandalanguage$pandac$ASTNode** $tmp2266 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 24));
                _f22265 = *$tmp2266;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12263));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22265));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2267, 32);
            panda$core$Bit $tmp2268 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2267);
            if ($tmp2268.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2270 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02269 = *$tmp2270;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2272 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_12001->$data + 16));
                _f12271 = *$tmp2272;
                org$pandalanguage$pandac$ASTNode** $tmp2274 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 24));
                _f22273 = *$tmp2274;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22273));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2275, 33);
            panda$core$Bit $tmp2276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2275);
            if ($tmp2276.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2278 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02277 = *$tmp2278;
                org$pandalanguage$pandac$ASTNode** $tmp2280 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 16));
                _f12279 = *$tmp2280;
                org$pandalanguage$pandac$ASTNode** $tmp2282 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 24));
                _f22281 = *$tmp2282;
                panda$core$Bit* $tmp2284 = ((panda$core$Bit*) ((char*) $match$5_12001->$data + 32));
                _f32283 = *$tmp2284;
                org$pandalanguage$pandac$ASTNode** $tmp2286 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 33));
                _f42285 = *$tmp2286;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12279));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22281));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42285));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2287, 34);
            panda$core$Bit $tmp2288 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2287);
            if ($tmp2288.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2290 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02289 = *$tmp2290;
                panda$core$Real64* $tmp2292 = ((panda$core$Real64*) ((char*) $match$5_12001->$data + 16));
                _f12291 = *$tmp2292;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2293, 35);
            panda$core$Bit $tmp2294 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2293);
            if ($tmp2294.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2296 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02295 = *$tmp2296;
                panda$core$String** $tmp2298 = ((panda$core$String**) ((char*) $match$5_12001->$data + 16));
                _f12297 = *$tmp2298;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12297));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2299, 36);
            panda$core$Bit $tmp2300 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2299);
            if ($tmp2300.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2302 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02301 = *$tmp2302;
                org$pandalanguage$pandac$ASTNode** $tmp2304 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 16));
                _f12303 = *$tmp2304;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12303));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2305, 37);
            panda$core$Bit $tmp2306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2305);
            if ($tmp2306.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2308 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02307 = *$tmp2308;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2309, 38);
            panda$core$Bit $tmp2310 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2309);
            if ($tmp2310.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2312 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02311 = *$tmp2312;
                panda$core$String** $tmp2314 = ((panda$core$String**) ((char*) $match$5_12001->$data + 16));
                _f12313 = *$tmp2314;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12313));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2315, 39);
            panda$core$Bit $tmp2316 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2315);
            if ($tmp2316.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2318 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02317 = *$tmp2318;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2319, 40);
            panda$core$Bit $tmp2320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2319);
            if ($tmp2320.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2322 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02321 = *$tmp2322;
                panda$collections$ImmutableArray** $tmp2324 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12001->$data + 16));
                _f12323 = *$tmp2324;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12323));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2325, 41);
            panda$core$Bit $tmp2326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2325);
            if ($tmp2326.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2328 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02327 = *$tmp2328;
                panda$collections$ImmutableArray** $tmp2330 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12001->$data + 16));
                _f12329 = *$tmp2330;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12329));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2331, 42);
            panda$core$Bit $tmp2332 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2331);
            if ($tmp2332.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2334 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02333 = *$tmp2334;
                panda$core$String** $tmp2336 = ((panda$core$String**) ((char*) $match$5_12001->$data + 16));
                _f12335 = *$tmp2336;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12335));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2337, 43);
            panda$core$Bit $tmp2338 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2337);
            if ($tmp2338.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2340 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02339 = *$tmp2340;
                panda$collections$ImmutableArray** $tmp2342 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12001->$data + 16));
                _f12341 = *$tmp2342;
                org$pandalanguage$pandac$ASTNode** $tmp2344 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 24));
                _f22343 = *$tmp2344;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12341));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22343));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2345, 44);
            panda$core$Bit $tmp2346 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2345);
            if ($tmp2346.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2348 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02347 = *$tmp2348;
                panda$core$String** $tmp2350 = ((panda$core$String**) ((char*) $match$5_12001->$data + 16));
                _f12349 = *$tmp2350;
                org$pandalanguage$pandac$ASTNode** $tmp2352 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 24));
                _f22351 = *$tmp2352;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12349));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22351));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2353, 45);
            panda$core$Bit $tmp2354 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2353);
            if ($tmp2354.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2356 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02355 = *$tmp2356;
                panda$collections$ImmutableArray** $tmp2358 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12001->$data + 16));
                _f12357 = *$tmp2358;
                org$pandalanguage$pandac$ASTNode** $tmp2360 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 24));
                _f22359 = *$tmp2360;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12357));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22359));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2361, 46);
            panda$core$Bit $tmp2362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2361);
            if ($tmp2362.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2364 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02363 = *$tmp2364;
                panda$core$String** $tmp2366 = ((panda$core$String**) ((char*) $match$5_12001->$data + 16));
                _f12365 = *$tmp2366;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12365));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2367, 47);
            panda$core$Bit $tmp2368 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2367);
            if ($tmp2368.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2370 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02369 = *$tmp2370;
                org$pandalanguage$pandac$Variable$Kind* $tmp2372 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_12001->$data + 16));
                _f12371 = *$tmp2372;
                panda$collections$ImmutableArray** $tmp2374 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12001->$data + 24));
                _f22373 = *$tmp2374;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22373));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2375, 48);
            panda$core$Bit $tmp2376 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2375);
            if ($tmp2376.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2378 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02377 = *$tmp2378;
                panda$collections$ImmutableArray** $tmp2380 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12001->$data + 16));
                _f12379 = *$tmp2380;
                panda$collections$ImmutableArray** $tmp2382 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12001->$data + 24));
                _f22381 = *$tmp2382;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12379));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22381));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2383, 49);
            panda$core$Bit $tmp2384 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_12001->$rawValue, $tmp2383);
            if ($tmp2384.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2386 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_12001->$data + 0));
                _f02385 = *$tmp2386;
                panda$core$String** $tmp2388 = ((panda$core$String**) ((char*) $match$5_12001->$data + 16));
                _f12387 = *$tmp2388;
                org$pandalanguage$pandac$ASTNode** $tmp2390 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_12001->$data + 24));
                _f22389 = *$tmp2390;
                panda$collections$ImmutableArray** $tmp2392 = ((panda$collections$ImmutableArray**) ((char*) $match$5_12001->$data + 32));
                _f32391 = *$tmp2392;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12387));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22389));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32391));
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
        }
        $tmp2000 = -1;
        goto $l1998;
        $l1998:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2002));
        switch ($tmp2000) {
            case -1: goto $l2393;
        }
        $l2393:;
    }
    $tmp1997 = -1;
    goto $l1995;
    $l1995:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp1997) {
        case -1: goto $l2394;
    }
    $l2394:;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$core$String* $tmp2396;
    panda$core$String* $tmp2399;
    org$pandalanguage$pandac$ASTNode* $tmp2400;
    org$pandalanguage$pandac$ASTNode* $tmp2403;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2395 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2395 = p_f0;
    {
        panda$core$String** $tmp2397 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2396 = *$tmp2397;
        panda$core$String** $tmp2398 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2399 = p_f1;
        *$tmp2398 = $tmp2399;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2399));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2396));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2401 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2400 = *$tmp2401;
        org$pandalanguage$pandac$ASTNode** $tmp2402 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2403 = p_f2;
        *$tmp2402 = $tmp2403;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2403));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2400));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2405;
    org$pandalanguage$pandac$ASTNode* $tmp2408;
    org$pandalanguage$pandac$ASTNode* $tmp2409;
    org$pandalanguage$pandac$ASTNode* $tmp2412;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2404 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2404 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2406 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2405 = *$tmp2406;
        org$pandalanguage$pandac$ASTNode** $tmp2407 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2408 = p_f1;
        *$tmp2407 = $tmp2408;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2408));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2405));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2410 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2409 = *$tmp2410;
        org$pandalanguage$pandac$ASTNode** $tmp2411 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2412 = p_f2;
        *$tmp2411 = $tmp2412;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2412));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2409));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    org$pandalanguage$pandac$ASTNode* $tmp2414;
    org$pandalanguage$pandac$ASTNode* $tmp2417;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2413 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2413 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2415 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2414 = *$tmp2415;
        org$pandalanguage$pandac$ASTNode** $tmp2416 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2417 = p_f1;
        *$tmp2416 = $tmp2417;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2417));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2414));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2418 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2418 = p_f0;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$parser$Token$Kind p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2420;
    org$pandalanguage$pandac$ASTNode* $tmp2423;
    org$pandalanguage$pandac$ASTNode* $tmp2425;
    org$pandalanguage$pandac$ASTNode* $tmp2428;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2419 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2419 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2421 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2420 = *$tmp2421;
        org$pandalanguage$pandac$ASTNode** $tmp2422 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2423 = p_f1;
        *$tmp2422 = $tmp2423;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2423));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2420));
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2424 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 24));
    *$tmp2424 = p_f2;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2426 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2425 = *$tmp2426;
        org$pandalanguage$pandac$ASTNode** $tmp2427 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2428 = p_f3;
        *$tmp2427 = $tmp2428;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2428));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2425));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Bit p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2429 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2429 = p_f0;
    panda$core$Bit* $tmp2430 = ((panda$core$Bit*) ((char*) self->$data + 16));
    *$tmp2430 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    panda$collections$ImmutableArray* $tmp2432;
    panda$collections$ImmutableArray* $tmp2435;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2431 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2431 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2433 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2432 = *$tmp2433;
        panda$collections$ImmutableArray** $tmp2434 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2435 = p_f1;
        *$tmp2434 = $tmp2435;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2435));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2432));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp2437;
    panda$core$String* $tmp2440;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2436 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2436 = p_f0;
    {
        panda$core$String** $tmp2438 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2437 = *$tmp2438;
        panda$core$String** $tmp2439 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2440 = p_f1;
        *$tmp2439 = $tmp2440;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2440));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2437));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2442;
    org$pandalanguage$pandac$ASTNode* $tmp2445;
    panda$collections$ImmutableArray* $tmp2446;
    panda$collections$ImmutableArray* $tmp2449;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2441 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2441 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2443 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2442 = *$tmp2443;
        org$pandalanguage$pandac$ASTNode** $tmp2444 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2445 = p_f1;
        *$tmp2444 = $tmp2445;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2445));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2442));
    }
    {
        panda$collections$ImmutableArray** $tmp2447 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2446 = *$tmp2447;
        panda$collections$ImmutableArray** $tmp2448 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2449 = p_f2;
        *$tmp2448 = $tmp2449;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2449));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2446));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2451;
    org$pandalanguage$pandac$ASTNode* $tmp2454;
    panda$core$String* $tmp2455;
    panda$core$String* $tmp2458;
    panda$collections$ImmutableArray* $tmp2459;
    panda$collections$ImmutableArray* $tmp2462;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2450 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2450 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2452 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2451 = *$tmp2452;
        org$pandalanguage$pandac$ASTNode** $tmp2453 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2454 = p_f1;
        *$tmp2453 = $tmp2454;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2454));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2451));
    }
    {
        panda$core$String** $tmp2456 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2455 = *$tmp2456;
        panda$core$String** $tmp2457 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2458 = p_f2;
        *$tmp2457 = $tmp2458;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2458));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2455));
    }
    {
        panda$collections$ImmutableArray** $tmp2460 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2459 = *$tmp2460;
        panda$collections$ImmutableArray** $tmp2461 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2462 = p_f3;
        *$tmp2461 = $tmp2462;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2462));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2459));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2464;
    org$pandalanguage$pandac$ASTNode* $tmp2467;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2468;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2471;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2463 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2463 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2465 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2464 = *$tmp2465;
        org$pandalanguage$pandac$ASTNode** $tmp2466 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2467 = p_f1;
        *$tmp2466 = $tmp2467;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2467));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2464));
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp2469 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp2468 = *$tmp2469;
        org$pandalanguage$pandac$ChoiceEntry** $tmp2470 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp2471 = p_f2;
        *$tmp2470 = $tmp2471;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2471));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2468));
    }
    panda$core$Int64* $tmp2472 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp2472 = p_f3;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ClassDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, panda$collections$ImmutableArray* p_f6, panda$collections$ImmutableArray* p_f7) {
    org$pandalanguage$pandac$ASTNode* $tmp2474;
    org$pandalanguage$pandac$ASTNode* $tmp2477;
    panda$collections$ImmutableArray* $tmp2478;
    panda$collections$ImmutableArray* $tmp2481;
    panda$core$String* $tmp2483;
    panda$core$String* $tmp2486;
    panda$collections$ImmutableArray* $tmp2487;
    panda$collections$ImmutableArray* $tmp2490;
    panda$collections$ImmutableArray* $tmp2491;
    panda$collections$ImmutableArray* $tmp2494;
    panda$collections$ImmutableArray* $tmp2495;
    panda$collections$ImmutableArray* $tmp2498;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2473 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2473 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2475 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2474 = *$tmp2475;
        org$pandalanguage$pandac$ASTNode** $tmp2476 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2477 = p_f1;
        *$tmp2476 = $tmp2477;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2477));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2474));
    }
    {
        panda$collections$ImmutableArray** $tmp2479 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2478 = *$tmp2479;
        panda$collections$ImmutableArray** $tmp2480 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2481 = p_f2;
        *$tmp2480 = $tmp2481;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2481));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2478));
    }
    org$pandalanguage$pandac$ClassDecl$Kind* $tmp2482 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) self->$data + 32));
    *$tmp2482 = p_f3;
    {
        panda$core$String** $tmp2484 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2483 = *$tmp2484;
        panda$core$String** $tmp2485 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2486 = p_f4;
        *$tmp2485 = $tmp2486;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2486));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2483));
    }
    {
        panda$collections$ImmutableArray** $tmp2488 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2487 = *$tmp2488;
        panda$collections$ImmutableArray** $tmp2489 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2490 = p_f5;
        *$tmp2489 = $tmp2490;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2490));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2487));
    }
    {
        panda$collections$ImmutableArray** $tmp2492 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2491 = *$tmp2492;
        panda$collections$ImmutableArray** $tmp2493 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2494 = p_f6;
        *$tmp2493 = $tmp2494;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2494));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2491));
    }
    {
        panda$collections$ImmutableArray** $tmp2496 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2495 = *$tmp2496;
        panda$collections$ImmutableArray** $tmp2497 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2498 = p_f7;
        *$tmp2497 = $tmp2498;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2498));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2495));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    panda$core$String* $tmp2500;
    panda$core$String* $tmp2503;
    panda$collections$ImmutableArray* $tmp2504;
    panda$collections$ImmutableArray* $tmp2507;
    org$pandalanguage$pandac$ASTNode* $tmp2508;
    org$pandalanguage$pandac$ASTNode* $tmp2511;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2499 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2499 = p_f0;
    {
        panda$core$String** $tmp2501 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2500 = *$tmp2501;
        panda$core$String** $tmp2502 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2503 = p_f1;
        *$tmp2502 = $tmp2503;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2503));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2500));
    }
    {
        panda$collections$ImmutableArray** $tmp2505 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2504 = *$tmp2505;
        panda$collections$ImmutableArray** $tmp2506 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2507 = p_f2;
        *$tmp2506 = $tmp2507;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2507));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2504));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2509 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2508 = *$tmp2509;
        org$pandalanguage$pandac$ASTNode** $tmp2510 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2511 = p_f3;
        *$tmp2510 = $tmp2511;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2511));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2508));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2513;
    org$pandalanguage$pandac$ASTNode* $tmp2516;
    panda$core$String* $tmp2517;
    panda$core$String* $tmp2520;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2512 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2512 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2514 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2513 = *$tmp2514;
        org$pandalanguage$pandac$ASTNode** $tmp2515 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2516 = p_f1;
        *$tmp2515 = $tmp2516;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2516));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2513));
    }
    {
        panda$core$String** $tmp2518 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2517 = *$tmp2518;
        panda$core$String** $tmp2519 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2520 = p_f2;
        *$tmp2519 = $tmp2520;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2520));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2517));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2522;
    org$pandalanguage$pandac$ASTNode* $tmp2525;
    panda$collections$ImmutableArray* $tmp2526;
    panda$collections$ImmutableArray* $tmp2529;
    org$pandalanguage$pandac$ASTNode* $tmp2530;
    org$pandalanguage$pandac$ASTNode* $tmp2533;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2521 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2521 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2523 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2522 = *$tmp2523;
        org$pandalanguage$pandac$ASTNode** $tmp2524 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2525 = p_f1;
        *$tmp2524 = $tmp2525;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2525));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2522));
    }
    {
        panda$collections$ImmutableArray** $tmp2527 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2526 = *$tmp2527;
        panda$collections$ImmutableArray** $tmp2528 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2529 = p_f2;
        *$tmp2528 = $tmp2529;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2529));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2526));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2531 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2530 = *$tmp2531;
        org$pandalanguage$pandac$ASTNode** $tmp2532 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2533 = p_f3;
        *$tmp2532 = $tmp2533;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2533));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2530));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, panda$collections$ImmutableArray* p_f0) {
    panda$collections$ImmutableArray* $tmp2534;
    panda$collections$ImmutableArray* $tmp2537;
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableArray** $tmp2535 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp2534 = *$tmp2535;
        panda$collections$ImmutableArray** $tmp2536 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp2537 = p_f0;
        *$tmp2536 = $tmp2537;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2537));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2534));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, org$pandalanguage$pandac$ASTNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    panda$core$String* $tmp2539;
    panda$core$String* $tmp2542;
    org$pandalanguage$pandac$ASTNode* $tmp2543;
    org$pandalanguage$pandac$ASTNode* $tmp2546;
    org$pandalanguage$pandac$ASTNode* $tmp2547;
    org$pandalanguage$pandac$ASTNode* $tmp2550;
    panda$collections$ImmutableArray* $tmp2551;
    panda$collections$ImmutableArray* $tmp2554;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2538 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2538 = p_f0;
    {
        panda$core$String** $tmp2540 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2539 = *$tmp2540;
        panda$core$String** $tmp2541 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2542 = p_f1;
        *$tmp2541 = $tmp2542;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2542));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2539));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2544 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2543 = *$tmp2544;
        org$pandalanguage$pandac$ASTNode** $tmp2545 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2546 = p_f2;
        *$tmp2545 = $tmp2546;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2546));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2543));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2548 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2547 = *$tmp2548;
        org$pandalanguage$pandac$ASTNode** $tmp2549 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2550 = p_f3;
        *$tmp2549 = $tmp2550;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2550));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2547));
    }
    {
        panda$collections$ImmutableArray** $tmp2552 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp2551 = *$tmp2552;
        panda$collections$ImmutableArray** $tmp2553 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp2554 = p_f4;
        *$tmp2553 = $tmp2554;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2554));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2551));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp2556;
    panda$core$String* $tmp2559;
    panda$collections$ImmutableArray* $tmp2560;
    panda$collections$ImmutableArray* $tmp2563;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2555 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2555 = p_f0;
    {
        panda$core$String** $tmp2557 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2556 = *$tmp2557;
        panda$core$String** $tmp2558 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2559 = p_f1;
        *$tmp2558 = $tmp2559;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2559));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2556));
    }
    {
        panda$collections$ImmutableArray** $tmp2561 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2560 = *$tmp2561;
        panda$collections$ImmutableArray** $tmp2562 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2563 = p_f2;
        *$tmp2562 = $tmp2563;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2563));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2560));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp2565;
    panda$core$String* $tmp2568;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2564 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2564 = p_f0;
    {
        panda$core$String** $tmp2566 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2565 = *$tmp2566;
        panda$core$String** $tmp2567 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2568 = p_f1;
        *$tmp2567 = $tmp2568;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2568));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2565));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2570;
    org$pandalanguage$pandac$ASTNode* $tmp2573;
    panda$collections$ImmutableArray* $tmp2574;
    panda$collections$ImmutableArray* $tmp2577;
    org$pandalanguage$pandac$ASTNode* $tmp2578;
    org$pandalanguage$pandac$ASTNode* $tmp2581;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2569 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2569 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2571 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2570 = *$tmp2571;
        org$pandalanguage$pandac$ASTNode** $tmp2572 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2573 = p_f1;
        *$tmp2572 = $tmp2573;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2573));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2570));
    }
    {
        panda$collections$ImmutableArray** $tmp2575 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2574 = *$tmp2575;
        panda$collections$ImmutableArray** $tmp2576 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2577 = p_f2;
        *$tmp2576 = $tmp2577;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2577));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2574));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2579 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2578 = *$tmp2579;
        org$pandalanguage$pandac$ASTNode** $tmp2580 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2581 = p_f3;
        *$tmp2580 = $tmp2581;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2581));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2578));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$UInt64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2582 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2582 = p_f0;
    panda$core$UInt64* $tmp2583 = ((panda$core$UInt64*) ((char*) self->$data + 16));
    *$tmp2583 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0) {
    org$pandalanguage$pandac$IRNode* $tmp2584;
    org$pandalanguage$pandac$IRNode* $tmp2587;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp2585 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp2584 = *$tmp2585;
        org$pandalanguage$pandac$IRNode** $tmp2586 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp2587 = p_f0;
        *$tmp2586 = $tmp2587;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2587));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2584));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp2589;
    panda$core$String* $tmp2592;
    panda$collections$ImmutableArray* $tmp2593;
    panda$collections$ImmutableArray* $tmp2596;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2588 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2588 = p_f0;
    {
        panda$core$String** $tmp2590 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2589 = *$tmp2590;
        panda$core$String** $tmp2591 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2592 = p_f1;
        *$tmp2591 = $tmp2592;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2592));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2589));
    }
    {
        panda$collections$ImmutableArray** $tmp2594 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2593 = *$tmp2594;
        panda$collections$ImmutableArray** $tmp2595 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2596 = p_f2;
        *$tmp2595 = $tmp2596;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2596));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2593));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2598;
    org$pandalanguage$pandac$ASTNode* $tmp2601;
    panda$collections$ImmutableArray* $tmp2602;
    panda$collections$ImmutableArray* $tmp2605;
    panda$collections$ImmutableArray* $tmp2606;
    panda$collections$ImmutableArray* $tmp2609;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2597 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2597 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2599 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2598 = *$tmp2599;
        org$pandalanguage$pandac$ASTNode** $tmp2600 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2601 = p_f1;
        *$tmp2600 = $tmp2601;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2601));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2598));
    }
    {
        panda$collections$ImmutableArray** $tmp2603 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2602 = *$tmp2603;
        panda$collections$ImmutableArray** $tmp2604 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2605 = p_f2;
        *$tmp2604 = $tmp2605;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2605));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2602));
    }
    {
        panda$collections$ImmutableArray** $tmp2607 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2606 = *$tmp2607;
        panda$collections$ImmutableArray** $tmp2608 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2609 = p_f3;
        *$tmp2608 = $tmp2609;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2609));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2606));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$MethodDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, panda$collections$ImmutableArray* p_f6, org$pandalanguage$pandac$ASTNode* p_f7, panda$collections$ImmutableArray* p_f8) {
    org$pandalanguage$pandac$ASTNode* $tmp2611;
    org$pandalanguage$pandac$ASTNode* $tmp2614;
    panda$collections$ImmutableArray* $tmp2615;
    panda$collections$ImmutableArray* $tmp2618;
    panda$core$String* $tmp2620;
    panda$core$String* $tmp2623;
    panda$collections$ImmutableArray* $tmp2624;
    panda$collections$ImmutableArray* $tmp2627;
    panda$collections$ImmutableArray* $tmp2628;
    panda$collections$ImmutableArray* $tmp2631;
    org$pandalanguage$pandac$ASTNode* $tmp2632;
    org$pandalanguage$pandac$ASTNode* $tmp2635;
    panda$collections$ImmutableArray* $tmp2636;
    panda$collections$ImmutableArray* $tmp2639;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2610 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2610 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2612 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2611 = *$tmp2612;
        org$pandalanguage$pandac$ASTNode** $tmp2613 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2614 = p_f1;
        *$tmp2613 = $tmp2614;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2614));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2611));
    }
    {
        panda$collections$ImmutableArray** $tmp2616 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2615 = *$tmp2616;
        panda$collections$ImmutableArray** $tmp2617 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2618 = p_f2;
        *$tmp2617 = $tmp2618;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2618));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2615));
    }
    org$pandalanguage$pandac$MethodDecl$Kind* $tmp2619 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) self->$data + 32));
    *$tmp2619 = p_f3;
    {
        panda$core$String** $tmp2621 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2620 = *$tmp2621;
        panda$core$String** $tmp2622 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2623 = p_f4;
        *$tmp2622 = $tmp2623;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2623));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2620));
    }
    {
        panda$collections$ImmutableArray** $tmp2625 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2624 = *$tmp2625;
        panda$collections$ImmutableArray** $tmp2626 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2627 = p_f5;
        *$tmp2626 = $tmp2627;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2627));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2624));
    }
    {
        panda$collections$ImmutableArray** $tmp2629 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2628 = *$tmp2629;
        panda$collections$ImmutableArray** $tmp2630 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2631 = p_f6;
        *$tmp2630 = $tmp2631;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2631));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2628));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2633 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 64));
        $tmp2632 = *$tmp2633;
        org$pandalanguage$pandac$ASTNode** $tmp2634 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 64));
        $tmp2635 = p_f7;
        *$tmp2634 = $tmp2635;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2635));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2632));
    }
    {
        panda$collections$ImmutableArray** $tmp2637 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 72));
        $tmp2636 = *$tmp2637;
        panda$collections$ImmutableArray** $tmp2638 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 72));
        $tmp2639 = p_f8;
        *$tmp2638 = $tmp2639;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2639));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2636));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    panda$collections$ImmutableArray* $tmp2642;
    panda$collections$ImmutableArray* $tmp2645;
    org$pandalanguage$pandac$ASTNode* $tmp2646;
    org$pandalanguage$pandac$ASTNode* $tmp2649;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2640 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2640 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2641 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp2641 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp2643 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2642 = *$tmp2643;
        panda$collections$ImmutableArray** $tmp2644 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2645 = p_f2;
        *$tmp2644 = $tmp2645;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2645));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2642));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2647 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2646 = *$tmp2647;
        org$pandalanguage$pandac$ASTNode** $tmp2648 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2649 = p_f3;
        *$tmp2648 = $tmp2649;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2649));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2646));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$core$String* $tmp2651;
    panda$core$String* $tmp2654;
    org$pandalanguage$pandac$ASTNode* $tmp2655;
    org$pandalanguage$pandac$ASTNode* $tmp2658;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2650 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2650 = p_f0;
    {
        panda$core$String** $tmp2652 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2651 = *$tmp2652;
        panda$core$String** $tmp2653 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2654 = p_f1;
        *$tmp2653 = $tmp2654;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2654));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2651));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2656 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2655 = *$tmp2656;
        org$pandalanguage$pandac$ASTNode** $tmp2657 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2658 = p_f2;
        *$tmp2657 = $tmp2658;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2658));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2655));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2661;
    org$pandalanguage$pandac$ASTNode* $tmp2664;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2659 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2659 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2660 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp2660 = p_f1;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2662 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2661 = *$tmp2662;
        org$pandalanguage$pandac$ASTNode** $tmp2663 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2664 = p_f2;
        *$tmp2663 = $tmp2664;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2664));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2661));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$ASTNode* p_f4) {
    org$pandalanguage$pandac$ASTNode* $tmp2666;
    org$pandalanguage$pandac$ASTNode* $tmp2669;
    org$pandalanguage$pandac$ASTNode* $tmp2670;
    org$pandalanguage$pandac$ASTNode* $tmp2673;
    org$pandalanguage$pandac$ASTNode* $tmp2675;
    org$pandalanguage$pandac$ASTNode* $tmp2678;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2665 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2665 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2667 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2666 = *$tmp2667;
        org$pandalanguage$pandac$ASTNode** $tmp2668 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2669 = p_f1;
        *$tmp2668 = $tmp2669;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2669));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2666));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2671 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2670 = *$tmp2671;
        org$pandalanguage$pandac$ASTNode** $tmp2672 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2673 = p_f2;
        *$tmp2672 = $tmp2673;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2673));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2670));
    }
    panda$core$Bit* $tmp2674 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp2674 = p_f3;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2676 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        $tmp2675 = *$tmp2676;
        org$pandalanguage$pandac$ASTNode** $tmp2677 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        $tmp2678 = p_f4;
        *$tmp2677 = $tmp2678;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2678));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2675));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Real64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2679 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2679 = p_f0;
    panda$core$Real64* $tmp2680 = ((panda$core$Real64*) ((char*) self->$data + 16));
    *$tmp2680 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    org$pandalanguage$pandac$ASTNode* $tmp2682;
    org$pandalanguage$pandac$ASTNode* $tmp2685;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2681 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2681 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2683 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2682 = *$tmp2683;
        org$pandalanguage$pandac$ASTNode** $tmp2684 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2685 = p_f1;
        *$tmp2684 = $tmp2685;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2685));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2682));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$collections$ImmutableArray* $tmp2687;
    panda$collections$ImmutableArray* $tmp2690;
    org$pandalanguage$pandac$ASTNode* $tmp2691;
    org$pandalanguage$pandac$ASTNode* $tmp2694;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2686 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2686 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2688 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2687 = *$tmp2688;
        panda$collections$ImmutableArray** $tmp2689 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2690 = p_f1;
        *$tmp2689 = $tmp2690;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2690));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2687));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2692 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2691 = *$tmp2692;
        org$pandalanguage$pandac$ASTNode** $tmp2693 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2694 = p_f2;
        *$tmp2693 = $tmp2694;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2694));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2691));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp2697;
    panda$collections$ImmutableArray* $tmp2700;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2695 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2695 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp2696 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp2696 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp2698 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2697 = *$tmp2698;
        panda$collections$ImmutableArray** $tmp2699 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2700 = p_f2;
        *$tmp2699 = $tmp2700;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2700));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2697));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp2702;
    panda$collections$ImmutableArray* $tmp2705;
    panda$collections$ImmutableArray* $tmp2706;
    panda$collections$ImmutableArray* $tmp2709;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2701 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2701 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2703 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2702 = *$tmp2703;
        panda$collections$ImmutableArray** $tmp2704 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2705 = p_f1;
        *$tmp2704 = $tmp2705;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2705));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2702));
    }
    {
        panda$collections$ImmutableArray** $tmp2707 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2706 = *$tmp2707;
        panda$collections$ImmutableArray** $tmp2708 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2709 = p_f2;
        *$tmp2708 = $tmp2709;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2709));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2706));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    panda$core$String* $tmp2711;
    panda$core$String* $tmp2714;
    org$pandalanguage$pandac$ASTNode* $tmp2715;
    org$pandalanguage$pandac$ASTNode* $tmp2718;
    panda$collections$ImmutableArray* $tmp2719;
    panda$collections$ImmutableArray* $tmp2722;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2710 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2710 = p_f0;
    {
        panda$core$String** $tmp2712 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2711 = *$tmp2712;
        panda$core$String** $tmp2713 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2714 = p_f1;
        *$tmp2713 = $tmp2714;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2714));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2711));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2716 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2715 = *$tmp2716;
        org$pandalanguage$pandac$ASTNode** $tmp2717 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2718 = p_f2;
        *$tmp2717 = $tmp2718;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2718));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2715));
    }
    {
        panda$collections$ImmutableArray** $tmp2720 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2719 = *$tmp2720;
        panda$collections$ImmutableArray** $tmp2721 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2722 = p_f3;
        *$tmp2721 = $tmp2722;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2722));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2719));
    }
}





