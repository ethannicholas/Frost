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
typedef panda$core$String* (*$fn326)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn367)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn374)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn385)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn426)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn433)(panda$collections$ListView*);
typedef panda$core$String* (*$fn467)(panda$collections$ListView*);
typedef panda$core$String* (*$fn493)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn540)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn547)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn558)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn578)(panda$collections$ListView*);
typedef panda$core$String* (*$fn589)(panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn603)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn610)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn621)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn662)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn673)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn705)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn712)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn723)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn753)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn787)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn794)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn805)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn837)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn844)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn855)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn907)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn914)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn925)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn956)(panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn997)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1004)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1015)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1049)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1079)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1086)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1097)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1140)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1147)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1158)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1209)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1216)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1227)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1250)(panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn1270)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1277)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1288)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1341)(panda$collections$ListView*);
typedef panda$core$String* (*$fn1423)(panda$core$Object*);
typedef panda$core$String* (*$fn1557)(panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn1590)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1597)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1608)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1631)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1638)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1649)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1696)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1703)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1714)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 32, -9211815390615587804, NULL };
static panda$core$String $s257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s260 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s277 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s286 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s288 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x28", 5, 17286533032, NULL };
static panda$core$String $s303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s309 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s328 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s336 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s388 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s408 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s413 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s462 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s470 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s498 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s530 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s561 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s567 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s569 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static panda$core$String $s571 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static panda$core$String $s574 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s581 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s592 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s594 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s624 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s644 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s649 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s664 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s667 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s694 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s696 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s726 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s732 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 24242135792659305, NULL };
static panda$core$String $s734 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s755 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s758 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s777 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s808 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s858 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s886 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s892 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s894 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s897 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s928 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s951 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s959 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s985 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s987 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1018 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1025 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s1027 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1068 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1070 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s1100 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1128 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s1130 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1166 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1199 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s1238 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s1245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1253 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1257 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1259 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1261 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1318 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static panda$core$String $s1322 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static panda$core$String $s1326 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static panda$core$String $s1330 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static panda$core$String $s1337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1344 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1347 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x29", 2, 14282, NULL };
static panda$core$String $s1375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s1383 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s1404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1407 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1425 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1428 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1448 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s1449 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s1451 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s1474 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s1476 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s1486 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s1497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s1517 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1520 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1547 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s1549 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s1551 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1553 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s1578 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s1581 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1615 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1652 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1680 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1684 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s1686 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1717 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

