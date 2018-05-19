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
typedef panda$core$String* (*$fn326)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn367)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn374)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn385)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn426)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn487)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn534)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn541)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn552)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn591)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn598)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn609)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn650)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn661)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn693)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn700)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn711)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn741)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn775)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn782)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn793)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn825)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn832)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn843)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn895)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn902)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn913)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn982)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn989)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1000)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1034)(org$pandalanguage$pandac$IRNode*);
typedef panda$collections$Iterator* (*$fn1064)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1071)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1082)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1125)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1132)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1143)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1194)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1201)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1212)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1252)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1259)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1270)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1335)(panda$core$Object*);
typedef panda$collections$Iterator* (*$fn1517)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1524)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1535)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1558)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1565)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1576)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1623)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1630)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1641)(panda$collections$Iterator*);

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
static panda$core$String $s433 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s452 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s459 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s464 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s489 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s492 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s524 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s555 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s561 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static panda$core$String $s565 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static panda$core$String $s568 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s572 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s576 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s612 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s630 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s632 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s637 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s652 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s655 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s682 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s684 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s714 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s720 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 24242135792659305, NULL };
static panda$core$String $s722 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s743 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s746 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s765 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s796 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s846 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s874 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s880 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s882 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s885 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s916 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s939 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s944 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s970 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s972 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1003 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1010 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s1012 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1053 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1055 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s1085 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s1115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1151 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1184 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1215 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1221 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s1223 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s1230 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1243 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1273 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1287 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s1295 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s1316 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1319 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1340 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1366 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s1367 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s1381 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s1404 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s1406 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1411 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s1416 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s1427 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s1447 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1450 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1477 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s1479 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s1481 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s1505 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s1508 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1542 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1545 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1579 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1607 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s1613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1644 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

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
    org$pandalanguage$pandac$ASTNode* dc438 = NULL;
    panda$core$String* name440 = NULL;
    panda$collections$ImmutableArray* fields442 = NULL;
    panda$core$MutableString* result447 = NULL;
    panda$core$MutableString* $tmp448;
    panda$core$MutableString* $tmp449;
    panda$core$String* $tmp451;
    panda$core$String* $tmp454;
    panda$core$String* $tmp455;
    panda$core$String* $tmp456;
    panda$core$String* $tmp457;
    panda$core$String* $tmp461;
    panda$core$String* $tmp466;
    panda$core$String* $tmp467;
    org$pandalanguage$pandac$ASTNode* base474 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* ce476 = NULL;
    panda$core$Int64 index478;
    panda$core$String* $tmp480;
    panda$core$String* $tmp481;
    panda$core$String* $tmp482;
    panda$core$String* $tmp483;
    panda$core$String* $tmp484;
    panda$core$String* $tmp485;
    panda$core$String* $tmp486;
    panda$core$Object* $tmp494;
    org$pandalanguage$pandac$ASTNode* dc502 = NULL;
    panda$collections$ImmutableArray* annotations504 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind kind506;
    panda$core$String* name508 = NULL;
    panda$collections$ImmutableArray* generics510 = NULL;
    panda$collections$ImmutableArray* supertypes512 = NULL;
    panda$collections$ImmutableArray* members514 = NULL;
    panda$core$MutableString* result519 = NULL;
    panda$core$MutableString* $tmp520;
    panda$core$MutableString* $tmp521;
    panda$core$String* $tmp523;
    panda$collections$Iterator* Iter$227$17529 = NULL;
    panda$collections$Iterator* $tmp530;
    panda$collections$Iterator* $tmp531;
    org$pandalanguage$pandac$ASTNode* a547 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp548;
    panda$core$Object* $tmp549;
    panda$core$String* $tmp554;
    org$pandalanguage$pandac$ClassDecl$Kind $match$230_17559;
    panda$core$String* $tmp566;
    panda$core$String* $tmp567;
    panda$core$String* $tmp569;
    panda$core$String* $tmp574;
    panda$core$String* $tmp575;
    panda$core$String* $tmp577;
    panda$collections$Iterator* Iter$243$17586 = NULL;
    panda$collections$Iterator* $tmp587;
    panda$collections$Iterator* $tmp588;
    org$pandalanguage$pandac$ASTNode* m604 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp605;
    panda$core$Object* $tmp606;
    panda$core$String* $tmp611;
    panda$core$Char8 $tmp616;
    panda$core$String* $tmp617;
    panda$core$String* $tmp618;
    panda$core$String* label625 = NULL;
    panda$core$String* $tmp627;
    panda$core$String* $tmp628;
    panda$core$String* $tmp629;
    panda$core$String* $tmp636;
    org$pandalanguage$pandac$ASTNode* target641 = NULL;
    org$pandalanguage$pandac$ASTNode* value643 = NULL;
    panda$core$String* $tmp645;
    panda$core$String* $tmp646;
    panda$core$String* $tmp647;
    panda$core$String* $tmp648;
    panda$core$String* $tmp649;
    panda$core$String* $tmp659;
    panda$core$String* $tmp660;
    panda$core$String* label666 = NULL;
    panda$collections$ImmutableArray* statements668 = NULL;
    org$pandalanguage$pandac$ASTNode* test670 = NULL;
    panda$core$MutableString* result675 = NULL;
    panda$core$MutableString* $tmp676;
    panda$core$MutableString* $tmp677;
    panda$core$String* $tmp679;
    panda$core$String* $tmp680;
    panda$collections$Iterator* Iter$264$17688 = NULL;
    panda$collections$Iterator* $tmp689;
    panda$collections$Iterator* $tmp690;
    org$pandalanguage$pandac$ASTNode* s706 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp707;
    panda$core$Object* $tmp708;
    panda$core$String* $tmp713;
    panda$core$String* $tmp718;
    panda$core$String* $tmp719;
    panda$core$String* $tmp724;
    panda$core$String* $tmp725;
    org$pandalanguage$pandac$ASTNode* base732 = NULL;
    panda$core$String* field734 = NULL;
    panda$core$String* $tmp736;
    panda$core$String* $tmp737;
    panda$core$String* $tmp738;
    panda$core$String* $tmp739;
    panda$core$String* $tmp740;
    org$pandalanguage$pandac$ASTNode* dc751 = NULL;
    panda$collections$ImmutableArray* annotations753 = NULL;
    org$pandalanguage$pandac$ASTNode* decl755 = NULL;
    panda$core$MutableString* result760 = NULL;
    panda$core$MutableString* $tmp761;
    panda$core$MutableString* $tmp762;
    panda$core$String* $tmp764;
    panda$collections$Iterator* Iter$276$17770 = NULL;
    panda$collections$Iterator* $tmp771;
    panda$collections$Iterator* $tmp772;
    org$pandalanguage$pandac$ASTNode* a788 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp789;
    panda$core$Object* $tmp790;
    panda$core$String* $tmp795;
    panda$core$String* $tmp800;
    panda$core$String* $tmp801;
    panda$collections$ImmutableArray* entries808 = NULL;
    panda$core$MutableString* result813 = NULL;
    panda$core$MutableString* $tmp814;
    panda$core$MutableString* $tmp815;
    panda$collections$Iterator* Iter$283$17820 = NULL;
    panda$collections$Iterator* $tmp821;
    panda$collections$Iterator* $tmp822;
    org$pandalanguage$pandac$ASTNode* e838 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp839;
    panda$core$Object* $tmp840;
    panda$core$String* $tmp845;
    panda$core$String* $tmp850;
    panda$core$String* $tmp851;
    panda$core$String* label858 = NULL;
    org$pandalanguage$pandac$ASTNode* target860 = NULL;
    org$pandalanguage$pandac$ASTNode* list862 = NULL;
    panda$collections$ImmutableArray* statements864 = NULL;
    panda$core$MutableString* result869 = NULL;
    panda$core$MutableString* $tmp870;
    panda$core$MutableString* $tmp871;
    panda$core$String* $tmp873;
    panda$core$String* $tmp876;
    panda$core$String* $tmp877;
    panda$core$String* $tmp878;
    panda$core$String* $tmp879;
    panda$collections$Iterator* Iter$293$17890 = NULL;
    panda$collections$Iterator* $tmp891;
    panda$collections$Iterator* $tmp892;
    org$pandalanguage$pandac$ASTNode* s908 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp909;
    panda$core$Object* $tmp910;
    panda$core$String* $tmp915;
    panda$core$Char8 $tmp920;
    panda$core$String* $tmp921;
    panda$core$String* $tmp922;
    panda$core$String* name929 = NULL;
    panda$collections$ImmutableArray* subtypes931 = NULL;
    panda$core$String* $tmp933;
    panda$core$String* $tmp934;
    panda$core$String* $tmp935;
    panda$core$String* $tmp936;
    panda$core$String* $tmp937;
    panda$core$String* $tmp941;
    panda$core$String* name949 = NULL;
    panda$core$String* $tmp951;
    org$pandalanguage$pandac$ASTNode* test955 = NULL;
    panda$collections$ImmutableArray* ifTrue957 = NULL;
    org$pandalanguage$pandac$ASTNode* ifFalse959 = NULL;
    panda$core$MutableString* result964 = NULL;
    panda$core$MutableString* $tmp965;
    panda$core$MutableString* $tmp966;
    panda$core$String* $tmp968;
    panda$core$String* $tmp969;
    panda$collections$Iterator* Iter$304$17977 = NULL;
    panda$collections$Iterator* $tmp978;
    panda$collections$Iterator* $tmp979;
    org$pandalanguage$pandac$ASTNode* s995 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp996;
    panda$core$Object* $tmp997;
    panda$core$String* $tmp1002;
    panda$core$Char8 $tmp1007;
    panda$core$String* $tmp1008;
    panda$core$String* $tmp1009;
    panda$core$String* $tmp1014;
    panda$core$String* $tmp1015;
    panda$core$UInt64 value1022;
    panda$core$String* $tmp1024;
    panda$core$String* $tmp1025;
    org$pandalanguage$pandac$IRNode* ir1030 = NULL;
    panda$core$String* $tmp1032;
    panda$core$String* $tmp1033;
    panda$core$String* label1039 = NULL;
    panda$collections$ImmutableArray* statements1041 = NULL;
    panda$core$MutableString* result1046 = NULL;
    panda$core$MutableString* $tmp1047;
    panda$core$MutableString* $tmp1048;
    panda$core$String* $tmp1050;
    panda$core$String* $tmp1051;
    panda$collections$Iterator* Iter$322$171059 = NULL;
    panda$collections$Iterator* $tmp1060;
    panda$collections$Iterator* $tmp1061;
    org$pandalanguage$pandac$ASTNode* s1077 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1078;
    panda$core$Object* $tmp1079;
    panda$core$String* $tmp1084;
    panda$core$Char8 $tmp1089;
    panda$core$String* $tmp1090;
    panda$core$String* $tmp1091;
    org$pandalanguage$pandac$ASTNode* value1098 = NULL;
    panda$collections$ImmutableArray* whens1100 = NULL;
    panda$collections$ImmutableArray* other1102 = NULL;
    panda$core$MutableString* result1107 = NULL;
    panda$core$MutableString* $tmp1108;
    panda$core$MutableString* $tmp1109;
    panda$core$String* $tmp1111;
    panda$core$String* $tmp1112;
    panda$collections$Iterator* Iter$329$171120 = NULL;
    panda$collections$Iterator* $tmp1121;
    panda$collections$Iterator* $tmp1122;
    org$pandalanguage$pandac$ASTNode* w1138 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1139;
    panda$core$Object* $tmp1140;
    panda$core$String* $tmp1145;
    panda$core$String* $tmp1150;
    panda$core$Char8 $tmp1153;
    panda$core$String* $tmp1154;
    panda$core$String* $tmp1155;
    org$pandalanguage$pandac$ASTNode* dc1162 = NULL;
    panda$collections$ImmutableArray* annotations1164 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind kind1166;
    panda$core$String* name1168 = NULL;
    panda$collections$ImmutableArray* parameters1170 = NULL;
    org$pandalanguage$pandac$ASTNode* returnType1172 = NULL;
    panda$collections$ImmutableArray* statements1174 = NULL;
    panda$core$MutableString* result1179 = NULL;
    panda$core$MutableString* $tmp1180;
    panda$core$MutableString* $tmp1181;
    panda$core$String* $tmp1183;
    panda$collections$Iterator* Iter$342$171189 = NULL;
    panda$collections$Iterator* $tmp1190;
    panda$collections$Iterator* $tmp1191;
    org$pandalanguage$pandac$ASTNode* a1207 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1208;
    panda$core$Object* $tmp1209;
    panda$core$String* $tmp1214;
    org$pandalanguage$pandac$MethodDecl$Kind $match$345_171219;
    panda$core$String* $tmp1225;
    panda$core$String* $tmp1226;
    panda$core$String* $tmp1227;
    panda$core$String* $tmp1228;
    panda$core$String* $tmp1232;
    panda$core$String* $tmp1237;
    panda$core$String* $tmp1238;
    panda$collections$Iterator* Iter$356$211247 = NULL;
    panda$collections$Iterator* $tmp1248;
    panda$collections$Iterator* $tmp1249;
    org$pandalanguage$pandac$ASTNode* s1265 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1266;
    panda$core$Object* $tmp1267;
    panda$core$String* $tmp1272;
    panda$core$Char8 $tmp1277;
    panda$core$String* $tmp1278;
    panda$core$String* $tmp1279;
    panda$core$String* $tmp1286;
    org$pandalanguage$pandac$ASTNode* base1291 = NULL;
    panda$core$String* $tmp1293;
    panda$core$String* $tmp1294;
    panda$core$String* name1300 = NULL;
    panda$core$String* $tmp1302;
    panda$core$String* name1306 = NULL;
    org$pandalanguage$pandac$ASTNode* type1308 = NULL;
    panda$core$String* $tmp1310;
    panda$core$String* $tmp1311;
    panda$core$String* $tmp1312;
    panda$core$String* $tmp1313;
    panda$core$String* $tmp1314;
    org$pandalanguage$pandac$parser$Token$Kind kind1324;
    org$pandalanguage$pandac$ASTNode* base1326 = NULL;
    panda$core$String* $tmp1328;
    panda$core$String* $tmp1329;
    panda$core$String* $tmp1330;
    panda$core$String* $tmp1331;
    panda$core$String* $tmp1332;
    panda$core$Object* $tmp1333;
    org$pandalanguage$pandac$ASTNode* start1345 = NULL;
    org$pandalanguage$pandac$ASTNode* end1347 = NULL;
    panda$core$Bit inclusive1349;
    org$pandalanguage$pandac$ASTNode* step1351 = NULL;
    panda$core$MutableString* result1356 = NULL;
    panda$core$MutableString* $tmp1357;
    panda$core$MutableString* $tmp1358;
    org$pandalanguage$pandac$ASTNode* $tmp1360;
    org$pandalanguage$pandac$ASTNode* $tmp1368;
    org$pandalanguage$pandac$ASTNode* $tmp1374;
    panda$core$String* $tmp1380;
    panda$core$String* $tmp1383;
    panda$core$String* $tmp1384;
    panda$core$Real64 value1391;
    panda$core$String* $tmp1393;
    panda$core$String* $tmp1394;
    org$pandalanguage$pandac$ASTNode* value1399 = NULL;
    panda$core$String* $tmp1401;
    panda$core$String* $tmp1402;
    panda$core$String* $tmp1403;
    panda$core$String* $tmp1410;
    panda$core$String* $tmp1415;
    panda$core$String* str1420 = NULL;
    panda$core$String* $tmp1422;
    panda$core$String* $tmp1426;
    panda$core$String* name1431 = NULL;
    panda$core$String* $tmp1433;
    panda$core$String* name1437 = NULL;
    org$pandalanguage$pandac$ASTNode* type1439 = NULL;
    panda$core$String* $tmp1441;
    panda$core$String* $tmp1442;
    panda$core$String* $tmp1443;
    panda$core$String* $tmp1444;
    panda$core$String* $tmp1445;
    panda$core$String* $tmp1454;
    panda$core$String* name1458 = NULL;
    panda$core$String* $tmp1460;
    org$pandalanguage$pandac$Variable$Kind kind1464;
    panda$collections$ImmutableArray* decls1466 = NULL;
    panda$core$MutableString* result1471 = NULL;
    panda$core$MutableString* $tmp1472;
    panda$core$MutableString* $tmp1473;
    org$pandalanguage$pandac$Variable$Kind $match$414_171475;
    panda$core$String* $tmp1484;
    panda$core$String* $tmp1486;
    panda$core$String* $tmp1487;
    panda$collections$ImmutableArray* tests1494 = NULL;
    panda$collections$ImmutableArray* statements1496 = NULL;
    panda$core$MutableString* result1501 = NULL;
    panda$core$MutableString* $tmp1502;
    panda$core$MutableString* $tmp1503;
    panda$core$String* separator1506 = NULL;
    panda$core$String* $tmp1507;
    panda$collections$Iterator* Iter$425$171512 = NULL;
    panda$collections$Iterator* $tmp1513;
    panda$collections$Iterator* $tmp1514;
    org$pandalanguage$pandac$ASTNode* t1530 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1531;
    panda$core$Object* $tmp1532;
    panda$core$String* $tmp1537;
    panda$core$String* $tmp1538;
    panda$core$String* $tmp1539;
    panda$core$String* $tmp1540;
    panda$core$Char8 $tmp1549;
    panda$collections$Iterator* Iter$429$171553 = NULL;
    panda$collections$Iterator* $tmp1554;
    panda$collections$Iterator* $tmp1555;
    org$pandalanguage$pandac$ASTNode* s1571 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1572;
    panda$core$Object* $tmp1573;
    panda$core$String* $tmp1578;
    panda$core$String* $tmp1583;
    panda$core$String* $tmp1584;
    panda$core$String* label1591 = NULL;
    org$pandalanguage$pandac$ASTNode* test1593 = NULL;
    panda$collections$ImmutableArray* statements1595 = NULL;
    panda$core$MutableString* result1600 = NULL;
    panda$core$MutableString* $tmp1601;
    panda$core$MutableString* $tmp1602;
    panda$core$String* $tmp1604;
    panda$core$String* $tmp1605;
    panda$core$String* $tmp1609;
    panda$core$String* $tmp1610;
    panda$collections$Iterator* Iter$439$171618 = NULL;
    panda$collections$Iterator* $tmp1619;
    panda$collections$Iterator* $tmp1620;
    org$pandalanguage$pandac$ASTNode* s1636 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1637;
    panda$core$Object* $tmp1638;
    panda$core$String* $tmp1643;
    panda$core$Char8 $tmp1648;
    panda$core$String* $tmp1649;
    panda$core$String* $tmp1650;
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
            panda$core$String* $tmp431 = panda$collections$ImmutableArray$join$R$panda$core$String(args419);
            $tmp430 = $tmp431;
            panda$core$String* $tmp432 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp424, $tmp430);
            $tmp423 = $tmp432;
            panda$core$String* $tmp434 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp423, &$s433);
            $tmp422 = $tmp434;
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
            $l435:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 9 }));
        if ($tmp437.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp439 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 16));
            dc438 = *$tmp439;
            panda$core$String** $tmp441 = ((panda$core$String**) ((char*) $match$180_9243->$data + 24));
            name440 = *$tmp441;
            panda$collections$ImmutableArray** $tmp443 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 32));
            fields442 = *$tmp443;
            int $tmp446;
            {
                panda$core$MutableString* $tmp450 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp450);
                $tmp449 = $tmp450;
                $tmp448 = $tmp449;
                result447 = $tmp448;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp448));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp449));
                if (((panda$core$Bit) { dc438 != NULL }).value) {
                {
                    panda$core$String* $tmp453 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc438), &$s452);
                    $tmp451 = $tmp453;
                    panda$core$MutableString$append$panda$core$String(result447, $tmp451);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp451));
                }
                }
                panda$core$String* $tmp458 = panda$core$String$convert$R$panda$core$String(name440);
                $tmp457 = $tmp458;
                panda$core$String* $tmp460 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp457, &$s459);
                $tmp456 = $tmp460;
                panda$core$String* $tmp462 = panda$collections$ImmutableArray$join$R$panda$core$String(fields442);
                $tmp461 = $tmp462;
                panda$core$String* $tmp463 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp456, $tmp461);
                $tmp455 = $tmp463;
                panda$core$String* $tmp465 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp455, &$s464);
                $tmp454 = $tmp465;
                panda$core$MutableString$append$panda$core$String(result447, $tmp454);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp454));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp455));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp461));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp456));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp457));
                panda$core$String* $tmp468 = panda$core$MutableString$finish$R$panda$core$String(result447);
                $tmp467 = $tmp468;
                $tmp466 = $tmp467;
                $returnValue250 = $tmp466;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp466));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp467));
                $tmp446 = 0;
                goto $l444;
                $l469:;
                $tmp242 = 12;
                goto $l240;
                $l470:;
                return $returnValue250;
            }
            $l444:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result447));
            result447 = NULL;
            switch ($tmp446) {
                case 0: goto $l469;
            }
            $l472:;
        }
        }
        else {
        panda$core$Bit $tmp473 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 10 }));
        if ($tmp473.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp475 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 16));
            base474 = *$tmp475;
            org$pandalanguage$pandac$ChoiceEntry** $tmp477 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$180_9243->$data + 24));
            ce476 = *$tmp477;
            panda$core$Int64* $tmp479 = ((panda$core$Int64*) ((char*) $match$180_9243->$data + 32));
            index478 = *$tmp479;
            panda$core$String* $tmp488 = (($fn487) base474->$class->vtable[0])(base474);
            $tmp486 = $tmp488;
            panda$core$String* $tmp490 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp486, &$s489);
            $tmp485 = $tmp490;
            panda$core$String* $tmp491 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp485, ((panda$core$Object*) ce476));
            $tmp484 = $tmp491;
            panda$core$String* $tmp493 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp484, &$s492);
            $tmp483 = $tmp493;
            panda$core$Int64$wrapper* $tmp495;
            $tmp495 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
            $tmp495->value = index478;
            $tmp494 = ((panda$core$Object*) $tmp495);
            panda$core$String* $tmp496 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp483, $tmp494);
            $tmp482 = $tmp496;
            panda$core$String* $tmp498 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp482, &$s497);
            $tmp481 = $tmp498;
            $tmp480 = $tmp481;
            $returnValue250 = $tmp480;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp480));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp481));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp482));
            panda$core$Panda$unref$panda$core$Object($tmp494);
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp483));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp484));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp485));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp486));
            $tmp242 = 13;
            goto $l240;
            $l499:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 11 }));
        if ($tmp501.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp503 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 16));
            dc502 = *$tmp503;
            panda$collections$ImmutableArray** $tmp505 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 24));
            annotations504 = *$tmp505;
            org$pandalanguage$pandac$ClassDecl$Kind* $tmp507 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$180_9243->$data + 32));
            kind506 = *$tmp507;
            panda$core$String** $tmp509 = ((panda$core$String**) ((char*) $match$180_9243->$data + 40));
            name508 = *$tmp509;
            panda$collections$ImmutableArray** $tmp511 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 48));
            generics510 = *$tmp511;
            panda$collections$ImmutableArray** $tmp513 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 56));
            supertypes512 = *$tmp513;
            panda$collections$ImmutableArray** $tmp515 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 64));
            members514 = *$tmp515;
            int $tmp518;
            {
                panda$core$MutableString* $tmp522 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp522);
                $tmp521 = $tmp522;
                $tmp520 = $tmp521;
                result519 = $tmp520;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp520));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp521));
                if (((panda$core$Bit) { dc502 != NULL }).value) {
                {
                    panda$core$String* $tmp525 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc502), &$s524);
                    $tmp523 = $tmp525;
                    panda$core$MutableString$append$panda$core$String(result519, $tmp523);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp523));
                }
                }
                {
                    int $tmp528;
                    {
                        ITable* $tmp532 = ((panda$collections$Iterable*) annotations504)->$class->itable;
                        while ($tmp532->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp532 = $tmp532->next;
                        }
                        $fn534 $tmp533 = $tmp532->methods[0];
                        panda$collections$Iterator* $tmp535 = $tmp533(((panda$collections$Iterable*) annotations504));
                        $tmp531 = $tmp535;
                        $tmp530 = $tmp531;
                        Iter$227$17529 = $tmp530;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp530));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp531));
                        $l536:;
                        ITable* $tmp539 = Iter$227$17529->$class->itable;
                        while ($tmp539->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp539 = $tmp539->next;
                        }
                        $fn541 $tmp540 = $tmp539->methods[0];
                        panda$core$Bit $tmp542 = $tmp540(Iter$227$17529);
                        panda$core$Bit $tmp543 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp542);
                        bool $tmp538 = $tmp543.value;
                        if (!$tmp538) goto $l537;
                        {
                            int $tmp546;
                            {
                                ITable* $tmp550 = Iter$227$17529->$class->itable;
                                while ($tmp550->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp550 = $tmp550->next;
                                }
                                $fn552 $tmp551 = $tmp550->methods[1];
                                panda$core$Object* $tmp553 = $tmp551(Iter$227$17529);
                                $tmp549 = $tmp553;
                                $tmp548 = ((org$pandalanguage$pandac$ASTNode*) $tmp549);
                                a547 = $tmp548;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp548));
                                panda$core$Panda$unref$panda$core$Object($tmp549);
                                panda$core$String* $tmp556 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a547), &$s555);
                                $tmp554 = $tmp556;
                                panda$core$MutableString$append$panda$core$String(result519, $tmp554);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp554));
                            }
                            $tmp546 = -1;
                            goto $l544;
                            $l544:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a547));
                            a547 = NULL;
                            switch ($tmp546) {
                                case -1: goto $l557;
                            }
                            $l557:;
                        }
                        goto $l536;
                        $l537:;
                    }
                    $tmp528 = -1;
                    goto $l526;
                    $l526:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$227$17529));
                    Iter$227$17529 = NULL;
                    switch ($tmp528) {
                        case -1: goto $l558;
                    }
                    $l558:;
                }
                {
                    $match$230_17559 = kind506;
                    panda$core$Bit $tmp560 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$230_17559.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp560.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result519, &$s561);
                    }
                    }
                    else {
                    panda$core$Bit $tmp562 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$230_17559.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp562.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result519, &$s563);
                    }
                    }
                    else {
                    panda$core$Bit $tmp564 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$230_17559.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp564.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result519, &$s565);
                    }
                    }
                    }
                    }
                }
                panda$core$MutableString$append$panda$core$String(result519, name508);
                if (((panda$core$Bit) { generics510 != NULL }).value) {
                {
                    panda$core$String* $tmp570 = panda$collections$ImmutableArray$join$R$panda$core$String(generics510);
                    $tmp569 = $tmp570;
                    panda$core$String* $tmp571 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s568, $tmp569);
                    $tmp567 = $tmp571;
                    panda$core$String* $tmp573 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp567, &$s572);
                    $tmp566 = $tmp573;
                    panda$core$MutableString$append$panda$core$String(result519, $tmp566);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp566));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp567));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp569));
                }
                }
                if (((panda$core$Bit) { supertypes512 != NULL }).value) {
                {
                    panda$core$String* $tmp578 = panda$collections$ImmutableArray$join$R$panda$core$String(supertypes512);
                    $tmp577 = $tmp578;
                    panda$core$String* $tmp579 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s576, $tmp577);
                    $tmp575 = $tmp579;
                    panda$core$String* $tmp581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp575, &$s580);
                    $tmp574 = $tmp581;
                    panda$core$MutableString$append$panda$core$String(result519, $tmp574);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp574));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp575));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp577));
                }
                }
                panda$core$MutableString$append$panda$core$String(result519, &$s582);
                {
                    int $tmp585;
                    {
                        ITable* $tmp589 = ((panda$collections$Iterable*) members514)->$class->itable;
                        while ($tmp589->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp589 = $tmp589->next;
                        }
                        $fn591 $tmp590 = $tmp589->methods[0];
                        panda$collections$Iterator* $tmp592 = $tmp590(((panda$collections$Iterable*) members514));
                        $tmp588 = $tmp592;
                        $tmp587 = $tmp588;
                        Iter$243$17586 = $tmp587;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp587));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp588));
                        $l593:;
                        ITable* $tmp596 = Iter$243$17586->$class->itable;
                        while ($tmp596->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp596 = $tmp596->next;
                        }
                        $fn598 $tmp597 = $tmp596->methods[0];
                        panda$core$Bit $tmp599 = $tmp597(Iter$243$17586);
                        panda$core$Bit $tmp600 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp599);
                        bool $tmp595 = $tmp600.value;
                        if (!$tmp595) goto $l594;
                        {
                            int $tmp603;
                            {
                                ITable* $tmp607 = Iter$243$17586->$class->itable;
                                while ($tmp607->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp607 = $tmp607->next;
                                }
                                $fn609 $tmp608 = $tmp607->methods[1];
                                panda$core$Object* $tmp610 = $tmp608(Iter$243$17586);
                                $tmp606 = $tmp610;
                                $tmp605 = ((org$pandalanguage$pandac$ASTNode*) $tmp606);
                                m604 = $tmp605;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp605));
                                panda$core$Panda$unref$panda$core$Object($tmp606);
                                panda$core$String* $tmp613 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) m604), &$s612);
                                $tmp611 = $tmp613;
                                panda$core$MutableString$append$panda$core$String(result519, $tmp611);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp611));
                            }
                            $tmp603 = -1;
                            goto $l601;
                            $l601:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) m604));
                            m604 = NULL;
                            switch ($tmp603) {
                                case -1: goto $l614;
                            }
                            $l614:;
                        }
                        goto $l593;
                        $l594:;
                    }
                    $tmp585 = -1;
                    goto $l583;
                    $l583:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$243$17586));
                    Iter$243$17586 = NULL;
                    switch ($tmp585) {
                        case -1: goto $l615;
                    }
                    $l615:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp616, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result519, $tmp616);
                panda$core$String* $tmp619 = panda$core$MutableString$finish$R$panda$core$String(result519);
                $tmp618 = $tmp619;
                $tmp617 = $tmp618;
                $returnValue250 = $tmp617;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp617));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp618));
                $tmp518 = 0;
                goto $l516;
                $l620:;
                $tmp242 = 14;
                goto $l240;
                $l621:;
                return $returnValue250;
            }
            $l516:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result519));
            result519 = NULL;
            switch ($tmp518) {
                case 0: goto $l620;
            }
            $l623:;
        }
        }
        else {
        panda$core$Bit $tmp624 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 12 }));
        if ($tmp624.value) {
        {
            panda$core$String** $tmp626 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            label625 = *$tmp626;
            if (((panda$core$Bit) { label625 != NULL }).value) {
            {
                panda$core$String* $tmp631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s630, label625);
                $tmp629 = $tmp631;
                panda$core$String* $tmp633 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp629, &$s632);
                $tmp628 = $tmp633;
                $tmp627 = $tmp628;
                $returnValue250 = $tmp627;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp627));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp628));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp629));
                $tmp242 = 15;
                goto $l240;
                $l634:;
                return $returnValue250;
            }
            }
            $tmp636 = &$s637;
            $returnValue250 = $tmp636;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp636));
            $tmp242 = 16;
            goto $l240;
            $l638:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 13 }));
        if ($tmp640.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp642 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 16));
            target641 = *$tmp642;
            org$pandalanguage$pandac$ASTNode** $tmp644 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 24));
            value643 = *$tmp644;
            if (((panda$core$Bit) { value643 != NULL }).value) {
            {
                panda$core$String* $tmp651 = (($fn650) target641->$class->vtable[0])(target641);
                $tmp649 = $tmp651;
                panda$core$String* $tmp653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp649, &$s652);
                $tmp648 = $tmp653;
                panda$core$String* $tmp654 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp648, ((panda$core$Object*) value643));
                $tmp647 = $tmp654;
                panda$core$String* $tmp656 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp647, &$s655);
                $tmp646 = $tmp656;
                $tmp645 = $tmp646;
                $returnValue250 = $tmp645;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp645));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp646));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp647));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp648));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp649));
                $tmp242 = 17;
                goto $l240;
                $l657:;
                return $returnValue250;
            }
            }
            panda$core$String* $tmp662 = (($fn661) target641->$class->vtable[0])(target641);
            $tmp660 = $tmp662;
            $tmp659 = $tmp660;
            $returnValue250 = $tmp659;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp659));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp660));
            $tmp242 = 18;
            goto $l240;
            $l663:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp665 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 14 }));
        if ($tmp665.value) {
        {
            panda$core$String** $tmp667 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            label666 = *$tmp667;
            panda$collections$ImmutableArray** $tmp669 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 24));
            statements668 = *$tmp669;
            org$pandalanguage$pandac$ASTNode** $tmp671 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 32));
            test670 = *$tmp671;
            int $tmp674;
            {
                panda$core$MutableString* $tmp678 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp678);
                $tmp677 = $tmp678;
                $tmp676 = $tmp677;
                result675 = $tmp676;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp676));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp677));
                if (((panda$core$Bit) { label666 != NULL }).value) {
                {
                    panda$core$String* $tmp681 = panda$core$String$convert$R$panda$core$String(label666);
                    $tmp680 = $tmp681;
                    panda$core$String* $tmp683 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp680, &$s682);
                    $tmp679 = $tmp683;
                    panda$core$MutableString$append$panda$core$String(result675, $tmp679);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp679));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp680));
                }
                }
                panda$core$MutableString$append$panda$core$String(result675, &$s684);
                {
                    int $tmp687;
                    {
                        ITable* $tmp691 = ((panda$collections$Iterable*) statements668)->$class->itable;
                        while ($tmp691->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp691 = $tmp691->next;
                        }
                        $fn693 $tmp692 = $tmp691->methods[0];
                        panda$collections$Iterator* $tmp694 = $tmp692(((panda$collections$Iterable*) statements668));
                        $tmp690 = $tmp694;
                        $tmp689 = $tmp690;
                        Iter$264$17688 = $tmp689;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp689));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp690));
                        $l695:;
                        ITable* $tmp698 = Iter$264$17688->$class->itable;
                        while ($tmp698->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp698 = $tmp698->next;
                        }
                        $fn700 $tmp699 = $tmp698->methods[0];
                        panda$core$Bit $tmp701 = $tmp699(Iter$264$17688);
                        panda$core$Bit $tmp702 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp701);
                        bool $tmp697 = $tmp702.value;
                        if (!$tmp697) goto $l696;
                        {
                            int $tmp705;
                            {
                                ITable* $tmp709 = Iter$264$17688->$class->itable;
                                while ($tmp709->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp709 = $tmp709->next;
                                }
                                $fn711 $tmp710 = $tmp709->methods[1];
                                panda$core$Object* $tmp712 = $tmp710(Iter$264$17688);
                                $tmp708 = $tmp712;
                                $tmp707 = ((org$pandalanguage$pandac$ASTNode*) $tmp708);
                                s706 = $tmp707;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp707));
                                panda$core$Panda$unref$panda$core$Object($tmp708);
                                panda$core$String* $tmp715 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s706), &$s714);
                                $tmp713 = $tmp715;
                                panda$core$MutableString$append$panda$core$String(result675, $tmp713);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp713));
                            }
                            $tmp705 = -1;
                            goto $l703;
                            $l703:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s706));
                            s706 = NULL;
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
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$264$17688));
                    Iter$264$17688 = NULL;
                    switch ($tmp687) {
                        case -1: goto $l717;
                    }
                    $l717:;
                }
                panda$core$String* $tmp721 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s720, ((panda$core$Object*) test670));
                $tmp719 = $tmp721;
                panda$core$String* $tmp723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp719, &$s722);
                $tmp718 = $tmp723;
                panda$core$MutableString$append$panda$core$String(result675, $tmp718);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp718));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp719));
                panda$core$String* $tmp726 = panda$core$MutableString$finish$R$panda$core$String(result675);
                $tmp725 = $tmp726;
                $tmp724 = $tmp725;
                $returnValue250 = $tmp724;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp724));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp725));
                $tmp674 = 0;
                goto $l672;
                $l727:;
                $tmp242 = 19;
                goto $l240;
                $l728:;
                return $returnValue250;
            }
            $l672:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result675));
            result675 = NULL;
            switch ($tmp674) {
                case 0: goto $l727;
            }
            $l730:;
        }
        }
        else {
        panda$core$Bit $tmp731 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 15 }));
        if ($tmp731.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp733 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 16));
            base732 = *$tmp733;
            panda$core$String** $tmp735 = ((panda$core$String**) ((char*) $match$180_9243->$data + 24));
            field734 = *$tmp735;
            panda$core$String* $tmp742 = (($fn741) base732->$class->vtable[0])(base732);
            $tmp740 = $tmp742;
            panda$core$String* $tmp744 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp740, &$s743);
            $tmp739 = $tmp744;
            panda$core$String* $tmp745 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp739, field734);
            $tmp738 = $tmp745;
            panda$core$String* $tmp747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp738, &$s746);
            $tmp737 = $tmp747;
            $tmp736 = $tmp737;
            $returnValue250 = $tmp736;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp736));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp737));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp738));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp739));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp740));
            $tmp242 = 20;
            goto $l240;
            $l748:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp750 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 16 }));
        if ($tmp750.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp752 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 16));
            dc751 = *$tmp752;
            panda$collections$ImmutableArray** $tmp754 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 24));
            annotations753 = *$tmp754;
            org$pandalanguage$pandac$ASTNode** $tmp756 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 32));
            decl755 = *$tmp756;
            int $tmp759;
            {
                panda$core$MutableString* $tmp763 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp763);
                $tmp762 = $tmp763;
                $tmp761 = $tmp762;
                result760 = $tmp761;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp761));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp762));
                if (((panda$core$Bit) { dc751 != NULL }).value) {
                {
                    panda$core$String* $tmp766 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc751), &$s765);
                    $tmp764 = $tmp766;
                    panda$core$MutableString$append$panda$core$String(result760, $tmp764);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp764));
                }
                }
                {
                    int $tmp769;
                    {
                        ITable* $tmp773 = ((panda$collections$Iterable*) annotations753)->$class->itable;
                        while ($tmp773->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp773 = $tmp773->next;
                        }
                        $fn775 $tmp774 = $tmp773->methods[0];
                        panda$collections$Iterator* $tmp776 = $tmp774(((panda$collections$Iterable*) annotations753));
                        $tmp772 = $tmp776;
                        $tmp771 = $tmp772;
                        Iter$276$17770 = $tmp771;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp771));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp772));
                        $l777:;
                        ITable* $tmp780 = Iter$276$17770->$class->itable;
                        while ($tmp780->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp780 = $tmp780->next;
                        }
                        $fn782 $tmp781 = $tmp780->methods[0];
                        panda$core$Bit $tmp783 = $tmp781(Iter$276$17770);
                        panda$core$Bit $tmp784 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp783);
                        bool $tmp779 = $tmp784.value;
                        if (!$tmp779) goto $l778;
                        {
                            int $tmp787;
                            {
                                ITable* $tmp791 = Iter$276$17770->$class->itable;
                                while ($tmp791->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp791 = $tmp791->next;
                                }
                                $fn793 $tmp792 = $tmp791->methods[1];
                                panda$core$Object* $tmp794 = $tmp792(Iter$276$17770);
                                $tmp790 = $tmp794;
                                $tmp789 = ((org$pandalanguage$pandac$ASTNode*) $tmp790);
                                a788 = $tmp789;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp789));
                                panda$core$Panda$unref$panda$core$Object($tmp790);
                                panda$core$String* $tmp797 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a788), &$s796);
                                $tmp795 = $tmp797;
                                panda$core$MutableString$append$panda$core$String(result760, $tmp795);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp795));
                            }
                            $tmp787 = -1;
                            goto $l785;
                            $l785:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a788));
                            a788 = NULL;
                            switch ($tmp787) {
                                case -1: goto $l798;
                            }
                            $l798:;
                        }
                        goto $l777;
                        $l778:;
                    }
                    $tmp769 = -1;
                    goto $l767;
                    $l767:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$276$17770));
                    Iter$276$17770 = NULL;
                    switch ($tmp769) {
                        case -1: goto $l799;
                    }
                    $l799:;
                }
                panda$core$MutableString$append$panda$core$Object(result760, ((panda$core$Object*) decl755));
                panda$core$String* $tmp802 = panda$core$MutableString$finish$R$panda$core$String(result760);
                $tmp801 = $tmp802;
                $tmp800 = $tmp801;
                $returnValue250 = $tmp800;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp800));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp801));
                $tmp759 = 0;
                goto $l757;
                $l803:;
                $tmp242 = 21;
                goto $l240;
                $l804:;
                return $returnValue250;
            }
            $l757:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result760));
            result760 = NULL;
            switch ($tmp759) {
                case 0: goto $l803;
            }
            $l806:;
        }
        }
        else {
        panda$core$Bit $tmp807 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 17 }));
        if ($tmp807.value) {
        {
            panda$collections$ImmutableArray** $tmp809 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 0));
            entries808 = *$tmp809;
            int $tmp812;
            {
                panda$core$MutableString* $tmp816 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp816);
                $tmp815 = $tmp816;
                $tmp814 = $tmp815;
                result813 = $tmp814;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp814));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp815));
                {
                    int $tmp819;
                    {
                        ITable* $tmp823 = ((panda$collections$Iterable*) entries808)->$class->itable;
                        while ($tmp823->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp823 = $tmp823->next;
                        }
                        $fn825 $tmp824 = $tmp823->methods[0];
                        panda$collections$Iterator* $tmp826 = $tmp824(((panda$collections$Iterable*) entries808));
                        $tmp822 = $tmp826;
                        $tmp821 = $tmp822;
                        Iter$283$17820 = $tmp821;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp821));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp822));
                        $l827:;
                        ITable* $tmp830 = Iter$283$17820->$class->itable;
                        while ($tmp830->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp830 = $tmp830->next;
                        }
                        $fn832 $tmp831 = $tmp830->methods[0];
                        panda$core$Bit $tmp833 = $tmp831(Iter$283$17820);
                        panda$core$Bit $tmp834 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp833);
                        bool $tmp829 = $tmp834.value;
                        if (!$tmp829) goto $l828;
                        {
                            int $tmp837;
                            {
                                ITable* $tmp841 = Iter$283$17820->$class->itable;
                                while ($tmp841->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp841 = $tmp841->next;
                                }
                                $fn843 $tmp842 = $tmp841->methods[1];
                                panda$core$Object* $tmp844 = $tmp842(Iter$283$17820);
                                $tmp840 = $tmp844;
                                $tmp839 = ((org$pandalanguage$pandac$ASTNode*) $tmp840);
                                e838 = $tmp839;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp839));
                                panda$core$Panda$unref$panda$core$Object($tmp840);
                                panda$core$String* $tmp847 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) e838), &$s846);
                                $tmp845 = $tmp847;
                                panda$core$MutableString$append$panda$core$String(result813, $tmp845);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp845));
                            }
                            $tmp837 = -1;
                            goto $l835;
                            $l835:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) e838));
                            e838 = NULL;
                            switch ($tmp837) {
                                case -1: goto $l848;
                            }
                            $l848:;
                        }
                        goto $l827;
                        $l828:;
                    }
                    $tmp819 = -1;
                    goto $l817;
                    $l817:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$283$17820));
                    Iter$283$17820 = NULL;
                    switch ($tmp819) {
                        case -1: goto $l849;
                    }
                    $l849:;
                }
                panda$core$String* $tmp852 = panda$core$MutableString$finish$R$panda$core$String(result813);
                $tmp851 = $tmp852;
                $tmp850 = $tmp851;
                $returnValue250 = $tmp850;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp850));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp851));
                $tmp812 = 0;
                goto $l810;
                $l853:;
                $tmp242 = 22;
                goto $l240;
                $l854:;
                return $returnValue250;
            }
            $l810:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result813));
            result813 = NULL;
            switch ($tmp812) {
                case 0: goto $l853;
            }
            $l856:;
        }
        }
        else {
        panda$core$Bit $tmp857 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 18 }));
        if ($tmp857.value) {
        {
            panda$core$String** $tmp859 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            label858 = *$tmp859;
            org$pandalanguage$pandac$ASTNode** $tmp861 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 24));
            target860 = *$tmp861;
            org$pandalanguage$pandac$ASTNode** $tmp863 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 32));
            list862 = *$tmp863;
            panda$collections$ImmutableArray** $tmp865 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 40));
            statements864 = *$tmp865;
            int $tmp868;
            {
                panda$core$MutableString* $tmp872 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp872);
                $tmp871 = $tmp872;
                $tmp870 = $tmp871;
                result869 = $tmp870;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp870));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp871));
                if (((panda$core$Bit) { label858 != NULL }).value) {
                {
                    panda$core$String* $tmp875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(label858, &$s874);
                    $tmp873 = $tmp875;
                    panda$core$MutableString$append$panda$core$String(result869, $tmp873);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp873));
                }
                }
                panda$core$String* $tmp881 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s880, ((panda$core$Object*) target860));
                $tmp879 = $tmp881;
                panda$core$String* $tmp883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp879, &$s882);
                $tmp878 = $tmp883;
                panda$core$String* $tmp884 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp878, ((panda$core$Object*) list862));
                $tmp877 = $tmp884;
                panda$core$String* $tmp886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp877, &$s885);
                $tmp876 = $tmp886;
                panda$core$MutableString$append$panda$core$String(result869, $tmp876);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp876));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp877));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp878));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp879));
                {
                    int $tmp889;
                    {
                        ITable* $tmp893 = ((panda$collections$Iterable*) statements864)->$class->itable;
                        while ($tmp893->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp893 = $tmp893->next;
                        }
                        $fn895 $tmp894 = $tmp893->methods[0];
                        panda$collections$Iterator* $tmp896 = $tmp894(((panda$collections$Iterable*) statements864));
                        $tmp892 = $tmp896;
                        $tmp891 = $tmp892;
                        Iter$293$17890 = $tmp891;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp891));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp892));
                        $l897:;
                        ITable* $tmp900 = Iter$293$17890->$class->itable;
                        while ($tmp900->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp900 = $tmp900->next;
                        }
                        $fn902 $tmp901 = $tmp900->methods[0];
                        panda$core$Bit $tmp903 = $tmp901(Iter$293$17890);
                        panda$core$Bit $tmp904 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp903);
                        bool $tmp899 = $tmp904.value;
                        if (!$tmp899) goto $l898;
                        {
                            int $tmp907;
                            {
                                ITable* $tmp911 = Iter$293$17890->$class->itable;
                                while ($tmp911->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp911 = $tmp911->next;
                                }
                                $fn913 $tmp912 = $tmp911->methods[1];
                                panda$core$Object* $tmp914 = $tmp912(Iter$293$17890);
                                $tmp910 = $tmp914;
                                $tmp909 = ((org$pandalanguage$pandac$ASTNode*) $tmp910);
                                s908 = $tmp909;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp909));
                                panda$core$Panda$unref$panda$core$Object($tmp910);
                                panda$core$String* $tmp917 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s908), &$s916);
                                $tmp915 = $tmp917;
                                panda$core$MutableString$append$panda$core$String(result869, $tmp915);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp915));
                            }
                            $tmp907 = -1;
                            goto $l905;
                            $l905:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s908));
                            s908 = NULL;
                            switch ($tmp907) {
                                case -1: goto $l918;
                            }
                            $l918:;
                        }
                        goto $l897;
                        $l898:;
                    }
                    $tmp889 = -1;
                    goto $l887;
                    $l887:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$293$17890));
                    Iter$293$17890 = NULL;
                    switch ($tmp889) {
                        case -1: goto $l919;
                    }
                    $l919:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp920, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result869, $tmp920);
                panda$core$String* $tmp923 = panda$core$MutableString$finish$R$panda$core$String(result869);
                $tmp922 = $tmp923;
                $tmp921 = $tmp922;
                $returnValue250 = $tmp921;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp921));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp922));
                $tmp868 = 0;
                goto $l866;
                $l924:;
                $tmp242 = 23;
                goto $l240;
                $l925:;
                return $returnValue250;
            }
            $l866:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result869));
            result869 = NULL;
            switch ($tmp868) {
                case 0: goto $l924;
            }
            $l927:;
        }
        }
        else {
        panda$core$Bit $tmp928 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 19 }));
        if ($tmp928.value) {
        {
            panda$core$String** $tmp930 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            name929 = *$tmp930;
            panda$collections$ImmutableArray** $tmp932 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 24));
            subtypes931 = *$tmp932;
            panda$core$String* $tmp938 = panda$core$String$convert$R$panda$core$String(name929);
            $tmp937 = $tmp938;
            panda$core$String* $tmp940 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp937, &$s939);
            $tmp936 = $tmp940;
            panda$core$String* $tmp942 = panda$collections$ImmutableArray$join$R$panda$core$String(subtypes931);
            $tmp941 = $tmp942;
            panda$core$String* $tmp943 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp936, $tmp941);
            $tmp935 = $tmp943;
            panda$core$String* $tmp945 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp935, &$s944);
            $tmp934 = $tmp945;
            $tmp933 = $tmp934;
            $returnValue250 = $tmp933;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp933));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp934));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp935));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp941));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp936));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp937));
            $tmp242 = 24;
            goto $l240;
            $l946:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp948 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 20 }));
        if ($tmp948.value) {
        {
            panda$core$String** $tmp950 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            name949 = *$tmp950;
            $tmp951 = name949;
            $returnValue250 = $tmp951;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp951));
            $tmp242 = 25;
            goto $l240;
            $l952:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp954 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 21 }));
        if ($tmp954.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp956 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 16));
            test955 = *$tmp956;
            panda$collections$ImmutableArray** $tmp958 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 24));
            ifTrue957 = *$tmp958;
            org$pandalanguage$pandac$ASTNode** $tmp960 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 32));
            ifFalse959 = *$tmp960;
            int $tmp963;
            {
                panda$core$MutableString* $tmp967 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp971 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s970, ((panda$core$Object*) test955));
                $tmp969 = $tmp971;
                panda$core$String* $tmp973 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp969, &$s972);
                $tmp968 = $tmp973;
                panda$core$MutableString$init$panda$core$String($tmp967, $tmp968);
                $tmp966 = $tmp967;
                $tmp965 = $tmp966;
                result964 = $tmp965;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp965));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp966));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp968));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp969));
                {
                    int $tmp976;
                    {
                        ITable* $tmp980 = ((panda$collections$Iterable*) ifTrue957)->$class->itable;
                        while ($tmp980->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp980 = $tmp980->next;
                        }
                        $fn982 $tmp981 = $tmp980->methods[0];
                        panda$collections$Iterator* $tmp983 = $tmp981(((panda$collections$Iterable*) ifTrue957));
                        $tmp979 = $tmp983;
                        $tmp978 = $tmp979;
                        Iter$304$17977 = $tmp978;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp978));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp979));
                        $l984:;
                        ITable* $tmp987 = Iter$304$17977->$class->itable;
                        while ($tmp987->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp987 = $tmp987->next;
                        }
                        $fn989 $tmp988 = $tmp987->methods[0];
                        panda$core$Bit $tmp990 = $tmp988(Iter$304$17977);
                        panda$core$Bit $tmp991 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp990);
                        bool $tmp986 = $tmp991.value;
                        if (!$tmp986) goto $l985;
                        {
                            int $tmp994;
                            {
                                ITable* $tmp998 = Iter$304$17977->$class->itable;
                                while ($tmp998->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp998 = $tmp998->next;
                                }
                                $fn1000 $tmp999 = $tmp998->methods[1];
                                panda$core$Object* $tmp1001 = $tmp999(Iter$304$17977);
                                $tmp997 = $tmp1001;
                                $tmp996 = ((org$pandalanguage$pandac$ASTNode*) $tmp997);
                                s995 = $tmp996;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp996));
                                panda$core$Panda$unref$panda$core$Object($tmp997);
                                panda$core$String* $tmp1004 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s995), &$s1003);
                                $tmp1002 = $tmp1004;
                                panda$core$MutableString$append$panda$core$String(result964, $tmp1002);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1002));
                            }
                            $tmp994 = -1;
                            goto $l992;
                            $l992:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s995));
                            s995 = NULL;
                            switch ($tmp994) {
                                case -1: goto $l1005;
                            }
                            $l1005:;
                        }
                        goto $l984;
                        $l985:;
                    }
                    $tmp976 = -1;
                    goto $l974;
                    $l974:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$304$17977));
                    Iter$304$17977 = NULL;
                    switch ($tmp976) {
                        case -1: goto $l1006;
                    }
                    $l1006:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1007, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result964, $tmp1007);
                if (((panda$core$Bit) { ifFalse959 != NULL }).value) {
                {
                    panda$core$String* $tmp1011 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1010, ((panda$core$Object*) ifFalse959));
                    $tmp1009 = $tmp1011;
                    panda$core$String* $tmp1013 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1009, &$s1012);
                    $tmp1008 = $tmp1013;
                    panda$core$MutableString$append$panda$core$String(result964, $tmp1008);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1008));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1009));
                }
                }
                panda$core$String* $tmp1016 = panda$core$MutableString$finish$R$panda$core$String(result964);
                $tmp1015 = $tmp1016;
                $tmp1014 = $tmp1015;
                $returnValue250 = $tmp1014;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1014));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1015));
                $tmp963 = 0;
                goto $l961;
                $l1017:;
                $tmp242 = 26;
                goto $l240;
                $l1018:;
                return $returnValue250;
            }
            $l961:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result964));
            result964 = NULL;
            switch ($tmp963) {
                case 0: goto $l1017;
            }
            $l1020:;
        }
        }
        else {
        panda$core$Bit $tmp1021 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 22 }));
        if ($tmp1021.value) {
        {
            panda$core$UInt64* $tmp1023 = ((panda$core$UInt64*) ((char*) $match$180_9243->$data + 16));
            value1022 = *$tmp1023;
            panda$core$String* $tmp1026 = panda$core$UInt64$convert$R$panda$core$String(value1022);
            $tmp1025 = $tmp1026;
            $tmp1024 = $tmp1025;
            $returnValue250 = $tmp1024;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1024));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1025));
            $tmp242 = 27;
            goto $l240;
            $l1027:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1029 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 23 }));
        if ($tmp1029.value) {
        {
            org$pandalanguage$pandac$IRNode** $tmp1031 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$180_9243->$data + 0));
            ir1030 = *$tmp1031;
            panda$core$String* $tmp1035 = (($fn1034) ir1030->$class->vtable[0])(ir1030);
            $tmp1033 = $tmp1035;
            $tmp1032 = $tmp1033;
            $returnValue250 = $tmp1032;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1032));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1033));
            $tmp242 = 28;
            goto $l240;
            $l1036:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1038 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 24 }));
        if ($tmp1038.value) {
        {
            panda$core$String** $tmp1040 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            label1039 = *$tmp1040;
            panda$collections$ImmutableArray** $tmp1042 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 24));
            statements1041 = *$tmp1042;
            int $tmp1045;
            {
                panda$core$MutableString* $tmp1049 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1049);
                $tmp1048 = $tmp1049;
                $tmp1047 = $tmp1048;
                result1046 = $tmp1047;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1047));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1048));
                if (((panda$core$Bit) { label1039 != NULL }).value) {
                {
                    panda$core$String* $tmp1052 = panda$core$String$convert$R$panda$core$String(label1039);
                    $tmp1051 = $tmp1052;
                    panda$core$String* $tmp1054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1051, &$s1053);
                    $tmp1050 = $tmp1054;
                    panda$core$MutableString$append$panda$core$String(result1046, $tmp1050);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1050));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1051));
                }
                }
                panda$core$MutableString$append$panda$core$String(result1046, &$s1055);
                {
                    int $tmp1058;
                    {
                        ITable* $tmp1062 = ((panda$collections$Iterable*) statements1041)->$class->itable;
                        while ($tmp1062->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1062 = $tmp1062->next;
                        }
                        $fn1064 $tmp1063 = $tmp1062->methods[0];
                        panda$collections$Iterator* $tmp1065 = $tmp1063(((panda$collections$Iterable*) statements1041));
                        $tmp1061 = $tmp1065;
                        $tmp1060 = $tmp1061;
                        Iter$322$171059 = $tmp1060;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1060));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1061));
                        $l1066:;
                        ITable* $tmp1069 = Iter$322$171059->$class->itable;
                        while ($tmp1069->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1069 = $tmp1069->next;
                        }
                        $fn1071 $tmp1070 = $tmp1069->methods[0];
                        panda$core$Bit $tmp1072 = $tmp1070(Iter$322$171059);
                        panda$core$Bit $tmp1073 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1072);
                        bool $tmp1068 = $tmp1073.value;
                        if (!$tmp1068) goto $l1067;
                        {
                            int $tmp1076;
                            {
                                ITable* $tmp1080 = Iter$322$171059->$class->itable;
                                while ($tmp1080->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1080 = $tmp1080->next;
                                }
                                $fn1082 $tmp1081 = $tmp1080->methods[1];
                                panda$core$Object* $tmp1083 = $tmp1081(Iter$322$171059);
                                $tmp1079 = $tmp1083;
                                $tmp1078 = ((org$pandalanguage$pandac$ASTNode*) $tmp1079);
                                s1077 = $tmp1078;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1078));
                                panda$core$Panda$unref$panda$core$Object($tmp1079);
                                panda$core$String* $tmp1086 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1077), &$s1085);
                                $tmp1084 = $tmp1086;
                                panda$core$MutableString$append$panda$core$String(result1046, $tmp1084);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1084));
                            }
                            $tmp1076 = -1;
                            goto $l1074;
                            $l1074:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1077));
                            s1077 = NULL;
                            switch ($tmp1076) {
                                case -1: goto $l1087;
                            }
                            $l1087:;
                        }
                        goto $l1066;
                        $l1067:;
                    }
                    $tmp1058 = -1;
                    goto $l1056;
                    $l1056:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$322$171059));
                    Iter$322$171059 = NULL;
                    switch ($tmp1058) {
                        case -1: goto $l1088;
                    }
                    $l1088:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1089, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1046, $tmp1089);
                panda$core$String* $tmp1092 = panda$core$MutableString$finish$R$panda$core$String(result1046);
                $tmp1091 = $tmp1092;
                $tmp1090 = $tmp1091;
                $returnValue250 = $tmp1090;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1090));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1091));
                $tmp1045 = 0;
                goto $l1043;
                $l1093:;
                $tmp242 = 29;
                goto $l240;
                $l1094:;
                return $returnValue250;
            }
            $l1043:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1046));
            result1046 = NULL;
            switch ($tmp1045) {
                case 0: goto $l1093;
            }
            $l1096:;
        }
        }
        else {
        panda$core$Bit $tmp1097 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 25 }));
        if ($tmp1097.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1099 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 16));
            value1098 = *$tmp1099;
            panda$collections$ImmutableArray** $tmp1101 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 24));
            whens1100 = *$tmp1101;
            panda$collections$ImmutableArray** $tmp1103 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 32));
            other1102 = *$tmp1103;
            int $tmp1106;
            {
                panda$core$MutableString* $tmp1110 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$String* $tmp1114 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1113, ((panda$core$Object*) value1098));
                $tmp1112 = $tmp1114;
                panda$core$String* $tmp1116 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1112, &$s1115);
                $tmp1111 = $tmp1116;
                panda$core$MutableString$init$panda$core$String($tmp1110, $tmp1111);
                $tmp1109 = $tmp1110;
                $tmp1108 = $tmp1109;
                result1107 = $tmp1108;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1108));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1109));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1111));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1112));
                {
                    int $tmp1119;
                    {
                        ITable* $tmp1123 = ((panda$collections$Iterable*) whens1100)->$class->itable;
                        while ($tmp1123->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1123 = $tmp1123->next;
                        }
                        $fn1125 $tmp1124 = $tmp1123->methods[0];
                        panda$collections$Iterator* $tmp1126 = $tmp1124(((panda$collections$Iterable*) whens1100));
                        $tmp1122 = $tmp1126;
                        $tmp1121 = $tmp1122;
                        Iter$329$171120 = $tmp1121;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1121));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1122));
                        $l1127:;
                        ITable* $tmp1130 = Iter$329$171120->$class->itable;
                        while ($tmp1130->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1130 = $tmp1130->next;
                        }
                        $fn1132 $tmp1131 = $tmp1130->methods[0];
                        panda$core$Bit $tmp1133 = $tmp1131(Iter$329$171120);
                        panda$core$Bit $tmp1134 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1133);
                        bool $tmp1129 = $tmp1134.value;
                        if (!$tmp1129) goto $l1128;
                        {
                            int $tmp1137;
                            {
                                ITable* $tmp1141 = Iter$329$171120->$class->itable;
                                while ($tmp1141->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1141 = $tmp1141->next;
                                }
                                $fn1143 $tmp1142 = $tmp1141->methods[1];
                                panda$core$Object* $tmp1144 = $tmp1142(Iter$329$171120);
                                $tmp1140 = $tmp1144;
                                $tmp1139 = ((org$pandalanguage$pandac$ASTNode*) $tmp1140);
                                w1138 = $tmp1139;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1139));
                                panda$core$Panda$unref$panda$core$Object($tmp1140);
                                panda$core$String* $tmp1147 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) w1138), &$s1146);
                                $tmp1145 = $tmp1147;
                                panda$core$MutableString$append$panda$core$String(result1107, $tmp1145);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1145));
                            }
                            $tmp1137 = -1;
                            goto $l1135;
                            $l1135:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) w1138));
                            w1138 = NULL;
                            switch ($tmp1137) {
                                case -1: goto $l1148;
                            }
                            $l1148:;
                        }
                        goto $l1127;
                        $l1128:;
                    }
                    $tmp1119 = -1;
                    goto $l1117;
                    $l1117:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$329$171120));
                    Iter$329$171120 = NULL;
                    switch ($tmp1119) {
                        case -1: goto $l1149;
                    }
                    $l1149:;
                }
                if (((panda$core$Bit) { other1102 != NULL }).value) {
                {
                    panda$core$String* $tmp1152 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) other1102), &$s1151);
                    $tmp1150 = $tmp1152;
                    panda$core$MutableString$append$panda$core$String(result1107, $tmp1150);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1150));
                }
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1153, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1107, $tmp1153);
                panda$core$String* $tmp1156 = panda$core$MutableString$finish$R$panda$core$String(result1107);
                $tmp1155 = $tmp1156;
                $tmp1154 = $tmp1155;
                $returnValue250 = $tmp1154;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1154));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1155));
                $tmp1106 = 0;
                goto $l1104;
                $l1157:;
                $tmp242 = 30;
                goto $l240;
                $l1158:;
                return $returnValue250;
            }
            $l1104:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1107));
            result1107 = NULL;
            switch ($tmp1106) {
                case 0: goto $l1157;
            }
            $l1160:;
        }
        }
        else {
        panda$core$Bit $tmp1161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 26 }));
        if ($tmp1161.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1163 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 16));
            dc1162 = *$tmp1163;
            panda$collections$ImmutableArray** $tmp1165 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 24));
            annotations1164 = *$tmp1165;
            org$pandalanguage$pandac$MethodDecl$Kind* $tmp1167 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$180_9243->$data + 32));
            kind1166 = *$tmp1167;
            panda$core$String** $tmp1169 = ((panda$core$String**) ((char*) $match$180_9243->$data + 40));
            name1168 = *$tmp1169;
            panda$collections$ImmutableArray** $tmp1171 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 48));
            parameters1170 = *$tmp1171;
            org$pandalanguage$pandac$ASTNode** $tmp1173 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 56));
            returnType1172 = *$tmp1173;
            panda$collections$ImmutableArray** $tmp1175 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 64));
            statements1174 = *$tmp1175;
            int $tmp1178;
            {
                panda$core$MutableString* $tmp1182 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1182);
                $tmp1181 = $tmp1182;
                $tmp1180 = $tmp1181;
                result1179 = $tmp1180;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1180));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1181));
                if (((panda$core$Bit) { dc1162 != NULL }).value) {
                {
                    panda$core$String* $tmp1185 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) dc1162), &$s1184);
                    $tmp1183 = $tmp1185;
                    panda$core$MutableString$append$panda$core$String(result1179, $tmp1183);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1183));
                }
                }
                {
                    int $tmp1188;
                    {
                        ITable* $tmp1192 = ((panda$collections$Iterable*) annotations1164)->$class->itable;
                        while ($tmp1192->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1192 = $tmp1192->next;
                        }
                        $fn1194 $tmp1193 = $tmp1192->methods[0];
                        panda$collections$Iterator* $tmp1195 = $tmp1193(((panda$collections$Iterable*) annotations1164));
                        $tmp1191 = $tmp1195;
                        $tmp1190 = $tmp1191;
                        Iter$342$171189 = $tmp1190;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1190));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1191));
                        $l1196:;
                        ITable* $tmp1199 = Iter$342$171189->$class->itable;
                        while ($tmp1199->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1199 = $tmp1199->next;
                        }
                        $fn1201 $tmp1200 = $tmp1199->methods[0];
                        panda$core$Bit $tmp1202 = $tmp1200(Iter$342$171189);
                        panda$core$Bit $tmp1203 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1202);
                        bool $tmp1198 = $tmp1203.value;
                        if (!$tmp1198) goto $l1197;
                        {
                            int $tmp1206;
                            {
                                ITable* $tmp1210 = Iter$342$171189->$class->itable;
                                while ($tmp1210->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1210 = $tmp1210->next;
                                }
                                $fn1212 $tmp1211 = $tmp1210->methods[1];
                                panda$core$Object* $tmp1213 = $tmp1211(Iter$342$171189);
                                $tmp1209 = $tmp1213;
                                $tmp1208 = ((org$pandalanguage$pandac$ASTNode*) $tmp1209);
                                a1207 = $tmp1208;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1208));
                                panda$core$Panda$unref$panda$core$Object($tmp1209);
                                panda$core$String* $tmp1216 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) a1207), &$s1215);
                                $tmp1214 = $tmp1216;
                                panda$core$MutableString$append$panda$core$String(result1179, $tmp1214);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1214));
                            }
                            $tmp1206 = -1;
                            goto $l1204;
                            $l1204:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) a1207));
                            a1207 = NULL;
                            switch ($tmp1206) {
                                case -1: goto $l1217;
                            }
                            $l1217:;
                        }
                        goto $l1196;
                        $l1197:;
                    }
                    $tmp1188 = -1;
                    goto $l1186;
                    $l1186:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$342$171189));
                    Iter$342$171189 = NULL;
                    switch ($tmp1188) {
                        case -1: goto $l1218;
                    }
                    $l1218:;
                }
                {
                    $match$345_171219 = kind1166;
                    panda$core$Bit $tmp1220 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$345_171219.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp1220.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1179, &$s1221);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$345_171219.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp1222.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1179, &$s1223);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$345_171219.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp1224.value) {
                    {
                    }
                    }
                    }
                    }
                }
                panda$core$String* $tmp1229 = panda$core$String$convert$R$panda$core$String(name1168);
                $tmp1228 = $tmp1229;
                panda$core$String* $tmp1231 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1228, &$s1230);
                $tmp1227 = $tmp1231;
                panda$core$String* $tmp1233 = panda$collections$ImmutableArray$join$R$panda$core$String(parameters1170);
                $tmp1232 = $tmp1233;
                panda$core$String* $tmp1234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1227, $tmp1232);
                $tmp1226 = $tmp1234;
                panda$core$String* $tmp1236 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1226, &$s1235);
                $tmp1225 = $tmp1236;
                panda$core$MutableString$append$panda$core$String(result1179, $tmp1225);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1225));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1226));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1232));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1227));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1228));
                if (((panda$core$Bit) { returnType1172 != NULL }).value) {
                {
                    panda$core$String* $tmp1240 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1239, ((panda$core$Object*) returnType1172));
                    $tmp1238 = $tmp1240;
                    panda$core$String* $tmp1242 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1238, &$s1241);
                    $tmp1237 = $tmp1242;
                    panda$core$MutableString$append$panda$core$String(result1179, $tmp1237);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1237));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1238));
                }
                }
                if (((panda$core$Bit) { statements1174 != NULL }).value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1179, &$s1243);
                    {
                        int $tmp1246;
                        {
                            ITable* $tmp1250 = ((panda$collections$Iterable*) statements1174)->$class->itable;
                            while ($tmp1250->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                                $tmp1250 = $tmp1250->next;
                            }
                            $fn1252 $tmp1251 = $tmp1250->methods[0];
                            panda$collections$Iterator* $tmp1253 = $tmp1251(((panda$collections$Iterable*) statements1174));
                            $tmp1249 = $tmp1253;
                            $tmp1248 = $tmp1249;
                            Iter$356$211247 = $tmp1248;
                            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1248));
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1249));
                            $l1254:;
                            ITable* $tmp1257 = Iter$356$211247->$class->itable;
                            while ($tmp1257->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                $tmp1257 = $tmp1257->next;
                            }
                            $fn1259 $tmp1258 = $tmp1257->methods[0];
                            panda$core$Bit $tmp1260 = $tmp1258(Iter$356$211247);
                            panda$core$Bit $tmp1261 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1260);
                            bool $tmp1256 = $tmp1261.value;
                            if (!$tmp1256) goto $l1255;
                            {
                                int $tmp1264;
                                {
                                    ITable* $tmp1268 = Iter$356$211247->$class->itable;
                                    while ($tmp1268->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                        $tmp1268 = $tmp1268->next;
                                    }
                                    $fn1270 $tmp1269 = $tmp1268->methods[1];
                                    panda$core$Object* $tmp1271 = $tmp1269(Iter$356$211247);
                                    $tmp1267 = $tmp1271;
                                    $tmp1266 = ((org$pandalanguage$pandac$ASTNode*) $tmp1267);
                                    s1265 = $tmp1266;
                                    panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1266));
                                    panda$core$Panda$unref$panda$core$Object($tmp1267);
                                    panda$core$String* $tmp1274 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1265), &$s1273);
                                    $tmp1272 = $tmp1274;
                                    panda$core$MutableString$append$panda$core$String(result1179, $tmp1272);
                                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1272));
                                }
                                $tmp1264 = -1;
                                goto $l1262;
                                $l1262:;
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1265));
                                s1265 = NULL;
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
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$356$211247));
                        Iter$356$211247 = NULL;
                        switch ($tmp1246) {
                            case -1: goto $l1276;
                        }
                        $l1276:;
                    }
                    panda$core$Char8$init$panda$core$UInt8(&$tmp1277, ((panda$core$UInt8) { 125 }));
                    panda$core$MutableString$append$panda$core$Char8(result1179, $tmp1277);
                }
                }
                panda$core$String* $tmp1280 = panda$core$MutableString$finish$R$panda$core$String(result1179);
                $tmp1279 = $tmp1280;
                $tmp1278 = $tmp1279;
                $returnValue250 = $tmp1278;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1278));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1279));
                $tmp1178 = 0;
                goto $l1176;
                $l1281:;
                $tmp242 = 31;
                goto $l240;
                $l1282:;
                return $returnValue250;
            }
            $l1176:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1179));
            result1179 = NULL;
            switch ($tmp1178) {
                case 0: goto $l1281;
            }
            $l1284:;
        }
        }
        else {
        panda$core$Bit $tmp1285 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1285.value) {
        {
            $tmp1286 = &$s1287;
            $returnValue250 = $tmp1286;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1286));
            $tmp242 = 32;
            goto $l240;
            $l1288:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1290 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1290.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1292 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 16));
            base1291 = *$tmp1292;
            panda$core$String* $tmp1296 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) base1291), &$s1295);
            $tmp1294 = $tmp1296;
            $tmp1293 = $tmp1294;
            $returnValue250 = $tmp1293;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1293));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1294));
            $tmp242 = 33;
            goto $l240;
            $l1297:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1299 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1299.value) {
        {
            panda$core$String** $tmp1301 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            name1300 = *$tmp1301;
            $tmp1302 = name1300;
            $returnValue250 = $tmp1302;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1302));
            $tmp242 = 34;
            goto $l240;
            $l1303:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1305.value) {
        {
            panda$core$String** $tmp1307 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            name1306 = *$tmp1307;
            org$pandalanguage$pandac$ASTNode** $tmp1309 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 24));
            type1308 = *$tmp1309;
            panda$core$String* $tmp1315 = panda$core$String$convert$R$panda$core$String(name1306);
            $tmp1314 = $tmp1315;
            panda$core$String* $tmp1317 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1314, &$s1316);
            $tmp1313 = $tmp1317;
            panda$core$String* $tmp1318 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1313, ((panda$core$Object*) type1308));
            $tmp1312 = $tmp1318;
            panda$core$String* $tmp1320 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1312, &$s1319);
            $tmp1311 = $tmp1320;
            $tmp1310 = $tmp1311;
            $returnValue250 = $tmp1310;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1310));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1311));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1312));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1313));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1314));
            $tmp242 = 35;
            goto $l240;
            $l1321:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1323.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1325 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$180_9243->$data + 16));
            kind1324 = *$tmp1325;
            org$pandalanguage$pandac$ASTNode** $tmp1327 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 24));
            base1326 = *$tmp1327;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1334;
            $tmp1334 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp1334->value = kind1324;
            $tmp1333 = ((panda$core$Object*) $tmp1334);
            panda$core$String* $tmp1336 = (($fn1335) $tmp1333->$class->vtable[0])($tmp1333);
            $tmp1332 = $tmp1336;
            panda$core$String* $tmp1338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1332, &$s1337);
            $tmp1331 = $tmp1338;
            panda$core$String* $tmp1339 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1331, ((panda$core$Object*) base1326));
            $tmp1330 = $tmp1339;
            panda$core$String* $tmp1341 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1330, &$s1340);
            $tmp1329 = $tmp1341;
            $tmp1328 = $tmp1329;
            $returnValue250 = $tmp1328;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1328));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1329));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1330));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1331));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1332));
            panda$core$Panda$unref$panda$core$Object($tmp1333);
            $tmp242 = 36;
            goto $l240;
            $l1342:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1344 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1344.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1346 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 16));
            start1345 = *$tmp1346;
            org$pandalanguage$pandac$ASTNode** $tmp1348 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 24));
            end1347 = *$tmp1348;
            panda$core$Bit* $tmp1350 = ((panda$core$Bit*) ((char*) $match$180_9243->$data + 32));
            inclusive1349 = *$tmp1350;
            org$pandalanguage$pandac$ASTNode** $tmp1352 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 33));
            step1351 = *$tmp1352;
            int $tmp1355;
            {
                panda$core$MutableString* $tmp1359 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1359);
                $tmp1358 = $tmp1359;
                $tmp1357 = $tmp1358;
                result1356 = $tmp1357;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1357));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1358));
                $tmp1360 = start1345;
                panda$core$Bit $tmp1364;
                if (((panda$core$Bit) { $tmp1360 != NULL }).value) goto $l1361; else goto $l1362;
                $l1361:;
                panda$core$Bit $tmp1365 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1360->$rawValue, ((panda$core$Int64) { 28 }));
                $tmp1364 = $tmp1365;
                goto $l1363;
                $l1362:;
                $tmp1364 = ((panda$core$Bit) { true });
                goto $l1363;
                $l1363:;
                if ($tmp1364.value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result1356, ((panda$core$Object*) start1345));
                }
                }
                if (inclusive1349.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1356, &$s1366);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(result1356, &$s1367);
                }
                }
                $tmp1368 = end1347;
                panda$core$Bit $tmp1372;
                if (((panda$core$Bit) { $tmp1368 != NULL }).value) goto $l1369; else goto $l1370;
                $l1369:;
                panda$core$Bit $tmp1373 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1368->$rawValue, ((panda$core$Int64) { 28 }));
                $tmp1372 = $tmp1373;
                goto $l1371;
                $l1370:;
                $tmp1372 = ((panda$core$Bit) { true });
                goto $l1371;
                $l1371:;
                if ($tmp1372.value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result1356, ((panda$core$Object*) end1347));
                }
                }
                $tmp1374 = step1351;
                panda$core$Bit $tmp1378;
                if (((panda$core$Bit) { $tmp1374 != NULL }).value) goto $l1375; else goto $l1376;
                $l1375:;
                panda$core$Bit $tmp1379 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1374->$rawValue, ((panda$core$Int64) { 28 }));
                $tmp1378 = $tmp1379;
                goto $l1377;
                $l1376:;
                $tmp1378 = ((panda$core$Bit) { true });
                goto $l1377;
                $l1377:;
                if ($tmp1378.value) {
                {
                    panda$core$String* $tmp1382 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1381, ((panda$core$Object*) step1351));
                    $tmp1380 = $tmp1382;
                    panda$core$MutableString$append$panda$core$String(result1356, $tmp1380);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1380));
                }
                }
                panda$core$String* $tmp1385 = panda$core$MutableString$finish$R$panda$core$String(result1356);
                $tmp1384 = $tmp1385;
                $tmp1383 = $tmp1384;
                $returnValue250 = $tmp1383;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1383));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1384));
                $tmp1355 = 0;
                goto $l1353;
                $l1386:;
                $tmp242 = 37;
                goto $l240;
                $l1387:;
                return $returnValue250;
            }
            $l1353:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1356));
            result1356 = NULL;
            switch ($tmp1355) {
                case 0: goto $l1386;
            }
            $l1389:;
        }
        }
        else {
        panda$core$Bit $tmp1390 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1390.value) {
        {
            panda$core$Real64* $tmp1392 = ((panda$core$Real64*) ((char*) $match$180_9243->$data + 16));
            value1391 = *$tmp1392;
            panda$core$String* $tmp1395 = panda$core$Real64$convert$R$panda$core$String(value1391);
            $tmp1394 = $tmp1395;
            $tmp1393 = $tmp1394;
            $returnValue250 = $tmp1393;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1393));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1394));
            $tmp242 = 38;
            goto $l240;
            $l1396:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1398 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1398.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1400 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 16));
            value1399 = *$tmp1400;
            if (((panda$core$Bit) { value1399 != NULL }).value) {
            {
                panda$core$String* $tmp1405 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1404, ((panda$core$Object*) value1399));
                $tmp1403 = $tmp1405;
                panda$core$String* $tmp1407 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1403, &$s1406);
                $tmp1402 = $tmp1407;
                $tmp1401 = $tmp1402;
                $returnValue250 = $tmp1401;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1401));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1402));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1403));
                $tmp242 = 39;
                goto $l240;
                $l1408:;
                return $returnValue250;
            }
            }
            $tmp1410 = &$s1411;
            $returnValue250 = $tmp1410;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1410));
            $tmp242 = 40;
            goto $l240;
            $l1412:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1414.value) {
        {
            $tmp1415 = &$s1416;
            $returnValue250 = $tmp1415;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1415));
            $tmp242 = 41;
            goto $l240;
            $l1417:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1419 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1419.value) {
        {
            panda$core$String** $tmp1421 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            str1420 = *$tmp1421;
            $tmp1422 = str1420;
            $returnValue250 = $tmp1422;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1422));
            $tmp242 = 42;
            goto $l240;
            $l1423:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1425 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1425.value) {
        {
            $tmp1426 = &$s1427;
            $returnValue250 = $tmp1426;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1426));
            $tmp242 = 43;
            goto $l240;
            $l1428:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1430 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1430.value) {
        {
            panda$core$String** $tmp1432 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            name1431 = *$tmp1432;
            $tmp1433 = name1431;
            $returnValue250 = $tmp1433;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1433));
            $tmp242 = 44;
            goto $l240;
            $l1434:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1436 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1436.value) {
        {
            panda$core$String** $tmp1438 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            name1437 = *$tmp1438;
            org$pandalanguage$pandac$ASTNode** $tmp1440 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 24));
            type1439 = *$tmp1440;
            if (((panda$core$Bit) { type1439 != NULL }).value) {
            {
                panda$core$String* $tmp1446 = panda$core$String$convert$R$panda$core$String(name1437);
                $tmp1445 = $tmp1446;
                panda$core$String* $tmp1448 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1445, &$s1447);
                $tmp1444 = $tmp1448;
                panda$core$String* $tmp1449 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1444, ((panda$core$Object*) type1439));
                $tmp1443 = $tmp1449;
                panda$core$String* $tmp1451 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1443, &$s1450);
                $tmp1442 = $tmp1451;
                $tmp1441 = $tmp1442;
                $returnValue250 = $tmp1441;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1441));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1442));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1443));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1444));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1445));
                $tmp242 = 45;
                goto $l240;
                $l1452:;
                return $returnValue250;
            }
            }
            $tmp1454 = name1437;
            $returnValue250 = $tmp1454;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1454));
            $tmp242 = 46;
            goto $l240;
            $l1455:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp1457.value) {
        {
            panda$core$String** $tmp1459 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            name1458 = *$tmp1459;
            $tmp1460 = name1458;
            $returnValue250 = $tmp1460;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1460));
            $tmp242 = 47;
            goto $l240;
            $l1461:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1463 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp1463.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp1465 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$180_9243->$data + 16));
            kind1464 = *$tmp1465;
            panda$collections$ImmutableArray** $tmp1467 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 24));
            decls1466 = *$tmp1467;
            int $tmp1470;
            {
                panda$core$MutableString* $tmp1474 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1474);
                $tmp1473 = $tmp1474;
                $tmp1472 = $tmp1473;
                result1471 = $tmp1472;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1472));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1473));
                {
                    $match$414_171475 = kind1464;
                    panda$core$Bit $tmp1476 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$414_171475.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp1476.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1471, &$s1477);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1478 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$414_171475.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp1478.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1471, &$s1479);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1480 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$414_171475.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp1480.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1471, &$s1481);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1482 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$414_171475.$rawValue, ((panda$core$Int64) { 3 }));
                    if ($tmp1482.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1471, &$s1483);
                    }
                    }
                    }
                    }
                    }
                }
                panda$core$String* $tmp1485 = panda$collections$ImmutableArray$join$R$panda$core$String(decls1466);
                $tmp1484 = $tmp1485;
                panda$core$MutableString$append$panda$core$String(result1471, $tmp1484);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1484));
                panda$core$String* $tmp1488 = panda$core$MutableString$finish$R$panda$core$String(result1471);
                $tmp1487 = $tmp1488;
                $tmp1486 = $tmp1487;
                $returnValue250 = $tmp1486;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1486));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1487));
                $tmp1470 = 0;
                goto $l1468;
                $l1489:;
                $tmp242 = 48;
                goto $l240;
                $l1490:;
                return $returnValue250;
            }
            $l1468:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1471));
            result1471 = NULL;
            switch ($tmp1470) {
                case 0: goto $l1489;
            }
            $l1492:;
        }
        }
        else {
        panda$core$Bit $tmp1493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp1493.value) {
        {
            panda$collections$ImmutableArray** $tmp1495 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 16));
            tests1494 = *$tmp1495;
            panda$collections$ImmutableArray** $tmp1497 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 24));
            statements1496 = *$tmp1497;
            int $tmp1500;
            {
                panda$core$MutableString* $tmp1504 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1504, &$s1505);
                $tmp1503 = $tmp1504;
                $tmp1502 = $tmp1503;
                result1501 = $tmp1502;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1502));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1503));
                $tmp1507 = &$s1508;
                separator1506 = $tmp1507;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1507));
                {
                    int $tmp1511;
                    {
                        ITable* $tmp1515 = ((panda$collections$Iterable*) tests1494)->$class->itable;
                        while ($tmp1515->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1515 = $tmp1515->next;
                        }
                        $fn1517 $tmp1516 = $tmp1515->methods[0];
                        panda$collections$Iterator* $tmp1518 = $tmp1516(((panda$collections$Iterable*) tests1494));
                        $tmp1514 = $tmp1518;
                        $tmp1513 = $tmp1514;
                        Iter$425$171512 = $tmp1513;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1513));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1514));
                        $l1519:;
                        ITable* $tmp1522 = Iter$425$171512->$class->itable;
                        while ($tmp1522->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1522 = $tmp1522->next;
                        }
                        $fn1524 $tmp1523 = $tmp1522->methods[0];
                        panda$core$Bit $tmp1525 = $tmp1523(Iter$425$171512);
                        panda$core$Bit $tmp1526 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1525);
                        bool $tmp1521 = $tmp1526.value;
                        if (!$tmp1521) goto $l1520;
                        {
                            int $tmp1529;
                            {
                                ITable* $tmp1533 = Iter$425$171512->$class->itable;
                                while ($tmp1533->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1533 = $tmp1533->next;
                                }
                                $fn1535 $tmp1534 = $tmp1533->methods[1];
                                panda$core$Object* $tmp1536 = $tmp1534(Iter$425$171512);
                                $tmp1532 = $tmp1536;
                                $tmp1531 = ((org$pandalanguage$pandac$ASTNode*) $tmp1532);
                                t1530 = $tmp1531;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1531));
                                panda$core$Panda$unref$panda$core$Object($tmp1532);
                                panda$core$String* $tmp1541 = panda$core$String$convert$R$panda$core$String(separator1506);
                                $tmp1540 = $tmp1541;
                                panda$core$String* $tmp1543 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1540, &$s1542);
                                $tmp1539 = $tmp1543;
                                panda$core$String* $tmp1544 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1539, ((panda$core$Object*) t1530));
                                $tmp1538 = $tmp1544;
                                panda$core$String* $tmp1546 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1538, &$s1545);
                                $tmp1537 = $tmp1546;
                                panda$core$MutableString$append$panda$core$String(result1501, $tmp1537);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1537));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1538));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1539));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1540));
                            }
                            $tmp1529 = -1;
                            goto $l1527;
                            $l1527:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1530));
                            t1530 = NULL;
                            switch ($tmp1529) {
                                case -1: goto $l1547;
                            }
                            $l1547:;
                        }
                        goto $l1519;
                        $l1520:;
                    }
                    $tmp1511 = -1;
                    goto $l1509;
                    $l1509:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$425$171512));
                    Iter$425$171512 = NULL;
                    switch ($tmp1511) {
                        case -1: goto $l1548;
                    }
                    $l1548:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1549, ((panda$core$UInt8) { 58 }));
                panda$core$MutableString$append$panda$core$Char8(result1501, $tmp1549);
                {
                    int $tmp1552;
                    {
                        ITable* $tmp1556 = ((panda$collections$Iterable*) statements1496)->$class->itable;
                        while ($tmp1556->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1556 = $tmp1556->next;
                        }
                        $fn1558 $tmp1557 = $tmp1556->methods[0];
                        panda$collections$Iterator* $tmp1559 = $tmp1557(((panda$collections$Iterable*) statements1496));
                        $tmp1555 = $tmp1559;
                        $tmp1554 = $tmp1555;
                        Iter$429$171553 = $tmp1554;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1554));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1555));
                        $l1560:;
                        ITable* $tmp1563 = Iter$429$171553->$class->itable;
                        while ($tmp1563->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1563 = $tmp1563->next;
                        }
                        $fn1565 $tmp1564 = $tmp1563->methods[0];
                        panda$core$Bit $tmp1566 = $tmp1564(Iter$429$171553);
                        panda$core$Bit $tmp1567 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1566);
                        bool $tmp1562 = $tmp1567.value;
                        if (!$tmp1562) goto $l1561;
                        {
                            int $tmp1570;
                            {
                                ITable* $tmp1574 = Iter$429$171553->$class->itable;
                                while ($tmp1574->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1574 = $tmp1574->next;
                                }
                                $fn1576 $tmp1575 = $tmp1574->methods[1];
                                panda$core$Object* $tmp1577 = $tmp1575(Iter$429$171553);
                                $tmp1573 = $tmp1577;
                                $tmp1572 = ((org$pandalanguage$pandac$ASTNode*) $tmp1573);
                                s1571 = $tmp1572;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1572));
                                panda$core$Panda$unref$panda$core$Object($tmp1573);
                                panda$core$String* $tmp1580 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1579, ((panda$core$Object*) s1571));
                                $tmp1578 = $tmp1580;
                                panda$core$MutableString$append$panda$core$String(result1501, $tmp1578);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1578));
                            }
                            $tmp1570 = -1;
                            goto $l1568;
                            $l1568:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1571));
                            s1571 = NULL;
                            switch ($tmp1570) {
                                case -1: goto $l1581;
                            }
                            $l1581:;
                        }
                        goto $l1560;
                        $l1561:;
                    }
                    $tmp1552 = -1;
                    goto $l1550;
                    $l1550:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$429$171553));
                    Iter$429$171553 = NULL;
                    switch ($tmp1552) {
                        case -1: goto $l1582;
                    }
                    $l1582:;
                }
                panda$core$String* $tmp1585 = panda$core$MutableString$finish$R$panda$core$String(result1501);
                $tmp1584 = $tmp1585;
                $tmp1583 = $tmp1584;
                $returnValue250 = $tmp1583;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1583));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1584));
                $tmp1500 = 0;
                goto $l1498;
                $l1586:;
                $tmp242 = 49;
                goto $l240;
                $l1587:;
                return $returnValue250;
            }
            $l1498:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1501));
            result1501 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1506));
            separator1506 = NULL;
            switch ($tmp1500) {
                case 0: goto $l1586;
            }
            $l1589:;
        }
        }
        else {
        panda$core$Bit $tmp1590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp1590.value) {
        {
            panda$core$String** $tmp1592 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            label1591 = *$tmp1592;
            org$pandalanguage$pandac$ASTNode** $tmp1594 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 24));
            test1593 = *$tmp1594;
            panda$collections$ImmutableArray** $tmp1596 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 32));
            statements1595 = *$tmp1596;
            int $tmp1599;
            {
                panda$core$MutableString* $tmp1603 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1603);
                $tmp1602 = $tmp1603;
                $tmp1601 = $tmp1602;
                result1600 = $tmp1601;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1601));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1602));
                if (((panda$core$Bit) { label1591 != NULL }).value) {
                {
                    panda$core$String* $tmp1606 = panda$core$String$convert$R$panda$core$String(label1591);
                    $tmp1605 = $tmp1606;
                    panda$core$String* $tmp1608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1605, &$s1607);
                    $tmp1604 = $tmp1608;
                    panda$core$MutableString$append$panda$core$String(result1600, $tmp1604);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1604));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1605));
                }
                }
                panda$core$String* $tmp1612 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1611, ((panda$core$Object*) test1593));
                $tmp1610 = $tmp1612;
                panda$core$String* $tmp1614 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1610, &$s1613);
                $tmp1609 = $tmp1614;
                panda$core$MutableString$append$panda$core$String(result1600, $tmp1609);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1609));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1610));
                {
                    int $tmp1617;
                    {
                        ITable* $tmp1621 = ((panda$collections$Iterable*) statements1595)->$class->itable;
                        while ($tmp1621->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1621 = $tmp1621->next;
                        }
                        $fn1623 $tmp1622 = $tmp1621->methods[0];
                        panda$collections$Iterator* $tmp1624 = $tmp1622(((panda$collections$Iterable*) statements1595));
                        $tmp1620 = $tmp1624;
                        $tmp1619 = $tmp1620;
                        Iter$439$171618 = $tmp1619;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1619));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1620));
                        $l1625:;
                        ITable* $tmp1628 = Iter$439$171618->$class->itable;
                        while ($tmp1628->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1628 = $tmp1628->next;
                        }
                        $fn1630 $tmp1629 = $tmp1628->methods[0];
                        panda$core$Bit $tmp1631 = $tmp1629(Iter$439$171618);
                        panda$core$Bit $tmp1632 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1631);
                        bool $tmp1627 = $tmp1632.value;
                        if (!$tmp1627) goto $l1626;
                        {
                            int $tmp1635;
                            {
                                ITable* $tmp1639 = Iter$439$171618->$class->itable;
                                while ($tmp1639->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1639 = $tmp1639->next;
                                }
                                $fn1641 $tmp1640 = $tmp1639->methods[1];
                                panda$core$Object* $tmp1642 = $tmp1640(Iter$439$171618);
                                $tmp1638 = $tmp1642;
                                $tmp1637 = ((org$pandalanguage$pandac$ASTNode*) $tmp1638);
                                s1636 = $tmp1637;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1637));
                                panda$core$Panda$unref$panda$core$Object($tmp1638);
                                panda$core$String* $tmp1645 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1636), &$s1644);
                                $tmp1643 = $tmp1645;
                                panda$core$MutableString$append$panda$core$String(result1600, $tmp1643);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1643));
                            }
                            $tmp1635 = -1;
                            goto $l1633;
                            $l1633:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1636));
                            s1636 = NULL;
                            switch ($tmp1635) {
                                case -1: goto $l1646;
                            }
                            $l1646:;
                        }
                        goto $l1625;
                        $l1626:;
                    }
                    $tmp1617 = -1;
                    goto $l1615;
                    $l1615:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$439$171618));
                    Iter$439$171618 = NULL;
                    switch ($tmp1617) {
                        case -1: goto $l1647;
                    }
                    $l1647:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1648, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1600, $tmp1648);
                panda$core$String* $tmp1651 = panda$core$MutableString$finish$R$panda$core$String(result1600);
                $tmp1650 = $tmp1651;
                $tmp1649 = $tmp1650;
                $returnValue250 = $tmp1649;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1649));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1650));
                $tmp1599 = 0;
                goto $l1597;
                $l1652:;
                $tmp242 = 50;
                goto $l240;
                $l1653:;
                return $returnValue250;
            }
            $l1597:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1600));
            result1600 = NULL;
            switch ($tmp1599) {
                case 0: goto $l1652;
            }
            $l1655:;
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
    $tmp242 = -1;
    goto $l240;
    $l240:;
    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp244));
    switch ($tmp242) {
        case 40: goto $l1412;
        case 48: goto $l1490;
        case 11: goto $l435;
        case 38: goto $l1396;
        case 18: goto $l663;
        case 50: goto $l1653;
        case 35: goto $l1321;
        case 14: goto $l621;
        case 15: goto $l634;
        case 5: goto $l310;
        case 10: goto $l414;
        case 0: goto $l262;
        case -1: goto $l1656;
        case 41: goto $l1417;
        case 21: goto $l804;
        case 30: goto $l1158;
        case 13: goto $l499;
        case 25: goto $l952;
        case 42: goto $l1423;
        case 7: goto $l346;
        case 4: goto $l305;
        case 34: goto $l1303;
        case 44: goto $l1434;
        case 26: goto $l1018;
        case 43: goto $l1428;
        case 16: goto $l638;
        case 36: goto $l1342;
        case 49: goto $l1587;
        case 31: goto $l1282;
        case 17: goto $l657;
        case 32: goto $l1288;
        case 22: goto $l854;
        case 33: goto $l1297;
        case 29: goto $l1094;
        case 27: goto $l1027;
        case 3: goto $l293;
        case 24: goto $l946;
        case 23: goto $l925;
        case 28: goto $l1036;
        case 39: goto $l1408;
        case 47: goto $l1461;
        case 12: goto $l470;
        case 9: goto $l410;
        case 46: goto $l1455;
        case 20: goto $l748;
        case 8: goto $l397;
        case 2: goto $l279;
        case 37: goto $l1387;
        case 19: goto $l728;
        case 45: goto $l1452;
        case 6: goto $l338;
        case 1: goto $l265;
    }
    $l1656:;
}
void org$pandalanguage$pandac$ASTNode$cleanup(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$5_11663 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1664;
    org$pandalanguage$pandac$Position _f01666;
    panda$core$String* _f11668 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21670 = NULL;
    org$pandalanguage$pandac$Position _f01673;
    org$pandalanguage$pandac$ASTNode* _f11675 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21677 = NULL;
    org$pandalanguage$pandac$Position _f01680;
    org$pandalanguage$pandac$ASTNode* _f11682 = NULL;
    org$pandalanguage$pandac$Position _f01685;
    org$pandalanguage$pandac$Position _f01688;
    org$pandalanguage$pandac$ASTNode* _f11690 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind _f21692;
    org$pandalanguage$pandac$ASTNode* _f31694 = NULL;
    org$pandalanguage$pandac$Position _f01697;
    panda$core$Bit _f11699;
    org$pandalanguage$pandac$Position _f01702;
    panda$collections$ImmutableArray* _f11704 = NULL;
    org$pandalanguage$pandac$Position _f01707;
    panda$core$String* _f11709 = NULL;
    org$pandalanguage$pandac$Position _f01712;
    org$pandalanguage$pandac$ASTNode* _f11714 = NULL;
    panda$collections$ImmutableArray* _f21716 = NULL;
    org$pandalanguage$pandac$Position _f01719;
    org$pandalanguage$pandac$ASTNode* _f11721 = NULL;
    panda$core$String* _f21723 = NULL;
    panda$collections$ImmutableArray* _f31725 = NULL;
    org$pandalanguage$pandac$Position _f01728;
    org$pandalanguage$pandac$ASTNode* _f11730 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* _f21732 = NULL;
    panda$core$Int64 _f31734;
    org$pandalanguage$pandac$Position _f01737;
    org$pandalanguage$pandac$ASTNode* _f11739 = NULL;
    panda$collections$ImmutableArray* _f21741 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind _f31743;
    panda$core$String* _f41745 = NULL;
    panda$collections$ImmutableArray* _f51747 = NULL;
    panda$collections$ImmutableArray* _f61749 = NULL;
    panda$collections$ImmutableArray* _f71751 = NULL;
    org$pandalanguage$pandac$Position _f01754;
    panda$core$String* _f11756 = NULL;
    org$pandalanguage$pandac$Position _f01759;
    org$pandalanguage$pandac$ASTNode* _f11761 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21763 = NULL;
    org$pandalanguage$pandac$Position _f01766;
    panda$core$String* _f11768 = NULL;
    panda$collections$ImmutableArray* _f21770 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31772 = NULL;
    org$pandalanguage$pandac$Position _f01775;
    org$pandalanguage$pandac$ASTNode* _f11777 = NULL;
    panda$core$String* _f21779 = NULL;
    org$pandalanguage$pandac$Position _f01782;
    org$pandalanguage$pandac$ASTNode* _f11784 = NULL;
    panda$collections$ImmutableArray* _f21786 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31788 = NULL;
    panda$collections$ImmutableArray* _f01791 = NULL;
    org$pandalanguage$pandac$Position _f01794;
    panda$core$String* _f11796 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21798 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31800 = NULL;
    panda$collections$ImmutableArray* _f41802 = NULL;
    org$pandalanguage$pandac$Position _f01805;
    panda$core$String* _f11807 = NULL;
    panda$collections$ImmutableArray* _f21809 = NULL;
    org$pandalanguage$pandac$Position _f01812;
    panda$core$String* _f11814 = NULL;
    org$pandalanguage$pandac$Position _f01817;
    org$pandalanguage$pandac$ASTNode* _f11819 = NULL;
    panda$collections$ImmutableArray* _f21821 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31823 = NULL;
    org$pandalanguage$pandac$Position _f01826;
    panda$core$UInt64 _f11828;
    org$pandalanguage$pandac$IRNode* _f01831 = NULL;
    org$pandalanguage$pandac$Position _f01834;
    panda$core$String* _f11836 = NULL;
    panda$collections$ImmutableArray* _f21838 = NULL;
    org$pandalanguage$pandac$Position _f01841;
    org$pandalanguage$pandac$ASTNode* _f11843 = NULL;
    panda$collections$ImmutableArray* _f21845 = NULL;
    panda$collections$ImmutableArray* _f31847 = NULL;
    org$pandalanguage$pandac$Position _f01850;
    org$pandalanguage$pandac$ASTNode* _f11852 = NULL;
    panda$collections$ImmutableArray* _f21854 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind _f31856;
    panda$core$String* _f41858 = NULL;
    panda$collections$ImmutableArray* _f51860 = NULL;
    org$pandalanguage$pandac$ASTNode* _f61862 = NULL;
    panda$collections$ImmutableArray* _f71864 = NULL;
    org$pandalanguage$pandac$Position _f01867;
    org$pandalanguage$pandac$parser$Token$Kind _f11869;
    panda$collections$ImmutableArray* _f21871 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31873 = NULL;
    org$pandalanguage$pandac$Position _f01876;
    org$pandalanguage$pandac$Position _f01879;
    org$pandalanguage$pandac$ASTNode* _f11881 = NULL;
    org$pandalanguage$pandac$Position _f01884;
    panda$core$String* _f11886 = NULL;
    org$pandalanguage$pandac$Position _f01889;
    panda$core$String* _f11891 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21893 = NULL;
    org$pandalanguage$pandac$Position _f01896;
    org$pandalanguage$pandac$parser$Token$Kind _f11898;
    org$pandalanguage$pandac$ASTNode* _f21900 = NULL;
    org$pandalanguage$pandac$Position _f01903;
    org$pandalanguage$pandac$ASTNode* _f11905 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21907 = NULL;
    panda$core$Bit _f31909;
    org$pandalanguage$pandac$ASTNode* _f41911 = NULL;
    org$pandalanguage$pandac$Position _f01914;
    panda$core$Real64 _f11916;
    org$pandalanguage$pandac$Position _f01919;
    org$pandalanguage$pandac$ASTNode* _f11921 = NULL;
    org$pandalanguage$pandac$Position _f01924;
    org$pandalanguage$pandac$Position _f01927;
    panda$core$String* _f11929 = NULL;
    org$pandalanguage$pandac$Position _f01932;
    org$pandalanguage$pandac$Position _f01935;
    panda$collections$ImmutableArray* _f11937 = NULL;
    org$pandalanguage$pandac$Position _f01940;
    panda$core$String* _f11942 = NULL;
    org$pandalanguage$pandac$Position _f01945;
    panda$core$String* _f11947 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21949 = NULL;
    org$pandalanguage$pandac$Position _f01952;
    panda$core$String* _f11954 = NULL;
    org$pandalanguage$pandac$Position _f01957;
    org$pandalanguage$pandac$Variable$Kind _f11959;
    panda$collections$ImmutableArray* _f21961 = NULL;
    org$pandalanguage$pandac$Position _f01964;
    panda$collections$ImmutableArray* _f11966 = NULL;
    panda$collections$ImmutableArray* _f21968 = NULL;
    org$pandalanguage$pandac$Position _f01971;
    panda$core$String* _f11973 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21975 = NULL;
    panda$collections$ImmutableArray* _f31977 = NULL;
    int $tmp1659;
    {
        int $tmp1662;
        {
            $tmp1664 = self;
            $match$5_11663 = $tmp1664;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1664));
            panda$core$Bit $tmp1665 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp1665.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1667 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01666 = *$tmp1667;
                panda$core$String** $tmp1669 = ((panda$core$String**) ((char*) $match$5_11663->$data + 16));
                _f11668 = *$tmp1669;
                org$pandalanguage$pandac$ASTNode** $tmp1671 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11663->$data + 24));
                _f21670 = *$tmp1671;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11668));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21670));
            }
            }
            else {
            panda$core$Bit $tmp1672 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp1672.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1674 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01673 = *$tmp1674;
                org$pandalanguage$pandac$ASTNode** $tmp1676 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11663->$data + 16));
                _f11675 = *$tmp1676;
                org$pandalanguage$pandac$ASTNode** $tmp1678 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11663->$data + 24));
                _f21677 = *$tmp1678;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11675));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21677));
            }
            }
            else {
            panda$core$Bit $tmp1679 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1679.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1681 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01680 = *$tmp1681;
                org$pandalanguage$pandac$ASTNode** $tmp1683 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11663->$data + 16));
                _f11682 = *$tmp1683;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11682));
            }
            }
            else {
            panda$core$Bit $tmp1684 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp1684.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1686 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01685 = *$tmp1686;
            }
            }
            else {
            panda$core$Bit $tmp1687 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 4 }));
            if ($tmp1687.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1689 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01688 = *$tmp1689;
                org$pandalanguage$pandac$ASTNode** $tmp1691 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11663->$data + 16));
                _f11690 = *$tmp1691;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp1693 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11663->$data + 24));
                _f21692 = *$tmp1693;
                org$pandalanguage$pandac$ASTNode** $tmp1695 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11663->$data + 32));
                _f31694 = *$tmp1695;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11690));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31694));
            }
            }
            else {
            panda$core$Bit $tmp1696 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 5 }));
            if ($tmp1696.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1698 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01697 = *$tmp1698;
                panda$core$Bit* $tmp1700 = ((panda$core$Bit*) ((char*) $match$5_11663->$data + 16));
                _f11699 = *$tmp1700;
            }
            }
            else {
            panda$core$Bit $tmp1701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 6 }));
            if ($tmp1701.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1703 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01702 = *$tmp1703;
                panda$collections$ImmutableArray** $tmp1705 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11663->$data + 16));
                _f11704 = *$tmp1705;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11704));
            }
            }
            else {
            panda$core$Bit $tmp1706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 7 }));
            if ($tmp1706.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1708 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01707 = *$tmp1708;
                panda$core$String** $tmp1710 = ((panda$core$String**) ((char*) $match$5_11663->$data + 16));
                _f11709 = *$tmp1710;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11709));
            }
            }
            else {
            panda$core$Bit $tmp1711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 8 }));
            if ($tmp1711.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1713 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01712 = *$tmp1713;
                org$pandalanguage$pandac$ASTNode** $tmp1715 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11663->$data + 16));
                _f11714 = *$tmp1715;
                panda$collections$ImmutableArray** $tmp1717 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11663->$data + 24));
                _f21716 = *$tmp1717;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11714));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21716));
            }
            }
            else {
            panda$core$Bit $tmp1718 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 9 }));
            if ($tmp1718.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1720 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01719 = *$tmp1720;
                org$pandalanguage$pandac$ASTNode** $tmp1722 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11663->$data + 16));
                _f11721 = *$tmp1722;
                panda$core$String** $tmp1724 = ((panda$core$String**) ((char*) $match$5_11663->$data + 24));
                _f21723 = *$tmp1724;
                panda$collections$ImmutableArray** $tmp1726 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11663->$data + 32));
                _f31725 = *$tmp1726;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11721));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21723));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31725));
            }
            }
            else {
            panda$core$Bit $tmp1727 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 10 }));
            if ($tmp1727.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1729 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01728 = *$tmp1729;
                org$pandalanguage$pandac$ASTNode** $tmp1731 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11663->$data + 16));
                _f11730 = *$tmp1731;
                org$pandalanguage$pandac$ChoiceEntry** $tmp1733 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_11663->$data + 24));
                _f21732 = *$tmp1733;
                panda$core$Int64* $tmp1735 = ((panda$core$Int64*) ((char*) $match$5_11663->$data + 32));
                _f31734 = *$tmp1735;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11730));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21732));
            }
            }
            else {
            panda$core$Bit $tmp1736 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp1736.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1738 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01737 = *$tmp1738;
                org$pandalanguage$pandac$ASTNode** $tmp1740 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11663->$data + 16));
                _f11739 = *$tmp1740;
                panda$collections$ImmutableArray** $tmp1742 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11663->$data + 24));
                _f21741 = *$tmp1742;
                org$pandalanguage$pandac$ClassDecl$Kind* $tmp1744 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$5_11663->$data + 32));
                _f31743 = *$tmp1744;
                panda$core$String** $tmp1746 = ((panda$core$String**) ((char*) $match$5_11663->$data + 40));
                _f41745 = *$tmp1746;
                panda$collections$ImmutableArray** $tmp1748 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11663->$data + 48));
                _f51747 = *$tmp1748;
                panda$collections$ImmutableArray** $tmp1750 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11663->$data + 56));
                _f61749 = *$tmp1750;
                panda$collections$ImmutableArray** $tmp1752 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11663->$data + 64));
                _f71751 = *$tmp1752;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11739));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21741));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41745));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f51747));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f61749));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f71751));
            }
            }
            else {
            panda$core$Bit $tmp1753 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp1753.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1755 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01754 = *$tmp1755;
                panda$core$String** $tmp1757 = ((panda$core$String**) ((char*) $match$5_11663->$data + 16));
                _f11756 = *$tmp1757;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11756));
            }
            }
            else {
            panda$core$Bit $tmp1758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp1758.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1760 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01759 = *$tmp1760;
                org$pandalanguage$pandac$ASTNode** $tmp1762 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11663->$data + 16));
                _f11761 = *$tmp1762;
                org$pandalanguage$pandac$ASTNode** $tmp1764 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11663->$data + 24));
                _f21763 = *$tmp1764;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11761));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21763));
            }
            }
            else {
            panda$core$Bit $tmp1765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 14 }));
            if ($tmp1765.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1767 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01766 = *$tmp1767;
                panda$core$String** $tmp1769 = ((panda$core$String**) ((char*) $match$5_11663->$data + 16));
                _f11768 = *$tmp1769;
                panda$collections$ImmutableArray** $tmp1771 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11663->$data + 24));
                _f21770 = *$tmp1771;
                org$pandalanguage$pandac$ASTNode** $tmp1773 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11663->$data + 32));
                _f31772 = *$tmp1773;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11768));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21770));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31772));
            }
            }
            else {
            panda$core$Bit $tmp1774 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 15 }));
            if ($tmp1774.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1776 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01775 = *$tmp1776;
                org$pandalanguage$pandac$ASTNode** $tmp1778 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11663->$data + 16));
                _f11777 = *$tmp1778;
                panda$core$String** $tmp1780 = ((panda$core$String**) ((char*) $match$5_11663->$data + 24));
                _f21779 = *$tmp1780;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11777));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21779));
            }
            }
            else {
            panda$core$Bit $tmp1781 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 16 }));
            if ($tmp1781.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1783 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01782 = *$tmp1783;
                org$pandalanguage$pandac$ASTNode** $tmp1785 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11663->$data + 16));
                _f11784 = *$tmp1785;
                panda$collections$ImmutableArray** $tmp1787 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11663->$data + 24));
                _f21786 = *$tmp1787;
                org$pandalanguage$pandac$ASTNode** $tmp1789 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11663->$data + 32));
                _f31788 = *$tmp1789;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11784));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21786));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31788));
            }
            }
            else {
            panda$core$Bit $tmp1790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp1790.value) {
            {
                panda$collections$ImmutableArray** $tmp1792 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11663->$data + 0));
                _f01791 = *$tmp1792;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f01791));
            }
            }
            else {
            panda$core$Bit $tmp1793 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp1793.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1795 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01794 = *$tmp1795;
                panda$core$String** $tmp1797 = ((panda$core$String**) ((char*) $match$5_11663->$data + 16));
                _f11796 = *$tmp1797;
                org$pandalanguage$pandac$ASTNode** $tmp1799 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11663->$data + 24));
                _f21798 = *$tmp1799;
                org$pandalanguage$pandac$ASTNode** $tmp1801 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11663->$data + 32));
                _f31800 = *$tmp1801;
                panda$collections$ImmutableArray** $tmp1803 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11663->$data + 40));
                _f41802 = *$tmp1803;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11796));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21798));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31800));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41802));
            }
            }
            else {
            panda$core$Bit $tmp1804 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp1804.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1806 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01805 = *$tmp1806;
                panda$core$String** $tmp1808 = ((panda$core$String**) ((char*) $match$5_11663->$data + 16));
                _f11807 = *$tmp1808;
                panda$collections$ImmutableArray** $tmp1810 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11663->$data + 24));
                _f21809 = *$tmp1810;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11807));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21809));
            }
            }
            else {
            panda$core$Bit $tmp1811 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 20 }));
            if ($tmp1811.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1813 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01812 = *$tmp1813;
                panda$core$String** $tmp1815 = ((panda$core$String**) ((char*) $match$5_11663->$data + 16));
                _f11814 = *$tmp1815;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11814));
            }
            }
            else {
            panda$core$Bit $tmp1816 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 21 }));
            if ($tmp1816.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1818 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01817 = *$tmp1818;
                org$pandalanguage$pandac$ASTNode** $tmp1820 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11663->$data + 16));
                _f11819 = *$tmp1820;
                panda$collections$ImmutableArray** $tmp1822 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11663->$data + 24));
                _f21821 = *$tmp1822;
                org$pandalanguage$pandac$ASTNode** $tmp1824 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11663->$data + 32));
                _f31823 = *$tmp1824;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11819));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21821));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31823));
            }
            }
            else {
            panda$core$Bit $tmp1825 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 22 }));
            if ($tmp1825.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1827 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01826 = *$tmp1827;
                panda$core$UInt64* $tmp1829 = ((panda$core$UInt64*) ((char*) $match$5_11663->$data + 16));
                _f11828 = *$tmp1829;
            }
            }
            else {
            panda$core$Bit $tmp1830 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 23 }));
            if ($tmp1830.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp1832 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11663->$data + 0));
                _f01831 = *$tmp1832;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f01831));
            }
            }
            else {
            panda$core$Bit $tmp1833 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 24 }));
            if ($tmp1833.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1835 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01834 = *$tmp1835;
                panda$core$String** $tmp1837 = ((panda$core$String**) ((char*) $match$5_11663->$data + 16));
                _f11836 = *$tmp1837;
                panda$collections$ImmutableArray** $tmp1839 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11663->$data + 24));
                _f21838 = *$tmp1839;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11836));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21838));
            }
            }
            else {
            panda$core$Bit $tmp1840 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 25 }));
            if ($tmp1840.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1842 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01841 = *$tmp1842;
                org$pandalanguage$pandac$ASTNode** $tmp1844 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11663->$data + 16));
                _f11843 = *$tmp1844;
                panda$collections$ImmutableArray** $tmp1846 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11663->$data + 24));
                _f21845 = *$tmp1846;
                panda$collections$ImmutableArray** $tmp1848 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11663->$data + 32));
                _f31847 = *$tmp1848;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11843));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21845));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31847));
            }
            }
            else {
            panda$core$Bit $tmp1849 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 26 }));
            if ($tmp1849.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1851 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01850 = *$tmp1851;
                org$pandalanguage$pandac$ASTNode** $tmp1853 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11663->$data + 16));
                _f11852 = *$tmp1853;
                panda$collections$ImmutableArray** $tmp1855 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11663->$data + 24));
                _f21854 = *$tmp1855;
                org$pandalanguage$pandac$MethodDecl$Kind* $tmp1857 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$5_11663->$data + 32));
                _f31856 = *$tmp1857;
                panda$core$String** $tmp1859 = ((panda$core$String**) ((char*) $match$5_11663->$data + 40));
                _f41858 = *$tmp1859;
                panda$collections$ImmutableArray** $tmp1861 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11663->$data + 48));
                _f51860 = *$tmp1861;
                org$pandalanguage$pandac$ASTNode** $tmp1863 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11663->$data + 56));
                _f61862 = *$tmp1863;
                panda$collections$ImmutableArray** $tmp1865 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11663->$data + 64));
                _f71864 = *$tmp1865;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11852));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21854));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41858));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f51860));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f61862));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f71864));
            }
            }
            else {
            panda$core$Bit $tmp1866 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 27 }));
            if ($tmp1866.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1868 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01867 = *$tmp1868;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp1870 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11663->$data + 16));
                _f11869 = *$tmp1870;
                panda$collections$ImmutableArray** $tmp1872 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11663->$data + 24));
                _f21871 = *$tmp1872;
                org$pandalanguage$pandac$ASTNode** $tmp1874 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11663->$data + 32));
                _f31873 = *$tmp1874;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21871));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31873));
            }
            }
            else {
            panda$core$Bit $tmp1875 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 28 }));
            if ($tmp1875.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1877 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01876 = *$tmp1877;
            }
            }
            else {
            panda$core$Bit $tmp1878 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 29 }));
            if ($tmp1878.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1880 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01879 = *$tmp1880;
                org$pandalanguage$pandac$ASTNode** $tmp1882 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11663->$data + 16));
                _f11881 = *$tmp1882;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11881));
            }
            }
            else {
            panda$core$Bit $tmp1883 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 30 }));
            if ($tmp1883.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1885 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01884 = *$tmp1885;
                panda$core$String** $tmp1887 = ((panda$core$String**) ((char*) $match$5_11663->$data + 16));
                _f11886 = *$tmp1887;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11886));
            }
            }
            else {
            panda$core$Bit $tmp1888 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 31 }));
            if ($tmp1888.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1890 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01889 = *$tmp1890;
                panda$core$String** $tmp1892 = ((panda$core$String**) ((char*) $match$5_11663->$data + 16));
                _f11891 = *$tmp1892;
                org$pandalanguage$pandac$ASTNode** $tmp1894 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11663->$data + 24));
                _f21893 = *$tmp1894;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11891));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21893));
            }
            }
            else {
            panda$core$Bit $tmp1895 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 32 }));
            if ($tmp1895.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1897 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01896 = *$tmp1897;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp1899 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11663->$data + 16));
                _f11898 = *$tmp1899;
                org$pandalanguage$pandac$ASTNode** $tmp1901 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11663->$data + 24));
                _f21900 = *$tmp1901;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21900));
            }
            }
            else {
            panda$core$Bit $tmp1902 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp1902.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1904 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01903 = *$tmp1904;
                org$pandalanguage$pandac$ASTNode** $tmp1906 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11663->$data + 16));
                _f11905 = *$tmp1906;
                org$pandalanguage$pandac$ASTNode** $tmp1908 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11663->$data + 24));
                _f21907 = *$tmp1908;
                panda$core$Bit* $tmp1910 = ((panda$core$Bit*) ((char*) $match$5_11663->$data + 32));
                _f31909 = *$tmp1910;
                org$pandalanguage$pandac$ASTNode** $tmp1912 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11663->$data + 33));
                _f41911 = *$tmp1912;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11905));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21907));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41911));
            }
            }
            else {
            panda$core$Bit $tmp1913 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp1913.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1915 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01914 = *$tmp1915;
                panda$core$Real64* $tmp1917 = ((panda$core$Real64*) ((char*) $match$5_11663->$data + 16));
                _f11916 = *$tmp1917;
            }
            }
            else {
            panda$core$Bit $tmp1918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 35 }));
            if ($tmp1918.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1920 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01919 = *$tmp1920;
                org$pandalanguage$pandac$ASTNode** $tmp1922 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11663->$data + 16));
                _f11921 = *$tmp1922;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11921));
            }
            }
            else {
            panda$core$Bit $tmp1923 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 36 }));
            if ($tmp1923.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1925 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01924 = *$tmp1925;
            }
            }
            else {
            panda$core$Bit $tmp1926 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 37 }));
            if ($tmp1926.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1928 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01927 = *$tmp1928;
                panda$core$String** $tmp1930 = ((panda$core$String**) ((char*) $match$5_11663->$data + 16));
                _f11929 = *$tmp1930;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11929));
            }
            }
            else {
            panda$core$Bit $tmp1931 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 38 }));
            if ($tmp1931.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1933 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01932 = *$tmp1933;
            }
            }
            else {
            panda$core$Bit $tmp1934 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp1934.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1936 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01935 = *$tmp1936;
                panda$collections$ImmutableArray** $tmp1938 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11663->$data + 16));
                _f11937 = *$tmp1938;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11937));
            }
            }
            else {
            panda$core$Bit $tmp1939 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 40 }));
            if ($tmp1939.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1941 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01940 = *$tmp1941;
                panda$core$String** $tmp1943 = ((panda$core$String**) ((char*) $match$5_11663->$data + 16));
                _f11942 = *$tmp1943;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11942));
            }
            }
            else {
            panda$core$Bit $tmp1944 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 41 }));
            if ($tmp1944.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1946 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01945 = *$tmp1946;
                panda$core$String** $tmp1948 = ((panda$core$String**) ((char*) $match$5_11663->$data + 16));
                _f11947 = *$tmp1948;
                org$pandalanguage$pandac$ASTNode** $tmp1950 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11663->$data + 24));
                _f21949 = *$tmp1950;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11947));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21949));
            }
            }
            else {
            panda$core$Bit $tmp1951 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 42 }));
            if ($tmp1951.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1953 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01952 = *$tmp1953;
                panda$core$String** $tmp1955 = ((panda$core$String**) ((char*) $match$5_11663->$data + 16));
                _f11954 = *$tmp1955;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11954));
            }
            }
            else {
            panda$core$Bit $tmp1956 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 43 }));
            if ($tmp1956.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1958 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01957 = *$tmp1958;
                org$pandalanguage$pandac$Variable$Kind* $tmp1960 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_11663->$data + 16));
                _f11959 = *$tmp1960;
                panda$collections$ImmutableArray** $tmp1962 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11663->$data + 24));
                _f21961 = *$tmp1962;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21961));
            }
            }
            else {
            panda$core$Bit $tmp1963 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 44 }));
            if ($tmp1963.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1965 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01964 = *$tmp1965;
                panda$collections$ImmutableArray** $tmp1967 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11663->$data + 16));
                _f11966 = *$tmp1967;
                panda$collections$ImmutableArray** $tmp1969 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11663->$data + 24));
                _f21968 = *$tmp1969;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11966));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21968));
            }
            }
            else {
            panda$core$Bit $tmp1970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11663->$rawValue, ((panda$core$Int64) { 45 }));
            if ($tmp1970.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1972 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11663->$data + 0));
                _f01971 = *$tmp1972;
                panda$core$String** $tmp1974 = ((panda$core$String**) ((char*) $match$5_11663->$data + 16));
                _f11973 = *$tmp1974;
                org$pandalanguage$pandac$ASTNode** $tmp1976 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11663->$data + 24));
                _f21975 = *$tmp1976;
                panda$collections$ImmutableArray** $tmp1978 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11663->$data + 32));
                _f31977 = *$tmp1978;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11973));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21975));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31977));
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
        }
        $tmp1662 = -1;
        goto $l1660;
        $l1660:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1664));
        switch ($tmp1662) {
            case -1: goto $l1979;
        }
        $l1979:;
    }
    $tmp1659 = -1;
    goto $l1657;
    $l1657:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp1659) {
        case -1: goto $l1980;
    }
    $l1980:;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$core$String* $tmp1982;
    panda$core$String* $tmp1985;
    org$pandalanguage$pandac$ASTNode* $tmp1986;
    org$pandalanguage$pandac$ASTNode* $tmp1989;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp1981 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp1981 = p_f0;
    {
        panda$core$String** $tmp1983 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp1982 = *$tmp1983;
        panda$core$String** $tmp1984 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp1985 = p_f1;
        *$tmp1984 = $tmp1985;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1985));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1982));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp1987 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp1986 = *$tmp1987;
        org$pandalanguage$pandac$ASTNode** $tmp1988 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp1989 = p_f2;
        *$tmp1988 = $tmp1989;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1989));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1986));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp1991;
    org$pandalanguage$pandac$ASTNode* $tmp1994;
    org$pandalanguage$pandac$ASTNode* $tmp1995;
    org$pandalanguage$pandac$ASTNode* $tmp1998;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp1990 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp1990 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp1992 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp1991 = *$tmp1992;
        org$pandalanguage$pandac$ASTNode** $tmp1993 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp1994 = p_f1;
        *$tmp1993 = $tmp1994;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1994));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1991));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp1996 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp1995 = *$tmp1996;
        org$pandalanguage$pandac$ASTNode** $tmp1997 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp1998 = p_f2;
        *$tmp1997 = $tmp1998;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1998));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1995));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    org$pandalanguage$pandac$ASTNode* $tmp2000;
    org$pandalanguage$pandac$ASTNode* $tmp2003;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp1999 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp1999 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2001 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2000 = *$tmp2001;
        org$pandalanguage$pandac$ASTNode** $tmp2002 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2003 = p_f1;
        *$tmp2002 = $tmp2003;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2003));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2000));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2004 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2004 = p_f0;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$parser$Token$Kind p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2006;
    org$pandalanguage$pandac$ASTNode* $tmp2009;
    org$pandalanguage$pandac$ASTNode* $tmp2011;
    org$pandalanguage$pandac$ASTNode* $tmp2014;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2005 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2005 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2007 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2006 = *$tmp2007;
        org$pandalanguage$pandac$ASTNode** $tmp2008 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2009 = p_f1;
        *$tmp2008 = $tmp2009;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2009));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2006));
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2010 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 24));
    *$tmp2010 = p_f2;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2012 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2011 = *$tmp2012;
        org$pandalanguage$pandac$ASTNode** $tmp2013 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2014 = p_f3;
        *$tmp2013 = $tmp2014;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2014));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2011));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Bit p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2015 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2015 = p_f0;
    panda$core$Bit* $tmp2016 = ((panda$core$Bit*) ((char*) self->$data + 16));
    *$tmp2016 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    panda$collections$ImmutableArray* $tmp2018;
    panda$collections$ImmutableArray* $tmp2021;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2017 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2017 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2019 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2018 = *$tmp2019;
        panda$collections$ImmutableArray** $tmp2020 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2021 = p_f1;
        *$tmp2020 = $tmp2021;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2021));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2018));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp2023;
    panda$core$String* $tmp2026;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2022 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2022 = p_f0;
    {
        panda$core$String** $tmp2024 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2023 = *$tmp2024;
        panda$core$String** $tmp2025 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2026 = p_f1;
        *$tmp2025 = $tmp2026;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2026));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2023));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2028;
    org$pandalanguage$pandac$ASTNode* $tmp2031;
    panda$collections$ImmutableArray* $tmp2032;
    panda$collections$ImmutableArray* $tmp2035;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2027 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2027 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2029 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2028 = *$tmp2029;
        org$pandalanguage$pandac$ASTNode** $tmp2030 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2031 = p_f1;
        *$tmp2030 = $tmp2031;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2031));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2028));
    }
    {
        panda$collections$ImmutableArray** $tmp2033 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2032 = *$tmp2033;
        panda$collections$ImmutableArray** $tmp2034 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2035 = p_f2;
        *$tmp2034 = $tmp2035;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2035));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2032));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2037;
    org$pandalanguage$pandac$ASTNode* $tmp2040;
    panda$core$String* $tmp2041;
    panda$core$String* $tmp2044;
    panda$collections$ImmutableArray* $tmp2045;
    panda$collections$ImmutableArray* $tmp2048;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2036 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2036 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2038 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2037 = *$tmp2038;
        org$pandalanguage$pandac$ASTNode** $tmp2039 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2040 = p_f1;
        *$tmp2039 = $tmp2040;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2040));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2037));
    }
    {
        panda$core$String** $tmp2042 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2041 = *$tmp2042;
        panda$core$String** $tmp2043 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2044 = p_f2;
        *$tmp2043 = $tmp2044;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2044));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2041));
    }
    {
        panda$collections$ImmutableArray** $tmp2046 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2045 = *$tmp2046;
        panda$collections$ImmutableArray** $tmp2047 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2048 = p_f3;
        *$tmp2047 = $tmp2048;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2048));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2045));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2050;
    org$pandalanguage$pandac$ASTNode* $tmp2053;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2054;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2057;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2049 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2049 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2051 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2050 = *$tmp2051;
        org$pandalanguage$pandac$ASTNode** $tmp2052 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2053 = p_f1;
        *$tmp2052 = $tmp2053;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2053));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2050));
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp2055 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp2054 = *$tmp2055;
        org$pandalanguage$pandac$ChoiceEntry** $tmp2056 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp2057 = p_f2;
        *$tmp2056 = $tmp2057;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2057));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2054));
    }
    panda$core$Int64* $tmp2058 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp2058 = p_f3;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ClassDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, panda$collections$ImmutableArray* p_f6, panda$collections$ImmutableArray* p_f7) {
    org$pandalanguage$pandac$ASTNode* $tmp2060;
    org$pandalanguage$pandac$ASTNode* $tmp2063;
    panda$collections$ImmutableArray* $tmp2064;
    panda$collections$ImmutableArray* $tmp2067;
    panda$core$String* $tmp2069;
    panda$core$String* $tmp2072;
    panda$collections$ImmutableArray* $tmp2073;
    panda$collections$ImmutableArray* $tmp2076;
    panda$collections$ImmutableArray* $tmp2077;
    panda$collections$ImmutableArray* $tmp2080;
    panda$collections$ImmutableArray* $tmp2081;
    panda$collections$ImmutableArray* $tmp2084;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2059 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2059 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2061 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2060 = *$tmp2061;
        org$pandalanguage$pandac$ASTNode** $tmp2062 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2063 = p_f1;
        *$tmp2062 = $tmp2063;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2063));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2060));
    }
    {
        panda$collections$ImmutableArray** $tmp2065 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2064 = *$tmp2065;
        panda$collections$ImmutableArray** $tmp2066 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2067 = p_f2;
        *$tmp2066 = $tmp2067;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2067));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2064));
    }
    org$pandalanguage$pandac$ClassDecl$Kind* $tmp2068 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) self->$data + 32));
    *$tmp2068 = p_f3;
    {
        panda$core$String** $tmp2070 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2069 = *$tmp2070;
        panda$core$String** $tmp2071 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2072 = p_f4;
        *$tmp2071 = $tmp2072;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2072));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2069));
    }
    {
        panda$collections$ImmutableArray** $tmp2074 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2073 = *$tmp2074;
        panda$collections$ImmutableArray** $tmp2075 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2076 = p_f5;
        *$tmp2075 = $tmp2076;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2076));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2073));
    }
    {
        panda$collections$ImmutableArray** $tmp2078 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2077 = *$tmp2078;
        panda$collections$ImmutableArray** $tmp2079 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2080 = p_f6;
        *$tmp2079 = $tmp2080;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2080));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2077));
    }
    {
        panda$collections$ImmutableArray** $tmp2082 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2081 = *$tmp2082;
        panda$collections$ImmutableArray** $tmp2083 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2084 = p_f7;
        *$tmp2083 = $tmp2084;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2084));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2081));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    panda$core$String* $tmp2086;
    panda$core$String* $tmp2089;
    panda$collections$ImmutableArray* $tmp2090;
    panda$collections$ImmutableArray* $tmp2093;
    org$pandalanguage$pandac$ASTNode* $tmp2094;
    org$pandalanguage$pandac$ASTNode* $tmp2097;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2085 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2085 = p_f0;
    {
        panda$core$String** $tmp2087 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2086 = *$tmp2087;
        panda$core$String** $tmp2088 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2089 = p_f1;
        *$tmp2088 = $tmp2089;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2089));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2086));
    }
    {
        panda$collections$ImmutableArray** $tmp2091 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2090 = *$tmp2091;
        panda$collections$ImmutableArray** $tmp2092 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2093 = p_f2;
        *$tmp2092 = $tmp2093;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2093));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2090));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2095 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2094 = *$tmp2095;
        org$pandalanguage$pandac$ASTNode** $tmp2096 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2097 = p_f3;
        *$tmp2096 = $tmp2097;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2097));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2094));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2099;
    org$pandalanguage$pandac$ASTNode* $tmp2102;
    panda$core$String* $tmp2103;
    panda$core$String* $tmp2106;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2098 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2098 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2100 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2099 = *$tmp2100;
        org$pandalanguage$pandac$ASTNode** $tmp2101 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2102 = p_f1;
        *$tmp2101 = $tmp2102;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2102));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2099));
    }
    {
        panda$core$String** $tmp2104 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2103 = *$tmp2104;
        panda$core$String** $tmp2105 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2106 = p_f2;
        *$tmp2105 = $tmp2106;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2106));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2103));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2108;
    org$pandalanguage$pandac$ASTNode* $tmp2111;
    panda$collections$ImmutableArray* $tmp2112;
    panda$collections$ImmutableArray* $tmp2115;
    org$pandalanguage$pandac$ASTNode* $tmp2116;
    org$pandalanguage$pandac$ASTNode* $tmp2119;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2107 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2107 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2109 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2108 = *$tmp2109;
        org$pandalanguage$pandac$ASTNode** $tmp2110 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2111 = p_f1;
        *$tmp2110 = $tmp2111;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2111));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2108));
    }
    {
        panda$collections$ImmutableArray** $tmp2113 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2112 = *$tmp2113;
        panda$collections$ImmutableArray** $tmp2114 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2115 = p_f2;
        *$tmp2114 = $tmp2115;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2115));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2112));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2117 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2116 = *$tmp2117;
        org$pandalanguage$pandac$ASTNode** $tmp2118 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2119 = p_f3;
        *$tmp2118 = $tmp2119;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2119));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2116));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, panda$collections$ImmutableArray* p_f0) {
    panda$collections$ImmutableArray* $tmp2120;
    panda$collections$ImmutableArray* $tmp2123;
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableArray** $tmp2121 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp2120 = *$tmp2121;
        panda$collections$ImmutableArray** $tmp2122 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp2123 = p_f0;
        *$tmp2122 = $tmp2123;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2123));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2120));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, org$pandalanguage$pandac$ASTNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    panda$core$String* $tmp2125;
    panda$core$String* $tmp2128;
    org$pandalanguage$pandac$ASTNode* $tmp2129;
    org$pandalanguage$pandac$ASTNode* $tmp2132;
    org$pandalanguage$pandac$ASTNode* $tmp2133;
    org$pandalanguage$pandac$ASTNode* $tmp2136;
    panda$collections$ImmutableArray* $tmp2137;
    panda$collections$ImmutableArray* $tmp2140;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2124 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2124 = p_f0;
    {
        panda$core$String** $tmp2126 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2125 = *$tmp2126;
        panda$core$String** $tmp2127 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2128 = p_f1;
        *$tmp2127 = $tmp2128;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2128));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2125));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2130 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2129 = *$tmp2130;
        org$pandalanguage$pandac$ASTNode** $tmp2131 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2132 = p_f2;
        *$tmp2131 = $tmp2132;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2132));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2129));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2134 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2133 = *$tmp2134;
        org$pandalanguage$pandac$ASTNode** $tmp2135 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2136 = p_f3;
        *$tmp2135 = $tmp2136;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2136));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2133));
    }
    {
        panda$collections$ImmutableArray** $tmp2138 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp2137 = *$tmp2138;
        panda$collections$ImmutableArray** $tmp2139 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp2140 = p_f4;
        *$tmp2139 = $tmp2140;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2140));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2137));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp2142;
    panda$core$String* $tmp2145;
    panda$collections$ImmutableArray* $tmp2146;
    panda$collections$ImmutableArray* $tmp2149;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2141 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2141 = p_f0;
    {
        panda$core$String** $tmp2143 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2142 = *$tmp2143;
        panda$core$String** $tmp2144 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2145 = p_f1;
        *$tmp2144 = $tmp2145;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2145));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2142));
    }
    {
        panda$collections$ImmutableArray** $tmp2147 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2146 = *$tmp2147;
        panda$collections$ImmutableArray** $tmp2148 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2149 = p_f2;
        *$tmp2148 = $tmp2149;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2149));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2146));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp2151;
    panda$core$String* $tmp2154;
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
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2156;
    org$pandalanguage$pandac$ASTNode* $tmp2159;
    panda$collections$ImmutableArray* $tmp2160;
    panda$collections$ImmutableArray* $tmp2163;
    org$pandalanguage$pandac$ASTNode* $tmp2164;
    org$pandalanguage$pandac$ASTNode* $tmp2167;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2155 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2155 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2157 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2156 = *$tmp2157;
        org$pandalanguage$pandac$ASTNode** $tmp2158 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2159 = p_f1;
        *$tmp2158 = $tmp2159;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2159));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2156));
    }
    {
        panda$collections$ImmutableArray** $tmp2161 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2160 = *$tmp2161;
        panda$collections$ImmutableArray** $tmp2162 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2163 = p_f2;
        *$tmp2162 = $tmp2163;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2163));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2160));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2165 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2164 = *$tmp2165;
        org$pandalanguage$pandac$ASTNode** $tmp2166 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2167 = p_f3;
        *$tmp2166 = $tmp2167;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2167));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2164));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$UInt64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2168 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2168 = p_f0;
    panda$core$UInt64* $tmp2169 = ((panda$core$UInt64*) ((char*) self->$data + 16));
    *$tmp2169 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0) {
    org$pandalanguage$pandac$IRNode* $tmp2170;
    org$pandalanguage$pandac$IRNode* $tmp2173;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp2171 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp2170 = *$tmp2171;
        org$pandalanguage$pandac$IRNode** $tmp2172 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp2173 = p_f0;
        *$tmp2172 = $tmp2173;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2173));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2170));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp2175;
    panda$core$String* $tmp2178;
    panda$collections$ImmutableArray* $tmp2179;
    panda$collections$ImmutableArray* $tmp2182;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2174 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2174 = p_f0;
    {
        panda$core$String** $tmp2176 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2175 = *$tmp2176;
        panda$core$String** $tmp2177 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2178 = p_f1;
        *$tmp2177 = $tmp2178;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2178));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2175));
    }
    {
        panda$collections$ImmutableArray** $tmp2180 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2179 = *$tmp2180;
        panda$collections$ImmutableArray** $tmp2181 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2182 = p_f2;
        *$tmp2181 = $tmp2182;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2182));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2179));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2184;
    org$pandalanguage$pandac$ASTNode* $tmp2187;
    panda$collections$ImmutableArray* $tmp2188;
    panda$collections$ImmutableArray* $tmp2191;
    panda$collections$ImmutableArray* $tmp2192;
    panda$collections$ImmutableArray* $tmp2195;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2183 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2183 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2185 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2184 = *$tmp2185;
        org$pandalanguage$pandac$ASTNode** $tmp2186 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2187 = p_f1;
        *$tmp2186 = $tmp2187;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2187));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2184));
    }
    {
        panda$collections$ImmutableArray** $tmp2189 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2188 = *$tmp2189;
        panda$collections$ImmutableArray** $tmp2190 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2191 = p_f2;
        *$tmp2190 = $tmp2191;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2191));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2188));
    }
    {
        panda$collections$ImmutableArray** $tmp2193 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2192 = *$tmp2193;
        panda$collections$ImmutableArray** $tmp2194 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2195 = p_f3;
        *$tmp2194 = $tmp2195;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2195));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2192));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$MethodDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, org$pandalanguage$pandac$ASTNode* p_f6, panda$collections$ImmutableArray* p_f7) {
    org$pandalanguage$pandac$ASTNode* $tmp2197;
    org$pandalanguage$pandac$ASTNode* $tmp2200;
    panda$collections$ImmutableArray* $tmp2201;
    panda$collections$ImmutableArray* $tmp2204;
    panda$core$String* $tmp2206;
    panda$core$String* $tmp2209;
    panda$collections$ImmutableArray* $tmp2210;
    panda$collections$ImmutableArray* $tmp2213;
    org$pandalanguage$pandac$ASTNode* $tmp2214;
    org$pandalanguage$pandac$ASTNode* $tmp2217;
    panda$collections$ImmutableArray* $tmp2218;
    panda$collections$ImmutableArray* $tmp2221;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2196 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2196 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2198 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2197 = *$tmp2198;
        org$pandalanguage$pandac$ASTNode** $tmp2199 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2200 = p_f1;
        *$tmp2199 = $tmp2200;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2200));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2197));
    }
    {
        panda$collections$ImmutableArray** $tmp2202 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2201 = *$tmp2202;
        panda$collections$ImmutableArray** $tmp2203 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2204 = p_f2;
        *$tmp2203 = $tmp2204;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2204));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2201));
    }
    org$pandalanguage$pandac$MethodDecl$Kind* $tmp2205 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) self->$data + 32));
    *$tmp2205 = p_f3;
    {
        panda$core$String** $tmp2207 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2206 = *$tmp2207;
        panda$core$String** $tmp2208 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2209 = p_f4;
        *$tmp2208 = $tmp2209;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2209));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2206));
    }
    {
        panda$collections$ImmutableArray** $tmp2211 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2210 = *$tmp2211;
        panda$collections$ImmutableArray** $tmp2212 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2213 = p_f5;
        *$tmp2212 = $tmp2213;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2213));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2210));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2215 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 56));
        $tmp2214 = *$tmp2215;
        org$pandalanguage$pandac$ASTNode** $tmp2216 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 56));
        $tmp2217 = p_f6;
        *$tmp2216 = $tmp2217;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2217));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2214));
    }
    {
        panda$collections$ImmutableArray** $tmp2219 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2218 = *$tmp2219;
        panda$collections$ImmutableArray** $tmp2220 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2221 = p_f7;
        *$tmp2220 = $tmp2221;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2221));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2218));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    panda$collections$ImmutableArray* $tmp2224;
    panda$collections$ImmutableArray* $tmp2227;
    org$pandalanguage$pandac$ASTNode* $tmp2228;
    org$pandalanguage$pandac$ASTNode* $tmp2231;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2222 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2222 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2223 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp2223 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp2225 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2224 = *$tmp2225;
        panda$collections$ImmutableArray** $tmp2226 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2227 = p_f2;
        *$tmp2226 = $tmp2227;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2227));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2224));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2229 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2228 = *$tmp2229;
        org$pandalanguage$pandac$ASTNode** $tmp2230 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2231 = p_f3;
        *$tmp2230 = $tmp2231;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2231));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2228));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$core$String* $tmp2233;
    panda$core$String* $tmp2236;
    org$pandalanguage$pandac$ASTNode* $tmp2237;
    org$pandalanguage$pandac$ASTNode* $tmp2240;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2232 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2232 = p_f0;
    {
        panda$core$String** $tmp2234 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2233 = *$tmp2234;
        panda$core$String** $tmp2235 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2236 = p_f1;
        *$tmp2235 = $tmp2236;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2236));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2233));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2238 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2237 = *$tmp2238;
        org$pandalanguage$pandac$ASTNode** $tmp2239 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2240 = p_f2;
        *$tmp2239 = $tmp2240;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2240));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2237));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2243;
    org$pandalanguage$pandac$ASTNode* $tmp2246;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2241 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2241 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2242 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp2242 = p_f1;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2244 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2243 = *$tmp2244;
        org$pandalanguage$pandac$ASTNode** $tmp2245 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2246 = p_f2;
        *$tmp2245 = $tmp2246;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2246));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2243));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$ASTNode* p_f4) {
    org$pandalanguage$pandac$ASTNode* $tmp2248;
    org$pandalanguage$pandac$ASTNode* $tmp2251;
    org$pandalanguage$pandac$ASTNode* $tmp2252;
    org$pandalanguage$pandac$ASTNode* $tmp2255;
    org$pandalanguage$pandac$ASTNode* $tmp2257;
    org$pandalanguage$pandac$ASTNode* $tmp2260;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2247 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2247 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2249 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2248 = *$tmp2249;
        org$pandalanguage$pandac$ASTNode** $tmp2250 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2251 = p_f1;
        *$tmp2250 = $tmp2251;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2251));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2248));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2253 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2252 = *$tmp2253;
        org$pandalanguage$pandac$ASTNode** $tmp2254 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2255 = p_f2;
        *$tmp2254 = $tmp2255;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2255));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2252));
    }
    panda$core$Bit* $tmp2256 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp2256 = p_f3;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2258 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        $tmp2257 = *$tmp2258;
        org$pandalanguage$pandac$ASTNode** $tmp2259 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        $tmp2260 = p_f4;
        *$tmp2259 = $tmp2260;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2260));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2257));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Real64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2261 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2261 = p_f0;
    panda$core$Real64* $tmp2262 = ((panda$core$Real64*) ((char*) self->$data + 16));
    *$tmp2262 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    org$pandalanguage$pandac$ASTNode* $tmp2264;
    org$pandalanguage$pandac$ASTNode* $tmp2267;
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
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp2270;
    panda$collections$ImmutableArray* $tmp2273;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2268 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2268 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp2269 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp2269 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp2271 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2270 = *$tmp2271;
        panda$collections$ImmutableArray** $tmp2272 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2273 = p_f2;
        *$tmp2272 = $tmp2273;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2273));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2270));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp2275;
    panda$collections$ImmutableArray* $tmp2278;
    panda$collections$ImmutableArray* $tmp2279;
    panda$collections$ImmutableArray* $tmp2282;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2274 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2274 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2276 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2275 = *$tmp2276;
        panda$collections$ImmutableArray** $tmp2277 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2278 = p_f1;
        *$tmp2277 = $tmp2278;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2278));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2275));
    }
    {
        panda$collections$ImmutableArray** $tmp2280 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2279 = *$tmp2280;
        panda$collections$ImmutableArray** $tmp2281 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2282 = p_f2;
        *$tmp2281 = $tmp2282;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2282));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2279));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    panda$core$String* $tmp2284;
    panda$core$String* $tmp2287;
    org$pandalanguage$pandac$ASTNode* $tmp2288;
    org$pandalanguage$pandac$ASTNode* $tmp2291;
    panda$collections$ImmutableArray* $tmp2292;
    panda$collections$ImmutableArray* $tmp2295;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2283 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2283 = p_f0;
    {
        panda$core$String** $tmp2285 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2284 = *$tmp2285;
        panda$core$String** $tmp2286 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2287 = p_f1;
        *$tmp2286 = $tmp2287;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2287));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2284));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2289 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2288 = *$tmp2289;
        org$pandalanguage$pandac$ASTNode** $tmp2290 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2291 = p_f2;
        *$tmp2290 = $tmp2291;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2291));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2288));
    }
    {
        panda$collections$ImmutableArray** $tmp2293 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2292 = *$tmp2293;
        panda$collections$ImmutableArray** $tmp2294 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2295 = p_f3;
        *$tmp2294 = $tmp2295;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2295));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2292));
    }
}






