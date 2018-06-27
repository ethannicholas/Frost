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
typedef panda$core$String* (*$fn405)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn448)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn455)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn466)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn510)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn517)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn552)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn579)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn627)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn634)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn645)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn668)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn679)(panda$collections$CollectionView*);
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
typedef panda$core$String* (*$fn1056)(panda$collections$CollectionView*);
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
typedef panda$core$String* (*$fn1361)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1372)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1392)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1399)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1410)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1469)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1663)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1681)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1732)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1757)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1803)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1837)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1844)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1855)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1879)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1886)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1897)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1945)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1952)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1963)(panda$collections$Iterator*);

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
static panda$core$String $s1555 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1579 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s1580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s1582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s1607 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1609 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1620 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s1622 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1627 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s1633 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s1642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s1649 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s1659 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1666 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1677 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1684 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1707 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1710 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1728 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1735 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static panda$core$String $s1738 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1753 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1760 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static panda$core$String $s1763 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1790 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s1793 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s1796 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1799 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s1825 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s1828 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1862 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1865 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1900 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1929 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1933 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s1935 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1966 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1982 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 13, -8809212395465398403, NULL };
static panda$core$String $s1985 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x41\x53\x54\x4e\x6f\x64\x65\x3a\x20", 21, -8877512154781713630, NULL };
static panda$core$String $s1989 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };

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
    org$pandalanguage$pandac$ChoiceCase* ce568 = NULL;
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
    panda$core$Int64 $tmp1562;
    org$pandalanguage$pandac$ASTNode* start1564 = NULL;
    org$pandalanguage$pandac$ASTNode* end1566 = NULL;
    panda$core$Bit inclusive1568;
    org$pandalanguage$pandac$ASTNode* step1570 = NULL;
    panda$core$MutableString* result1575 = NULL;
    panda$core$MutableString* $tmp1576;
    panda$core$MutableString* $tmp1577;
    panda$core$String* $tmp1581;
    panda$core$String* $tmp1584;
    panda$core$String* $tmp1585;
    panda$core$Int64 $tmp1591;
    panda$core$Real64 value1593;
    panda$core$String* $tmp1595;
    panda$core$String* $tmp1596;
    panda$core$Int64 $tmp1600;
    panda$core$String* src1602 = NULL;
    panda$core$String* $tmp1604;
    panda$core$String* $tmp1605;
    panda$core$String* $tmp1606;
    panda$core$Int64 $tmp1613;
    org$pandalanguage$pandac$ASTNode* value1615 = NULL;
    panda$core$String* $tmp1617;
    panda$core$String* $tmp1618;
    panda$core$String* $tmp1619;
    panda$core$String* $tmp1626;
    panda$core$Int64 $tmp1630;
    panda$core$String* $tmp1632;
    panda$core$Int64 $tmp1636;
    panda$core$String* str1638 = NULL;
    panda$core$String* $tmp1640;
    panda$core$String* $tmp1641;
    panda$core$Int64 $tmp1646;
    panda$core$String* $tmp1648;
    panda$core$Int64 $tmp1652;
    panda$collections$ImmutableArray* arguments1654 = NULL;
    panda$core$String* $tmp1656;
    panda$core$String* $tmp1657;
    panda$core$String* $tmp1658;
    panda$core$String* $tmp1660;
    panda$core$Int64 $tmp1670;
    panda$collections$ImmutableArray* parameters1672 = NULL;
    panda$core$String* $tmp1674;
    panda$core$String* $tmp1675;
    panda$core$String* $tmp1676;
    panda$core$String* $tmp1678;
    panda$core$Int64 $tmp1688;
    panda$core$String* name1690 = NULL;
    panda$core$String* $tmp1692;
    panda$core$Int64 $tmp1695;
    panda$core$String* name1697 = NULL;
    org$pandalanguage$pandac$ASTNode* type1699 = NULL;
    panda$core$String* $tmp1701;
    panda$core$String* $tmp1702;
    panda$core$String* $tmp1703;
    panda$core$String* $tmp1704;
    panda$core$String* $tmp1705;
    panda$core$String* $tmp1714;
    panda$core$Int64 $tmp1717;
    panda$collections$ImmutableArray* parameters1719 = NULL;
    org$pandalanguage$pandac$ASTNode* body1721 = NULL;
    panda$core$String* $tmp1723;
    panda$core$String* $tmp1724;
    panda$core$String* $tmp1725;
    panda$core$String* $tmp1726;
    panda$core$String* $tmp1727;
    panda$core$String* $tmp1729;
    panda$core$Int64 $tmp1742;
    panda$collections$ImmutableArray* parameters1744 = NULL;
    org$pandalanguage$pandac$ASTNode* body1746 = NULL;
    panda$core$String* $tmp1748;
    panda$core$String* $tmp1749;
    panda$core$String* $tmp1750;
    panda$core$String* $tmp1751;
    panda$core$String* $tmp1752;
    panda$core$String* $tmp1754;
    panda$core$Int64 $tmp1767;
    panda$core$String* name1769 = NULL;
    panda$core$String* $tmp1771;
    panda$core$Int64 $tmp1774;
    org$pandalanguage$pandac$Variable$Kind kind1776;
    panda$collections$ImmutableArray* decls1778 = NULL;
    panda$core$MutableString* result1783 = NULL;
    panda$core$MutableString* $tmp1784;
    panda$core$MutableString* $tmp1785;
    org$pandalanguage$pandac$Variable$Kind $match$458_171787;
    panda$core$Int64 $tmp1788;
    panda$core$Int64 $tmp1791;
    panda$core$Int64 $tmp1794;
    panda$core$Int64 $tmp1797;
    panda$core$String* $tmp1800;
    panda$core$String* $tmp1805;
    panda$core$String* $tmp1806;
    panda$core$Int64 $tmp1812;
    panda$collections$ImmutableArray* tests1814 = NULL;
    panda$collections$ImmutableArray* statements1816 = NULL;
    panda$core$MutableString* result1821 = NULL;
    panda$core$MutableString* $tmp1822;
    panda$core$MutableString* $tmp1823;
    panda$core$String* separator1826 = NULL;
    panda$core$String* $tmp1827;
    panda$collections$Iterator* Iter$469$171832 = NULL;
    panda$collections$Iterator* $tmp1833;
    panda$collections$Iterator* $tmp1834;
    org$pandalanguage$pandac$ASTNode* t1850 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1851;
    panda$core$Object* $tmp1852;
    panda$core$String* $tmp1857;
    panda$core$String* $tmp1858;
    panda$core$String* $tmp1859;
    panda$core$String* $tmp1860;
    panda$core$Char8 $tmp1869;
    panda$core$UInt8 $tmp1870;
    panda$collections$Iterator* Iter$473$171874 = NULL;
    panda$collections$Iterator* $tmp1875;
    panda$collections$Iterator* $tmp1876;
    org$pandalanguage$pandac$ASTNode* s1892 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1893;
    panda$core$Object* $tmp1894;
    panda$core$String* $tmp1899;
    panda$core$String* $tmp1904;
    panda$core$String* $tmp1905;
    panda$core$Int64 $tmp1911;
    panda$core$String* label1913 = NULL;
    org$pandalanguage$pandac$ASTNode* test1915 = NULL;
    panda$collections$ImmutableArray* statements1917 = NULL;
    panda$core$MutableString* result1922 = NULL;
    panda$core$MutableString* $tmp1923;
    panda$core$MutableString* $tmp1924;
    panda$core$String* $tmp1926;
    panda$core$String* $tmp1927;
    panda$core$String* $tmp1931;
    panda$core$String* $tmp1932;
    panda$collections$Iterator* Iter$483$171940 = NULL;
    panda$collections$Iterator* $tmp1941;
    panda$collections$Iterator* $tmp1942;
    org$pandalanguage$pandac$ASTNode* s1958 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1959;
    panda$core$Object* $tmp1960;
    panda$core$String* $tmp1965;
    panda$core$Char8 $tmp1970;
    panda$core$UInt8 $tmp1971;
    panda$core$String* $tmp1972;
    panda$core$String* $tmp1973;
    panda$core$Bit $tmp1979;
    panda$core$String* $tmp1983;
    panda$core$String* $tmp1984;
    panda$core$Object* $tmp1986;
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
            org$pandalanguage$pandac$ASTNode** $tmp324 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 32));
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
            ITable* $tmp515 = ((panda$collections$CollectionView*) args503)->$class->itable;
            while ($tmp515->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp515 = $tmp515->next;
            }
            $fn517 $tmp516 = $tmp515->methods[1];
            panda$core$String* $tmp518 = $tmp516(((panda$collections$CollectionView*) args503));
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
                ITable* $tmp550 = ((panda$collections$CollectionView*) fields530)->$class->itable;
                while ($tmp550->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp550 = $tmp550->next;
                }
                $fn552 $tmp551 = $tmp550->methods[1];
                panda$core$String* $tmp553 = $tmp551(((panda$collections$CollectionView*) fields530));
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
            org$pandalanguage$pandac$ChoiceCase** $tmp569 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) $match$193_9317->$data + 24));
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
                    ITable* $tmp666 = ((panda$collections$CollectionView*) generics603)->$class->itable;
                    while ($tmp666->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                        $tmp666 = $tmp666->next;
                    }
                    $fn668 $tmp667 = $tmp666->methods[1];
                    panda$core$String* $tmp669 = $tmp667(((panda$collections$CollectionView*) generics603));
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
                    ITable* $tmp677 = ((panda$collections$CollectionView*) supertypes605)->$class->itable;
                    while ($tmp677->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                        $tmp677 = $tmp677->next;
                    }
                    $fn679 $tmp678 = $tmp677->methods[1];
                    panda$core$String* $tmp680 = $tmp678(((panda$collections$CollectionView*) supertypes605));
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
            ITable* $tmp1054 = ((panda$collections$CollectionView*) subtypes1043)->$class->itable;
            while ($tmp1054->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1054 = $tmp1054->next;
            }
            $fn1056 $tmp1055 = $tmp1054->methods[1];
            panda$core$String* $tmp1057 = $tmp1055(((panda$collections$CollectionView*) subtypes1043));
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
                    ITable* $tmp1359 = ((panda$collections$CollectionView*) generics1295)->$class->itable;
                    while ($tmp1359->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                        $tmp1359 = $tmp1359->next;
                    }
                    $fn1361 $tmp1360 = $tmp1359->methods[1];
                    panda$core$String* $tmp1362 = $tmp1360(((panda$collections$CollectionView*) generics1295));
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
                ITable* $tmp1370 = ((panda$collections$CollectionView*) parameters1297)->$class->itable;
                while ($tmp1370->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp1370 = $tmp1370->next;
                }
                $fn1372 $tmp1371 = $tmp1370->methods[1];
                panda$core$String* $tmp1373 = $tmp1371(((panda$collections$CollectionView*) parameters1297));
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
                    panda$core$Int64$init$builtin_int64(&$tmp1439, 91);
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
                    panda$core$Int64$init$builtin_int64(&$tmp1444, 92);
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
                    panda$core$Int64$init$builtin_int64(&$tmp1449, 93);
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
                    panda$core$Int64$init$builtin_int64(&$tmp1454, 94);
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
                ITable* $tmp1467 = ((panda$collections$CollectionView*) paramTypes1430)->$class->itable;
                while ($tmp1467->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp1467 = $tmp1467->next;
                }
                $fn1469 $tmp1468 = $tmp1467->methods[1];
                panda$core$String* $tmp1470 = $tmp1468(((panda$collections$CollectionView*) paramTypes1430));
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
            panda$core$String* $tmp1554 = org$pandalanguage$pandac$parser$Token$Kind$convert$R$panda$core$String(kind1545);
            $tmp1553 = $tmp1554;
            panda$core$String* $tmp1556 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1553, &$s1555);
            $tmp1552 = $tmp1556;
            panda$core$String* $tmp1557 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1552, ((panda$core$Object*) base1547));
            $tmp1551 = $tmp1557;
            panda$core$String* $tmp1559 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1551, &$s1558);
            $tmp1550 = $tmp1559;
            $tmp1549 = $tmp1550;
            $returnValue325 = $tmp1549;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1549));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1550));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1551));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1552));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1553));
            $tmp316 = 38;
            goto $l314;
            $l1560:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1562, 33);
        panda$core$Bit $tmp1563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1562);
        if ($tmp1563.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1565 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 16));
            start1564 = *$tmp1565;
            org$pandalanguage$pandac$ASTNode** $tmp1567 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 24));
            end1566 = *$tmp1567;
            panda$core$Bit* $tmp1569 = ((panda$core$Bit*) ((char*) $match$193_9317->$data + 32));
            inclusive1568 = *$tmp1569;
            org$pandalanguage$pandac$ASTNode** $tmp1571 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 33));
            step1570 = *$tmp1571;
            int $tmp1574;
            {
                panda$core$MutableString* $tmp1578 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1578);
                $tmp1577 = $tmp1578;
                $tmp1576 = $tmp1577;
                result1575 = $tmp1576;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1576));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1577));
                if (((panda$core$Bit) { start1564 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result1575, ((panda$core$Object*) start1564));
                }
                }
                if (inclusive1568.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1575, &$s1579);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(result1575, &$s1580);
                }
                }
                if (((panda$core$Bit) { end1566 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result1575, ((panda$core$Object*) end1566));
                }
                }
                if (((panda$core$Bit) { step1570 != NULL }).value) {
                {
                    panda$core$String* $tmp1583 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1582, ((panda$core$Object*) step1570));
                    $tmp1581 = $tmp1583;
                    panda$core$MutableString$append$panda$core$String(result1575, $tmp1581);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1581));
                }
                }
                panda$core$String* $tmp1586 = panda$core$MutableString$finish$R$panda$core$String(result1575);
                $tmp1585 = $tmp1586;
                $tmp1584 = $tmp1585;
                $returnValue325 = $tmp1584;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1584));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1585));
                $tmp1574 = 0;
                goto $l1572;
                $l1587:;
                $tmp316 = 39;
                goto $l314;
                $l1588:;
                return $returnValue325;
            }
            $l1572:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1575));
            result1575 = NULL;
            switch ($tmp1574) {
                case 0: goto $l1587;
            }
            $l1590:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1591, 34);
        panda$core$Bit $tmp1592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1591);
        if ($tmp1592.value) {
        {
            panda$core$Real64* $tmp1594 = ((panda$core$Real64*) ((char*) $match$193_9317->$data + 16));
            value1593 = *$tmp1594;
            panda$core$String* $tmp1597 = panda$core$Real64$convert$R$panda$core$String(value1593);
            $tmp1596 = $tmp1597;
            $tmp1595 = $tmp1596;
            $returnValue325 = $tmp1595;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1595));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1596));
            $tmp316 = 40;
            goto $l314;
            $l1598:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1600, 35);
        panda$core$Bit $tmp1601 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1600);
        if ($tmp1601.value) {
        {
            panda$core$String** $tmp1603 = ((panda$core$String**) ((char*) $match$193_9317->$data + 16));
            src1602 = *$tmp1603;
            panda$core$String* $tmp1608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1607, src1602);
            $tmp1606 = $tmp1608;
            panda$core$String* $tmp1610 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1606, &$s1609);
            $tmp1605 = $tmp1610;
            $tmp1604 = $tmp1605;
            $returnValue325 = $tmp1604;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1604));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1605));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1606));
            $tmp316 = 41;
            goto $l314;
            $l1611:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1613, 36);
        panda$core$Bit $tmp1614 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1613);
        if ($tmp1614.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1616 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 16));
            value1615 = *$tmp1616;
            if (((panda$core$Bit) { value1615 != NULL }).value) {
            {
                panda$core$String* $tmp1621 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1620, ((panda$core$Object*) value1615));
                $tmp1619 = $tmp1621;
                panda$core$String* $tmp1623 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1619, &$s1622);
                $tmp1618 = $tmp1623;
                $tmp1617 = $tmp1618;
                $returnValue325 = $tmp1617;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1617));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1618));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1619));
                $tmp316 = 42;
                goto $l314;
                $l1624:;
                return $returnValue325;
            }
            }
            $tmp1626 = &$s1627;
            $returnValue325 = $tmp1626;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1626));
            $tmp316 = 43;
            goto $l314;
            $l1628:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1630, 37);
        panda$core$Bit $tmp1631 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1630);
        if ($tmp1631.value) {
        {
            $tmp1632 = &$s1633;
            $returnValue325 = $tmp1632;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1632));
            $tmp316 = 44;
            goto $l314;
            $l1634:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1636, 38);
        panda$core$Bit $tmp1637 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1636);
        if ($tmp1637.value) {
        {
            panda$core$String** $tmp1639 = ((panda$core$String**) ((char*) $match$193_9317->$data + 16));
            str1638 = *$tmp1639;
            panda$core$String* $tmp1643 = panda$core$String$format$panda$core$String$R$panda$core$String(str1638, &$s1642);
            $tmp1641 = $tmp1643;
            $tmp1640 = $tmp1641;
            $returnValue325 = $tmp1640;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1640));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1641));
            $tmp316 = 45;
            goto $l314;
            $l1644:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1646, 39);
        panda$core$Bit $tmp1647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1646);
        if ($tmp1647.value) {
        {
            $tmp1648 = &$s1649;
            $returnValue325 = $tmp1648;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1648));
            $tmp316 = 46;
            goto $l314;
            $l1650:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1652, 40);
        panda$core$Bit $tmp1653 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1652);
        if ($tmp1653.value) {
        {
            panda$collections$ImmutableArray** $tmp1655 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 16));
            arguments1654 = *$tmp1655;
            ITable* $tmp1661 = ((panda$collections$CollectionView*) arguments1654)->$class->itable;
            while ($tmp1661->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1661 = $tmp1661->next;
            }
            $fn1663 $tmp1662 = $tmp1661->methods[1];
            panda$core$String* $tmp1664 = $tmp1662(((panda$collections$CollectionView*) arguments1654));
            $tmp1660 = $tmp1664;
            panda$core$String* $tmp1665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1659, $tmp1660);
            $tmp1658 = $tmp1665;
            panda$core$String* $tmp1667 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1658, &$s1666);
            $tmp1657 = $tmp1667;
            $tmp1656 = $tmp1657;
            $returnValue325 = $tmp1656;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1656));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1657));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1658));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1660));
            $tmp316 = 47;
            goto $l314;
            $l1668:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1670, 41);
        panda$core$Bit $tmp1671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1670);
        if ($tmp1671.value) {
        {
            panda$collections$ImmutableArray** $tmp1673 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 16));
            parameters1672 = *$tmp1673;
            ITable* $tmp1679 = ((panda$collections$CollectionView*) parameters1672)->$class->itable;
            while ($tmp1679->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1679 = $tmp1679->next;
            }
            $fn1681 $tmp1680 = $tmp1679->methods[1];
            panda$core$String* $tmp1682 = $tmp1680(((panda$collections$CollectionView*) parameters1672));
            $tmp1678 = $tmp1682;
            panda$core$String* $tmp1683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1677, $tmp1678);
            $tmp1676 = $tmp1683;
            panda$core$String* $tmp1685 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1676, &$s1684);
            $tmp1675 = $tmp1685;
            $tmp1674 = $tmp1675;
            $returnValue325 = $tmp1674;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1674));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1675));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1676));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1678));
            $tmp316 = 48;
            goto $l314;
            $l1686:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1688, 42);
        panda$core$Bit $tmp1689 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1688);
        if ($tmp1689.value) {
        {
            panda$core$String** $tmp1691 = ((panda$core$String**) ((char*) $match$193_9317->$data + 16));
            name1690 = *$tmp1691;
            $tmp1692 = name1690;
            $returnValue325 = $tmp1692;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1692));
            $tmp316 = 49;
            goto $l314;
            $l1693:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1695, 44);
        panda$core$Bit $tmp1696 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1695);
        if ($tmp1696.value) {
        {
            panda$core$String** $tmp1698 = ((panda$core$String**) ((char*) $match$193_9317->$data + 16));
            name1697 = *$tmp1698;
            org$pandalanguage$pandac$ASTNode** $tmp1700 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 24));
            type1699 = *$tmp1700;
            if (((panda$core$Bit) { type1699 != NULL }).value) {
            {
                panda$core$String* $tmp1706 = panda$core$String$convert$R$panda$core$String(name1697);
                $tmp1705 = $tmp1706;
                panda$core$String* $tmp1708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1705, &$s1707);
                $tmp1704 = $tmp1708;
                panda$core$String* $tmp1709 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1704, ((panda$core$Object*) type1699));
                $tmp1703 = $tmp1709;
                panda$core$String* $tmp1711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1703, &$s1710);
                $tmp1702 = $tmp1711;
                $tmp1701 = $tmp1702;
                $returnValue325 = $tmp1701;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1701));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1702));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1703));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1704));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1705));
                $tmp316 = 50;
                goto $l314;
                $l1712:;
                return $returnValue325;
            }
            }
            $tmp1714 = name1697;
            $returnValue325 = $tmp1714;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1714));
            $tmp316 = 51;
            goto $l314;
            $l1715:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1717, 43);
        panda$core$Bit $tmp1718 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1717);
        if ($tmp1718.value) {
        {
            panda$collections$ImmutableArray** $tmp1720 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 16));
            parameters1719 = *$tmp1720;
            org$pandalanguage$pandac$ASTNode** $tmp1722 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 24));
            body1721 = *$tmp1722;
            ITable* $tmp1730 = ((panda$collections$CollectionView*) parameters1719)->$class->itable;
            while ($tmp1730->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1730 = $tmp1730->next;
            }
            $fn1732 $tmp1731 = $tmp1730->methods[1];
            panda$core$String* $tmp1733 = $tmp1731(((panda$collections$CollectionView*) parameters1719));
            $tmp1729 = $tmp1733;
            panda$core$String* $tmp1734 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1728, $tmp1729);
            $tmp1727 = $tmp1734;
            panda$core$String* $tmp1736 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1727, &$s1735);
            $tmp1726 = $tmp1736;
            panda$core$String* $tmp1737 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1726, ((panda$core$Object*) body1721));
            $tmp1725 = $tmp1737;
            panda$core$String* $tmp1739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1725, &$s1738);
            $tmp1724 = $tmp1739;
            $tmp1723 = $tmp1724;
            $returnValue325 = $tmp1723;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1723));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1724));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1725));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1726));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1727));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1729));
            $tmp316 = 52;
            goto $l314;
            $l1740:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1742, 45);
        panda$core$Bit $tmp1743 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1742);
        if ($tmp1743.value) {
        {
            panda$collections$ImmutableArray** $tmp1745 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 16));
            parameters1744 = *$tmp1745;
            org$pandalanguage$pandac$ASTNode** $tmp1747 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 24));
            body1746 = *$tmp1747;
            ITable* $tmp1755 = ((panda$collections$CollectionView*) parameters1744)->$class->itable;
            while ($tmp1755->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                $tmp1755 = $tmp1755->next;
            }
            $fn1757 $tmp1756 = $tmp1755->methods[1];
            panda$core$String* $tmp1758 = $tmp1756(((panda$collections$CollectionView*) parameters1744));
            $tmp1754 = $tmp1758;
            panda$core$String* $tmp1759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1753, $tmp1754);
            $tmp1752 = $tmp1759;
            panda$core$String* $tmp1761 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1752, &$s1760);
            $tmp1751 = $tmp1761;
            panda$core$String* $tmp1762 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1751, ((panda$core$Object*) body1746));
            $tmp1750 = $tmp1762;
            panda$core$String* $tmp1764 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1750, &$s1763);
            $tmp1749 = $tmp1764;
            $tmp1748 = $tmp1749;
            $returnValue325 = $tmp1748;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1748));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1749));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1750));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1751));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1752));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1754));
            $tmp316 = 53;
            goto $l314;
            $l1765:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1767, 46);
        panda$core$Bit $tmp1768 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1767);
        if ($tmp1768.value) {
        {
            panda$core$String** $tmp1770 = ((panda$core$String**) ((char*) $match$193_9317->$data + 16));
            name1769 = *$tmp1770;
            $tmp1771 = name1769;
            $returnValue325 = $tmp1771;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1771));
            $tmp316 = 54;
            goto $l314;
            $l1772:;
            return $returnValue325;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1774, 47);
        panda$core$Bit $tmp1775 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1774);
        if ($tmp1775.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp1777 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$193_9317->$data + 16));
            kind1776 = *$tmp1777;
            panda$collections$ImmutableArray** $tmp1779 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 24));
            decls1778 = *$tmp1779;
            int $tmp1782;
            {
                panda$core$MutableString* $tmp1786 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1786);
                $tmp1785 = $tmp1786;
                $tmp1784 = $tmp1785;
                result1783 = $tmp1784;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1784));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1785));
                {
                    $match$458_171787 = kind1776;
                    panda$core$Int64$init$builtin_int64(&$tmp1788, 0);
                    panda$core$Bit $tmp1789 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$458_171787.$rawValue, $tmp1788);
                    if ($tmp1789.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1783, &$s1790);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp1791, 1);
                    panda$core$Bit $tmp1792 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$458_171787.$rawValue, $tmp1791);
                    if ($tmp1792.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1783, &$s1793);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp1794, 2);
                    panda$core$Bit $tmp1795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$458_171787.$rawValue, $tmp1794);
                    if ($tmp1795.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1783, &$s1796);
                    }
                    }
                    else {
                    panda$core$Int64$init$builtin_int64(&$tmp1797, 3);
                    panda$core$Bit $tmp1798 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$458_171787.$rawValue, $tmp1797);
                    if ($tmp1798.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1783, &$s1799);
                    }
                    }
                    }
                    }
                    }
                }
                ITable* $tmp1801 = ((panda$collections$CollectionView*) decls1778)->$class->itable;
                while ($tmp1801->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
                    $tmp1801 = $tmp1801->next;
                }
                $fn1803 $tmp1802 = $tmp1801->methods[1];
                panda$core$String* $tmp1804 = $tmp1802(((panda$collections$CollectionView*) decls1778));
                $tmp1800 = $tmp1804;
                panda$core$MutableString$append$panda$core$String(result1783, $tmp1800);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1800));
                panda$core$String* $tmp1807 = panda$core$MutableString$finish$R$panda$core$String(result1783);
                $tmp1806 = $tmp1807;
                $tmp1805 = $tmp1806;
                $returnValue325 = $tmp1805;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1805));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1806));
                $tmp1782 = 0;
                goto $l1780;
                $l1808:;
                $tmp316 = 55;
                goto $l314;
                $l1809:;
                return $returnValue325;
            }
            $l1780:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1783));
            result1783 = NULL;
            switch ($tmp1782) {
                case 0: goto $l1808;
            }
            $l1811:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1812, 48);
        panda$core$Bit $tmp1813 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1812);
        if ($tmp1813.value) {
        {
            panda$collections$ImmutableArray** $tmp1815 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 16));
            tests1814 = *$tmp1815;
            panda$collections$ImmutableArray** $tmp1817 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 24));
            statements1816 = *$tmp1817;
            int $tmp1820;
            {
                panda$core$MutableString* $tmp1824 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1824, &$s1825);
                $tmp1823 = $tmp1824;
                $tmp1822 = $tmp1823;
                result1821 = $tmp1822;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1822));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1823));
                $tmp1827 = &$s1828;
                separator1826 = $tmp1827;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1827));
                {
                    int $tmp1831;
                    {
                        ITable* $tmp1835 = ((panda$collections$Iterable*) tests1814)->$class->itable;
                        while ($tmp1835->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1835 = $tmp1835->next;
                        }
                        $fn1837 $tmp1836 = $tmp1835->methods[0];
                        panda$collections$Iterator* $tmp1838 = $tmp1836(((panda$collections$Iterable*) tests1814));
                        $tmp1834 = $tmp1838;
                        $tmp1833 = $tmp1834;
                        Iter$469$171832 = $tmp1833;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1833));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1834));
                        $l1839:;
                        ITable* $tmp1842 = Iter$469$171832->$class->itable;
                        while ($tmp1842->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1842 = $tmp1842->next;
                        }
                        $fn1844 $tmp1843 = $tmp1842->methods[0];
                        panda$core$Bit $tmp1845 = $tmp1843(Iter$469$171832);
                        panda$core$Bit $tmp1846 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1845);
                        bool $tmp1841 = $tmp1846.value;
                        if (!$tmp1841) goto $l1840;
                        {
                            int $tmp1849;
                            {
                                ITable* $tmp1853 = Iter$469$171832->$class->itable;
                                while ($tmp1853->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1853 = $tmp1853->next;
                                }
                                $fn1855 $tmp1854 = $tmp1853->methods[1];
                                panda$core$Object* $tmp1856 = $tmp1854(Iter$469$171832);
                                $tmp1852 = $tmp1856;
                                $tmp1851 = ((org$pandalanguage$pandac$ASTNode*) $tmp1852);
                                t1850 = $tmp1851;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1851));
                                panda$core$Panda$unref$panda$core$Object($tmp1852);
                                panda$core$String* $tmp1861 = panda$core$String$convert$R$panda$core$String(separator1826);
                                $tmp1860 = $tmp1861;
                                panda$core$String* $tmp1863 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1860, &$s1862);
                                $tmp1859 = $tmp1863;
                                panda$core$String* $tmp1864 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1859, ((panda$core$Object*) t1850));
                                $tmp1858 = $tmp1864;
                                panda$core$String* $tmp1866 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1858, &$s1865);
                                $tmp1857 = $tmp1866;
                                panda$core$MutableString$append$panda$core$String(result1821, $tmp1857);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1857));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1858));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1859));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1860));
                            }
                            $tmp1849 = -1;
                            goto $l1847;
                            $l1847:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1850));
                            t1850 = NULL;
                            switch ($tmp1849) {
                                case -1: goto $l1867;
                            }
                            $l1867:;
                        }
                        goto $l1839;
                        $l1840:;
                    }
                    $tmp1831 = -1;
                    goto $l1829;
                    $l1829:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$469$171832));
                    Iter$469$171832 = NULL;
                    switch ($tmp1831) {
                        case -1: goto $l1868;
                    }
                    $l1868:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp1870, 58);
                panda$core$Char8$init$panda$core$UInt8(&$tmp1869, $tmp1870);
                panda$core$MutableString$append$panda$core$Char8(result1821, $tmp1869);
                {
                    int $tmp1873;
                    {
                        ITable* $tmp1877 = ((panda$collections$Iterable*) statements1816)->$class->itable;
                        while ($tmp1877->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1877 = $tmp1877->next;
                        }
                        $fn1879 $tmp1878 = $tmp1877->methods[0];
                        panda$collections$Iterator* $tmp1880 = $tmp1878(((panda$collections$Iterable*) statements1816));
                        $tmp1876 = $tmp1880;
                        $tmp1875 = $tmp1876;
                        Iter$473$171874 = $tmp1875;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1875));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1876));
                        $l1881:;
                        ITable* $tmp1884 = Iter$473$171874->$class->itable;
                        while ($tmp1884->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1884 = $tmp1884->next;
                        }
                        $fn1886 $tmp1885 = $tmp1884->methods[0];
                        panda$core$Bit $tmp1887 = $tmp1885(Iter$473$171874);
                        panda$core$Bit $tmp1888 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1887);
                        bool $tmp1883 = $tmp1888.value;
                        if (!$tmp1883) goto $l1882;
                        {
                            int $tmp1891;
                            {
                                ITable* $tmp1895 = Iter$473$171874->$class->itable;
                                while ($tmp1895->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1895 = $tmp1895->next;
                                }
                                $fn1897 $tmp1896 = $tmp1895->methods[1];
                                panda$core$Object* $tmp1898 = $tmp1896(Iter$473$171874);
                                $tmp1894 = $tmp1898;
                                $tmp1893 = ((org$pandalanguage$pandac$ASTNode*) $tmp1894);
                                s1892 = $tmp1893;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1893));
                                panda$core$Panda$unref$panda$core$Object($tmp1894);
                                panda$core$String* $tmp1901 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1900, ((panda$core$Object*) s1892));
                                $tmp1899 = $tmp1901;
                                panda$core$MutableString$append$panda$core$String(result1821, $tmp1899);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1899));
                            }
                            $tmp1891 = -1;
                            goto $l1889;
                            $l1889:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1892));
                            s1892 = NULL;
                            switch ($tmp1891) {
                                case -1: goto $l1902;
                            }
                            $l1902:;
                        }
                        goto $l1881;
                        $l1882:;
                    }
                    $tmp1873 = -1;
                    goto $l1871;
                    $l1871:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$473$171874));
                    Iter$473$171874 = NULL;
                    switch ($tmp1873) {
                        case -1: goto $l1903;
                    }
                    $l1903:;
                }
                panda$core$String* $tmp1906 = panda$core$MutableString$finish$R$panda$core$String(result1821);
                $tmp1905 = $tmp1906;
                $tmp1904 = $tmp1905;
                $returnValue325 = $tmp1904;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1904));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1905));
                $tmp1820 = 0;
                goto $l1818;
                $l1907:;
                $tmp316 = 56;
                goto $l314;
                $l1908:;
                return $returnValue325;
            }
            $l1818:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1826));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1821));
            result1821 = NULL;
            separator1826 = NULL;
            switch ($tmp1820) {
                case 0: goto $l1907;
            }
            $l1910:;
        }
        }
        else {
        panda$core$Int64$init$builtin_int64(&$tmp1911, 49);
        panda$core$Bit $tmp1912 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$193_9317->$rawValue, $tmp1911);
        if ($tmp1912.value) {
        {
            panda$core$String** $tmp1914 = ((panda$core$String**) ((char*) $match$193_9317->$data + 16));
            label1913 = *$tmp1914;
            org$pandalanguage$pandac$ASTNode** $tmp1916 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$193_9317->$data + 24));
            test1915 = *$tmp1916;
            panda$collections$ImmutableArray** $tmp1918 = ((panda$collections$ImmutableArray**) ((char*) $match$193_9317->$data + 32));
            statements1917 = *$tmp1918;
            int $tmp1921;
            {
                panda$core$MutableString* $tmp1925 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1925);
                $tmp1924 = $tmp1925;
                $tmp1923 = $tmp1924;
                result1922 = $tmp1923;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1923));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1924));
                if (((panda$core$Bit) { label1913 != NULL }).value) {
                {
                    panda$core$String* $tmp1928 = panda$core$String$convert$R$panda$core$String(label1913);
                    $tmp1927 = $tmp1928;
                    panda$core$String* $tmp1930 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1927, &$s1929);
                    $tmp1926 = $tmp1930;
                    panda$core$MutableString$append$panda$core$String(result1922, $tmp1926);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1926));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1927));
                }
                }
                panda$core$String* $tmp1934 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1933, ((panda$core$Object*) test1915));
                $tmp1932 = $tmp1934;
                panda$core$String* $tmp1936 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1932, &$s1935);
                $tmp1931 = $tmp1936;
                panda$core$MutableString$append$panda$core$String(result1922, $tmp1931);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1931));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1932));
                {
                    int $tmp1939;
                    {
                        ITable* $tmp1943 = ((panda$collections$Iterable*) statements1917)->$class->itable;
                        while ($tmp1943->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1943 = $tmp1943->next;
                        }
                        $fn1945 $tmp1944 = $tmp1943->methods[0];
                        panda$collections$Iterator* $tmp1946 = $tmp1944(((panda$collections$Iterable*) statements1917));
                        $tmp1942 = $tmp1946;
                        $tmp1941 = $tmp1942;
                        Iter$483$171940 = $tmp1941;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1941));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1942));
                        $l1947:;
                        ITable* $tmp1950 = Iter$483$171940->$class->itable;
                        while ($tmp1950->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1950 = $tmp1950->next;
                        }
                        $fn1952 $tmp1951 = $tmp1950->methods[0];
                        panda$core$Bit $tmp1953 = $tmp1951(Iter$483$171940);
                        panda$core$Bit $tmp1954 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1953);
                        bool $tmp1949 = $tmp1954.value;
                        if (!$tmp1949) goto $l1948;
                        {
                            int $tmp1957;
                            {
                                ITable* $tmp1961 = Iter$483$171940->$class->itable;
                                while ($tmp1961->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1961 = $tmp1961->next;
                                }
                                $fn1963 $tmp1962 = $tmp1961->methods[1];
                                panda$core$Object* $tmp1964 = $tmp1962(Iter$483$171940);
                                $tmp1960 = $tmp1964;
                                $tmp1959 = ((org$pandalanguage$pandac$ASTNode*) $tmp1960);
                                s1958 = $tmp1959;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1959));
                                panda$core$Panda$unref$panda$core$Object($tmp1960);
                                panda$core$String* $tmp1967 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1958), &$s1966);
                                $tmp1965 = $tmp1967;
                                panda$core$MutableString$append$panda$core$String(result1922, $tmp1965);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1965));
                            }
                            $tmp1957 = -1;
                            goto $l1955;
                            $l1955:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1958));
                            s1958 = NULL;
                            switch ($tmp1957) {
                                case -1: goto $l1968;
                            }
                            $l1968:;
                        }
                        goto $l1947;
                        $l1948:;
                    }
                    $tmp1939 = -1;
                    goto $l1937;
                    $l1937:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$483$171940));
                    Iter$483$171940 = NULL;
                    switch ($tmp1939) {
                        case -1: goto $l1969;
                    }
                    $l1969:;
                }
                panda$core$UInt8$init$builtin_uint8(&$tmp1971, 125);
                panda$core$Char8$init$panda$core$UInt8(&$tmp1970, $tmp1971);
                panda$core$MutableString$append$panda$core$Char8(result1922, $tmp1970);
                panda$core$String* $tmp1974 = panda$core$MutableString$finish$R$panda$core$String(result1922);
                $tmp1973 = $tmp1974;
                $tmp1972 = $tmp1973;
                $returnValue325 = $tmp1972;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1972));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1973));
                $tmp1921 = 0;
                goto $l1919;
                $l1975:;
                $tmp316 = 57;
                goto $l314;
                $l1976:;
                return $returnValue325;
            }
            $l1919:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1922));
            result1922 = NULL;
            switch ($tmp1921) {
                case 0: goto $l1975;
            }
            $l1978:;
        }
        }
        else {
        {
            panda$core$Bit$init$builtin_bit(&$tmp1979, false);
            if ($tmp1979.value) goto $l1980; else goto $l1981;
            $l1981:;
            panda$core$Int64$wrapper* $tmp1987;
            $tmp1987 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp1987->value = self->$rawValue;
            $tmp1986 = ((panda$core$Object*) $tmp1987);
            panda$core$String* $tmp1988 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1985, $tmp1986);
            $tmp1984 = $tmp1988;
            panda$core$String* $tmp1990 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1984, &$s1989);
            $tmp1983 = $tmp1990;
            panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s1982, (panda$core$Int64) { 489 }, $tmp1983);
            abort();
            $l1980:;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
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
        case 56: goto $l1908;
        case 23: goto $l1036;
        case 18: goto $l768;
        case 6: goto $l417;
        case 47: goto $l1668;
        case 19: goto $l834;
        case 4: goto $l382;
        case 51: goto $l1715;
        case 52: goto $l1740;
        case 9: goto $l493;
        case 21: goto $l912;
        case 42: goto $l1624;
        case 0: goto $l337;
        case 20: goto $l855;
        case 25: goto $l1068;
        case 37: goto $l1541;
        case 55: goto $l1809;
        case 1: goto $l340;
        case 8: goto $l479;
        case 46: goto $l1650;
        case 49: goto $l1693;
        case 45: goto $l1644;
        case -1: goto $l1991;
        case 31: goto $l1423;
        case 54: goto $l1772;
        case 2: goto $l355;
        case 17: goto $l762;
        case 30: goto $l1282;
        case 39: goto $l1588;
        case 53: goto $l1765;
        case 50: goto $l1712;
        case 48: goto $l1686;
        case 57: goto $l1976;
        case 16: goto $l742;
        case 35: goto $l1515;
        case 33: goto $l1498;
        case 12: goto $l561;
        case 5: goto $l388;
        case 34: goto $l1505;
        case 3: goto $l369;
        case 38: goto $l1560;
        case 13: goto $l591;
        case 11: goto $l522;
        case 27: goto $l1146;
        case 41: goto $l1611;
        case 26: goto $l1136;
        case 10: goto $l497;
        case 15: goto $l738;
        case 29: goto $l1216;
        case 40: goto $l1598;
        case 43: goto $l1628;
        case 14: goto $l724;
        case 22: goto $l963;
        case 44: goto $l1634;
    }
    $l1991:;
    abort();
}
void org$pandalanguage$pandac$ASTNode$cleanup(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$5_11998 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1999;
    panda$core$Int64 $tmp2000;
    org$pandalanguage$pandac$Position _f02002;
    panda$core$String* _f12004 = NULL;
    panda$core$String* _f22006 = NULL;
    org$pandalanguage$pandac$ASTNode* _f32008 = NULL;
    panda$core$Int64 $tmp2010;
    org$pandalanguage$pandac$Position _f02012;
    org$pandalanguage$pandac$ASTNode* _f12014 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22016 = NULL;
    panda$core$Int64 $tmp2018;
    org$pandalanguage$pandac$Position _f02020;
    org$pandalanguage$pandac$ASTNode* _f12022 = NULL;
    panda$core$Int64 $tmp2024;
    org$pandalanguage$pandac$Position _f02026;
    panda$core$Int64 $tmp2028;
    org$pandalanguage$pandac$Position _f02030;
    org$pandalanguage$pandac$ASTNode* _f12032 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind _f22034;
    org$pandalanguage$pandac$ASTNode* _f32036 = NULL;
    panda$core$Int64 $tmp2038;
    org$pandalanguage$pandac$Position _f02040;
    panda$core$Bit _f12042;
    panda$core$Int64 $tmp2044;
    org$pandalanguage$pandac$Position _f02046;
    panda$collections$ImmutableArray* _f12048 = NULL;
    panda$core$Int64 $tmp2050;
    org$pandalanguage$pandac$Position _f02052;
    panda$core$String* _f12054 = NULL;
    panda$core$Int64 $tmp2056;
    org$pandalanguage$pandac$Position _f02058;
    org$pandalanguage$pandac$ASTNode* _f12060 = NULL;
    panda$collections$ImmutableArray* _f22062 = NULL;
    panda$core$Int64 $tmp2064;
    org$pandalanguage$pandac$Position _f02066;
    org$pandalanguage$pandac$ASTNode* _f12068 = NULL;
    panda$core$String* _f22070 = NULL;
    panda$collections$ImmutableArray* _f32072 = NULL;
    panda$core$Int64 $tmp2074;
    org$pandalanguage$pandac$Position _f02076;
    org$pandalanguage$pandac$ASTNode* _f12078 = NULL;
    org$pandalanguage$pandac$ChoiceCase* _f22080 = NULL;
    panda$core$Int64 _f32082;
    panda$core$Int64 $tmp2084;
    org$pandalanguage$pandac$Position _f02086;
    org$pandalanguage$pandac$ASTNode* _f12088 = NULL;
    panda$collections$ImmutableArray* _f22090 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind _f32092;
    panda$core$String* _f42094 = NULL;
    panda$collections$ImmutableArray* _f52096 = NULL;
    panda$collections$ImmutableArray* _f62098 = NULL;
    panda$collections$ImmutableArray* _f72100 = NULL;
    panda$core$Int64 $tmp2102;
    org$pandalanguage$pandac$Position _f02104;
    panda$core$String* _f12106 = NULL;
    panda$core$Int64 $tmp2108;
    org$pandalanguage$pandac$Position _f02110;
    org$pandalanguage$pandac$ASTNode* _f12112 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22114 = NULL;
    panda$core$Int64 $tmp2116;
    org$pandalanguage$pandac$Position _f02118;
    panda$core$String* _f12120 = NULL;
    panda$collections$ImmutableArray* _f22122 = NULL;
    org$pandalanguage$pandac$ASTNode* _f32124 = NULL;
    panda$core$Int64 $tmp2126;
    org$pandalanguage$pandac$Position _f02128;
    org$pandalanguage$pandac$ASTNode* _f12130 = NULL;
    panda$core$String* _f22132 = NULL;
    panda$core$Int64 $tmp2134;
    org$pandalanguage$pandac$Position _f02136;
    org$pandalanguage$pandac$ASTNode* _f12138 = NULL;
    panda$collections$ImmutableArray* _f22140 = NULL;
    org$pandalanguage$pandac$ASTNode* _f32142 = NULL;
    panda$core$Int64 $tmp2144;
    panda$collections$ImmutableArray* _f02146 = NULL;
    panda$core$Int64 $tmp2148;
    org$pandalanguage$pandac$Position _f02150;
    panda$core$String* _f12152 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22154 = NULL;
    org$pandalanguage$pandac$ASTNode* _f32156 = NULL;
    panda$collections$ImmutableArray* _f42158 = NULL;
    panda$core$Int64 $tmp2160;
    org$pandalanguage$pandac$Position _f02162;
    panda$core$String* _f12164 = NULL;
    panda$collections$ImmutableArray* _f22166 = NULL;
    panda$core$Int64 $tmp2168;
    org$pandalanguage$pandac$Position _f02170;
    panda$core$String* _f12172 = NULL;
    panda$core$Int64 $tmp2174;
    org$pandalanguage$pandac$Position _f02176;
    org$pandalanguage$pandac$ASTNode* _f12178 = NULL;
    panda$collections$ImmutableArray* _f22180 = NULL;
    org$pandalanguage$pandac$ASTNode* _f32182 = NULL;
    panda$core$Int64 $tmp2184;
    org$pandalanguage$pandac$Position _f02186;
    panda$core$UInt64 _f12188;
    panda$core$Int64 $tmp2190;
    org$pandalanguage$pandac$IRNode* _f02192 = NULL;
    panda$core$Int64 $tmp2194;
    org$pandalanguage$pandac$Position _f02196;
    panda$core$String* _f12198 = NULL;
    panda$collections$ImmutableArray* _f22200 = NULL;
    panda$core$Int64 $tmp2202;
    org$pandalanguage$pandac$Position _f02204;
    org$pandalanguage$pandac$ASTNode* _f12206 = NULL;
    panda$collections$ImmutableArray* _f22208 = NULL;
    panda$collections$ImmutableArray* _f32210 = NULL;
    panda$core$Int64 $tmp2212;
    org$pandalanguage$pandac$Position _f02214;
    org$pandalanguage$pandac$ASTNode* _f12216 = NULL;
    panda$collections$ImmutableArray* _f22218 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind _f32220;
    panda$core$String* _f42222 = NULL;
    panda$collections$ImmutableArray* _f52224 = NULL;
    panda$collections$ImmutableArray* _f62226 = NULL;
    org$pandalanguage$pandac$ASTNode* _f72228 = NULL;
    panda$collections$ImmutableArray* _f82230 = NULL;
    panda$core$Int64 $tmp2232;
    org$pandalanguage$pandac$Position _f02234;
    org$pandalanguage$pandac$parser$Token$Kind _f12236;
    panda$collections$ImmutableArray* _f22238 = NULL;
    org$pandalanguage$pandac$ASTNode* _f32240 = NULL;
    panda$core$Int64 $tmp2242;
    org$pandalanguage$pandac$Position _f02244;
    panda$core$Int64 $tmp2246;
    org$pandalanguage$pandac$Position _f02248;
    org$pandalanguage$pandac$ASTNode* _f12250 = NULL;
    panda$core$Int64 $tmp2252;
    org$pandalanguage$pandac$Position _f02254;
    panda$core$String* _f12256 = NULL;
    panda$core$Int64 $tmp2258;
    org$pandalanguage$pandac$Position _f02260;
    panda$core$String* _f12262 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22264 = NULL;
    panda$core$Int64 $tmp2266;
    org$pandalanguage$pandac$Position _f02268;
    org$pandalanguage$pandac$parser$Token$Kind _f12270;
    org$pandalanguage$pandac$ASTNode* _f22272 = NULL;
    panda$core$Int64 $tmp2274;
    org$pandalanguage$pandac$Position _f02276;
    org$pandalanguage$pandac$ASTNode* _f12278 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22280 = NULL;
    panda$core$Bit _f32282;
    org$pandalanguage$pandac$ASTNode* _f42284 = NULL;
    panda$core$Int64 $tmp2286;
    org$pandalanguage$pandac$Position _f02288;
    panda$core$Real64 _f12290;
    panda$core$Int64 $tmp2292;
    org$pandalanguage$pandac$Position _f02294;
    panda$core$String* _f12296 = NULL;
    panda$core$Int64 $tmp2298;
    org$pandalanguage$pandac$Position _f02300;
    org$pandalanguage$pandac$ASTNode* _f12302 = NULL;
    panda$core$Int64 $tmp2304;
    org$pandalanguage$pandac$Position _f02306;
    panda$core$Int64 $tmp2308;
    org$pandalanguage$pandac$Position _f02310;
    panda$core$String* _f12312 = NULL;
    panda$core$Int64 $tmp2314;
    org$pandalanguage$pandac$Position _f02316;
    panda$core$Int64 $tmp2318;
    org$pandalanguage$pandac$Position _f02320;
    panda$collections$ImmutableArray* _f12322 = NULL;
    panda$core$Int64 $tmp2324;
    org$pandalanguage$pandac$Position _f02326;
    panda$collections$ImmutableArray* _f12328 = NULL;
    panda$core$Int64 $tmp2330;
    org$pandalanguage$pandac$Position _f02332;
    panda$core$String* _f12334 = NULL;
    panda$core$Int64 $tmp2336;
    org$pandalanguage$pandac$Position _f02338;
    panda$collections$ImmutableArray* _f12340 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22342 = NULL;
    panda$core$Int64 $tmp2344;
    org$pandalanguage$pandac$Position _f02346;
    panda$core$String* _f12348 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22350 = NULL;
    panda$core$Int64 $tmp2352;
    org$pandalanguage$pandac$Position _f02354;
    panda$collections$ImmutableArray* _f12356 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22358 = NULL;
    panda$core$Int64 $tmp2360;
    org$pandalanguage$pandac$Position _f02362;
    panda$core$String* _f12364 = NULL;
    panda$core$Int64 $tmp2366;
    org$pandalanguage$pandac$Position _f02368;
    org$pandalanguage$pandac$Variable$Kind _f12370;
    panda$collections$ImmutableArray* _f22372 = NULL;
    panda$core$Int64 $tmp2374;
    org$pandalanguage$pandac$Position _f02376;
    panda$collections$ImmutableArray* _f12378 = NULL;
    panda$collections$ImmutableArray* _f22380 = NULL;
    panda$core$Int64 $tmp2382;
    org$pandalanguage$pandac$Position _f02384;
    panda$core$String* _f12386 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22388 = NULL;
    panda$collections$ImmutableArray* _f32390 = NULL;
    int $tmp1994;
    {
        int $tmp1997;
        {
            $tmp1999 = self;
            $match$5_11998 = $tmp1999;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1999));
            panda$core$Int64$init$builtin_int64(&$tmp2000, 0);
            panda$core$Bit $tmp2001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2000);
            if ($tmp2001.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2003 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02002 = *$tmp2003;
                panda$core$String** $tmp2005 = ((panda$core$String**) ((char*) $match$5_11998->$data + 16));
                _f12004 = *$tmp2005;
                panda$core$String** $tmp2007 = ((panda$core$String**) ((char*) $match$5_11998->$data + 24));
                _f22006 = *$tmp2007;
                org$pandalanguage$pandac$ASTNode** $tmp2009 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 32));
                _f32008 = *$tmp2009;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12004));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22006));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32008));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2010, 1);
            panda$core$Bit $tmp2011 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2010);
            if ($tmp2011.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2013 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02012 = *$tmp2013;
                org$pandalanguage$pandac$ASTNode** $tmp2015 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 16));
                _f12014 = *$tmp2015;
                org$pandalanguage$pandac$ASTNode** $tmp2017 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 24));
                _f22016 = *$tmp2017;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12014));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22016));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2018, 2);
            panda$core$Bit $tmp2019 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2018);
            if ($tmp2019.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2021 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02020 = *$tmp2021;
                org$pandalanguage$pandac$ASTNode** $tmp2023 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 16));
                _f12022 = *$tmp2023;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12022));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2024, 3);
            panda$core$Bit $tmp2025 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2024);
            if ($tmp2025.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2027 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02026 = *$tmp2027;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2028, 4);
            panda$core$Bit $tmp2029 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2028);
            if ($tmp2029.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2031 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02030 = *$tmp2031;
                org$pandalanguage$pandac$ASTNode** $tmp2033 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 16));
                _f12032 = *$tmp2033;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2035 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11998->$data + 24));
                _f22034 = *$tmp2035;
                org$pandalanguage$pandac$ASTNode** $tmp2037 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 32));
                _f32036 = *$tmp2037;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12032));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32036));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2038, 5);
            panda$core$Bit $tmp2039 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2038);
            if ($tmp2039.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2041 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02040 = *$tmp2041;
                panda$core$Bit* $tmp2043 = ((panda$core$Bit*) ((char*) $match$5_11998->$data + 16));
                _f12042 = *$tmp2043;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2044, 6);
            panda$core$Bit $tmp2045 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2044);
            if ($tmp2045.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2047 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02046 = *$tmp2047;
                panda$collections$ImmutableArray** $tmp2049 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11998->$data + 16));
                _f12048 = *$tmp2049;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12048));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2050, 7);
            panda$core$Bit $tmp2051 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2050);
            if ($tmp2051.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2053 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02052 = *$tmp2053;
                panda$core$String** $tmp2055 = ((panda$core$String**) ((char*) $match$5_11998->$data + 16));
                _f12054 = *$tmp2055;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12054));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2056, 8);
            panda$core$Bit $tmp2057 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2056);
            if ($tmp2057.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2059 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02058 = *$tmp2059;
                org$pandalanguage$pandac$ASTNode** $tmp2061 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 16));
                _f12060 = *$tmp2061;
                panda$collections$ImmutableArray** $tmp2063 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11998->$data + 24));
                _f22062 = *$tmp2063;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12060));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22062));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2064, 9);
            panda$core$Bit $tmp2065 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2064);
            if ($tmp2065.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2067 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02066 = *$tmp2067;
                org$pandalanguage$pandac$ASTNode** $tmp2069 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 16));
                _f12068 = *$tmp2069;
                panda$core$String** $tmp2071 = ((panda$core$String**) ((char*) $match$5_11998->$data + 24));
                _f22070 = *$tmp2071;
                panda$collections$ImmutableArray** $tmp2073 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11998->$data + 32));
                _f32072 = *$tmp2073;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12068));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22070));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32072));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2074, 10);
            panda$core$Bit $tmp2075 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2074);
            if ($tmp2075.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2077 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02076 = *$tmp2077;
                org$pandalanguage$pandac$ASTNode** $tmp2079 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 16));
                _f12078 = *$tmp2079;
                org$pandalanguage$pandac$ChoiceCase** $tmp2081 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) $match$5_11998->$data + 24));
                _f22080 = *$tmp2081;
                panda$core$Int64* $tmp2083 = ((panda$core$Int64*) ((char*) $match$5_11998->$data + 32));
                _f32082 = *$tmp2083;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12078));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22080));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2084, 11);
            panda$core$Bit $tmp2085 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2084);
            if ($tmp2085.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2087 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02086 = *$tmp2087;
                org$pandalanguage$pandac$ASTNode** $tmp2089 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 16));
                _f12088 = *$tmp2089;
                panda$collections$ImmutableArray** $tmp2091 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11998->$data + 24));
                _f22090 = *$tmp2091;
                org$pandalanguage$pandac$ClassDecl$Kind* $tmp2093 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$5_11998->$data + 32));
                _f32092 = *$tmp2093;
                panda$core$String** $tmp2095 = ((panda$core$String**) ((char*) $match$5_11998->$data + 40));
                _f42094 = *$tmp2095;
                panda$collections$ImmutableArray** $tmp2097 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11998->$data + 48));
                _f52096 = *$tmp2097;
                panda$collections$ImmutableArray** $tmp2099 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11998->$data + 56));
                _f62098 = *$tmp2099;
                panda$collections$ImmutableArray** $tmp2101 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11998->$data + 64));
                _f72100 = *$tmp2101;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12088));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22090));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42094));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f52096));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f62098));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f72100));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2102, 12);
            panda$core$Bit $tmp2103 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2102);
            if ($tmp2103.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2105 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02104 = *$tmp2105;
                panda$core$String** $tmp2107 = ((panda$core$String**) ((char*) $match$5_11998->$data + 16));
                _f12106 = *$tmp2107;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12106));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2108, 13);
            panda$core$Bit $tmp2109 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2108);
            if ($tmp2109.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2111 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02110 = *$tmp2111;
                org$pandalanguage$pandac$ASTNode** $tmp2113 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 16));
                _f12112 = *$tmp2113;
                org$pandalanguage$pandac$ASTNode** $tmp2115 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 24));
                _f22114 = *$tmp2115;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12112));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22114));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2116, 14);
            panda$core$Bit $tmp2117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2116);
            if ($tmp2117.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2119 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02118 = *$tmp2119;
                panda$core$String** $tmp2121 = ((panda$core$String**) ((char*) $match$5_11998->$data + 16));
                _f12120 = *$tmp2121;
                panda$collections$ImmutableArray** $tmp2123 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11998->$data + 24));
                _f22122 = *$tmp2123;
                org$pandalanguage$pandac$ASTNode** $tmp2125 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 32));
                _f32124 = *$tmp2125;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12120));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22122));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32124));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2126, 15);
            panda$core$Bit $tmp2127 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2126);
            if ($tmp2127.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2129 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02128 = *$tmp2129;
                org$pandalanguage$pandac$ASTNode** $tmp2131 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 16));
                _f12130 = *$tmp2131;
                panda$core$String** $tmp2133 = ((panda$core$String**) ((char*) $match$5_11998->$data + 24));
                _f22132 = *$tmp2133;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12130));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22132));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2134, 16);
            panda$core$Bit $tmp2135 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2134);
            if ($tmp2135.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2137 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02136 = *$tmp2137;
                org$pandalanguage$pandac$ASTNode** $tmp2139 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 16));
                _f12138 = *$tmp2139;
                panda$collections$ImmutableArray** $tmp2141 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11998->$data + 24));
                _f22140 = *$tmp2141;
                org$pandalanguage$pandac$ASTNode** $tmp2143 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 32));
                _f32142 = *$tmp2143;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12138));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22140));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32142));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2144, 17);
            panda$core$Bit $tmp2145 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2144);
            if ($tmp2145.value) {
            {
                panda$collections$ImmutableArray** $tmp2147 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11998->$data + 0));
                _f02146 = *$tmp2147;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02146));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2148, 18);
            panda$core$Bit $tmp2149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2148);
            if ($tmp2149.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2151 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02150 = *$tmp2151;
                panda$core$String** $tmp2153 = ((panda$core$String**) ((char*) $match$5_11998->$data + 16));
                _f12152 = *$tmp2153;
                org$pandalanguage$pandac$ASTNode** $tmp2155 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 24));
                _f22154 = *$tmp2155;
                org$pandalanguage$pandac$ASTNode** $tmp2157 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 32));
                _f32156 = *$tmp2157;
                panda$collections$ImmutableArray** $tmp2159 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11998->$data + 40));
                _f42158 = *$tmp2159;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12152));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22154));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32156));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42158));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2160, 19);
            panda$core$Bit $tmp2161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2160);
            if ($tmp2161.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2163 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02162 = *$tmp2163;
                panda$core$String** $tmp2165 = ((panda$core$String**) ((char*) $match$5_11998->$data + 16));
                _f12164 = *$tmp2165;
                panda$collections$ImmutableArray** $tmp2167 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11998->$data + 24));
                _f22166 = *$tmp2167;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12164));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22166));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2168, 20);
            panda$core$Bit $tmp2169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2168);
            if ($tmp2169.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2171 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02170 = *$tmp2171;
                panda$core$String** $tmp2173 = ((panda$core$String**) ((char*) $match$5_11998->$data + 16));
                _f12172 = *$tmp2173;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12172));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2174, 21);
            panda$core$Bit $tmp2175 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2174);
            if ($tmp2175.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2177 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02176 = *$tmp2177;
                org$pandalanguage$pandac$ASTNode** $tmp2179 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 16));
                _f12178 = *$tmp2179;
                panda$collections$ImmutableArray** $tmp2181 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11998->$data + 24));
                _f22180 = *$tmp2181;
                org$pandalanguage$pandac$ASTNode** $tmp2183 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 32));
                _f32182 = *$tmp2183;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12178));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22180));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32182));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2184, 22);
            panda$core$Bit $tmp2185 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2184);
            if ($tmp2185.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2187 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02186 = *$tmp2187;
                panda$core$UInt64* $tmp2189 = ((panda$core$UInt64*) ((char*) $match$5_11998->$data + 16));
                _f12188 = *$tmp2189;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2190, 23);
            panda$core$Bit $tmp2191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2190);
            if ($tmp2191.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp2193 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11998->$data + 0));
                _f02192 = *$tmp2193;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f02192));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2194, 24);
            panda$core$Bit $tmp2195 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2194);
            if ($tmp2195.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2197 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02196 = *$tmp2197;
                panda$core$String** $tmp2199 = ((panda$core$String**) ((char*) $match$5_11998->$data + 16));
                _f12198 = *$tmp2199;
                panda$collections$ImmutableArray** $tmp2201 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11998->$data + 24));
                _f22200 = *$tmp2201;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12198));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22200));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2202, 25);
            panda$core$Bit $tmp2203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2202);
            if ($tmp2203.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2205 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02204 = *$tmp2205;
                org$pandalanguage$pandac$ASTNode** $tmp2207 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 16));
                _f12206 = *$tmp2207;
                panda$collections$ImmutableArray** $tmp2209 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11998->$data + 24));
                _f22208 = *$tmp2209;
                panda$collections$ImmutableArray** $tmp2211 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11998->$data + 32));
                _f32210 = *$tmp2211;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12206));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22208));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32210));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2212, 26);
            panda$core$Bit $tmp2213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2212);
            if ($tmp2213.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2215 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02214 = *$tmp2215;
                org$pandalanguage$pandac$ASTNode** $tmp2217 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 16));
                _f12216 = *$tmp2217;
                panda$collections$ImmutableArray** $tmp2219 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11998->$data + 24));
                _f22218 = *$tmp2219;
                org$pandalanguage$pandac$MethodDecl$Kind* $tmp2221 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$5_11998->$data + 32));
                _f32220 = *$tmp2221;
                panda$core$String** $tmp2223 = ((panda$core$String**) ((char*) $match$5_11998->$data + 40));
                _f42222 = *$tmp2223;
                panda$collections$ImmutableArray** $tmp2225 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11998->$data + 48));
                _f52224 = *$tmp2225;
                panda$collections$ImmutableArray** $tmp2227 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11998->$data + 56));
                _f62226 = *$tmp2227;
                org$pandalanguage$pandac$ASTNode** $tmp2229 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 64));
                _f72228 = *$tmp2229;
                panda$collections$ImmutableArray** $tmp2231 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11998->$data + 72));
                _f82230 = *$tmp2231;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12216));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22218));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42222));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f52224));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f62226));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f72228));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f82230));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2232, 27);
            panda$core$Bit $tmp2233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2232);
            if ($tmp2233.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2235 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02234 = *$tmp2235;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2237 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11998->$data + 16));
                _f12236 = *$tmp2237;
                panda$collections$ImmutableArray** $tmp2239 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11998->$data + 24));
                _f22238 = *$tmp2239;
                org$pandalanguage$pandac$ASTNode** $tmp2241 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 32));
                _f32240 = *$tmp2241;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22238));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32240));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2242, 28);
            panda$core$Bit $tmp2243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2242);
            if ($tmp2243.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2245 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02244 = *$tmp2245;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2246, 29);
            panda$core$Bit $tmp2247 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2246);
            if ($tmp2247.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2249 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02248 = *$tmp2249;
                org$pandalanguage$pandac$ASTNode** $tmp2251 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 16));
                _f12250 = *$tmp2251;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12250));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2252, 30);
            panda$core$Bit $tmp2253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2252);
            if ($tmp2253.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2255 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02254 = *$tmp2255;
                panda$core$String** $tmp2257 = ((panda$core$String**) ((char*) $match$5_11998->$data + 16));
                _f12256 = *$tmp2257;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12256));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2258, 31);
            panda$core$Bit $tmp2259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2258);
            if ($tmp2259.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2261 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02260 = *$tmp2261;
                panda$core$String** $tmp2263 = ((panda$core$String**) ((char*) $match$5_11998->$data + 16));
                _f12262 = *$tmp2263;
                org$pandalanguage$pandac$ASTNode** $tmp2265 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 24));
                _f22264 = *$tmp2265;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12262));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22264));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2266, 32);
            panda$core$Bit $tmp2267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2266);
            if ($tmp2267.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2269 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02268 = *$tmp2269;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp2271 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11998->$data + 16));
                _f12270 = *$tmp2271;
                org$pandalanguage$pandac$ASTNode** $tmp2273 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 24));
                _f22272 = *$tmp2273;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22272));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2274, 33);
            panda$core$Bit $tmp2275 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2274);
            if ($tmp2275.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2277 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02276 = *$tmp2277;
                org$pandalanguage$pandac$ASTNode** $tmp2279 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 16));
                _f12278 = *$tmp2279;
                org$pandalanguage$pandac$ASTNode** $tmp2281 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 24));
                _f22280 = *$tmp2281;
                panda$core$Bit* $tmp2283 = ((panda$core$Bit*) ((char*) $match$5_11998->$data + 32));
                _f32282 = *$tmp2283;
                org$pandalanguage$pandac$ASTNode** $tmp2285 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 33));
                _f42284 = *$tmp2285;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12278));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22280));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f42284));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2286, 34);
            panda$core$Bit $tmp2287 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2286);
            if ($tmp2287.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2289 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02288 = *$tmp2289;
                panda$core$Real64* $tmp2291 = ((panda$core$Real64*) ((char*) $match$5_11998->$data + 16));
                _f12290 = *$tmp2291;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2292, 35);
            panda$core$Bit $tmp2293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2292);
            if ($tmp2293.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2295 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02294 = *$tmp2295;
                panda$core$String** $tmp2297 = ((panda$core$String**) ((char*) $match$5_11998->$data + 16));
                _f12296 = *$tmp2297;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12296));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2298, 36);
            panda$core$Bit $tmp2299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2298);
            if ($tmp2299.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2301 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02300 = *$tmp2301;
                org$pandalanguage$pandac$ASTNode** $tmp2303 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 16));
                _f12302 = *$tmp2303;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12302));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2304, 37);
            panda$core$Bit $tmp2305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2304);
            if ($tmp2305.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2307 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02306 = *$tmp2307;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2308, 38);
            panda$core$Bit $tmp2309 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2308);
            if ($tmp2309.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2311 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02310 = *$tmp2311;
                panda$core$String** $tmp2313 = ((panda$core$String**) ((char*) $match$5_11998->$data + 16));
                _f12312 = *$tmp2313;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12312));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2314, 39);
            panda$core$Bit $tmp2315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2314);
            if ($tmp2315.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2317 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02316 = *$tmp2317;
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2318, 40);
            panda$core$Bit $tmp2319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2318);
            if ($tmp2319.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2321 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02320 = *$tmp2321;
                panda$collections$ImmutableArray** $tmp2323 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11998->$data + 16));
                _f12322 = *$tmp2323;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12322));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2324, 41);
            panda$core$Bit $tmp2325 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2324);
            if ($tmp2325.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2327 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02326 = *$tmp2327;
                panda$collections$ImmutableArray** $tmp2329 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11998->$data + 16));
                _f12328 = *$tmp2329;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12328));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2330, 42);
            panda$core$Bit $tmp2331 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2330);
            if ($tmp2331.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2333 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02332 = *$tmp2333;
                panda$core$String** $tmp2335 = ((panda$core$String**) ((char*) $match$5_11998->$data + 16));
                _f12334 = *$tmp2335;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12334));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2336, 43);
            panda$core$Bit $tmp2337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2336);
            if ($tmp2337.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2339 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02338 = *$tmp2339;
                panda$collections$ImmutableArray** $tmp2341 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11998->$data + 16));
                _f12340 = *$tmp2341;
                org$pandalanguage$pandac$ASTNode** $tmp2343 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 24));
                _f22342 = *$tmp2343;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12340));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22342));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2344, 44);
            panda$core$Bit $tmp2345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2344);
            if ($tmp2345.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2347 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02346 = *$tmp2347;
                panda$core$String** $tmp2349 = ((panda$core$String**) ((char*) $match$5_11998->$data + 16));
                _f12348 = *$tmp2349;
                org$pandalanguage$pandac$ASTNode** $tmp2351 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 24));
                _f22350 = *$tmp2351;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12348));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22350));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2352, 45);
            panda$core$Bit $tmp2353 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2352);
            if ($tmp2353.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2355 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02354 = *$tmp2355;
                panda$collections$ImmutableArray** $tmp2357 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11998->$data + 16));
                _f12356 = *$tmp2357;
                org$pandalanguage$pandac$ASTNode** $tmp2359 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 24));
                _f22358 = *$tmp2359;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12356));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22358));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2360, 46);
            panda$core$Bit $tmp2361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2360);
            if ($tmp2361.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2363 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02362 = *$tmp2363;
                panda$core$String** $tmp2365 = ((panda$core$String**) ((char*) $match$5_11998->$data + 16));
                _f12364 = *$tmp2365;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12364));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2366, 47);
            panda$core$Bit $tmp2367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2366);
            if ($tmp2367.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2369 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02368 = *$tmp2369;
                org$pandalanguage$pandac$Variable$Kind* $tmp2371 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_11998->$data + 16));
                _f12370 = *$tmp2371;
                panda$collections$ImmutableArray** $tmp2373 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11998->$data + 24));
                _f22372 = *$tmp2373;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22372));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2374, 48);
            panda$core$Bit $tmp2375 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2374);
            if ($tmp2375.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2377 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02376 = *$tmp2377;
                panda$collections$ImmutableArray** $tmp2379 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11998->$data + 16));
                _f12378 = *$tmp2379;
                panda$collections$ImmutableArray** $tmp2381 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11998->$data + 24));
                _f22380 = *$tmp2381;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12378));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22380));
            }
            }
            else {
            panda$core$Int64$init$builtin_int64(&$tmp2382, 49);
            panda$core$Bit $tmp2383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11998->$rawValue, $tmp2382);
            if ($tmp2383.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2385 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11998->$data + 0));
                _f02384 = *$tmp2385;
                panda$core$String** $tmp2387 = ((panda$core$String**) ((char*) $match$5_11998->$data + 16));
                _f12386 = *$tmp2387;
                org$pandalanguage$pandac$ASTNode** $tmp2389 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11998->$data + 24));
                _f22388 = *$tmp2389;
                panda$collections$ImmutableArray** $tmp2391 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11998->$data + 32));
                _f32390 = *$tmp2391;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12386));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22388));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32390));
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
        }
        $tmp1997 = -1;
        goto $l1995;
        $l1995:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1999));
        switch ($tmp1997) {
            case -1: goto $l2392;
        }
        $l2392:;
    }
    $tmp1994 = -1;
    goto $l1992;
    $l1992:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp1994) {
        case -1: goto $l2393;
    }
    $l2393:;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$core$String* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    panda$core$String* $tmp2395;
    panda$core$String* $tmp2398;
    panda$core$String* $tmp2399;
    panda$core$String* $tmp2402;
    org$pandalanguage$pandac$ASTNode* $tmp2403;
    org$pandalanguage$pandac$ASTNode* $tmp2406;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2394 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2394 = p_f0;
    {
        panda$core$String** $tmp2396 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2395 = *$tmp2396;
        panda$core$String** $tmp2397 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2398 = p_f1;
        *$tmp2397 = $tmp2398;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2398));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2395));
    }
    {
        panda$core$String** $tmp2400 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2399 = *$tmp2400;
        panda$core$String** $tmp2401 = ((panda$core$String**) ((char*) self->$data + 24));
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
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2408;
    org$pandalanguage$pandac$ASTNode* $tmp2411;
    org$pandalanguage$pandac$ASTNode* $tmp2412;
    org$pandalanguage$pandac$ASTNode* $tmp2415;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2407 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2407 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2409 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2408 = *$tmp2409;
        org$pandalanguage$pandac$ASTNode** $tmp2410 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2411 = p_f1;
        *$tmp2410 = $tmp2411;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2411));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2408));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2413 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2412 = *$tmp2413;
        org$pandalanguage$pandac$ASTNode** $tmp2414 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2415 = p_f2;
        *$tmp2414 = $tmp2415;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2415));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2412));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    org$pandalanguage$pandac$ASTNode* $tmp2417;
    org$pandalanguage$pandac$ASTNode* $tmp2420;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2416 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2416 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2418 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2417 = *$tmp2418;
        org$pandalanguage$pandac$ASTNode** $tmp2419 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2420 = p_f1;
        *$tmp2419 = $tmp2420;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2420));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2417));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2421 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2421 = p_f0;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$parser$Token$Kind p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2423;
    org$pandalanguage$pandac$ASTNode* $tmp2426;
    org$pandalanguage$pandac$ASTNode* $tmp2428;
    org$pandalanguage$pandac$ASTNode* $tmp2431;
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
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2427 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 24));
    *$tmp2427 = p_f2;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2429 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2428 = *$tmp2429;
        org$pandalanguage$pandac$ASTNode** $tmp2430 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2431 = p_f3;
        *$tmp2430 = $tmp2431;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2431));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2428));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Bit p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2432 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2432 = p_f0;
    panda$core$Bit* $tmp2433 = ((panda$core$Bit*) ((char*) self->$data + 16));
    *$tmp2433 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    panda$collections$ImmutableArray* $tmp2435;
    panda$collections$ImmutableArray* $tmp2438;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2434 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2434 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2436 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2435 = *$tmp2436;
        panda$collections$ImmutableArray** $tmp2437 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2438 = p_f1;
        *$tmp2437 = $tmp2438;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2438));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2435));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp2440;
    panda$core$String* $tmp2443;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2439 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2439 = p_f0;
    {
        panda$core$String** $tmp2441 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2440 = *$tmp2441;
        panda$core$String** $tmp2442 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2443 = p_f1;
        *$tmp2442 = $tmp2443;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2443));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2440));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2445;
    org$pandalanguage$pandac$ASTNode* $tmp2448;
    panda$collections$ImmutableArray* $tmp2449;
    panda$collections$ImmutableArray* $tmp2452;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2444 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2444 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2446 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2445 = *$tmp2446;
        org$pandalanguage$pandac$ASTNode** $tmp2447 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2448 = p_f1;
        *$tmp2447 = $tmp2448;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2448));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2445));
    }
    {
        panda$collections$ImmutableArray** $tmp2450 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2449 = *$tmp2450;
        panda$collections$ImmutableArray** $tmp2451 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2452 = p_f2;
        *$tmp2451 = $tmp2452;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2452));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2449));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2454;
    org$pandalanguage$pandac$ASTNode* $tmp2457;
    panda$core$String* $tmp2458;
    panda$core$String* $tmp2461;
    panda$collections$ImmutableArray* $tmp2462;
    panda$collections$ImmutableArray* $tmp2465;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2453 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2453 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2455 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2454 = *$tmp2455;
        org$pandalanguage$pandac$ASTNode** $tmp2456 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2457 = p_f1;
        *$tmp2456 = $tmp2457;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2457));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2454));
    }
    {
        panda$core$String** $tmp2459 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2458 = *$tmp2459;
        panda$core$String** $tmp2460 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2461 = p_f2;
        *$tmp2460 = $tmp2461;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2461));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2458));
    }
    {
        panda$collections$ImmutableArray** $tmp2463 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2462 = *$tmp2463;
        panda$collections$ImmutableArray** $tmp2464 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2465 = p_f3;
        *$tmp2464 = $tmp2465;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2465));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2462));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ChoiceCase* p_f2, panda$core$Int64 p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2467;
    org$pandalanguage$pandac$ASTNode* $tmp2470;
    org$pandalanguage$pandac$ChoiceCase* $tmp2471;
    org$pandalanguage$pandac$ChoiceCase* $tmp2474;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2466 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2466 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2468 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2467 = *$tmp2468;
        org$pandalanguage$pandac$ASTNode** $tmp2469 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2470 = p_f1;
        *$tmp2469 = $tmp2470;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2470));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2467));
    }
    {
        org$pandalanguage$pandac$ChoiceCase** $tmp2472 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) self->$data + 24));
        $tmp2471 = *$tmp2472;
        org$pandalanguage$pandac$ChoiceCase** $tmp2473 = ((org$pandalanguage$pandac$ChoiceCase**) ((char*) self->$data + 24));
        $tmp2474 = p_f2;
        *$tmp2473 = $tmp2474;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2474));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2471));
    }
    panda$core$Int64* $tmp2475 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp2475 = p_f3;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ClassDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, panda$collections$ImmutableArray* p_f6, panda$collections$ImmutableArray* p_f7) {
    org$pandalanguage$pandac$ASTNode* $tmp2477;
    org$pandalanguage$pandac$ASTNode* $tmp2480;
    panda$collections$ImmutableArray* $tmp2481;
    panda$collections$ImmutableArray* $tmp2484;
    panda$core$String* $tmp2486;
    panda$core$String* $tmp2489;
    panda$collections$ImmutableArray* $tmp2490;
    panda$collections$ImmutableArray* $tmp2493;
    panda$collections$ImmutableArray* $tmp2494;
    panda$collections$ImmutableArray* $tmp2497;
    panda$collections$ImmutableArray* $tmp2498;
    panda$collections$ImmutableArray* $tmp2501;
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
        panda$collections$ImmutableArray** $tmp2482 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2481 = *$tmp2482;
        panda$collections$ImmutableArray** $tmp2483 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2484 = p_f2;
        *$tmp2483 = $tmp2484;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2484));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2481));
    }
    org$pandalanguage$pandac$ClassDecl$Kind* $tmp2485 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) self->$data + 32));
    *$tmp2485 = p_f3;
    {
        panda$core$String** $tmp2487 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2486 = *$tmp2487;
        panda$core$String** $tmp2488 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2489 = p_f4;
        *$tmp2488 = $tmp2489;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2489));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2486));
    }
    {
        panda$collections$ImmutableArray** $tmp2491 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2490 = *$tmp2491;
        panda$collections$ImmutableArray** $tmp2492 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2493 = p_f5;
        *$tmp2492 = $tmp2493;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2493));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2490));
    }
    {
        panda$collections$ImmutableArray** $tmp2495 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2494 = *$tmp2495;
        panda$collections$ImmutableArray** $tmp2496 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2497 = p_f6;
        *$tmp2496 = $tmp2497;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2497));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2494));
    }
    {
        panda$collections$ImmutableArray** $tmp2499 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2498 = *$tmp2499;
        panda$collections$ImmutableArray** $tmp2500 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2501 = p_f7;
        *$tmp2500 = $tmp2501;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2501));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2498));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    panda$core$String* $tmp2503;
    panda$core$String* $tmp2506;
    panda$collections$ImmutableArray* $tmp2507;
    panda$collections$ImmutableArray* $tmp2510;
    org$pandalanguage$pandac$ASTNode* $tmp2511;
    org$pandalanguage$pandac$ASTNode* $tmp2514;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2502 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2502 = p_f0;
    {
        panda$core$String** $tmp2504 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2503 = *$tmp2504;
        panda$core$String** $tmp2505 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2506 = p_f1;
        *$tmp2505 = $tmp2506;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2506));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2503));
    }
    {
        panda$collections$ImmutableArray** $tmp2508 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2507 = *$tmp2508;
        panda$collections$ImmutableArray** $tmp2509 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2510 = p_f2;
        *$tmp2509 = $tmp2510;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2510));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2507));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2512 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2511 = *$tmp2512;
        org$pandalanguage$pandac$ASTNode** $tmp2513 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2514 = p_f3;
        *$tmp2513 = $tmp2514;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2514));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2511));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2516;
    org$pandalanguage$pandac$ASTNode* $tmp2519;
    panda$core$String* $tmp2520;
    panda$core$String* $tmp2523;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2515 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2515 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2517 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2516 = *$tmp2517;
        org$pandalanguage$pandac$ASTNode** $tmp2518 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2519 = p_f1;
        *$tmp2518 = $tmp2519;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2519));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2516));
    }
    {
        panda$core$String** $tmp2521 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2520 = *$tmp2521;
        panda$core$String** $tmp2522 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2523 = p_f2;
        *$tmp2522 = $tmp2523;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2523));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2520));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2525;
    org$pandalanguage$pandac$ASTNode* $tmp2528;
    panda$collections$ImmutableArray* $tmp2529;
    panda$collections$ImmutableArray* $tmp2532;
    org$pandalanguage$pandac$ASTNode* $tmp2533;
    org$pandalanguage$pandac$ASTNode* $tmp2536;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2524 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2524 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2526 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2525 = *$tmp2526;
        org$pandalanguage$pandac$ASTNode** $tmp2527 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2528 = p_f1;
        *$tmp2527 = $tmp2528;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2528));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2525));
    }
    {
        panda$collections$ImmutableArray** $tmp2530 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2529 = *$tmp2530;
        panda$collections$ImmutableArray** $tmp2531 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2532 = p_f2;
        *$tmp2531 = $tmp2532;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2532));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2529));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2534 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2533 = *$tmp2534;
        org$pandalanguage$pandac$ASTNode** $tmp2535 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2536 = p_f3;
        *$tmp2535 = $tmp2536;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2536));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2533));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, panda$collections$ImmutableArray* p_f0) {
    panda$collections$ImmutableArray* $tmp2537;
    panda$collections$ImmutableArray* $tmp2540;
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableArray** $tmp2538 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp2537 = *$tmp2538;
        panda$collections$ImmutableArray** $tmp2539 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp2540 = p_f0;
        *$tmp2539 = $tmp2540;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2540));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2537));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, org$pandalanguage$pandac$ASTNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    panda$core$String* $tmp2542;
    panda$core$String* $tmp2545;
    org$pandalanguage$pandac$ASTNode* $tmp2546;
    org$pandalanguage$pandac$ASTNode* $tmp2549;
    org$pandalanguage$pandac$ASTNode* $tmp2550;
    org$pandalanguage$pandac$ASTNode* $tmp2553;
    panda$collections$ImmutableArray* $tmp2554;
    panda$collections$ImmutableArray* $tmp2557;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2541 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2541 = p_f0;
    {
        panda$core$String** $tmp2543 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2542 = *$tmp2543;
        panda$core$String** $tmp2544 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2545 = p_f1;
        *$tmp2544 = $tmp2545;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2545));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2542));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2547 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2546 = *$tmp2547;
        org$pandalanguage$pandac$ASTNode** $tmp2548 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2549 = p_f2;
        *$tmp2548 = $tmp2549;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2549));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2546));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2551 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2550 = *$tmp2551;
        org$pandalanguage$pandac$ASTNode** $tmp2552 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2553 = p_f3;
        *$tmp2552 = $tmp2553;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2553));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2550));
    }
    {
        panda$collections$ImmutableArray** $tmp2555 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp2554 = *$tmp2555;
        panda$collections$ImmutableArray** $tmp2556 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp2557 = p_f4;
        *$tmp2556 = $tmp2557;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2557));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2554));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp2559;
    panda$core$String* $tmp2562;
    panda$collections$ImmutableArray* $tmp2563;
    panda$collections$ImmutableArray* $tmp2566;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2558 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2558 = p_f0;
    {
        panda$core$String** $tmp2560 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2559 = *$tmp2560;
        panda$core$String** $tmp2561 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2562 = p_f1;
        *$tmp2561 = $tmp2562;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2562));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2559));
    }
    {
        panda$collections$ImmutableArray** $tmp2564 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2563 = *$tmp2564;
        panda$collections$ImmutableArray** $tmp2565 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2566 = p_f2;
        *$tmp2565 = $tmp2566;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2566));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2563));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp2568;
    panda$core$String* $tmp2571;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2567 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2567 = p_f0;
    {
        panda$core$String** $tmp2569 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2568 = *$tmp2569;
        panda$core$String** $tmp2570 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2571 = p_f1;
        *$tmp2570 = $tmp2571;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2571));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2568));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2573;
    org$pandalanguage$pandac$ASTNode* $tmp2576;
    panda$collections$ImmutableArray* $tmp2577;
    panda$collections$ImmutableArray* $tmp2580;
    org$pandalanguage$pandac$ASTNode* $tmp2581;
    org$pandalanguage$pandac$ASTNode* $tmp2584;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2572 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2572 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2574 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2573 = *$tmp2574;
        org$pandalanguage$pandac$ASTNode** $tmp2575 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2576 = p_f1;
        *$tmp2575 = $tmp2576;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2576));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2573));
    }
    {
        panda$collections$ImmutableArray** $tmp2578 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2577 = *$tmp2578;
        panda$collections$ImmutableArray** $tmp2579 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2580 = p_f2;
        *$tmp2579 = $tmp2580;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2580));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2577));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2582 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2581 = *$tmp2582;
        org$pandalanguage$pandac$ASTNode** $tmp2583 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2584 = p_f3;
        *$tmp2583 = $tmp2584;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2584));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2581));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$UInt64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2585 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2585 = p_f0;
    panda$core$UInt64* $tmp2586 = ((panda$core$UInt64*) ((char*) self->$data + 16));
    *$tmp2586 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0) {
    org$pandalanguage$pandac$IRNode* $tmp2587;
    org$pandalanguage$pandac$IRNode* $tmp2590;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp2588 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp2587 = *$tmp2588;
        org$pandalanguage$pandac$IRNode** $tmp2589 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp2590 = p_f0;
        *$tmp2589 = $tmp2590;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2590));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2587));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp2592;
    panda$core$String* $tmp2595;
    panda$collections$ImmutableArray* $tmp2596;
    panda$collections$ImmutableArray* $tmp2599;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2591 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2591 = p_f0;
    {
        panda$core$String** $tmp2593 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2592 = *$tmp2593;
        panda$core$String** $tmp2594 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2595 = p_f1;
        *$tmp2594 = $tmp2595;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2595));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2592));
    }
    {
        panda$collections$ImmutableArray** $tmp2597 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2596 = *$tmp2597;
        panda$collections$ImmutableArray** $tmp2598 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2599 = p_f2;
        *$tmp2598 = $tmp2599;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2599));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2596));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2601;
    org$pandalanguage$pandac$ASTNode* $tmp2604;
    panda$collections$ImmutableArray* $tmp2605;
    panda$collections$ImmutableArray* $tmp2608;
    panda$collections$ImmutableArray* $tmp2609;
    panda$collections$ImmutableArray* $tmp2612;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2600 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2600 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2602 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2601 = *$tmp2602;
        org$pandalanguage$pandac$ASTNode** $tmp2603 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2604 = p_f1;
        *$tmp2603 = $tmp2604;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2604));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2601));
    }
    {
        panda$collections$ImmutableArray** $tmp2606 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2605 = *$tmp2606;
        panda$collections$ImmutableArray** $tmp2607 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2608 = p_f2;
        *$tmp2607 = $tmp2608;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2608));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2605));
    }
    {
        panda$collections$ImmutableArray** $tmp2610 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2609 = *$tmp2610;
        panda$collections$ImmutableArray** $tmp2611 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2612 = p_f3;
        *$tmp2611 = $tmp2612;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2612));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2609));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$MethodDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, panda$collections$ImmutableArray* p_f6, org$pandalanguage$pandac$ASTNode* p_f7, panda$collections$ImmutableArray* p_f8) {
    org$pandalanguage$pandac$ASTNode* $tmp2614;
    org$pandalanguage$pandac$ASTNode* $tmp2617;
    panda$collections$ImmutableArray* $tmp2618;
    panda$collections$ImmutableArray* $tmp2621;
    panda$core$String* $tmp2623;
    panda$core$String* $tmp2626;
    panda$collections$ImmutableArray* $tmp2627;
    panda$collections$ImmutableArray* $tmp2630;
    panda$collections$ImmutableArray* $tmp2631;
    panda$collections$ImmutableArray* $tmp2634;
    org$pandalanguage$pandac$ASTNode* $tmp2635;
    org$pandalanguage$pandac$ASTNode* $tmp2638;
    panda$collections$ImmutableArray* $tmp2639;
    panda$collections$ImmutableArray* $tmp2642;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2613 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2613 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2615 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2614 = *$tmp2615;
        org$pandalanguage$pandac$ASTNode** $tmp2616 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2617 = p_f1;
        *$tmp2616 = $tmp2617;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2617));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2614));
    }
    {
        panda$collections$ImmutableArray** $tmp2619 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2618 = *$tmp2619;
        panda$collections$ImmutableArray** $tmp2620 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2621 = p_f2;
        *$tmp2620 = $tmp2621;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2621));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2618));
    }
    org$pandalanguage$pandac$MethodDecl$Kind* $tmp2622 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) self->$data + 32));
    *$tmp2622 = p_f3;
    {
        panda$core$String** $tmp2624 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2623 = *$tmp2624;
        panda$core$String** $tmp2625 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2626 = p_f4;
        *$tmp2625 = $tmp2626;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2626));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2623));
    }
    {
        panda$collections$ImmutableArray** $tmp2628 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2627 = *$tmp2628;
        panda$collections$ImmutableArray** $tmp2629 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2630 = p_f5;
        *$tmp2629 = $tmp2630;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2630));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2627));
    }
    {
        panda$collections$ImmutableArray** $tmp2632 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2631 = *$tmp2632;
        panda$collections$ImmutableArray** $tmp2633 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2634 = p_f6;
        *$tmp2633 = $tmp2634;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2634));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2631));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2636 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 64));
        $tmp2635 = *$tmp2636;
        org$pandalanguage$pandac$ASTNode** $tmp2637 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 64));
        $tmp2638 = p_f7;
        *$tmp2637 = $tmp2638;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2638));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2635));
    }
    {
        panda$collections$ImmutableArray** $tmp2640 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 72));
        $tmp2639 = *$tmp2640;
        panda$collections$ImmutableArray** $tmp2641 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 72));
        $tmp2642 = p_f8;
        *$tmp2641 = $tmp2642;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2642));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2639));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    panda$collections$ImmutableArray* $tmp2645;
    panda$collections$ImmutableArray* $tmp2648;
    org$pandalanguage$pandac$ASTNode* $tmp2649;
    org$pandalanguage$pandac$ASTNode* $tmp2652;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2643 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2643 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2644 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp2644 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp2646 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2645 = *$tmp2646;
        panda$collections$ImmutableArray** $tmp2647 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2648 = p_f2;
        *$tmp2647 = $tmp2648;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2648));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2645));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2650 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2649 = *$tmp2650;
        org$pandalanguage$pandac$ASTNode** $tmp2651 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2652 = p_f3;
        *$tmp2651 = $tmp2652;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2652));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2649));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$core$String* $tmp2654;
    panda$core$String* $tmp2657;
    org$pandalanguage$pandac$ASTNode* $tmp2658;
    org$pandalanguage$pandac$ASTNode* $tmp2661;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2653 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2653 = p_f0;
    {
        panda$core$String** $tmp2655 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2654 = *$tmp2655;
        panda$core$String** $tmp2656 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2657 = p_f1;
        *$tmp2656 = $tmp2657;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2657));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2654));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2659 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2658 = *$tmp2659;
        org$pandalanguage$pandac$ASTNode** $tmp2660 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2661 = p_f2;
        *$tmp2660 = $tmp2661;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2661));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2658));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2664;
    org$pandalanguage$pandac$ASTNode* $tmp2667;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2662 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2662 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2663 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp2663 = p_f1;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2665 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2664 = *$tmp2665;
        org$pandalanguage$pandac$ASTNode** $tmp2666 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2667 = p_f2;
        *$tmp2666 = $tmp2667;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2667));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2664));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$ASTNode* p_f4) {
    org$pandalanguage$pandac$ASTNode* $tmp2669;
    org$pandalanguage$pandac$ASTNode* $tmp2672;
    org$pandalanguage$pandac$ASTNode* $tmp2673;
    org$pandalanguage$pandac$ASTNode* $tmp2676;
    org$pandalanguage$pandac$ASTNode* $tmp2678;
    org$pandalanguage$pandac$ASTNode* $tmp2681;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2668 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2668 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2670 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2669 = *$tmp2670;
        org$pandalanguage$pandac$ASTNode** $tmp2671 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2672 = p_f1;
        *$tmp2671 = $tmp2672;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2672));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2669));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2674 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2673 = *$tmp2674;
        org$pandalanguage$pandac$ASTNode** $tmp2675 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2676 = p_f2;
        *$tmp2675 = $tmp2676;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2676));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2673));
    }
    panda$core$Bit* $tmp2677 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp2677 = p_f3;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2679 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        $tmp2678 = *$tmp2679;
        org$pandalanguage$pandac$ASTNode** $tmp2680 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        $tmp2681 = p_f4;
        *$tmp2680 = $tmp2681;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2681));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2678));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Real64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2682 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2682 = p_f0;
    panda$core$Real64* $tmp2683 = ((panda$core$Real64*) ((char*) self->$data + 16));
    *$tmp2683 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    org$pandalanguage$pandac$ASTNode* $tmp2685;
    org$pandalanguage$pandac$ASTNode* $tmp2688;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2684 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2684 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2686 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2685 = *$tmp2686;
        org$pandalanguage$pandac$ASTNode** $tmp2687 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2688 = p_f1;
        *$tmp2687 = $tmp2688;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2688));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2685));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$collections$ImmutableArray* $tmp2690;
    panda$collections$ImmutableArray* $tmp2693;
    org$pandalanguage$pandac$ASTNode* $tmp2694;
    org$pandalanguage$pandac$ASTNode* $tmp2697;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2689 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2689 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2691 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2690 = *$tmp2691;
        panda$collections$ImmutableArray** $tmp2692 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2693 = p_f1;
        *$tmp2692 = $tmp2693;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2693));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2690));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2695 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2694 = *$tmp2695;
        org$pandalanguage$pandac$ASTNode** $tmp2696 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2697 = p_f2;
        *$tmp2696 = $tmp2697;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2697));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2694));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$core$String* $tmp2699;
    panda$core$String* $tmp2702;
    org$pandalanguage$pandac$ASTNode* $tmp2703;
    org$pandalanguage$pandac$ASTNode* $tmp2706;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2698 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2698 = p_f0;
    {
        panda$core$String** $tmp2700 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2699 = *$tmp2700;
        panda$core$String** $tmp2701 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2702 = p_f1;
        *$tmp2701 = $tmp2702;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2702));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2699));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2704 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2703 = *$tmp2704;
        org$pandalanguage$pandac$ASTNode** $tmp2705 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2706 = p_f2;
        *$tmp2705 = $tmp2706;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2706));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2703));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp2709;
    panda$collections$ImmutableArray* $tmp2712;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2707 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2707 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp2708 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp2708 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp2710 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2709 = *$tmp2710;
        panda$collections$ImmutableArray** $tmp2711 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2712 = p_f2;
        *$tmp2711 = $tmp2712;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2712));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2709));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp2714;
    panda$collections$ImmutableArray* $tmp2717;
    panda$collections$ImmutableArray* $tmp2718;
    panda$collections$ImmutableArray* $tmp2721;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2713 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2713 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2715 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2714 = *$tmp2715;
        panda$collections$ImmutableArray** $tmp2716 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2717 = p_f1;
        *$tmp2716 = $tmp2717;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2717));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2714));
    }
    {
        panda$collections$ImmutableArray** $tmp2719 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2718 = *$tmp2719;
        panda$collections$ImmutableArray** $tmp2720 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2721 = p_f2;
        *$tmp2720 = $tmp2721;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2721));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2718));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    panda$core$String* $tmp2723;
    panda$core$String* $tmp2726;
    org$pandalanguage$pandac$ASTNode* $tmp2727;
    org$pandalanguage$pandac$ASTNode* $tmp2730;
    panda$collections$ImmutableArray* $tmp2731;
    panda$collections$ImmutableArray* $tmp2734;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2722 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2722 = p_f0;
    {
        panda$core$String** $tmp2724 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2723 = *$tmp2724;
        panda$core$String** $tmp2725 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2726 = p_f1;
        *$tmp2725 = $tmp2726;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2726));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2723));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2728 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2727 = *$tmp2728;
        org$pandalanguage$pandac$ASTNode** $tmp2729 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2730 = p_f2;
        *$tmp2729 = $tmp2730;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2730));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2727));
    }
    {
        panda$collections$ImmutableArray** $tmp2732 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2731 = *$tmp2732;
        panda$collections$ImmutableArray** $tmp2733 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2734 = p_f3;
        *$tmp2733 = $tmp2734;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2734));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2731));
    }
}





