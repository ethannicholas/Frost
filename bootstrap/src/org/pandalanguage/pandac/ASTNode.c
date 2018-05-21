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
typedef panda$core$String* (*$fn1353)(panda$core$Object*);
typedef panda$core$String* (*$fn1505)(panda$collections$ListView*);
typedef panda$collections$Iterator* (*$fn1538)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1545)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1556)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1579)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1586)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1597)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1644)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1651)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1662)(panda$collections$Iterator*);

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
static panda$core$String $s1305 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s1313 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s1334 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1337 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1358 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1384 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s1385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s1399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s1422 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s1424 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s1434 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s1445 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s1465 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1468 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1495 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s1497 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s1499 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1501 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s1526 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s1529 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1566 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1628 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1632 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s1634 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1665 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };

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
    panda$core$String* $tmp1304;
    org$pandalanguage$pandac$ASTNode* base1309 = NULL;
    panda$core$String* $tmp1311;
    panda$core$String* $tmp1312;
    panda$core$String* name1318 = NULL;
    panda$core$String* $tmp1320;
    panda$core$String* name1324 = NULL;
    org$pandalanguage$pandac$ASTNode* type1326 = NULL;
    panda$core$String* $tmp1328;
    panda$core$String* $tmp1329;
    panda$core$String* $tmp1330;
    panda$core$String* $tmp1331;
    panda$core$String* $tmp1332;
    org$pandalanguage$pandac$parser$Token$Kind kind1342;
    org$pandalanguage$pandac$ASTNode* base1344 = NULL;
    panda$core$String* $tmp1346;
    panda$core$String* $tmp1347;
    panda$core$String* $tmp1348;
    panda$core$String* $tmp1349;
    panda$core$String* $tmp1350;
    panda$core$Object* $tmp1351;
    org$pandalanguage$pandac$ASTNode* start1363 = NULL;
    org$pandalanguage$pandac$ASTNode* end1365 = NULL;
    panda$core$Bit inclusive1367;
    org$pandalanguage$pandac$ASTNode* step1369 = NULL;
    panda$core$MutableString* result1374 = NULL;
    panda$core$MutableString* $tmp1375;
    panda$core$MutableString* $tmp1376;
    org$pandalanguage$pandac$ASTNode* $tmp1378;
    org$pandalanguage$pandac$ASTNode* $tmp1386;
    org$pandalanguage$pandac$ASTNode* $tmp1392;
    panda$core$String* $tmp1398;
    panda$core$String* $tmp1401;
    panda$core$String* $tmp1402;
    panda$core$Real64 value1409;
    panda$core$String* $tmp1411;
    panda$core$String* $tmp1412;
    org$pandalanguage$pandac$ASTNode* value1417 = NULL;
    panda$core$String* $tmp1419;
    panda$core$String* $tmp1420;
    panda$core$String* $tmp1421;
    panda$core$String* $tmp1428;
    panda$core$String* $tmp1433;
    panda$core$String* str1438 = NULL;
    panda$core$String* $tmp1440;
    panda$core$String* $tmp1444;
    panda$core$String* name1449 = NULL;
    panda$core$String* $tmp1451;
    panda$core$String* name1455 = NULL;
    org$pandalanguage$pandac$ASTNode* type1457 = NULL;
    panda$core$String* $tmp1459;
    panda$core$String* $tmp1460;
    panda$core$String* $tmp1461;
    panda$core$String* $tmp1462;
    panda$core$String* $tmp1463;
    panda$core$String* $tmp1472;
    panda$core$String* name1476 = NULL;
    panda$core$String* $tmp1478;
    org$pandalanguage$pandac$Variable$Kind kind1482;
    panda$collections$ImmutableArray* decls1484 = NULL;
    panda$core$MutableString* result1489 = NULL;
    panda$core$MutableString* $tmp1490;
    panda$core$MutableString* $tmp1491;
    org$pandalanguage$pandac$Variable$Kind $match$414_171493;
    panda$core$String* $tmp1502;
    panda$core$String* $tmp1507;
    panda$core$String* $tmp1508;
    panda$collections$ImmutableArray* tests1515 = NULL;
    panda$collections$ImmutableArray* statements1517 = NULL;
    panda$core$MutableString* result1522 = NULL;
    panda$core$MutableString* $tmp1523;
    panda$core$MutableString* $tmp1524;
    panda$core$String* separator1527 = NULL;
    panda$core$String* $tmp1528;
    panda$collections$Iterator* Iter$425$171533 = NULL;
    panda$collections$Iterator* $tmp1534;
    panda$collections$Iterator* $tmp1535;
    org$pandalanguage$pandac$ASTNode* t1551 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1552;
    panda$core$Object* $tmp1553;
    panda$core$String* $tmp1558;
    panda$core$String* $tmp1559;
    panda$core$String* $tmp1560;
    panda$core$String* $tmp1561;
    panda$core$Char8 $tmp1570;
    panda$collections$Iterator* Iter$429$171574 = NULL;
    panda$collections$Iterator* $tmp1575;
    panda$collections$Iterator* $tmp1576;
    org$pandalanguage$pandac$ASTNode* s1592 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1593;
    panda$core$Object* $tmp1594;
    panda$core$String* $tmp1599;
    panda$core$String* $tmp1604;
    panda$core$String* $tmp1605;
    panda$core$String* label1612 = NULL;
    org$pandalanguage$pandac$ASTNode* test1614 = NULL;
    panda$collections$ImmutableArray* statements1616 = NULL;
    panda$core$MutableString* result1621 = NULL;
    panda$core$MutableString* $tmp1622;
    panda$core$MutableString* $tmp1623;
    panda$core$String* $tmp1625;
    panda$core$String* $tmp1626;
    panda$core$String* $tmp1630;
    panda$core$String* $tmp1631;
    panda$collections$Iterator* Iter$439$171639 = NULL;
    panda$collections$Iterator* $tmp1640;
    panda$collections$Iterator* $tmp1641;
    org$pandalanguage$pandac$ASTNode* s1657 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1658;
    panda$core$Object* $tmp1659;
    panda$core$String* $tmp1664;
    panda$core$Char8 $tmp1669;
    panda$core$String* $tmp1670;
    panda$core$String* $tmp1671;
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
        panda$core$Bit $tmp1303 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 28 }));
        if ($tmp1303.value) {
        {
            $tmp1304 = &$s1305;
            $returnValue250 = $tmp1304;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1304));
            $tmp242 = 32;
            goto $l240;
            $l1306:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1308 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 29 }));
        if ($tmp1308.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1310 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 16));
            base1309 = *$tmp1310;
            panda$core$String* $tmp1314 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) base1309), &$s1313);
            $tmp1312 = $tmp1314;
            $tmp1311 = $tmp1312;
            $returnValue250 = $tmp1311;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1311));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1312));
            $tmp242 = 33;
            goto $l240;
            $l1315:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1317 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 30 }));
        if ($tmp1317.value) {
        {
            panda$core$String** $tmp1319 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            name1318 = *$tmp1319;
            $tmp1320 = name1318;
            $returnValue250 = $tmp1320;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1320));
            $tmp242 = 34;
            goto $l240;
            $l1321:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 31 }));
        if ($tmp1323.value) {
        {
            panda$core$String** $tmp1325 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            name1324 = *$tmp1325;
            org$pandalanguage$pandac$ASTNode** $tmp1327 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 24));
            type1326 = *$tmp1327;
            panda$core$String* $tmp1333 = panda$core$String$convert$R$panda$core$String(name1324);
            $tmp1332 = $tmp1333;
            panda$core$String* $tmp1335 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1332, &$s1334);
            $tmp1331 = $tmp1335;
            panda$core$String* $tmp1336 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1331, ((panda$core$Object*) type1326));
            $tmp1330 = $tmp1336;
            panda$core$String* $tmp1338 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1330, &$s1337);
            $tmp1329 = $tmp1338;
            $tmp1328 = $tmp1329;
            $returnValue250 = $tmp1328;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1328));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1329));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1330));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1331));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1332));
            $tmp242 = 35;
            goto $l240;
            $l1339:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 32 }));
        if ($tmp1341.value) {
        {
            org$pandalanguage$pandac$parser$Token$Kind* $tmp1343 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$180_9243->$data + 16));
            kind1342 = *$tmp1343;
            org$pandalanguage$pandac$ASTNode** $tmp1345 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 24));
            base1344 = *$tmp1345;
            org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp1352;
            $tmp1352 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
            $tmp1352->value = kind1342;
            $tmp1351 = ((panda$core$Object*) $tmp1352);
            panda$core$String* $tmp1354 = (($fn1353) $tmp1351->$class->vtable[0])($tmp1351);
            $tmp1350 = $tmp1354;
            panda$core$String* $tmp1356 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1350, &$s1355);
            $tmp1349 = $tmp1356;
            panda$core$String* $tmp1357 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1349, ((panda$core$Object*) base1344));
            $tmp1348 = $tmp1357;
            panda$core$String* $tmp1359 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1348, &$s1358);
            $tmp1347 = $tmp1359;
            $tmp1346 = $tmp1347;
            $returnValue250 = $tmp1346;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1346));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1347));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1348));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1349));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1350));
            panda$core$Panda$unref$panda$core$Object($tmp1351);
            $tmp242 = 36;
            goto $l240;
            $l1360:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1362 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 33 }));
        if ($tmp1362.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1364 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 16));
            start1363 = *$tmp1364;
            org$pandalanguage$pandac$ASTNode** $tmp1366 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 24));
            end1365 = *$tmp1366;
            panda$core$Bit* $tmp1368 = ((panda$core$Bit*) ((char*) $match$180_9243->$data + 32));
            inclusive1367 = *$tmp1368;
            org$pandalanguage$pandac$ASTNode** $tmp1370 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 33));
            step1369 = *$tmp1370;
            int $tmp1373;
            {
                panda$core$MutableString* $tmp1377 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1377);
                $tmp1376 = $tmp1377;
                $tmp1375 = $tmp1376;
                result1374 = $tmp1375;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1375));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1376));
                $tmp1378 = start1363;
                panda$core$Bit $tmp1382;
                if (((panda$core$Bit) { $tmp1378 != NULL }).value) goto $l1379; else goto $l1380;
                $l1379:;
                panda$core$Bit $tmp1383 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1378->$rawValue, ((panda$core$Int64) { 28 }));
                $tmp1382 = $tmp1383;
                goto $l1381;
                $l1380:;
                $tmp1382 = ((panda$core$Bit) { true });
                goto $l1381;
                $l1381:;
                if ($tmp1382.value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result1374, ((panda$core$Object*) start1363));
                }
                }
                if (inclusive1367.value) {
                {
                    panda$core$MutableString$append$panda$core$String(result1374, &$s1384);
                }
                }
                else {
                {
                    panda$core$MutableString$append$panda$core$String(result1374, &$s1385);
                }
                }
                $tmp1386 = end1365;
                panda$core$Bit $tmp1390;
                if (((panda$core$Bit) { $tmp1386 != NULL }).value) goto $l1387; else goto $l1388;
                $l1387:;
                panda$core$Bit $tmp1391 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1386->$rawValue, ((panda$core$Int64) { 28 }));
                $tmp1390 = $tmp1391;
                goto $l1389;
                $l1388:;
                $tmp1390 = ((panda$core$Bit) { true });
                goto $l1389;
                $l1389:;
                if ($tmp1390.value) {
                {
                    panda$core$MutableString$append$panda$core$Object(result1374, ((panda$core$Object*) end1365));
                }
                }
                $tmp1392 = step1369;
                panda$core$Bit $tmp1396;
                if (((panda$core$Bit) { $tmp1392 != NULL }).value) goto $l1393; else goto $l1394;
                $l1393:;
                panda$core$Bit $tmp1397 = panda$core$Int64$$NEQ$panda$core$Int64$R$panda$core$Bit($tmp1392->$rawValue, ((panda$core$Int64) { 28 }));
                $tmp1396 = $tmp1397;
                goto $l1395;
                $l1394:;
                $tmp1396 = ((panda$core$Bit) { true });
                goto $l1395;
                $l1395:;
                if ($tmp1396.value) {
                {
                    panda$core$String* $tmp1400 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1399, ((panda$core$Object*) step1369));
                    $tmp1398 = $tmp1400;
                    panda$core$MutableString$append$panda$core$String(result1374, $tmp1398);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1398));
                }
                }
                panda$core$String* $tmp1403 = panda$core$MutableString$finish$R$panda$core$String(result1374);
                $tmp1402 = $tmp1403;
                $tmp1401 = $tmp1402;
                $returnValue250 = $tmp1401;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1401));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1402));
                $tmp1373 = 0;
                goto $l1371;
                $l1404:;
                $tmp242 = 37;
                goto $l240;
                $l1405:;
                return $returnValue250;
            }
            $l1371:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1374));
            result1374 = NULL;
            switch ($tmp1373) {
                case 0: goto $l1404;
            }
            $l1407:;
        }
        }
        else {
        panda$core$Bit $tmp1408 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 34 }));
        if ($tmp1408.value) {
        {
            panda$core$Real64* $tmp1410 = ((panda$core$Real64*) ((char*) $match$180_9243->$data + 16));
            value1409 = *$tmp1410;
            panda$core$String* $tmp1413 = panda$core$Real64$convert$R$panda$core$String(value1409);
            $tmp1412 = $tmp1413;
            $tmp1411 = $tmp1412;
            $returnValue250 = $tmp1411;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1411));
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1412));
            $tmp242 = 38;
            goto $l240;
            $l1414:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1416 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 35 }));
        if ($tmp1416.value) {
        {
            org$pandalanguage$pandac$ASTNode** $tmp1418 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 16));
            value1417 = *$tmp1418;
            if (((panda$core$Bit) { value1417 != NULL }).value) {
            {
                panda$core$String* $tmp1423 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1422, ((panda$core$Object*) value1417));
                $tmp1421 = $tmp1423;
                panda$core$String* $tmp1425 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1421, &$s1424);
                $tmp1420 = $tmp1425;
                $tmp1419 = $tmp1420;
                $returnValue250 = $tmp1419;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1419));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1420));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1421));
                $tmp242 = 39;
                goto $l240;
                $l1426:;
                return $returnValue250;
            }
            }
            $tmp1428 = &$s1429;
            $returnValue250 = $tmp1428;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1428));
            $tmp242 = 40;
            goto $l240;
            $l1430:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1432 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 36 }));
        if ($tmp1432.value) {
        {
            $tmp1433 = &$s1434;
            $returnValue250 = $tmp1433;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1433));
            $tmp242 = 41;
            goto $l240;
            $l1435:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 37 }));
        if ($tmp1437.value) {
        {
            panda$core$String** $tmp1439 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            str1438 = *$tmp1439;
            $tmp1440 = str1438;
            $returnValue250 = $tmp1440;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1440));
            $tmp242 = 42;
            goto $l240;
            $l1441:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 38 }));
        if ($tmp1443.value) {
        {
            $tmp1444 = &$s1445;
            $returnValue250 = $tmp1444;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1444));
            $tmp242 = 43;
            goto $l240;
            $l1446:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1448 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 40 }));
        if ($tmp1448.value) {
        {
            panda$core$String** $tmp1450 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            name1449 = *$tmp1450;
            $tmp1451 = name1449;
            $returnValue250 = $tmp1451;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1451));
            $tmp242 = 44;
            goto $l240;
            $l1452:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 41 }));
        if ($tmp1454.value) {
        {
            panda$core$String** $tmp1456 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            name1455 = *$tmp1456;
            org$pandalanguage$pandac$ASTNode** $tmp1458 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 24));
            type1457 = *$tmp1458;
            if (((panda$core$Bit) { type1457 != NULL }).value) {
            {
                panda$core$String* $tmp1464 = panda$core$String$convert$R$panda$core$String(name1455);
                $tmp1463 = $tmp1464;
                panda$core$String* $tmp1466 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1463, &$s1465);
                $tmp1462 = $tmp1466;
                panda$core$String* $tmp1467 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1462, ((panda$core$Object*) type1457));
                $tmp1461 = $tmp1467;
                panda$core$String* $tmp1469 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1461, &$s1468);
                $tmp1460 = $tmp1469;
                $tmp1459 = $tmp1460;
                $returnValue250 = $tmp1459;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1459));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1460));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1461));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1462));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1463));
                $tmp242 = 45;
                goto $l240;
                $l1470:;
                return $returnValue250;
            }
            }
            $tmp1472 = name1455;
            $returnValue250 = $tmp1472;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1472));
            $tmp242 = 46;
            goto $l240;
            $l1473:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 42 }));
        if ($tmp1475.value) {
        {
            panda$core$String** $tmp1477 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            name1476 = *$tmp1477;
            $tmp1478 = name1476;
            $returnValue250 = $tmp1478;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1478));
            $tmp242 = 47;
            goto $l240;
            $l1479:;
            return $returnValue250;
        }
        }
        else {
        panda$core$Bit $tmp1481 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 43 }));
        if ($tmp1481.value) {
        {
            org$pandalanguage$pandac$Variable$Kind* $tmp1483 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$180_9243->$data + 16));
            kind1482 = *$tmp1483;
            panda$collections$ImmutableArray** $tmp1485 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 24));
            decls1484 = *$tmp1485;
            int $tmp1488;
            {
                panda$core$MutableString* $tmp1492 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1492);
                $tmp1491 = $tmp1492;
                $tmp1490 = $tmp1491;
                result1489 = $tmp1490;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1490));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1491));
                {
                    $match$414_171493 = kind1482;
                    panda$core$Bit $tmp1494 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$414_171493.$rawValue, ((panda$core$Int64) { 0 }));
                    if ($tmp1494.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1489, &$s1495);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1496 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$414_171493.$rawValue, ((panda$core$Int64) { 1 }));
                    if ($tmp1496.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1489, &$s1497);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$414_171493.$rawValue, ((panda$core$Int64) { 2 }));
                    if ($tmp1498.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1489, &$s1499);
                    }
                    }
                    else {
                    panda$core$Bit $tmp1500 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$414_171493.$rawValue, ((panda$core$Int64) { 3 }));
                    if ($tmp1500.value) {
                    {
                        panda$core$MutableString$append$panda$core$String(result1489, &$s1501);
                    }
                    }
                    }
                    }
                    }
                }
                ITable* $tmp1503 = ((panda$collections$ListView*) decls1484)->$class->itable;
                while ($tmp1503->$class != (panda$core$Class*) &panda$collections$ListView$class) {
                    $tmp1503 = $tmp1503->next;
                }
                $fn1505 $tmp1504 = $tmp1503->methods[1];
                panda$core$String* $tmp1506 = $tmp1504(((panda$collections$ListView*) decls1484));
                $tmp1502 = $tmp1506;
                panda$core$MutableString$append$panda$core$String(result1489, $tmp1502);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1502));
                panda$core$String* $tmp1509 = panda$core$MutableString$finish$R$panda$core$String(result1489);
                $tmp1508 = $tmp1509;
                $tmp1507 = $tmp1508;
                $returnValue250 = $tmp1507;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1507));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1508));
                $tmp1488 = 0;
                goto $l1486;
                $l1510:;
                $tmp242 = 48;
                goto $l240;
                $l1511:;
                return $returnValue250;
            }
            $l1486:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1489));
            result1489 = NULL;
            switch ($tmp1488) {
                case 0: goto $l1510;
            }
            $l1513:;
        }
        }
        else {
        panda$core$Bit $tmp1514 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 44 }));
        if ($tmp1514.value) {
        {
            panda$collections$ImmutableArray** $tmp1516 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 16));
            tests1515 = *$tmp1516;
            panda$collections$ImmutableArray** $tmp1518 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 24));
            statements1517 = *$tmp1518;
            int $tmp1521;
            {
                panda$core$MutableString* $tmp1525 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init$panda$core$String($tmp1525, &$s1526);
                $tmp1524 = $tmp1525;
                $tmp1523 = $tmp1524;
                result1522 = $tmp1523;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1523));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1524));
                $tmp1528 = &$s1529;
                separator1527 = $tmp1528;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1528));
                {
                    int $tmp1532;
                    {
                        ITable* $tmp1536 = ((panda$collections$Iterable*) tests1515)->$class->itable;
                        while ($tmp1536->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1536 = $tmp1536->next;
                        }
                        $fn1538 $tmp1537 = $tmp1536->methods[0];
                        panda$collections$Iterator* $tmp1539 = $tmp1537(((panda$collections$Iterable*) tests1515));
                        $tmp1535 = $tmp1539;
                        $tmp1534 = $tmp1535;
                        Iter$425$171533 = $tmp1534;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1534));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1535));
                        $l1540:;
                        ITable* $tmp1543 = Iter$425$171533->$class->itable;
                        while ($tmp1543->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1543 = $tmp1543->next;
                        }
                        $fn1545 $tmp1544 = $tmp1543->methods[0];
                        panda$core$Bit $tmp1546 = $tmp1544(Iter$425$171533);
                        panda$core$Bit $tmp1547 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1546);
                        bool $tmp1542 = $tmp1547.value;
                        if (!$tmp1542) goto $l1541;
                        {
                            int $tmp1550;
                            {
                                ITable* $tmp1554 = Iter$425$171533->$class->itable;
                                while ($tmp1554->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1554 = $tmp1554->next;
                                }
                                $fn1556 $tmp1555 = $tmp1554->methods[1];
                                panda$core$Object* $tmp1557 = $tmp1555(Iter$425$171533);
                                $tmp1553 = $tmp1557;
                                $tmp1552 = ((org$pandalanguage$pandac$ASTNode*) $tmp1553);
                                t1551 = $tmp1552;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1552));
                                panda$core$Panda$unref$panda$core$Object($tmp1553);
                                panda$core$String* $tmp1562 = panda$core$String$convert$R$panda$core$String(separator1527);
                                $tmp1561 = $tmp1562;
                                panda$core$String* $tmp1564 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1561, &$s1563);
                                $tmp1560 = $tmp1564;
                                panda$core$String* $tmp1565 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1560, ((panda$core$Object*) t1551));
                                $tmp1559 = $tmp1565;
                                panda$core$String* $tmp1567 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1559, &$s1566);
                                $tmp1558 = $tmp1567;
                                panda$core$MutableString$append$panda$core$String(result1522, $tmp1558);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1558));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1559));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1560));
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1561));
                            }
                            $tmp1550 = -1;
                            goto $l1548;
                            $l1548:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) t1551));
                            t1551 = NULL;
                            switch ($tmp1550) {
                                case -1: goto $l1568;
                            }
                            $l1568:;
                        }
                        goto $l1540;
                        $l1541:;
                    }
                    $tmp1532 = -1;
                    goto $l1530;
                    $l1530:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$425$171533));
                    Iter$425$171533 = NULL;
                    switch ($tmp1532) {
                        case -1: goto $l1569;
                    }
                    $l1569:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1570, ((panda$core$UInt8) { 58 }));
                panda$core$MutableString$append$panda$core$Char8(result1522, $tmp1570);
                {
                    int $tmp1573;
                    {
                        ITable* $tmp1577 = ((panda$collections$Iterable*) statements1517)->$class->itable;
                        while ($tmp1577->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1577 = $tmp1577->next;
                        }
                        $fn1579 $tmp1578 = $tmp1577->methods[0];
                        panda$collections$Iterator* $tmp1580 = $tmp1578(((panda$collections$Iterable*) statements1517));
                        $tmp1576 = $tmp1580;
                        $tmp1575 = $tmp1576;
                        Iter$429$171574 = $tmp1575;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1575));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1576));
                        $l1581:;
                        ITable* $tmp1584 = Iter$429$171574->$class->itable;
                        while ($tmp1584->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1584 = $tmp1584->next;
                        }
                        $fn1586 $tmp1585 = $tmp1584->methods[0];
                        panda$core$Bit $tmp1587 = $tmp1585(Iter$429$171574);
                        panda$core$Bit $tmp1588 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1587);
                        bool $tmp1583 = $tmp1588.value;
                        if (!$tmp1583) goto $l1582;
                        {
                            int $tmp1591;
                            {
                                ITable* $tmp1595 = Iter$429$171574->$class->itable;
                                while ($tmp1595->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1595 = $tmp1595->next;
                                }
                                $fn1597 $tmp1596 = $tmp1595->methods[1];
                                panda$core$Object* $tmp1598 = $tmp1596(Iter$429$171574);
                                $tmp1594 = $tmp1598;
                                $tmp1593 = ((org$pandalanguage$pandac$ASTNode*) $tmp1594);
                                s1592 = $tmp1593;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1593));
                                panda$core$Panda$unref$panda$core$Object($tmp1594);
                                panda$core$String* $tmp1601 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1600, ((panda$core$Object*) s1592));
                                $tmp1599 = $tmp1601;
                                panda$core$MutableString$append$panda$core$String(result1522, $tmp1599);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1599));
                            }
                            $tmp1591 = -1;
                            goto $l1589;
                            $l1589:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1592));
                            s1592 = NULL;
                            switch ($tmp1591) {
                                case -1: goto $l1602;
                            }
                            $l1602:;
                        }
                        goto $l1581;
                        $l1582:;
                    }
                    $tmp1573 = -1;
                    goto $l1571;
                    $l1571:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$429$171574));
                    Iter$429$171574 = NULL;
                    switch ($tmp1573) {
                        case -1: goto $l1603;
                    }
                    $l1603:;
                }
                panda$core$String* $tmp1606 = panda$core$MutableString$finish$R$panda$core$String(result1522);
                $tmp1605 = $tmp1606;
                $tmp1604 = $tmp1605;
                $returnValue250 = $tmp1604;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1604));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1605));
                $tmp1521 = 0;
                goto $l1519;
                $l1607:;
                $tmp242 = 49;
                goto $l240;
                $l1608:;
                return $returnValue250;
            }
            $l1519:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1522));
            result1522 = NULL;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) separator1527));
            separator1527 = NULL;
            switch ($tmp1521) {
                case 0: goto $l1607;
            }
            $l1610:;
        }
        }
        else {
        panda$core$Bit $tmp1611 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$180_9243->$rawValue, ((panda$core$Int64) { 45 }));
        if ($tmp1611.value) {
        {
            panda$core$String** $tmp1613 = ((panda$core$String**) ((char*) $match$180_9243->$data + 16));
            label1612 = *$tmp1613;
            org$pandalanguage$pandac$ASTNode** $tmp1615 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$180_9243->$data + 24));
            test1614 = *$tmp1615;
            panda$collections$ImmutableArray** $tmp1617 = ((panda$collections$ImmutableArray**) ((char*) $match$180_9243->$data + 32));
            statements1616 = *$tmp1617;
            int $tmp1620;
            {
                panda$core$MutableString* $tmp1624 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
                panda$core$MutableString$init($tmp1624);
                $tmp1623 = $tmp1624;
                $tmp1622 = $tmp1623;
                result1621 = $tmp1622;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1622));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1623));
                if (((panda$core$Bit) { label1612 != NULL }).value) {
                {
                    panda$core$String* $tmp1627 = panda$core$String$convert$R$panda$core$String(label1612);
                    $tmp1626 = $tmp1627;
                    panda$core$String* $tmp1629 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1626, &$s1628);
                    $tmp1625 = $tmp1629;
                    panda$core$MutableString$append$panda$core$String(result1621, $tmp1625);
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1625));
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1626));
                }
                }
                panda$core$String* $tmp1633 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1632, ((panda$core$Object*) test1614));
                $tmp1631 = $tmp1633;
                panda$core$String* $tmp1635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1631, &$s1634);
                $tmp1630 = $tmp1635;
                panda$core$MutableString$append$panda$core$String(result1621, $tmp1630);
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1630));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1631));
                {
                    int $tmp1638;
                    {
                        ITable* $tmp1642 = ((panda$collections$Iterable*) statements1616)->$class->itable;
                        while ($tmp1642->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
                            $tmp1642 = $tmp1642->next;
                        }
                        $fn1644 $tmp1643 = $tmp1642->methods[0];
                        panda$collections$Iterator* $tmp1645 = $tmp1643(((panda$collections$Iterable*) statements1616));
                        $tmp1641 = $tmp1645;
                        $tmp1640 = $tmp1641;
                        Iter$439$171639 = $tmp1640;
                        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1640));
                        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1641));
                        $l1646:;
                        ITable* $tmp1649 = Iter$439$171639->$class->itable;
                        while ($tmp1649->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                            $tmp1649 = $tmp1649->next;
                        }
                        $fn1651 $tmp1650 = $tmp1649->methods[0];
                        panda$core$Bit $tmp1652 = $tmp1650(Iter$439$171639);
                        panda$core$Bit $tmp1653 = panda$core$Bit$$NOT$R$panda$core$Bit($tmp1652);
                        bool $tmp1648 = $tmp1653.value;
                        if (!$tmp1648) goto $l1647;
                        {
                            int $tmp1656;
                            {
                                ITable* $tmp1660 = Iter$439$171639->$class->itable;
                                while ($tmp1660->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
                                    $tmp1660 = $tmp1660->next;
                                }
                                $fn1662 $tmp1661 = $tmp1660->methods[1];
                                panda$core$Object* $tmp1663 = $tmp1661(Iter$439$171639);
                                $tmp1659 = $tmp1663;
                                $tmp1658 = ((org$pandalanguage$pandac$ASTNode*) $tmp1659);
                                s1657 = $tmp1658;
                                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1658));
                                panda$core$Panda$unref$panda$core$Object($tmp1659);
                                panda$core$String* $tmp1666 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) s1657), &$s1665);
                                $tmp1664 = $tmp1666;
                                panda$core$MutableString$append$panda$core$String(result1621, $tmp1664);
                                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1664));
                            }
                            $tmp1656 = -1;
                            goto $l1654;
                            $l1654:;
                            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) s1657));
                            s1657 = NULL;
                            switch ($tmp1656) {
                                case -1: goto $l1667;
                            }
                            $l1667:;
                        }
                        goto $l1646;
                        $l1647:;
                    }
                    $tmp1638 = -1;
                    goto $l1636;
                    $l1636:;
                    panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) Iter$439$171639));
                    Iter$439$171639 = NULL;
                    switch ($tmp1638) {
                        case -1: goto $l1668;
                    }
                    $l1668:;
                }
                panda$core$Char8$init$panda$core$UInt8(&$tmp1669, ((panda$core$UInt8) { 125 }));
                panda$core$MutableString$append$panda$core$Char8(result1621, $tmp1669);
                panda$core$String* $tmp1672 = panda$core$MutableString$finish$R$panda$core$String(result1621);
                $tmp1671 = $tmp1672;
                $tmp1670 = $tmp1671;
                $returnValue250 = $tmp1670;
                panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1670));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1671));
                $tmp1620 = 0;
                goto $l1618;
                $l1673:;
                $tmp242 = 50;
                goto $l240;
                $l1674:;
                return $returnValue250;
            }
            $l1618:;
            panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) result1621));
            result1621 = NULL;
            switch ($tmp1620) {
                case 0: goto $l1673;
            }
            $l1676:;
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
        case 49: goto $l1608;
        case 26: goto $l1033;
        case 48: goto $l1511;
        case 38: goto $l1414;
        case 17: goto $l669;
        case 11: goto $l438;
        case -1: goto $l1677;
        case 27: goto $l1042;
        case 50: goto $l1674;
        case 33: goto $l1315;
        case 32: goto $l1306;
        case 29: goto $l1109;
        case 43: goto $l1446;
        case 18: goto $l675;
        case 5: goto $l310;
        case 10: goto $l414;
        case 0: goto $l262;
        case 37: goto $l1405;
        case 39: goto $l1426;
        case 46: goto $l1473;
        case 12: goto $l476;
        case 7: goto $l346;
        case 47: goto $l1479;
        case 13: goto $l505;
        case 4: goto $l305;
        case 16: goto $l650;
        case 22: goto $l866;
        case 23: goto $l937;
        case 31: goto $l1300;
        case 40: goto $l1430;
        case 24: goto $l961;
        case 15: goto $l646;
        case 30: goto $l1173;
        case 14: goto $l633;
        case 20: goto $l760;
        case 35: goto $l1339;
        case 28: goto $l1051;
        case 36: goto $l1360;
        case 21: goto $l816;
        case 19: goto $l740;
        case 3: goto $l293;
        case 9: goto $l410;
        case 44: goto $l1452;
        case 45: goto $l1470;
        case 8: goto $l397;
        case 2: goto $l279;
        case 34: goto $l1321;
        case 42: goto $l1441;
        case 25: goto $l967;
        case 6: goto $l338;
        case 1: goto $l265;
        case 41: goto $l1435;
    }
    $l1677:;
}
void org$pandalanguage$pandac$ASTNode$cleanup(org$pandalanguage$pandac$ASTNode* self) {
    org$pandalanguage$pandac$ASTNode* $match$5_11684 = NULL;
    org$pandalanguage$pandac$ASTNode* $tmp1685;
    org$pandalanguage$pandac$Position _f01687;
    panda$core$String* _f11689 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21691 = NULL;
    org$pandalanguage$pandac$Position _f01694;
    org$pandalanguage$pandac$ASTNode* _f11696 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21698 = NULL;
    org$pandalanguage$pandac$Position _f01701;
    org$pandalanguage$pandac$ASTNode* _f11703 = NULL;
    org$pandalanguage$pandac$Position _f01706;
    org$pandalanguage$pandac$Position _f01709;
    org$pandalanguage$pandac$ASTNode* _f11711 = NULL;
    org$pandalanguage$pandac$parser$Token$Kind _f21713;
    org$pandalanguage$pandac$ASTNode* _f31715 = NULL;
    org$pandalanguage$pandac$Position _f01718;
    panda$core$Bit _f11720;
    org$pandalanguage$pandac$Position _f01723;
    panda$collections$ImmutableArray* _f11725 = NULL;
    org$pandalanguage$pandac$Position _f01728;
    panda$core$String* _f11730 = NULL;
    org$pandalanguage$pandac$Position _f01733;
    org$pandalanguage$pandac$ASTNode* _f11735 = NULL;
    panda$collections$ImmutableArray* _f21737 = NULL;
    org$pandalanguage$pandac$Position _f01740;
    org$pandalanguage$pandac$ASTNode* _f11742 = NULL;
    panda$core$String* _f21744 = NULL;
    panda$collections$ImmutableArray* _f31746 = NULL;
    org$pandalanguage$pandac$Position _f01749;
    org$pandalanguage$pandac$ASTNode* _f11751 = NULL;
    org$pandalanguage$pandac$ChoiceEntry* _f21753 = NULL;
    panda$core$Int64 _f31755;
    org$pandalanguage$pandac$Position _f01758;
    org$pandalanguage$pandac$ASTNode* _f11760 = NULL;
    panda$collections$ImmutableArray* _f21762 = NULL;
    org$pandalanguage$pandac$ClassDecl$Kind _f31764;
    panda$core$String* _f41766 = NULL;
    panda$collections$ImmutableArray* _f51768 = NULL;
    panda$collections$ImmutableArray* _f61770 = NULL;
    panda$collections$ImmutableArray* _f71772 = NULL;
    org$pandalanguage$pandac$Position _f01775;
    panda$core$String* _f11777 = NULL;
    org$pandalanguage$pandac$Position _f01780;
    org$pandalanguage$pandac$ASTNode* _f11782 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21784 = NULL;
    org$pandalanguage$pandac$Position _f01787;
    panda$core$String* _f11789 = NULL;
    panda$collections$ImmutableArray* _f21791 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31793 = NULL;
    org$pandalanguage$pandac$Position _f01796;
    org$pandalanguage$pandac$ASTNode* _f11798 = NULL;
    panda$core$String* _f21800 = NULL;
    org$pandalanguage$pandac$Position _f01803;
    org$pandalanguage$pandac$ASTNode* _f11805 = NULL;
    panda$collections$ImmutableArray* _f21807 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31809 = NULL;
    panda$collections$ImmutableArray* _f01812 = NULL;
    org$pandalanguage$pandac$Position _f01815;
    panda$core$String* _f11817 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21819 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31821 = NULL;
    panda$collections$ImmutableArray* _f41823 = NULL;
    org$pandalanguage$pandac$Position _f01826;
    panda$core$String* _f11828 = NULL;
    panda$collections$ImmutableArray* _f21830 = NULL;
    org$pandalanguage$pandac$Position _f01833;
    panda$core$String* _f11835 = NULL;
    org$pandalanguage$pandac$Position _f01838;
    org$pandalanguage$pandac$ASTNode* _f11840 = NULL;
    panda$collections$ImmutableArray* _f21842 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31844 = NULL;
    org$pandalanguage$pandac$Position _f01847;
    panda$core$UInt64 _f11849;
    org$pandalanguage$pandac$IRNode* _f01852 = NULL;
    org$pandalanguage$pandac$Position _f01855;
    panda$core$String* _f11857 = NULL;
    panda$collections$ImmutableArray* _f21859 = NULL;
    org$pandalanguage$pandac$Position _f01862;
    org$pandalanguage$pandac$ASTNode* _f11864 = NULL;
    panda$collections$ImmutableArray* _f21866 = NULL;
    panda$collections$ImmutableArray* _f31868 = NULL;
    org$pandalanguage$pandac$Position _f01871;
    org$pandalanguage$pandac$ASTNode* _f11873 = NULL;
    panda$collections$ImmutableArray* _f21875 = NULL;
    org$pandalanguage$pandac$MethodDecl$Kind _f31877;
    panda$core$String* _f41879 = NULL;
    panda$collections$ImmutableArray* _f51881 = NULL;
    org$pandalanguage$pandac$ASTNode* _f61883 = NULL;
    panda$collections$ImmutableArray* _f71885 = NULL;
    org$pandalanguage$pandac$Position _f01888;
    org$pandalanguage$pandac$parser$Token$Kind _f11890;
    panda$collections$ImmutableArray* _f21892 = NULL;
    org$pandalanguage$pandac$ASTNode* _f31894 = NULL;
    org$pandalanguage$pandac$Position _f01897;
    org$pandalanguage$pandac$Position _f01900;
    org$pandalanguage$pandac$ASTNode* _f11902 = NULL;
    org$pandalanguage$pandac$Position _f01905;
    panda$core$String* _f11907 = NULL;
    org$pandalanguage$pandac$Position _f01910;
    panda$core$String* _f11912 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21914 = NULL;
    org$pandalanguage$pandac$Position _f01917;
    org$pandalanguage$pandac$parser$Token$Kind _f11919;
    org$pandalanguage$pandac$ASTNode* _f21921 = NULL;
    org$pandalanguage$pandac$Position _f01924;
    org$pandalanguage$pandac$ASTNode* _f11926 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21928 = NULL;
    panda$core$Bit _f31930;
    org$pandalanguage$pandac$ASTNode* _f41932 = NULL;
    org$pandalanguage$pandac$Position _f01935;
    panda$core$Real64 _f11937;
    org$pandalanguage$pandac$Position _f01940;
    org$pandalanguage$pandac$ASTNode* _f11942 = NULL;
    org$pandalanguage$pandac$Position _f01945;
    org$pandalanguage$pandac$Position _f01948;
    panda$core$String* _f11950 = NULL;
    org$pandalanguage$pandac$Position _f01953;
    org$pandalanguage$pandac$Position _f01956;
    panda$collections$ImmutableArray* _f11958 = NULL;
    org$pandalanguage$pandac$Position _f01961;
    panda$core$String* _f11963 = NULL;
    org$pandalanguage$pandac$Position _f01966;
    panda$core$String* _f11968 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21970 = NULL;
    org$pandalanguage$pandac$Position _f01973;
    panda$core$String* _f11975 = NULL;
    org$pandalanguage$pandac$Position _f01978;
    org$pandalanguage$pandac$Variable$Kind _f11980;
    panda$collections$ImmutableArray* _f21982 = NULL;
    org$pandalanguage$pandac$Position _f01985;
    panda$collections$ImmutableArray* _f11987 = NULL;
    panda$collections$ImmutableArray* _f21989 = NULL;
    org$pandalanguage$pandac$Position _f01992;
    panda$core$String* _f11994 = NULL;
    org$pandalanguage$pandac$ASTNode* _f21996 = NULL;
    panda$collections$ImmutableArray* _f31998 = NULL;
    int $tmp1680;
    {
        int $tmp1683;
        {
            $tmp1685 = self;
            $match$5_11684 = $tmp1685;
            panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp1685));
            panda$core$Bit $tmp1686 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 0 }));
            if ($tmp1686.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1688 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01687 = *$tmp1688;
                panda$core$String** $tmp1690 = ((panda$core$String**) ((char*) $match$5_11684->$data + 16));
                _f11689 = *$tmp1690;
                org$pandalanguage$pandac$ASTNode** $tmp1692 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11684->$data + 24));
                _f21691 = *$tmp1692;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11689));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21691));
            }
            }
            else {
            panda$core$Bit $tmp1693 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 1 }));
            if ($tmp1693.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1695 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01694 = *$tmp1695;
                org$pandalanguage$pandac$ASTNode** $tmp1697 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11684->$data + 16));
                _f11696 = *$tmp1697;
                org$pandalanguage$pandac$ASTNode** $tmp1699 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11684->$data + 24));
                _f21698 = *$tmp1699;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11696));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21698));
            }
            }
            else {
            panda$core$Bit $tmp1700 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 2 }));
            if ($tmp1700.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1702 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01701 = *$tmp1702;
                org$pandalanguage$pandac$ASTNode** $tmp1704 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11684->$data + 16));
                _f11703 = *$tmp1704;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11703));
            }
            }
            else {
            panda$core$Bit $tmp1705 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 3 }));
            if ($tmp1705.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1707 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01706 = *$tmp1707;
            }
            }
            else {
            panda$core$Bit $tmp1708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 4 }));
            if ($tmp1708.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1710 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01709 = *$tmp1710;
                org$pandalanguage$pandac$ASTNode** $tmp1712 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11684->$data + 16));
                _f11711 = *$tmp1712;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp1714 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11684->$data + 24));
                _f21713 = *$tmp1714;
                org$pandalanguage$pandac$ASTNode** $tmp1716 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11684->$data + 32));
                _f31715 = *$tmp1716;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11711));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31715));
            }
            }
            else {
            panda$core$Bit $tmp1717 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 5 }));
            if ($tmp1717.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1719 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01718 = *$tmp1719;
                panda$core$Bit* $tmp1721 = ((panda$core$Bit*) ((char*) $match$5_11684->$data + 16));
                _f11720 = *$tmp1721;
            }
            }
            else {
            panda$core$Bit $tmp1722 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 6 }));
            if ($tmp1722.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1724 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01723 = *$tmp1724;
                panda$collections$ImmutableArray** $tmp1726 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11684->$data + 16));
                _f11725 = *$tmp1726;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11725));
            }
            }
            else {
            panda$core$Bit $tmp1727 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 7 }));
            if ($tmp1727.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1729 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01728 = *$tmp1729;
                panda$core$String** $tmp1731 = ((panda$core$String**) ((char*) $match$5_11684->$data + 16));
                _f11730 = *$tmp1731;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11730));
            }
            }
            else {
            panda$core$Bit $tmp1732 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 8 }));
            if ($tmp1732.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1734 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01733 = *$tmp1734;
                org$pandalanguage$pandac$ASTNode** $tmp1736 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11684->$data + 16));
                _f11735 = *$tmp1736;
                panda$collections$ImmutableArray** $tmp1738 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11684->$data + 24));
                _f21737 = *$tmp1738;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11735));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21737));
            }
            }
            else {
            panda$core$Bit $tmp1739 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 9 }));
            if ($tmp1739.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1741 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01740 = *$tmp1741;
                org$pandalanguage$pandac$ASTNode** $tmp1743 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11684->$data + 16));
                _f11742 = *$tmp1743;
                panda$core$String** $tmp1745 = ((panda$core$String**) ((char*) $match$5_11684->$data + 24));
                _f21744 = *$tmp1745;
                panda$collections$ImmutableArray** $tmp1747 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11684->$data + 32));
                _f31746 = *$tmp1747;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11742));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21744));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31746));
            }
            }
            else {
            panda$core$Bit $tmp1748 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 10 }));
            if ($tmp1748.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1750 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01749 = *$tmp1750;
                org$pandalanguage$pandac$ASTNode** $tmp1752 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11684->$data + 16));
                _f11751 = *$tmp1752;
                org$pandalanguage$pandac$ChoiceEntry** $tmp1754 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) $match$5_11684->$data + 24));
                _f21753 = *$tmp1754;
                panda$core$Int64* $tmp1756 = ((panda$core$Int64*) ((char*) $match$5_11684->$data + 32));
                _f31755 = *$tmp1756;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11751));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21753));
            }
            }
            else {
            panda$core$Bit $tmp1757 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 11 }));
            if ($tmp1757.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1759 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01758 = *$tmp1759;
                org$pandalanguage$pandac$ASTNode** $tmp1761 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11684->$data + 16));
                _f11760 = *$tmp1761;
                panda$collections$ImmutableArray** $tmp1763 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11684->$data + 24));
                _f21762 = *$tmp1763;
                org$pandalanguage$pandac$ClassDecl$Kind* $tmp1765 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) $match$5_11684->$data + 32));
                _f31764 = *$tmp1765;
                panda$core$String** $tmp1767 = ((panda$core$String**) ((char*) $match$5_11684->$data + 40));
                _f41766 = *$tmp1767;
                panda$collections$ImmutableArray** $tmp1769 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11684->$data + 48));
                _f51768 = *$tmp1769;
                panda$collections$ImmutableArray** $tmp1771 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11684->$data + 56));
                _f61770 = *$tmp1771;
                panda$collections$ImmutableArray** $tmp1773 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11684->$data + 64));
                _f71772 = *$tmp1773;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11760));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21762));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41766));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f51768));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f61770));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f71772));
            }
            }
            else {
            panda$core$Bit $tmp1774 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 12 }));
            if ($tmp1774.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1776 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01775 = *$tmp1776;
                panda$core$String** $tmp1778 = ((panda$core$String**) ((char*) $match$5_11684->$data + 16));
                _f11777 = *$tmp1778;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11777));
            }
            }
            else {
            panda$core$Bit $tmp1779 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 13 }));
            if ($tmp1779.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1781 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01780 = *$tmp1781;
                org$pandalanguage$pandac$ASTNode** $tmp1783 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11684->$data + 16));
                _f11782 = *$tmp1783;
                org$pandalanguage$pandac$ASTNode** $tmp1785 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11684->$data + 24));
                _f21784 = *$tmp1785;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11782));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21784));
            }
            }
            else {
            panda$core$Bit $tmp1786 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 14 }));
            if ($tmp1786.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1788 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01787 = *$tmp1788;
                panda$core$String** $tmp1790 = ((panda$core$String**) ((char*) $match$5_11684->$data + 16));
                _f11789 = *$tmp1790;
                panda$collections$ImmutableArray** $tmp1792 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11684->$data + 24));
                _f21791 = *$tmp1792;
                org$pandalanguage$pandac$ASTNode** $tmp1794 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11684->$data + 32));
                _f31793 = *$tmp1794;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11789));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21791));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31793));
            }
            }
            else {
            panda$core$Bit $tmp1795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 15 }));
            if ($tmp1795.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1797 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01796 = *$tmp1797;
                org$pandalanguage$pandac$ASTNode** $tmp1799 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11684->$data + 16));
                _f11798 = *$tmp1799;
                panda$core$String** $tmp1801 = ((panda$core$String**) ((char*) $match$5_11684->$data + 24));
                _f21800 = *$tmp1801;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11798));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21800));
            }
            }
            else {
            panda$core$Bit $tmp1802 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 16 }));
            if ($tmp1802.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1804 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01803 = *$tmp1804;
                org$pandalanguage$pandac$ASTNode** $tmp1806 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11684->$data + 16));
                _f11805 = *$tmp1806;
                panda$collections$ImmutableArray** $tmp1808 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11684->$data + 24));
                _f21807 = *$tmp1808;
                org$pandalanguage$pandac$ASTNode** $tmp1810 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11684->$data + 32));
                _f31809 = *$tmp1810;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11805));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21807));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31809));
            }
            }
            else {
            panda$core$Bit $tmp1811 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 17 }));
            if ($tmp1811.value) {
            {
                panda$collections$ImmutableArray** $tmp1813 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11684->$data + 0));
                _f01812 = *$tmp1813;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f01812));
            }
            }
            else {
            panda$core$Bit $tmp1814 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 18 }));
            if ($tmp1814.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1816 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01815 = *$tmp1816;
                panda$core$String** $tmp1818 = ((panda$core$String**) ((char*) $match$5_11684->$data + 16));
                _f11817 = *$tmp1818;
                org$pandalanguage$pandac$ASTNode** $tmp1820 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11684->$data + 24));
                _f21819 = *$tmp1820;
                org$pandalanguage$pandac$ASTNode** $tmp1822 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11684->$data + 32));
                _f31821 = *$tmp1822;
                panda$collections$ImmutableArray** $tmp1824 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11684->$data + 40));
                _f41823 = *$tmp1824;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11817));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21819));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31821));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41823));
            }
            }
            else {
            panda$core$Bit $tmp1825 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 19 }));
            if ($tmp1825.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1827 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01826 = *$tmp1827;
                panda$core$String** $tmp1829 = ((panda$core$String**) ((char*) $match$5_11684->$data + 16));
                _f11828 = *$tmp1829;
                panda$collections$ImmutableArray** $tmp1831 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11684->$data + 24));
                _f21830 = *$tmp1831;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11828));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21830));
            }
            }
            else {
            panda$core$Bit $tmp1832 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 20 }));
            if ($tmp1832.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1834 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01833 = *$tmp1834;
                panda$core$String** $tmp1836 = ((panda$core$String**) ((char*) $match$5_11684->$data + 16));
                _f11835 = *$tmp1836;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11835));
            }
            }
            else {
            panda$core$Bit $tmp1837 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 21 }));
            if ($tmp1837.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1839 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01838 = *$tmp1839;
                org$pandalanguage$pandac$ASTNode** $tmp1841 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11684->$data + 16));
                _f11840 = *$tmp1841;
                panda$collections$ImmutableArray** $tmp1843 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11684->$data + 24));
                _f21842 = *$tmp1843;
                org$pandalanguage$pandac$ASTNode** $tmp1845 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11684->$data + 32));
                _f31844 = *$tmp1845;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11840));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21842));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31844));
            }
            }
            else {
            panda$core$Bit $tmp1846 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 22 }));
            if ($tmp1846.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1848 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01847 = *$tmp1848;
                panda$core$UInt64* $tmp1850 = ((panda$core$UInt64*) ((char*) $match$5_11684->$data + 16));
                _f11849 = *$tmp1850;
            }
            }
            else {
            panda$core$Bit $tmp1851 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 23 }));
            if ($tmp1851.value) {
            {
                org$pandalanguage$pandac$IRNode** $tmp1853 = ((org$pandalanguage$pandac$IRNode**) ((char*) $match$5_11684->$data + 0));
                _f01852 = *$tmp1853;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f01852));
            }
            }
            else {
            panda$core$Bit $tmp1854 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 24 }));
            if ($tmp1854.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1856 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01855 = *$tmp1856;
                panda$core$String** $tmp1858 = ((panda$core$String**) ((char*) $match$5_11684->$data + 16));
                _f11857 = *$tmp1858;
                panda$collections$ImmutableArray** $tmp1860 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11684->$data + 24));
                _f21859 = *$tmp1860;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11857));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21859));
            }
            }
            else {
            panda$core$Bit $tmp1861 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 25 }));
            if ($tmp1861.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1863 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01862 = *$tmp1863;
                org$pandalanguage$pandac$ASTNode** $tmp1865 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11684->$data + 16));
                _f11864 = *$tmp1865;
                panda$collections$ImmutableArray** $tmp1867 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11684->$data + 24));
                _f21866 = *$tmp1867;
                panda$collections$ImmutableArray** $tmp1869 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11684->$data + 32));
                _f31868 = *$tmp1869;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11864));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21866));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31868));
            }
            }
            else {
            panda$core$Bit $tmp1870 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 26 }));
            if ($tmp1870.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1872 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01871 = *$tmp1872;
                org$pandalanguage$pandac$ASTNode** $tmp1874 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11684->$data + 16));
                _f11873 = *$tmp1874;
                panda$collections$ImmutableArray** $tmp1876 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11684->$data + 24));
                _f21875 = *$tmp1876;
                org$pandalanguage$pandac$MethodDecl$Kind* $tmp1878 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) $match$5_11684->$data + 32));
                _f31877 = *$tmp1878;
                panda$core$String** $tmp1880 = ((panda$core$String**) ((char*) $match$5_11684->$data + 40));
                _f41879 = *$tmp1880;
                panda$collections$ImmutableArray** $tmp1882 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11684->$data + 48));
                _f51881 = *$tmp1882;
                org$pandalanguage$pandac$ASTNode** $tmp1884 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11684->$data + 56));
                _f61883 = *$tmp1884;
                panda$collections$ImmutableArray** $tmp1886 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11684->$data + 64));
                _f71885 = *$tmp1886;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11873));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21875));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41879));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f51881));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f61883));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f71885));
            }
            }
            else {
            panda$core$Bit $tmp1887 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 27 }));
            if ($tmp1887.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1889 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01888 = *$tmp1889;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp1891 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11684->$data + 16));
                _f11890 = *$tmp1891;
                panda$collections$ImmutableArray** $tmp1893 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11684->$data + 24));
                _f21892 = *$tmp1893;
                org$pandalanguage$pandac$ASTNode** $tmp1895 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11684->$data + 32));
                _f31894 = *$tmp1895;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21892));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31894));
            }
            }
            else {
            panda$core$Bit $tmp1896 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 28 }));
            if ($tmp1896.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1898 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01897 = *$tmp1898;
            }
            }
            else {
            panda$core$Bit $tmp1899 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 29 }));
            if ($tmp1899.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1901 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01900 = *$tmp1901;
                org$pandalanguage$pandac$ASTNode** $tmp1903 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11684->$data + 16));
                _f11902 = *$tmp1903;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11902));
            }
            }
            else {
            panda$core$Bit $tmp1904 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 30 }));
            if ($tmp1904.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1906 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01905 = *$tmp1906;
                panda$core$String** $tmp1908 = ((panda$core$String**) ((char*) $match$5_11684->$data + 16));
                _f11907 = *$tmp1908;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11907));
            }
            }
            else {
            panda$core$Bit $tmp1909 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 31 }));
            if ($tmp1909.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1911 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01910 = *$tmp1911;
                panda$core$String** $tmp1913 = ((panda$core$String**) ((char*) $match$5_11684->$data + 16));
                _f11912 = *$tmp1913;
                org$pandalanguage$pandac$ASTNode** $tmp1915 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11684->$data + 24));
                _f21914 = *$tmp1915;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11912));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21914));
            }
            }
            else {
            panda$core$Bit $tmp1916 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 32 }));
            if ($tmp1916.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1918 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01917 = *$tmp1918;
                org$pandalanguage$pandac$parser$Token$Kind* $tmp1920 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) $match$5_11684->$data + 16));
                _f11919 = *$tmp1920;
                org$pandalanguage$pandac$ASTNode** $tmp1922 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11684->$data + 24));
                _f21921 = *$tmp1922;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21921));
            }
            }
            else {
            panda$core$Bit $tmp1923 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 33 }));
            if ($tmp1923.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1925 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01924 = *$tmp1925;
                org$pandalanguage$pandac$ASTNode** $tmp1927 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11684->$data + 16));
                _f11926 = *$tmp1927;
                org$pandalanguage$pandac$ASTNode** $tmp1929 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11684->$data + 24));
                _f21928 = *$tmp1929;
                panda$core$Bit* $tmp1931 = ((panda$core$Bit*) ((char*) $match$5_11684->$data + 32));
                _f31930 = *$tmp1931;
                org$pandalanguage$pandac$ASTNode** $tmp1933 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11684->$data + 33));
                _f41932 = *$tmp1933;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11926));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21928));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f41932));
            }
            }
            else {
            panda$core$Bit $tmp1934 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 34 }));
            if ($tmp1934.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1936 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01935 = *$tmp1936;
                panda$core$Real64* $tmp1938 = ((panda$core$Real64*) ((char*) $match$5_11684->$data + 16));
                _f11937 = *$tmp1938;
            }
            }
            else {
            panda$core$Bit $tmp1939 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 35 }));
            if ($tmp1939.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1941 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01940 = *$tmp1941;
                org$pandalanguage$pandac$ASTNode** $tmp1943 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11684->$data + 16));
                _f11942 = *$tmp1943;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11942));
            }
            }
            else {
            panda$core$Bit $tmp1944 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 36 }));
            if ($tmp1944.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1946 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01945 = *$tmp1946;
            }
            }
            else {
            panda$core$Bit $tmp1947 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 37 }));
            if ($tmp1947.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1949 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01948 = *$tmp1949;
                panda$core$String** $tmp1951 = ((panda$core$String**) ((char*) $match$5_11684->$data + 16));
                _f11950 = *$tmp1951;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11950));
            }
            }
            else {
            panda$core$Bit $tmp1952 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 38 }));
            if ($tmp1952.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1954 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01953 = *$tmp1954;
            }
            }
            else {
            panda$core$Bit $tmp1955 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 39 }));
            if ($tmp1955.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1957 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01956 = *$tmp1957;
                panda$collections$ImmutableArray** $tmp1959 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11684->$data + 16));
                _f11958 = *$tmp1959;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11958));
            }
            }
            else {
            panda$core$Bit $tmp1960 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 40 }));
            if ($tmp1960.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1962 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01961 = *$tmp1962;
                panda$core$String** $tmp1964 = ((panda$core$String**) ((char*) $match$5_11684->$data + 16));
                _f11963 = *$tmp1964;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11963));
            }
            }
            else {
            panda$core$Bit $tmp1965 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 41 }));
            if ($tmp1965.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1967 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01966 = *$tmp1967;
                panda$core$String** $tmp1969 = ((panda$core$String**) ((char*) $match$5_11684->$data + 16));
                _f11968 = *$tmp1969;
                org$pandalanguage$pandac$ASTNode** $tmp1971 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11684->$data + 24));
                _f21970 = *$tmp1971;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11968));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21970));
            }
            }
            else {
            panda$core$Bit $tmp1972 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 42 }));
            if ($tmp1972.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1974 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01973 = *$tmp1974;
                panda$core$String** $tmp1976 = ((panda$core$String**) ((char*) $match$5_11684->$data + 16));
                _f11975 = *$tmp1976;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11975));
            }
            }
            else {
            panda$core$Bit $tmp1977 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 43 }));
            if ($tmp1977.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1979 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01978 = *$tmp1979;
                org$pandalanguage$pandac$Variable$Kind* $tmp1981 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) $match$5_11684->$data + 16));
                _f11980 = *$tmp1981;
                panda$collections$ImmutableArray** $tmp1983 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11684->$data + 24));
                _f21982 = *$tmp1983;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21982));
            }
            }
            else {
            panda$core$Bit $tmp1984 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 44 }));
            if ($tmp1984.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1986 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01985 = *$tmp1986;
                panda$collections$ImmutableArray** $tmp1988 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11684->$data + 16));
                _f11987 = *$tmp1988;
                panda$collections$ImmutableArray** $tmp1990 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11684->$data + 24));
                _f21989 = *$tmp1990;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11987));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21989));
            }
            }
            else {
            panda$core$Bit $tmp1991 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($match$5_11684->$rawValue, ((panda$core$Int64) { 45 }));
            if ($tmp1991.value) {
            {
                org$pandalanguage$pandac$Position* $tmp1993 = ((org$pandalanguage$pandac$Position*) ((char*) $match$5_11684->$data + 0));
                _f01992 = *$tmp1993;
                panda$core$String** $tmp1995 = ((panda$core$String**) ((char*) $match$5_11684->$data + 16));
                _f11994 = *$tmp1995;
                org$pandalanguage$pandac$ASTNode** $tmp1997 = ((org$pandalanguage$pandac$ASTNode**) ((char*) $match$5_11684->$data + 24));
                _f21996 = *$tmp1997;
                panda$collections$ImmutableArray** $tmp1999 = ((panda$collections$ImmutableArray**) ((char*) $match$5_11684->$data + 32));
                _f31998 = *$tmp1999;
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f11994));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f21996));
                panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) _f31998));
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
            }
        }
        $tmp1683 = -1;
        goto $l1681;
        $l1681:;
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp1685));
        switch ($tmp1683) {
            case -1: goto $l2000;
        }
        $l2000:;
    }
    $tmp1680 = -1;
    goto $l1678;
    $l1678:;
    panda$core$Object$cleanup(((panda$core$Object*) self));
    switch ($tmp1680) {
        case -1: goto $l2001;
    }
    $l2001:;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$core$String* $tmp2003;
    panda$core$String* $tmp2006;
    org$pandalanguage$pandac$ASTNode* $tmp2007;
    org$pandalanguage$pandac$ASTNode* $tmp2010;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2002 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2002 = p_f0;
    {
        panda$core$String** $tmp2004 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2003 = *$tmp2004;
        panda$core$String** $tmp2005 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2006 = p_f1;
        *$tmp2005 = $tmp2006;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2006));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2003));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2008 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2007 = *$tmp2008;
        org$pandalanguage$pandac$ASTNode** $tmp2009 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2010 = p_f2;
        *$tmp2009 = $tmp2010;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2010));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2007));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2012;
    org$pandalanguage$pandac$ASTNode* $tmp2015;
    org$pandalanguage$pandac$ASTNode* $tmp2016;
    org$pandalanguage$pandac$ASTNode* $tmp2019;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2011 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2011 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2013 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2012 = *$tmp2013;
        org$pandalanguage$pandac$ASTNode** $tmp2014 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2015 = p_f1;
        *$tmp2014 = $tmp2015;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2015));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2012));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2017 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2016 = *$tmp2017;
        org$pandalanguage$pandac$ASTNode** $tmp2018 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2019 = p_f2;
        *$tmp2018 = $tmp2019;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2019));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2016));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    org$pandalanguage$pandac$ASTNode* $tmp2021;
    org$pandalanguage$pandac$ASTNode* $tmp2024;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2020 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2020 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2022 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2021 = *$tmp2022;
        org$pandalanguage$pandac$ASTNode** $tmp2023 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2024 = p_f1;
        *$tmp2023 = $tmp2024;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2024));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2021));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2025 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2025 = p_f0;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$parser$Token$Kind p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2027;
    org$pandalanguage$pandac$ASTNode* $tmp2030;
    org$pandalanguage$pandac$ASTNode* $tmp2032;
    org$pandalanguage$pandac$ASTNode* $tmp2035;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2026 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2026 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2028 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2027 = *$tmp2028;
        org$pandalanguage$pandac$ASTNode** $tmp2029 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2030 = p_f1;
        *$tmp2029 = $tmp2030;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2030));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2027));
    }
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2031 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 24));
    *$tmp2031 = p_f2;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2033 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2032 = *$tmp2033;
        org$pandalanguage$pandac$ASTNode** $tmp2034 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2035 = p_f3;
        *$tmp2034 = $tmp2035;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2035));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2032));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Bit p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2036 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2036 = p_f0;
    panda$core$Bit* $tmp2037 = ((panda$core$Bit*) ((char*) self->$data + 16));
    *$tmp2037 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1) {
    panda$collections$ImmutableArray* $tmp2039;
    panda$collections$ImmutableArray* $tmp2042;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2038 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2038 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2040 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2039 = *$tmp2040;
        panda$collections$ImmutableArray** $tmp2041 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2042 = p_f1;
        *$tmp2041 = $tmp2042;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2042));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2039));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp2044;
    panda$core$String* $tmp2047;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2043 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2043 = p_f0;
    {
        panda$core$String** $tmp2045 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2044 = *$tmp2045;
        panda$core$String** $tmp2046 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2047 = p_f1;
        *$tmp2046 = $tmp2047;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2047));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2044));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2049;
    org$pandalanguage$pandac$ASTNode* $tmp2052;
    panda$collections$ImmutableArray* $tmp2053;
    panda$collections$ImmutableArray* $tmp2056;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2048 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2048 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2050 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2049 = *$tmp2050;
        org$pandalanguage$pandac$ASTNode** $tmp2051 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2052 = p_f1;
        *$tmp2051 = $tmp2052;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2052));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2049));
    }
    {
        panda$collections$ImmutableArray** $tmp2054 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2053 = *$tmp2054;
        panda$collections$ImmutableArray** $tmp2055 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2056 = p_f2;
        *$tmp2055 = $tmp2056;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2056));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2053));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2058;
    org$pandalanguage$pandac$ASTNode* $tmp2061;
    panda$core$String* $tmp2062;
    panda$core$String* $tmp2065;
    panda$collections$ImmutableArray* $tmp2066;
    panda$collections$ImmutableArray* $tmp2069;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2057 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2057 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2059 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2058 = *$tmp2059;
        org$pandalanguage$pandac$ASTNode** $tmp2060 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2061 = p_f1;
        *$tmp2060 = $tmp2061;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2061));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2058));
    }
    {
        panda$core$String** $tmp2063 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2062 = *$tmp2063;
        panda$core$String** $tmp2064 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2065 = p_f2;
        *$tmp2064 = $tmp2065;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2065));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2062));
    }
    {
        panda$collections$ImmutableArray** $tmp2067 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2066 = *$tmp2067;
        panda$collections$ImmutableArray** $tmp2068 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2069 = p_f3;
        *$tmp2068 = $tmp2069;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2069));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2066));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceEntry$panda$core$Int64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ChoiceEntry* p_f2, panda$core$Int64 p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2071;
    org$pandalanguage$pandac$ASTNode* $tmp2074;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2075;
    org$pandalanguage$pandac$ChoiceEntry* $tmp2078;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2070 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2070 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2072 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2071 = *$tmp2072;
        org$pandalanguage$pandac$ASTNode** $tmp2073 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2074 = p_f1;
        *$tmp2073 = $tmp2074;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2074));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2071));
    }
    {
        org$pandalanguage$pandac$ChoiceEntry** $tmp2076 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp2075 = *$tmp2076;
        org$pandalanguage$pandac$ChoiceEntry** $tmp2077 = ((org$pandalanguage$pandac$ChoiceEntry**) ((char*) self->$data + 24));
        $tmp2078 = p_f2;
        *$tmp2077 = $tmp2078;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2078));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2075));
    }
    panda$core$Int64* $tmp2079 = ((panda$core$Int64*) ((char*) self->$data + 32));
    *$tmp2079 = p_f3;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ClassDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, panda$collections$ImmutableArray* p_f6, panda$collections$ImmutableArray* p_f7) {
    org$pandalanguage$pandac$ASTNode* $tmp2081;
    org$pandalanguage$pandac$ASTNode* $tmp2084;
    panda$collections$ImmutableArray* $tmp2085;
    panda$collections$ImmutableArray* $tmp2088;
    panda$core$String* $tmp2090;
    panda$core$String* $tmp2093;
    panda$collections$ImmutableArray* $tmp2094;
    panda$collections$ImmutableArray* $tmp2097;
    panda$collections$ImmutableArray* $tmp2098;
    panda$collections$ImmutableArray* $tmp2101;
    panda$collections$ImmutableArray* $tmp2102;
    panda$collections$ImmutableArray* $tmp2105;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2080 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2080 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2082 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2081 = *$tmp2082;
        org$pandalanguage$pandac$ASTNode** $tmp2083 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2084 = p_f1;
        *$tmp2083 = $tmp2084;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2084));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2081));
    }
    {
        panda$collections$ImmutableArray** $tmp2086 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2085 = *$tmp2086;
        panda$collections$ImmutableArray** $tmp2087 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2088 = p_f2;
        *$tmp2087 = $tmp2088;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2088));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2085));
    }
    org$pandalanguage$pandac$ClassDecl$Kind* $tmp2089 = ((org$pandalanguage$pandac$ClassDecl$Kind*) ((char*) self->$data + 32));
    *$tmp2089 = p_f3;
    {
        panda$core$String** $tmp2091 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2090 = *$tmp2091;
        panda$core$String** $tmp2092 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2093 = p_f4;
        *$tmp2092 = $tmp2093;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2093));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2090));
    }
    {
        panda$collections$ImmutableArray** $tmp2095 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2094 = *$tmp2095;
        panda$collections$ImmutableArray** $tmp2096 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2097 = p_f5;
        *$tmp2096 = $tmp2097;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2097));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2094));
    }
    {
        panda$collections$ImmutableArray** $tmp2099 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2098 = *$tmp2099;
        panda$collections$ImmutableArray** $tmp2100 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 56));
        $tmp2101 = p_f6;
        *$tmp2100 = $tmp2101;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2101));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2098));
    }
    {
        panda$collections$ImmutableArray** $tmp2103 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2102 = *$tmp2103;
        panda$collections$ImmutableArray** $tmp2104 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2105 = p_f7;
        *$tmp2104 = $tmp2105;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2105));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2102));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    panda$core$String* $tmp2107;
    panda$core$String* $tmp2110;
    panda$collections$ImmutableArray* $tmp2111;
    panda$collections$ImmutableArray* $tmp2114;
    org$pandalanguage$pandac$ASTNode* $tmp2115;
    org$pandalanguage$pandac$ASTNode* $tmp2118;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2106 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2106 = p_f0;
    {
        panda$core$String** $tmp2108 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2107 = *$tmp2108;
        panda$core$String** $tmp2109 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2110 = p_f1;
        *$tmp2109 = $tmp2110;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2110));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2107));
    }
    {
        panda$collections$ImmutableArray** $tmp2112 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2111 = *$tmp2112;
        panda$collections$ImmutableArray** $tmp2113 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2114 = p_f2;
        *$tmp2113 = $tmp2114;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2114));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2111));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2116 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2115 = *$tmp2116;
        org$pandalanguage$pandac$ASTNode** $tmp2117 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2118 = p_f3;
        *$tmp2117 = $tmp2118;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2118));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2115));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$core$String* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2120;
    org$pandalanguage$pandac$ASTNode* $tmp2123;
    panda$core$String* $tmp2124;
    panda$core$String* $tmp2127;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2119 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2119 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2121 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2120 = *$tmp2121;
        org$pandalanguage$pandac$ASTNode** $tmp2122 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2123 = p_f1;
        *$tmp2122 = $tmp2123;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2123));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2120));
    }
    {
        panda$core$String** $tmp2125 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2124 = *$tmp2125;
        panda$core$String** $tmp2126 = ((panda$core$String**) ((char*) self->$data + 24));
        $tmp2127 = p_f2;
        *$tmp2126 = $tmp2127;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2127));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2124));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2129;
    org$pandalanguage$pandac$ASTNode* $tmp2132;
    panda$collections$ImmutableArray* $tmp2133;
    panda$collections$ImmutableArray* $tmp2136;
    org$pandalanguage$pandac$ASTNode* $tmp2137;
    org$pandalanguage$pandac$ASTNode* $tmp2140;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2128 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2128 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2130 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2129 = *$tmp2130;
        org$pandalanguage$pandac$ASTNode** $tmp2131 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2132 = p_f1;
        *$tmp2131 = $tmp2132;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2132));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2129));
    }
    {
        panda$collections$ImmutableArray** $tmp2134 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2133 = *$tmp2134;
        panda$collections$ImmutableArray** $tmp2135 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2136 = p_f2;
        *$tmp2135 = $tmp2136;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2136));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2133));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2138 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2137 = *$tmp2138;
        org$pandalanguage$pandac$ASTNode** $tmp2139 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2140 = p_f3;
        *$tmp2139 = $tmp2140;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2140));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2137));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, panda$collections$ImmutableArray* p_f0) {
    panda$collections$ImmutableArray* $tmp2141;
    panda$collections$ImmutableArray* $tmp2144;
    self->$rawValue = p_rv;
    {
        panda$collections$ImmutableArray** $tmp2142 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp2141 = *$tmp2142;
        panda$collections$ImmutableArray** $tmp2143 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 0));
        $tmp2144 = p_f0;
        *$tmp2143 = $tmp2144;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2144));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2141));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, org$pandalanguage$pandac$ASTNode* p_f3, panda$collections$ImmutableArray* p_f4) {
    panda$core$String* $tmp2146;
    panda$core$String* $tmp2149;
    org$pandalanguage$pandac$ASTNode* $tmp2150;
    org$pandalanguage$pandac$ASTNode* $tmp2153;
    org$pandalanguage$pandac$ASTNode* $tmp2154;
    org$pandalanguage$pandac$ASTNode* $tmp2157;
    panda$collections$ImmutableArray* $tmp2158;
    panda$collections$ImmutableArray* $tmp2161;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2145 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2145 = p_f0;
    {
        panda$core$String** $tmp2147 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2146 = *$tmp2147;
        panda$core$String** $tmp2148 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2149 = p_f1;
        *$tmp2148 = $tmp2149;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2149));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2146));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2151 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2150 = *$tmp2151;
        org$pandalanguage$pandac$ASTNode** $tmp2152 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2153 = p_f2;
        *$tmp2152 = $tmp2153;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2153));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2150));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2155 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2154 = *$tmp2155;
        org$pandalanguage$pandac$ASTNode** $tmp2156 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2157 = p_f3;
        *$tmp2156 = $tmp2157;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2157));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2154));
    }
    {
        panda$collections$ImmutableArray** $tmp2159 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp2158 = *$tmp2159;
        panda$collections$ImmutableArray** $tmp2160 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 40));
        $tmp2161 = p_f4;
        *$tmp2160 = $tmp2161;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2161));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2158));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp2163;
    panda$core$String* $tmp2166;
    panda$collections$ImmutableArray* $tmp2167;
    panda$collections$ImmutableArray* $tmp2170;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2162 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2162 = p_f0;
    {
        panda$core$String** $tmp2164 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2163 = *$tmp2164;
        panda$core$String** $tmp2165 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2166 = p_f1;
        *$tmp2165 = $tmp2166;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2166));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2163));
    }
    {
        panda$collections$ImmutableArray** $tmp2168 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2167 = *$tmp2168;
        panda$collections$ImmutableArray** $tmp2169 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2170 = p_f2;
        *$tmp2169 = $tmp2170;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2170));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2167));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1) {
    panda$core$String* $tmp2172;
    panda$core$String* $tmp2175;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2171 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2171 = p_f0;
    {
        panda$core$String** $tmp2173 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2172 = *$tmp2173;
        panda$core$String** $tmp2174 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2175 = p_f1;
        *$tmp2174 = $tmp2175;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2175));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2172));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2177;
    org$pandalanguage$pandac$ASTNode* $tmp2180;
    panda$collections$ImmutableArray* $tmp2181;
    panda$collections$ImmutableArray* $tmp2184;
    org$pandalanguage$pandac$ASTNode* $tmp2185;
    org$pandalanguage$pandac$ASTNode* $tmp2188;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2176 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2176 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2178 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2177 = *$tmp2178;
        org$pandalanguage$pandac$ASTNode** $tmp2179 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2180 = p_f1;
        *$tmp2179 = $tmp2180;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2180));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2177));
    }
    {
        panda$collections$ImmutableArray** $tmp2182 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2181 = *$tmp2182;
        panda$collections$ImmutableArray** $tmp2183 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2184 = p_f2;
        *$tmp2183 = $tmp2184;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2184));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2181));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2186 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2185 = *$tmp2186;
        org$pandalanguage$pandac$ASTNode** $tmp2187 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2188 = p_f3;
        *$tmp2187 = $tmp2188;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2188));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2185));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$UInt64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2189 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2189 = p_f0;
    panda$core$UInt64* $tmp2190 = ((panda$core$UInt64*) ((char*) self->$data + 16));
    *$tmp2190 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$IRNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$IRNode* p_f0) {
    org$pandalanguage$pandac$IRNode* $tmp2191;
    org$pandalanguage$pandac$IRNode* $tmp2194;
    self->$rawValue = p_rv;
    {
        org$pandalanguage$pandac$IRNode** $tmp2192 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp2191 = *$tmp2192;
        org$pandalanguage$pandac$IRNode** $tmp2193 = ((org$pandalanguage$pandac$IRNode**) ((char*) self->$data + 0));
        $tmp2194 = p_f0;
        *$tmp2193 = $tmp2194;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2194));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2191));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$core$String* $tmp2196;
    panda$core$String* $tmp2199;
    panda$collections$ImmutableArray* $tmp2200;
    panda$collections$ImmutableArray* $tmp2203;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2195 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2195 = p_f0;
    {
        panda$core$String** $tmp2197 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2196 = *$tmp2197;
        panda$core$String** $tmp2198 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2199 = p_f1;
        *$tmp2198 = $tmp2199;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2199));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2196));
    }
    {
        panda$collections$ImmutableArray** $tmp2201 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2200 = *$tmp2201;
        panda$collections$ImmutableArray** $tmp2202 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2203 = p_f2;
        *$tmp2202 = $tmp2203;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2203));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2200));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, panda$collections$ImmutableArray* p_f3) {
    org$pandalanguage$pandac$ASTNode* $tmp2205;
    org$pandalanguage$pandac$ASTNode* $tmp2208;
    panda$collections$ImmutableArray* $tmp2209;
    panda$collections$ImmutableArray* $tmp2212;
    panda$collections$ImmutableArray* $tmp2213;
    panda$collections$ImmutableArray* $tmp2216;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2204 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2204 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2206 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2205 = *$tmp2206;
        org$pandalanguage$pandac$ASTNode** $tmp2207 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2208 = p_f1;
        *$tmp2207 = $tmp2208;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2208));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2205));
    }
    {
        panda$collections$ImmutableArray** $tmp2210 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2209 = *$tmp2210;
        panda$collections$ImmutableArray** $tmp2211 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2212 = p_f2;
        *$tmp2211 = $tmp2212;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2212));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2209));
    }
    {
        panda$collections$ImmutableArray** $tmp2214 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2213 = *$tmp2214;
        panda$collections$ImmutableArray** $tmp2215 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2216 = p_f3;
        *$tmp2215 = $tmp2216;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2216));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2213));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$MethodDecl$Kind p_f3, panda$core$String* p_f4, panda$collections$ImmutableArray* p_f5, org$pandalanguage$pandac$ASTNode* p_f6, panda$collections$ImmutableArray* p_f7) {
    org$pandalanguage$pandac$ASTNode* $tmp2218;
    org$pandalanguage$pandac$ASTNode* $tmp2221;
    panda$collections$ImmutableArray* $tmp2222;
    panda$collections$ImmutableArray* $tmp2225;
    panda$core$String* $tmp2227;
    panda$core$String* $tmp2230;
    panda$collections$ImmutableArray* $tmp2231;
    panda$collections$ImmutableArray* $tmp2234;
    org$pandalanguage$pandac$ASTNode* $tmp2235;
    org$pandalanguage$pandac$ASTNode* $tmp2238;
    panda$collections$ImmutableArray* $tmp2239;
    panda$collections$ImmutableArray* $tmp2242;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2217 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2217 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2219 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2218 = *$tmp2219;
        org$pandalanguage$pandac$ASTNode** $tmp2220 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2221 = p_f1;
        *$tmp2220 = $tmp2221;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2221));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2218));
    }
    {
        panda$collections$ImmutableArray** $tmp2223 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2222 = *$tmp2223;
        panda$collections$ImmutableArray** $tmp2224 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2225 = p_f2;
        *$tmp2224 = $tmp2225;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2225));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2222));
    }
    org$pandalanguage$pandac$MethodDecl$Kind* $tmp2226 = ((org$pandalanguage$pandac$MethodDecl$Kind*) ((char*) self->$data + 32));
    *$tmp2226 = p_f3;
    {
        panda$core$String** $tmp2228 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2227 = *$tmp2228;
        panda$core$String** $tmp2229 = ((panda$core$String**) ((char*) self->$data + 40));
        $tmp2230 = p_f4;
        *$tmp2229 = $tmp2230;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2230));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2227));
    }
    {
        panda$collections$ImmutableArray** $tmp2232 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2231 = *$tmp2232;
        panda$collections$ImmutableArray** $tmp2233 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 48));
        $tmp2234 = p_f5;
        *$tmp2233 = $tmp2234;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2234));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2231));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2236 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 56));
        $tmp2235 = *$tmp2236;
        org$pandalanguage$pandac$ASTNode** $tmp2237 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 56));
        $tmp2238 = p_f6;
        *$tmp2237 = $tmp2238;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2238));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2235));
    }
    {
        panda$collections$ImmutableArray** $tmp2240 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2239 = *$tmp2240;
        panda$collections$ImmutableArray** $tmp2241 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 64));
        $tmp2242 = p_f7;
        *$tmp2241 = $tmp2242;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2242));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2239));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, panda$collections$ImmutableArray* p_f2, org$pandalanguage$pandac$ASTNode* p_f3) {
    panda$collections$ImmutableArray* $tmp2245;
    panda$collections$ImmutableArray* $tmp2248;
    org$pandalanguage$pandac$ASTNode* $tmp2249;
    org$pandalanguage$pandac$ASTNode* $tmp2252;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2243 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2243 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2244 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp2244 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp2246 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2245 = *$tmp2246;
        panda$collections$ImmutableArray** $tmp2247 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2248 = p_f2;
        *$tmp2247 = $tmp2248;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2248));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2245));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2250 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2249 = *$tmp2250;
        org$pandalanguage$pandac$ASTNode** $tmp2251 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 32));
        $tmp2252 = p_f3;
        *$tmp2251 = $tmp2252;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2252));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2249));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    panda$core$String* $tmp2254;
    panda$core$String* $tmp2257;
    org$pandalanguage$pandac$ASTNode* $tmp2258;
    org$pandalanguage$pandac$ASTNode* $tmp2261;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2253 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2253 = p_f0;
    {
        panda$core$String** $tmp2255 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2254 = *$tmp2255;
        panda$core$String** $tmp2256 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2257 = p_f1;
        *$tmp2256 = $tmp2257;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2257));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2254));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2259 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2258 = *$tmp2259;
        org$pandalanguage$pandac$ASTNode** $tmp2260 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2261 = p_f2;
        *$tmp2260 = $tmp2261;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2261));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2258));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$parser$Token$Kind p_f1, org$pandalanguage$pandac$ASTNode* p_f2) {
    org$pandalanguage$pandac$ASTNode* $tmp2264;
    org$pandalanguage$pandac$ASTNode* $tmp2267;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2262 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2262 = p_f0;
    org$pandalanguage$pandac$parser$Token$Kind* $tmp2263 = ((org$pandalanguage$pandac$parser$Token$Kind*) ((char*) self->$data + 16));
    *$tmp2263 = p_f1;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2265 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2264 = *$tmp2265;
        org$pandalanguage$pandac$ASTNode** $tmp2266 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2267 = p_f2;
        *$tmp2266 = $tmp2267;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2267));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2264));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$core$Bit p_f3, org$pandalanguage$pandac$ASTNode* p_f4) {
    org$pandalanguage$pandac$ASTNode* $tmp2269;
    org$pandalanguage$pandac$ASTNode* $tmp2272;
    org$pandalanguage$pandac$ASTNode* $tmp2273;
    org$pandalanguage$pandac$ASTNode* $tmp2276;
    org$pandalanguage$pandac$ASTNode* $tmp2278;
    org$pandalanguage$pandac$ASTNode* $tmp2281;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2268 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2268 = p_f0;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2270 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2269 = *$tmp2270;
        org$pandalanguage$pandac$ASTNode** $tmp2271 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 16));
        $tmp2272 = p_f1;
        *$tmp2271 = $tmp2272;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2272));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2269));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2274 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2273 = *$tmp2274;
        org$pandalanguage$pandac$ASTNode** $tmp2275 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2276 = p_f2;
        *$tmp2275 = $tmp2276;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2276));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2273));
    }
    panda$core$Bit* $tmp2277 = ((panda$core$Bit*) ((char*) self->$data + 32));
    *$tmp2277 = p_f3;
    {
        org$pandalanguage$pandac$ASTNode** $tmp2279 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        $tmp2278 = *$tmp2279;
        org$pandalanguage$pandac$ASTNode** $tmp2280 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 33));
        $tmp2281 = p_f4;
        *$tmp2280 = $tmp2281;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2281));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2278));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$Real64 p_f1) {
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2282 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2282 = p_f0;
    panda$core$Real64* $tmp2283 = ((panda$core$Real64*) ((char*) self->$data + 16));
    *$tmp2283 = p_f1;
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$ASTNode* p_f1) {
    org$pandalanguage$pandac$ASTNode* $tmp2285;
    org$pandalanguage$pandac$ASTNode* $tmp2288;
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
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, org$pandalanguage$pandac$Variable$Kind p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp2291;
    panda$collections$ImmutableArray* $tmp2294;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2289 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2289 = p_f0;
    org$pandalanguage$pandac$Variable$Kind* $tmp2290 = ((org$pandalanguage$pandac$Variable$Kind*) ((char*) self->$data + 16));
    *$tmp2290 = p_f1;
    {
        panda$collections$ImmutableArray** $tmp2292 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2291 = *$tmp2292;
        panda$collections$ImmutableArray** $tmp2293 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2294 = p_f2;
        *$tmp2293 = $tmp2294;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2294));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2291));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$collections$ImmutableArray* p_f1, panda$collections$ImmutableArray* p_f2) {
    panda$collections$ImmutableArray* $tmp2296;
    panda$collections$ImmutableArray* $tmp2299;
    panda$collections$ImmutableArray* $tmp2300;
    panda$collections$ImmutableArray* $tmp2303;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2295 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2295 = p_f0;
    {
        panda$collections$ImmutableArray** $tmp2297 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2296 = *$tmp2297;
        panda$collections$ImmutableArray** $tmp2298 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 16));
        $tmp2299 = p_f1;
        *$tmp2298 = $tmp2299;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2299));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2296));
    }
    {
        panda$collections$ImmutableArray** $tmp2301 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2300 = *$tmp2301;
        panda$collections$ImmutableArray** $tmp2302 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 24));
        $tmp2303 = p_f2;
        *$tmp2302 = $tmp2303;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2303));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2300));
    }
}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* self, panda$core$Int64 p_rv, org$pandalanguage$pandac$Position p_f0, panda$core$String* p_f1, org$pandalanguage$pandac$ASTNode* p_f2, panda$collections$ImmutableArray* p_f3) {
    panda$core$String* $tmp2305;
    panda$core$String* $tmp2308;
    org$pandalanguage$pandac$ASTNode* $tmp2309;
    org$pandalanguage$pandac$ASTNode* $tmp2312;
    panda$collections$ImmutableArray* $tmp2313;
    panda$collections$ImmutableArray* $tmp2316;
    self->$rawValue = p_rv;
    org$pandalanguage$pandac$Position* $tmp2304 = ((org$pandalanguage$pandac$Position*) ((char*) self->$data + 0));
    *$tmp2304 = p_f0;
    {
        panda$core$String** $tmp2306 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2305 = *$tmp2306;
        panda$core$String** $tmp2307 = ((panda$core$String**) ((char*) self->$data + 16));
        $tmp2308 = p_f1;
        *$tmp2307 = $tmp2308;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2308));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2305));
    }
    {
        org$pandalanguage$pandac$ASTNode** $tmp2310 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2309 = *$tmp2310;
        org$pandalanguage$pandac$ASTNode** $tmp2311 = ((org$pandalanguage$pandac$ASTNode**) ((char*) self->$data + 24));
        $tmp2312 = p_f2;
        *$tmp2311 = $tmp2312;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2312));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2309));
    }
    {
        panda$collections$ImmutableArray** $tmp2314 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2313 = *$tmp2314;
        panda$collections$ImmutableArray** $tmp2315 = ((panda$collections$ImmutableArray**) ((char*) self->$data + 32));
        $tmp2316 = p_f3;
        *$tmp2315 = $tmp2316;
        panda$core$Panda$ref$panda$core$Object(((panda$core$Object*) $tmp2316));
        panda$core$Panda$unref$panda$core$Object(((panda$core$Object*) $tmp2313));
    }
}