org$pandalanguage$pandac$Position org$pandalanguage$pandac$ASTNode$position$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$81_95 = NULL;
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
    int $tmp4;
    {
        $tmp6 = self;
        $match$81_95 = $tmp6;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp6));
        panda$core$Bit $tmp7 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp7.value) {
        {
            org$pandalanguage$pandac$Position* $tmp9 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position8 = *$tmp9;
            $returnValue10 = position8;
            $tmp4 = 0;
            goto $l2;
            $l11:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp13 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp13.value) {
        {
            org$pandalanguage$pandac$Position* $tmp15 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position14 = *$tmp15;
            $returnValue10 = position14;
            $tmp4 = 1;
            goto $l2;
            $l16:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp18 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp18.value) {
        {
            org$pandalanguage$pandac$Position* $tmp20 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position19 = *$tmp20;
            $returnValue10 = position19;
            $tmp4 = 2;
            goto $l2;
            $l21:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp23 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp23.value) {
        {
            org$pandalanguage$pandac$Position* $tmp25 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position24 = *$tmp25;
            $returnValue10 = position24;
            $tmp4 = 3;
            goto $l2;
            $l26:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp28 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp28.value) {
        {
            org$pandalanguage$pandac$Position* $tmp30 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position29 = *$tmp30;
            $returnValue10 = position29;
            $tmp4 = 4;
            goto $l2;
            $l31:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp33 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp33.value) {
        {
            org$pandalanguage$pandac$Position* $tmp35 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position34 = *$tmp35;
            $returnValue10 = position34;
            $tmp4 = 5;
            goto $l2;
            $l36:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp38 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp38.value) {
        {
            org$pandalanguage$pandac$Position* $tmp40 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position39 = *$tmp40;
            $returnValue10 = position39;
            $tmp4 = 6;
            goto $l2;
            $l41:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp43 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp43.value) {
        {
            org$pandalanguage$pandac$Position* $tmp45 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position44 = *$tmp45;
            $returnValue10 = position44;
            $tmp4 = 7;
            goto $l2;
            $l46:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp48 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp48.value) {
        {
            org$pandalanguage$pandac$Position* $tmp50 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position49 = *$tmp50;
            $returnValue10 = position49;
            $tmp4 = 8;
            goto $l2;
            $l51:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp53 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp53.value) {
        {
            org$pandalanguage$pandac$Position* $tmp55 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position54 = *$tmp55;
            $returnValue10 = position54;
            $tmp4 = 9;
            goto $l2;
            $l56:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp58 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp58.value) {
        {
            org$pandalanguage$pandac$Position* $tmp60 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position59 = *$tmp60;
            $returnValue10 = position59;
            $tmp4 = 10;
            goto $l2;
            $l61:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp63 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp63.value) {
        {
            org$pandalanguage$pandac$Position* $tmp65 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position64 = *$tmp65;
            $returnValue10 = position64;
            $tmp4 = 11;
            goto $l2;
            $l66:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp68 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp68.value) {
        {
            org$pandalanguage$pandac$Position* $tmp70 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position69 = *$tmp70;
            $returnValue10 = position69;
            $tmp4 = 12;
            goto $l2;
            $l71:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp73 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp73.value) {
        {
            org$pandalanguage$pandac$Position* $tmp75 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position74 = *$tmp75;
            $returnValue10 = position74;
            $tmp4 = 13;
            goto $l2;
            $l76:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp78 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp78.value) {
        {
            org$pandalanguage$pandac$Position* $tmp80 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position79 = *$tmp80;
            $returnValue10 = position79;
            $tmp4 = 14;
            goto $l2;
            $l81:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp83 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp83.value) {
        {
            org$pandalanguage$pandac$Position* $tmp85 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position84 = *$tmp85;
            $returnValue10 = position84;
            $tmp4 = 15;
            goto $l2;
            $l86:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp88 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp88.value) {
        {
            org$pandalanguage$pandac$Position* $tmp90 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position89 = *$tmp90;
            $returnValue10 = position89;
            $tmp4 = 16;
            goto $l2;
            $l91:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp93 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 17 }));
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
        panda$core$Bit $tmp97 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp97.value) {
        {
            org$pandalanguage$pandac$Position* $tmp99 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position98 = *$tmp99;
            $returnValue10 = position98;
            $tmp4 = 18;
            goto $l2;
            $l100:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp102.value) {
        {
            org$pandalanguage$pandac$Position* $tmp104 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position103 = *$tmp104;
            $returnValue10 = position103;
            $tmp4 = 19;
            goto $l2;
            $l105:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp107.value) {
        {
            org$pandalanguage$pandac$Position* $tmp109 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position108 = *$tmp109;
            $returnValue10 = position108;
            $tmp4 = 20;
            goto $l2;
            $l110:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp112.value) {
        {
            org$pandalanguage$pandac$Position* $tmp114 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position113 = *$tmp114;
            $returnValue10 = position113;
            $tmp4 = 21;
            goto $l2;
            $l115:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp117 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp117.value) {
        {
            org$pandalanguage$pandac$Position* $tmp119 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position118 = *$tmp119;
            $returnValue10 = position118;
            $tmp4 = 22;
            goto $l2;
            $l120:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp122 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp122.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp124 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$81_95->$data + 0));
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
        panda$core$Bit $tmp129 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp129.value) {
        {
            org$pandalanguage$pandac$Position* $tmp131 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position130 = *$tmp131;
            $returnValue10 = position130;
            $tmp4 = 24;
            goto $l2;
            $l132:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp134.value) {
        {
            org$pandalanguage$pandac$Position* $tmp136 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position135 = *$tmp136;
            $returnValue10 = position135;
            $tmp4 = 25;
            goto $l2;
            $l137:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp139.value) {
        {
            org$pandalanguage$pandac$Position* $tmp141 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position140 = *$tmp141;
            $returnValue10 = position140;
            $tmp4 = 26;
            goto $l2;
            $l142:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp144 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp144.value) {
        {
            org$pandalanguage$pandac$Position* $tmp146 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position145 = *$tmp146;
            $returnValue10 = position145;
            $tmp4 = 27;
            goto $l2;
            $l147:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp149.value) {
        {
            org$pandalanguage$pandac$Position* $tmp151 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position150 = *$tmp151;
            $returnValue10 = position150;
            $tmp4 = 28;
            goto $l2;
            $l152:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp154 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp154.value) {
        {
            org$pandalanguage$pandac$Position* $tmp156 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position155 = *$tmp156;
            $returnValue10 = position155;
            $tmp4 = 29;
            goto $l2;
            $l157:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp159 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp159.value) {
        {
            org$pandalanguage$pandac$Position* $tmp161 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position160 = *$tmp161;
            $returnValue10 = position160;
            $tmp4 = 30;
            goto $l2;
            $l162:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp164 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp164.value) {
        {
            org$pandalanguage$pandac$Position* $tmp166 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position165 = *$tmp166;
            $returnValue10 = position165;
            $tmp4 = 31;
            goto $l2;
            $l167:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp169.value) {
        {
            org$pandalanguage$pandac$Position* $tmp171 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position170 = *$tmp171;
            $returnValue10 = position170;
            $tmp4 = 32;
            goto $l2;
            $l172:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp174 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp174.value) {
        {
            org$pandalanguage$pandac$Position* $tmp176 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position175 = *$tmp176;
            $returnValue10 = position175;
            $tmp4 = 33;
            goto $l2;
            $l177:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp179.value) {
        {
            org$pandalanguage$pandac$Position* $tmp181 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position180 = *$tmp181;
            $returnValue10 = position180;
            $tmp4 = 34;
            goto $l2;
            $l182:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp184 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp184.value) {
        {
            org$pandalanguage$pandac$Position* $tmp186 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position185 = *$tmp186;
            $returnValue10 = position185;
            $tmp4 = 35;
            goto $l2;
            $l187:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp189.value) {
        {
            org$pandalanguage$pandac$Position* $tmp191 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position190 = *$tmp191;
            $returnValue10 = position190;
            $tmp4 = 36;
            goto $l2;
            $l192:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp194 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp194.value) {
        {
            org$pandalanguage$pandac$Position* $tmp196 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position195 = *$tmp196;
            $returnValue10 = position195;
            $tmp4 = 37;
            goto $l2;
            $l197:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp199.value) {
        {
            org$pandalanguage$pandac$Position* $tmp201 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position200 = *$tmp201;
            $returnValue10 = position200;
            $tmp4 = 38;
            goto $l2;
            $l202:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp204 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 39 }));
        if ($tmp204.value) {
        {
            org$pandalanguage$pandac$Position* $tmp206 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position205 = *$tmp206;
            $returnValue10 = position205;
            $tmp4 = 39;
            goto $l2;
            $l207:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp209.value) {
        {
            org$pandalanguage$pandac$Position* $tmp211 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position210 = *$tmp211;
            $returnValue10 = position210;
            $tmp4 = 40;
            goto $l2;
            $l212:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp214 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp214.value) {
        {
            org$pandalanguage$pandac$Position* $tmp216 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position215 = *$tmp216;
            $returnValue10 = position215;
            $tmp4 = 41;
            goto $l2;
            $l217:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp219 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp219.value) {
        {
            org$pandalanguage$pandac$Position* $tmp221 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position220 = *$tmp221;
            $returnValue10 = position220;
            $tmp4 = 42;
            goto $l2;
            $l222:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp224.value) {
        {
            org$pandalanguage$pandac$Position* $tmp226 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position225 = *$tmp226;
            $returnValue10 = position225;
            $tmp4 = 43;
            goto $l2;
            $l227:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp229.value) {
        {
            org$pandalanguage$pandac$Position* $tmp231 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position230 = *$tmp231;
            $returnValue10 = position230;
            $tmp4 = 44;
            goto $l2;
            $l232:;
            return $returnValue10;
        }
        }
        else {
        panda$core$Bit $tmp234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$81_95->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp234.value) {
        {
            org$pandalanguage$pandac$Position* $tmp236 = ((org$pandalanguage$pandac$Position*) ((char*) $match$81_95->$data + 0));
            position235 = *$tmp236;
            $returnValue10 = position235;
            $tmp4 = 45;
            goto $l2;
            $l237:;
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
        case 44: goto $l232;
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
        case 45: goto $l237;
        case 6: goto $l41;
        case 42: goto $l222;
        case 9: goto $l56;
        case 13: goto $l76;
        case 5: goto $l36;
        case -1: goto $l239;
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
    $l239:;
}
panda$core$String* org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$180_9243 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp244;
    panda$core$String* name246 = NULL;
    org$pandalanguage$pandac$ASTNode* expr248 = NULL;
    panda$core$String* $returnValue250;
    panda$core$String* $tmp251;
    panda$core$String* $tmp252;
    panda$core$String* $tmp253;
    panda$core$String* $tmp254;
    panda$core$String* $tmp255;
    panda$core$String* $tmp264;
    org$pandalanguage$pandac$ASTNode* test268 = NULL;
    org$pandalanguage$pandac$ASTNode* msg270 = NULL;
    panda$core$String* $tmp272;
    panda$core$String* $tmp273;
    panda$core$String* $tmp274;
    panda$core$String* $tmp281;
    panda$core$String* $tmp282;
    panda$core$String* $tmp283;
    panda$core$String* $tmp284;
    panda$core$String* $tmp285;
    org$pandalanguage$pandac$ASTNode* expr296 = NULL;
    panda$core$String* $tmp298;
    panda$core$String* $tmp299;
    panda$core$String* $tmp300;
    panda$core$String* $tmp308;
    org$pandalanguage$pandac$ASTNode* left313 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind op315;
    org$pandalanguage$pandac$ASTNode* right317 = NULL;
    panda$core$String* $tmp319;
    panda$core$String* $tmp320;
    panda$core$String* $tmp321;
    panda$core$String* $tmp322;
    panda$core$String* $tmp323;
    panda$core$String* $tmp324;
    panda$core$String* $tmp325;
    panda$core$Object* $tmp330;
    panda$core$Bit value341;
    panda$core$String* $tmp343;
    panda$core$String* $tmp344;
    panda$collections$ImmutableArray* statements349 = NULL;
    panda$core$MutableString* result354 = NULL;
    panda$core$MutableString* $tmp355;
    panda$core$MutableString* $tmp356;
    panda$collections$Iterator* Iter$201$17362 = NULL;
    panda$collections$Iterator* $tmp363;
    panda$collections$Iterator* $tmp364;
    org$pandalanguage$pandac$ASTNode* s380 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp381;
    panda$core$Object* $tmp382;
    panda$core$String* $tmp387;
    panda$core$Char8 $tmp392;
    panda$core$String* $tmp393;
    panda$core$String* $tmp394;
    panda$core$String* label401 = NULL;
    panda$core$String* $tmp403;
    panda$core$String* $tmp404;
    panda$core$String* $tmp405;
    panda$core$String* $tmp412;
    org$pandalanguage$pandac$ASTNode* target417 = NULL;
    panda$collections$ImmutableArray* args419 = NULL;
    panda$core$String* $tmp421;
    panda$core$String* $tmp422;
    panda$core$String* $tmp423;
    panda$core$String* $tmp424;
    panda$core$String* $tmp425;
    panda$core$String* $tmp430;
    org$pandalanguage$pandac$ASTNode* dc441 = NULL;
    panda$core$String* name443 = NULL;
    panda$collections$ImmutableArray* fields445 = NULL;
    panda$core$MutableString* result450 = NULL;
    panda$core$MutableString* $tmp451;
    panda$core$MutableString* $tmp452;
    panda$core$String* $tmp454;
    panda$core$String* $tmp457;
    panda$core$String* $tmp458;
    panda$core$String* $tmp459;
    panda$core$String* $tmp460;
    panda$core$String* $tmp464;
    panda$core$String* $tmp472;
    panda$core$String* $tmp473;
    org$pandalanguage$pandac$ASTNode* base480 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce482 = NULL;
    panda$core$Int64 index484;
    panda$core$String* $tmp486;
    panda$core$String* $tmp487;
    panda$core$String* $tmp488;
    panda$core$String* $tmp489;
    panda$core$String* $tmp490;
    panda$core$String* $tmp491;
    panda$core$String* $tmp492;
    panda$core$Object* $tmp500;
    org$pandalanguage$pandac$ASTNode* dc508 = NULL;
    panda$collections$ImmutableArray* annotations510 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind512;
    panda$core$String* name514 = NULL;
    panda$collections$ImmutableArray* generics516 = NULL;
    panda$collections$ImmutableArray* supertypes518 = NULL;
    panda$collections$ImmutableArray* members520 = NULL;
    panda$core$MutableString* result525 = NULL;
    panda$core$MutableString* $tmp526;
    panda$core$MutableString* $tmp527;
    panda$core$String* $tmp529;
    panda$collections$Iterator* Iter$227$17535 = NULL;
    panda$collections$Iterator* $tmp536;
    panda$collections$Iterator* $tmp537;
    org$pandalanguage$pandac$ASTNode* a553 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp554;
    panda$core$Object* $tmp555;
    panda$core$String* $tmp560;
    org$pandalanguage$pandac$ClassDecl$Kind $match$230_17565;
    panda$core$String* $tmp572;
    panda$core$String* $tmp573;
    panda$core$String* $tmp575;
    panda$core$String* $tmp583;
    panda$core$String* $tmp584;
    panda$core$String* $tmp586;
    panda$collections$Iterator* Iter$243$17598 = NULL;
    panda$collections$Iterator* $tmp599;
    panda$collections$Iterator* $tmp600;
    org$pandalanguage$pandac$ASTNode* m616 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp617;
    panda$core$Object* $tmp618;
    panda$core$String* $tmp623;
    panda$core$Char8 $tmp628;
    panda$core$String* $tmp629;
    panda$core$String* $tmp630;
    panda$core$String* label637 = NULL;
    panda$core$String* $tmp639;
    panda$core$String* $tmp640;
    panda$core$String* $tmp641;
    panda$core$String* $tmp648;
    org$pandalanguage$pandac$ASTNode* target653 = NULL;
    org$pandalanguage$pandac$ASTNode* value655 = NULL;
    panda$core$String* $tmp657;
    panda$core$String* $tmp658;
    panda$core$String* $tmp659;
    panda$core$String* $tmp660;
    panda$core$String* $tmp661;
    panda$core$String* $tmp671;
    panda$core$String* $tmp672;
    panda$core$String* label678 = NULL;
    panda$collections$ImmutableArray* statements680 = NULL;
    org$pandalanguage$pandac$ASTNode* test682 = NULL;
    panda$core$MutableString* result687 = NULL;
    panda$core$MutableString* $tmp688;
    panda$core$MutableString* $tmp689;
    panda$core$String* $tmp691;
    panda$core$String* $tmp692;
    panda$collections$Iterator* Iter$264$17700 = NULL;
    panda$collections$Iterator* $tmp701;
    panda$collections$Iterator* $tmp702;
    org$pandalanguage$pandac$ASTNode* s718 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp719;
    panda$core$Object* $tmp720;
    panda$core$String* $tmp725;
    panda$core$String* $tmp730;
    panda$core$String* $tmp731;
    panda$core$String* $tmp736;
    panda$core$String* $tmp737;
    org$pandalanguage$pandac$ASTNode* base744 = NULL;
    panda$core$String* field746 = NULL;
    panda$core$String* $tmp748;
    panda$core$String* $tmp749;
    panda$core$String* $tmp750;
    panda$core$String* $tmp751;
    panda$core$String* $tmp752;
    org$pandalanguage$pandac$ASTNode* dc763 = NULL;
    panda$collections$ImmutableArray* annotations765 = NULL;
    org$pandalanguage$pandac$ASTNode* decl767 = NULL;
    panda$core$MutableString* result772 = NULL;
    panda$core$MutableString* $tmp773;
    panda$core$MutableString* $tmp774;
    panda$core$String* $tmp776;
    panda$collections$Iterator* Iter$276$17782 = NULL;
    panda$collections$Iterator* $tmp783;
    panda$collections$Iterator* $tmp784;
    org$pandalanguage$pandac$ASTNode* a800 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp801;
    panda$core$Object* $tmp802;
    panda$core$String* $tmp807;
    panda$core$String* $tmp812;
    panda$core$String* $tmp813;
    panda$collections$ImmutableArray* entries820 = NULL;
    panda$core$MutableString* result825 = NULL;
    panda$core$MutableString* $tmp826;
    panda$core$MutableString* $tmp827;
    panda$collections$Iterator* Iter$283$17832 = NULL;
    panda$collections$Iterator* $tmp833;
    panda$collections$Iterator* $tmp834;
    org$pandalanguage$pandac$ASTNode* e850 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp851;
    panda$core$Object* $tmp852;
    panda$core$String* $tmp857;
    panda$core$String* $tmp862;
    panda$core$String* $tmp863;
    panda$core$String* label870 = NULL;
    org$pandalanguage$pandac$ASTNode* target872 = NULL;
    org$pandalanguage$pandac$ASTNode* list874 = NULL;
    panda$collections$ImmutableArray* statements876 = NULL;
    panda$core$MutableString* result881 = NULL;
    panda$core$MutableString* $tmp882;
    panda$core$MutableString* $tmp883;
    panda$core$String* $tmp885;
    panda$core$String* $tmp888;
    panda$core$String* $tmp889;
    panda$core$String* $tmp890;
    panda$core$String* $tmp891;
    panda$collections$Iterator* Iter$293$17902 = NULL;
    panda$collections$Iterator* $tmp903;
    panda$collections$Iterator* $tmp904;
    org$pandalanguage$pandac$ASTNode* s920 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp921;
    panda$core$Object* $tmp922;
    panda$core$String* $tmp927;
    panda$core$Char8 $tmp932;
    panda$core$String* $tmp933;
    panda$core$String* $tmp934;
    panda$core$String* name941 = NULL;
    panda$collections$ImmutableArray* subtypes943 = NULL;
    panda$core$String* $tmp945;
    panda$core$String* $tmp946;
    panda$core$String* $tmp947;
    panda$core$String* $tmp948;
    panda$core$String* $tmp949;
    panda$core$String* $tmp953;
    panda$core$String* name964 = NULL;
    panda$core$String* $tmp966;
    org$pandalanguage$pandac$ASTNode* test970 = NULL;
    panda$collections$ImmutableArray* ifTrue972 = NULL;
    org$pandalanguage$pandac$ASTNode* ifFalse974 = NULL;
    panda$core$MutableString* result979 = NULL;
    panda$core$MutableString* $tmp980;
    panda$core$MutableString* $tmp981;
    panda$core$String* $tmp983;
    panda$core$String* $tmp984;
    panda$collections$Iterator* Iter$304$17992 = NULL;
    panda$collections$Iterator* $tmp993;
    panda$collections$Iterator* $tmp994;
    org$pandalanguage$pandac$ASTNode* s1010 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1011;
    panda$core$Object* $tmp1012;
    panda$core$String* $tmp1017;
    panda$core$Char8 $tmp1022;
    panda$core$String* $tmp1023;
    panda$core$String* $tmp1024;
    panda$core$String* $tmp1029;
    panda$core$String* $tmp1030;
    panda$core$UInt64 value1037;
    panda$core$String* $tmp1039;
    panda$core$String* $tmp1040;
    org$pandalanguage$pandac$IRNode* ir1045 = NULL;
    panda$core$String* $tmp1047;
    panda$core$String* $tmp1048;
    panda$core$String* label1054 = NULL;
    panda$collections$ImmutableArray* statements1056 = NULL;
    panda$core$MutableString* result1061 = NULL;
    panda$core$MutableString* $tmp1062;
    panda$core$MutableString* $tmp1063;
    panda$core$String* $tmp1065;
    panda$core$String* $tmp1066;
    panda$collections$Iterator* Iter$322$171074 = NULL;
    panda$collections$Iterator* $tmp1075;
    panda$collections$Iterator* $tmp1076;
    org$pandalanguage$pandac$ASTNode* s1092 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1093;
    panda$core$Object* $tmp1094;
    panda$core$String* $tmp1099;
    panda$core$Char8 $tmp1104;
    panda$core$String* $tmp1105;
    panda$core$String* $tmp1106;
    org$pandalanguage$pandac$ASTNode* value1113 = NULL;
    panda$collections$ImmutableArray* whens1115 = NULL;
    panda$collections$ImmutableArray* other1117 = NULL;
    panda$core$MutableString* result1122 = NULL;
    panda$core$MutableString* $tmp1123;
    panda$core$MutableString* $tmp1124;
    panda$core$String* $tmp1126;
    panda$core$String* $tmp1127;
    panda$collections$Iterator* Iter$329$171135 = NULL;
    panda$collections$Iterator* $tmp1136;
    panda$collections$Iterator* $tmp1137;
    org$pandalanguage$pandac$ASTNode* w1153 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1154;
    panda$core$Object* $tmp1155;
    panda$core$String* $tmp1160;
    panda$core$String* $tmp1165;
    panda$core$Char8 $tmp1168;
    panda$core$String* $tmp1169;
    panda$core$String* $tmp1170;
    org$pandalanguage$pandac$ASTNode* dc1177 = NULL;
    panda$collections$ImmutableArray* annotations1179 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind1181;
    panda$core$String* name1183 = NULL;
    panda$collections$ImmutableArray* parameters1185 = NULL;
    org$pandalanguage$pandac$ASTNode* returnType1187 = NULL;
    panda$collections$ImmutableArray* statements1189 = NULL;
    panda$core$MutableString* result1194 = NULL;
    panda$core$MutableString* $tmp1195;
    panda$core$MutableString* $tmp1196;
    panda$core$String* $tmp1198;
    panda$collections$Iterator* Iter$342$171204 = NULL;
    panda$collections$Iterator* $tmp1205;
    panda$collections$Iterator* $tmp1206;
    org$pandalanguage$pandac$ASTNode* a1222 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1223;
    panda$core$Object* $tmp1224;
    panda$core$String* $tmp1229;
    org$pandalanguage$pandac$MethodDecl$Kind $match$345_171234;
    panda$core$String* $tmp1240;
    panda$core$String* $tmp1241;
    panda$core$String* $tmp1242;
    panda$core$String* $tmp1243;
    panda$core$String* $tmp1247;
    panda$core$String* $tmp1255;
    panda$core$String* $tmp1256;
    panda$collections$Iterator* Iter$356$211265 = NULL;
    panda$collections$Iterator* $tmp1266;
    panda$collections$Iterator* $tmp1267;
    org$pandalanguage$pandac$ASTNode* s1283 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1284;
    panda$core$Object* $tmp1285;
    panda$core$String* $tmp1290;
    panda$core$Char8 $tmp1295;
    panda$core$String* $tmp1296;
    panda$core$String* $tmp1297;
    org$pandalanguage$pandac$parser$Token$Kind kind1304;
    panda$collections$ImmutableArray* paramTypes1306 = NULL;
    org$pandalanguage$pandac$ASTNode* returnType1308 = NULL;
    panda$core$String* yield1313 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind $match$364_171314;
    panda$core$String* $tmp1316;
    panda$core$String* $tmp1317;
    panda$core$String* $tmp1320;
    panda$core$String* $tmp1321;
    panda$core$String* $tmp1324;
    panda$core$String* $tmp1325;
    panda$core$String* $tmp1328;
    panda$core$String* $tmp1329;
    panda$core$String* partial1331 = NULL;
    panda$core$String* $tmp1332;
    panda$core$String* $tmp1333;
    panda$core$String* $tmp1334;
    panda$core$String* $tmp1335;
    panda$core$String* $tmp1336;
    panda$core$String* $tmp1338;
    panda$core$String* $tmp1349;
    panda$core$String* $tmp1350;
    panda$core$String* $tmp1351;
    panda$core$String* $tmp1352;
    panda$core$String* $tmp1353;
    panda$core$String* $tmp1363;
    panda$core$String* $tmp1364;
    panda$core$String* $tmp1365;
    panda$core$String* $tmp1374;
    org$pandalanguage$pandac$ASTNode* base1379 = NULL;
    panda$core$String* $tmp1381;
    panda$core$String* $tmp1382;
    panda$core$String* name1388 = NULL;
    panda$core$String* $tmp1390;
    panda$core$String* name1394 = NULL;
    org$pandalanguage$pandac$ASTNode* type1396 = NULL;
    panda$core$String* $tmp1398;
    panda$core$String* $tmp1399;
    panda$core$String* $tmp1400;
    panda$core$String* $tmp1401;
    panda$core$String* $tmp1402;
    org$pandalanguage$pandac$parser$Token$Kind kind1412;
    org$pandalanguage$pandac$ASTNode* base1414 = NULL;
    panda$core$String* $tmp1416;
    panda$core$String* $tmp1417;
    panda$core$String* $tmp1418;
    panda$core$String* $tmp1419;
    panda$core$String* $tmp1420;
    panda$core$Object* $tmp1421;
    org$pandalanguage$pandac$ASTNode* start1433 = NULL;
    org$pandalanguage$pandac$ASTNode* end1435 = NULL;
    panda$core$Bit inclusive1437;
    org$pandalanguage$pandac$ASTNode* step1439 = NULL;
    panda$core$MutableString* result1444 = NULL;
    panda$core$MutableString* $tmp1445;
    panda$core$MutableString* $tmp1446;
    panda$core$String* $tmp1450;
    panda$core$String* $tmp1453;
    panda$core$String* $tmp1454;
    panda$core$Real64 value1461;
    panda$core$String* $tmp1463;
    panda$core$String* $tmp1464;
    org$pandalanguage$pandac$ASTNode* value1469 = NULL;
    panda$core$String* $tmp1471;
    panda$core$String* $tmp1472;
    panda$core$String* $tmp1473;
    panda$core$String* $tmp1480;
    panda$core$String* $tmp1485;
    panda$core$String* str1490 = NULL;
    panda$core$String* $tmp1492;
    panda$core$String* $tmp1496;
    panda$core$String* name1501 = NULL;
    panda$core$String* $tmp1503;
    panda$core$String* name1507 = NULL;
    org$pandalanguage$pandac$ASTNode* type1509 = NULL;
    panda$core$String* $tmp1511;
    panda$core$String* $tmp1512;
    panda$core$String* $tmp1513;
    panda$core$String* $tmp1514;
    panda$core$String* $tmp1515;
    panda$core$String* $tmp1524;
    panda$core$String* name1528 = NULL;
    panda$core$String* $tmp1530;
    org$pandalanguage$pandac$Variable$Kind kind1534;
    panda$collections$ImmutableArray* decls1536 = NULL;
    panda$core$MutableString* result1541 = NULL;
    panda$core$MutableString* $tmp1542;
    panda$core$MutableString* $tmp1543;
    org$pandalanguage$pandac$Variable$Kind $match$431_171545;
    panda$core$String* $tmp1554;
    panda$core$String* $tmp1559;
    panda$core$String* $tmp1560;
    panda$collections$ImmutableArray* tests1567 = NULL;
    panda$collections$ImmutableArray* statements1569 = NULL;
    panda$core$MutableString* result1574 = NULL;
    panda$core$MutableString* $tmp1575;
    panda$core$MutableString* $tmp1576;
    panda$core$String* separator1579 = NULL;
    panda$core$String* $tmp1580;
    panda$collections$Iterator* Iter$442$171585 = NULL;
    panda$collections$Iterator* $tmp1586;
    panda$collections$Iterator* $tmp1587;
    org$pandalanguage$pandac$ASTNode* t1603 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1604;
    panda$core$Object* $tmp1605;
    panda$core$String* $tmp1610;
    panda$core$String* $tmp1611;
    panda$core$String* $tmp1612;
    panda$core$String* $tmp1613;
    panda$core$Char8 $tmp1622;
    panda$collections$Iterator* Iter$446$171626 = NULL;
    panda$collections$Iterator* $tmp1627;
    panda$collections$Iterator* $tmp1628;
    org$pandalanguage$pandac$ASTNode* s1644 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1645;
    panda$core$Object* $tmp1646;
    panda$core$String* $tmp1651;
    panda$core$String* $tmp1656;
    panda$core$String* $tmp1657;
    panda$core$String* label1664 = NULL;
    org$pandalanguage$pandac$ASTNode* test1666 = NULL;
    panda$collections$ImmutableArray* statements1668 = NULL;
    panda$core$MutableString* result1673 = NULL;
    panda$core$MutableString* $tmp1674;
    panda$core$MutableString* $tmp1675;
    panda$core$String* $tmp1677;
    panda$core$String* $tmp1678;
    panda$core$String* $tmp1682;
    panda$core$String* $tmp1683;
    panda$collections$Iterator* Iter$456$171691 = NULL;
    panda$collections$Iterator* $tmp1692;
    panda$collections$Iterator* $tmp1693;
    org$pandalanguage$pandac$ASTNode* s1709 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1710;
    panda$core$Object* $tmp1711;
    panda$core$String* $tmp1716;
    panda$core$Char8 $tmp1721;
    panda$core$String* $tmp1722;
    panda$core$String* $tmp1723;
    int $tmp242;
    {
        $tmp244 = self;
        $match$180_9243 = $tmp244;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp244));
        panda$core$Bit $tmp245 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 0 }));
        if ($tmp245.value) {
        {
            panda$core$String** $tmp247 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            name246 = *$tmp247;
            org$pandalanguage$pandac$ASTNode** $tmp249 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 24));
            expr248 = *$tmp249;
            if (((panda$core$Bit) { expr248 != NULL }).value) {
            {
                panda$core$String* $tmp256 = panda$core$String$convert$R$panda$core$String(name246);
                $tmp255 = $tmp256;
                panda$core$String* $tmp258 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp255, &$s257);
                $tmp254 = $tmp258;
                panda$core$String* $tmp259 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp254, ((panda$core$Object*) expr248));
                $tmp253 = $tmp259;
                panda$core$String* $tmp261 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp253, &$s260);
                $tmp252 = $tmp261;
                $tmp251 = $tmp252;
                $returnValue250 = $tmp251;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp251));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp252));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp253));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp254));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp255));
                $tmp242 = 0;
                goto $l240;
                $l262:;
                return $returnValue250;
            }
            }
            $tmp264 = name246;
            $returnValue250 = $tmp264;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp264));
            $tmp242 = 1;
            goto $l240;
            $l265:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 1 }));
        if ($tmp267.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp269 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 16));
            test268 = *$tmp269;
            org$pandalanguage$pandac$ASTNode** $tmp271 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 24));
            msg270 = *$tmp271;
            if (((panda$core$Bit) { msg270 == NULL }).value) {
            {
                panda$core$String* $tmp276 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s275, ((panda$core$Object*) test268));
                $tmp274 = $tmp276;
                panda$core$String* $tmp278 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp274, &$s277);
                $tmp273 = $tmp278;
                $tmp272 = $tmp273;
                $returnValue250 = $tmp272;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp272));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp273));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp274));
                $tmp242 = 2;
                goto $l240;
                $l279:;
                return $returnValue250;
            }
            }
            panda$core$String* $tmp287 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s286, ((panda$core$Object*) test268));
            $tmp285 = $tmp287;
            panda$core$String* $tmp289 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp285, &$s288);
            $tmp284 = $tmp289;
            panda$core$String* $tmp290 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp284, ((panda$core$Object*) msg270));
            $tmp283 = $tmp290;
            panda$core$String* $tmp292 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp283, &$s291);
            $tmp282 = $tmp292;
            $tmp281 = $tmp282;
            $returnValue250 = $tmp281;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp281));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp282));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp283));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp284));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp285));
            $tmp242 = 3;
            goto $l240;
            $l293:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp295 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 2 }));
        if ($tmp295.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp297 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 16));
            expr296 = *$tmp297;
            panda$core$String* $tmp302 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s301, ((panda$core$Object*) expr296));
            $tmp300 = $tmp302;
            panda$core$String* $tmp304 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp300, &$s303);
            $tmp299 = $tmp304;
            $tmp298 = $tmp299;
            $returnValue250 = $tmp298;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp298));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp299));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp300));
            $tmp242 = 4;
            goto $l240;
            $l305:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp307 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 3 }));
        if ($tmp307.value) {
        {
            $tmp308 = &$s309;
            $returnValue250 = $tmp308;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp308));
            $tmp242 = 5;
            goto $l240;
            $l310:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp312 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 4 }));
        if ($tmp312.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp314 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 16));
            left313 = *$tmp314;
            org$pandalanguage$pandac$parser$Token$Kind* $tmp316 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$180_9243->$data + 24));
            op315 = *$tmp316;
            org$pandalanguage$pandac$ASTNode** $tmp318 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 32));
            right317 = *$tmp318;
            panda$core$String* $tmp327 = (($fn326) left313->$class->vtable[0])(left313);
            $tmp325 = $tmp327;
            panda$core$String* $tmp329 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp325, &$s328);
            $tmp324 = $tmp329;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp331;
            $tmp331 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp331->value = op315;
            $tmp330 = ((panda$core$Object*) $tmp331);
            panda$core$String* $tmp332 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp324, $tmp330);
            $tmp323 = $tmp332;
            panda$core$String* $tmp334 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp323, &$s333);
            $tmp322 = $tmp334;
            panda$core$String* $tmp335 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp322, ((panda$core$Object*) right317));
            $tmp321 = $tmp335;
            panda$core$String* $tmp337 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp321, &$s336);
            $tmp320 = $tmp337;
            $tmp319 = $tmp320;
            $returnValue250 = $tmp319;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp319));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp320));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp321));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp322));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp323));
            panda$core$Panda$unref$panda$core$Object($tmp330);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp324));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp325));
            $tmp242 = 6;
            goto $l240;
            $l338:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 5 }));
        if ($tmp340.value) {
        {
            panda$core$Bit* $tmp342 = ((panda$core$Bit*) ((char*) $match$180_9243->$data + 16));
            value341 = *$tmp342;
            panda$core$String* $tmp345 = panda$core$Bit$convert$R$panda$core$String(value341);
            $tmp344 = $tmp345;
            $tmp343 = $tmp344;
            $returnValue250 = $tmp343;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp343));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp344));
            $tmp242 = 7;
            goto $l240;
            $l346:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp348 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 6 }));
        if ($tmp348.value) {
        {
            panda$collections$ImmutableArray** $tmp350 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 16));
            statements349 = *$tmp350;
            int $tmp353;
            {
                panda$core$MutableString* $tmp357 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp357, &$s358);
                $tmp356 = $tmp357;
                $tmp355 = $tmp356;
                result354 = $tmp355;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp355));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp356));
                {
                    int $tmp361;
                    {
                        ITable* $tmp365 = ((panda$collections$Iterable*) statements349)->$class->itable;
                        while ($tmp365->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp365 = $tmp365->next;
                        }
                        $fn367 $tmp366 = $tmp365->methods[0];
                        panda$collections$Iterator* $tmp368 = $tmp366(((panda$collections$Iterable*) statements349));
                        $tmp364 = $tmp368;
                        $tmp363 = $tmp364;
                        Iter$201$17362 = $tmp363;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp363));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp364));
                        $l369:;
                        ITable* $tmp372 = Iter$201$17362->$class->itable;
                        while ($tmp372->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp372 = $tmp372->next;
                        }
                        $fn374 $tmp373 = $tmp372->methods[0];
                        panda$core$Bit $tmp375 = $tmp373(Iter$201$17362);
                        panda$core$Bit $tmp376 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp375);
                        bool $tmp371 = $tmp376.value;
                        if (!$tmp371) goto $l370;
                        {
                            int $tmp379;
                            {
                                ITable* $tmp383 = Iter$201$17362->$class->itable;
                                while ($tmp383->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp383 = $tmp383->next;
                                }
                                $fn385 $tmp384 = $tmp383->methods[1];
                                panda$core$Object* $tmp386 = $tmp384(Iter$201$17362);
                                $tmp382 = $tmp386;
                                $tmp381 = ((org$pandalanguage$pandac$ASTNode*) $tmp382);
                                s380 = $tmp381;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp381));
                                panda$core$Panda$unref$panda$core$Object($tmp382);
                                panda$core$String* $tmp389 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s380), &$s388);
                                $tmp387 = $tmp389;
                                panda$core$MutableString$append$panda$core$String(result354, $tmp387);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp387));
                            }
                            $tmp379 = -1;
                            goto $l377;
                            $l377:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s380));
                            s380 = NULL;
                            switch ($tmp379) {
                                case -1: goto $l390;
                            }
                            $l390:;
                        }
                        goto $l369;
                        $l370:;
                    }
                    $tmp361 = -1;
                    goto $l359;
                    $l359:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$201$17362));
                    Iter$201$17362 = NULL;
                    switch ($tmp361) {
                        case -1: goto $l391;
                    }
                    $l391:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp392, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result354, $tmp392);
                panda$core$String* $tmp395 = panda$core$MutableString$finish$R$panda$core$String(result354);
                $tmp394 = $tmp395;
                $tmp393 = $tmp394;
                $returnValue250 = $tmp393;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp393));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp394));
                $tmp353 = 0;
                goto $l351;
                $l396:;
                $tmp242 = 8;
                goto $l240;
                $l397:;
                return $returnValue250;
            }
            $l351:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result354));
            result354 = NULL;
            switch ($tmp353) {
                case 0: goto $l396;
            }
            $l399:;
        }
        }
        else {
        panda$core$Bit $tmp400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 7 }));
        if ($tmp400.value) {
        {
            panda$core$String** $tmp402 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            label401 = *$tmp402;
            if (((panda$core$Bit) { label401 != NULL }).value) {
            {
                panda$core$String* $tmp407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s406, label401);
                $tmp405 = $tmp407;
                panda$core$String* $tmp409 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp405, &$s408);
                $tmp404 = $tmp409;
                $tmp403 = $tmp404;
                $returnValue250 = $tmp403;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp403));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp404));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp405));
                $tmp242 = 9;
                goto $l240;
                $l410:;
                return $returnValue250;
            }
            }
            $tmp412 = &$s413;
            $returnValue250 = $tmp412;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp412));
            $tmp242 = 10;
            goto $l240;
            $l414:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 8 }));
        if ($tmp416.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp418 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 16));
            target417 = *$tmp418;
            panda$collections$ImmutableArray** $tmp420 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 24));
            args419 = *$tmp420;
            panda$core$String* $tmp427 = (($fn426) target417->$class->vtable[0])(target417);
            $tmp425 = $tmp427;
            panda$core$String* $tmp429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp425, &$s428);
            $tmp424 = $tmp429;
            ITable* $tmp431 = ((panda$collections$ListView*) args419)->$class->itable;
            while ($tmp431->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp431 = $tmp431->next;
            }
            $fn433 $tmp432 = $tmp431->methods[1];
            panda$core$String* $tmp434 = $tmp432(((panda$collections$ListView*) args419));
            $tmp430 = $tmp434;
            panda$core$String* $tmp435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp424, $tmp430);
            $tmp423 = $tmp435;
            panda$core$String* $tmp437 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp423, &$s436);
            $tmp422 = $tmp437;
            $tmp421 = $tmp422;
            $returnValue250 = $tmp421;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp421));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp422));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp423));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp430));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp424));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp425));
            $tmp242 = 11;
            goto $l240;
            $l438:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp440 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp440.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp442 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 16));
            dc441 = *$tmp442;
            panda$core$String** $tmp444 = ((panda$core$String**) ((char*) $match$180_9243->$data + 24));
            name443 = *$tmp444;
            panda$collections$ImmutableArray** $tmp446 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 32));
            fields445 = *$tmp446;
            int $tmp449;
            {
                panda$core$MutableString* $tmp453 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp453);
                $tmp452 = $tmp453;
                $tmp451 = $tmp452;
                result450 = $tmp451;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp451));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp452));
                if (((panda$core$Bit) { dc441 != NULL }).value) {
                {
                    panda$core$String* $tmp456 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc441), &$s455);
                    $tmp454 = $tmp456;
                    panda$core$MutableString$append$panda$core$String(result450, $tmp454);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp454));
                }
                }
                panda$core$String* $tmp461 = panda$core$String$convert$R$panda$core$String(name443);
                $tmp460 = $tmp461;
                panda$core$String* $tmp463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp460, &$s462);
                $tmp459 = $tmp463;
                ITable* $tmp465 = ((panda$collections$ListView*) fields445)->$class->itable;
                while ($tmp465->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp465 = $tmp465->next;
                }
                $fn467 $tmp466 = $tmp465->methods[1];
                panda$core$String* $tmp468 = $tmp466(((panda$collections$ListView*) fields445));
                $tmp464 = $tmp468;
                panda$core$String* $tmp469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp459, $tmp464);
                $tmp458 = $tmp469;
                panda$core$String* $tmp471 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp458, &$s470);
                $tmp457 = $tmp471;
                panda$core$MutableString$append$panda$core$String(result450, $tmp457);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp457));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp458));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp464));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp459));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp460));
                panda$core$String* $tmp474 = panda$core$MutableString$finish$R$panda$core$String(result450);
                $tmp473 = $tmp474;
                $tmp472 = $tmp473;
                $returnValue250 = $tmp472;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp472));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp473));
                $tmp449 = 0;
                goto $l447;
                $l475:;
                $tmp242 = 12;
                goto $l240;
                $l476:;
                return $returnValue250;
            }
            $l447:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result450));
            result450 = NULL;
            switch ($tmp449) {
                case 0: goto $l475;
            }
            $l478:;
        }
        }
        else {
        panda$core$Bit $tmp479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp479.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp481 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 16));
            base480 = *$tmp481;
            org$pandalanguage$pandac$ChoiceEntry** $tmp483 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$180_9243->$data + 24));
            ce482 = *$tmp483;
            panda$core$Int64* $tmp485 = ((panda$core$Int64*) ((char*) $match$180_9243->$data + 32));
            index484 = *$tmp485;
            panda$core$String* $tmp494 = (($fn493) base480->$class->vtable[0])(base480);
            $tmp492 = $tmp494;
            panda$core$String* $tmp496 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp492, &$s495);
            $tmp491 = $tmp496;
            panda$core$String* $tmp497 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp491, ((panda$core$Object*) ce482));
            $tmp490 = $tmp497;
            panda$core$String* $tmp499 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp490, &$s498);
            $tmp489 = $tmp499;
            panda$core$Int64$wrapper* $tmp501;
            $tmp501 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp501->value = index484;
            $tmp500 = ((panda$core$Object*) $tmp501);
            panda$core$String* $tmp502 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp489, $tmp500);
            $tmp488 = $tmp502;
            panda$core$String* $tmp504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp488, &$s503);
            $tmp487 = $tmp504;
            $tmp486 = $tmp487;
            $returnValue250 = $tmp486;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp486));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp487));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp488));
            panda$core$Panda$unref$panda$core$Object($tmp500);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp489));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp490));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp491));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp492));
            $tmp242 = 13;
            goto $l240;
            $l505:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp507.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp509 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 16));
            dc508 = *$tmp509;
            panda$collections$ImmutableArray** $tmp511 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 24));
            annotations510 = *$tmp511;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp513 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$180_9243->$data + 32));
            kind512 = *$tmp513;
            panda$core$String** $tmp515 = ((panda$core$String**) ((char*) $match$180_9243->$data + 40));
            name514 = *$tmp515;
            panda$collections$ImmutableArray** $tmp517 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 48));
            generics516 = *$tmp517;
            panda$collections$ImmutableArray** $tmp519 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 56));
            supertypes518 = *$tmp519;
            panda$collections$ImmutableArray** $tmp521 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 64));
            members520 = *$tmp521;
            int $tmp524;
            {
                panda$core$MutableString* $tmp528 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp528);
                $tmp527 = $tmp528;
                $tmp526 = $tmp527;
                result525 = $tmp526;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp526));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp527));
                if (((panda$core$Bit) { dc508 != NULL }).value) {
                {
                    panda$core$String* $tmp531 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc508), &$s530);
                    $tmp529 = $tmp531;
                    panda$core$MutableString$append$panda$core$String(result525, $tmp529);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp529));
                }
                }
                {
                    int $tmp534;
                    {
                        ITable* $tmp538 = ((panda$collections$Iterable*) annotations510)->$class->itable;
                        while ($tmp538->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp538 = $tmp538->next;
                        }
                        $fn540 $tmp539 = $tmp538->methods[0];
                        panda$collections$Iterator* $tmp541 = $tmp539(((panda$collections$Iterable*) annotations510));
                        $tmp537 = $tmp541;
                        $tmp536 = $tmp537;
                        Iter$227$17535 = $tmp536;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp536));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp537));
                        $l542:;
                        ITable* $tmp545 = Iter$227$17535->$class->itable;
                        while ($tmp545->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp545 = $tmp545->next;
                        }
                        $fn547 $tmp546 = $tmp545->methods[0];
                        panda$core$Bit $tmp548 = $tmp546(Iter$227$17535);
                        panda$core$Bit $tmp549 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp548);
                        bool $tmp544 = $tmp549.value;
                        if (!$tmp544) goto $l543;
                        {
                            int $tmp552;
                            {
                                ITable* $tmp556 = Iter$227$17535->$class->itable;
                                while ($tmp556->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp556 = $tmp556->next;
                                }
                                $fn558 $tmp557 = $tmp556->methods[1];
                                panda$core$Object* $tmp559 = $tmp557(Iter$227$17535);
                                $tmp555 = $tmp559;
                                $tmp554 = ((org$pandalanguage$pandac$ASTNode*) $tmp555);
                                a553 = $tmp554;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp554));
                                panda$core$Panda$unref$panda$core$Object($tmp555);
                                panda$core$String* $tmp562 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a553), &$s561);
                                $tmp560 = $tmp562;
                                panda$core$MutableString$append$panda$core$String(result525, $tmp560);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp560));
                            }
                            $tmp552 = -1;
                            goto $l550;
                            $l550:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a553));
                            a553 = NULL;
                            switch ($tmp552) {
                                case -1: goto $l563;
                            }
                            $l563:;
                        }
                        goto $l542;
                        $l543:;
                    }
                    $tmp534 = -1;
                    goto $l532;
                    $l532:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$227$17535));
                    Iter$227$17535 = NULL;
                    switch ($tmp534) {
                        case -1: goto $l564;
                    }
                    $l564:;
                }
                {
                    $match$230_17565 = kind512;
                    panda$core$Bit $tmp566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$230_17565.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp566.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result525, &$s567);
                    }
                    }
                    else {
                    panda$core$Bit $tmp568 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$230_17565.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp568.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result525, &$s569);
                    }
                    }
                    else {
                    panda$core$Bit $tmp570 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$230_17565.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp570.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result525, &$s571);
                    }
                    }
                    }
                    }
                }
                panda$core$MutableString$append$panda$core$String(result525, name514);
                if (((panda$core$Bit) { generics516 != NULL }).value) {
                {
                    ITable* $tmp576 = ((panda$collections$ListView*) generics516)->$class->itable;
                    while ($tmp576->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp576 = $tmp576->next;
                    }
                    $fn578 $tmp577 = $tmp576->methods[1];
                    panda$core$String* $tmp579 = $tmp577(((panda$collections$ListView*) generics516));
                    $tmp575 = $tmp579;
                    panda$core$String* $tmp580 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s574, $tmp575);
                    $tmp573 = $tmp580;
                    panda$core$String* $tmp582 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp573, &$s581);
                    $tmp572 = $tmp582;
                    panda$core$MutableString$append$panda$core$String(result525, $tmp572);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp572));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp573));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp575));
                }
                }
                if (((panda$core$Bit) { supertypes518 != NULL }).value) {
                {
                    ITable* $tmp587 = ((panda$collections$ListView*) supertypes518)->$class->itable;
                    while ($tmp587->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                        $tmp587 = $tmp587->next;
                    }
                    $fn589 $tmp588 = $tmp587->methods[1];
                    panda$core$String* $tmp590 = $tmp588(((panda$collections$ListView*) supertypes518));
                    $tmp586 = $tmp590;
                    panda$core$String* $tmp591 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s585, $tmp586);
                    $tmp584 = $tmp591;
                    panda$core$String* $tmp593 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp584, &$s592);
                    $tmp583 = $tmp593;
                    panda$core$MutableString$append$panda$core$String(result525, $tmp583);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp583));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp584));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp586));
                }
                }
                panda$core$MutableString$append$panda$core$String(result525, &$s594);
                {
                    int $tmp597;
                    {
                        ITable* $tmp601 = ((panda$collections$Iterable*) members520)->$class->itable;
                        while ($tmp601->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp601 = $tmp601->next;
                        }
                        $fn603 $tmp602 = $tmp601->methods[0];
                        panda$collections$Iterator* $tmp604 = $tmp602(((panda$collections$Iterable*) members520));
                        $tmp600 = $tmp604;
                        $tmp599 = $tmp600;
                        Iter$243$17598 = $tmp599;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp599));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp600));
                        $l605:;
                        ITable* $tmp608 = Iter$243$17598->$class->itable;
                        while ($tmp608->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp608 = $tmp608->next;
                        }
                        $fn610 $tmp609 = $tmp608->methods[0];
                        panda$core$Bit $tmp611 = $tmp609(Iter$243$17598);
                        panda$core$Bit $tmp612 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp611);
                        bool $tmp607 = $tmp612.value;
                        if (!$tmp607) goto $l606;
                        {
                            int $tmp615;
                            {
                                ITable* $tmp619 = Iter$243$17598->$class->itable;
                                while ($tmp619->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp619 = $tmp619->next;
                                }
                                $fn621 $tmp620 = $tmp619->methods[1];
                                panda$core$Object* $tmp622 = $tmp620(Iter$243$17598);
                                $tmp618 = $tmp622;
                                $tmp617 = ((org$pandalanguage$pandac$ASTNode*) $tmp618);
                                m616 = $tmp617;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp617));
                                panda$core$Panda$unref$panda$core$Object($tmp618);
                                panda$core$String* $tmp625 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) m616), &$s624);
                                $tmp623 = $tmp625;
                                panda$core$MutableString$append$panda$core$String(result525, $tmp623);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp623));
                            }
                            $tmp615 = -1;
                            goto $l613;
                            $l613:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m616));
                            m616 = NULL;
                            switch ($tmp615) {
                                case -1: goto $l626;
                            }
                            $l626:;
                        }
                        goto $l605;
                        $l606:;
                    }
                    $tmp597 = -1;
                    goto $l595;
                    $l595:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$243$17598));
                    Iter$243$17598 = NULL;
                    switch ($tmp597) {
                        case -1: goto $l627;
                    }
                    $l627:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp628, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result525, $tmp628);
                panda$core$String* $tmp631 = panda$core$MutableString$finish$R$panda$core$String(result525);
                $tmp630 = $tmp631;
                $tmp629 = $tmp630;
                $returnValue250 = $tmp629;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp629));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp630));
                $tmp524 = 0;
                goto $l522;
                $l632:;
                $tmp242 = 14;
                goto $l240;
                $l633:;
                return $returnValue250;
            }
            $l522:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result525));
            result525 = NULL;
            switch ($tmp524) {
                case 0: goto $l632;
            }
            $l635:;
        }
        }
        else {
        panda$core$Bit $tmp636 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp636.value) {
        {
            panda$core$String** $tmp638 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            label637 = *$tmp638;
            if (((panda$core$Bit) { label637 != NULL }).value) {
            {
                panda$core$String* $tmp643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s642, label637);
                $tmp641 = $tmp643;
                panda$core$String* $tmp645 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp641, &$s644);
                $tmp640 = $tmp645;
                $tmp639 = $tmp640;
                $returnValue250 = $tmp639;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp639));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp640));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp641));
                $tmp242 = 15;
                goto $l240;
                $l646:;
                return $returnValue250;
            }
            }
            $tmp648 = &$s649;
            $returnValue250 = $tmp648;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp648));
            $tmp242 = 16;
            goto $l240;
            $l650:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp652 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp652.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp654 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 16));
            target653 = *$tmp654;
            org$pandalanguage$pandac$ASTNode** $tmp656 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 24));
            value655 = *$tmp656;
            if (((panda$core$Bit) { value655 != NULL }).value) {
            {
                panda$core$String* $tmp663 = (($fn662) target653->$class->vtable[0])(target653);
                $tmp661 = $tmp663;
                panda$core$String* $tmp665 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp661, &$s664);
                $tmp660 = $tmp665;
                panda$core$String* $tmp666 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp660, ((panda$core$Object*) value655));
                $tmp659 = $tmp666;
                panda$core$String* $tmp668 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp659, &$s667);
                $tmp658 = $tmp668;
                $tmp657 = $tmp658;
                $returnValue250 = $tmp657;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp657));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp658));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp659));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp660));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp661));
                $tmp242 = 17;
                goto $l240;
                $l669:;
                return $returnValue250;
            }
            }
            panda$core$String* $tmp674 = (($fn673) target653->$class->vtable[0])(target653);
            $tmp672 = $tmp674;
            $tmp671 = $tmp672;
            $returnValue250 = $tmp671;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp671));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp672));
            $tmp242 = 18;
            goto $l240;
            $l675:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp677 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp677.value) {
        {
            panda$core$String** $tmp679 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            label678 = *$tmp679;
            panda$collections$ImmutableArray** $tmp681 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 24));
            statements680 = *$tmp681;
            org$pandalanguage$pandac$ASTNode** $tmp683 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 32));
            test682 = *$tmp683;
            int $tmp686;
            {
                panda$core$MutableString* $tmp690 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp690);
                $tmp689 = $tmp690;
                $tmp688 = $tmp689;
                result687 = $tmp688;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp688));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp689));
                if (((panda$core$Bit) { label678 != NULL }).value) {
                {
                    panda$core$String* $tmp693 = panda$core$String$convert$R$panda$core$String(label678);
                    $tmp692 = $tmp693;
                    panda$core$String* $tmp695 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp692, &$s694);
                    $tmp691 = $tmp695;
                    panda$core$MutableString$append$panda$core$String(result687, $tmp691);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp691));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp692));
                }
                }
                panda$core$MutableString$append$panda$core$String(result687, &$s696);
                {
                    int $tmp699;
                    {
                        ITable* $tmp703 = ((panda$collections$Iterable*) statements680)->$class->itable;
                        while ($tmp703->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp703 = $tmp703->next;
                        }
                        $fn705 $tmp704 = $tmp703->methods[0];
                        panda$collections$Iterator* $tmp706 = $tmp704(((panda$collections$Iterable*) statements680));
                        $tmp702 = $tmp706;
                        $tmp701 = $tmp702;
                        Iter$264$17700 = $tmp701;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp701));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp702));
                        $l707:;
                        ITable* $tmp710 = Iter$264$17700->$class->itable;
                        while ($tmp710->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp710 = $tmp710->next;
                        }
                        $fn712 $tmp711 = $tmp710->methods[0];
                        panda$core$Bit $tmp713 = $tmp711(Iter$264$17700);
                        panda$core$Bit $tmp714 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp713);
                        bool $tmp709 = $tmp714.value;
                        if (!$tmp709) goto $l708;
                        {
                            int $tmp717;
                            {
                                ITable* $tmp721 = Iter$264$17700->$class->itable;
                                while ($tmp721->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp721 = $tmp721->next;
                                }
                                $fn723 $tmp722 = $tmp721->methods[1];
                                panda$core$Object* $tmp724 = $tmp722(Iter$264$17700);
                                $tmp720 = $tmp724;
                                $tmp719 = ((org$pandalanguage$pandac$ASTNode*) $tmp720);
                                s718 = $tmp719;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp719));
                                panda$core$Panda$unref$panda$core$Object($tmp720);
                                panda$core$String* $tmp727 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s718), &$s726);
                                $tmp725 = $tmp727;
                                panda$core$MutableString$append$panda$core$String(result687, $tmp725);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp725));
                            }
                            $tmp717 = -1;
                            goto $l715;
                            $l715:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s718));
                            s718 = NULL;
                            switch ($tmp717) {
                                case -1: goto $l728;
                            }
                            $l728:;
                        }
                        goto $l707;
                        $l708:;
                    }
                    $tmp699 = -1;
                    goto $l697;
                    $l697:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$264$17700));
                    Iter$264$17700 = NULL;
                    switch ($tmp699) {
                        case -1: goto $l729;
                    }
                    $l729:;
                }
                panda$core$String* $tmp733 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s732, ((panda$core$Object*) test682));
                $tmp731 = $tmp733;
                panda$core$String* $tmp735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp731, &$s734);
                $tmp730 = $tmp735;
                panda$core$MutableString$append$panda$core$String(result687, $tmp730);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp730));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp731));
                panda$core$String* $tmp738 = panda$core$MutableString$finish$R$panda$core$String(result687);
                $tmp737 = $tmp738;
                $tmp736 = $tmp737;
                $returnValue250 = $tmp736;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp736));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp737));
                $tmp686 = 0;
                goto $l684;
                $l739:;
                $tmp242 = 19;
                goto $l240;
                $l740:;
                return $returnValue250;
            }
            $l684:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result687));
            result687 = NULL;
            switch ($tmp686) {
                case 0: goto $l739;
            }
            $l742:;
        }
        }
        else {
        panda$core$Bit $tmp743 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp743.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp745 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 16));
            base744 = *$tmp745;
            panda$core$String** $tmp747 = ((panda$core$String**) ((char*) $match$180_9243->$data + 24));
            field746 = *$tmp747;
            panda$core$String* $tmp754 = (($fn753) base744->$class->vtable[0])(base744);
            $tmp752 = $tmp754;
            panda$core$String* $tmp756 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp752, &$s755);
            $tmp751 = $tmp756;
            panda$core$String* $tmp757 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp751, field746);
            $tmp750 = $tmp757;
            panda$core$String* $tmp759 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp750, &$s758);
            $tmp749 = $tmp759;
            $tmp748 = $tmp749;
            $returnValue250 = $tmp748;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp748));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp749));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp750));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp751));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp752));
            $tmp242 = 20;
            goto $l240;
            $l760:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp762 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp762.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp764 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 16));
            dc763 = *$tmp764;
            panda$collections$ImmutableArray** $tmp766 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 24));
            annotations765 = *$tmp766;
            org$pandalanguage$pandac$ASTNode** $tmp768 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 32));
            decl767 = *$tmp768;
            int $tmp771;
            {
                panda$core$MutableString* $tmp775 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp775);
                $tmp774 = $tmp775;
                $tmp773 = $tmp774;
                result772 = $tmp773;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp773));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp774));
                if (((panda$core$Bit) { dc763 != NULL }).value) {
                {
                    panda$core$String* $tmp778 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc763), &$s777);
                    $tmp776 = $tmp778;
                    panda$core$MutableString$append$panda$core$String(result772, $tmp776);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp776));
                }
                }
                {
                    int $tmp781;
                    {
                        ITable* $tmp785 = ((panda$collections$Iterable*) annotations765)->$class->itable;
                        while ($tmp785->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp785 = $tmp785->next;
                        }
                        $fn787 $tmp786 = $tmp785->methods[0];
                        panda$collections$Iterator* $tmp788 = $tmp786(((panda$collections$Iterable*) annotations765));
                        $tmp784 = $tmp788;
                        $tmp783 = $tmp784;
                        Iter$276$17782 = $tmp783;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp783));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp784));
                        $l789:;
                        ITable* $tmp792 = Iter$276$17782->$class->itable;
                        while ($tmp792->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp792 = $tmp792->next;
                        }
                        $fn794 $tmp793 = $tmp792->methods[0];
                        panda$core$Bit $tmp795 = $tmp793(Iter$276$17782);
                        panda$core$Bit $tmp796 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp795);
                        bool $tmp791 = $tmp796.value;
                        if (!$tmp791) goto $l790;
                        {
                            int $tmp799;
                            {
                                ITable* $tmp803 = Iter$276$17782->$class->itable;
                                while ($tmp803->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp803 = $tmp803->next;
                                }
                                $fn805 $tmp804 = $tmp803->methods[1];
                                panda$core$Object* $tmp806 = $tmp804(Iter$276$17782);
                                $tmp802 = $tmp806;
                                $tmp801 = ((org$pandalanguage$pandac$ASTNode*) $tmp802);
                                a800 = $tmp801;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp801));
                                panda$core$Panda$unref$panda$core$Object($tmp802);
                                panda$core$String* $tmp809 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a800), &$s808);
                                $tmp807 = $tmp809;
                                panda$core$MutableString$append$panda$core$String(result772, $tmp807);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp807));
                            }
                            $tmp799 = -1;
                            goto $l797;
                            $l797:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a800));
                            a800 = NULL;
                            switch ($tmp799) {
                                case -1: goto $l810;
                            }
                            $l810:;
                        }
                        goto $l789;
                        $l790:;
                    }
                    $tmp781 = -1;
                    goto $l779;
                    $l779:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$276$17782));
                    Iter$276$17782 = NULL;
                    switch ($tmp781) {
                        case -1: goto $l811;
                    }
                    $l811:;
                }
                panda$core$MutableString$append$panda$core$Object(result772, ((panda$core$Object*) decl767));
                panda$core$String* $tmp814 = panda$core$MutableString$finish$R$panda$core$String(result772);
                $tmp813 = $tmp814;
                $tmp812 = $tmp813;
                $returnValue250 = $tmp812;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp812));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp813));
                $tmp771 = 0;
                goto $l769;
                $l815:;
                $tmp242 = 21;
                goto $l240;
                $l816:;
                return $returnValue250;
            }
            $l769:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result772));
            result772 = NULL;
            switch ($tmp771) {
                case 0: goto $l815;
            }
            $l818:;
        }
        }
        else {
        panda$core$Bit $tmp819 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp819.value) {
        {
            panda$collections$ImmutableArray** $tmp821 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 0));
            entries820 = *$tmp821;
            int $tmp824;
            {
                panda$core$MutableString* $tmp828 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp828);
                $tmp827 = $tmp828;
                $tmp826 = $tmp827;
                result825 = $tmp826;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp826));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp827));
                {
                    int $tmp831;
                    {
                        ITable* $tmp835 = ((panda$collections$Iterable*) entries820)->$class->itable;
                        while ($tmp835->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp835 = $tmp835->next;
                        }
                        $fn837 $tmp836 = $tmp835->methods[0];
                        panda$collections$Iterator* $tmp838 = $tmp836(((panda$collections$Iterable*) entries820));
                        $tmp834 = $tmp838;
                        $tmp833 = $tmp834;
                        Iter$283$17832 = $tmp833;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp833));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp834));
                        $l839:;
                        ITable* $tmp842 = Iter$283$17832->$class->itable;
                        while ($tmp842->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp842 = $tmp842->next;
                        }
                        $fn844 $tmp843 = $tmp842->methods[0];
                        panda$core$Bit $tmp845 = $tmp843(Iter$283$17832);
                        panda$core$Bit $tmp846 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp845);
                        bool $tmp841 = $tmp846.value;
                        if (!$tmp841) goto $l840;
                        {
                            int $tmp849;
                            {
                                ITable* $tmp853 = Iter$283$17832->$class->itable;
                                while ($tmp853->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp853 = $tmp853->next;
                                }
                                $fn855 $tmp854 = $tmp853->methods[1];
                                panda$core$Object* $tmp856 = $tmp854(Iter$283$17832);
                                $tmp852 = $tmp856;
                                $tmp851 = ((org$pandalanguage$pandac$ASTNode*) $tmp852);
                                e850 = $tmp851;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp851));
                                panda$core$Panda$unref$panda$core$Object($tmp852);
                                panda$core$String* $tmp859 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) e850), &$s858);
                                $tmp857 = $tmp859;
                                panda$core$MutableString$append$panda$core$String(result825, $tmp857);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp857));
                            }
                            $tmp849 = -1;
                            goto $l847;
                            $l847:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e850));
                            e850 = NULL;
                            switch ($tmp849) {
                                case -1: goto $l860;
                            }
                            $l860:;
                        }
                        goto $l839;
                        $l840:;
                    }
                    $tmp831 = -1;
                    goto $l829;
                    $l829:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$283$17832));
                    Iter$283$17832 = NULL;
                    switch ($tmp831) {
                        case -1: goto $l861;
                    }
                    $l861:;
                }
                panda$core$String* $tmp864 = panda$core$MutableString$finish$R$panda$core$String(result825);
                $tmp863 = $tmp864;
                $tmp862 = $tmp863;
                $returnValue250 = $tmp862;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp862));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp863));
                $tmp824 = 0;
                goto $l822;
                $l865:;
                $tmp242 = 22;
                goto $l240;
                $l866:;
                return $returnValue250;
            }
            $l822:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result825));
            result825 = NULL;
            switch ($tmp824) {
                case 0: goto $l865;
            }
            $l868:;
        }
        }
        else {
        panda$core$Bit $tmp869 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp869.value) {
        {
            panda$core$String** $tmp871 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            label870 = *$tmp871;
            org$pandalanguage$pandac$ASTNode** $tmp873 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 24));
            target872 = *$tmp873;
            org$pandalanguage$pandac$ASTNode** $tmp875 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 32));
            list874 = *$tmp875;
            panda$collections$ImmutableArray** $tmp877 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 40));
            statements876 = *$tmp877;
            int $tmp880;
            {
                panda$core$MutableString* $tmp884 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp884);
                $tmp883 = $tmp884;
                $tmp882 = $tmp883;
                result881 = $tmp882;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp882));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp883));
                if (((panda$core$Bit) { label870 != NULL }).value) {
                {
                    panda$core$String* $tmp887 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(label870, &$s886);
                    $tmp885 = $tmp887;
                    panda$core$MutableString$append$panda$core$String(result881, $tmp885);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp885));
                }
                }
                panda$core$String* $tmp893 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s892, ((panda$core$Object*) target872));
                $tmp891 = $tmp893;
                panda$core$String* $tmp895 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp891, &$s894);
                $tmp890 = $tmp895;
                panda$core$String* $tmp896 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp890, ((panda$core$Object*) list874));
                $tmp889 = $tmp896;
                panda$core$String* $tmp898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp889, &$s897);
                $tmp888 = $tmp898;
                panda$core$MutableString$append$panda$core$String(result881, $tmp888);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp888));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp889));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp890));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp891));
                {
                    int $tmp901;
                    {
                        ITable* $tmp905 = ((panda$collections$Iterable*) statements876)->$class->itable;
                        while ($tmp905->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp905 = $tmp905->next;
                        }
                        $fn907 $tmp906 = $tmp905->methods[0];
                        panda$collections$Iterator* $tmp908 = $tmp906(((panda$collections$Iterable*) statements876));
                        $tmp904 = $tmp908;
                        $tmp903 = $tmp904;
                        Iter$293$17902 = $tmp903;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp903));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp904));
                        $l909:;
                        ITable* $tmp912 = Iter$293$17902->$class->itable;
                        while ($tmp912->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp912 = $tmp912->next;
                        }
                        $fn914 $tmp913 = $tmp912->methods[0];
                        panda$core$Bit $tmp915 = $tmp913(Iter$293$17902);
                        panda$core$Bit $tmp916 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp915);
                        bool $tmp911 = $tmp916.value;
                        if (!$tmp911) goto $l910;
                        {
                            int $tmp919;
                            {
                                ITable* $tmp923 = Iter$293$17902->$class->itable;
                                while ($tmp923->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp923 = $tmp923->next;
                                }
                                $fn925 $tmp924 = $tmp923->methods[1];
                                panda$core$Object* $tmp926 = $tmp924(Iter$293$17902);
                                $tmp922 = $tmp926;
                                $tmp921 = ((org$pandalanguage$pandac$ASTNode*) $tmp922);
                                s920 = $tmp921;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp921));
                                panda$core$Panda$unref$panda$core$Object($tmp922);
                                panda$core$String* $tmp929 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s920), &$s928);
                                $tmp927 = $tmp929;
                                panda$core$MutableString$append$panda$core$String(result881, $tmp927);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp927));
                            }
                            $tmp919 = -1;
                            goto $l917;
                            $l917:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s920));
                            s920 = NULL;
                            switch ($tmp919) {
                                case -1: goto $l930;
                            }
                            $l930:;
                        }
                        goto $l909;
                        $l910:;
                    }
                    $tmp901 = -1;
                    goto $l899;
                    $l899:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$293$17902));
                    Iter$293$17902 = NULL;
                    switch ($tmp901) {
                        case -1: goto $l931;
                    }
                    $l931:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp932, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result881, $tmp932);
                panda$core$String* $tmp935 = panda$core$MutableString$finish$R$panda$core$String(result881);
                $tmp934 = $tmp935;
                $tmp933 = $tmp934;
                $returnValue250 = $tmp933;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp933));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp934));
                $tmp880 = 0;
                goto $l878;
                $l936:;
                $tmp242 = 23;
                goto $l240;
                $l937:;
                return $returnValue250;
            }
            $l878:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result881));
            result881 = NULL;
            switch ($tmp880) {
                case 0: goto $l936;
            }
            $l939:;
        }
        }
        else {
        panda$core$Bit $tmp940 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp940.value) {
        {
            panda$core$String** $tmp942 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            name941 = *$tmp942;
            panda$collections$ImmutableArray** $tmp944 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 24));
            subtypes943 = *$tmp944;
            panda$core$String* $tmp950 = panda$core$String$convert$R$panda$core$String(name941);
            $tmp949 = $tmp950;
            panda$core$String* $tmp952 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp949, &$s951);
            $tmp948 = $tmp952;
            ITable* $tmp954 = ((panda$collections$ListView*) subtypes943)->$class->itable;
            while ($tmp954->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                $tmp954 = $tmp954->next;
            }
            $fn956 $tmp955 = $tmp954->methods[1];
            panda$core$String* $tmp957 = $tmp955(((panda$collections$ListView*) subtypes943));
            $tmp953 = $tmp957;
            panda$core$String* $tmp958 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp948, $tmp953);
            $tmp947 = $tmp958;
            panda$core$String* $tmp960 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp947, &$s959);
            $tmp946 = $tmp960;
            $tmp945 = $tmp946;
            $returnValue250 = $tmp945;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp945));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp946));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp947));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp953));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp948));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp949));
            $tmp242 = 24;
            goto $l240;
            $l961:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp963 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp963.value) {
        {
            panda$core$String** $tmp965 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            name964 = *$tmp965;
            $tmp966 = name964;
            $returnValue250 = $tmp966;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp966));
            $tmp242 = 25;
            goto $l240;
            $l967:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp969 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp969.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp971 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 16));
            test970 = *$tmp971;
            panda$collections$ImmutableArray** $tmp973 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 24));
            ifTrue972 = *$tmp973;
            org$pandalanguage$pandac$ASTNode** $tmp975 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 32));
            ifFalse974 = *$tmp975;
            int $tmp978;
            {
                panda$core$MutableString* $tmp982 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp986 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s985, ((panda$core$Object*) test970));
                $tmp984 = $tmp986;
                panda$core$String* $tmp988 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp984, &$s987);
                $tmp983 = $tmp988;
                panda$core$MutableString$init$panda$core$String($tmp982, $tmp983);
                $tmp981 = $tmp982;
                $tmp980 = $tmp981;
                result979 = $tmp980;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp980));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp981));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp983));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp984));
                {
                    int $tmp991;
                    {
                        ITable* $tmp995 = ((panda$collections$Iterable*) ifTrue972)->$class->itable;
                        while ($tmp995->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp995 = $tmp995->next;
                        }
                        $fn997 $tmp996 = $tmp995->methods[0];
                        panda$collections$Iterator* $tmp998 = $tmp996(((panda$collections$Iterable*) ifTrue972));
                        $tmp994 = $tmp998;
                        $tmp993 = $tmp994;
                        Iter$304$17992 = $tmp993;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp993));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp994));
                        $l999:;
                        ITable* $tmp1002 = Iter$304$17992->$class->itable;
                        while ($tmp1002->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1002 = $tmp1002->next;
                        }
                        $fn1004 $tmp1003 = $tmp1002->methods[0];
                        panda$core$Bit $tmp1005 = $tmp1003(Iter$304$17992);
                        panda$core$Bit $tmp1006 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1005);
                        bool $tmp1001 = $tmp1006.value;
                        if (!$tmp1001) goto $l1000;
                        {
                            int $tmp1009;
                            {
                                ITable* $tmp1013 = Iter$304$17992->$class->itable;
                                while ($tmp1013->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1013 = $tmp1013->next;
                                }
                                $fn1015 $tmp1014 = $tmp1013->methods[1];
                                panda$core$Object* $tmp1016 = $tmp1014(Iter$304$17992);
                                $tmp1012 = $tmp1016;
                                $tmp1011 = ((org$pandalanguage$pandac$ASTNode*) $tmp1012);
                                s1010 = $tmp1011;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1011));
                                panda$core$Panda$unref$panda$core$Object($tmp1012);
                                panda$core$String* $tmp1019 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1010), &$s1018);
                                $tmp1017 = $tmp1019;
                                panda$core$MutableString$append$panda$core$String(result979, $tmp1017);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1017));
                            }
                            $tmp1009 = -1;
                            goto $l1007;
                            $l1007:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1010));
                            s1010 = NULL;
                            switch ($tmp1009) {
                                case -1: goto $l1020;
                            }
                            $l1020:;
                        }
                        goto $l999;
                        $l1000:;
                    }
                    $tmp991 = -1;
                    goto $l989;
                    $l989:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$304$17992));
                    Iter$304$17992 = NULL;
                    switch ($tmp991) {
                        case -1: goto $l1021;
                    }
                    $l1021:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1022, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result979, $tmp1022);
                if (((panda$core$Bit) { ifFalse974 != NULL }).value) {
                {
                    panda$core$String* $tmp1026 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1025, ((panda$core$Object*) ifFalse974));
                    $tmp1024 = $tmp1026;
                    panda$core$String* $tmp1028 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1024, &$s1027);
                    $tmp1023 = $tmp1028;
                    panda$core$MutableString$append$panda$core$String(result979, $tmp1023);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1023));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1024));
                }
                }
                panda$core$String* $tmp1031 = panda$core$MutableString$finish$R$panda$core$String(result979);
                $tmp1030 = $tmp1031;
                $tmp1029 = $tmp1030;
                $returnValue250 = $tmp1029;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1029));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1030));
                $tmp978 = 0;
                goto $l976;
                $l1032:;
                $tmp242 = 26;
                goto $l240;
                $l1033:;
                return $returnValue250;
            }
            $l976:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result979));
            result979 = NULL;
            switch ($tmp978) {
                case 0: goto $l1032;
            }
            $l1035:;
        }
        }
        else {
        panda$core$Bit $tmp1036 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1036.value) {
        {
            panda$core$UInt64* $tmp1038 = ((panda$core$UInt64*) ((char*) $match$180_9243->$data + 16));
            value1037 = *$tmp1038;
            panda$core$String* $tmp1041 = panda$core$UInt64$convert$R$panda$core$String(value1037);
            $tmp1040 = $tmp1041;
            $tmp1039 = $tmp1040;
            $returnValue250 = $tmp1039;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1039));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1040));
            $tmp242 = 27;
            goto $l240;
            $l1042:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1044 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1044.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1046 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$180_9243->$data + 0));
            ir1045 = *$tmp1046;
            panda$core$String* $tmp1050 = (($fn1049) ir1045->$class->vtable[0])(ir1045);
            $tmp1048 = $tmp1050;
            $tmp1047 = $tmp1048;
            $returnValue250 = $tmp1047;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1047));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1048));
            $tmp242 = 28;
            goto $l240;
            $l1051:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1053 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1053.value) {
        {
            panda$core$String** $tmp1055 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            label1054 = *$tmp1055;
            panda$collections$ImmutableArray** $tmp1057 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 24));
            statements1056 = *$tmp1057;
            int $tmp1060;
            {
                panda$core$MutableString* $tmp1064 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1064);
                $tmp1063 = $tmp1064;
                $tmp1062 = $tmp1063;
                result1061 = $tmp1062;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1062));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1063));
                if (((panda$core$Bit) { label1054 != NULL }).value) {
                {
                    panda$core$String* $tmp1067 = panda$core$String$convert$R$panda$core$String(label1054);
                    $tmp1066 = $tmp1067;
                    panda$core$String* $tmp1069 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1066, &$s1068);
                    $tmp1065 = $tmp1069;
                    panda$core$MutableString$append$panda$core$String(result1061, $tmp1065);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1065));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1066));
                }
                }
                panda$core$MutableString$append$panda$core$String(result1061, &$s1070);
                {
                    int $tmp1073;
                    {
                        ITable* $tmp1077 = ((panda$collections$Iterable*) statements1056)->$class->itable;
                        while ($tmp1077->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1077 = $tmp1077->next;
                        }
                        $fn1079 $tmp1078 = $tmp1077->methods[0];
                        panda$collections$Iterator* $tmp1080 = $tmp1078(((panda$collections$Iterable*) statements1056));
                        $tmp1076 = $tmp1080;
                        $tmp1075 = $tmp1076;
                        Iter$322$171074 = $tmp1075;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1075));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1076));
                        $l1081:;
                        ITable* $tmp1084 = Iter$322$171074->$class->itable;
                        while ($tmp1084->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1084 = $tmp1084->next;
                        }
                        $fn1086 $tmp1085 = $tmp1084->methods[0];
                        panda$core$Bit $tmp1087 = $tmp1085(Iter$322$171074);
                        panda$core$Bit $tmp1088 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1087);
                        bool $tmp1083 = $tmp1088.value;
                        if (!$tmp1083) goto $l1082;
                        {
                            int $tmp1091;
                            {
                                ITable* $tmp1095 = Iter$322$171074->$class->itable;
                                while ($tmp1095->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1095 = $tmp1095->next;
                                }
                                $fn1097 $tmp1096 = $tmp1095->methods[1];
                                panda$core$Object* $tmp1098 = $tmp1096(Iter$322$171074);
                                $tmp1094 = $tmp1098;
                                $tmp1093 = ((org$pandalanguage$pandac$ASTNode*) $tmp1094);
                                s1092 = $tmp1093;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1093));
                                panda$core$Panda$unref$panda$core$Object($tmp1094);
                                panda$core$String* $tmp1101 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1092), &$s1100);
                                $tmp1099 = $tmp1101;
                                panda$core$MutableString$append$panda$core$String(result1061, $tmp1099);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1099));
                            }
                            $tmp1091 = -1;
                            goto $l1089;
                            $l1089:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1092));
                            s1092 = NULL;
                            switch ($tmp1091) {
                                case -1: goto $l1102;
                            }
                            $l1102:;
                        }
                        goto $l1081;
                        $l1082:;
                    }
                    $tmp1073 = -1;
                    goto $l1071;
                    $l1071:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$322$171074));
                    Iter$322$171074 = NULL;
                    switch ($tmp1073) {
                        case -1: goto $l1103;
                    }
                    $l1103:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1104, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1061, $tmp1104);
                panda$core$String* $tmp1107 = panda$core$MutableString$finish$R$panda$core$String(result1061);
                $tmp1106 = $tmp1107;
                $tmp1105 = $tmp1106;
                $returnValue250 = $tmp1105;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1105));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1106));
                $tmp1060 = 0;
                goto $l1058;
                $l1108:;
                $tmp242 = 29;
                goto $l240;
                $l1109:;
                return $returnValue250;
            }
            $l1058:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1061));
            result1061 = NULL;
            switch ($tmp1060) {
                case 0: goto $l1108;
            }
            $l1111:;
        }
        }
        else {
        panda$core$Bit $tmp1112 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1112.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1114 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 16));
            value1113 = *$tmp1114;
            panda$collections$ImmutableArray** $tmp1116 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 24));
            whens1115 = *$tmp1116;
            panda$collections$ImmutableArray** $tmp1118 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 32));
            other1117 = *$tmp1118;
            int $tmp1121;
            {
                panda$core$MutableString* $tmp1125 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1129 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1128, ((panda$core$Object*) value1113));
                $tmp1127 = $tmp1129;
                panda$core$String* $tmp1131 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1127, &$s1130);
                $tmp1126 = $tmp1131;
                panda$core$MutableString$init$panda$core$String($tmp1125, $tmp1126);
                $tmp1124 = $tmp1125;
                $tmp1123 = $tmp1124;
                result1122 = $tmp1123;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1123));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1124));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1126));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1127));
                {
                    int $tmp1134;
                    {
                        ITable* $tmp1138 = ((panda$collections$Iterable*) whens1115)->$class->itable;
                        while ($tmp1138->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1138 = $tmp1138->next;
                        }
                        $fn1140 $tmp1139 = $tmp1138->methods[0];
                        panda$collections$Iterator* $tmp1141 = $tmp1139(((panda$collections$Iterable*) whens1115));
                        $tmp1137 = $tmp1141;
                        $tmp1136 = $tmp1137;
                        Iter$329$171135 = $tmp1136;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1136));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1137));
                        $l1142:;
                        ITable* $tmp1145 = Iter$329$171135->$class->itable;
                        while ($tmp1145->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1145 = $tmp1145->next;
                        }
                        $fn1147 $tmp1146 = $tmp1145->methods[0];
                        panda$core$Bit $tmp1148 = $tmp1146(Iter$329$171135);
                        panda$core$Bit $tmp1149 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1148);
                        bool $tmp1144 = $tmp1149.value;
                        if (!$tmp1144) goto $l1143;
                        {
                            int $tmp1152;
                            {
                                ITable* $tmp1156 = Iter$329$171135->$class->itable;
                                while ($tmp1156->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1156 = $tmp1156->next;
                                }
                                $fn1158 $tmp1157 = $tmp1156->methods[1];
                                panda$core$Object* $tmp1159 = $tmp1157(Iter$329$171135);
                                $tmp1155 = $tmp1159;
                                $tmp1154 = ((org$pandalanguage$pandac$ASTNode*) $tmp1155);
                                w1153 = $tmp1154;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1154));
                                panda$core$Panda$unref$panda$core$Object($tmp1155);
                                panda$core$String* $tmp1162 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w1153), &$s1161);
                                $tmp1160 = $tmp1162;
                                panda$core$MutableString$append$panda$core$String(result1122, $tmp1160);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1160));
                            }
                            $tmp1152 = -1;
                            goto $l1150;
                            $l1150:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w1153));
                            w1153 = NULL;
                            switch ($tmp1152) {
                                case -1: goto $l1163;
                            }
                            $l1163:;
                        }
                        goto $l1142;
                        $l1143:;
                    }
                    $tmp1134 = -1;
                    goto $l1132;
                    $l1132:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$329$171135));
                    Iter$329$171135 = NULL;
                    switch ($tmp1134) {
                        case -1: goto $l1164;
                    }
                    $l1164:;
                }
                if (((panda$core$Bit) { other1117 != NULL }).value) {
                {
                    panda$core$String* $tmp1167 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) other1117), &$s1166);
                    $tmp1165 = $tmp1167;
                    panda$core$MutableString$append$panda$core$String(result1122, $tmp1165);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1165));
                }
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1168, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1122, $tmp1168);
                panda$core$String* $tmp1171 = panda$core$MutableString$finish$R$panda$core$String(result1122);
                $tmp1170 = $tmp1171;
                $tmp1169 = $tmp1170;
                $returnValue250 = $tmp1169;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1169));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1170));
                $tmp1121 = 0;
                goto $l1119;
                $l1172:;
                $tmp242 = 30;
                goto $l240;
                $l1173:;
                return $returnValue250;
            }
            $l1119:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1122));
            result1122 = NULL;
            switch ($tmp1121) {
                case 0: goto $l1172;
            }
            $l1175:;
        }
        }
        else {
        panda$core$Bit $tmp1176 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1176.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1178 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 16));
            dc1177 = *$tmp1178;
            panda$collections$ImmutableArray** $tmp1180 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 24));
            annotations1179 = *$tmp1180;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1182 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$180_9243->$data + 32));
            kind1181 = *$tmp1182;
            panda$core$String** $tmp1184 = ((panda$core$String**) ((char*) $match$180_9243->$data + 40));
            name1183 = *$tmp1184;
            panda$collections$ImmutableArray** $tmp1186 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 48));
            parameters1185 = *$tmp1186;
            org$pandalanguage$pandac$ASTNode** $tmp1188 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 56));
            returnType1187 = *$tmp1188;
            panda$collections$ImmutableArray** $tmp1190 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 64));
            statements1189 = *$tmp1190;
            int $tmp1193;
            {
                panda$core$MutableString* $tmp1197 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1197);
                $tmp1196 = $tmp1197;
                $tmp1195 = $tmp1196;
                result1194 = $tmp1195;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1195));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1196));
                if (((panda$core$Bit) { dc1177 != NULL }).value) {
                {
                    panda$core$String* $tmp1200 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc1177), &$s1199);
                    $tmp1198 = $tmp1200;
                    panda$core$MutableString$append$panda$core$String(result1194, $tmp1198);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1198));
                }
                }
                {
                    int $tmp1203;
                    {
                        ITable* $tmp1207 = ((panda$collections$Iterable*) annotations1179)->$class->itable;
                        while ($tmp1207->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1207 = $tmp1207->next;
                        }
                        $fn1209 $tmp1208 = $tmp1207->methods[0];
                        panda$collections$Iterator* $tmp1210 = $tmp1208(((panda$collections$Iterable*) annotations1179));
                        $tmp1206 = $tmp1210;
                        $tmp1205 = $tmp1206;
                        Iter$342$171204 = $tmp1205;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1205));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1206));
                        $l1211:;
                        ITable* $tmp1214 = Iter$342$171204->$class->itable;
                        while ($tmp1214->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1214 = $tmp1214->next;
                        }
                        $fn1216 $tmp1215 = $tmp1214->methods[0];
                        panda$core$Bit $tmp1217 = $tmp1215(Iter$342$171204);
                        panda$core$Bit $tmp1218 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1217);
                        bool $tmp1213 = $tmp1218.value;
                        if (!$tmp1213) goto $l1212;
                        {
                            int $tmp1221;
                            {
                                ITable* $tmp1225 = Iter$342$171204->$class->itable;
                                while ($tmp1225->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1225 = $tmp1225->next;
                                }
                                $fn1227 $tmp1226 = $tmp1225->methods[1];
                                panda$core$Object* $tmp1228 = $tmp1226(Iter$342$171204);
                                $tmp1224 = $tmp1228;
                                $tmp1223 = ((org$pandalanguage$pandac$ASTNode*) $tmp1224);
                                a1222 = $tmp1223;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1223));
                                panda$core$Panda$unref$panda$core$Object($tmp1224);
                                panda$core$String* $tmp1231 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a1222), &$s1230);
                                $tmp1229 = $tmp1231;
                                panda$core$MutableString$append$panda$core$String(result1194, $tmp1229);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1229));
                            }
                            $tmp1221 = -1;
                            goto $l1219;
                            $l1219:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1222));
                            a1222 = NULL;
                            switch ($tmp1221) {
                                case -1: goto $l1232;
                            }
                            $l1232:;
                        }
                        goto $l1211;
                        $l1212:;
                    }
                    $tmp1203 = -1;
                    goto $l1201;
                    $l1201:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$342$171204));
                    Iter$342$171204 = NULL;
                    switch ($tmp1203) {
                        case -1: goto $l1233;
                    }
                    $l1233:;
                }
                {
                    $match$345_171234 = kind1181;
                    panda$core$Bit $tmp1235 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$345_171234.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp1235.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1194, &$s1236);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$345_171234.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp1237.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1194, &$s1238);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$345_171234.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp1239.value) {
                    {
                    }
                    }
                    }
                    }
                }
                panda$core$String* $tmp1244 = panda$core$String$convert$R$panda$core$String(name1183);
                $tmp1243 = $tmp1244;
                panda$core$String* $tmp1246 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1243, &$s1245);
                $tmp1242 = $tmp1246;
                ITable* $tmp1248 = ((panda$collections$ListView*) parameters1185)->$class->itable;
                while ($tmp1248->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1248 = $tmp1248->next;
                }
                $fn1250 $tmp1249 = $tmp1248->methods[1];
                panda$core$String* $tmp1251 = $tmp1249(((panda$collections$ListView*) parameters1185));
                $tmp1247 = $tmp1251;
                panda$core$String* $tmp1252 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1242, $tmp1247);
                $tmp1241 = $tmp1252;
                panda$core$String* $tmp1254 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1241, &$s1253);
                $tmp1240 = $tmp1254;
                panda$core$MutableString$append$panda$core$String(result1194, $tmp1240);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1240));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1241));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1247));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1242));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1243));
                if (((panda$core$Bit) { returnType1187 != NULL }).value) {
                {
                    panda$core$String* $tmp1258 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1257, ((panda$core$Object*) returnType1187));
                    $tmp1256 = $tmp1258;
                    panda$core$String* $tmp1260 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1256, &$s1259);
                    $tmp1255 = $tmp1260;
                    panda$core$MutableString$append$panda$core$String(result1194, $tmp1255);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1255));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1256));
                }
                }
                if (((panda$core$Bit) { statements1189 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1194, &$s1261);
                    {
                        int $tmp1264;
                        {
                            ITable* $tmp1268 = ((panda$collections$Iterable*) statements1189)->$class->itable;
                            while ($tmp1268->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp1268 = $tmp1268->next;
                            }
                            $fn1270 $tmp1269 = $tmp1268->methods[0];
                            panda$collections$Iterator* $tmp1271 = $tmp1269(((panda$collections$Iterable*) statements1189));
                            $tmp1267 = $tmp1271;
                            $tmp1266 = $tmp1267;
                            Iter$356$211265 = $tmp1266;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1266));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1267));
                            $l1272:;
                            ITable* $tmp1275 = Iter$356$211265->$class->itable;
                            while ($tmp1275->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1275 = $tmp1275->next;
                            }
                            $fn1277 $tmp1276 = $tmp1275->methods[0];
                            panda$core$Bit $tmp1278 = $tmp1276(Iter$356$211265);
                            panda$core$Bit $tmp1279 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1278);
                            bool $tmp1274 = $tmp1279.value;
                            if (!$tmp1274) goto $l1273;
                            {
                                int $tmp1282;
                                {
                                    ITable* $tmp1286 = Iter$356$211265->$class->itable;
                                    while ($tmp1286->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp1286 = $tmp1286->next;
                                    }
                                    $fn1288 $tmp1287 = $tmp1286->methods[1];
                                    panda$core$Object* $tmp1289 = $tmp1287(Iter$356$211265);
                                    $tmp1285 = $tmp1289;
                                    $tmp1284 = ((org$pandalanguage$pandac$ASTNode*) $tmp1285);
                                    s1283 = $tmp1284;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1284));
                                    panda$core$Panda$unref$panda$core$Object($tmp1285);
                                    panda$core$String* $tmp1292 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1283), &$s1291);
                                    $tmp1290 = $tmp1292;
                                    panda$core$MutableString$append$panda$core$String(result1194, $tmp1290);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1290));
                                }
                                $tmp1282 = -1;
                                goto $l1280;
                                $l1280:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1283));
                                s1283 = NULL;
                                switch ($tmp1282) {
                                    case -1: goto $l1293;
                                }
                                $l1293:;
                            }
                            goto $l1272;
                            $l1273:;
                        }
                        $tmp1264 = -1;
                        goto $l1262;
                        $l1262:;
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$356$211265));
                        Iter$356$211265 = NULL;
                        switch ($tmp1264) {
                            case -1: goto $l1294;
                        }
                        $l1294:;
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp1295, ((panda$core$UInt8) { 125 }));
                    panda$core$MutableString$append$panda$core$Char8(result1194, $tmp1295);
                }
                }
                panda$core$String* $tmp1298 = panda$core$MutableString$finish$R$panda$core$String(result1194);
                $tmp1297 = $tmp1298;
                $tmp1296 = $tmp1297;
                $returnValue250 = $tmp1296;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1296));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1297));
                $tmp1193 = 0;
                goto $l1191;
                $l1299:;
                $tmp242 = 31;
                goto $l240;
                $l1300:;
                return $returnValue250;
            }
            $l1191:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1194));
            result1194 = NULL;
            switch ($tmp1193) {
                case 0: goto $l1299;
            }
            $l1302:;
        }
        }
        else {
        panda$core$Bit $tmp1303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 27 }));
        if ($tmp1303.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1305 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$180_9243->$data + 16));
            kind1304 = *$tmp1305;
            panda$collections$ImmutableArray** $tmp1307 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 24));
            paramTypes1306 = *$tmp1307;
            org$pandalanguage$pandac$ASTNode** $tmp1309 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 32));
            returnType1308 = *$tmp1309;
            int $tmp1312;
            {
                memset(&yield1313, 0, sizeof(yield1313));
                {
                    $match$364_171314 = kind1304;
                    panda$core$Bit $tmp1315 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364_171314.$rawValue, ((panda$core$Int64) { 90 }));
                    if ($tmp1315.value) {
                    {
                        {
                            $tmp1316 = yield1313;
                            $tmp1317 = &$s1318;
                            yield1313 = $tmp1317;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1317));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1316));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp1319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364_171314.$rawValue, ((panda$core$Int64) { 91 }));
                    if ($tmp1319.value) {
                    {
                        {
                            $tmp1320 = yield1313;
                            $tmp1321 = &$s1322;
                            yield1313 = $tmp1321;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1321));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1320));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp1323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364_171314.$rawValue, ((panda$core$Int64) { 92 }));
                    if ($tmp1323.value) {
                    {
                        {
                            $tmp1324 = yield1313;
                            $tmp1325 = &$s1326;
                            yield1313 = $tmp1325;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1325));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1324));
                        }
                    }
                    }
                    else {
                    panda$core$Bit $tmp1327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$364_171314.$rawValue, ((panda$core$Int64) { 93 }));
                    if ($tmp1327.value) {
                    {
                        {
                            $tmp1328 = yield1313;
                            $tmp1329 = &$s1330;
                            yield1313 = $tmp1329;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1329));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1328));
                        }
                    }
                    }
                    }
                    }
                    }
                }
                ITable* $tmp1339 = ((panda$collections$ListView*) paramTypes1306)->$class->itable;
                while ($tmp1339->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1339 = $tmp1339->next;
                }
                $fn1341 $tmp1340 = $tmp1339->methods[1];
                panda$core$String* $tmp1342 = $tmp1340(((panda$collections$ListView*) paramTypes1306));
                $tmp1338 = $tmp1342;
                panda$core$String* $tmp1343 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1337, $tmp1338);
                $tmp1336 = $tmp1343;
                panda$core$String* $tmp1345 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1336, &$s1344);
                $tmp1335 = $tmp1345;
                panda$core$String* $tmp1346 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1335, yield1313);
                $tmp1334 = $tmp1346;
                panda$core$String* $tmp1348 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1334, &$s1347);
                $tmp1333 = $tmp1348;
                $tmp1332 = $tmp1333;
                partial1331 = $tmp1332;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1332));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1333));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1334));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1335));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1336));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1338));
                if (((panda$core$Bit) { returnType1308 != NULL }).value) {
                {
                    panda$core$String* $tmp1354 = panda$core$String$convert$R$panda$core$String(partial1331);
                    $tmp1353 = $tmp1354;
                    panda$core$String* $tmp1356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1353, &$s1355);
                    $tmp1352 = $tmp1356;
                    panda$core$String* $tmp1357 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1352, ((panda$core$Object*) returnType1308));
                    $tmp1351 = $tmp1357;
                    panda$core$String* $tmp1359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1351, &$s1358);
                    $tmp1350 = $tmp1359;
                    $tmp1349 = $tmp1350;
                    $returnValue250 = $tmp1349;
                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1349));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1350));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1351));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1352));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1353));
                    $tmp1312 = 0;
                    goto $l1310;
                    $l1360:;
                    $tmp242 = 32;
                    goto $l240;
                    $l1361:;
                    return $returnValue250;
                }
                }
                panda$core$String* $tmp1366 = panda$core$String$convert$R$panda$core$String(partial1331);
                $tmp1365 = $tmp1366;
                panda$core$String* $tmp1368 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1365, &$s1367);
                $tmp1364 = $tmp1368;
                $tmp1363 = $tmp1364;
                $returnValue250 = $tmp1363;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1363));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1364));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1365));
                $tmp1312 = 1;
                goto $l1310;
                $l1369:;
                $tmp242 = 33;
                goto $l240;
                $l1370:;
                return $returnValue250;
            }
            $l1310:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) yield1313));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) partial1331));
            partial1331 = NULL;
            switch ($tmp1312) {
                case 0: goto $l1360;
                case 1: goto $l1369;
            }
            $l1372:;
        }
        }
        else {
        panda$core$Bit $tmp1373 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1373.value) {
        {
            $tmp1374 = &$s1375;
            $returnValue250 = $tmp1374;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1374));
            $tmp242 = 34;
            goto $l240;
            $l1376:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1378 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1378.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1380 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 16));
            base1379 = *$tmp1380;
            panda$core$String* $tmp1384 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) base1379), &$s1383);
            $tmp1382 = $tmp1384;
            $tmp1381 = $tmp1382;
            $returnValue250 = $tmp1381;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1381));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1382));
            $tmp242 = 35;
            goto $l240;
            $l1385:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1387 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1387.value) {
        {
            panda$core$String** $tmp1389 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            name1388 = *$tmp1389;
            $tmp1390 = name1388;
            $returnValue250 = $tmp1390;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1390));
            $tmp242 = 36;
            goto $l240;
            $l1391:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1393.value) {
        {
            panda$core$String** $tmp1395 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            name1394 = *$tmp1395;
            org$pandalanguage$pandac$ASTNode** $tmp1397 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 24));
            type1396 = *$tmp1397;
            panda$core$String* $tmp1403 = panda$core$String$convert$R$panda$core$String(name1394);
            $tmp1402 = $tmp1403;
            panda$core$String* $tmp1405 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1402, &$s1404);
            $tmp1401 = $tmp1405;
            panda$core$String* $tmp1406 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1401, ((panda$core$Object*) type1396));
            $tmp1400 = $tmp1406;
            panda$core$String* $tmp1408 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1400, &$s1407);
            $tmp1399 = $tmp1408;
            $tmp1398 = $tmp1399;
            $returnValue250 = $tmp1398;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1398));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1399));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1400));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1401));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1402));
            $tmp242 = 37;
            goto $l240;
            $l1409:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1411 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1411.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1413 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$180_9243->$data + 16));
            kind1412 = *$tmp1413;
            org$pandalanguage$pandac$ASTNode** $tmp1415 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 24));
            base1414 = *$tmp1415;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1422;
            $tmp1422 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp1422->value = kind1412;
            $tmp1421 = ((panda$core$Object*) $tmp1422);
            panda$core$String* $tmp1424 = (($fn1423) $tmp1421->$class->vtable[0])($tmp1421);
            $tmp1420 = $tmp1424;
            panda$core$String* $tmp1426 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1420, &$s1425);
            $tmp1419 = $tmp1426;
            panda$core$String* $tmp1427 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1419, ((panda$core$Object*) base1414));
            $tmp1418 = $tmp1427;
            panda$core$String* $tmp1429 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1418, &$s1428);
            $tmp1417 = $tmp1429;
            $tmp1416 = $tmp1417;
            $returnValue250 = $tmp1416;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1416));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1417));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1418));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1419));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1420));
            panda$core$Panda$unref$panda$core$Object($tmp1421);
            $tmp242 = 38;
            goto $l240;
            $l1430:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1432.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1434 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 16));
            start1433 = *$tmp1434;
            org$pandalanguage$pandac$ASTNode** $tmp1436 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 24));
            end1435 = *$tmp1436;
            panda$core$Bit* $tmp1438 = ((panda$core$Bit*) ((char*) $match$180_9243->$data + 32));
            inclusive1437 = *$tmp1438;
            org$pandalanguage$pandac$ASTNode** $tmp1440 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 33));
            step1439 = *$tmp1440;
            int $tmp1443;
            {
                panda$core$MutableString* $tmp1447 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1447);
                $tmp1446 = $tmp1447;
                $tmp1445 = $tmp1446;
                result1444 = $tmp1445;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1445));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1446));
                if (((panda$core$Bit) { start1433 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result1444, ((panda$core$Object*) start1433));
                }
                }
                if (inclusive1437.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1444, &$s1448);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(result1444, &$s1449);
                }
                }
                if (((panda$core$Bit) { end1435 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result1444, ((panda$core$Object*) end1435));
                }
                }
                if (((panda$core$Bit) { step1439 != NULL }).value) {
                {
                    panda$core$String* $tmp1452 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1451, ((panda$core$Object*) step1439));
                    $tmp1450 = $tmp1452;
                    panda$core$MutableString$append$panda$core$String(result1444, $tmp1450);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1450));
                }
                }
                panda$core$String* $tmp1455 = panda$core$MutableString$finish$R$panda$core$String(result1444);
                $tmp1454 = $tmp1455;
                $tmp1453 = $tmp1454;
                $returnValue250 = $tmp1453;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1453));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1454));
                $tmp1443 = 0;
                goto $l1441;
                $l1456:;
                $tmp242 = 39;
                goto $l240;
                $l1457:;
                return $returnValue250;
            }
            $l1441:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1444));
            result1444 = NULL;
            switch ($tmp1443) {
                case 0: goto $l1456;
            }
            $l1459:;
        }
        }
        else {
        panda$core$Bit $tmp1460 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1460.value) {
        {
            panda$core$Real64* $tmp1462 = ((panda$core$Real64*) ((char*) $match$180_9243->$data + 16));
            value1461 = *$tmp1462;
            panda$core$String* $tmp1465 = panda$core$Real64$convert$R$panda$core$String(value1461);
            $tmp1464 = $tmp1465;
            $tmp1463 = $tmp1464;
            $returnValue250 = $tmp1463;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1463));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1464));
            $tmp242 = 40;
            goto $l240;
            $l1466:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1468.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1470 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 16));
            value1469 = *$tmp1470;
            if (((panda$core$Bit) { value1469 != NULL }).value) {
            {
                panda$core$String* $tmp1475 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1474, ((panda$core$Object*) value1469));
                $tmp1473 = $tmp1475;
                panda$core$String* $tmp1477 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1473, &$s1476);
                $tmp1472 = $tmp1477;
                $tmp1471 = $tmp1472;
                $returnValue250 = $tmp1471;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1471));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1472));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1473));
                $tmp242 = 41;
                goto $l240;
                $l1478:;
                return $returnValue250;
            }
            }
            $tmp1480 = &$s1481;
            $returnValue250 = $tmp1480;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1480));
            $tmp242 = 42;
            goto $l240;
            $l1482:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1484.value) {
        {
            $tmp1485 = &$s1486;
            $returnValue250 = $tmp1485;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1485));
            $tmp242 = 43;
            goto $l240;
            $l1487:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1489.value) {
        {
            panda$core$String** $tmp1491 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            str1490 = *$tmp1491;
            $tmp1492 = str1490;
            $returnValue250 = $tmp1492;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1492));
            $tmp242 = 44;
            goto $l240;
            $l1493:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1495.value) {
        {
            $tmp1496 = &$s1497;
            $returnValue250 = $tmp1496;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1496));
            $tmp242 = 45;
            goto $l240;
            $l1498:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1500.value) {
        {
            panda$core$String** $tmp1502 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            name1501 = *$tmp1502;
            $tmp1503 = name1501;
            $returnValue250 = $tmp1503;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1503));
            $tmp242 = 46;
            goto $l240;
            $l1504:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1506 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1506.value) {
        {
            panda$core$String** $tmp1508 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            name1507 = *$tmp1508;
            org$pandalanguage$pandac$ASTNode** $tmp1510 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 24));
            type1509 = *$tmp1510;
            if (((panda$core$Bit) { type1509 != NULL }).value) {
            {
                panda$core$String* $tmp1516 = panda$core$String$convert$R$panda$core$String(name1507);
                $tmp1515 = $tmp1516;
                panda$core$String* $tmp1518 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1515, &$s1517);
                $tmp1514 = $tmp1518;
                panda$core$String* $tmp1519 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1514, ((panda$core$Object*) type1509));
                $tmp1513 = $tmp1519;
                panda$core$String* $tmp1521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1513, &$s1520);
                $tmp1512 = $tmp1521;
                $tmp1511 = $tmp1512;
                $returnValue250 = $tmp1511;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1511));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1512));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1513));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1514));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1515));
                $tmp242 = 47;
                goto $l240;
                $l1522:;
                return $returnValue250;
            }
            }
            $tmp1524 = name1507;
            $returnValue250 = $tmp1524;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1524));
            $tmp242 = 48;
            goto $l240;
            $l1525:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1527 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp1527.value) {
        {
            panda$core$String** $tmp1529 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            name1528 = *$tmp1529;
            $tmp1530 = name1528;
            $returnValue250 = $tmp1530;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1530));
            $tmp242 = 49;
            goto $l240;
            $l1531:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1533 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp1533.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp1535 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$180_9243->$data + 16));
            kind1534 = *$tmp1535;
            panda$collections$ImmutableArray** $tmp1537 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 24));
            decls1536 = *$tmp1537;
            int $tmp1540;
            {
                panda$core$MutableString* $tmp1544 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1544);
                $tmp1543 = $tmp1544;
                $tmp1542 = $tmp1543;
                result1541 = $tmp1542;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1542));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1543));
                {
                    $match$431_171545 = kind1534;
                    panda$core$Bit $tmp1546 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$431_171545.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp1546.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1541, &$s1547);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1548 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$431_171545.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp1548.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1541, &$s1549);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1550 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$431_171545.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp1550.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1541, &$s1551);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1552 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$431_171545.$rawValue, ((panda$core$Int64) { 3 }));
                    if ($tmp1552.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1541, &$s1553);
                    }
                    }
                    }
                    }
                    }
                }
                ITable* $tmp1555 = ((panda$collections$ListView*) decls1536)->$class->itable;
                while ($tmp1555->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1555 = $tmp1555->next;
                }
                $fn1557 $tmp1556 = $tmp1555->methods[1];
                panda$core$String* $tmp1558 = $tmp1556(((panda$collections$ListView*) decls1536));
                $tmp1554 = $tmp1558;
                panda$core$MutableString$append$panda$core$String(result1541, $tmp1554);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1554));
                panda$core$String* $tmp1561 = panda$core$MutableString$finish$R$panda$core$String(result1541);
                $tmp1560 = $tmp1561;
                $tmp1559 = $tmp1560;
                $returnValue250 = $tmp1559;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1559));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1560));
                $tmp1540 = 0;
                goto $l1538;
                $l1562:;
                $tmp242 = 50;
                goto $l240;
                $l1563:;
                return $returnValue250;
            }
            $l1538:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1541));
            result1541 = NULL;
            switch ($tmp1540) {
                case 0: goto $l1562;
            }
            $l1565:;
        }
        }
        else {
        panda$core$Bit $tmp1566 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp1566.value) {
        {
            panda$collections$ImmutableArray** $tmp1568 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 16));
            tests1567 = *$tmp1568;
            panda$collections$ImmutableArray** $tmp1570 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 24));
            statements1569 = *$tmp1570;
            int $tmp1573;
            {
                panda$core$MutableString* $tmp1577 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1577, &$s1578);
                $tmp1576 = $tmp1577;
                $tmp1575 = $tmp1576;
                result1574 = $tmp1575;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1575));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1576));
                $tmp1580 = &$s1581;
                separator1579 = $tmp1580;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1580));
                {
                    int $tmp1584;
                    {
                        ITable* $tmp1588 = ((panda$collections$Iterable*) tests1567)->$class->itable;
                        while ($tmp1588->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1588 = $tmp1588->next;
                        }
                        $fn1590 $tmp1589 = $tmp1588->methods[0];
                        panda$collections$Iterator* $tmp1591 = $tmp1589(((panda$collections$Iterable*) tests1567));
                        $tmp1587 = $tmp1591;
                        $tmp1586 = $tmp1587;
                        Iter$442$171585 = $tmp1586;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1586));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1587));
                        $l1592:;
                        ITable* $tmp1595 = Iter$442$171585->$class->itable;
                        while ($tmp1595->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1595 = $tmp1595->next;
                        }
                        $fn1597 $tmp1596 = $tmp1595->methods[0];
                        panda$core$Bit $tmp1598 = $tmp1596(Iter$442$171585);
                        panda$core$Bit $tmp1599 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1598);
                        bool $tmp1594 = $tmp1599.value;
                        if (!$tmp1594) goto $l1593;
                        {
                            int $tmp1602;
                            {
                                ITable* $tmp1606 = Iter$442$171585->$class->itable;
                                while ($tmp1606->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1606 = $tmp1606->next;
                                }
                                $fn1608 $tmp1607 = $tmp1606->methods[1];
                                panda$core$Object* $tmp1609 = $tmp1607(Iter$442$171585);
                                $tmp1605 = $tmp1609;
                                $tmp1604 = ((org$pandalanguage$pandac$ASTNode*) $tmp1605);
                                t1603 = $tmp1604;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1604));
                                panda$core$Panda$unref$panda$core$Object($tmp1605);
                                panda$core$String* $tmp1614 = panda$core$String$convert$R$panda$core$String(separator1579);
                                $tmp1613 = $tmp1614;
                                panda$core$String* $tmp1616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1613, &$s1615);
                                $tmp1612 = $tmp1616;
                                panda$core$String* $tmp1617 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1612, ((panda$core$Object*) t1603));
                                $tmp1611 = $tmp1617;
                                panda$core$String* $tmp1619 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1611, &$s1618);
                                $tmp1610 = $tmp1619;
                                panda$core$MutableString$append$panda$core$String(result1574, $tmp1610);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1610));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1611));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1612));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1613));
                            }
                            $tmp1602 = -1;
                            goto $l1600;
                            $l1600:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1603));
                            t1603 = NULL;
                            switch ($tmp1602) {
                                case -1: goto $l1620;
                            }
                            $l1620:;
                        }
                        goto $l1592;
                        $l1593:;
                    }
                    $tmp1584 = -1;
                    goto $l1582;
                    $l1582:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$442$171585));
                    Iter$442$171585 = NULL;
                    switch ($tmp1584) {
                        case -1: goto $l1621;
                    }
                    $l1621:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1622, ((panda$core$UInt8) { 58 }));
                panda$core$MutableString$append$panda$core$Char8(result1574, $tmp1622);
                {
                    int $tmp1625;
                    {
                        ITable* $tmp1629 = ((panda$collections$Iterable*) statements1569)->$class->itable;
                        while ($tmp1629->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1629 = $tmp1629->next;
                        }
                        $fn1631 $tmp1630 = $tmp1629->methods[0];
                        panda$collections$Iterator* $tmp1632 = $tmp1630(((panda$collections$Iterable*) statements1569));
                        $tmp1628 = $tmp1632;
                        $tmp1627 = $tmp1628;
                        Iter$446$171626 = $tmp1627;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1627));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1628));
                        $l1633:;
                        ITable* $tmp1636 = Iter$446$171626->$class->itable;
                        while ($tmp1636->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1636 = $tmp1636->next;
                        }
                        $fn1638 $tmp1637 = $tmp1636->methods[0];
                        panda$core$Bit $tmp1639 = $tmp1637(Iter$446$171626);
                        panda$core$Bit $tmp1640 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1639);
                        bool $tmp1635 = $tmp1640.value;
                        if (!$tmp1635) goto $l1634;
                        {
                            int $tmp1643;
                            {
                                ITable* $tmp1647 = Iter$446$171626->$class->itable;
                                while ($tmp1647->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1647 = $tmp1647->next;
                                }
                                $fn1649 $tmp1648 = $tmp1647->methods[1];
                                panda$core$Object* $tmp1650 = $tmp1648(Iter$446$171626);
                                $tmp1646 = $tmp1650;
                                $tmp1645 = ((org$pandalanguage$pandac$ASTNode*) $tmp1646);
                                s1644 = $tmp1645;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1645));
                                panda$core$Panda$unref$panda$core$Object($tmp1646);
                                panda$core$String* $tmp1653 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1652, ((panda$core$Object*) s1644));
                                $tmp1651 = $tmp1653;
                                panda$core$MutableString$append$panda$core$String(result1574, $tmp1651);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1651));
                            }
                            $tmp1643 = -1;
                            goto $l1641;
                            $l1641:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1644));
                            s1644 = NULL;
                            switch ($tmp1643) {
                                case -1: goto $l1654;
                            }
                            $l1654:;
                        }
                        goto $l1633;
                        $l1634:;
                    }
                    $tmp1625 = -1;
                    goto $l1623;
                    $l1623:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$446$171626));
                    Iter$446$171626 = NULL;
                    switch ($tmp1625) {
                        case -1: goto $l1655;
                    }
                    $l1655:;
                }
                panda$core$String* $tmp1658 = panda$core$MutableString$finish$R$panda$core$String(result1574);
                $tmp1657 = $tmp1658;
                $tmp1656 = $tmp1657;
                $returnValue250 = $tmp1656;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1656));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1657));
                $tmp1573 = 0;
                goto $l1571;
                $l1659:;
                $tmp242 = 51;
                goto $l240;
                $l1660:;
                return $returnValue250;
            }
            $l1571:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1574));
            result1574 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1579));
            separator1579 = NULL;
            switch ($tmp1573) {
                case 0: goto $l1659;
            }
            $l1662:;
        }
        }
        else {
        panda$core$Bit $tmp1663 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp1663.value) {
        {
            panda$core$String** $tmp1665 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            label1664 = *$tmp1665;
            org$pandalanguage$pandac$ASTNode** $tmp1667 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 24));
            test1666 = *$tmp1667;
            panda$collections$ImmutableArray** $tmp1669 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 32));
            statements1668 = *$tmp1669;
            int $tmp1672;
            {
                panda$core$MutableString* $tmp1676 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1676);
                $tmp1675 = $tmp1676;
                $tmp1674 = $tmp1675;
                result1673 = $tmp1674;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1674));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1675));
                if (((panda$core$Bit) { label1664 != NULL }).value) {
                {
                    panda$core$String* $tmp1679 = panda$core$String$convert$R$panda$core$String(label1664);
                    $tmp1678 = $tmp1679;
                    panda$core$String* $tmp1681 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1678, &$s1680);
                    $tmp1677 = $tmp1681;
                    panda$core$MutableString$append$panda$core$String(result1673, $tmp1677);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1677));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1678));
                }
                }
                panda$core$String* $tmp1685 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1684, ((panda$core$Object*) test1666));
                $tmp1683 = $tmp1685;
                panda$core$String* $tmp1687 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1683, &$s1686);
                $tmp1682 = $tmp1687;
                panda$core$MutableString$append$panda$core$String(result1673, $tmp1682);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1682));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1683));
                {
                    int $tmp1690;
                    {
                        ITable* $tmp1694 = ((panda$collections$Iterable*) statements1668)->$class->itable;
                        while ($tmp1694->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1694 = $tmp1694->next;
                        }
                        $fn1696 $tmp1695 = $tmp1694->methods[0];
                        panda$collections$Iterator* $tmp1697 = $tmp1695(((panda$collections$Iterable*) statements1668));
                        $tmp1693 = $tmp1697;
                        $tmp1692 = $tmp1693;
                        Iter$456$171691 = $tmp1692;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1692));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1693));
                        $l1698:;
                        ITable* $tmp1701 = Iter$456$171691->$class->itable;
                        while ($tmp1701->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1701 = $tmp1701->next;
                        }
                        $fn1703 $tmp1702 = $tmp1701->methods[0];
                        panda$core$Bit $tmp1704 = $tmp1702(Iter$456$171691);
                        panda$core$Bit $tmp1705 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1704);
                        bool $tmp1700 = $tmp1705.value;
                        if (!$tmp1700) goto $l1699;
                        {
                            int $tmp1708;
                            {
                                ITable* $tmp1712 = Iter$456$171691->$class->itable;
                                while ($tmp1712->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1712 = $tmp1712->next;
                                }
                                $fn1714 $tmp1713 = $tmp1712->methods[1];
                                panda$core$Object* $tmp1715 = $tmp1713(Iter$456$171691);
                                $tmp1711 = $tmp1715;
                                $tmp1710 = ((org$pandalanguage$pandac$ASTNode*) $tmp1711);
                                s1709 = $tmp1710;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1710));
                                panda$core$Panda$unref$panda$core$Object($tmp1711);
                                panda$core$String* $tmp1718 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1709), &$s1717);
                                $tmp1716 = $tmp1718;
                                panda$core$MutableString$append$panda$core$String(result1673, $tmp1716);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1716));
                            }
                            $tmp1708 = -1;
                            goto $l1706;
                            $l1706:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1709));
                            s1709 = NULL;
                            switch ($tmp1708) {
                                case -1: goto $l1719;
                            }
                            $l1719:;
                        }
                        goto $l1698;
                        $l1699:;
                    }
                    $tmp1690 = -1;
                    goto $l1688;
                    $l1688:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$456$171691));
                    Iter$456$171691 = NULL;
                    switch ($tmp1690) {
                        case -1: goto $l1720;
                    }
                    $l1720:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1721, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1673, $tmp1721);
                panda$core$String* $tmp1724 = panda$core$MutableString$finish$R$panda$core$String(result1673);
                $tmp1723 = $tmp1724;
                $tmp1722 = $tmp1723;
                $returnValue250 = $tmp1722;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1722));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1723));
                $tmp1672 = 0;
                goto $l1670;
                $l1725:;
                $tmp242 = 52;
                goto $l240;
                $l1726:;
                return $returnValue250;
            }
            $l1670:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1673));
            result1673 = NULL;
            switch ($tmp1672) {
                case 0: goto $l1725;
            }
            $l1728:;
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
    $tmp242 = -1;
    goto $l240;
    $l240:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp244));
    switch ($tmp242) {
        case 26: goto $l1033;
        case 38: goto $l1430;
        case 44: goto $l1493;
        case 17: goto $l669;
        case 52: goto $l1726;
        case -1: goto $l1729;
        case 11: goto $l438;
        case 27: goto $l1042;
        case 43: goto $l1487;
        case 50: goto $l1563;
        case 29: goto $l1109;
        case 35: goto $l1385;
        case 51: goto $l1660;
        case 18: goto $l675;
        case 34: goto $l1376;
        case 5: goto $l310;
        case 10: goto $l414;
        case 0: goto $l262;
        case 48: goto $l1525;
        case 33: goto $l1370;
        case 12: goto $l476;
        case 49: goto $l1531;
        case 7: goto $l346;
        case 13: goto $l505;
        case 42: goto $l1482;
        case 4: goto $l305;
        case 32: goto $l1361;
        case 16: goto $l650;
        case 22: goto $l866;
        case 23: goto $l937;
        case 31: goto $l1300;
        case 24: goto $l961;
        case 15: goto $l646;
        case 30: goto $l1173;
        case 41: goto $l1478;
        case 14: goto $l633;
        case 20: goto $l760;
        case 28: goto $l1051;
        case 21: goto $l816;
        case 37: goto $l1409;
        case 19: goto $l740;
        case 3: goto $l293;
        case 40: goto $l1466;
        case 39: goto $l1457;
        case 47: goto $l1522;
        case 9: goto $l410;
        case 46: goto $l1504;
        case 8: goto $l397;
        case 45: goto $l1498;
        case 2: goto $l279;
        case 36: goto $l1391;
        case 25: goto $l967;
        case 6: goto $l338;
        case 1: goto $l265;
    }
    $l1729:;
}
void org$pandalanguage$pandac$ASTNode$cleanup(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$5_11736 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1737;
    org$pandalanguage$pandac$Position _f01739;
    panda$core$String* _f11741 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21743 = NULL;
    org$pandalanguage$pandac$Position _f01746;
    org$pandalanguage$pandac$ASTNode* _f11748 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21750 = NULL;
    org$pandalanguage$pandac$Position _f01753;
    org$pandalanguage$pandac$ASTNode* _f11755 = NULL;
    org$pandalanguage$pandac$Position _f01758;
    org$pandalanguage$pandac$Position _f01761;
    org$pandalanguage$pandac$ASTNode* _f11763 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind _f21765;
    org$pandalanguage$pandac$ASTNode* _f31767 = NULL;
    org$pandalanguage$pandac$Position _f01770;
    panda$core$Bit _f11772;
    org$pandalanguage$pandac$Position _f01775;
    panda$collections$ImmutableArray* _f11777 = NULL;
    org$pandalanguage$pandac$Position _f01780;
    panda$core$String* _f11782 = NULL;
    org$pandalanguage$pandac$Position _f01785;
    org$pandalanguage$pandac$ASTNode* _f11787 = NULL;
    panda$collections$ImmutableArray* _f21789 = NULL;
    org$pandalanguage$pandac$Position _f01792;
    org$pandalanguage$pandac$ASTNode* _f11794 = NULL;
    panda$core$String* _f21796 = NULL;
    panda$collections$ImmutableArray* _f31798 = NULL;
    org$pandalanguage$pandac$Position _f01801;
    org$pandalanguage$pandac$ASTNode* _f11803 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* _f21805 = NULL;
    panda$core$Int64 _f31807;
    org$pandalanguage$pandac$Position _f01810;
    org$pandalanguage$pandac$ASTNode* _f11812 = NULL;
    panda$collections$ImmutableArray* _f21814 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind _f31816;
    panda$core$String* _f41818 = NULL;
    panda$collections$ImmutableArray* _f51820 = NULL;
    panda$collections$ImmutableArray* _f61822 = NULL;
    panda$collections$ImmutableArray* _f71824 = NULL;
    org$pandalanguage$pandac$Position _f01827;
    panda$core$String* _f11829 = NULL;
    org$pandalanguage$pandac$Position _f01832;
    org$pandalanguage$pandac$ASTNode* _f11834 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21836 = NULL;
    org$pandalanguage$pandac$Position _f01839;
    panda$core$String* _f11841 = NULL;
    panda$collections$ImmutableArray* _f21843 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31845 = NULL;
    org$pandalanguage$pandac$Position _f01848;
    org$pandalanguage$pandac$ASTNode* _f11850 = NULL;
    panda$core$String* _f21852 = NULL;
    org$pandalanguage$pandac$Position _f01855;
    org$pandalanguage$pandac$ASTNode* _f11857 = NULL;
    panda$collections$ImmutableArray* _f21859 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31861 = NULL;
    panda$collections$ImmutableArray* _f01864 = NULL;
    org$pandalanguage$pandac$Position _f01867;
    panda$core$String* _f11869 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21871 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31873 = NULL;
    panda$collections$ImmutableArray* _f41875 = NULL;
    org$pandalanguage$pandac$Position _f01878;
    panda$core$String* _f11880 = NULL;
    panda$collections$ImmutableArray* _f21882 = NULL;
    org$pandalanguage$pandac$Position _f01885;
    panda$core$String* _f11887 = NULL;
    org$pandalanguage$pandac$Position _f01890;
    org$pandalanguage$pandac$ASTNode* _f11892 = NULL;
    panda$collections$ImmutableArray* _f21894 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31896 = NULL;
    org$pandalanguage$pandac$Position _f01899;
    panda$core$UInt64 _f11901;
    org$pandalanguage$pandac$IRNode* _f01904 = NULL;
    org$pandalanguage$pandac$Position _f01907;
    panda$core$String* _f11909 = NULL;
    panda$collections$ImmutableArray* _f21911 = NULL;
    org$pandalanguage$pandac$Position _f01914;
    org$pandalanguage$pandac$ASTNode* _f11916 = NULL;
    panda$collections$ImmutableArray* _f21918 = NULL;
    panda$collections$ImmutableArray* _f31920 = NULL;
    org$pandalanguage$pandac$Position _f01923;
    org$pandalanguage$pandac$ASTNode* _f11925 = NULL;
    panda$collections$ImmutableArray* _f21927 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind _f31929;
    panda$core$String* _f41931 = NULL;
    panda$collections$ImmutableArray* _f51933 = NULL;
    org$pandalanguage$pandac$ASTNode* _f61935 = NULL;
    panda$collections$ImmutableArray* _f71937 = NULL;
    org$pandalanguage$pandac$Position _f01940;
    org$pandalanguage$pandac$parser$Token$Kind _f11942;
    panda$collections$ImmutableArray* _f21944 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31946 = NULL;
    org$pandalanguage$pandac$Position _f01949;
    org$pandalanguage$pandac$Position _f01952;
    org$pandalanguage$pandac$ASTNode* _f11954 = NULL;
    org$pandalanguage$pandac$Position _f01957;
    panda$core$String* _f11959 = NULL;
    org$pandalanguage$pandac$Position _f01962;
    panda$core$String* _f11964 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21966 = NULL;
    org$pandalanguage$pandac$Position _f01969;
    org$pandalanguage$pandac$parser$Token$Kind _f11971;
    org$pandalanguage$pandac$ASTNode* _f21973 = NULL;
    org$pandalanguage$pandac$Position _f01976;
    org$pandalanguage$pandac$ASTNode* _f11978 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21980 = NULL;
    panda$core$Bit _f31982;
    org$pandalanguage$pandac$ASTNode* _f41984 = NULL;
    org$pandalanguage$pandac$Position _f01987;
    panda$core$Real64 _f11989;
    org$pandalanguage$pandac$Position _f01992;
    org$pandalanguage$pandac$ASTNode* _f11994 = NULL;
    org$pandalanguage$pandac$Position _f01997;
    org$pandalanguage$pandac$Position _f02000;
    panda$core$String* _f12002 = NULL;
    org$pandalanguage$pandac$Position _f02005;
    org$pandalanguage$pandac$Position _f02008;
    panda$collections$ImmutableArray* _f12010 = NULL;
    org$pandalanguage$pandac$Position _f02013;
    panda$core$String* _f12015 = NULL;
    org$pandalanguage$pandac$Position _f02018;
    panda$core$String* _f12020 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22022 = NULL;
    org$pandalanguage$pandac$Position _f02025;
    panda$core$String* _f12027 = NULL;
    org$pandalanguage$pandac$Position _f02030;
    org$pandalanguage$pandac$Variable$Kind _f12032;
    panda$collections$ImmutableArray* _f22034 = NULL;
    org$pandalanguage$pandac$Position _f02037;
    panda$collections$ImmutableArray* _f12039 = NULL;
    panda$collections$ImmutableArray* _f22041 = NULL;
    org$pandalanguage$pandac$Position _f02044;
    panda$core$String* _f12046 = NULL;
    org$pandalanguage$pandac$ASTNode* _f22048 = NULL;
    panda$collections$ImmutableArray* _f32050 = NULL;
    int $tmp1732;
    {
        int $tmp1735;
        {
            $tmp1737 = self;
            $match$5_11736 = $tmp1737;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1737));
            panda$core$Bit $tmp1738 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp1738.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1740 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01739 = *$tmp1740;
                panda$core$String** $tmp1742 = ((panda$core$String**) ((char*) $match$5_11736->$data + 16));
                _f11741 = *$tmp1742;
                org$pandalanguage$pandac$ASTNode** $tmp1744 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11736->$data + 24));
                _f21743 = *$tmp1744;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11741));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21743));
            }
            }
            else {
            panda$core$Bit $tmp1745 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp1745.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1747 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01746 = *$tmp1747;
                org$pandalanguage$pandac$ASTNode** $tmp1749 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11736->$data + 16));
                _f11748 = *$tmp1749;
                org$pandalanguage$pandac$ASTNode** $tmp1751 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11736->$data + 24));
                _f21750 = *$tmp1751;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11748));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21750));
            }
            }
            else {
            panda$core$Bit $tmp1752 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1752.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1754 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01753 = *$tmp1754;
                org$pandalanguage$pandac$ASTNode** $tmp1756 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11736->$data + 16));
                _f11755 = *$tmp1756;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11755));
            }
            }
            else {
            panda$core$Bit $tmp1757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp1757.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1759 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01758 = *$tmp1759;
            }
            }
            else {
            panda$core$Bit $tmp1760 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 4 }));
            if ($tmp1760.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1762 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01761 = *$tmp1762;
                org$pandalanguage$pandac$ASTNode** $tmp1764 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11736->$data + 16));
                _f11763 = *$tmp1764;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp1766 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11736->$data + 24));
                _f21765 = *$tmp1766;
                org$pandalanguage$pandac$ASTNode** $tmp1768 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11736->$data + 32));
                _f31767 = *$tmp1768;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11763));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31767));
            }
            }
            else {
            panda$core$Bit $tmp1769 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 5 }));
            if ($tmp1769.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1771 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01770 = *$tmp1771;
                panda$core$Bit* $tmp1773 = ((panda$core$Bit*) ((char*) $match$5_11736->$data + 16));
                _f11772 = *$tmp1773;
            }
            }
            else {
            panda$core$Bit $tmp1774 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 6 }));
            if ($tmp1774.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1776 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01775 = *$tmp1776;
                panda$collections$ImmutableArray** $tmp1778 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11736->$data + 16));
                _f11777 = *$tmp1778;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11777));
            }
            }
            else {
            panda$core$Bit $tmp1779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 7 }));
            if ($tmp1779.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1781 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01780 = *$tmp1781;
                panda$core$String** $tmp1783 = ((panda$core$String**) ((char*) $match$5_11736->$data + 16));
                _f11782 = *$tmp1783;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11782));
            }
            }
            else {
            panda$core$Bit $tmp1784 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 8 }));
            if ($tmp1784.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1786 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01785 = *$tmp1786;
                org$pandalanguage$pandac$ASTNode** $tmp1788 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11736->$data + 16));
                _f11787 = *$tmp1788;
                panda$collections$ImmutableArray** $tmp1790 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11736->$data + 24));
                _f21789 = *$tmp1790;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11787));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21789));
            }
            }
            else {
            panda$core$Bit $tmp1791 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 9 }));
            if ($tmp1791.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1793 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01792 = *$tmp1793;
                org$pandalanguage$pandac$ASTNode** $tmp1795 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11736->$data + 16));
                _f11794 = *$tmp1795;
                panda$core$String** $tmp1797 = ((panda$core$String**) ((char*) $match$5_11736->$data + 24));
                _f21796 = *$tmp1797;
                panda$collections$ImmutableArray** $tmp1799 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11736->$data + 32));
                _f31798 = *$tmp1799;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11794));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21796));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31798));
            }
            }
            else {
            panda$core$Bit $tmp1800 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 10 }));
            if ($tmp1800.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1802 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01801 = *$tmp1802;
                org$pandalanguage$pandac$ASTNode** $tmp1804 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11736->$data + 16));
                _f11803 = *$tmp1804;
                org$pandalanguage$pandac$ChoiceEntry** $tmp1806 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_11736->$data + 24));
                _f21805 = *$tmp1806;
                panda$core$Int64* $tmp1808 = ((panda$core$Int64*) ((char*) $match$5_11736->$data + 32));
                _f31807 = *$tmp1808;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11803));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21805));
            }
            }
            else {
            panda$core$Bit $tmp1809 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp1809.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1811 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01810 = *$tmp1811;
                org$pandalanguage$pandac$ASTNode** $tmp1813 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11736->$data + 16));
                _f11812 = *$tmp1813;
                panda$collections$ImmutableArray** $tmp1815 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11736->$data + 24));
                _f21814 = *$tmp1815;
                org$pandalanguage$pandac$ClassDecl$Kind* $tmp1817 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$5_11736->$data + 32));
                _f31816 = *$tmp1817;
                panda$core$String** $tmp1819 = ((panda$core$String**) ((char*) $match$5_11736->$data + 40));
                _f41818 = *$tmp1819;
                panda$collections$ImmutableArray** $tmp1821 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11736->$data + 48));
                _f51820 = *$tmp1821;
                panda$collections$ImmutableArray** $tmp1823 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11736->$data + 56));
                _f61822 = *$tmp1823;
                panda$collections$ImmutableArray** $tmp1825 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11736->$data + 64));
                _f71824 = *$tmp1825;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11812));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21814));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41818));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f51820));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f61822));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f71824));
            }
            }
            else {
            panda$core$Bit $tmp1826 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp1826.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1828 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01827 = *$tmp1828;
                panda$core$String** $tmp1830 = ((panda$core$String**) ((char*) $match$5_11736->$data + 16));
                _f11829 = *$tmp1830;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11829));
            }
            }
            else {
            panda$core$Bit $tmp1831 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp1831.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1833 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01832 = *$tmp1833;
                org$pandalanguage$pandac$ASTNode** $tmp1835 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11736->$data + 16));
                _f11834 = *$tmp1835;
                org$pandalanguage$pandac$ASTNode** $tmp1837 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11736->$data + 24));
                _f21836 = *$tmp1837;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11834));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21836));
            }
            }
            else {
            panda$core$Bit $tmp1838 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 14 }));
            if ($tmp1838.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1840 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01839 = *$tmp1840;
                panda$core$String** $tmp1842 = ((panda$core$String**) ((char*) $match$5_11736->$data + 16));
                _f11841 = *$tmp1842;
                panda$collections$ImmutableArray** $tmp1844 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11736->$data + 24));
                _f21843 = *$tmp1844;
                org$pandalanguage$pandac$ASTNode** $tmp1846 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11736->$data + 32));
                _f31845 = *$tmp1846;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11841));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21843));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31845));
            }
            }
            else {
            panda$core$Bit $tmp1847 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 15 }));
            if ($tmp1847.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1849 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01848 = *$tmp1849;
                org$pandalanguage$pandac$ASTNode** $tmp1851 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11736->$data + 16));
                _f11850 = *$tmp1851;
                panda$core$String** $tmp1853 = ((panda$core$String**) ((char*) $match$5_11736->$data + 24));
                _f21852 = *$tmp1853;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11850));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21852));
            }
            }
            else {
            panda$core$Bit $tmp1854 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 16 }));
            if ($tmp1854.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1856 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01855 = *$tmp1856;
                org$pandalanguage$pandac$ASTNode** $tmp1858 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11736->$data + 16));
                _f11857 = *$tmp1858;
                panda$collections$ImmutableArray** $tmp1860 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11736->$data + 24));
                _f21859 = *$tmp1860;
                org$pandalanguage$pandac$ASTNode** $tmp1862 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11736->$data + 32));
                _f31861 = *$tmp1862;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11857));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21859));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31861));
            }
            }
            else {
            panda$core$Bit $tmp1863 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp1863.value) {
            {
                panda$collections$ImmutableArray** $tmp1865 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11736->$data + 0));
                _f01864 = *$tmp1865;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f01864));
            }
            }
            else {
            panda$core$Bit $tmp1866 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp1866.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1868 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01867 = *$tmp1868;
                panda$core$String** $tmp1870 = ((panda$core$String**) ((char*) $match$5_11736->$data + 16));
                _f11869 = *$tmp1870;
                org$pandalanguage$pandac$ASTNode** $tmp1872 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11736->$data + 24));
                _f21871 = *$tmp1872;
                org$pandalanguage$pandac$ASTNode** $tmp1874 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11736->$data + 32));
                _f31873 = *$tmp1874;
                panda$collections$ImmutableArray** $tmp1876 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11736->$data + 40));
                _f41875 = *$tmp1876;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11869));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21871));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31873));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41875));
            }
            }
            else {
            panda$core$Bit $tmp1877 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp1877.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1879 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01878 = *$tmp1879;
                panda$core$String** $tmp1881 = ((panda$core$String**) ((char*) $match$5_11736->$data + 16));
                _f11880 = *$tmp1881;
                panda$collections$ImmutableArray** $tmp1883 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11736->$data + 24));
                _f21882 = *$tmp1883;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11880));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21882));
            }
            }
            else {
            panda$core$Bit $tmp1884 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 20 }));
            if ($tmp1884.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1886 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01885 = *$tmp1886;
                panda$core$String** $tmp1888 = ((panda$core$String**) ((char*) $match$5_11736->$data + 16));
                _f11887 = *$tmp1888;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11887));
            }
            }
            else {
            panda$core$Bit $tmp1889 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 21 }));
            if ($tmp1889.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1891 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01890 = *$tmp1891;
                org$pandalanguage$pandac$ASTNode** $tmp1893 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11736->$data + 16));
                _f11892 = *$tmp1893;
                panda$collections$ImmutableArray** $tmp1895 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11736->$data + 24));
                _f21894 = *$tmp1895;
                org$pandalanguage$pandac$ASTNode** $tmp1897 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11736->$data + 32));
                _f31896 = *$tmp1897;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11892));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21894));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31896));
            }
            }
            else {
            panda$core$Bit $tmp1898 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 22 }));
            if ($tmp1898.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1900 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01899 = *$tmp1900;
                panda$core$UInt64* $tmp1902 = ((panda$core$UInt64*) ((char*) $match$5_11736->$data + 16));
                _f11901 = *$tmp1902;
            }
            }
            else {
            panda$core$Bit $tmp1903 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 23 }));
            if ($tmp1903.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp1905 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11736->$data + 0));
                _f01904 = *$tmp1905;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f01904));
            }
            }
            else {
            panda$core$Bit $tmp1906 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 24 }));
            if ($tmp1906.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1908 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01907 = *$tmp1908;
                panda$core$String** $tmp1910 = ((panda$core$String**) ((char*) $match$5_11736->$data + 16));
                _f11909 = *$tmp1910;
                panda$collections$ImmutableArray** $tmp1912 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11736->$data + 24));
                _f21911 = *$tmp1912;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11909));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21911));
            }
            }
            else {
            panda$core$Bit $tmp1913 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 25 }));
            if ($tmp1913.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1915 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01914 = *$tmp1915;
                org$pandalanguage$pandac$ASTNode** $tmp1917 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11736->$data + 16));
                _f11916 = *$tmp1917;
                panda$collections$ImmutableArray** $tmp1919 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11736->$data + 24));
                _f21918 = *$tmp1919;
                panda$collections$ImmutableArray** $tmp1921 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11736->$data + 32));
                _f31920 = *$tmp1921;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11916));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21918));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31920));
            }
            }
            else {
            panda$core$Bit $tmp1922 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 26 }));
            if ($tmp1922.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1924 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01923 = *$tmp1924;
                org$pandalanguage$pandac$ASTNode** $tmp1926 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11736->$data + 16));
                _f11925 = *$tmp1926;
                panda$collections$ImmutableArray** $tmp1928 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11736->$data + 24));
                _f21927 = *$tmp1928;
                org$pandalanguage$pandac$MethodDecl$Kind* $tmp1930 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$5_11736->$data + 32));
                _f31929 = *$tmp1930;
                panda$core$String** $tmp1932 = ((panda$core$String**) ((char*) $match$5_11736->$data + 40));
                _f41931 = *$tmp1932;
                panda$collections$ImmutableArray** $tmp1934 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11736->$data + 48));
                _f51933 = *$tmp1934;
                org$pandalanguage$pandac$ASTNode** $tmp1936 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11736->$data + 56));
                _f61935 = *$tmp1936;
                panda$collections$ImmutableArray** $tmp1938 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11736->$data + 64));
                _f71937 = *$tmp1938;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11925));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21927));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41931));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f51933));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f61935));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f71937));
            }
            }
            else {
            panda$core$Bit $tmp1939 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 27 }));
            if ($tmp1939.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1941 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01940 = *$tmp1941;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp1943 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11736->$data + 16));
                _f11942 = *$tmp1943;
                panda$collections$ImmutableArray** $tmp1945 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11736->$data + 24));
                _f21944 = *$tmp1945;
                org$pandalanguage$pandac$ASTNode** $tmp1947 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11736->$data + 32));
                _f31946 = *$tmp1947;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21944));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31946));
            }
            }
            else {
            panda$core$Bit $tmp1948 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 28 }));
            if ($tmp1948.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1950 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01949 = *$tmp1950;
            }
            }
            else {
            panda$core$Bit $tmp1951 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 29 }));
            if ($tmp1951.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1953 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01952 = *$tmp1953;
                org$pandalanguage$pandac$ASTNode** $tmp1955 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11736->$data + 16));
                _f11954 = *$tmp1955;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11954));
            }
            }
            else {
            panda$core$Bit $tmp1956 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 30 }));
            if ($tmp1956.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1958 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01957 = *$tmp1958;
                panda$core$String** $tmp1960 = ((panda$core$String**) ((char*) $match$5_11736->$data + 16));
                _f11959 = *$tmp1960;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11959));
            }
            }
            else {
            panda$core$Bit $tmp1961 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 31 }));
            if ($tmp1961.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1963 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01962 = *$tmp1963;
                panda$core$String** $tmp1965 = ((panda$core$String**) ((char*) $match$5_11736->$data + 16));
                _f11964 = *$tmp1965;
                org$pandalanguage$pandac$ASTNode** $tmp1967 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11736->$data + 24));
                _f21966 = *$tmp1967;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11964));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21966));
            }
            }
            else {
            panda$core$Bit $tmp1968 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 32 }));
            if ($tmp1968.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1970 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01969 = *$tmp1970;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp1972 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11736->$data + 16));
                _f11971 = *$tmp1972;
                org$pandalanguage$pandac$ASTNode** $tmp1974 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11736->$data + 24));
                _f21973 = *$tmp1974;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21973));
            }
            }
            else {
            panda$core$Bit $tmp1975 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp1975.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1977 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01976 = *$tmp1977;
                org$pandalanguage$pandac$ASTNode** $tmp1979 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11736->$data + 16));
                _f11978 = *$tmp1979;
                org$pandalanguage$pandac$ASTNode** $tmp1981 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11736->$data + 24));
                _f21980 = *$tmp1981;
                panda$core$Bit* $tmp1983 = ((panda$core$Bit*) ((char*) $match$5_11736->$data + 32));
                _f31982 = *$tmp1983;
                org$pandalanguage$pandac$ASTNode** $tmp1985 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11736->$data + 33));
                _f41984 = *$tmp1985;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11978));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21980));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41984));
            }
            }
            else {
            panda$core$Bit $tmp1986 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp1986.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1988 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01987 = *$tmp1988;
                panda$core$Real64* $tmp1990 = ((panda$core$Real64*) ((char*) $match$5_11736->$data + 16));
                _f11989 = *$tmp1990;
            }
            }
            else {
            panda$core$Bit $tmp1991 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 35 }));
            if ($tmp1991.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1993 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01992 = *$tmp1993;
                org$pandalanguage$pandac$ASTNode** $tmp1995 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11736->$data + 16));
                _f11994 = *$tmp1995;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11994));
            }
            }
            else {
            panda$core$Bit $tmp1996 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 36 }));
            if ($tmp1996.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1998 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f01997 = *$tmp1998;
            }
            }
            else {
            panda$core$Bit $tmp1999 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 37 }));
            if ($tmp1999.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2001 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f02000 = *$tmp2001;
                panda$core$String** $tmp2003 = ((panda$core$String**) ((char*) $match$5_11736->$data + 16));
                _f12002 = *$tmp2003;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12002));
            }
            }
            else {
            panda$core$Bit $tmp2004 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 38 }));
            if ($tmp2004.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2006 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f02005 = *$tmp2006;
            }
            }
            else {
            panda$core$Bit $tmp2007 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp2007.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2009 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f02008 = *$tmp2009;
                panda$collections$ImmutableArray** $tmp2011 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11736->$data + 16));
                _f12010 = *$tmp2011;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12010));
            }
            }
            else {
            panda$core$Bit $tmp2012 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 40 }));
            if ($tmp2012.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2014 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f02013 = *$tmp2014;
                panda$core$String** $tmp2016 = ((panda$core$String**) ((char*) $match$5_11736->$data + 16));
                _f12015 = *$tmp2016;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12015));
            }
            }
            else {
            panda$core$Bit $tmp2017 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 41 }));
            if ($tmp2017.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2019 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f02018 = *$tmp2019;
                panda$core$String** $tmp2021 = ((panda$core$String**) ((char*) $match$5_11736->$data + 16));
                _f12020 = *$tmp2021;
                org$pandalanguage$pandac$ASTNode** $tmp2023 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11736->$data + 24));
                _f22022 = *$tmp2023;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12020));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22022));
            }
            }
            else {
            panda$core$Bit $tmp2024 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 42 }));
            if ($tmp2024.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2026 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f02025 = *$tmp2026;
                panda$core$String** $tmp2028 = ((panda$core$String**) ((char*) $match$5_11736->$data + 16));
                _f12027 = *$tmp2028;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12027));
            }
            }
            else {
            panda$core$Bit $tmp2029 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 43 }));
            if ($tmp2029.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2031 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f02030 = *$tmp2031;
                org$pandalanguage$pandac$Variable$Kind* $tmp2033 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_11736->$data + 16));
                _f12032 = *$tmp2033;
                panda$collections$ImmutableArray** $tmp2035 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11736->$data + 24));
                _f22034 = *$tmp2035;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22034));
            }
            }
            else {
            panda$core$Bit $tmp2036 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 44 }));
            if ($tmp2036.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2038 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f02037 = *$tmp2038;
                panda$collections$ImmutableArray** $tmp2040 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11736->$data + 16));
                _f12039 = *$tmp2040;
                panda$collections$ImmutableArray** $tmp2042 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11736->$data + 24));
                _f22041 = *$tmp2042;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12039));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22041));
            }
            }
            else {
            panda$core$Bit $tmp2043 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11736->$rawValue, ((panda$core$Int64) { 45 }));
            if ($tmp2043.value) {
            {
                org$pandalanguage$pandac$Position* $tmp2045 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11736->$data + 0));
                _f02044 = *$tmp2045;
                panda$core$String** $tmp2047 = ((panda$core$String**) ((char*) $match$5_11736->$data + 16));
                _f12046 = *$tmp2047;
                org$pandalanguage$pandac$ASTNode** $tmp2049 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11736->$data + 24));
                _f22048 = *$tmp2049;
                panda$collections$ImmutableArray** $tmp2051 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11736->$data + 32));
                _f32050 = *$tmp2051;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f12046));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f22048));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f32050));
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
        }
        $tmp1735 = -1;
        goto $l1733;
        $l1733:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1737));
        switch ($tmp1735) {
            case -1: goto $l2052;
        }
        $l2052:;
    }
    $tmp1732 = -1;
    goto $l1730;
    $l1730:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp1732) {
        case -1: goto $l2053;
    }
    $l2053:;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$core$String* $tmp2055;
    panda$core$String* $tmp2058;
    org$pandalanguage$pandac$ASTNode* $tmp2059;
    org$pandalanguage$pandac$ASTNode* $tmp2062;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2054 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2054 = p_f0;
    {
        panda$core$String** $tmp2056 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2055 = *$tmp2056;
        panda$core$String** $tmp2057 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2058 = p_f1;
        *$tmp2057 = $tmp2058;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2058));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2055));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2060 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2059 = *$tmp2060;
        org$pandalanguage$pandac$ASTNode** $tmp2061 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2062 = p_f2;
        *$tmp2061 = $tmp2062;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2062));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2059));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2064;
    org$pandalanguage$pandac$ASTNode* $tmp2067;
    org$pandalanguage$pandac$ASTNode* $tmp2068;
    org$pandalanguage$pandac$ASTNode* $tmp2071;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2063 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2063 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2065 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2064 = *$tmp2065;
        org$pandalanguage$pandac$ASTNode** $tmp2066 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2067 = p_f1;
        *$tmp2066 = $tmp2067;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2067));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2064));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2069 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2068 = *$tmp2069;
        org$pandalanguage$pandac$ASTNode** $tmp2070 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2071 = p_f2;
        *$tmp2070 = $tmp2071;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2071));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2068));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    org$pandalanguage$pandac$ASTNode* $tmp2073;
    org$pandalanguage$pandac$ASTNode* $tmp2076;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2072 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2072 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2074 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2073 = *$tmp2074;
        org$pandalanguage$pandac$ASTNode** $tmp2075 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2076 = p_f1;
        *$tmp2075 = $tmp2076;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2076));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2073));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2077 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2077 = p_f0;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$parser$Token$Kind p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2079;
    org$pandalanguage$pandac$ASTNode* $tmp2082;
    org$pandalanguage$pandac$ASTNode* $tmp2084;
    org$pandalanguage$pandac$ASTNode* $tmp2087;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2078 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2078 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2080 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2079 = *$tmp2080;
        org$pandalanguage$pandac$ASTNode** $tmp2081 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2082 = p_f1;
        *$tmp2081 = $tmp2082;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2082));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2079));
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2083 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 24));
    *$tmp2083 = p_f2;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2085 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2084 = *$tmp2085;
        org$pandalanguage$pandac$ASTNode** $tmp2086 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2087 = p_f3;
        *$tmp2086 = $tmp2087;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2087));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2084));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Bit p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2088 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2088 = p_f0;
    panda$core$Bit* $tmp2089 = ((panda$core$Bit*) ((char*) self->$data + 16));
    *$tmp2089 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    panda$collections$ImmutableArray* $tmp2091;
    panda$collections$ImmutableArray* $tmp2094;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2090 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2090 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2092 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2091 = *$tmp2092;
        panda$collections$ImmutableArray** $tmp2093 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2094 = p_f1;
        *$tmp2093 = $tmp2094;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2094));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2091));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp2096;
    panda$core$String* $tmp2099;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2095 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2095 = p_f0;
    {
        panda$core$String** $tmp2097 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2096 = *$tmp2097;
        panda$core$String** $tmp2098 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2099 = p_f1;
        *$tmp2098 = $tmp2099;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2099));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2096));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2101;
    org$pandalanguage$pandac$ASTNode* $tmp2104;
    panda$collections$ImmutableArray* $tmp2105;
    panda$collections$ImmutableArray* $tmp2108;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2100 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2100 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2102 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2101 = *$tmp2102;
        org$pandalanguage$pandac$ASTNode** $tmp2103 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2104 = p_f1;
        *$tmp2103 = $tmp2104;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2104));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2101));
    }
    {
        panda$collections$ImmutableArray** $tmp2106 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2105 = *$tmp2106;
        panda$collections$ImmutableArray** $tmp2107 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2108 = p_f2;
        *$tmp2107 = $tmp2108;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2108));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2105));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2110;
    org$pandalanguage$pandac$ASTNode* $tmp2113;
    panda$core$String* $tmp2114;
    panda$core$String* $tmp2117;
    panda$collections$ImmutableArray* $tmp2118;
    panda$collections$ImmutableArray* $tmp2121;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2109 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2109 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2111 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2110 = *$tmp2111;
        org$pandalanguage$pandac$ASTNode** $tmp2112 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2113 = p_f1;
        *$tmp2112 = $tmp2113;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2113));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2110));
    }
    {
        panda$core$String** $tmp2115 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2114 = *$tmp2115;
        panda$core$String** $tmp2116 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2117 = p_f2;
        *$tmp2116 = $tmp2117;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2117));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2114));
    }
    {
        panda$collections$ImmutableArray** $tmp2119 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2118 = *$tmp2119;
        panda$collections$ImmutableArray** $tmp2120 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2121 = p_f3;
        *$tmp2120 = $tmp2121;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2121));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2118));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2123;
    org$pandalanguage$pandac$ASTNode* $tmp2126;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2127;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2130;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2122 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2122 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2124 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2123 = *$tmp2124;
        org$pandalanguage$pandac$ASTNode** $tmp2125 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2126 = p_f1;
        *$tmp2125 = $tmp2126;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2126));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2123));
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp2128 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp2127 = *$tmp2128;
        org$pandalanguage$pandac$ChoiceEntry** $tmp2129 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp2130 = p_f2;
        *$tmp2129 = $tmp2130;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2130));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2127));
    }
    panda$core$Int64* $tmp2131 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp2131 = p_f3;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ClassDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, panda$collections$ImmutableArray* p_f6, panda$collections$ImmutableArray* p_f7) {
    org$pandalanguage$pandac$ASTNode* $tmp2133;
    org$pandalanguage$pandac$ASTNode* $tmp2136;
    panda$collections$ImmutableArray* $tmp2137;
    panda$collections$ImmutableArray* $tmp2140;
    panda$core$String* $tmp2142;
    panda$core$String* $tmp2145;
    panda$collections$ImmutableArray* $tmp2146;
    panda$collections$ImmutableArray* $tmp2149;
    panda$collections$ImmutableArray* $tmp2150;
    panda$collections$ImmutableArray* $tmp2153;
    panda$collections$ImmutableArray* $tmp2154;
    panda$collections$ImmutableArray* $tmp2157;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2132 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2132 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2134 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2133 = *$tmp2134;
        org$pandalanguage$pandac$ASTNode** $tmp2135 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2136 = p_f1;
        *$tmp2135 = $tmp2136;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2136));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2133));
    }
    {
        panda$collections$ImmutableArray** $tmp2138 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2137 = *$tmp2138;
        panda$collections$ImmutableArray** $tmp2139 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2140 = p_f2;
        *$tmp2139 = $tmp2140;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2140));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2137));
    }
    org$pandalanguage$pandac$ClassDecl$Kind* $tmp2141 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) self->$data + 32));
    *$tmp2141 = p_f3;
    {
        panda$core$String** $tmp2143 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2142 = *$tmp2143;
        panda$core$String** $tmp2144 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2145 = p_f4;
        *$tmp2144 = $tmp2145;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2145));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2142));
    }
    {
        panda$collections$ImmutableArray** $tmp2147 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2146 = *$tmp2147;
        panda$collections$ImmutableArray** $tmp2148 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2149 = p_f5;
        *$tmp2148 = $tmp2149;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2149));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2146));
    }
    {
        panda$collections$ImmutableArray** $tmp2151 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2150 = *$tmp2151;
        panda$collections$ImmutableArray** $tmp2152 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2153 = p_f6;
        *$tmp2152 = $tmp2153;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2153));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2150));
    }
    {
        panda$collections$ImmutableArray** $tmp2155 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2154 = *$tmp2155;
        panda$collections$ImmutableArray** $tmp2156 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2157 = p_f7;
        *$tmp2156 = $tmp2157;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2157));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2154));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    panda$core$String* $tmp2159;
    panda$core$String* $tmp2162;
    panda$collections$ImmutableArray* $tmp2163;
    panda$collections$ImmutableArray* $tmp2166;
    org$pandalanguage$pandac$ASTNode* $tmp2167;
    org$pandalanguage$pandac$ASTNode* $tmp2170;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2158 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2158 = p_f0;
    {
        panda$core$String** $tmp2160 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2159 = *$tmp2160;
        panda$core$String** $tmp2161 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2162 = p_f1;
        *$tmp2161 = $tmp2162;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2162));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2159));
    }
    {
        panda$collections$ImmutableArray** $tmp2164 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2163 = *$tmp2164;
        panda$collections$ImmutableArray** $tmp2165 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2166 = p_f2;
        *$tmp2165 = $tmp2166;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2166));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2163));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2168 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2167 = *$tmp2168;
        org$pandalanguage$pandac$ASTNode** $tmp2169 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2170 = p_f3;
        *$tmp2169 = $tmp2170;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2170));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2167));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2172;
    org$pandalanguage$pandac$ASTNode* $tmp2175;
    panda$core$String* $tmp2176;
    panda$core$String* $tmp2179;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2171 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2171 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2173 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2172 = *$tmp2173;
        org$pandalanguage$pandac$ASTNode** $tmp2174 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2175 = p_f1;
        *$tmp2174 = $tmp2175;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2175));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2172));
    }
    {
        panda$core$String** $tmp2177 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2176 = *$tmp2177;
        panda$core$String** $tmp2178 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2179 = p_f2;
        *$tmp2178 = $tmp2179;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2179));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2176));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2181;
    org$pandalanguage$pandac$ASTNode* $tmp2184;
    panda$collections$ImmutableArray* $tmp2185;
    panda$collections$ImmutableArray* $tmp2188;
    org$pandalanguage$pandac$ASTNode* $tmp2189;
    org$pandalanguage$pandac$ASTNode* $tmp2192;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2180 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2180 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2182 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2181 = *$tmp2182;
        org$pandalanguage$pandac$ASTNode** $tmp2183 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2184 = p_f1;
        *$tmp2183 = $tmp2184;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2184));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2181));
    }
    {
        panda$collections$ImmutableArray** $tmp2186 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2185 = *$tmp2186;
        panda$collections$ImmutableArray** $tmp2187 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2188 = p_f2;
        *$tmp2187 = $tmp2188;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2188));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2185));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2190 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2189 = *$tmp2190;
        org$pandalanguage$pandac$ASTNode** $tmp2191 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2192 = p_f3;
        *$tmp2191 = $tmp2192;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2192));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2189));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, panda$collections$ImmutableArray* p_f0) {
    panda$collections$ImmutableArray* $tmp2193;
    panda$collections$ImmutableArray* $tmp2196;
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableArray** $tmp2194 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp2193 = *$tmp2194;
        panda$collections$ImmutableArray** $tmp2195 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp2196 = p_f0;
        *$tmp2195 = $tmp2196;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2196));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2193));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, org$pandalanguage$pandac$ASTNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    panda$core$String* $tmp2198;
    panda$core$String* $tmp2201;
    org$pandalanguage$pandac$ASTNode* $tmp2202;
    org$pandalanguage$pandac$ASTNode* $tmp2205;
    org$pandalanguage$pandac$ASTNode* $tmp2206;
    org$pandalanguage$pandac$ASTNode* $tmp2209;
    panda$collections$ImmutableArray* $tmp2210;
    panda$collections$ImmutableArray* $tmp2213;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2197 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2197 = p_f0;
    {
        panda$core$String** $tmp2199 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2198 = *$tmp2199;
        panda$core$String** $tmp2200 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2201 = p_f1;
        *$tmp2200 = $tmp2201;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2201));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2198));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2203 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2202 = *$tmp2203;
        org$pandalanguage$pandac$ASTNode** $tmp2204 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2205 = p_f2;
        *$tmp2204 = $tmp2205;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2205));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2202));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2207 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2206 = *$tmp2207;
        org$pandalanguage$pandac$ASTNode** $tmp2208 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2209 = p_f3;
        *$tmp2208 = $tmp2209;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2209));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2206));
    }
    {
        panda$collections$ImmutableArray** $tmp2211 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp2210 = *$tmp2211;
        panda$collections$ImmutableArray** $tmp2212 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp2213 = p_f4;
        *$tmp2212 = $tmp2213;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2213));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2210));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp2215;
    panda$core$String* $tmp2218;
    panda$collections$ImmutableArray* $tmp2219;
    panda$collections$ImmutableArray* $tmp2222;
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
    {
        panda$collections$ImmutableArray** $tmp2220 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2219 = *$tmp2220;
        panda$collections$ImmutableArray** $tmp2221 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2222 = p_f2;
        *$tmp2221 = $tmp2222;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2222));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2219));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp2224;
    panda$core$String* $tmp2227;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2223 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2223 = p_f0;
    {
        panda$core$String** $tmp2225 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2224 = *$tmp2225;
        panda$core$String** $tmp2226 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2227 = p_f1;
        *$tmp2226 = $tmp2227;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2227));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2224));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2229;
    org$pandalanguage$pandac$ASTNode* $tmp2232;
    panda$collections$ImmutableArray* $tmp2233;
    panda$collections$ImmutableArray* $tmp2236;
    org$pandalanguage$pandac$ASTNode* $tmp2237;
    org$pandalanguage$pandac$ASTNode* $tmp2240;
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
        panda$collections$ImmutableArray** $tmp2234 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2233 = *$tmp2234;
        panda$collections$ImmutableArray** $tmp2235 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2236 = p_f2;
        *$tmp2235 = $tmp2236;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2236));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2233));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2238 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2237 = *$tmp2238;
        org$pandalanguage$pandac$ASTNode** $tmp2239 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2240 = p_f3;
        *$tmp2239 = $tmp2240;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2240));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2237));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$UInt64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2241 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2241 = p_f0;
    panda$core$UInt64* $tmp2242 = ((panda$core$UInt64*) ((char*) self->$data + 16));
    *$tmp2242 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0) {
    org$pandalanguage$pandac$IRNode* $tmp2243;
    org$pandalanguage$pandac$IRNode* $tmp2246;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp2244 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp2243 = *$tmp2244;
        org$pandalanguage$pandac$IRNode** $tmp2245 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp2246 = p_f0;
        *$tmp2245 = $tmp2246;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2246));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2243));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp2248;
    panda$core$String* $tmp2251;
    panda$collections$ImmutableArray* $tmp2252;
    panda$collections$ImmutableArray* $tmp2255;
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
    {
        panda$collections$ImmutableArray** $tmp2253 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2252 = *$tmp2253;
        panda$collections$ImmutableArray** $tmp2254 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2255 = p_f2;
        *$tmp2254 = $tmp2255;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2255));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2252));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2257;
    org$pandalanguage$pandac$ASTNode* $tmp2260;
    panda$collections$ImmutableArray* $tmp2261;
    panda$collections$ImmutableArray* $tmp2264;
    panda$collections$ImmutableArray* $tmp2265;
    panda$collections$ImmutableArray* $tmp2268;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2256 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2256 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2258 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2257 = *$tmp2258;
        org$pandalanguage$pandac$ASTNode** $tmp2259 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2260 = p_f1;
        *$tmp2259 = $tmp2260;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2260));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2257));
    }
    {
        panda$collections$ImmutableArray** $tmp2262 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2261 = *$tmp2262;
        panda$collections$ImmutableArray** $tmp2263 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2264 = p_f2;
        *$tmp2263 = $tmp2264;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2264));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2261));
    }
    {
        panda$collections$ImmutableArray** $tmp2266 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2265 = *$tmp2266;
        panda$collections$ImmutableArray** $tmp2267 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2268 = p_f3;
        *$tmp2267 = $tmp2268;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2268));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2265));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$MethodDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, org$pandalanguage$pandac$ASTNode* p_f6, panda$collections$ImmutableArray* p_f7) {
    org$pandalanguage$pandac$ASTNode* $tmp2270;
    org$pandalanguage$pandac$ASTNode* $tmp2273;
    panda$collections$ImmutableArray* $tmp2274;
    panda$collections$ImmutableArray* $tmp2277;
    panda$core$String* $tmp2279;
    panda$core$String* $tmp2282;
    panda$collections$ImmutableArray* $tmp2283;
    panda$collections$ImmutableArray* $tmp2286;
    org$pandalanguage$pandac$ASTNode* $tmp2287;
    org$pandalanguage$pandac$ASTNode* $tmp2290;
    panda$collections$ImmutableArray* $tmp2291;
    panda$collections$ImmutableArray* $tmp2294;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2269 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2269 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2271 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2270 = *$tmp2271;
        org$pandalanguage$pandac$ASTNode** $tmp2272 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2273 = p_f1;
        *$tmp2272 = $tmp2273;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2273));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2270));
    }
    {
        panda$collections$ImmutableArray** $tmp2275 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2274 = *$tmp2275;
        panda$collections$ImmutableArray** $tmp2276 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2277 = p_f2;
        *$tmp2276 = $tmp2277;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2277));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2274));
    }
    org$pandalanguage$pandac$MethodDecl$Kind* $tmp2278 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) self->$data + 32));
    *$tmp2278 = p_f3;
    {
        panda$core$String** $tmp2280 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2279 = *$tmp2280;
        panda$core$String** $tmp2281 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2282 = p_f4;
        *$tmp2281 = $tmp2282;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2282));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2279));
    }
    {
        panda$collections$ImmutableArray** $tmp2284 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2283 = *$tmp2284;
        panda$collections$ImmutableArray** $tmp2285 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2286 = p_f5;
        *$tmp2285 = $tmp2286;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2286));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2283));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2288 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 56));
        $tmp2287 = *$tmp2288;
        org$pandalanguage$pandac$ASTNode** $tmp2289 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 56));
        $tmp2290 = p_f6;
        *$tmp2289 = $tmp2290;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2290));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2287));
    }
    {
        panda$collections$ImmutableArray** $tmp2292 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2291 = *$tmp2292;
        panda$collections$ImmutableArray** $tmp2293 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2294 = p_f7;
        *$tmp2293 = $tmp2294;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2294));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2291));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    panda$collections$ImmutableArray* $tmp2297;
    panda$collections$ImmutableArray* $tmp2300;
    org$pandalanguage$pandac$ASTNode* $tmp2301;
    org$pandalanguage$pandac$ASTNode* $tmp2304;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2295 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2295 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2296 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp2296 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp2298 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2297 = *$tmp2298;
        panda$collections$ImmutableArray** $tmp2299 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2300 = p_f2;
        *$tmp2299 = $tmp2300;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2300));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2297));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2302 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2301 = *$tmp2302;
        org$pandalanguage$pandac$ASTNode** $tmp2303 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2304 = p_f3;
        *$tmp2303 = $tmp2304;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2304));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2301));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$core$String* $tmp2306;
    panda$core$String* $tmp2309;
    org$pandalanguage$pandac$ASTNode* $tmp2310;
    org$pandalanguage$pandac$ASTNode* $tmp2313;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2305 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2305 = p_f0;
    {
        panda$core$String** $tmp2307 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2306 = *$tmp2307;
        panda$core$String** $tmp2308 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2309 = p_f1;
        *$tmp2308 = $tmp2309;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2309));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2306));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2311 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2310 = *$tmp2311;
        org$pandalanguage$pandac$ASTNode** $tmp2312 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2313 = p_f2;
        *$tmp2312 = $tmp2313;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2313));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2310));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2316;
    org$pandalanguage$pandac$ASTNode* $tmp2319;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2314 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2314 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2315 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp2315 = p_f1;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2317 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2316 = *$tmp2317;
        org$pandalanguage$pandac$ASTNode** $tmp2318 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2319 = p_f2;
        *$tmp2318 = $tmp2319;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2319));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2316));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$ASTNode* p_f4) {
    org$pandalanguage$pandac$ASTNode* $tmp2321;
    org$pandalanguage$pandac$ASTNode* $tmp2324;
    org$pandalanguage$pandac$ASTNode* $tmp2325;
    org$pandalanguage$pandac$ASTNode* $tmp2328;
    org$pandalanguage$pandac$ASTNode* $tmp2330;
    org$pandalanguage$pandac$ASTNode* $tmp2333;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2320 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2320 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2322 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2321 = *$tmp2322;
        org$pandalanguage$pandac$ASTNode** $tmp2323 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2324 = p_f1;
        *$tmp2323 = $tmp2324;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2324));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2321));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2326 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2325 = *$tmp2326;
        org$pandalanguage$pandac$ASTNode** $tmp2327 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2328 = p_f2;
        *$tmp2327 = $tmp2328;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2328));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2325));
    }
    panda$core$Bit* $tmp2329 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp2329 = p_f3;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2331 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        $tmp2330 = *$tmp2331;
        org$pandalanguage$pandac$ASTNode** $tmp2332 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        $tmp2333 = p_f4;
        *$tmp2332 = $tmp2333;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2333));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2330));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Real64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2334 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2334 = p_f0;
    panda$core$Real64* $tmp2335 = ((panda$core$Real64*) ((char*) self->$data + 16));
    *$tmp2335 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    org$pandalanguage$pandac$ASTNode* $tmp2337;
    org$pandalanguage$pandac$ASTNode* $tmp2340;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2336 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2336 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2338 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2337 = *$tmp2338;
        org$pandalanguage$pandac$ASTNode** $tmp2339 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2340 = p_f1;
        *$tmp2339 = $tmp2340;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2340));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2337));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp2343;
    panda$collections$ImmutableArray* $tmp2346;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2341 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2341 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp2342 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp2342 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp2344 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2343 = *$tmp2344;
        panda$collections$ImmutableArray** $tmp2345 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2346 = p_f2;
        *$tmp2345 = $tmp2346;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2346));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2343));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp2348;
    panda$collections$ImmutableArray* $tmp2351;
    panda$collections$ImmutableArray* $tmp2352;
    panda$collections$ImmutableArray* $tmp2355;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2347 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2347 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2349 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2348 = *$tmp2349;
        panda$collections$ImmutableArray** $tmp2350 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
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
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    panda$core$String* $tmp2357;
    panda$core$String* $tmp2360;
    org$pandalanguage$pandac$ASTNode* $tmp2361;
    org$pandalanguage$pandac$ASTNode* $tmp2364;
    panda$collections$ImmutableArray* $tmp2365;
    panda$collections$ImmutableArray* $tmp2368;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2356 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2356 = p_f0;
    {
        panda$core$String** $tmp2358 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2357 = *$tmp2358;
        panda$core$String** $tmp2359 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2360 = p_f1;
        *$tmp2359 = $tmp2360;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2360));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2357));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2362 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2361 = *$tmp2362;
        org$pandalanguage$pandac$ASTNode** $tmp2363 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2364 = p_f2;
        *$tmp2363 = $tmp2364;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2364));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2361));
    }
    {
        panda$collections$ImmutableArray** $tmp2366 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2365 = *$tmp2366;
        panda$collections$ImmutableArray** $tmp2367 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2368 = p_f3;
        *$tmp2367 = $tmp2368;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2368));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2365));
    }
}






