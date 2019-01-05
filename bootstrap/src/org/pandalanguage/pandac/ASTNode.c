#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
#include "panda/collections/ImmutableArray.h"
#include "org/pandalanguage/pandac/ChoiceCase.h"
#include "org/pandalanguage/pandac/ClassDecl/Kind.h"
#include "panda/core/UInt64.h"
#include "org/pandalanguage/pandac/IR/Value.h"
#include "org/pandalanguage/pandac/MethodDecl/Kind.h"
#include "panda/core/Real64.h"
#include "org/pandalanguage/pandac/Variable/Kind.h"
#include "panda/core/Panda.h"
#include "panda/core/MutableString.h"
#include "panda/collections/Iterable.h"
#include "panda/collections/Iterator.h"
#include "panda/collections/CollectionView.h"


static panda$core$String $s1;
org$pandalanguage$pandac$ASTNode$class_type org$pandalanguage$pandac$ASTNode$class = { (panda$core$Class*) &panda$core$Class$class, -999, &$s1, (panda$core$Class*) &panda$core$Object$class, NULL, { org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String, org$pandalanguage$pandac$ASTNode$cleanup, org$pandalanguage$pandac$ASTNode$position$R$org$pandalanguage$pandac$Position} };

typedef panda$collections$Iterator* (*$fn643)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn647)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn652)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn699)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn706)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn744)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn770)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn822)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn826)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn831)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn865)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn878)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn889)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn893)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn898)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn953)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn965)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn998)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1002)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1007)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1040)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1076)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1080)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1085)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1112)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1116)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1121)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1172)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1176)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1181)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1216)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1257)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1261)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1266)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1310)(org$pandalanguage$pandac$IR$Value*);
typedef panda$collections$Iterator* (*$fn1339)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1343)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1348)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1387)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1391)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1396)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1459)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1463)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1468)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1500)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1510)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1533)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1537)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1542)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1604)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1828)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1846)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1904)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1930)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1990)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2016)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2020)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2025)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2043)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2047)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2052)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2099)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2103)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2108)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 32, -9211815390615587804, NULL };
static panda$core$String $s501 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 13, -8809212395465398403, NULL };
static panda$core$String $s505 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 13, -8809212395465398403, NULL };
static panda$core$String $s506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2e\x70\x6f\x73\x69\x74\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 111, 8956204005101181995, NULL };
static panda$core$String $s528 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s554 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s556 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s561 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s563 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s567 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x28", 5, 17286533032, NULL };
static panda$core$String $s582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s589 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s590 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s638 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s658 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s661 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s679 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s681 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s683 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s685 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s702 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s710 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s735 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s740 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s748 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s773 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s777 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s782 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s818 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s837 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s845 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s850 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static panda$core$String $s855 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static panda$core$String $s868 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s870 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s881 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s883 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s885 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s904 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s907 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s930 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s932 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s934 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s936 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s956 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s960 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s992 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s994 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s1013 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1018 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 24242135792659305, NULL };
static panda$core$String $s1020 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1043 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1047 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1072 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1091 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1127 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1162 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s1164 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s1168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1190 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1212 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1250 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s1252 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1272 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1275 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1282 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s1284 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1335 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s1354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1357 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1380 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s1382 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1402 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1410 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1412 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1455 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1474 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1482 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s1487 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s1503 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1505 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1515 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1522 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1524 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1529 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1551 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1581 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static panda$core$String $s1582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static panda$core$String $s1587 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static panda$core$String $s1588 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static panda$core$String $s1593 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static panda$core$String $s1594 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static panda$core$String $s1599 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static panda$core$String $s1600 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static panda$core$String $s1607 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1609 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1625 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1633 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x29", 2, 14282, NULL };
static panda$core$String $s1641 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s1642 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s1653 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s1679 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1683 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1699 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1703 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1731 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s1733 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s1745 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s1771 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1773 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1788 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s1790 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1792 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s1794 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s1798 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s1799 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s1810 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s1815 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s1816 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s1831 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1833 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1849 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1851 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1880 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1884 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1907 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1909 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static panda$core$String $s1913 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1933 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1935 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static panda$core$String $s1939 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1970 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s1975 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s1980 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s1985 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s2008 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s2011 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2012 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2032 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2036 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2039 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s2058 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2089 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s2093 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s2095 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2117 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2131 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x41\x53\x54\x4e\x6f\x64\x65\x3a\x20", 21, -8877512154781713630, NULL };
static panda$core$String $s2133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2134 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 13, -8809212395465398403, NULL };
static panda$core$String $s2138 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 13, -8809212395465398403, NULL };
static panda$core$String $s2139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 94, -4884667081240384487, NULL };

org$pandalanguage$pandac$Position org$pandalanguage$pandac$ASTNode$position$R$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* param0) {

org$pandalanguage$pandac$Position local0;
org$pandalanguage$pandac$Position local1;
org$pandalanguage$pandac$Position local2;
org$pandalanguage$pandac$Position local3;
org$pandalanguage$pandac$Position local4;
org$pandalanguage$pandac$Position local5;
org$pandalanguage$pandac$Position local6;
org$pandalanguage$pandac$Position local7;
org$pandalanguage$pandac$Position local8;
org$pandalanguage$pandac$Position local9;
org$pandalanguage$pandac$Position local10;
org$pandalanguage$pandac$Position local11;
org$pandalanguage$pandac$Position local12;
org$pandalanguage$pandac$Position local13;
org$pandalanguage$pandac$Position local14;
org$pandalanguage$pandac$Position local15;
org$pandalanguage$pandac$Position local16;
org$pandalanguage$pandac$Position local17;
org$pandalanguage$pandac$Position local18;
org$pandalanguage$pandac$Position local19;
org$pandalanguage$pandac$Position local20;
org$pandalanguage$pandac$Position local21;
org$pandalanguage$pandac$Position local22;
org$pandalanguage$pandac$Position local23;
org$pandalanguage$pandac$Position local24;
org$pandalanguage$pandac$Position local25;
org$pandalanguage$pandac$Position local26;
org$pandalanguage$pandac$Position local27;
org$pandalanguage$pandac$Position local28;
org$pandalanguage$pandac$Position local29;
org$pandalanguage$pandac$Position local30;
org$pandalanguage$pandac$Position local31;
org$pandalanguage$pandac$Position local32;
org$pandalanguage$pandac$Position local33;
org$pandalanguage$pandac$Position local34;
org$pandalanguage$pandac$Position local35;
org$pandalanguage$pandac$Position local36;
org$pandalanguage$pandac$Position local37;
org$pandalanguage$pandac$Position local38;
org$pandalanguage$pandac$Position local39;
org$pandalanguage$pandac$Position local40;
org$pandalanguage$pandac$Position local41;
org$pandalanguage$pandac$Position local42;
org$pandalanguage$pandac$Position local43;
org$pandalanguage$pandac$Position local44;
org$pandalanguage$pandac$Position local45;
org$pandalanguage$pandac$Position local46;
org$pandalanguage$pandac$Position local47;
org$pandalanguage$pandac$Position local48;
// line 87
panda$core$Int64* $tmp2 = &param0->$rawValue;
panda$core$Int64 $tmp3 = *$tmp2;
panda$core$Int64 $tmp4 = (panda$core$Int64) {0};
panda$core$Bit $tmp5 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp4);
bool $tmp6 = $tmp5.value;
if ($tmp6) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp7 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp8 = *$tmp7;
*(&local0) = $tmp8;
panda$core$String** $tmp9 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp10 = *$tmp9;
panda$core$String** $tmp11 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp12 = *$tmp11;
org$pandalanguage$pandac$ASTNode** $tmp13 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp14 = *$tmp13;
// line 89
org$pandalanguage$pandac$Position $tmp15 = *(&local0);
return $tmp15;
block3:;
panda$core$Int64 $tmp16 = (panda$core$Int64) {1};
panda$core$Bit $tmp17 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp16);
bool $tmp18 = $tmp17.value;
if ($tmp18) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Position* $tmp19 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp20 = *$tmp19;
*(&local1) = $tmp20;
org$pandalanguage$pandac$ASTNode** $tmp21 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp22 = *$tmp21;
org$pandalanguage$pandac$ASTNode** $tmp23 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp24 = *$tmp23;
// line 92
org$pandalanguage$pandac$Position $tmp25 = *(&local1);
return $tmp25;
block5:;
panda$core$Int64 $tmp26 = (panda$core$Int64) {2};
panda$core$Bit $tmp27 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp26);
bool $tmp28 = $tmp27.value;
if ($tmp28) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$Position* $tmp29 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp30 = *$tmp29;
*(&local2) = $tmp30;
org$pandalanguage$pandac$ASTNode** $tmp31 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp32 = *$tmp31;
// line 95
org$pandalanguage$pandac$Position $tmp33 = *(&local2);
return $tmp33;
block7:;
panda$core$Int64 $tmp34 = (panda$core$Int64) {3};
panda$core$Bit $tmp35 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp34);
bool $tmp36 = $tmp35.value;
if ($tmp36) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$Position* $tmp37 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp38 = *$tmp37;
*(&local3) = $tmp38;
// line 98
org$pandalanguage$pandac$Position $tmp39 = *(&local3);
return $tmp39;
block9:;
panda$core$Int64 $tmp40 = (panda$core$Int64) {4};
panda$core$Bit $tmp41 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp40);
bool $tmp42 = $tmp41.value;
if ($tmp42) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Position* $tmp43 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp44 = *$tmp43;
*(&local4) = $tmp44;
org$pandalanguage$pandac$ASTNode** $tmp45 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp46 = *$tmp45;
org$pandalanguage$pandac$parser$Token$Kind* $tmp47 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 24);
org$pandalanguage$pandac$parser$Token$Kind $tmp48 = *$tmp47;
org$pandalanguage$pandac$ASTNode** $tmp49 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp50 = *$tmp49;
// line 101
org$pandalanguage$pandac$Position $tmp51 = *(&local4);
return $tmp51;
block11:;
panda$core$Int64 $tmp52 = (panda$core$Int64) {5};
panda$core$Bit $tmp53 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp52);
bool $tmp54 = $tmp53.value;
if ($tmp54) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Position* $tmp55 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp56 = *$tmp55;
*(&local5) = $tmp56;
panda$core$Bit* $tmp57 = (panda$core$Bit*) (param0->$data + 16);
panda$core$Bit $tmp58 = *$tmp57;
// line 104
org$pandalanguage$pandac$Position $tmp59 = *(&local5);
return $tmp59;
block13:;
panda$core$Int64 $tmp60 = (panda$core$Int64) {6};
panda$core$Bit $tmp61 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp60);
bool $tmp62 = $tmp61.value;
if ($tmp62) goto block14; else goto block15;
block14:;
org$pandalanguage$pandac$Position* $tmp63 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp64 = *$tmp63;
*(&local6) = $tmp64;
panda$collections$ImmutableArray** $tmp65 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp66 = *$tmp65;
// line 107
org$pandalanguage$pandac$Position $tmp67 = *(&local6);
return $tmp67;
block15:;
panda$core$Int64 $tmp68 = (panda$core$Int64) {7};
panda$core$Bit $tmp69 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp68);
bool $tmp70 = $tmp69.value;
if ($tmp70) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$Position* $tmp71 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp72 = *$tmp71;
*(&local7) = $tmp72;
panda$core$String** $tmp73 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp74 = *$tmp73;
// line 110
org$pandalanguage$pandac$Position $tmp75 = *(&local7);
return $tmp75;
block17:;
panda$core$Int64 $tmp76 = (panda$core$Int64) {8};
panda$core$Bit $tmp77 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp76);
bool $tmp78 = $tmp77.value;
if ($tmp78) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$Position* $tmp79 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp80 = *$tmp79;
*(&local8) = $tmp80;
org$pandalanguage$pandac$ASTNode** $tmp81 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp82 = *$tmp81;
panda$collections$ImmutableArray** $tmp83 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp84 = *$tmp83;
// line 113
org$pandalanguage$pandac$Position $tmp85 = *(&local8);
return $tmp85;
block19:;
panda$core$Int64 $tmp86 = (panda$core$Int64) {9};
panda$core$Bit $tmp87 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp86);
bool $tmp88 = $tmp87.value;
if ($tmp88) goto block20; else goto block21;
block20:;
org$pandalanguage$pandac$Position* $tmp89 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp90 = *$tmp89;
*(&local9) = $tmp90;
org$pandalanguage$pandac$ASTNode** $tmp91 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp92 = *$tmp91;
panda$core$String** $tmp93 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp94 = *$tmp93;
panda$collections$ImmutableArray** $tmp95 = (panda$collections$ImmutableArray**) (param0->$data + 32);
panda$collections$ImmutableArray* $tmp96 = *$tmp95;
// line 116
org$pandalanguage$pandac$Position $tmp97 = *(&local9);
return $tmp97;
block21:;
panda$core$Int64 $tmp98 = (panda$core$Int64) {10};
panda$core$Bit $tmp99 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp98);
bool $tmp100 = $tmp99.value;
if ($tmp100) goto block22; else goto block23;
block22:;
org$pandalanguage$pandac$Position* $tmp101 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp102 = *$tmp101;
*(&local10) = $tmp102;
org$pandalanguage$pandac$ASTNode** $tmp103 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp104 = *$tmp103;
org$pandalanguage$pandac$ChoiceCase** $tmp105 = (org$pandalanguage$pandac$ChoiceCase**) (param0->$data + 24);
org$pandalanguage$pandac$ChoiceCase* $tmp106 = *$tmp105;
panda$core$Int64* $tmp107 = (panda$core$Int64*) (param0->$data + 32);
panda$core$Int64 $tmp108 = *$tmp107;
// line 119
org$pandalanguage$pandac$Position $tmp109 = *(&local10);
return $tmp109;
block23:;
panda$core$Int64 $tmp110 = (panda$core$Int64) {11};
panda$core$Bit $tmp111 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp110);
bool $tmp112 = $tmp111.value;
if ($tmp112) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Position* $tmp113 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp114 = *$tmp113;
*(&local11) = $tmp114;
org$pandalanguage$pandac$ASTNode** $tmp115 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp116 = *$tmp115;
panda$collections$ImmutableArray** $tmp117 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp118 = *$tmp117;
org$pandalanguage$pandac$ClassDecl$Kind* $tmp119 = (org$pandalanguage$pandac$ClassDecl$Kind*) (param0->$data + 32);
org$pandalanguage$pandac$ClassDecl$Kind $tmp120 = *$tmp119;
panda$core$String** $tmp121 = (panda$core$String**) (param0->$data + 40);
panda$core$String* $tmp122 = *$tmp121;
panda$collections$ImmutableArray** $tmp123 = (panda$collections$ImmutableArray**) (param0->$data + 48);
panda$collections$ImmutableArray* $tmp124 = *$tmp123;
panda$collections$ImmutableArray** $tmp125 = (panda$collections$ImmutableArray**) (param0->$data + 56);
panda$collections$ImmutableArray* $tmp126 = *$tmp125;
panda$collections$ImmutableArray** $tmp127 = (panda$collections$ImmutableArray**) (param0->$data + 64);
panda$collections$ImmutableArray* $tmp128 = *$tmp127;
// line 122
org$pandalanguage$pandac$Position $tmp129 = *(&local11);
return $tmp129;
block25:;
panda$core$Int64 $tmp130 = (panda$core$Int64) {12};
panda$core$Bit $tmp131 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp130);
bool $tmp132 = $tmp131.value;
if ($tmp132) goto block26; else goto block27;
block26:;
org$pandalanguage$pandac$Position* $tmp133 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp134 = *$tmp133;
*(&local12) = $tmp134;
panda$core$String** $tmp135 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp136 = *$tmp135;
// line 125
org$pandalanguage$pandac$Position $tmp137 = *(&local12);
return $tmp137;
block27:;
panda$core$Int64 $tmp138 = (panda$core$Int64) {13};
panda$core$Bit $tmp139 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp138);
bool $tmp140 = $tmp139.value;
if ($tmp140) goto block28; else goto block29;
block28:;
org$pandalanguage$pandac$Position* $tmp141 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp142 = *$tmp141;
*(&local13) = $tmp142;
org$pandalanguage$pandac$ASTNode** $tmp143 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp144 = *$tmp143;
org$pandalanguage$pandac$ASTNode** $tmp145 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp146 = *$tmp145;
// line 128
org$pandalanguage$pandac$Position $tmp147 = *(&local13);
return $tmp147;
block29:;
panda$core$Int64 $tmp148 = (panda$core$Int64) {14};
panda$core$Bit $tmp149 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp148);
bool $tmp150 = $tmp149.value;
if ($tmp150) goto block30; else goto block31;
block30:;
org$pandalanguage$pandac$Position* $tmp151 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp152 = *$tmp151;
*(&local14) = $tmp152;
panda$core$String** $tmp153 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp154 = *$tmp153;
panda$collections$ImmutableArray** $tmp155 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp156 = *$tmp155;
org$pandalanguage$pandac$ASTNode** $tmp157 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp158 = *$tmp157;
// line 131
org$pandalanguage$pandac$Position $tmp159 = *(&local14);
return $tmp159;
block31:;
panda$core$Int64 $tmp160 = (panda$core$Int64) {15};
panda$core$Bit $tmp161 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp160);
bool $tmp162 = $tmp161.value;
if ($tmp162) goto block32; else goto block33;
block32:;
org$pandalanguage$pandac$Position* $tmp163 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp164 = *$tmp163;
*(&local15) = $tmp164;
org$pandalanguage$pandac$ASTNode** $tmp165 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp166 = *$tmp165;
panda$core$String** $tmp167 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp168 = *$tmp167;
// line 134
org$pandalanguage$pandac$Position $tmp169 = *(&local15);
return $tmp169;
block33:;
panda$core$Int64 $tmp170 = (panda$core$Int64) {16};
panda$core$Bit $tmp171 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp170);
bool $tmp172 = $tmp171.value;
if ($tmp172) goto block34; else goto block35;
block34:;
org$pandalanguage$pandac$Position* $tmp173 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp174 = *$tmp173;
*(&local16) = $tmp174;
org$pandalanguage$pandac$ASTNode** $tmp175 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp176 = *$tmp175;
panda$collections$ImmutableArray** $tmp177 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp178 = *$tmp177;
org$pandalanguage$pandac$ASTNode** $tmp179 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp180 = *$tmp179;
// line 137
org$pandalanguage$pandac$Position $tmp181 = *(&local16);
return $tmp181;
block35:;
panda$core$Int64 $tmp182 = (panda$core$Int64) {17};
panda$core$Bit $tmp183 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp182);
bool $tmp184 = $tmp183.value;
if ($tmp184) goto block36; else goto block37;
block36:;
panda$collections$ImmutableArray** $tmp185 = (panda$collections$ImmutableArray**) (param0->$data + 0);
panda$collections$ImmutableArray* $tmp186 = *$tmp185;
// line 140
org$pandalanguage$pandac$Position $tmp187 = org$pandalanguage$pandac$Position$init();
return $tmp187;
block37:;
panda$core$Int64 $tmp188 = (panda$core$Int64) {18};
panda$core$Bit $tmp189 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp188);
bool $tmp190 = $tmp189.value;
if ($tmp190) goto block38; else goto block39;
block38:;
org$pandalanguage$pandac$Position* $tmp191 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp192 = *$tmp191;
*(&local17) = $tmp192;
panda$core$String** $tmp193 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp194 = *$tmp193;
org$pandalanguage$pandac$ASTNode** $tmp195 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp196 = *$tmp195;
org$pandalanguage$pandac$ASTNode** $tmp197 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp198 = *$tmp197;
panda$collections$ImmutableArray** $tmp199 = (panda$collections$ImmutableArray**) (param0->$data + 40);
panda$collections$ImmutableArray* $tmp200 = *$tmp199;
// line 143
org$pandalanguage$pandac$Position $tmp201 = *(&local17);
return $tmp201;
block39:;
panda$core$Int64 $tmp202 = (panda$core$Int64) {19};
panda$core$Bit $tmp203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp202);
bool $tmp204 = $tmp203.value;
if ($tmp204) goto block40; else goto block41;
block40:;
org$pandalanguage$pandac$Position* $tmp205 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp206 = *$tmp205;
*(&local18) = $tmp206;
panda$core$String** $tmp207 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp208 = *$tmp207;
panda$collections$ImmutableArray** $tmp209 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp210 = *$tmp209;
// line 146
org$pandalanguage$pandac$Position $tmp211 = *(&local18);
return $tmp211;
block41:;
panda$core$Int64 $tmp212 = (panda$core$Int64) {20};
panda$core$Bit $tmp213 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp212);
bool $tmp214 = $tmp213.value;
if ($tmp214) goto block42; else goto block43;
block42:;
org$pandalanguage$pandac$Position* $tmp215 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp216 = *$tmp215;
*(&local19) = $tmp216;
panda$core$String** $tmp217 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp218 = *$tmp217;
// line 149
org$pandalanguage$pandac$Position $tmp219 = *(&local19);
return $tmp219;
block43:;
panda$core$Int64 $tmp220 = (panda$core$Int64) {21};
panda$core$Bit $tmp221 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp220);
bool $tmp222 = $tmp221.value;
if ($tmp222) goto block44; else goto block45;
block44:;
org$pandalanguage$pandac$Position* $tmp223 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp224 = *$tmp223;
*(&local20) = $tmp224;
org$pandalanguage$pandac$ASTNode** $tmp225 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp226 = *$tmp225;
panda$collections$ImmutableArray** $tmp227 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp228 = *$tmp227;
org$pandalanguage$pandac$ASTNode** $tmp229 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp230 = *$tmp229;
// line 152
org$pandalanguage$pandac$Position $tmp231 = *(&local20);
return $tmp231;
block45:;
panda$core$Int64 $tmp232 = (panda$core$Int64) {22};
panda$core$Bit $tmp233 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp232);
bool $tmp234 = $tmp233.value;
if ($tmp234) goto block46; else goto block47;
block46:;
org$pandalanguage$pandac$Position* $tmp235 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp236 = *$tmp235;
*(&local21) = $tmp236;
panda$core$UInt64* $tmp237 = (panda$core$UInt64*) (param0->$data + 16);
panda$core$UInt64 $tmp238 = *$tmp237;
// line 155
org$pandalanguage$pandac$Position $tmp239 = *(&local21);
return $tmp239;
block47:;
panda$core$Int64 $tmp240 = (panda$core$Int64) {23};
panda$core$Bit $tmp241 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp240);
bool $tmp242 = $tmp241.value;
if ($tmp242) goto block48; else goto block49;
block48:;
org$pandalanguage$pandac$Position* $tmp243 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp244 = *$tmp243;
*(&local22) = $tmp244;
org$pandalanguage$pandac$IR$Value** $tmp245 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp246 = *$tmp245;
// line 158
org$pandalanguage$pandac$Position $tmp247 = *(&local22);
return $tmp247;
block49:;
panda$core$Int64 $tmp248 = (panda$core$Int64) {24};
panda$core$Bit $tmp249 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp248);
bool $tmp250 = $tmp249.value;
if ($tmp250) goto block50; else goto block51;
block50:;
org$pandalanguage$pandac$Position* $tmp251 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp252 = *$tmp251;
*(&local23) = $tmp252;
panda$core$String** $tmp253 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp254 = *$tmp253;
panda$collections$ImmutableArray** $tmp255 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp256 = *$tmp255;
// line 161
org$pandalanguage$pandac$Position $tmp257 = *(&local23);
return $tmp257;
block51:;
panda$core$Int64 $tmp258 = (panda$core$Int64) {25};
panda$core$Bit $tmp259 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp258);
bool $tmp260 = $tmp259.value;
if ($tmp260) goto block52; else goto block53;
block52:;
org$pandalanguage$pandac$Position* $tmp261 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp262 = *$tmp261;
*(&local24) = $tmp262;
org$pandalanguage$pandac$ASTNode** $tmp263 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp264 = *$tmp263;
panda$collections$ImmutableArray** $tmp265 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp266 = *$tmp265;
panda$collections$ImmutableArray** $tmp267 = (panda$collections$ImmutableArray**) (param0->$data + 32);
panda$collections$ImmutableArray* $tmp268 = *$tmp267;
// line 164
org$pandalanguage$pandac$Position $tmp269 = *(&local24);
return $tmp269;
block53:;
panda$core$Int64 $tmp270 = (panda$core$Int64) {26};
panda$core$Bit $tmp271 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp270);
bool $tmp272 = $tmp271.value;
if ($tmp272) goto block54; else goto block55;
block54:;
org$pandalanguage$pandac$Position* $tmp273 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp274 = *$tmp273;
*(&local25) = $tmp274;
org$pandalanguage$pandac$ASTNode** $tmp275 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp276 = *$tmp275;
panda$collections$ImmutableArray** $tmp277 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp278 = *$tmp277;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp279 = (org$pandalanguage$pandac$MethodDecl$Kind*) (param0->$data + 32);
org$pandalanguage$pandac$MethodDecl$Kind $tmp280 = *$tmp279;
panda$core$String** $tmp281 = (panda$core$String**) (param0->$data + 40);
panda$core$String* $tmp282 = *$tmp281;
panda$collections$ImmutableArray** $tmp283 = (panda$collections$ImmutableArray**) (param0->$data + 48);
panda$collections$ImmutableArray* $tmp284 = *$tmp283;
panda$collections$ImmutableArray** $tmp285 = (panda$collections$ImmutableArray**) (param0->$data + 56);
panda$collections$ImmutableArray* $tmp286 = *$tmp285;
org$pandalanguage$pandac$ASTNode** $tmp287 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 64);
org$pandalanguage$pandac$ASTNode* $tmp288 = *$tmp287;
panda$collections$ImmutableArray** $tmp289 = (panda$collections$ImmutableArray**) (param0->$data + 72);
panda$collections$ImmutableArray* $tmp290 = *$tmp289;
// line 167
org$pandalanguage$pandac$Position $tmp291 = *(&local25);
return $tmp291;
block55:;
panda$core$Int64 $tmp292 = (panda$core$Int64) {27};
panda$core$Bit $tmp293 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp292);
bool $tmp294 = $tmp293.value;
if ($tmp294) goto block56; else goto block57;
block56:;
org$pandalanguage$pandac$Position* $tmp295 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp296 = *$tmp295;
*(&local26) = $tmp296;
org$pandalanguage$pandac$parser$Token$Kind* $tmp297 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp298 = *$tmp297;
panda$collections$ImmutableArray** $tmp299 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp300 = *$tmp299;
org$pandalanguage$pandac$ASTNode** $tmp301 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp302 = *$tmp301;
// line 170
org$pandalanguage$pandac$Position $tmp303 = *(&local26);
return $tmp303;
block57:;
panda$core$Int64 $tmp304 = (panda$core$Int64) {28};
panda$core$Bit $tmp305 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp304);
bool $tmp306 = $tmp305.value;
if ($tmp306) goto block58; else goto block59;
block58:;
org$pandalanguage$pandac$Position* $tmp307 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp308 = *$tmp307;
*(&local27) = $tmp308;
// line 173
org$pandalanguage$pandac$Position $tmp309 = *(&local27);
return $tmp309;
block59:;
panda$core$Int64 $tmp310 = (panda$core$Int64) {29};
panda$core$Bit $tmp311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp310);
bool $tmp312 = $tmp311.value;
if ($tmp312) goto block60; else goto block61;
block60:;
org$pandalanguage$pandac$Position* $tmp313 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp314 = *$tmp313;
*(&local28) = $tmp314;
org$pandalanguage$pandac$ASTNode** $tmp315 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp316 = *$tmp315;
// line 176
org$pandalanguage$pandac$Position $tmp317 = *(&local28);
return $tmp317;
block61:;
panda$core$Int64 $tmp318 = (panda$core$Int64) {30};
panda$core$Bit $tmp319 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp318);
bool $tmp320 = $tmp319.value;
if ($tmp320) goto block62; else goto block63;
block62:;
org$pandalanguage$pandac$Position* $tmp321 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp322 = *$tmp321;
*(&local29) = $tmp322;
panda$core$String** $tmp323 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp324 = *$tmp323;
// line 179
org$pandalanguage$pandac$Position $tmp325 = *(&local29);
return $tmp325;
block63:;
panda$core$Int64 $tmp326 = (panda$core$Int64) {31};
panda$core$Bit $tmp327 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp326);
bool $tmp328 = $tmp327.value;
if ($tmp328) goto block64; else goto block65;
block64:;
org$pandalanguage$pandac$Position* $tmp329 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp330 = *$tmp329;
*(&local30) = $tmp330;
panda$core$String** $tmp331 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp332 = *$tmp331;
org$pandalanguage$pandac$ASTNode** $tmp333 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp334 = *$tmp333;
// line 182
org$pandalanguage$pandac$Position $tmp335 = *(&local30);
return $tmp335;
block65:;
panda$core$Int64 $tmp336 = (panda$core$Int64) {32};
panda$core$Bit $tmp337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp336);
bool $tmp338 = $tmp337.value;
if ($tmp338) goto block66; else goto block67;
block66:;
org$pandalanguage$pandac$Position* $tmp339 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp340 = *$tmp339;
*(&local31) = $tmp340;
org$pandalanguage$pandac$parser$Token$Kind* $tmp341 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp342 = *$tmp341;
org$pandalanguage$pandac$ASTNode** $tmp343 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp344 = *$tmp343;
// line 185
org$pandalanguage$pandac$Position $tmp345 = *(&local31);
return $tmp345;
block67:;
panda$core$Int64 $tmp346 = (panda$core$Int64) {33};
panda$core$Bit $tmp347 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp346);
bool $tmp348 = $tmp347.value;
if ($tmp348) goto block68; else goto block69;
block68:;
org$pandalanguage$pandac$Position* $tmp349 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp350 = *$tmp349;
*(&local32) = $tmp350;
org$pandalanguage$pandac$ASTNode** $tmp351 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp352 = *$tmp351;
panda$core$Bit* $tmp353 = (panda$core$Bit*) (param0->$data + 24);
panda$core$Bit $tmp354 = *$tmp353;
org$pandalanguage$pandac$ASTNode** $tmp355 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 25);
org$pandalanguage$pandac$ASTNode* $tmp356 = *$tmp355;
org$pandalanguage$pandac$ASTNode** $tmp357 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 33);
org$pandalanguage$pandac$ASTNode* $tmp358 = *$tmp357;
// line 188
org$pandalanguage$pandac$Position $tmp359 = *(&local32);
return $tmp359;
block69:;
panda$core$Int64 $tmp360 = (panda$core$Int64) {34};
panda$core$Bit $tmp361 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp360);
bool $tmp362 = $tmp361.value;
if ($tmp362) goto block70; else goto block71;
block70:;
org$pandalanguage$pandac$Position* $tmp363 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp364 = *$tmp363;
*(&local33) = $tmp364;
panda$core$Real64* $tmp365 = (panda$core$Real64*) (param0->$data + 16);
panda$core$Real64 $tmp366 = *$tmp365;
// line 191
org$pandalanguage$pandac$Position $tmp367 = *(&local33);
return $tmp367;
block71:;
panda$core$Int64 $tmp368 = (panda$core$Int64) {35};
panda$core$Bit $tmp369 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp368);
bool $tmp370 = $tmp369.value;
if ($tmp370) goto block72; else goto block73;
block72:;
org$pandalanguage$pandac$Position* $tmp371 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp372 = *$tmp371;
*(&local34) = $tmp372;
panda$core$String** $tmp373 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp374 = *$tmp373;
// line 194
org$pandalanguage$pandac$Position $tmp375 = *(&local34);
return $tmp375;
block73:;
panda$core$Int64 $tmp376 = (panda$core$Int64) {36};
panda$core$Bit $tmp377 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp376);
bool $tmp378 = $tmp377.value;
if ($tmp378) goto block74; else goto block75;
block74:;
org$pandalanguage$pandac$Position* $tmp379 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp380 = *$tmp379;
*(&local35) = $tmp380;
org$pandalanguage$pandac$ASTNode** $tmp381 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp382 = *$tmp381;
// line 197
org$pandalanguage$pandac$Position $tmp383 = *(&local35);
return $tmp383;
block75:;
panda$core$Int64 $tmp384 = (panda$core$Int64) {37};
panda$core$Bit $tmp385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp384);
bool $tmp386 = $tmp385.value;
if ($tmp386) goto block76; else goto block77;
block76:;
org$pandalanguage$pandac$Position* $tmp387 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp388 = *$tmp387;
*(&local36) = $tmp388;
// line 200
org$pandalanguage$pandac$Position $tmp389 = *(&local36);
return $tmp389;
block77:;
panda$core$Int64 $tmp390 = (panda$core$Int64) {38};
panda$core$Bit $tmp391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp390);
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block78; else goto block79;
block78:;
org$pandalanguage$pandac$Position* $tmp393 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp394 = *$tmp393;
*(&local37) = $tmp394;
panda$core$String** $tmp395 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp396 = *$tmp395;
// line 203
org$pandalanguage$pandac$Position $tmp397 = *(&local37);
return $tmp397;
block79:;
panda$core$Int64 $tmp398 = (panda$core$Int64) {39};
panda$core$Bit $tmp399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp398);
bool $tmp400 = $tmp399.value;
if ($tmp400) goto block80; else goto block81;
block80:;
org$pandalanguage$pandac$Position* $tmp401 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp402 = *$tmp401;
*(&local38) = $tmp402;
// line 206
org$pandalanguage$pandac$Position $tmp403 = *(&local38);
return $tmp403;
block81:;
panda$core$Int64 $tmp404 = (panda$core$Int64) {40};
panda$core$Bit $tmp405 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp404);
bool $tmp406 = $tmp405.value;
if ($tmp406) goto block82; else goto block83;
block82:;
org$pandalanguage$pandac$Position* $tmp407 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp408 = *$tmp407;
*(&local39) = $tmp408;
panda$collections$ImmutableArray** $tmp409 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp410 = *$tmp409;
// line 209
org$pandalanguage$pandac$Position $tmp411 = *(&local39);
return $tmp411;
block83:;
panda$core$Int64 $tmp412 = (panda$core$Int64) {41};
panda$core$Bit $tmp413 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp412);
bool $tmp414 = $tmp413.value;
if ($tmp414) goto block84; else goto block85;
block84:;
org$pandalanguage$pandac$Position* $tmp415 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp416 = *$tmp415;
*(&local40) = $tmp416;
panda$collections$ImmutableArray** $tmp417 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp418 = *$tmp417;
// line 212
org$pandalanguage$pandac$Position $tmp419 = *(&local40);
return $tmp419;
block85:;
panda$core$Int64 $tmp420 = (panda$core$Int64) {42};
panda$core$Bit $tmp421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp420);
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block86; else goto block87;
block86:;
org$pandalanguage$pandac$Position* $tmp423 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp424 = *$tmp423;
*(&local41) = $tmp424;
panda$core$String** $tmp425 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp426 = *$tmp425;
// line 215
org$pandalanguage$pandac$Position $tmp427 = *(&local41);
return $tmp427;
block87:;
panda$core$Int64 $tmp428 = (panda$core$Int64) {44};
panda$core$Bit $tmp429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp428);
bool $tmp430 = $tmp429.value;
if ($tmp430) goto block88; else goto block89;
block88:;
org$pandalanguage$pandac$Position* $tmp431 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp432 = *$tmp431;
*(&local42) = $tmp432;
panda$core$String** $tmp433 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp434 = *$tmp433;
org$pandalanguage$pandac$ASTNode** $tmp435 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp436 = *$tmp435;
// line 218
org$pandalanguage$pandac$Position $tmp437 = *(&local42);
return $tmp437;
block89:;
panda$core$Int64 $tmp438 = (panda$core$Int64) {43};
panda$core$Bit $tmp439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp438);
bool $tmp440 = $tmp439.value;
if ($tmp440) goto block90; else goto block91;
block90:;
org$pandalanguage$pandac$Position* $tmp441 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp442 = *$tmp441;
*(&local43) = $tmp442;
panda$collections$ImmutableArray** $tmp443 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp444 = *$tmp443;
org$pandalanguage$pandac$ASTNode** $tmp445 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp446 = *$tmp445;
// line 221
org$pandalanguage$pandac$Position $tmp447 = *(&local43);
return $tmp447;
block91:;
panda$core$Int64 $tmp448 = (panda$core$Int64) {45};
panda$core$Bit $tmp449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp448);
bool $tmp450 = $tmp449.value;
if ($tmp450) goto block92; else goto block93;
block92:;
org$pandalanguage$pandac$Position* $tmp451 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp452 = *$tmp451;
*(&local44) = $tmp452;
panda$collections$ImmutableArray** $tmp453 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp454 = *$tmp453;
org$pandalanguage$pandac$ASTNode** $tmp455 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp456 = *$tmp455;
// line 224
org$pandalanguage$pandac$Position $tmp457 = *(&local44);
return $tmp457;
block93:;
panda$core$Int64 $tmp458 = (panda$core$Int64) {46};
panda$core$Bit $tmp459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp458);
bool $tmp460 = $tmp459.value;
if ($tmp460) goto block94; else goto block95;
block94:;
org$pandalanguage$pandac$Position* $tmp461 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp462 = *$tmp461;
*(&local45) = $tmp462;
panda$core$String** $tmp463 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp464 = *$tmp463;
// line 227
org$pandalanguage$pandac$Position $tmp465 = *(&local45);
return $tmp465;
block95:;
panda$core$Int64 $tmp466 = (panda$core$Int64) {47};
panda$core$Bit $tmp467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp466);
bool $tmp468 = $tmp467.value;
if ($tmp468) goto block96; else goto block97;
block96:;
org$pandalanguage$pandac$Position* $tmp469 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp470 = *$tmp469;
*(&local46) = $tmp470;
org$pandalanguage$pandac$Variable$Kind* $tmp471 = (org$pandalanguage$pandac$Variable$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$Variable$Kind $tmp472 = *$tmp471;
panda$collections$ImmutableArray** $tmp473 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp474 = *$tmp473;
// line 230
org$pandalanguage$pandac$Position $tmp475 = *(&local46);
return $tmp475;
block97:;
panda$core$Int64 $tmp476 = (panda$core$Int64) {48};
panda$core$Bit $tmp477 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp476);
bool $tmp478 = $tmp477.value;
if ($tmp478) goto block98; else goto block99;
block98:;
org$pandalanguage$pandac$Position* $tmp479 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp480 = *$tmp479;
*(&local47) = $tmp480;
panda$collections$ImmutableArray** $tmp481 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp482 = *$tmp481;
panda$collections$ImmutableArray** $tmp483 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp484 = *$tmp483;
// line 233
org$pandalanguage$pandac$Position $tmp485 = *(&local47);
return $tmp485;
block99:;
panda$core$Int64 $tmp486 = (panda$core$Int64) {49};
panda$core$Bit $tmp487 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp486);
bool $tmp488 = $tmp487.value;
if ($tmp488) goto block100; else goto block101;
block100:;
org$pandalanguage$pandac$Position* $tmp489 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp490 = *$tmp489;
*(&local48) = $tmp490;
panda$core$String** $tmp491 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp492 = *$tmp491;
org$pandalanguage$pandac$ASTNode** $tmp493 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp494 = *$tmp493;
panda$collections$ImmutableArray** $tmp495 = (panda$collections$ImmutableArray**) (param0->$data + 32);
panda$collections$ImmutableArray* $tmp496 = *$tmp495;
// line 236
org$pandalanguage$pandac$Position $tmp497 = *(&local48);
return $tmp497;
block101:;
// line 239
panda$core$Bit $tmp498 = panda$core$Bit$init$builtin_bit(false);
bool $tmp499 = $tmp498.value;
if ($tmp499) goto block102; else goto block103;
block103:;
panda$core$Int64 $tmp500 = (panda$core$Int64) {239};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s501, $tmp500);
abort(); // unreachable
block102:;
goto block1;
block1:;
panda$core$Bit $tmp502 = panda$core$Bit$init$builtin_bit(false);
bool $tmp503 = $tmp502.value;
if ($tmp503) goto block104; else goto block105;
block105:;
panda$core$Int64 $tmp504 = (panda$core$Int64) {86};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s505, $tmp504, &$s506);
abort(); // unreachable
block104:;
abort(); // unreachable

}
panda$core$String* org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(org$pandalanguage$pandac$ASTNode* param0) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$ASTNode* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
org$pandalanguage$pandac$parser$Token$Kind local6;
org$pandalanguage$pandac$ASTNode* local7 = NULL;
panda$core$Bit local8;
panda$collections$ImmutableArray* local9 = NULL;
panda$core$MutableString* local10 = NULL;
org$pandalanguage$pandac$ASTNode* local11 = NULL;
panda$core$String* local12 = NULL;
org$pandalanguage$pandac$ASTNode* local13 = NULL;
panda$collections$ImmutableArray* local14 = NULL;
org$pandalanguage$pandac$ASTNode* local15 = NULL;
panda$core$String* local16 = NULL;
panda$collections$ImmutableArray* local17 = NULL;
panda$core$MutableString* local18 = NULL;
org$pandalanguage$pandac$ASTNode* local19 = NULL;
org$pandalanguage$pandac$ChoiceCase* local20 = NULL;
panda$core$Int64 local21;
org$pandalanguage$pandac$ASTNode* local22 = NULL;
panda$collections$ImmutableArray* local23 = NULL;
org$pandalanguage$pandac$ClassDecl$Kind local24;
panda$core$String* local25 = NULL;
panda$collections$ImmutableArray* local26 = NULL;
panda$collections$ImmutableArray* local27 = NULL;
panda$collections$ImmutableArray* local28 = NULL;
panda$core$MutableString* local29 = NULL;
org$pandalanguage$pandac$ASTNode* local30 = NULL;
org$pandalanguage$pandac$ASTNode* local31 = NULL;
panda$core$String* local32 = NULL;
org$pandalanguage$pandac$ASTNode* local33 = NULL;
org$pandalanguage$pandac$ASTNode* local34 = NULL;
panda$core$String* local35 = NULL;
panda$collections$ImmutableArray* local36 = NULL;
org$pandalanguage$pandac$ASTNode* local37 = NULL;
panda$core$MutableString* local38 = NULL;
org$pandalanguage$pandac$ASTNode* local39 = NULL;
org$pandalanguage$pandac$ASTNode* local40 = NULL;
panda$core$String* local41 = NULL;
org$pandalanguage$pandac$ASTNode* local42 = NULL;
panda$collections$ImmutableArray* local43 = NULL;
org$pandalanguage$pandac$ASTNode* local44 = NULL;
panda$core$MutableString* local45 = NULL;
org$pandalanguage$pandac$ASTNode* local46 = NULL;
panda$collections$ImmutableArray* local47 = NULL;
panda$core$MutableString* local48 = NULL;
org$pandalanguage$pandac$ASTNode* local49 = NULL;
panda$core$String* local50 = NULL;
org$pandalanguage$pandac$ASTNode* local51 = NULL;
org$pandalanguage$pandac$ASTNode* local52 = NULL;
panda$collections$ImmutableArray* local53 = NULL;
panda$core$MutableString* local54 = NULL;
org$pandalanguage$pandac$ASTNode* local55 = NULL;
panda$core$String* local56 = NULL;
panda$collections$ImmutableArray* local57 = NULL;
panda$core$String* local58 = NULL;
org$pandalanguage$pandac$ASTNode* local59 = NULL;
panda$collections$ImmutableArray* local60 = NULL;
org$pandalanguage$pandac$ASTNode* local61 = NULL;
panda$core$MutableString* local62 = NULL;
org$pandalanguage$pandac$ASTNode* local63 = NULL;
panda$core$UInt64 local64;
org$pandalanguage$pandac$IR$Value* local65 = NULL;
panda$core$String* local66 = NULL;
panda$collections$ImmutableArray* local67 = NULL;
panda$core$MutableString* local68 = NULL;
org$pandalanguage$pandac$ASTNode* local69 = NULL;
org$pandalanguage$pandac$ASTNode* local70 = NULL;
panda$collections$ImmutableArray* local71 = NULL;
panda$collections$ImmutableArray* local72 = NULL;
panda$core$MutableString* local73 = NULL;
org$pandalanguage$pandac$ASTNode* local74 = NULL;
org$pandalanguage$pandac$ASTNode* local75 = NULL;
panda$collections$ImmutableArray* local76 = NULL;
org$pandalanguage$pandac$MethodDecl$Kind local77;
panda$core$String* local78 = NULL;
panda$collections$ImmutableArray* local79 = NULL;
panda$collections$ImmutableArray* local80 = NULL;
org$pandalanguage$pandac$ASTNode* local81 = NULL;
panda$collections$ImmutableArray* local82 = NULL;
panda$core$MutableString* local83 = NULL;
org$pandalanguage$pandac$ASTNode* local84 = NULL;
org$pandalanguage$pandac$ASTNode* local85 = NULL;
org$pandalanguage$pandac$parser$Token$Kind local86;
panda$collections$ImmutableArray* local87 = NULL;
org$pandalanguage$pandac$ASTNode* local88 = NULL;
panda$core$String* local89 = NULL;
panda$core$String* local90 = NULL;
org$pandalanguage$pandac$ASTNode* local91 = NULL;
panda$core$String* local92 = NULL;
panda$core$String* local93 = NULL;
org$pandalanguage$pandac$ASTNode* local94 = NULL;
org$pandalanguage$pandac$parser$Token$Kind local95;
org$pandalanguage$pandac$ASTNode* local96 = NULL;
org$pandalanguage$pandac$ASTNode* local97 = NULL;
panda$core$Bit local98;
org$pandalanguage$pandac$ASTNode* local99 = NULL;
org$pandalanguage$pandac$ASTNode* local100 = NULL;
panda$core$MutableString* local101 = NULL;
panda$core$Real64 local102;
panda$core$String* local103 = NULL;
org$pandalanguage$pandac$ASTNode* local104 = NULL;
panda$core$String* local105 = NULL;
panda$collections$ImmutableArray* local106 = NULL;
panda$collections$ImmutableArray* local107 = NULL;
panda$core$String* local108 = NULL;
panda$core$String* local109 = NULL;
org$pandalanguage$pandac$ASTNode* local110 = NULL;
panda$collections$ImmutableArray* local111 = NULL;
org$pandalanguage$pandac$ASTNode* local112 = NULL;
panda$collections$ImmutableArray* local113 = NULL;
org$pandalanguage$pandac$ASTNode* local114 = NULL;
panda$core$String* local115 = NULL;
org$pandalanguage$pandac$Variable$Kind local116;
panda$collections$ImmutableArray* local117 = NULL;
panda$core$MutableString* local118 = NULL;
panda$collections$ImmutableArray* local119 = NULL;
panda$collections$ImmutableArray* local120 = NULL;
panda$core$MutableString* local121 = NULL;
panda$core$String* local122 = NULL;
org$pandalanguage$pandac$ASTNode* local123 = NULL;
org$pandalanguage$pandac$ASTNode* local124 = NULL;
panda$core$String* local125 = NULL;
org$pandalanguage$pandac$ASTNode* local126 = NULL;
panda$collections$ImmutableArray* local127 = NULL;
panda$core$MutableString* local128 = NULL;
org$pandalanguage$pandac$ASTNode* local129 = NULL;
// line 246
panda$core$Int64* $tmp507 = &param0->$rawValue;
panda$core$Int64 $tmp508 = *$tmp507;
panda$core$Int64 $tmp509 = (panda$core$Int64) {0};
panda$core$Bit $tmp510 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp509);
bool $tmp511 = $tmp510.value;
if ($tmp511) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp512 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp513 = *$tmp512;
panda$core$String** $tmp514 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp515 = *$tmp514;
*(&local0) = ((panda$core$String*) NULL);
panda$core$String* $tmp516 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp516));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp515));
*(&local0) = $tmp515;
panda$core$String** $tmp517 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp518 = *$tmp517;
org$pandalanguage$pandac$ASTNode** $tmp519 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp520 = *$tmp519;
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp521 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp521));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp520));
*(&local1) = $tmp520;
// line 248
org$pandalanguage$pandac$ASTNode* $tmp522 = *(&local1);
panda$core$Bit $tmp523 = panda$core$Bit$init$builtin_bit($tmp522 != NULL);
bool $tmp524 = $tmp523.value;
if ($tmp524) goto block4; else goto block5;
block4:;
// line 249
panda$core$String* $tmp525 = *(&local0);
panda$core$String* $tmp526 = panda$core$String$convert$R$panda$core$String($tmp525);
panda$core$String* $tmp527 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp526, &$s528);
org$pandalanguage$pandac$ASTNode* $tmp529 = *(&local1);
panda$core$String* $tmp530 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp527, ((panda$core$Object*) $tmp529));
panda$core$String* $tmp531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp530, &$s532);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp531));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp531));
// unreffing REF($42:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp530));
// unreffing REF($41:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp527));
// unreffing REF($38:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp526));
// unreffing REF($37:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp533 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp533));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp534 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp534));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return $tmp531;
block5:;
// line 251
panda$core$String* $tmp535 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp535));
org$pandalanguage$pandac$ASTNode* $tmp536 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp536));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp537 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp537));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return $tmp535;
block3:;
panda$core$Int64 $tmp538 = (panda$core$Int64) {1};
panda$core$Bit $tmp539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp538);
bool $tmp540 = $tmp539.value;
if ($tmp540) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$Position* $tmp541 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp542 = *$tmp541;
org$pandalanguage$pandac$ASTNode** $tmp543 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp544 = *$tmp543;
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp545 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp545));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp544));
*(&local2) = $tmp544;
org$pandalanguage$pandac$ASTNode** $tmp546 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp547 = *$tmp546;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp548 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp548));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp547));
*(&local3) = $tmp547;
// line 254
org$pandalanguage$pandac$ASTNode* $tmp549 = *(&local3);
panda$core$Bit $tmp550 = panda$core$Bit$init$builtin_bit($tmp549 == NULL);
bool $tmp551 = $tmp550.value;
if ($tmp551) goto block8; else goto block9;
block8:;
// line 255
org$pandalanguage$pandac$ASTNode* $tmp552 = *(&local2);
panda$core$String* $tmp553 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s554, ((panda$core$Object*) $tmp552));
panda$core$String* $tmp555 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp553, &$s556);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp555));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp555));
// unreffing REF($117:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp553));
// unreffing REF($116:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp557 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp557));
// unreffing msg
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp558 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp558));
// unreffing test
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp555;
block9:;
// line 257
org$pandalanguage$pandac$ASTNode* $tmp559 = *(&local2);
panda$core$String* $tmp560 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s561, ((panda$core$Object*) $tmp559));
panda$core$String* $tmp562 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp560, &$s563);
org$pandalanguage$pandac$ASTNode* $tmp564 = *(&local3);
panda$core$String* $tmp565 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp562, ((panda$core$Object*) $tmp564));
panda$core$String* $tmp566 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp565, &$s567);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp566));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp566));
// unreffing REF($145:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp565));
// unreffing REF($144:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp562));
// unreffing REF($141:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp560));
// unreffing REF($140:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp568 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp568));
// unreffing msg
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp569 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp569));
// unreffing test
*(&local2) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp566;
block7:;
panda$core$Int64 $tmp570 = (panda$core$Int64) {2};
panda$core$Bit $tmp571 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp570);
bool $tmp572 = $tmp571.value;
if ($tmp572) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Position* $tmp573 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp574 = *$tmp573;
org$pandalanguage$pandac$ASTNode** $tmp575 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp576 = *$tmp575;
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp577 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp577));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp576));
*(&local4) = $tmp576;
// line 260
org$pandalanguage$pandac$ASTNode* $tmp578 = *(&local4);
panda$core$String* $tmp579 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s580, ((panda$core$Object*) $tmp578));
panda$core$String* $tmp581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp579, &$s582);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp581));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp581));
// unreffing REF($190:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp579));
// unreffing REF($189:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp583 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp583));
// unreffing expr
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp581;
block11:;
panda$core$Int64 $tmp584 = (panda$core$Int64) {3};
panda$core$Bit $tmp585 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp584);
bool $tmp586 = $tmp585.value;
if ($tmp586) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Position* $tmp587 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp588 = *$tmp587;
// line 263
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s589));
return &$s590;
block13:;
panda$core$Int64 $tmp591 = (panda$core$Int64) {4};
panda$core$Bit $tmp592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp591);
bool $tmp593 = $tmp592.value;
if ($tmp593) goto block14; else goto block15;
block14:;
org$pandalanguage$pandac$Position* $tmp594 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp595 = *$tmp594;
org$pandalanguage$pandac$ASTNode** $tmp596 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp597 = *$tmp596;
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp598 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp598));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp597));
*(&local5) = $tmp597;
org$pandalanguage$pandac$parser$Token$Kind* $tmp599 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 24);
org$pandalanguage$pandac$parser$Token$Kind $tmp600 = *$tmp599;
*(&local6) = $tmp600;
org$pandalanguage$pandac$ASTNode** $tmp601 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp602 = *$tmp601;
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp603 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp603));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp602));
*(&local7) = $tmp602;
// line 266
org$pandalanguage$pandac$ASTNode* $tmp604 = *(&local5);
panda$core$String* $tmp605 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s606, ((panda$core$Object*) $tmp604));
panda$core$String* $tmp607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp605, &$s608);
org$pandalanguage$pandac$parser$Token$Kind $tmp609 = *(&local6);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp610;
$tmp610 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp610->value = $tmp609;
panda$core$String* $tmp611 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp607, ((panda$core$Object*) $tmp610));
panda$core$String* $tmp612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp611, &$s613);
org$pandalanguage$pandac$ASTNode* $tmp614 = *(&local7);
panda$core$String* $tmp615 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp612, ((panda$core$Object*) $tmp614));
panda$core$String* $tmp616 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp615, &$s617);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp616));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp616));
// unreffing REF($254:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp615));
// unreffing REF($253:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp612));
// unreffing REF($250:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp611));
// unreffing REF($249:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp610));
// unreffing REF($248:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp607));
// unreffing REF($246:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp605));
// unreffing REF($245:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp618 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp618));
// unreffing right
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp619 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp619));
// unreffing left
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp616;
block15:;
panda$core$Int64 $tmp620 = (panda$core$Int64) {5};
panda$core$Bit $tmp621 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp620);
bool $tmp622 = $tmp621.value;
if ($tmp622) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$Position* $tmp623 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp624 = *$tmp623;
panda$core$Bit* $tmp625 = (panda$core$Bit*) (param0->$data + 16);
panda$core$Bit $tmp626 = *$tmp625;
*(&local8) = $tmp626;
// line 269
panda$core$Bit $tmp627 = *(&local8);
panda$core$String* $tmp628 = panda$core$Bit$convert$R$panda$core$String($tmp627);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp628));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp628));
// unreffing REF($300:panda.core.String)
return $tmp628;
block17:;
panda$core$Int64 $tmp629 = (panda$core$Int64) {6};
panda$core$Bit $tmp630 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp629);
bool $tmp631 = $tmp630.value;
if ($tmp631) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$Position* $tmp632 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp633 = *$tmp632;
panda$collections$ImmutableArray** $tmp634 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp635 = *$tmp634;
*(&local9) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp636 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp636));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp635));
*(&local9) = $tmp635;
// line 272
panda$core$MutableString* $tmp637 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp637, &$s638);
*(&local10) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp639 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp639));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp637));
*(&local10) = $tmp637;
// line 273
panda$collections$ImmutableArray* $tmp640 = *(&local9);
ITable* $tmp641 = ((panda$collections$Iterable*) $tmp640)->$class->itable;
while ($tmp641->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp641 = $tmp641->next;
}
$fn643 $tmp642 = $tmp641->methods[0];
panda$collections$Iterator* $tmp644 = $tmp642(((panda$collections$Iterable*) $tmp640));
goto block20;
block20:;
ITable* $tmp645 = $tmp644->$class->itable;
while ($tmp645->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp645 = $tmp645->next;
}
$fn647 $tmp646 = $tmp645->methods[0];
panda$core$Bit $tmp648 = $tmp646($tmp644);
bool $tmp649 = $tmp648.value;
if ($tmp649) goto block22; else goto block21;
block21:;
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp650 = $tmp644->$class->itable;
while ($tmp650->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp650 = $tmp650->next;
}
$fn652 $tmp651 = $tmp650->methods[1];
panda$core$Object* $tmp653 = $tmp651($tmp644);
org$pandalanguage$pandac$ASTNode* $tmp654 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp654));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp653)));
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) $tmp653);
// line 274
panda$core$MutableString* $tmp655 = *(&local10);
org$pandalanguage$pandac$ASTNode* $tmp656 = *(&local11);
panda$core$String* $tmp657 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp656), &$s658);
panda$core$MutableString$append$panda$core$String($tmp655, $tmp657);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp657));
// unreffing REF($360:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp653);
// unreffing REF($348:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp659 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp659));
// unreffing s
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block20;
block22:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp644));
// unreffing REF($337:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 276
panda$core$MutableString* $tmp660 = *(&local10);
panda$core$MutableString$append$panda$core$String($tmp660, &$s661);
// line 277
panda$core$MutableString* $tmp662 = *(&local10);
panda$core$String* $tmp663 = panda$core$MutableString$finish$R$panda$core$String($tmp662);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp663));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp663));
// unreffing REF($382:panda.core.String)
panda$core$MutableString* $tmp664 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp664));
// unreffing result
*(&local10) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp637));
// unreffing REF($323:panda.core.MutableString)
panda$collections$ImmutableArray* $tmp665 = *(&local9);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp665));
// unreffing statements
*(&local9) = ((panda$collections$ImmutableArray*) NULL);
return $tmp663;
block19:;
panda$core$Int64 $tmp666 = (panda$core$Int64) {7};
panda$core$Bit $tmp667 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp666);
bool $tmp668 = $tmp667.value;
if ($tmp668) goto block23; else goto block24;
block23:;
org$pandalanguage$pandac$Position* $tmp669 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp670 = *$tmp669;
panda$core$String** $tmp671 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp672 = *$tmp671;
*(&local12) = ((panda$core$String*) NULL);
panda$core$String* $tmp673 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp673));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp672));
*(&local12) = $tmp672;
// line 280
panda$core$String* $tmp674 = *(&local12);
panda$core$Bit $tmp675 = panda$core$Bit$init$builtin_bit($tmp674 != NULL);
bool $tmp676 = $tmp675.value;
if ($tmp676) goto block25; else goto block26;
block25:;
// line 281
panda$core$String* $tmp677 = *(&local12);
panda$core$String* $tmp678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s679, $tmp677);
panda$core$String* $tmp680 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp678, &$s681);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp680));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp680));
// unreffing REF($427:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp678));
// unreffing REF($426:panda.core.String)
panda$core$String* $tmp682 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp682));
// unreffing label
*(&local12) = ((panda$core$String*) NULL);
return $tmp680;
block26:;
// line 283
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s683));
panda$core$String* $tmp684 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp684));
// unreffing label
*(&local12) = ((panda$core$String*) NULL);
return &$s685;
block24:;
panda$core$Int64 $tmp686 = (panda$core$Int64) {8};
panda$core$Bit $tmp687 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp686);
bool $tmp688 = $tmp687.value;
if ($tmp688) goto block27; else goto block28;
block27:;
org$pandalanguage$pandac$Position* $tmp689 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp690 = *$tmp689;
org$pandalanguage$pandac$ASTNode** $tmp691 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp692 = *$tmp691;
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp693 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp693));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp692));
*(&local13) = $tmp692;
panda$collections$ImmutableArray** $tmp694 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp695 = *$tmp694;
*(&local14) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp696 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp696));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp695));
*(&local14) = $tmp695;
// line 286
org$pandalanguage$pandac$ASTNode* $tmp697 = *(&local13);
$fn699 $tmp698 = ($fn699) $tmp697->$class->vtable[0];
panda$core$String* $tmp700 = $tmp698($tmp697);
panda$core$String* $tmp701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp700, &$s702);
panda$collections$ImmutableArray* $tmp703 = *(&local14);
ITable* $tmp704 = ((panda$collections$CollectionView*) $tmp703)->$class->itable;
while ($tmp704->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp704 = $tmp704->next;
}
$fn706 $tmp705 = $tmp704->methods[1];
panda$core$String* $tmp707 = $tmp705(((panda$collections$CollectionView*) $tmp703));
panda$core$String* $tmp708 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp701, $tmp707);
panda$core$String* $tmp709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp708, &$s710);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp709));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp709));
// unreffing REF($485:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp708));
// unreffing REF($484:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp707));
// unreffing REF($483:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp701));
// unreffing REF($479:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp700));
// unreffing REF($478:panda.core.String)
panda$collections$ImmutableArray* $tmp711 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp711));
// unreffing args
*(&local14) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp712 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp712));
// unreffing target
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp709;
block28:;
panda$core$Int64 $tmp713 = (panda$core$Int64) {9};
panda$core$Bit $tmp714 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp713);
bool $tmp715 = $tmp714.value;
if ($tmp715) goto block29; else goto block30;
block29:;
org$pandalanguage$pandac$Position* $tmp716 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp717 = *$tmp716;
org$pandalanguage$pandac$ASTNode** $tmp718 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp719 = *$tmp718;
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp720 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp720));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp719));
*(&local15) = $tmp719;
panda$core$String** $tmp721 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp722 = *$tmp721;
*(&local16) = ((panda$core$String*) NULL);
panda$core$String* $tmp723 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp723));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp722));
*(&local16) = $tmp722;
panda$collections$ImmutableArray** $tmp724 = (panda$collections$ImmutableArray**) (param0->$data + 32);
panda$collections$ImmutableArray* $tmp725 = *$tmp724;
*(&local17) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp726 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp726));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp725));
*(&local17) = $tmp725;
// line 289
panda$core$MutableString* $tmp727 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp727);
*(&local18) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp728 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp728));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp727));
*(&local18) = $tmp727;
// line 290
org$pandalanguage$pandac$ASTNode* $tmp729 = *(&local15);
panda$core$Bit $tmp730 = panda$core$Bit$init$builtin_bit($tmp729 != NULL);
bool $tmp731 = $tmp730.value;
if ($tmp731) goto block31; else goto block32;
block31:;
// line 291
panda$core$MutableString* $tmp732 = *(&local18);
org$pandalanguage$pandac$ASTNode* $tmp733 = *(&local15);
panda$core$String* $tmp734 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp733), &$s735);
panda$core$MutableString$append$panda$core$String($tmp732, $tmp734);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp734));
// unreffing REF($567:panda.core.String)
goto block32;
block32:;
// line 293
panda$core$MutableString* $tmp736 = *(&local18);
panda$core$String* $tmp737 = *(&local16);
panda$core$String* $tmp738 = panda$core$String$convert$R$panda$core$String($tmp737);
panda$core$String* $tmp739 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp738, &$s740);
panda$collections$ImmutableArray* $tmp741 = *(&local17);
ITable* $tmp742 = ((panda$collections$CollectionView*) $tmp741)->$class->itable;
while ($tmp742->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp742 = $tmp742->next;
}
$fn744 $tmp743 = $tmp742->methods[1];
panda$core$String* $tmp745 = $tmp743(((panda$collections$CollectionView*) $tmp741));
panda$core$String* $tmp746 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp739, $tmp745);
panda$core$String* $tmp747 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp746, &$s748);
panda$core$MutableString$append$panda$core$String($tmp736, $tmp747);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp747));
// unreffing REF($583:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp746));
// unreffing REF($582:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp745));
// unreffing REF($581:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp739));
// unreffing REF($577:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp738));
// unreffing REF($576:panda.core.String)
// line 294
panda$core$MutableString* $tmp749 = *(&local18);
panda$core$String* $tmp750 = panda$core$MutableString$finish$R$panda$core$String($tmp749);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp750));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp750));
// unreffing REF($602:panda.core.String)
panda$core$MutableString* $tmp751 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp751));
// unreffing result
*(&local18) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp727));
// unreffing REF($548:panda.core.MutableString)
panda$collections$ImmutableArray* $tmp752 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp752));
// unreffing fields
*(&local17) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp753 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp753));
// unreffing name
*(&local16) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp754 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp754));
// unreffing dc
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp750;
block30:;
panda$core$Int64 $tmp755 = (panda$core$Int64) {10};
panda$core$Bit $tmp756 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp755);
bool $tmp757 = $tmp756.value;
if ($tmp757) goto block33; else goto block34;
block33:;
org$pandalanguage$pandac$Position* $tmp758 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp759 = *$tmp758;
org$pandalanguage$pandac$ASTNode** $tmp760 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp761 = *$tmp760;
*(&local19) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp762 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp762));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp761));
*(&local19) = $tmp761;
org$pandalanguage$pandac$ChoiceCase** $tmp763 = (org$pandalanguage$pandac$ChoiceCase**) (param0->$data + 24);
org$pandalanguage$pandac$ChoiceCase* $tmp764 = *$tmp763;
*(&local20) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
org$pandalanguage$pandac$ChoiceCase* $tmp765 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp765));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp764));
*(&local20) = $tmp764;
panda$core$Int64* $tmp766 = (panda$core$Int64*) (param0->$data + 32);
panda$core$Int64 $tmp767 = *$tmp766;
*(&local21) = $tmp767;
// line 297
org$pandalanguage$pandac$ASTNode* $tmp768 = *(&local19);
$fn770 $tmp769 = ($fn770) $tmp768->$class->vtable[0];
panda$core$String* $tmp771 = $tmp769($tmp768);
panda$core$String* $tmp772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp771, &$s773);
org$pandalanguage$pandac$ChoiceCase* $tmp774 = *(&local20);
panda$core$String* $tmp775 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp772, ((panda$core$Object*) $tmp774));
panda$core$String* $tmp776 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp775, &$s777);
panda$core$Int64 $tmp778 = *(&local21);
panda$core$Int64$wrapper* $tmp779;
$tmp779 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp779->value = $tmp778;
panda$core$String* $tmp780 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp776, ((panda$core$Object*) $tmp779));
panda$core$String* $tmp781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp780, &$s782);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp781));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp781));
// unreffing REF($671:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp780));
// unreffing REF($670:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp779));
// unreffing REF($669:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp776));
// unreffing REF($667:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp775));
// unreffing REF($666:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp772));
// unreffing REF($663:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp771));
// unreffing REF($662:panda.core.String)
org$pandalanguage$pandac$ChoiceCase* $tmp783 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp783));
// unreffing ce
*(&local20) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp784 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp784));
// unreffing base
*(&local19) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp781;
block34:;
panda$core$Int64 $tmp785 = (panda$core$Int64) {11};
panda$core$Bit $tmp786 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp785);
bool $tmp787 = $tmp786.value;
if ($tmp787) goto block35; else goto block36;
block35:;
org$pandalanguage$pandac$Position* $tmp788 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp789 = *$tmp788;
org$pandalanguage$pandac$ASTNode** $tmp790 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp791 = *$tmp790;
*(&local22) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp792 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp792));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp791));
*(&local22) = $tmp791;
panda$collections$ImmutableArray** $tmp793 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp794 = *$tmp793;
*(&local23) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp795 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp795));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp794));
*(&local23) = $tmp794;
org$pandalanguage$pandac$ClassDecl$Kind* $tmp796 = (org$pandalanguage$pandac$ClassDecl$Kind*) (param0->$data + 32);
org$pandalanguage$pandac$ClassDecl$Kind $tmp797 = *$tmp796;
*(&local24) = $tmp797;
panda$core$String** $tmp798 = (panda$core$String**) (param0->$data + 40);
panda$core$String* $tmp799 = *$tmp798;
*(&local25) = ((panda$core$String*) NULL);
panda$core$String* $tmp800 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp800));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp799));
*(&local25) = $tmp799;
panda$collections$ImmutableArray** $tmp801 = (panda$collections$ImmutableArray**) (param0->$data + 48);
panda$collections$ImmutableArray* $tmp802 = *$tmp801;
*(&local26) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp803 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp803));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp802));
*(&local26) = $tmp802;
panda$collections$ImmutableArray** $tmp804 = (panda$collections$ImmutableArray**) (param0->$data + 56);
panda$collections$ImmutableArray* $tmp805 = *$tmp804;
*(&local27) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp806 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp806));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp805));
*(&local27) = $tmp805;
panda$collections$ImmutableArray** $tmp807 = (panda$collections$ImmutableArray**) (param0->$data + 64);
panda$collections$ImmutableArray* $tmp808 = *$tmp807;
*(&local28) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp809 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp809));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp808));
*(&local28) = $tmp808;
// line 300
panda$core$MutableString* $tmp810 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp810);
*(&local29) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp811 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp811));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp810));
*(&local29) = $tmp810;
// line 301
org$pandalanguage$pandac$ASTNode* $tmp812 = *(&local22);
panda$core$Bit $tmp813 = panda$core$Bit$init$builtin_bit($tmp812 != NULL);
bool $tmp814 = $tmp813.value;
if ($tmp814) goto block37; else goto block38;
block37:;
// line 302
panda$core$MutableString* $tmp815 = *(&local29);
org$pandalanguage$pandac$ASTNode* $tmp816 = *(&local22);
panda$core$String* $tmp817 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp816), &$s818);
panda$core$MutableString$append$panda$core$String($tmp815, $tmp817);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp817));
// unreffing REF($789:panda.core.String)
goto block38;
block38:;
// line 304
panda$collections$ImmutableArray* $tmp819 = *(&local23);
ITable* $tmp820 = ((panda$collections$Iterable*) $tmp819)->$class->itable;
while ($tmp820->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp820 = $tmp820->next;
}
$fn822 $tmp821 = $tmp820->methods[0];
panda$collections$Iterator* $tmp823 = $tmp821(((panda$collections$Iterable*) $tmp819));
goto block39;
block39:;
ITable* $tmp824 = $tmp823->$class->itable;
while ($tmp824->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp824 = $tmp824->next;
}
$fn826 $tmp825 = $tmp824->methods[0];
panda$core$Bit $tmp827 = $tmp825($tmp823);
bool $tmp828 = $tmp827.value;
if ($tmp828) goto block41; else goto block40;
block40:;
*(&local30) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp829 = $tmp823->$class->itable;
while ($tmp829->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp829 = $tmp829->next;
}
$fn831 $tmp830 = $tmp829->methods[1];
panda$core$Object* $tmp832 = $tmp830($tmp823);
org$pandalanguage$pandac$ASTNode* $tmp833 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp833));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp832)));
*(&local30) = ((org$pandalanguage$pandac$ASTNode*) $tmp832);
// line 305
panda$core$MutableString* $tmp834 = *(&local29);
org$pandalanguage$pandac$ASTNode* $tmp835 = *(&local30);
panda$core$String* $tmp836 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp835), &$s837);
panda$core$MutableString$append$panda$core$String($tmp834, $tmp836);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp836));
// unreffing REF($823:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp832);
// unreffing REF($811:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp838 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp838));
// unreffing a
*(&local30) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block39;
block41:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp823));
// unreffing REF($800:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 307
org$pandalanguage$pandac$ClassDecl$Kind $tmp839 = *(&local24);
panda$core$Int64 $tmp840 = $tmp839.$rawValue;
panda$core$Int64 $tmp841 = (panda$core$Int64) {0};
panda$core$Bit $tmp842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp840, $tmp841);
bool $tmp843 = $tmp842.value;
if ($tmp843) goto block43; else goto block44;
block43:;
// line 308
panda$core$MutableString* $tmp844 = *(&local29);
panda$core$MutableString$append$panda$core$String($tmp844, &$s845);
goto block42;
block44:;
panda$core$Int64 $tmp846 = (panda$core$Int64) {1};
panda$core$Bit $tmp847 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp840, $tmp846);
bool $tmp848 = $tmp847.value;
if ($tmp848) goto block45; else goto block46;
block45:;
// line 309
panda$core$MutableString* $tmp849 = *(&local29);
panda$core$MutableString$append$panda$core$String($tmp849, &$s850);
goto block42;
block46:;
panda$core$Int64 $tmp851 = (panda$core$Int64) {2};
panda$core$Bit $tmp852 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp840, $tmp851);
bool $tmp853 = $tmp852.value;
if ($tmp853) goto block47; else goto block42;
block47:;
// line 310
panda$core$MutableString* $tmp854 = *(&local29);
panda$core$MutableString$append$panda$core$String($tmp854, &$s855);
goto block42;
block42:;
// line 312
panda$core$MutableString* $tmp856 = *(&local29);
panda$core$String* $tmp857 = *(&local25);
panda$core$MutableString$append$panda$core$String($tmp856, $tmp857);
// line 313
panda$collections$ImmutableArray* $tmp858 = *(&local26);
panda$core$Bit $tmp859 = panda$core$Bit$init$builtin_bit($tmp858 != NULL);
bool $tmp860 = $tmp859.value;
if ($tmp860) goto block48; else goto block49;
block48:;
// line 314
panda$core$MutableString* $tmp861 = *(&local29);
panda$collections$ImmutableArray* $tmp862 = *(&local26);
ITable* $tmp863 = ((panda$collections$CollectionView*) $tmp862)->$class->itable;
while ($tmp863->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp863 = $tmp863->next;
}
$fn865 $tmp864 = $tmp863->methods[1];
panda$core$String* $tmp866 = $tmp864(((panda$collections$CollectionView*) $tmp862));
panda$core$String* $tmp867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s868, $tmp866);
panda$core$String* $tmp869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp867, &$s870);
panda$core$MutableString$append$panda$core$String($tmp861, $tmp869);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp869));
// unreffing REF($884:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp867));
// unreffing REF($883:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp866));
// unreffing REF($882:panda.core.String)
goto block49;
block49:;
// line 316
panda$collections$ImmutableArray* $tmp871 = *(&local27);
panda$core$Bit $tmp872 = panda$core$Bit$init$builtin_bit($tmp871 != NULL);
bool $tmp873 = $tmp872.value;
if ($tmp873) goto block50; else goto block51;
block50:;
// line 317
panda$core$MutableString* $tmp874 = *(&local29);
panda$collections$ImmutableArray* $tmp875 = *(&local27);
ITable* $tmp876 = ((panda$collections$CollectionView*) $tmp875)->$class->itable;
while ($tmp876->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp876 = $tmp876->next;
}
$fn878 $tmp877 = $tmp876->methods[1];
panda$core$String* $tmp879 = $tmp877(((panda$collections$CollectionView*) $tmp875));
panda$core$String* $tmp880 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s881, $tmp879);
panda$core$String* $tmp882 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp880, &$s883);
panda$core$MutableString$append$panda$core$String($tmp874, $tmp882);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp882));
// unreffing REF($909:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp880));
// unreffing REF($908:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp879));
// unreffing REF($907:panda.core.String)
goto block51;
block51:;
// line 319
panda$core$MutableString* $tmp884 = *(&local29);
panda$core$MutableString$append$panda$core$String($tmp884, &$s885);
// line 320
panda$collections$ImmutableArray* $tmp886 = *(&local28);
ITable* $tmp887 = ((panda$collections$Iterable*) $tmp886)->$class->itable;
while ($tmp887->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp887 = $tmp887->next;
}
$fn889 $tmp888 = $tmp887->methods[0];
panda$collections$Iterator* $tmp890 = $tmp888(((panda$collections$Iterable*) $tmp886));
goto block52;
block52:;
ITable* $tmp891 = $tmp890->$class->itable;
while ($tmp891->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp891 = $tmp891->next;
}
$fn893 $tmp892 = $tmp891->methods[0];
panda$core$Bit $tmp894 = $tmp892($tmp890);
bool $tmp895 = $tmp894.value;
if ($tmp895) goto block54; else goto block53;
block53:;
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp896 = $tmp890->$class->itable;
while ($tmp896->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp896 = $tmp896->next;
}
$fn898 $tmp897 = $tmp896->methods[1];
panda$core$Object* $tmp899 = $tmp897($tmp890);
org$pandalanguage$pandac$ASTNode* $tmp900 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp900));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp899)));
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) $tmp899);
// line 321
panda$core$MutableString* $tmp901 = *(&local29);
org$pandalanguage$pandac$ASTNode* $tmp902 = *(&local31);
panda$core$String* $tmp903 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp902), &$s904);
panda$core$MutableString$append$panda$core$String($tmp901, $tmp903);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp903));
// unreffing REF($952:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp899);
// unreffing REF($940:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp905 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp905));
// unreffing m
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block52;
block54:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp890));
// unreffing REF($929:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 323
panda$core$MutableString* $tmp906 = *(&local29);
panda$core$MutableString$append$panda$core$String($tmp906, &$s907);
// line 324
panda$core$MutableString* $tmp908 = *(&local29);
panda$core$String* $tmp909 = panda$core$MutableString$finish$R$panda$core$String($tmp908);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp909));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp909));
// unreffing REF($974:panda.core.String)
panda$core$MutableString* $tmp910 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp910));
// unreffing result
*(&local29) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp810));
// unreffing REF($770:panda.core.MutableString)
panda$collections$ImmutableArray* $tmp911 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp911));
// unreffing members
*(&local28) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp912 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp912));
// unreffing supertypes
*(&local27) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp913 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp913));
// unreffing generics
*(&local26) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp914 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp914));
// unreffing name
*(&local25) = ((panda$core$String*) NULL);
panda$collections$ImmutableArray* $tmp915 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp915));
// unreffing annotations
*(&local23) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp916 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp916));
// unreffing dc
*(&local22) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp909;
block36:;
panda$core$Int64 $tmp917 = (panda$core$Int64) {12};
panda$core$Bit $tmp918 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp917);
bool $tmp919 = $tmp918.value;
if ($tmp919) goto block55; else goto block56;
block55:;
org$pandalanguage$pandac$Position* $tmp920 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp921 = *$tmp920;
panda$core$String** $tmp922 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp923 = *$tmp922;
*(&local32) = ((panda$core$String*) NULL);
panda$core$String* $tmp924 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp924));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp923));
*(&local32) = $tmp923;
// line 327
panda$core$String* $tmp925 = *(&local32);
panda$core$Bit $tmp926 = panda$core$Bit$init$builtin_bit($tmp925 != NULL);
bool $tmp927 = $tmp926.value;
if ($tmp927) goto block57; else goto block58;
block57:;
// line 328
panda$core$String* $tmp928 = *(&local32);
panda$core$String* $tmp929 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s930, $tmp928);
panda$core$String* $tmp931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp929, &$s932);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp931));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp931));
// unreffing REF($1044:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp929));
// unreffing REF($1043:panda.core.String)
panda$core$String* $tmp933 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp933));
// unreffing label
*(&local32) = ((panda$core$String*) NULL);
return $tmp931;
block58:;
// line 330
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s934));
panda$core$String* $tmp935 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp935));
// unreffing label
*(&local32) = ((panda$core$String*) NULL);
return &$s936;
block56:;
panda$core$Int64 $tmp937 = (panda$core$Int64) {13};
panda$core$Bit $tmp938 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp937);
bool $tmp939 = $tmp938.value;
if ($tmp939) goto block59; else goto block60;
block59:;
org$pandalanguage$pandac$Position* $tmp940 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp941 = *$tmp940;
org$pandalanguage$pandac$ASTNode** $tmp942 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp943 = *$tmp942;
*(&local33) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp944 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp944));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp943));
*(&local33) = $tmp943;
org$pandalanguage$pandac$ASTNode** $tmp945 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp946 = *$tmp945;
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp947 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp947));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp946));
*(&local34) = $tmp946;
// line 333
org$pandalanguage$pandac$ASTNode* $tmp948 = *(&local34);
panda$core$Bit $tmp949 = panda$core$Bit$init$builtin_bit($tmp948 != NULL);
bool $tmp950 = $tmp949.value;
if ($tmp950) goto block61; else goto block62;
block61:;
// line 334
org$pandalanguage$pandac$ASTNode* $tmp951 = *(&local33);
$fn953 $tmp952 = ($fn953) $tmp951->$class->vtable[0];
panda$core$String* $tmp954 = $tmp952($tmp951);
panda$core$String* $tmp955 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp954, &$s956);
org$pandalanguage$pandac$ASTNode* $tmp957 = *(&local34);
panda$core$String* $tmp958 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp955, ((panda$core$Object*) $tmp957));
panda$core$String* $tmp959 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp958, &$s960);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp959));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp959));
// unreffing REF($1106:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp958));
// unreffing REF($1105:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp955));
// unreffing REF($1102:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp954));
// unreffing REF($1101:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp961 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp961));
// unreffing value
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp962 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp962));
// unreffing target
*(&local33) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp959;
block62:;
// line 336
org$pandalanguage$pandac$ASTNode* $tmp963 = *(&local33);
$fn965 $tmp964 = ($fn965) $tmp963->$class->vtable[0];
panda$core$String* $tmp966 = $tmp964($tmp963);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp966));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp966));
// unreffing REF($1135:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp967 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp967));
// unreffing value
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp968 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp968));
// unreffing target
*(&local33) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp966;
block60:;
panda$core$Int64 $tmp969 = (panda$core$Int64) {14};
panda$core$Bit $tmp970 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp969);
bool $tmp971 = $tmp970.value;
if ($tmp971) goto block63; else goto block64;
block63:;
org$pandalanguage$pandac$Position* $tmp972 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp973 = *$tmp972;
panda$core$String** $tmp974 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp975 = *$tmp974;
*(&local35) = ((panda$core$String*) NULL);
panda$core$String* $tmp976 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp976));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp975));
*(&local35) = $tmp975;
panda$collections$ImmutableArray** $tmp977 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp978 = *$tmp977;
*(&local36) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp979 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp979));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp978));
*(&local36) = $tmp978;
org$pandalanguage$pandac$ASTNode** $tmp980 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp981 = *$tmp980;
*(&local37) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp982 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp982));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp981));
*(&local37) = $tmp981;
// line 339
panda$core$MutableString* $tmp983 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp983);
*(&local38) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp984 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp984));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp983));
*(&local38) = $tmp983;
// line 340
panda$core$String* $tmp985 = *(&local35);
panda$core$Bit $tmp986 = panda$core$Bit$init$builtin_bit($tmp985 != NULL);
bool $tmp987 = $tmp986.value;
if ($tmp987) goto block65; else goto block66;
block65:;
// line 341
panda$core$MutableString* $tmp988 = *(&local38);
panda$core$String* $tmp989 = *(&local35);
panda$core$String* $tmp990 = panda$core$String$convert$R$panda$core$String($tmp989);
panda$core$String* $tmp991 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp990, &$s992);
panda$core$MutableString$append$panda$core$String($tmp988, $tmp991);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp991));
// unreffing REF($1206:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp990));
// unreffing REF($1205:panda.core.String)
goto block66;
block66:;
// line 343
panda$core$MutableString* $tmp993 = *(&local38);
panda$core$MutableString$append$panda$core$String($tmp993, &$s994);
// line 344
panda$collections$ImmutableArray* $tmp995 = *(&local36);
ITable* $tmp996 = ((panda$collections$Iterable*) $tmp995)->$class->itable;
while ($tmp996->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp996 = $tmp996->next;
}
$fn998 $tmp997 = $tmp996->methods[0];
panda$collections$Iterator* $tmp999 = $tmp997(((panda$collections$Iterable*) $tmp995));
goto block67;
block67:;
ITable* $tmp1000 = $tmp999->$class->itable;
while ($tmp1000->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1000 = $tmp1000->next;
}
$fn1002 $tmp1001 = $tmp1000->methods[0];
panda$core$Bit $tmp1003 = $tmp1001($tmp999);
bool $tmp1004 = $tmp1003.value;
if ($tmp1004) goto block69; else goto block68;
block68:;
*(&local39) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1005 = $tmp999->$class->itable;
while ($tmp1005->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1005 = $tmp1005->next;
}
$fn1007 $tmp1006 = $tmp1005->methods[1];
panda$core$Object* $tmp1008 = $tmp1006($tmp999);
org$pandalanguage$pandac$ASTNode* $tmp1009 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1009));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1008)));
*(&local39) = ((org$pandalanguage$pandac$ASTNode*) $tmp1008);
// line 345
panda$core$MutableString* $tmp1010 = *(&local38);
org$pandalanguage$pandac$ASTNode* $tmp1011 = *(&local39);
panda$core$String* $tmp1012 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1011), &$s1013);
panda$core$MutableString$append$panda$core$String($tmp1010, $tmp1012);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1012));
// unreffing REF($1246:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1008);
// unreffing REF($1234:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1014 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1014));
// unreffing s
*(&local39) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block67;
block69:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp999));
// unreffing REF($1223:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 347
panda$core$MutableString* $tmp1015 = *(&local38);
org$pandalanguage$pandac$ASTNode* $tmp1016 = *(&local37);
panda$core$String* $tmp1017 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1018, ((panda$core$Object*) $tmp1016));
panda$core$String* $tmp1019 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1017, &$s1020);
panda$core$MutableString$append$panda$core$String($tmp1015, $tmp1019);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1019));
// unreffing REF($1268:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1017));
// unreffing REF($1267:panda.core.String)
// line 348
panda$core$MutableString* $tmp1021 = *(&local38);
panda$core$String* $tmp1022 = panda$core$MutableString$finish$R$panda$core$String($tmp1021);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1022));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1022));
// unreffing REF($1278:panda.core.String)
panda$core$MutableString* $tmp1023 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1023));
// unreffing result
*(&local38) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp983));
// unreffing REF($1186:panda.core.MutableString)
org$pandalanguage$pandac$ASTNode* $tmp1024 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1024));
// unreffing test
*(&local37) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp1025 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1025));
// unreffing statements
*(&local36) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp1026 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1026));
// unreffing label
*(&local35) = ((panda$core$String*) NULL);
return $tmp1022;
block64:;
panda$core$Int64 $tmp1027 = (panda$core$Int64) {15};
panda$core$Bit $tmp1028 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp1027);
bool $tmp1029 = $tmp1028.value;
if ($tmp1029) goto block70; else goto block71;
block70:;
org$pandalanguage$pandac$Position* $tmp1030 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1031 = *$tmp1030;
org$pandalanguage$pandac$ASTNode** $tmp1032 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1033 = *$tmp1032;
*(&local40) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1034 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1034));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1033));
*(&local40) = $tmp1033;
panda$core$String** $tmp1035 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp1036 = *$tmp1035;
*(&local41) = ((panda$core$String*) NULL);
panda$core$String* $tmp1037 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1037));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1036));
*(&local41) = $tmp1036;
// line 351
org$pandalanguage$pandac$ASTNode* $tmp1038 = *(&local40);
$fn1040 $tmp1039 = ($fn1040) $tmp1038->$class->vtable[0];
panda$core$String* $tmp1041 = $tmp1039($tmp1038);
panda$core$String* $tmp1042 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1041, &$s1043);
panda$core$String* $tmp1044 = *(&local41);
panda$core$String* $tmp1045 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1042, $tmp1044);
panda$core$String* $tmp1046 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1045, &$s1047);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1046));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1046));
// unreffing REF($1339:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1045));
// unreffing REF($1338:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1042));
// unreffing REF($1336:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1041));
// unreffing REF($1335:panda.core.String)
panda$core$String* $tmp1048 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1048));
// unreffing field
*(&local41) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1049 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1049));
// unreffing base
*(&local40) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1046;
block71:;
panda$core$Int64 $tmp1050 = (panda$core$Int64) {16};
panda$core$Bit $tmp1051 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp1050);
bool $tmp1052 = $tmp1051.value;
if ($tmp1052) goto block72; else goto block73;
block72:;
org$pandalanguage$pandac$Position* $tmp1053 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1054 = *$tmp1053;
org$pandalanguage$pandac$ASTNode** $tmp1055 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1056 = *$tmp1055;
*(&local42) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1057 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1057));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1056));
*(&local42) = $tmp1056;
panda$collections$ImmutableArray** $tmp1058 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp1059 = *$tmp1058;
*(&local43) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1060 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1060));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1059));
*(&local43) = $tmp1059;
org$pandalanguage$pandac$ASTNode** $tmp1061 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1062 = *$tmp1061;
*(&local44) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1063 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1063));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1062));
*(&local44) = $tmp1062;
// line 354
panda$core$MutableString* $tmp1064 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1064);
*(&local45) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp1065 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1065));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1064));
*(&local45) = $tmp1064;
// line 355
org$pandalanguage$pandac$ASTNode* $tmp1066 = *(&local42);
panda$core$Bit $tmp1067 = panda$core$Bit$init$builtin_bit($tmp1066 != NULL);
bool $tmp1068 = $tmp1067.value;
if ($tmp1068) goto block74; else goto block75;
block74:;
// line 356
panda$core$MutableString* $tmp1069 = *(&local45);
org$pandalanguage$pandac$ASTNode* $tmp1070 = *(&local42);
panda$core$String* $tmp1071 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1070), &$s1072);
panda$core$MutableString$append$panda$core$String($tmp1069, $tmp1071);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1071));
// unreffing REF($1418:panda.core.String)
goto block75;
block75:;
// line 358
panda$collections$ImmutableArray* $tmp1073 = *(&local43);
ITable* $tmp1074 = ((panda$collections$Iterable*) $tmp1073)->$class->itable;
while ($tmp1074->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1074 = $tmp1074->next;
}
$fn1076 $tmp1075 = $tmp1074->methods[0];
panda$collections$Iterator* $tmp1077 = $tmp1075(((panda$collections$Iterable*) $tmp1073));
goto block76;
block76:;
ITable* $tmp1078 = $tmp1077->$class->itable;
while ($tmp1078->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1078 = $tmp1078->next;
}
$fn1080 $tmp1079 = $tmp1078->methods[0];
panda$core$Bit $tmp1081 = $tmp1079($tmp1077);
bool $tmp1082 = $tmp1081.value;
if ($tmp1082) goto block78; else goto block77;
block77:;
*(&local46) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1083 = $tmp1077->$class->itable;
while ($tmp1083->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1083 = $tmp1083->next;
}
$fn1085 $tmp1084 = $tmp1083->methods[1];
panda$core$Object* $tmp1086 = $tmp1084($tmp1077);
org$pandalanguage$pandac$ASTNode* $tmp1087 = *(&local46);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1087));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1086)));
*(&local46) = ((org$pandalanguage$pandac$ASTNode*) $tmp1086);
// line 359
panda$core$MutableString* $tmp1088 = *(&local45);
org$pandalanguage$pandac$ASTNode* $tmp1089 = *(&local46);
panda$core$String* $tmp1090 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1089), &$s1091);
panda$core$MutableString$append$panda$core$String($tmp1088, $tmp1090);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1090));
// unreffing REF($1452:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1086);
// unreffing REF($1440:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1092 = *(&local46);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1092));
// unreffing a
*(&local46) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block76;
block78:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1077));
// unreffing REF($1429:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 361
panda$core$MutableString* $tmp1093 = *(&local45);
org$pandalanguage$pandac$ASTNode* $tmp1094 = *(&local44);
panda$core$MutableString$append$panda$core$Object($tmp1093, ((panda$core$Object*) $tmp1094));
// line 362
panda$core$MutableString* $tmp1095 = *(&local45);
panda$core$String* $tmp1096 = panda$core$MutableString$finish$R$panda$core$String($tmp1095);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1096));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1096));
// unreffing REF($1476:panda.core.String)
panda$core$MutableString* $tmp1097 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1097));
// unreffing result
*(&local45) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1064));
// unreffing REF($1399:panda.core.MutableString)
org$pandalanguage$pandac$ASTNode* $tmp1098 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1098));
// unreffing decl
*(&local44) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp1099 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1099));
// unreffing annotations
*(&local43) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1100 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1100));
// unreffing dc
*(&local42) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1096;
block73:;
panda$core$Int64 $tmp1101 = (panda$core$Int64) {17};
panda$core$Bit $tmp1102 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp1101);
bool $tmp1103 = $tmp1102.value;
if ($tmp1103) goto block79; else goto block80;
block79:;
panda$collections$ImmutableArray** $tmp1104 = (panda$collections$ImmutableArray**) (param0->$data + 0);
panda$collections$ImmutableArray* $tmp1105 = *$tmp1104;
*(&local47) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1106 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1106));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1105));
*(&local47) = $tmp1105;
// line 365
panda$core$MutableString* $tmp1107 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1107);
*(&local48) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp1108 = *(&local48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1108));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1107));
*(&local48) = $tmp1107;
// line 366
panda$collections$ImmutableArray* $tmp1109 = *(&local47);
ITable* $tmp1110 = ((panda$collections$Iterable*) $tmp1109)->$class->itable;
while ($tmp1110->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1110 = $tmp1110->next;
}
$fn1112 $tmp1111 = $tmp1110->methods[0];
panda$collections$Iterator* $tmp1113 = $tmp1111(((panda$collections$Iterable*) $tmp1109));
goto block81;
block81:;
ITable* $tmp1114 = $tmp1113->$class->itable;
while ($tmp1114->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1114 = $tmp1114->next;
}
$fn1116 $tmp1115 = $tmp1114->methods[0];
panda$core$Bit $tmp1117 = $tmp1115($tmp1113);
bool $tmp1118 = $tmp1117.value;
if ($tmp1118) goto block83; else goto block82;
block82:;
*(&local49) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1119 = $tmp1113->$class->itable;
while ($tmp1119->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1119 = $tmp1119->next;
}
$fn1121 $tmp1120 = $tmp1119->methods[1];
panda$core$Object* $tmp1122 = $tmp1120($tmp1113);
org$pandalanguage$pandac$ASTNode* $tmp1123 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1123));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1122)));
*(&local49) = ((org$pandalanguage$pandac$ASTNode*) $tmp1122);
// line 367
panda$core$MutableString* $tmp1124 = *(&local48);
org$pandalanguage$pandac$ASTNode* $tmp1125 = *(&local49);
panda$core$String* $tmp1126 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1125), &$s1127);
panda$core$MutableString$append$panda$core$String($tmp1124, $tmp1126);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1126));
// unreffing REF($1557:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1122);
// unreffing REF($1545:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1128 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1128));
// unreffing e
*(&local49) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block81;
block83:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1113));
// unreffing REF($1534:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 369
panda$core$MutableString* $tmp1129 = *(&local48);
panda$core$String* $tmp1130 = panda$core$MutableString$finish$R$panda$core$String($tmp1129);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1130));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1130));
// unreffing REF($1576:panda.core.String)
panda$core$MutableString* $tmp1131 = *(&local48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1131));
// unreffing result
*(&local48) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1107));
// unreffing REF($1520:panda.core.MutableString)
panda$collections$ImmutableArray* $tmp1132 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1132));
// unreffing entries
*(&local47) = ((panda$collections$ImmutableArray*) NULL);
return $tmp1130;
block80:;
panda$core$Int64 $tmp1133 = (panda$core$Int64) {18};
panda$core$Bit $tmp1134 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp1133);
bool $tmp1135 = $tmp1134.value;
if ($tmp1135) goto block84; else goto block85;
block84:;
org$pandalanguage$pandac$Position* $tmp1136 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1137 = *$tmp1136;
panda$core$String** $tmp1138 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1139 = *$tmp1138;
*(&local50) = ((panda$core$String*) NULL);
panda$core$String* $tmp1140 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1140));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1139));
*(&local50) = $tmp1139;
org$pandalanguage$pandac$ASTNode** $tmp1141 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1142 = *$tmp1141;
*(&local51) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1143 = *(&local51);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1143));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1142));
*(&local51) = $tmp1142;
org$pandalanguage$pandac$ASTNode** $tmp1144 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1145 = *$tmp1144;
*(&local52) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1146 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1146));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1145));
*(&local52) = $tmp1145;
panda$collections$ImmutableArray** $tmp1147 = (panda$collections$ImmutableArray**) (param0->$data + 40);
panda$collections$ImmutableArray* $tmp1148 = *$tmp1147;
*(&local53) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1149 = *(&local53);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1149));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1148));
*(&local53) = $tmp1148;
// line 372
panda$core$MutableString* $tmp1150 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1150);
*(&local54) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp1151 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1151));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1150));
*(&local54) = $tmp1150;
// line 373
panda$core$String* $tmp1152 = *(&local50);
panda$core$Bit $tmp1153 = panda$core$Bit$init$builtin_bit($tmp1152 != NULL);
bool $tmp1154 = $tmp1153.value;
if ($tmp1154) goto block86; else goto block87;
block86:;
// line 374
panda$core$MutableString* $tmp1155 = *(&local54);
panda$core$String* $tmp1156 = *(&local50);
panda$core$String* $tmp1157 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1156, &$s1158);
panda$core$MutableString$append$panda$core$String($tmp1155, $tmp1157);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1157));
// unreffing REF($1658:panda.core.String)
goto block87;
block87:;
// line 376
panda$core$MutableString* $tmp1159 = *(&local54);
org$pandalanguage$pandac$ASTNode* $tmp1160 = *(&local51);
panda$core$String* $tmp1161 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1162, ((panda$core$Object*) $tmp1160));
panda$core$String* $tmp1163 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1161, &$s1164);
org$pandalanguage$pandac$ASTNode* $tmp1165 = *(&local52);
panda$core$String* $tmp1166 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1163, ((panda$core$Object*) $tmp1165));
panda$core$String* $tmp1167 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1166, &$s1168);
panda$core$MutableString$append$panda$core$String($tmp1159, $tmp1167);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1167));
// unreffing REF($1673:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1166));
// unreffing REF($1672:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1163));
// unreffing REF($1669:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1161));
// unreffing REF($1668:panda.core.String)
// line 377
panda$collections$ImmutableArray* $tmp1169 = *(&local53);
ITable* $tmp1170 = ((panda$collections$Iterable*) $tmp1169)->$class->itable;
while ($tmp1170->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1170 = $tmp1170->next;
}
$fn1172 $tmp1171 = $tmp1170->methods[0];
panda$collections$Iterator* $tmp1173 = $tmp1171(((panda$collections$Iterable*) $tmp1169));
goto block88;
block88:;
ITable* $tmp1174 = $tmp1173->$class->itable;
while ($tmp1174->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1174 = $tmp1174->next;
}
$fn1176 $tmp1175 = $tmp1174->methods[0];
panda$core$Bit $tmp1177 = $tmp1175($tmp1173);
bool $tmp1178 = $tmp1177.value;
if ($tmp1178) goto block90; else goto block89;
block89:;
*(&local55) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1179 = $tmp1173->$class->itable;
while ($tmp1179->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1179 = $tmp1179->next;
}
$fn1181 $tmp1180 = $tmp1179->methods[1];
panda$core$Object* $tmp1182 = $tmp1180($tmp1173);
org$pandalanguage$pandac$ASTNode* $tmp1183 = *(&local55);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1183));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1182)));
*(&local55) = ((org$pandalanguage$pandac$ASTNode*) $tmp1182);
// line 378
panda$core$MutableString* $tmp1184 = *(&local54);
org$pandalanguage$pandac$ASTNode* $tmp1185 = *(&local55);
panda$core$String* $tmp1186 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1185), &$s1187);
panda$core$MutableString$append$panda$core$String($tmp1184, $tmp1186);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1186));
// unreffing REF($1715:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1182);
// unreffing REF($1703:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1188 = *(&local55);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1188));
// unreffing s
*(&local55) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block88;
block90:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1173));
// unreffing REF($1692:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 380
panda$core$MutableString* $tmp1189 = *(&local54);
panda$core$MutableString$append$panda$core$String($tmp1189, &$s1190);
// line 381
panda$core$MutableString* $tmp1191 = *(&local54);
panda$core$String* $tmp1192 = panda$core$MutableString$finish$R$panda$core$String($tmp1191);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1192));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1192));
// unreffing REF($1737:panda.core.String)
panda$core$MutableString* $tmp1193 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1193));
// unreffing result
*(&local54) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1150));
// unreffing REF($1639:panda.core.MutableString)
panda$collections$ImmutableArray* $tmp1194 = *(&local53);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1194));
// unreffing statements
*(&local53) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1195 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1195));
// unreffing list
*(&local52) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1196 = *(&local51);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1196));
// unreffing target
*(&local51) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1197 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1197));
// unreffing label
*(&local50) = ((panda$core$String*) NULL);
return $tmp1192;
block85:;
panda$core$Int64 $tmp1198 = (panda$core$Int64) {19};
panda$core$Bit $tmp1199 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp1198);
bool $tmp1200 = $tmp1199.value;
if ($tmp1200) goto block91; else goto block92;
block91:;
org$pandalanguage$pandac$Position* $tmp1201 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1202 = *$tmp1201;
panda$core$String** $tmp1203 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1204 = *$tmp1203;
*(&local56) = ((panda$core$String*) NULL);
panda$core$String* $tmp1205 = *(&local56);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1205));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1204));
*(&local56) = $tmp1204;
panda$collections$ImmutableArray** $tmp1206 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp1207 = *$tmp1206;
*(&local57) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1208 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1208));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1207));
*(&local57) = $tmp1207;
// line 384
panda$core$String* $tmp1209 = *(&local56);
panda$core$String* $tmp1210 = panda$core$String$convert$R$panda$core$String($tmp1209);
panda$core$String* $tmp1211 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1210, &$s1212);
panda$collections$ImmutableArray* $tmp1213 = *(&local57);
ITable* $tmp1214 = ((panda$collections$CollectionView*) $tmp1213)->$class->itable;
while ($tmp1214->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1214 = $tmp1214->next;
}
$fn1216 $tmp1215 = $tmp1214->methods[1];
panda$core$String* $tmp1217 = $tmp1215(((panda$collections$CollectionView*) $tmp1213));
panda$core$String* $tmp1218 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1211, $tmp1217);
panda$core$String* $tmp1219 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1218, &$s1220);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1219));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1219));
// unreffing REF($1805:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1218));
// unreffing REF($1804:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1217));
// unreffing REF($1803:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1211));
// unreffing REF($1799:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1210));
// unreffing REF($1798:panda.core.String)
panda$collections$ImmutableArray* $tmp1221 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1221));
// unreffing subtypes
*(&local57) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp1222 = *(&local56);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1222));
// unreffing name
*(&local56) = ((panda$core$String*) NULL);
return $tmp1219;
block92:;
panda$core$Int64 $tmp1223 = (panda$core$Int64) {20};
panda$core$Bit $tmp1224 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp1223);
bool $tmp1225 = $tmp1224.value;
if ($tmp1225) goto block93; else goto block94;
block93:;
org$pandalanguage$pandac$Position* $tmp1226 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1227 = *$tmp1226;
panda$core$String** $tmp1228 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1229 = *$tmp1228;
*(&local58) = ((panda$core$String*) NULL);
panda$core$String* $tmp1230 = *(&local58);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1230));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1229));
*(&local58) = $tmp1229;
// line 387
panda$core$String* $tmp1231 = *(&local58);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1231));
panda$core$String* $tmp1232 = *(&local58);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1232));
// unreffing name
*(&local58) = ((panda$core$String*) NULL);
return $tmp1231;
block94:;
panda$core$Int64 $tmp1233 = (panda$core$Int64) {21};
panda$core$Bit $tmp1234 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp1233);
bool $tmp1235 = $tmp1234.value;
if ($tmp1235) goto block95; else goto block96;
block95:;
org$pandalanguage$pandac$Position* $tmp1236 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1237 = *$tmp1236;
org$pandalanguage$pandac$ASTNode** $tmp1238 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1239 = *$tmp1238;
*(&local59) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1240 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1240));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1239));
*(&local59) = $tmp1239;
panda$collections$ImmutableArray** $tmp1241 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp1242 = *$tmp1241;
*(&local60) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1243 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1243));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1242));
*(&local60) = $tmp1242;
org$pandalanguage$pandac$ASTNode** $tmp1244 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1245 = *$tmp1244;
*(&local61) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1246 = *(&local61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1246));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1245));
*(&local61) = $tmp1245;
// line 390
panda$core$MutableString* $tmp1247 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$ASTNode* $tmp1248 = *(&local59);
panda$core$String* $tmp1249 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1250, ((panda$core$Object*) $tmp1248));
panda$core$String* $tmp1251 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1249, &$s1252);
panda$core$MutableString$init$panda$core$String($tmp1247, $tmp1251);
*(&local62) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp1253 = *(&local62);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1253));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1247));
*(&local62) = $tmp1247;
// line 391
panda$collections$ImmutableArray* $tmp1254 = *(&local60);
ITable* $tmp1255 = ((panda$collections$Iterable*) $tmp1254)->$class->itable;
while ($tmp1255->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1255 = $tmp1255->next;
}
$fn1257 $tmp1256 = $tmp1255->methods[0];
panda$collections$Iterator* $tmp1258 = $tmp1256(((panda$collections$Iterable*) $tmp1254));
goto block97;
block97:;
ITable* $tmp1259 = $tmp1258->$class->itable;
while ($tmp1259->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1259 = $tmp1259->next;
}
$fn1261 $tmp1260 = $tmp1259->methods[0];
panda$core$Bit $tmp1262 = $tmp1260($tmp1258);
bool $tmp1263 = $tmp1262.value;
if ($tmp1263) goto block99; else goto block98;
block98:;
*(&local63) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1264 = $tmp1258->$class->itable;
while ($tmp1264->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1264 = $tmp1264->next;
}
$fn1266 $tmp1265 = $tmp1264->methods[1];
panda$core$Object* $tmp1267 = $tmp1265($tmp1258);
org$pandalanguage$pandac$ASTNode* $tmp1268 = *(&local63);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1268));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1267)));
*(&local63) = ((org$pandalanguage$pandac$ASTNode*) $tmp1267);
// line 392
panda$core$MutableString* $tmp1269 = *(&local62);
org$pandalanguage$pandac$ASTNode* $tmp1270 = *(&local63);
panda$core$String* $tmp1271 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1270), &$s1272);
panda$core$MutableString$append$panda$core$String($tmp1269, $tmp1271);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1271));
// unreffing REF($1934:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1267);
// unreffing REF($1922:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1273 = *(&local63);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1273));
// unreffing s
*(&local63) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block97;
block99:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1258));
// unreffing REF($1911:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 394
panda$core$MutableString* $tmp1274 = *(&local62);
panda$core$MutableString$append$panda$core$String($tmp1274, &$s1275);
// line 395
org$pandalanguage$pandac$ASTNode* $tmp1276 = *(&local61);
panda$core$Bit $tmp1277 = panda$core$Bit$init$builtin_bit($tmp1276 != NULL);
bool $tmp1278 = $tmp1277.value;
if ($tmp1278) goto block100; else goto block101;
block100:;
// line 396
panda$core$MutableString* $tmp1279 = *(&local62);
org$pandalanguage$pandac$ASTNode* $tmp1280 = *(&local61);
panda$core$String* $tmp1281 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1282, ((panda$core$Object*) $tmp1280));
panda$core$String* $tmp1283 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1281, &$s1284);
panda$core$MutableString$append$panda$core$String($tmp1279, $tmp1283);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1283));
// unreffing REF($1965:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1281));
// unreffing REF($1964:panda.core.String)
goto block101;
block101:;
// line 398
panda$core$MutableString* $tmp1285 = *(&local62);
panda$core$String* $tmp1286 = panda$core$MutableString$finish$R$panda$core$String($tmp1285);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1286));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1286));
// unreffing REF($1976:panda.core.String)
panda$core$MutableString* $tmp1287 = *(&local62);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1287));
// unreffing result
*(&local62) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1251));
// unreffing REF($1897:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1249));
// unreffing REF($1896:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1247));
// unreffing REF($1893:panda.core.MutableString)
org$pandalanguage$pandac$ASTNode* $tmp1288 = *(&local61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1288));
// unreffing ifFalse
*(&local61) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp1289 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1289));
// unreffing ifTrue
*(&local60) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1290 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1290));
// unreffing test
*(&local59) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1286;
block96:;
panda$core$Int64 $tmp1291 = (panda$core$Int64) {22};
panda$core$Bit $tmp1292 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp1291);
bool $tmp1293 = $tmp1292.value;
if ($tmp1293) goto block102; else goto block103;
block102:;
org$pandalanguage$pandac$Position* $tmp1294 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1295 = *$tmp1294;
panda$core$UInt64* $tmp1296 = (panda$core$UInt64*) (param0->$data + 16);
panda$core$UInt64 $tmp1297 = *$tmp1296;
*(&local64) = $tmp1297;
// line 401
panda$core$UInt64 $tmp1298 = *(&local64);
panda$core$String* $tmp1299 = panda$core$UInt64$convert$R$panda$core$String($tmp1298);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1299));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1299));
// unreffing REF($2023:panda.core.String)
return $tmp1299;
block103:;
panda$core$Int64 $tmp1300 = (panda$core$Int64) {23};
panda$core$Bit $tmp1301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp1300);
bool $tmp1302 = $tmp1301.value;
if ($tmp1302) goto block104; else goto block105;
block104:;
org$pandalanguage$pandac$Position* $tmp1303 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1304 = *$tmp1303;
org$pandalanguage$pandac$IR$Value** $tmp1305 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp1306 = *$tmp1305;
*(&local65) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp1307 = *(&local65);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1307));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1306));
*(&local65) = $tmp1306;
// line 404
org$pandalanguage$pandac$IR$Value* $tmp1308 = *(&local65);
$fn1310 $tmp1309 = ($fn1310) $tmp1308->$class->vtable[0];
panda$core$String* $tmp1311 = $tmp1309($tmp1308);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1311));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1311));
// unreffing REF($2048:panda.core.String)
org$pandalanguage$pandac$IR$Value* $tmp1312 = *(&local65);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1312));
// unreffing value
*(&local65) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp1311;
block105:;
panda$core$Int64 $tmp1313 = (panda$core$Int64) {24};
panda$core$Bit $tmp1314 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp1313);
bool $tmp1315 = $tmp1314.value;
if ($tmp1315) goto block106; else goto block107;
block106:;
org$pandalanguage$pandac$Position* $tmp1316 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1317 = *$tmp1316;
panda$core$String** $tmp1318 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1319 = *$tmp1318;
*(&local66) = ((panda$core$String*) NULL);
panda$core$String* $tmp1320 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1320));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1319));
*(&local66) = $tmp1319;
panda$collections$ImmutableArray** $tmp1321 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp1322 = *$tmp1321;
*(&local67) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1323 = *(&local67);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1323));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1322));
*(&local67) = $tmp1322;
// line 407
panda$core$MutableString* $tmp1324 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1324);
*(&local68) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp1325 = *(&local68);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1325));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1324));
*(&local68) = $tmp1324;
// line 408
panda$core$String* $tmp1326 = *(&local66);
panda$core$Bit $tmp1327 = panda$core$Bit$init$builtin_bit($tmp1326 != NULL);
bool $tmp1328 = $tmp1327.value;
if ($tmp1328) goto block108; else goto block109;
block108:;
// line 409
panda$core$MutableString* $tmp1329 = *(&local68);
panda$core$String* $tmp1330 = *(&local66);
panda$core$String* $tmp1331 = panda$core$String$convert$R$panda$core$String($tmp1330);
panda$core$String* $tmp1332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1331, &$s1333);
panda$core$MutableString$append$panda$core$String($tmp1329, $tmp1332);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1332));
// unreffing REF($2105:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1331));
// unreffing REF($2104:panda.core.String)
goto block109;
block109:;
// line 411
panda$core$MutableString* $tmp1334 = *(&local68);
panda$core$MutableString$append$panda$core$String($tmp1334, &$s1335);
// line 412
panda$collections$ImmutableArray* $tmp1336 = *(&local67);
ITable* $tmp1337 = ((panda$collections$Iterable*) $tmp1336)->$class->itable;
while ($tmp1337->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1337 = $tmp1337->next;
}
$fn1339 $tmp1338 = $tmp1337->methods[0];
panda$collections$Iterator* $tmp1340 = $tmp1338(((panda$collections$Iterable*) $tmp1336));
goto block110;
block110:;
ITable* $tmp1341 = $tmp1340->$class->itable;
while ($tmp1341->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1341 = $tmp1341->next;
}
$fn1343 $tmp1342 = $tmp1341->methods[0];
panda$core$Bit $tmp1344 = $tmp1342($tmp1340);
bool $tmp1345 = $tmp1344.value;
if ($tmp1345) goto block112; else goto block111;
block111:;
*(&local69) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1346 = $tmp1340->$class->itable;
while ($tmp1346->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1346 = $tmp1346->next;
}
$fn1348 $tmp1347 = $tmp1346->methods[1];
panda$core$Object* $tmp1349 = $tmp1347($tmp1340);
org$pandalanguage$pandac$ASTNode* $tmp1350 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1350));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1349)));
*(&local69) = ((org$pandalanguage$pandac$ASTNode*) $tmp1349);
// line 413
panda$core$MutableString* $tmp1351 = *(&local68);
org$pandalanguage$pandac$ASTNode* $tmp1352 = *(&local69);
panda$core$String* $tmp1353 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1352), &$s1354);
panda$core$MutableString$append$panda$core$String($tmp1351, $tmp1353);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1353));
// unreffing REF($2145:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1349);
// unreffing REF($2133:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1355 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1355));
// unreffing s
*(&local69) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block110;
block112:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1340));
// unreffing REF($2122:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 415
panda$core$MutableString* $tmp1356 = *(&local68);
panda$core$MutableString$append$panda$core$String($tmp1356, &$s1357);
// line 416
panda$core$MutableString* $tmp1358 = *(&local68);
panda$core$String* $tmp1359 = panda$core$MutableString$finish$R$panda$core$String($tmp1358);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1359));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1359));
// unreffing REF($2167:panda.core.String)
panda$core$MutableString* $tmp1360 = *(&local68);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1360));
// unreffing result
*(&local68) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1324));
// unreffing REF($2085:panda.core.MutableString)
panda$collections$ImmutableArray* $tmp1361 = *(&local67);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1361));
// unreffing statements
*(&local67) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp1362 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1362));
// unreffing label
*(&local66) = ((panda$core$String*) NULL);
return $tmp1359;
block107:;
panda$core$Int64 $tmp1363 = (panda$core$Int64) {25};
panda$core$Bit $tmp1364 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp1363);
bool $tmp1365 = $tmp1364.value;
if ($tmp1365) goto block113; else goto block114;
block113:;
org$pandalanguage$pandac$Position* $tmp1366 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1367 = *$tmp1366;
org$pandalanguage$pandac$ASTNode** $tmp1368 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1369 = *$tmp1368;
*(&local70) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1370 = *(&local70);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1370));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1369));
*(&local70) = $tmp1369;
panda$collections$ImmutableArray** $tmp1371 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp1372 = *$tmp1371;
*(&local71) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1373 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1373));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1372));
*(&local71) = $tmp1372;
panda$collections$ImmutableArray** $tmp1374 = (panda$collections$ImmutableArray**) (param0->$data + 32);
panda$collections$ImmutableArray* $tmp1375 = *$tmp1374;
*(&local72) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1376 = *(&local72);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1376));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1375));
*(&local72) = $tmp1375;
// line 419
panda$core$MutableString* $tmp1377 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$ASTNode* $tmp1378 = *(&local70);
panda$core$String* $tmp1379 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1380, ((panda$core$Object*) $tmp1378));
panda$core$String* $tmp1381 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1379, &$s1382);
panda$core$MutableString$init$panda$core$String($tmp1377, $tmp1381);
*(&local73) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp1383 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1383));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1377));
*(&local73) = $tmp1377;
// line 420
panda$collections$ImmutableArray* $tmp1384 = *(&local71);
ITable* $tmp1385 = ((panda$collections$Iterable*) $tmp1384)->$class->itable;
while ($tmp1385->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1385 = $tmp1385->next;
}
$fn1387 $tmp1386 = $tmp1385->methods[0];
panda$collections$Iterator* $tmp1388 = $tmp1386(((panda$collections$Iterable*) $tmp1384));
goto block115;
block115:;
ITable* $tmp1389 = $tmp1388->$class->itable;
while ($tmp1389->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1389 = $tmp1389->next;
}
$fn1391 $tmp1390 = $tmp1389->methods[0];
panda$core$Bit $tmp1392 = $tmp1390($tmp1388);
bool $tmp1393 = $tmp1392.value;
if ($tmp1393) goto block117; else goto block116;
block116:;
*(&local74) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1394 = $tmp1388->$class->itable;
while ($tmp1394->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1394 = $tmp1394->next;
}
$fn1396 $tmp1395 = $tmp1394->methods[1];
panda$core$Object* $tmp1397 = $tmp1395($tmp1388);
org$pandalanguage$pandac$ASTNode* $tmp1398 = *(&local74);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1398));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1397)));
*(&local74) = ((org$pandalanguage$pandac$ASTNode*) $tmp1397);
// line 421
panda$core$MutableString* $tmp1399 = *(&local73);
org$pandalanguage$pandac$ASTNode* $tmp1400 = *(&local74);
panda$core$String* $tmp1401 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1400), &$s1402);
panda$core$MutableString$append$panda$core$String($tmp1399, $tmp1401);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1401));
// unreffing REF($2267:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1397);
// unreffing REF($2255:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1403 = *(&local74);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1403));
// unreffing w
*(&local74) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block115;
block117:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1388));
// unreffing REF($2244:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 423
panda$collections$ImmutableArray* $tmp1404 = *(&local72);
panda$core$Bit $tmp1405 = panda$core$Bit$init$builtin_bit($tmp1404 != NULL);
bool $tmp1406 = $tmp1405.value;
if ($tmp1406) goto block118; else goto block119;
block118:;
// line 424
panda$core$MutableString* $tmp1407 = *(&local73);
panda$collections$ImmutableArray* $tmp1408 = *(&local72);
panda$core$String* $tmp1409 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1408), &$s1410);
panda$core$MutableString$append$panda$core$String($tmp1407, $tmp1409);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1409));
// unreffing REF($2294:panda.core.String)
goto block119;
block119:;
// line 426
panda$core$MutableString* $tmp1411 = *(&local73);
panda$core$MutableString$append$panda$core$String($tmp1411, &$s1412);
// line 427
panda$core$MutableString* $tmp1413 = *(&local73);
panda$core$String* $tmp1414 = panda$core$MutableString$finish$R$panda$core$String($tmp1413);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1414));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1414));
// unreffing REF($2305:panda.core.String)
panda$core$MutableString* $tmp1415 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1415));
// unreffing result
*(&local73) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1381));
// unreffing REF($2230:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1379));
// unreffing REF($2229:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1377));
// unreffing REF($2226:panda.core.MutableString)
panda$collections$ImmutableArray* $tmp1416 = *(&local72);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1416));
// unreffing other
*(&local72) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1417 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1417));
// unreffing whens
*(&local71) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1418 = *(&local70);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1418));
// unreffing value
*(&local70) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1414;
block114:;
panda$core$Int64 $tmp1419 = (panda$core$Int64) {26};
panda$core$Bit $tmp1420 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp1419);
bool $tmp1421 = $tmp1420.value;
if ($tmp1421) goto block120; else goto block121;
block120:;
org$pandalanguage$pandac$Position* $tmp1422 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1423 = *$tmp1422;
org$pandalanguage$pandac$ASTNode** $tmp1424 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1425 = *$tmp1424;
*(&local75) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1426 = *(&local75);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1426));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1425));
*(&local75) = $tmp1425;
panda$collections$ImmutableArray** $tmp1427 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp1428 = *$tmp1427;
*(&local76) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1429 = *(&local76);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1429));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1428));
*(&local76) = $tmp1428;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp1430 = (org$pandalanguage$pandac$MethodDecl$Kind*) (param0->$data + 32);
org$pandalanguage$pandac$MethodDecl$Kind $tmp1431 = *$tmp1430;
*(&local77) = $tmp1431;
panda$core$String** $tmp1432 = (panda$core$String**) (param0->$data + 40);
panda$core$String* $tmp1433 = *$tmp1432;
*(&local78) = ((panda$core$String*) NULL);
panda$core$String* $tmp1434 = *(&local78);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1434));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1433));
*(&local78) = $tmp1433;
panda$collections$ImmutableArray** $tmp1435 = (panda$collections$ImmutableArray**) (param0->$data + 48);
panda$collections$ImmutableArray* $tmp1436 = *$tmp1435;
*(&local79) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1437 = *(&local79);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1437));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1436));
*(&local79) = $tmp1436;
panda$collections$ImmutableArray** $tmp1438 = (panda$collections$ImmutableArray**) (param0->$data + 56);
panda$collections$ImmutableArray* $tmp1439 = *$tmp1438;
*(&local80) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1440 = *(&local80);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1440));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1439));
*(&local80) = $tmp1439;
org$pandalanguage$pandac$ASTNode** $tmp1441 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 64);
org$pandalanguage$pandac$ASTNode* $tmp1442 = *$tmp1441;
*(&local81) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1443 = *(&local81);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1443));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1442));
*(&local81) = $tmp1442;
panda$collections$ImmutableArray** $tmp1444 = (panda$collections$ImmutableArray**) (param0->$data + 72);
panda$collections$ImmutableArray* $tmp1445 = *$tmp1444;
*(&local82) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1446 = *(&local82);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1446));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1445));
*(&local82) = $tmp1445;
// line 431
panda$core$MutableString* $tmp1447 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1447);
*(&local83) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp1448 = *(&local83);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1448));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1447));
*(&local83) = $tmp1447;
// line 432
org$pandalanguage$pandac$ASTNode* $tmp1449 = *(&local75);
panda$core$Bit $tmp1450 = panda$core$Bit$init$builtin_bit($tmp1449 != NULL);
bool $tmp1451 = $tmp1450.value;
if ($tmp1451) goto block122; else goto block123;
block122:;
// line 433
panda$core$MutableString* $tmp1452 = *(&local83);
org$pandalanguage$pandac$ASTNode* $tmp1453 = *(&local75);
panda$core$String* $tmp1454 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1453), &$s1455);
panda$core$MutableString$append$panda$core$String($tmp1452, $tmp1454);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1454));
// unreffing REF($2433:panda.core.String)
goto block123;
block123:;
// line 435
panda$collections$ImmutableArray* $tmp1456 = *(&local76);
ITable* $tmp1457 = ((panda$collections$Iterable*) $tmp1456)->$class->itable;
while ($tmp1457->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1457 = $tmp1457->next;
}
$fn1459 $tmp1458 = $tmp1457->methods[0];
panda$collections$Iterator* $tmp1460 = $tmp1458(((panda$collections$Iterable*) $tmp1456));
goto block124;
block124:;
ITable* $tmp1461 = $tmp1460->$class->itable;
while ($tmp1461->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1461 = $tmp1461->next;
}
$fn1463 $tmp1462 = $tmp1461->methods[0];
panda$core$Bit $tmp1464 = $tmp1462($tmp1460);
bool $tmp1465 = $tmp1464.value;
if ($tmp1465) goto block126; else goto block125;
block125:;
*(&local84) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1466 = $tmp1460->$class->itable;
while ($tmp1466->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1466 = $tmp1466->next;
}
$fn1468 $tmp1467 = $tmp1466->methods[1];
panda$core$Object* $tmp1469 = $tmp1467($tmp1460);
org$pandalanguage$pandac$ASTNode* $tmp1470 = *(&local84);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1470));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1469)));
*(&local84) = ((org$pandalanguage$pandac$ASTNode*) $tmp1469);
// line 436
panda$core$MutableString* $tmp1471 = *(&local83);
org$pandalanguage$pandac$ASTNode* $tmp1472 = *(&local84);
panda$core$String* $tmp1473 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1472), &$s1474);
panda$core$MutableString$append$panda$core$String($tmp1471, $tmp1473);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1473));
// unreffing REF($2467:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1469);
// unreffing REF($2455:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1475 = *(&local84);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1475));
// unreffing a
*(&local84) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block124;
block126:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1460));
// unreffing REF($2444:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 438
org$pandalanguage$pandac$MethodDecl$Kind $tmp1476 = *(&local77);
panda$core$Int64 $tmp1477 = $tmp1476.$rawValue;
panda$core$Int64 $tmp1478 = (panda$core$Int64) {0};
panda$core$Bit $tmp1479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1477, $tmp1478);
bool $tmp1480 = $tmp1479.value;
if ($tmp1480) goto block128; else goto block129;
block128:;
// line 439
panda$core$MutableString* $tmp1481 = *(&local83);
panda$core$MutableString$append$panda$core$String($tmp1481, &$s1482);
goto block127;
block129:;
panda$core$Int64 $tmp1483 = (panda$core$Int64) {1};
panda$core$Bit $tmp1484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1477, $tmp1483);
bool $tmp1485 = $tmp1484.value;
if ($tmp1485) goto block130; else goto block131;
block130:;
// line 440
panda$core$MutableString* $tmp1486 = *(&local83);
panda$core$MutableString$append$panda$core$String($tmp1486, &$s1487);
goto block127;
block131:;
panda$core$Int64 $tmp1488 = (panda$core$Int64) {2};
panda$core$Bit $tmp1489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1477, $tmp1488);
bool $tmp1490 = $tmp1489.value;
if ($tmp1490) goto block132; else goto block127;
block132:;
goto block127;
block127:;
// line 443
panda$core$MutableString* $tmp1491 = *(&local83);
panda$core$String* $tmp1492 = *(&local78);
panda$core$MutableString$append$panda$core$String($tmp1491, $tmp1492);
// line 444
panda$collections$ImmutableArray* $tmp1493 = *(&local79);
panda$core$Bit $tmp1494 = panda$core$Bit$init$builtin_bit($tmp1493 != NULL);
bool $tmp1495 = $tmp1494.value;
if ($tmp1495) goto block133; else goto block134;
block133:;
// line 445
panda$core$MutableString* $tmp1496 = *(&local83);
panda$collections$ImmutableArray* $tmp1497 = *(&local79);
ITable* $tmp1498 = ((panda$collections$CollectionView*) $tmp1497)->$class->itable;
while ($tmp1498->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1498 = $tmp1498->next;
}
$fn1500 $tmp1499 = $tmp1498->methods[1];
panda$core$String* $tmp1501 = $tmp1499(((panda$collections$CollectionView*) $tmp1497));
panda$core$String* $tmp1502 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1503, $tmp1501);
panda$core$String* $tmp1504 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1502, &$s1505);
panda$core$MutableString$append$panda$core$String($tmp1496, $tmp1504);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1504));
// unreffing REF($2525:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1502));
// unreffing REF($2524:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1501));
// unreffing REF($2523:panda.core.String)
goto block134;
block134:;
// line 447
panda$core$MutableString* $tmp1506 = *(&local83);
panda$collections$ImmutableArray* $tmp1507 = *(&local80);
ITable* $tmp1508 = ((panda$collections$CollectionView*) $tmp1507)->$class->itable;
while ($tmp1508->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1508 = $tmp1508->next;
}
$fn1510 $tmp1509 = $tmp1508->methods[1];
panda$core$String* $tmp1511 = $tmp1509(((panda$collections$CollectionView*) $tmp1507));
panda$core$String* $tmp1512 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1513, $tmp1511);
panda$core$String* $tmp1514 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1512, &$s1515);
panda$core$MutableString$append$panda$core$String($tmp1506, $tmp1514);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1514));
// unreffing REF($2544:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1512));
// unreffing REF($2543:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1511));
// unreffing REF($2542:panda.core.String)
// line 448
org$pandalanguage$pandac$ASTNode* $tmp1516 = *(&local81);
panda$core$Bit $tmp1517 = panda$core$Bit$init$builtin_bit($tmp1516 != NULL);
bool $tmp1518 = $tmp1517.value;
if ($tmp1518) goto block135; else goto block136;
block135:;
// line 449
panda$core$MutableString* $tmp1519 = *(&local83);
org$pandalanguage$pandac$ASTNode* $tmp1520 = *(&local81);
panda$core$String* $tmp1521 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1522, ((panda$core$Object*) $tmp1520));
panda$core$String* $tmp1523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1521, &$s1524);
panda$core$MutableString$append$panda$core$String($tmp1519, $tmp1523);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1523));
// unreffing REF($2566:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1521));
// unreffing REF($2565:panda.core.String)
goto block136;
block136:;
// line 451
panda$collections$ImmutableArray* $tmp1525 = *(&local82);
panda$core$Bit $tmp1526 = panda$core$Bit$init$builtin_bit($tmp1525 != NULL);
bool $tmp1527 = $tmp1526.value;
if ($tmp1527) goto block137; else goto block138;
block137:;
// line 452
panda$core$MutableString* $tmp1528 = *(&local83);
panda$core$MutableString$append$panda$core$String($tmp1528, &$s1529);
// line 453
panda$collections$ImmutableArray* $tmp1530 = *(&local82);
ITable* $tmp1531 = ((panda$collections$Iterable*) $tmp1530)->$class->itable;
while ($tmp1531->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1531 = $tmp1531->next;
}
$fn1533 $tmp1532 = $tmp1531->methods[0];
panda$collections$Iterator* $tmp1534 = $tmp1532(((panda$collections$Iterable*) $tmp1530));
goto block139;
block139:;
ITable* $tmp1535 = $tmp1534->$class->itable;
while ($tmp1535->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1535 = $tmp1535->next;
}
$fn1537 $tmp1536 = $tmp1535->methods[0];
panda$core$Bit $tmp1538 = $tmp1536($tmp1534);
bool $tmp1539 = $tmp1538.value;
if ($tmp1539) goto block141; else goto block140;
block140:;
*(&local85) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1540 = $tmp1534->$class->itable;
while ($tmp1540->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1540 = $tmp1540->next;
}
$fn1542 $tmp1541 = $tmp1540->methods[1];
panda$core$Object* $tmp1543 = $tmp1541($tmp1534);
org$pandalanguage$pandac$ASTNode* $tmp1544 = *(&local85);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1544));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1543)));
*(&local85) = ((org$pandalanguage$pandac$ASTNode*) $tmp1543);
// line 454
panda$core$MutableString* $tmp1545 = *(&local83);
org$pandalanguage$pandac$ASTNode* $tmp1546 = *(&local85);
panda$core$String* $tmp1547 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1546), &$s1548);
panda$core$MutableString$append$panda$core$String($tmp1545, $tmp1547);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1547));
// unreffing REF($2612:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1543);
// unreffing REF($2600:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1549 = *(&local85);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1549));
// unreffing s
*(&local85) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block139;
block141:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1534));
// unreffing REF($2589:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 456
panda$core$MutableString* $tmp1550 = *(&local83);
panda$core$MutableString$append$panda$core$String($tmp1550, &$s1551);
goto block138;
block138:;
// line 458
panda$core$MutableString* $tmp1552 = *(&local83);
panda$core$String* $tmp1553 = panda$core$MutableString$finish$R$panda$core$String($tmp1552);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1553));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1553));
// unreffing REF($2635:panda.core.String)
panda$core$MutableString* $tmp1554 = *(&local83);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1554));
// unreffing result
*(&local83) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1447));
// unreffing REF($2414:panda.core.MutableString)
panda$collections$ImmutableArray* $tmp1555 = *(&local82);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1555));
// unreffing statements
*(&local82) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1556 = *(&local81);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1556));
// unreffing returnType
*(&local81) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp1557 = *(&local80);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1557));
// unreffing parameters
*(&local80) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1558 = *(&local79);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1558));
// unreffing generics
*(&local79) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp1559 = *(&local78);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1559));
// unreffing name
*(&local78) = ((panda$core$String*) NULL);
panda$collections$ImmutableArray* $tmp1560 = *(&local76);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1560));
// unreffing annotations
*(&local76) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1561 = *(&local75);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1561));
// unreffing dc
*(&local75) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1553;
block121:;
panda$core$Int64 $tmp1562 = (panda$core$Int64) {27};
panda$core$Bit $tmp1563 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp1562);
bool $tmp1564 = $tmp1563.value;
if ($tmp1564) goto block142; else goto block143;
block142:;
org$pandalanguage$pandac$Position* $tmp1565 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1566 = *$tmp1565;
org$pandalanguage$pandac$parser$Token$Kind* $tmp1567 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp1568 = *$tmp1567;
*(&local86) = $tmp1568;
panda$collections$ImmutableArray** $tmp1569 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp1570 = *$tmp1569;
*(&local87) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1571 = *(&local87);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1571));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1570));
*(&local87) = $tmp1570;
org$pandalanguage$pandac$ASTNode** $tmp1572 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1573 = *$tmp1572;
*(&local88) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1574 = *(&local88);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1574));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1573));
*(&local88) = $tmp1573;
// line 461
*(&local89) = ((panda$core$String*) NULL);
// line 462
org$pandalanguage$pandac$parser$Token$Kind $tmp1575 = *(&local86);
panda$core$Int64 $tmp1576 = $tmp1575.$rawValue;
panda$core$Int64 $tmp1577 = (panda$core$Int64) {91};
panda$core$Bit $tmp1578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1576, $tmp1577);
bool $tmp1579 = $tmp1578.value;
if ($tmp1579) goto block145; else goto block146;
block145:;
// line 464
panda$core$String* $tmp1580 = *(&local89);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1580));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1581));
*(&local89) = &$s1582;
goto block144;
block146:;
panda$core$Int64 $tmp1583 = (panda$core$Int64) {92};
panda$core$Bit $tmp1584 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1576, $tmp1583);
bool $tmp1585 = $tmp1584.value;
if ($tmp1585) goto block147; else goto block148;
block147:;
// line 467
panda$core$String* $tmp1586 = *(&local89);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1586));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1587));
*(&local89) = &$s1588;
goto block144;
block148:;
panda$core$Int64 $tmp1589 = (panda$core$Int64) {93};
panda$core$Bit $tmp1590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1576, $tmp1589);
bool $tmp1591 = $tmp1590.value;
if ($tmp1591) goto block149; else goto block150;
block149:;
// line 470
panda$core$String* $tmp1592 = *(&local89);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1592));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1593));
*(&local89) = &$s1594;
goto block144;
block150:;
panda$core$Int64 $tmp1595 = (panda$core$Int64) {94};
panda$core$Bit $tmp1596 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1576, $tmp1595);
bool $tmp1597 = $tmp1596.value;
if ($tmp1597) goto block151; else goto block144;
block151:;
// line 473
panda$core$String* $tmp1598 = *(&local89);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1598));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1599));
*(&local89) = &$s1600;
goto block144;
block144:;
// line 476
panda$collections$ImmutableArray* $tmp1601 = *(&local87);
ITable* $tmp1602 = ((panda$collections$CollectionView*) $tmp1601)->$class->itable;
while ($tmp1602->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1602 = $tmp1602->next;
}
$fn1604 $tmp1603 = $tmp1602->methods[1];
panda$core$String* $tmp1605 = $tmp1603(((panda$collections$CollectionView*) $tmp1601));
panda$core$String* $tmp1606 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1607, $tmp1605);
panda$core$String* $tmp1608 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1606, &$s1609);
panda$core$String* $tmp1610 = *(&local89);
panda$core$String* $tmp1611 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1608, $tmp1610);
panda$core$String* $tmp1612 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1611, &$s1613);
*(&local90) = ((panda$core$String*) NULL);
panda$core$String* $tmp1614 = *(&local90);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1614));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1612));
*(&local90) = $tmp1612;
// line 477
org$pandalanguage$pandac$ASTNode* $tmp1615 = *(&local88);
panda$core$Bit $tmp1616 = panda$core$Bit$init$builtin_bit($tmp1615 != NULL);
bool $tmp1617 = $tmp1616.value;
if ($tmp1617) goto block152; else goto block153;
block152:;
// line 478
panda$core$String* $tmp1618 = *(&local90);
panda$core$String* $tmp1619 = panda$core$String$convert$R$panda$core$String($tmp1618);
panda$core$String* $tmp1620 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1619, &$s1621);
org$pandalanguage$pandac$ASTNode* $tmp1622 = *(&local88);
panda$core$String* $tmp1623 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1620, ((panda$core$Object*) $tmp1622));
panda$core$String* $tmp1624 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1623, &$s1625);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1624));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1624));
// unreffing REF($2795:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1623));
// unreffing REF($2794:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1620));
// unreffing REF($2791:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1619));
// unreffing REF($2790:panda.core.String)
panda$core$String* $tmp1626 = *(&local90);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1626));
// unreffing partial
*(&local90) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1612));
// unreffing REF($2774:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1611));
// unreffing REF($2773:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1608));
// unreffing REF($2771:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1606));
// unreffing REF($2770:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1605));
// unreffing REF($2769:panda.core.String)
panda$core$String* $tmp1627 = *(&local89);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1627));
// unreffing yield
*(&local89) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1628 = *(&local88);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1628));
// unreffing returnType
*(&local88) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp1629 = *(&local87);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1629));
// unreffing paramTypes
*(&local87) = ((panda$collections$ImmutableArray*) NULL);
return $tmp1624;
block153:;
// line 480
panda$core$String* $tmp1630 = *(&local90);
panda$core$String* $tmp1631 = panda$core$String$convert$R$panda$core$String($tmp1630);
panda$core$String* $tmp1632 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1631, &$s1633);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1632));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1632));
// unreffing REF($2849:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1631));
// unreffing REF($2848:panda.core.String)
panda$core$String* $tmp1634 = *(&local90);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1634));
// unreffing partial
*(&local90) = ((panda$core$String*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1612));
// unreffing REF($2774:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1611));
// unreffing REF($2773:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1608));
// unreffing REF($2771:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1606));
// unreffing REF($2770:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1605));
// unreffing REF($2769:panda.core.String)
panda$core$String* $tmp1635 = *(&local89);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1635));
// unreffing yield
*(&local89) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1636 = *(&local88);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1636));
// unreffing returnType
*(&local88) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp1637 = *(&local87);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1637));
// unreffing paramTypes
*(&local87) = ((panda$collections$ImmutableArray*) NULL);
return $tmp1632;
block143:;
panda$core$Int64 $tmp1638 = (panda$core$Int64) {28};
panda$core$Bit $tmp1639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp1638);
bool $tmp1640 = $tmp1639.value;
if ($tmp1640) goto block154; else goto block155;
block154:;
// line 483
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1641));
return &$s1642;
block155:;
panda$core$Int64 $tmp1643 = (panda$core$Int64) {29};
panda$core$Bit $tmp1644 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp1643);
bool $tmp1645 = $tmp1644.value;
if ($tmp1645) goto block156; else goto block157;
block156:;
org$pandalanguage$pandac$Position* $tmp1646 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1647 = *$tmp1646;
org$pandalanguage$pandac$ASTNode** $tmp1648 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1649 = *$tmp1648;
*(&local91) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1650 = *(&local91);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1650));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1649));
*(&local91) = $tmp1649;
// line 486
org$pandalanguage$pandac$ASTNode* $tmp1651 = *(&local91);
panda$core$String* $tmp1652 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1651), &$s1653);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1652));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1652));
// unreffing REF($2920:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1654 = *(&local91);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1654));
// unreffing base
*(&local91) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1652;
block157:;
panda$core$Int64 $tmp1655 = (panda$core$Int64) {30};
panda$core$Bit $tmp1656 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp1655);
bool $tmp1657 = $tmp1656.value;
if ($tmp1657) goto block158; else goto block159;
block158:;
org$pandalanguage$pandac$Position* $tmp1658 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1659 = *$tmp1658;
panda$core$String** $tmp1660 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1661 = *$tmp1660;
*(&local92) = ((panda$core$String*) NULL);
panda$core$String* $tmp1662 = *(&local92);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1662));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1661));
*(&local92) = $tmp1661;
// line 489
panda$core$String* $tmp1663 = *(&local92);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1663));
panda$core$String* $tmp1664 = *(&local92);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1664));
// unreffing name
*(&local92) = ((panda$core$String*) NULL);
return $tmp1663;
block159:;
panda$core$Int64 $tmp1665 = (panda$core$Int64) {31};
panda$core$Bit $tmp1666 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp1665);
bool $tmp1667 = $tmp1666.value;
if ($tmp1667) goto block160; else goto block161;
block160:;
org$pandalanguage$pandac$Position* $tmp1668 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1669 = *$tmp1668;
panda$core$String** $tmp1670 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1671 = *$tmp1670;
*(&local93) = ((panda$core$String*) NULL);
panda$core$String* $tmp1672 = *(&local93);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1672));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1671));
*(&local93) = $tmp1671;
org$pandalanguage$pandac$ASTNode** $tmp1673 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1674 = *$tmp1673;
*(&local94) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1675 = *(&local94);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1675));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1674));
*(&local94) = $tmp1674;
// line 492
panda$core$String* $tmp1676 = *(&local93);
panda$core$String* $tmp1677 = panda$core$String$convert$R$panda$core$String($tmp1676);
panda$core$String* $tmp1678 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1677, &$s1679);
org$pandalanguage$pandac$ASTNode* $tmp1680 = *(&local94);
panda$core$String* $tmp1681 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1678, ((panda$core$Object*) $tmp1680));
panda$core$String* $tmp1682 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1681, &$s1683);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1682));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1682));
// unreffing REF($2988:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1681));
// unreffing REF($2987:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1678));
// unreffing REF($2984:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1677));
// unreffing REF($2983:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1684 = *(&local94);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1684));
// unreffing type
*(&local94) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1685 = *(&local93);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1685));
// unreffing name
*(&local93) = ((panda$core$String*) NULL);
return $tmp1682;
block161:;
panda$core$Int64 $tmp1686 = (panda$core$Int64) {32};
panda$core$Bit $tmp1687 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp1686);
bool $tmp1688 = $tmp1687.value;
if ($tmp1688) goto block162; else goto block163;
block162:;
org$pandalanguage$pandac$Position* $tmp1689 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1690 = *$tmp1689;
org$pandalanguage$pandac$parser$Token$Kind* $tmp1691 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp1692 = *$tmp1691;
*(&local95) = $tmp1692;
org$pandalanguage$pandac$ASTNode** $tmp1693 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1694 = *$tmp1693;
*(&local96) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1695 = *(&local96);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1695));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1694));
*(&local96) = $tmp1694;
// line 495
org$pandalanguage$pandac$parser$Token$Kind $tmp1696 = *(&local95);
panda$core$String* $tmp1697 = org$pandalanguage$pandac$parser$Token$Kind$convert$R$panda$core$String($tmp1696);
panda$core$String* $tmp1698 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1697, &$s1699);
org$pandalanguage$pandac$ASTNode* $tmp1700 = *(&local96);
panda$core$String* $tmp1701 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1698, ((panda$core$Object*) $tmp1700));
panda$core$String* $tmp1702 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1701, &$s1703);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1702));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1702));
// unreffing REF($3039:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1701));
// unreffing REF($3038:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1698));
// unreffing REF($3035:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1697));
// unreffing REF($3034:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1704 = *(&local96);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1704));
// unreffing base
*(&local96) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1702;
block163:;
panda$core$Int64 $tmp1705 = (panda$core$Int64) {33};
panda$core$Bit $tmp1706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp1705);
bool $tmp1707 = $tmp1706.value;
if ($tmp1707) goto block164; else goto block165;
block164:;
org$pandalanguage$pandac$Position* $tmp1708 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1709 = *$tmp1708;
org$pandalanguage$pandac$ASTNode** $tmp1710 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1711 = *$tmp1710;
*(&local97) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1712 = *(&local97);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1712));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1711));
*(&local97) = $tmp1711;
panda$core$Bit* $tmp1713 = (panda$core$Bit*) (param0->$data + 24);
panda$core$Bit $tmp1714 = *$tmp1713;
*(&local98) = $tmp1714;
org$pandalanguage$pandac$ASTNode** $tmp1715 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 25);
org$pandalanguage$pandac$ASTNode* $tmp1716 = *$tmp1715;
*(&local99) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1717 = *(&local99);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1717));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1716));
*(&local99) = $tmp1716;
org$pandalanguage$pandac$ASTNode** $tmp1718 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 33);
org$pandalanguage$pandac$ASTNode* $tmp1719 = *$tmp1718;
*(&local100) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1720 = *(&local100);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1720));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1719));
*(&local100) = $tmp1719;
// line 498
panda$core$MutableString* $tmp1721 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1721);
*(&local101) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp1722 = *(&local101);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1722));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1721));
*(&local101) = $tmp1721;
// line 499
org$pandalanguage$pandac$ASTNode* $tmp1723 = *(&local97);
panda$core$Bit $tmp1724 = panda$core$Bit$init$builtin_bit($tmp1723 != NULL);
bool $tmp1725 = $tmp1724.value;
if ($tmp1725) goto block166; else goto block167;
block166:;
// line 500
panda$core$MutableString* $tmp1726 = *(&local101);
org$pandalanguage$pandac$ASTNode* $tmp1727 = *(&local97);
panda$core$MutableString$append$panda$core$Object($tmp1726, ((panda$core$Object*) $tmp1727));
goto block167;
block167:;
// line 502
panda$core$Bit $tmp1728 = *(&local98);
bool $tmp1729 = $tmp1728.value;
if ($tmp1729) goto block168; else goto block170;
block168:;
// line 503
panda$core$MutableString* $tmp1730 = *(&local101);
panda$core$MutableString$append$panda$core$String($tmp1730, &$s1731);
goto block169;
block170:;
// line 1
// line 506
panda$core$MutableString* $tmp1732 = *(&local101);
panda$core$MutableString$append$panda$core$String($tmp1732, &$s1733);
goto block169;
block169:;
// line 508
org$pandalanguage$pandac$ASTNode* $tmp1734 = *(&local99);
panda$core$Bit $tmp1735 = panda$core$Bit$init$builtin_bit($tmp1734 != NULL);
bool $tmp1736 = $tmp1735.value;
if ($tmp1736) goto block171; else goto block172;
block171:;
// line 509
panda$core$MutableString* $tmp1737 = *(&local101);
org$pandalanguage$pandac$ASTNode* $tmp1738 = *(&local99);
panda$core$MutableString$append$panda$core$Object($tmp1737, ((panda$core$Object*) $tmp1738));
goto block172;
block172:;
// line 511
org$pandalanguage$pandac$ASTNode* $tmp1739 = *(&local100);
panda$core$Bit $tmp1740 = panda$core$Bit$init$builtin_bit($tmp1739 != NULL);
bool $tmp1741 = $tmp1740.value;
if ($tmp1741) goto block173; else goto block174;
block173:;
// line 512
panda$core$MutableString* $tmp1742 = *(&local101);
org$pandalanguage$pandac$ASTNode* $tmp1743 = *(&local100);
panda$core$String* $tmp1744 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1745, ((panda$core$Object*) $tmp1743));
panda$core$MutableString$append$panda$core$String($tmp1742, $tmp1744);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1744));
// unreffing REF($3153:panda.core.String)
goto block174;
block174:;
// line 514
panda$core$MutableString* $tmp1746 = *(&local101);
panda$core$String* $tmp1747 = panda$core$MutableString$finish$R$panda$core$String($tmp1746);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1747));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1747));
// unreffing REF($3161:panda.core.String)
panda$core$MutableString* $tmp1748 = *(&local101);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1748));
// unreffing result
*(&local101) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1721));
// unreffing REF($3097:panda.core.MutableString)
org$pandalanguage$pandac$ASTNode* $tmp1749 = *(&local100);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1749));
// unreffing step
*(&local100) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1750 = *(&local99);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1750));
// unreffing end
*(&local99) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1751 = *(&local97);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1751));
// unreffing start
*(&local97) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1747;
block165:;
panda$core$Int64 $tmp1752 = (panda$core$Int64) {34};
panda$core$Bit $tmp1753 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp1752);
bool $tmp1754 = $tmp1753.value;
if ($tmp1754) goto block175; else goto block176;
block175:;
org$pandalanguage$pandac$Position* $tmp1755 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1756 = *$tmp1755;
panda$core$Real64* $tmp1757 = (panda$core$Real64*) (param0->$data + 16);
panda$core$Real64 $tmp1758 = *$tmp1757;
*(&local102) = $tmp1758;
// line 517
panda$core$Real64 $tmp1759 = *(&local102);
panda$core$String* $tmp1760 = panda$core$Real64$convert$R$panda$core$String($tmp1759);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1760));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1760));
// unreffing REF($3202:panda.core.String)
return $tmp1760;
block176:;
panda$core$Int64 $tmp1761 = (panda$core$Int64) {35};
panda$core$Bit $tmp1762 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp1761);
bool $tmp1763 = $tmp1762.value;
if ($tmp1763) goto block177; else goto block178;
block177:;
org$pandalanguage$pandac$Position* $tmp1764 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1765 = *$tmp1764;
panda$core$String** $tmp1766 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1767 = *$tmp1766;
*(&local103) = ((panda$core$String*) NULL);
panda$core$String* $tmp1768 = *(&local103);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1768));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1767));
*(&local103) = $tmp1767;
// line 520
panda$core$String* $tmp1769 = *(&local103);
panda$core$String* $tmp1770 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1771, $tmp1769);
panda$core$String* $tmp1772 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1770, &$s1773);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1772));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1772));
// unreffing REF($3227:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1770));
// unreffing REF($3226:panda.core.String)
panda$core$String* $tmp1774 = *(&local103);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1774));
// unreffing src
*(&local103) = ((panda$core$String*) NULL);
return $tmp1772;
block178:;
panda$core$Int64 $tmp1775 = (panda$core$Int64) {36};
panda$core$Bit $tmp1776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp1775);
bool $tmp1777 = $tmp1776.value;
if ($tmp1777) goto block179; else goto block180;
block179:;
org$pandalanguage$pandac$Position* $tmp1778 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1779 = *$tmp1778;
org$pandalanguage$pandac$ASTNode** $tmp1780 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1781 = *$tmp1780;
*(&local104) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1782 = *(&local104);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1782));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1781));
*(&local104) = $tmp1781;
// line 523
org$pandalanguage$pandac$ASTNode* $tmp1783 = *(&local104);
panda$core$Bit $tmp1784 = panda$core$Bit$init$builtin_bit($tmp1783 != NULL);
bool $tmp1785 = $tmp1784.value;
if ($tmp1785) goto block181; else goto block182;
block181:;
// line 524
org$pandalanguage$pandac$ASTNode* $tmp1786 = *(&local104);
panda$core$String* $tmp1787 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1788, ((panda$core$Object*) $tmp1786));
panda$core$String* $tmp1789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1787, &$s1790);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1789));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1789));
// unreffing REF($3267:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1787));
// unreffing REF($3266:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1791 = *(&local104);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1791));
// unreffing value
*(&local104) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1789;
block182:;
// line 526
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1792));
org$pandalanguage$pandac$ASTNode* $tmp1793 = *(&local104);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1793));
// unreffing value
*(&local104) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return &$s1794;
block180:;
panda$core$Int64 $tmp1795 = (panda$core$Int64) {37};
panda$core$Bit $tmp1796 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp1795);
bool $tmp1797 = $tmp1796.value;
if ($tmp1797) goto block183; else goto block184;
block183:;
// line 529
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1798));
return &$s1799;
block184:;
panda$core$Int64 $tmp1800 = (panda$core$Int64) {38};
panda$core$Bit $tmp1801 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp1800);
bool $tmp1802 = $tmp1801.value;
if ($tmp1802) goto block185; else goto block186;
block185:;
org$pandalanguage$pandac$Position* $tmp1803 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1804 = *$tmp1803;
panda$core$String** $tmp1805 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1806 = *$tmp1805;
*(&local105) = ((panda$core$String*) NULL);
panda$core$String* $tmp1807 = *(&local105);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1807));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1806));
*(&local105) = $tmp1806;
// line 532
panda$core$String* $tmp1808 = *(&local105);
panda$core$String* $tmp1809 = panda$core$String$format$panda$core$String$R$panda$core$String($tmp1808, &$s1810);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1809));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1809));
// unreffing REF($3316:panda.core.String)
panda$core$String* $tmp1811 = *(&local105);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1811));
// unreffing str
*(&local105) = ((panda$core$String*) NULL);
return $tmp1809;
block186:;
panda$core$Int64 $tmp1812 = (panda$core$Int64) {39};
panda$core$Bit $tmp1813 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp1812);
bool $tmp1814 = $tmp1813.value;
if ($tmp1814) goto block187; else goto block188;
block187:;
// line 535
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1815));
return &$s1816;
block188:;
panda$core$Int64 $tmp1817 = (panda$core$Int64) {40};
panda$core$Bit $tmp1818 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp1817);
bool $tmp1819 = $tmp1818.value;
if ($tmp1819) goto block189; else goto block190;
block189:;
org$pandalanguage$pandac$Position* $tmp1820 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1821 = *$tmp1820;
panda$collections$ImmutableArray** $tmp1822 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp1823 = *$tmp1822;
*(&local106) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1824 = *(&local106);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1824));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1823));
*(&local106) = $tmp1823;
// line 538
panda$collections$ImmutableArray* $tmp1825 = *(&local106);
ITable* $tmp1826 = ((panda$collections$CollectionView*) $tmp1825)->$class->itable;
while ($tmp1826->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1826 = $tmp1826->next;
}
$fn1828 $tmp1827 = $tmp1826->methods[1];
panda$core$String* $tmp1829 = $tmp1827(((panda$collections$CollectionView*) $tmp1825));
panda$core$String* $tmp1830 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1831, $tmp1829);
panda$core$String* $tmp1832 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1830, &$s1833);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1832));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1832));
// unreffing REF($3357:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1830));
// unreffing REF($3356:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1829));
// unreffing REF($3355:panda.core.String)
panda$collections$ImmutableArray* $tmp1834 = *(&local106);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1834));
// unreffing arguments
*(&local106) = ((panda$collections$ImmutableArray*) NULL);
return $tmp1832;
block190:;
panda$core$Int64 $tmp1835 = (panda$core$Int64) {41};
panda$core$Bit $tmp1836 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp1835);
bool $tmp1837 = $tmp1836.value;
if ($tmp1837) goto block191; else goto block192;
block191:;
org$pandalanguage$pandac$Position* $tmp1838 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1839 = *$tmp1838;
panda$collections$ImmutableArray** $tmp1840 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp1841 = *$tmp1840;
*(&local107) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1842 = *(&local107);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1842));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1841));
*(&local107) = $tmp1841;
// line 541
panda$collections$ImmutableArray* $tmp1843 = *(&local107);
ITable* $tmp1844 = ((panda$collections$CollectionView*) $tmp1843)->$class->itable;
while ($tmp1844->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1844 = $tmp1844->next;
}
$fn1846 $tmp1845 = $tmp1844->methods[1];
panda$core$String* $tmp1847 = $tmp1845(((panda$collections$CollectionView*) $tmp1843));
panda$core$String* $tmp1848 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1849, $tmp1847);
panda$core$String* $tmp1850 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1848, &$s1851);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1850));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1850));
// unreffing REF($3396:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1848));
// unreffing REF($3395:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1847));
// unreffing REF($3394:panda.core.String)
panda$collections$ImmutableArray* $tmp1852 = *(&local107);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1852));
// unreffing parameters
*(&local107) = ((panda$collections$ImmutableArray*) NULL);
return $tmp1850;
block192:;
panda$core$Int64 $tmp1853 = (panda$core$Int64) {42};
panda$core$Bit $tmp1854 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp1853);
bool $tmp1855 = $tmp1854.value;
if ($tmp1855) goto block193; else goto block194;
block193:;
org$pandalanguage$pandac$Position* $tmp1856 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1857 = *$tmp1856;
panda$core$String** $tmp1858 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1859 = *$tmp1858;
*(&local108) = ((panda$core$String*) NULL);
panda$core$String* $tmp1860 = *(&local108);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1860));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1859));
*(&local108) = $tmp1859;
// line 544
panda$core$String* $tmp1861 = *(&local108);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1861));
panda$core$String* $tmp1862 = *(&local108);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1862));
// unreffing name
*(&local108) = ((panda$core$String*) NULL);
return $tmp1861;
block194:;
panda$core$Int64 $tmp1863 = (panda$core$Int64) {44};
panda$core$Bit $tmp1864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp1863);
bool $tmp1865 = $tmp1864.value;
if ($tmp1865) goto block195; else goto block196;
block195:;
org$pandalanguage$pandac$Position* $tmp1866 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1867 = *$tmp1866;
panda$core$String** $tmp1868 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1869 = *$tmp1868;
*(&local109) = ((panda$core$String*) NULL);
panda$core$String* $tmp1870 = *(&local109);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1870));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1869));
*(&local109) = $tmp1869;
org$pandalanguage$pandac$ASTNode** $tmp1871 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1872 = *$tmp1871;
*(&local110) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1873 = *(&local110);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1873));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1872));
*(&local110) = $tmp1872;
// line 547
org$pandalanguage$pandac$ASTNode* $tmp1874 = *(&local110);
panda$core$Bit $tmp1875 = panda$core$Bit$init$builtin_bit($tmp1874 != NULL);
bool $tmp1876 = $tmp1875.value;
if ($tmp1876) goto block197; else goto block198;
block197:;
// line 548
panda$core$String* $tmp1877 = *(&local109);
panda$core$String* $tmp1878 = panda$core$String$convert$R$panda$core$String($tmp1877);
panda$core$String* $tmp1879 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1878, &$s1880);
org$pandalanguage$pandac$ASTNode* $tmp1881 = *(&local110);
panda$core$String* $tmp1882 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1879, ((panda$core$Object*) $tmp1881));
panda$core$String* $tmp1883 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1882, &$s1884);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1883));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1883));
// unreffing REF($3476:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1882));
// unreffing REF($3475:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1879));
// unreffing REF($3472:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1878));
// unreffing REF($3471:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1885 = *(&local110);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1885));
// unreffing type
*(&local110) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1886 = *(&local109);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1886));
// unreffing name
*(&local109) = ((panda$core$String*) NULL);
return $tmp1883;
block198:;
// line 550
panda$core$String* $tmp1887 = *(&local109);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1887));
org$pandalanguage$pandac$ASTNode* $tmp1888 = *(&local110);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1888));
// unreffing type
*(&local110) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1889 = *(&local109);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1889));
// unreffing name
*(&local109) = ((panda$core$String*) NULL);
return $tmp1887;
block196:;
panda$core$Int64 $tmp1890 = (panda$core$Int64) {43};
panda$core$Bit $tmp1891 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp1890);
bool $tmp1892 = $tmp1891.value;
if ($tmp1892) goto block199; else goto block200;
block199:;
org$pandalanguage$pandac$Position* $tmp1893 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1894 = *$tmp1893;
panda$collections$ImmutableArray** $tmp1895 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp1896 = *$tmp1895;
*(&local111) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1897 = *(&local111);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1897));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1896));
*(&local111) = $tmp1896;
org$pandalanguage$pandac$ASTNode** $tmp1898 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1899 = *$tmp1898;
*(&local112) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1900 = *(&local112);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1900));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1899));
*(&local112) = $tmp1899;
// line 553
panda$collections$ImmutableArray* $tmp1901 = *(&local111);
ITable* $tmp1902 = ((panda$collections$CollectionView*) $tmp1901)->$class->itable;
while ($tmp1902->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1902 = $tmp1902->next;
}
$fn1904 $tmp1903 = $tmp1902->methods[1];
panda$core$String* $tmp1905 = $tmp1903(((panda$collections$CollectionView*) $tmp1901));
panda$core$String* $tmp1906 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1907, $tmp1905);
panda$core$String* $tmp1908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1906, &$s1909);
org$pandalanguage$pandac$ASTNode* $tmp1910 = *(&local112);
panda$core$String* $tmp1911 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1908, ((panda$core$Object*) $tmp1910));
panda$core$String* $tmp1912 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1911, &$s1913);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1912));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1912));
// unreffing REF($3551:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1911));
// unreffing REF($3550:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1908));
// unreffing REF($3547:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1906));
// unreffing REF($3546:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1905));
// unreffing REF($3545:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1914 = *(&local112);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1914));
// unreffing body
*(&local112) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp1915 = *(&local111);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1915));
// unreffing parameters
*(&local111) = ((panda$collections$ImmutableArray*) NULL);
return $tmp1912;
block200:;
panda$core$Int64 $tmp1916 = (panda$core$Int64) {45};
panda$core$Bit $tmp1917 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp1916);
bool $tmp1918 = $tmp1917.value;
if ($tmp1918) goto block201; else goto block202;
block201:;
org$pandalanguage$pandac$Position* $tmp1919 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1920 = *$tmp1919;
panda$collections$ImmutableArray** $tmp1921 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp1922 = *$tmp1921;
*(&local113) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1923 = *(&local113);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1923));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1922));
*(&local113) = $tmp1922;
org$pandalanguage$pandac$ASTNode** $tmp1924 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1925 = *$tmp1924;
*(&local114) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1926 = *(&local114);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1926));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1925));
*(&local114) = $tmp1925;
// line 556
panda$collections$ImmutableArray* $tmp1927 = *(&local113);
ITable* $tmp1928 = ((panda$collections$CollectionView*) $tmp1927)->$class->itable;
while ($tmp1928->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1928 = $tmp1928->next;
}
$fn1930 $tmp1929 = $tmp1928->methods[1];
panda$core$String* $tmp1931 = $tmp1929(((panda$collections$CollectionView*) $tmp1927));
panda$core$String* $tmp1932 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1933, $tmp1931);
panda$core$String* $tmp1934 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1932, &$s1935);
org$pandalanguage$pandac$ASTNode* $tmp1936 = *(&local114);
panda$core$String* $tmp1937 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1934, ((panda$core$Object*) $tmp1936));
panda$core$String* $tmp1938 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1937, &$s1939);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1938));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1938));
// unreffing REF($3614:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1937));
// unreffing REF($3613:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1934));
// unreffing REF($3610:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1932));
// unreffing REF($3609:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1931));
// unreffing REF($3608:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1940 = *(&local114);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1940));
// unreffing body
*(&local114) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp1941 = *(&local113);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1941));
// unreffing parameters
*(&local113) = ((panda$collections$ImmutableArray*) NULL);
return $tmp1938;
block202:;
panda$core$Int64 $tmp1942 = (panda$core$Int64) {46};
panda$core$Bit $tmp1943 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp1942);
bool $tmp1944 = $tmp1943.value;
if ($tmp1944) goto block203; else goto block204;
block203:;
org$pandalanguage$pandac$Position* $tmp1945 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1946 = *$tmp1945;
panda$core$String** $tmp1947 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1948 = *$tmp1947;
*(&local115) = ((panda$core$String*) NULL);
panda$core$String* $tmp1949 = *(&local115);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1949));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1948));
*(&local115) = $tmp1948;
// line 559
panda$core$String* $tmp1950 = *(&local115);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1950));
panda$core$String* $tmp1951 = *(&local115);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1951));
// unreffing name
*(&local115) = ((panda$core$String*) NULL);
return $tmp1950;
block204:;
panda$core$Int64 $tmp1952 = (panda$core$Int64) {47};
panda$core$Bit $tmp1953 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp1952);
bool $tmp1954 = $tmp1953.value;
if ($tmp1954) goto block205; else goto block206;
block205:;
org$pandalanguage$pandac$Position* $tmp1955 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1956 = *$tmp1955;
org$pandalanguage$pandac$Variable$Kind* $tmp1957 = (org$pandalanguage$pandac$Variable$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$Variable$Kind $tmp1958 = *$tmp1957;
*(&local116) = $tmp1958;
panda$collections$ImmutableArray** $tmp1959 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp1960 = *$tmp1959;
*(&local117) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1961 = *(&local117);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1961));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1960));
*(&local117) = $tmp1960;
// line 562
panda$core$MutableString* $tmp1962 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1962);
*(&local118) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp1963 = *(&local118);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1963));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1962));
*(&local118) = $tmp1962;
// line 563
org$pandalanguage$pandac$Variable$Kind $tmp1964 = *(&local116);
panda$core$Int64 $tmp1965 = $tmp1964.$rawValue;
panda$core$Int64 $tmp1966 = (panda$core$Int64) {0};
panda$core$Bit $tmp1967 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1965, $tmp1966);
bool $tmp1968 = $tmp1967.value;
if ($tmp1968) goto block208; else goto block209;
block208:;
// line 564
panda$core$MutableString* $tmp1969 = *(&local118);
panda$core$MutableString$append$panda$core$String($tmp1969, &$s1970);
goto block207;
block209:;
panda$core$Int64 $tmp1971 = (panda$core$Int64) {1};
panda$core$Bit $tmp1972 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1965, $tmp1971);
bool $tmp1973 = $tmp1972.value;
if ($tmp1973) goto block210; else goto block211;
block210:;
// line 565
panda$core$MutableString* $tmp1974 = *(&local118);
panda$core$MutableString$append$panda$core$String($tmp1974, &$s1975);
goto block207;
block211:;
panda$core$Int64 $tmp1976 = (panda$core$Int64) {2};
panda$core$Bit $tmp1977 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1965, $tmp1976);
bool $tmp1978 = $tmp1977.value;
if ($tmp1978) goto block212; else goto block213;
block212:;
// line 566
panda$core$MutableString* $tmp1979 = *(&local118);
panda$core$MutableString$append$panda$core$String($tmp1979, &$s1980);
goto block207;
block213:;
panda$core$Int64 $tmp1981 = (panda$core$Int64) {3};
panda$core$Bit $tmp1982 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1965, $tmp1981);
bool $tmp1983 = $tmp1982.value;
if ($tmp1983) goto block214; else goto block207;
block214:;
// line 567
panda$core$MutableString* $tmp1984 = *(&local118);
panda$core$MutableString$append$panda$core$String($tmp1984, &$s1985);
goto block207;
block207:;
// line 569
panda$core$MutableString* $tmp1986 = *(&local118);
panda$collections$ImmutableArray* $tmp1987 = *(&local117);
ITable* $tmp1988 = ((panda$collections$CollectionView*) $tmp1987)->$class->itable;
while ($tmp1988->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1988 = $tmp1988->next;
}
$fn1990 $tmp1989 = $tmp1988->methods[1];
panda$core$String* $tmp1991 = $tmp1989(((panda$collections$CollectionView*) $tmp1987));
panda$core$MutableString$append$panda$core$String($tmp1986, $tmp1991);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1991));
// unreffing REF($3736:panda.core.String)
// line 570
panda$core$MutableString* $tmp1992 = *(&local118);
panda$core$String* $tmp1993 = panda$core$MutableString$finish$R$panda$core$String($tmp1992);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1993));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1993));
// unreffing REF($3743:panda.core.String)
panda$core$MutableString* $tmp1994 = *(&local118);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1994));
// unreffing result
*(&local118) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1962));
// unreffing REF($3687:panda.core.MutableString)
panda$collections$ImmutableArray* $tmp1995 = *(&local117);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1995));
// unreffing decls
*(&local117) = ((panda$collections$ImmutableArray*) NULL);
return $tmp1993;
block206:;
panda$core$Int64 $tmp1996 = (panda$core$Int64) {48};
panda$core$Bit $tmp1997 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp1996);
bool $tmp1998 = $tmp1997.value;
if ($tmp1998) goto block215; else goto block216;
block215:;
org$pandalanguage$pandac$Position* $tmp1999 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2000 = *$tmp1999;
panda$collections$ImmutableArray** $tmp2001 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp2002 = *$tmp2001;
*(&local119) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2003 = *(&local119);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2003));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2002));
*(&local119) = $tmp2002;
panda$collections$ImmutableArray** $tmp2004 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp2005 = *$tmp2004;
*(&local120) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2006 = *(&local120);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2006));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2005));
*(&local120) = $tmp2005;
// line 573
panda$core$MutableString* $tmp2007 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp2007, &$s2008);
*(&local121) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp2009 = *(&local121);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2009));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2007));
*(&local121) = $tmp2007;
// line 574
*(&local122) = ((panda$core$String*) NULL);
panda$core$String* $tmp2010 = *(&local122);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2010));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2011));
*(&local122) = &$s2012;
// line 575
panda$collections$ImmutableArray* $tmp2013 = *(&local119);
ITable* $tmp2014 = ((panda$collections$Iterable*) $tmp2013)->$class->itable;
while ($tmp2014->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2014 = $tmp2014->next;
}
$fn2016 $tmp2015 = $tmp2014->methods[0];
panda$collections$Iterator* $tmp2017 = $tmp2015(((panda$collections$Iterable*) $tmp2013));
goto block217;
block217:;
ITable* $tmp2018 = $tmp2017->$class->itable;
while ($tmp2018->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2018 = $tmp2018->next;
}
$fn2020 $tmp2019 = $tmp2018->methods[0];
panda$core$Bit $tmp2021 = $tmp2019($tmp2017);
bool $tmp2022 = $tmp2021.value;
if ($tmp2022) goto block219; else goto block218;
block218:;
*(&local123) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2023 = $tmp2017->$class->itable;
while ($tmp2023->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2023 = $tmp2023->next;
}
$fn2025 $tmp2024 = $tmp2023->methods[1];
panda$core$Object* $tmp2026 = $tmp2024($tmp2017);
org$pandalanguage$pandac$ASTNode* $tmp2027 = *(&local123);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2027));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2026)));
*(&local123) = ((org$pandalanguage$pandac$ASTNode*) $tmp2026);
// line 576
panda$core$MutableString* $tmp2028 = *(&local121);
panda$core$String* $tmp2029 = *(&local122);
panda$core$String* $tmp2030 = panda$core$String$convert$R$panda$core$String($tmp2029);
panda$core$String* $tmp2031 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2030, &$s2032);
org$pandalanguage$pandac$ASTNode* $tmp2033 = *(&local123);
panda$core$String* $tmp2034 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2031, ((panda$core$Object*) $tmp2033));
panda$core$String* $tmp2035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2034, &$s2036);
panda$core$MutableString$append$panda$core$String($tmp2028, $tmp2035);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2035));
// unreffing REF($3837:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2034));
// unreffing REF($3836:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2031));
// unreffing REF($3833:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2030));
// unreffing REF($3832:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2026);
// unreffing REF($3821:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2037 = *(&local123);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2037));
// unreffing t
*(&local123) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block217;
block219:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2017));
// unreffing REF($3810:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 578
panda$core$MutableString* $tmp2038 = *(&local121);
panda$core$MutableString$append$panda$core$String($tmp2038, &$s2039);
// line 579
panda$collections$ImmutableArray* $tmp2040 = *(&local120);
ITable* $tmp2041 = ((panda$collections$Iterable*) $tmp2040)->$class->itable;
while ($tmp2041->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2041 = $tmp2041->next;
}
$fn2043 $tmp2042 = $tmp2041->methods[0];
panda$collections$Iterator* $tmp2044 = $tmp2042(((panda$collections$Iterable*) $tmp2040));
goto block220;
block220:;
ITable* $tmp2045 = $tmp2044->$class->itable;
while ($tmp2045->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2045 = $tmp2045->next;
}
$fn2047 $tmp2046 = $tmp2045->methods[0];
panda$core$Bit $tmp2048 = $tmp2046($tmp2044);
bool $tmp2049 = $tmp2048.value;
if ($tmp2049) goto block222; else goto block221;
block221:;
*(&local124) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2050 = $tmp2044->$class->itable;
while ($tmp2050->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2050 = $tmp2050->next;
}
$fn2052 $tmp2051 = $tmp2050->methods[1];
panda$core$Object* $tmp2053 = $tmp2051($tmp2044);
org$pandalanguage$pandac$ASTNode* $tmp2054 = *(&local124);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2054));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2053)));
*(&local124) = ((org$pandalanguage$pandac$ASTNode*) $tmp2053);
// line 580
panda$core$MutableString* $tmp2055 = *(&local121);
org$pandalanguage$pandac$ASTNode* $tmp2056 = *(&local124);
panda$core$String* $tmp2057 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2058, ((panda$core$Object*) $tmp2056));
panda$core$MutableString$append$panda$core$String($tmp2055, $tmp2057);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2057));
// unreffing REF($3894:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2053);
// unreffing REF($3882:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2059 = *(&local124);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2059));
// unreffing s
*(&local124) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block220;
block222:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2044));
// unreffing REF($3871:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 582
panda$core$MutableString* $tmp2060 = *(&local121);
panda$core$String* $tmp2061 = panda$core$MutableString$finish$R$panda$core$String($tmp2060);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2061));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2061));
// unreffing REF($3913:panda.core.String)
panda$core$String* $tmp2062 = *(&local122);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2062));
// unreffing separator
*(&local122) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp2063 = *(&local121);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2063));
// unreffing result
*(&local121) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2007));
// unreffing REF($3788:panda.core.MutableString)
panda$collections$ImmutableArray* $tmp2064 = *(&local120);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2064));
// unreffing statements
*(&local120) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2065 = *(&local119);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2065));
// unreffing tests
*(&local119) = ((panda$collections$ImmutableArray*) NULL);
return $tmp2061;
block216:;
panda$core$Int64 $tmp2066 = (panda$core$Int64) {49};
panda$core$Bit $tmp2067 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp508, $tmp2066);
bool $tmp2068 = $tmp2067.value;
if ($tmp2068) goto block223; else goto block224;
block223:;
org$pandalanguage$pandac$Position* $tmp2069 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2070 = *$tmp2069;
panda$core$String** $tmp2071 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2072 = *$tmp2071;
*(&local125) = ((panda$core$String*) NULL);
panda$core$String* $tmp2073 = *(&local125);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2073));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2072));
*(&local125) = $tmp2072;
org$pandalanguage$pandac$ASTNode** $tmp2074 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2075 = *$tmp2074;
*(&local126) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2076 = *(&local126);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2076));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2075));
*(&local126) = $tmp2075;
panda$collections$ImmutableArray** $tmp2077 = (panda$collections$ImmutableArray**) (param0->$data + 32);
panda$collections$ImmutableArray* $tmp2078 = *$tmp2077;
*(&local127) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2079 = *(&local127);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2079));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2078));
*(&local127) = $tmp2078;
// line 585
panda$core$MutableString* $tmp2080 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp2080);
*(&local128) = ((panda$core$MutableString*) NULL);
panda$core$MutableString* $tmp2081 = *(&local128);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2081));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2080));
*(&local128) = $tmp2080;
// line 586
panda$core$String* $tmp2082 = *(&local125);
panda$core$Bit $tmp2083 = panda$core$Bit$init$builtin_bit($tmp2082 != NULL);
bool $tmp2084 = $tmp2083.value;
if ($tmp2084) goto block225; else goto block226;
block225:;
// line 587
panda$core$MutableString* $tmp2085 = *(&local128);
panda$core$String* $tmp2086 = *(&local125);
panda$core$String* $tmp2087 = panda$core$String$convert$R$panda$core$String($tmp2086);
panda$core$String* $tmp2088 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2087, &$s2089);
panda$core$MutableString$append$panda$core$String($tmp2085, $tmp2088);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2088));
// unreffing REF($3997:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2087));
// unreffing REF($3996:panda.core.String)
goto block226;
block226:;
// line 589
panda$core$MutableString* $tmp2090 = *(&local128);
org$pandalanguage$pandac$ASTNode* $tmp2091 = *(&local126);
panda$core$String* $tmp2092 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2093, ((panda$core$Object*) $tmp2091));
panda$core$String* $tmp2094 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2092, &$s2095);
panda$core$MutableString$append$panda$core$String($tmp2090, $tmp2094);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2094));
// unreffing REF($4011:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2092));
// unreffing REF($4010:panda.core.String)
// line 590
panda$collections$ImmutableArray* $tmp2096 = *(&local127);
ITable* $tmp2097 = ((panda$collections$Iterable*) $tmp2096)->$class->itable;
while ($tmp2097->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2097 = $tmp2097->next;
}
$fn2099 $tmp2098 = $tmp2097->methods[0];
panda$collections$Iterator* $tmp2100 = $tmp2098(((panda$collections$Iterable*) $tmp2096));
goto block227;
block227:;
ITable* $tmp2101 = $tmp2100->$class->itable;
while ($tmp2101->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2101 = $tmp2101->next;
}
$fn2103 $tmp2102 = $tmp2101->methods[0];
panda$core$Bit $tmp2104 = $tmp2102($tmp2100);
bool $tmp2105 = $tmp2104.value;
if ($tmp2105) goto block229; else goto block228;
block228:;
*(&local129) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2106 = $tmp2100->$class->itable;
while ($tmp2106->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2106 = $tmp2106->next;
}
$fn2108 $tmp2107 = $tmp2106->methods[1];
panda$core$Object* $tmp2109 = $tmp2107($tmp2100);
org$pandalanguage$pandac$ASTNode* $tmp2110 = *(&local129);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2110));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2109)));
*(&local129) = ((org$pandalanguage$pandac$ASTNode*) $tmp2109);
// line 591
panda$core$MutableString* $tmp2111 = *(&local128);
org$pandalanguage$pandac$ASTNode* $tmp2112 = *(&local129);
panda$core$String* $tmp2113 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp2112), &$s2114);
panda$core$MutableString$append$panda$core$String($tmp2111, $tmp2113);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2113));
// unreffing REF($4047:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2109);
// unreffing REF($4035:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2115 = *(&local129);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2115));
// unreffing s
*(&local129) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block227;
block229:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2100));
// unreffing REF($4024:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 593
panda$core$MutableString* $tmp2116 = *(&local128);
panda$core$MutableString$append$panda$core$String($tmp2116, &$s2117);
// line 594
panda$core$MutableString* $tmp2118 = *(&local128);
panda$core$String* $tmp2119 = panda$core$MutableString$finish$R$panda$core$String($tmp2118);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2119));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2119));
// unreffing REF($4069:panda.core.String)
panda$core$MutableString* $tmp2120 = *(&local128);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2120));
// unreffing result
*(&local128) = ((panda$core$MutableString*) NULL);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2080));
// unreffing REF($3977:panda.core.MutableString)
panda$collections$ImmutableArray* $tmp2121 = *(&local127);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2121));
// unreffing statements
*(&local127) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2122 = *(&local126);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2122));
// unreffing test
*(&local126) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2123 = *(&local125);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2123));
// unreffing label
*(&local125) = ((panda$core$String*) NULL);
return $tmp2119;
block224:;
// line 597
panda$core$Bit $tmp2124 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2125 = $tmp2124.value;
if ($tmp2125) goto block230; else goto block231;
block231:;
panda$core$Int64 $tmp2126 = (panda$core$Int64) {597};
panda$core$Int64* $tmp2127 = &param0->$rawValue;
panda$core$Int64 $tmp2128 = *$tmp2127;
panda$core$Int64$wrapper* $tmp2129;
$tmp2129 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp2129->value = $tmp2128;
panda$core$String* $tmp2130 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2131, ((panda$core$Object*) $tmp2129));
panda$core$String* $tmp2132 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2130, &$s2133);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2134, $tmp2126, $tmp2132);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2132));
// unreffing REF($4108:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2130));
// unreffing REF($4107:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2129));
// unreffing REF($4106:panda.core.Object)
abort(); // unreachable
block230:;
goto block1;
block1:;
panda$core$Bit $tmp2135 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2136 = $tmp2135.value;
if ($tmp2136) goto block232; else goto block233;
block233:;
panda$core$Int64 $tmp2137 = (panda$core$Int64) {245};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2138, $tmp2137, &$s2139);
abort(); // unreachable
block232:;
abort(); // unreachable

}
void org$pandalanguage$pandac$ASTNode$cleanup(org$pandalanguage$pandac$ASTNode* param0) {

org$pandalanguage$pandac$Position local0;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
org$pandalanguage$pandac$Position local4;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
org$pandalanguage$pandac$ASTNode* local6 = NULL;
org$pandalanguage$pandac$Position local7;
org$pandalanguage$pandac$ASTNode* local8 = NULL;
org$pandalanguage$pandac$Position local9;
org$pandalanguage$pandac$Position local10;
org$pandalanguage$pandac$ASTNode* local11 = NULL;
org$pandalanguage$pandac$parser$Token$Kind local12;
org$pandalanguage$pandac$ASTNode* local13 = NULL;
org$pandalanguage$pandac$Position local14;
panda$core$Bit local15;
org$pandalanguage$pandac$Position local16;
panda$collections$ImmutableArray* local17 = NULL;
org$pandalanguage$pandac$Position local18;
panda$core$String* local19 = NULL;
org$pandalanguage$pandac$Position local20;
org$pandalanguage$pandac$ASTNode* local21 = NULL;
panda$collections$ImmutableArray* local22 = NULL;
org$pandalanguage$pandac$Position local23;
org$pandalanguage$pandac$ASTNode* local24 = NULL;
panda$core$String* local25 = NULL;
panda$collections$ImmutableArray* local26 = NULL;
org$pandalanguage$pandac$Position local27;
org$pandalanguage$pandac$ASTNode* local28 = NULL;
org$pandalanguage$pandac$ChoiceCase* local29 = NULL;
panda$core$Int64 local30;
org$pandalanguage$pandac$Position local31;
org$pandalanguage$pandac$ASTNode* local32 = NULL;
panda$collections$ImmutableArray* local33 = NULL;
org$pandalanguage$pandac$ClassDecl$Kind local34;
panda$core$String* local35 = NULL;
panda$collections$ImmutableArray* local36 = NULL;
panda$collections$ImmutableArray* local37 = NULL;
panda$collections$ImmutableArray* local38 = NULL;
org$pandalanguage$pandac$Position local39;
panda$core$String* local40 = NULL;
org$pandalanguage$pandac$Position local41;
org$pandalanguage$pandac$ASTNode* local42 = NULL;
org$pandalanguage$pandac$ASTNode* local43 = NULL;
org$pandalanguage$pandac$Position local44;
panda$core$String* local45 = NULL;
panda$collections$ImmutableArray* local46 = NULL;
org$pandalanguage$pandac$ASTNode* local47 = NULL;
org$pandalanguage$pandac$Position local48;
org$pandalanguage$pandac$ASTNode* local49 = NULL;
panda$core$String* local50 = NULL;
org$pandalanguage$pandac$Position local51;
org$pandalanguage$pandac$ASTNode* local52 = NULL;
panda$collections$ImmutableArray* local53 = NULL;
org$pandalanguage$pandac$ASTNode* local54 = NULL;
panda$collections$ImmutableArray* local55 = NULL;
org$pandalanguage$pandac$Position local56;
panda$core$String* local57 = NULL;
org$pandalanguage$pandac$ASTNode* local58 = NULL;
org$pandalanguage$pandac$ASTNode* local59 = NULL;
panda$collections$ImmutableArray* local60 = NULL;
org$pandalanguage$pandac$Position local61;
panda$core$String* local62 = NULL;
panda$collections$ImmutableArray* local63 = NULL;
org$pandalanguage$pandac$Position local64;
panda$core$String* local65 = NULL;
org$pandalanguage$pandac$Position local66;
org$pandalanguage$pandac$ASTNode* local67 = NULL;
panda$collections$ImmutableArray* local68 = NULL;
org$pandalanguage$pandac$ASTNode* local69 = NULL;
org$pandalanguage$pandac$Position local70;
panda$core$UInt64 local71;
org$pandalanguage$pandac$Position local72;
org$pandalanguage$pandac$IR$Value* local73 = NULL;
org$pandalanguage$pandac$Position local74;
panda$core$String* local75 = NULL;
panda$collections$ImmutableArray* local76 = NULL;
org$pandalanguage$pandac$Position local77;
org$pandalanguage$pandac$ASTNode* local78 = NULL;
panda$collections$ImmutableArray* local79 = NULL;
panda$collections$ImmutableArray* local80 = NULL;
org$pandalanguage$pandac$Position local81;
org$pandalanguage$pandac$ASTNode* local82 = NULL;
panda$collections$ImmutableArray* local83 = NULL;
org$pandalanguage$pandac$MethodDecl$Kind local84;
panda$core$String* local85 = NULL;
panda$collections$ImmutableArray* local86 = NULL;
panda$collections$ImmutableArray* local87 = NULL;
org$pandalanguage$pandac$ASTNode* local88 = NULL;
panda$collections$ImmutableArray* local89 = NULL;
org$pandalanguage$pandac$Position local90;
org$pandalanguage$pandac$parser$Token$Kind local91;
panda$collections$ImmutableArray* local92 = NULL;
org$pandalanguage$pandac$ASTNode* local93 = NULL;
org$pandalanguage$pandac$Position local94;
org$pandalanguage$pandac$Position local95;
org$pandalanguage$pandac$ASTNode* local96 = NULL;
org$pandalanguage$pandac$Position local97;
panda$core$String* local98 = NULL;
org$pandalanguage$pandac$Position local99;
panda$core$String* local100 = NULL;
org$pandalanguage$pandac$ASTNode* local101 = NULL;
org$pandalanguage$pandac$Position local102;
org$pandalanguage$pandac$parser$Token$Kind local103;
org$pandalanguage$pandac$ASTNode* local104 = NULL;
org$pandalanguage$pandac$Position local105;
org$pandalanguage$pandac$ASTNode* local106 = NULL;
panda$core$Bit local107;
org$pandalanguage$pandac$ASTNode* local108 = NULL;
org$pandalanguage$pandac$ASTNode* local109 = NULL;
org$pandalanguage$pandac$Position local110;
panda$core$Real64 local111;
org$pandalanguage$pandac$Position local112;
panda$core$String* local113 = NULL;
org$pandalanguage$pandac$Position local114;
org$pandalanguage$pandac$ASTNode* local115 = NULL;
org$pandalanguage$pandac$Position local116;
org$pandalanguage$pandac$Position local117;
panda$core$String* local118 = NULL;
org$pandalanguage$pandac$Position local119;
org$pandalanguage$pandac$Position local120;
panda$collections$ImmutableArray* local121 = NULL;
org$pandalanguage$pandac$Position local122;
panda$collections$ImmutableArray* local123 = NULL;
org$pandalanguage$pandac$Position local124;
panda$core$String* local125 = NULL;
org$pandalanguage$pandac$Position local126;
panda$collections$ImmutableArray* local127 = NULL;
org$pandalanguage$pandac$ASTNode* local128 = NULL;
org$pandalanguage$pandac$Position local129;
panda$core$String* local130 = NULL;
org$pandalanguage$pandac$ASTNode* local131 = NULL;
org$pandalanguage$pandac$Position local132;
panda$collections$ImmutableArray* local133 = NULL;
org$pandalanguage$pandac$ASTNode* local134 = NULL;
org$pandalanguage$pandac$Position local135;
panda$core$String* local136 = NULL;
org$pandalanguage$pandac$Position local137;
org$pandalanguage$pandac$Variable$Kind local138;
panda$collections$ImmutableArray* local139 = NULL;
org$pandalanguage$pandac$Position local140;
panda$collections$ImmutableArray* local141 = NULL;
panda$collections$ImmutableArray* local142 = NULL;
org$pandalanguage$pandac$Position local143;
panda$core$String* local144 = NULL;
org$pandalanguage$pandac$ASTNode* local145 = NULL;
panda$collections$ImmutableArray* local146 = NULL;
// line 6
panda$core$Int64* $tmp2140 = &param0->$rawValue;
panda$core$Int64 $tmp2141 = *$tmp2140;
panda$core$Int64 $tmp2142 = (panda$core$Int64) {0};
panda$core$Bit $tmp2143 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2142);
bool $tmp2144 = $tmp2143.value;
if ($tmp2144) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp2145 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2146 = *$tmp2145;
*(&local0) = $tmp2146;
panda$core$String** $tmp2147 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2148 = *$tmp2147;
*(&local1) = ((panda$core$String*) NULL);
panda$core$String* $tmp2149 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2149));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2148));
*(&local1) = $tmp2148;
panda$core$String** $tmp2150 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp2151 = *$tmp2150;
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp2152 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2152));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2151));
*(&local2) = $tmp2151;
org$pandalanguage$pandac$ASTNode** $tmp2153 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2154 = *$tmp2153;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2155 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2155));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2154));
*(&local3) = $tmp2154;
// line 1
panda$core$String* $tmp2156 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2156));
// line 1
panda$core$String* $tmp2157 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2157));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2158 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2158));
org$pandalanguage$pandac$ASTNode* $tmp2159 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2159));
// unreffing _f3
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2160 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2160));
// unreffing _f2
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp2161 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2161));
// unreffing _f1
*(&local1) = ((panda$core$String*) NULL);
goto block1;
block3:;
panda$core$Int64 $tmp2162 = (panda$core$Int64) {1};
panda$core$Bit $tmp2163 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2162);
bool $tmp2164 = $tmp2163.value;
if ($tmp2164) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Position* $tmp2165 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2166 = *$tmp2165;
*(&local4) = $tmp2166;
org$pandalanguage$pandac$ASTNode** $tmp2167 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2168 = *$tmp2167;
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2169 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2169));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2168));
*(&local5) = $tmp2168;
org$pandalanguage$pandac$ASTNode** $tmp2170 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2171 = *$tmp2170;
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2172 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2172));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2171));
*(&local6) = $tmp2171;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2173 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2173));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2174 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2174));
org$pandalanguage$pandac$ASTNode* $tmp2175 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2175));
// unreffing _f2
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2176 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2176));
// unreffing _f1
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block5:;
panda$core$Int64 $tmp2177 = (panda$core$Int64) {2};
panda$core$Bit $tmp2178 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2177);
bool $tmp2179 = $tmp2178.value;
if ($tmp2179) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$Position* $tmp2180 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2181 = *$tmp2180;
*(&local7) = $tmp2181;
org$pandalanguage$pandac$ASTNode** $tmp2182 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2183 = *$tmp2182;
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2184 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2184));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2183));
*(&local8) = $tmp2183;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2185 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2185));
org$pandalanguage$pandac$ASTNode* $tmp2186 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2186));
// unreffing _f1
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block7:;
panda$core$Int64 $tmp2187 = (panda$core$Int64) {3};
panda$core$Bit $tmp2188 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2187);
bool $tmp2189 = $tmp2188.value;
if ($tmp2189) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$Position* $tmp2190 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2191 = *$tmp2190;
*(&local9) = $tmp2191;
goto block1;
block9:;
panda$core$Int64 $tmp2192 = (panda$core$Int64) {4};
panda$core$Bit $tmp2193 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2192);
bool $tmp2194 = $tmp2193.value;
if ($tmp2194) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Position* $tmp2195 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2196 = *$tmp2195;
*(&local10) = $tmp2196;
org$pandalanguage$pandac$ASTNode** $tmp2197 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2198 = *$tmp2197;
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2199 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2199));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2198));
*(&local11) = $tmp2198;
org$pandalanguage$pandac$parser$Token$Kind* $tmp2200 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 24);
org$pandalanguage$pandac$parser$Token$Kind $tmp2201 = *$tmp2200;
*(&local12) = $tmp2201;
org$pandalanguage$pandac$ASTNode** $tmp2202 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2203 = *$tmp2202;
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2204 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2204));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2203));
*(&local13) = $tmp2203;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2205 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2205));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2206 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2206));
org$pandalanguage$pandac$ASTNode* $tmp2207 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2207));
// unreffing _f3
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2208 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2208));
// unreffing _f1
*(&local11) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block11:;
panda$core$Int64 $tmp2209 = (panda$core$Int64) {5};
panda$core$Bit $tmp2210 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2209);
bool $tmp2211 = $tmp2210.value;
if ($tmp2211) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Position* $tmp2212 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2213 = *$tmp2212;
*(&local14) = $tmp2213;
panda$core$Bit* $tmp2214 = (panda$core$Bit*) (param0->$data + 16);
panda$core$Bit $tmp2215 = *$tmp2214;
*(&local15) = $tmp2215;
goto block1;
block13:;
panda$core$Int64 $tmp2216 = (panda$core$Int64) {6};
panda$core$Bit $tmp2217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2216);
bool $tmp2218 = $tmp2217.value;
if ($tmp2218) goto block14; else goto block15;
block14:;
org$pandalanguage$pandac$Position* $tmp2219 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2220 = *$tmp2219;
*(&local16) = $tmp2220;
panda$collections$ImmutableArray** $tmp2221 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp2222 = *$tmp2221;
*(&local17) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2223 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2223));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2222));
*(&local17) = $tmp2222;
// line 1
panda$collections$ImmutableArray* $tmp2224 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2224));
panda$collections$ImmutableArray* $tmp2225 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2225));
// unreffing _f1
*(&local17) = ((panda$collections$ImmutableArray*) NULL);
goto block1;
block15:;
panda$core$Int64 $tmp2226 = (panda$core$Int64) {7};
panda$core$Bit $tmp2227 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2226);
bool $tmp2228 = $tmp2227.value;
if ($tmp2228) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$Position* $tmp2229 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2230 = *$tmp2229;
*(&local18) = $tmp2230;
panda$core$String** $tmp2231 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2232 = *$tmp2231;
*(&local19) = ((panda$core$String*) NULL);
panda$core$String* $tmp2233 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2233));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2232));
*(&local19) = $tmp2232;
// line 1
panda$core$String* $tmp2234 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2234));
panda$core$String* $tmp2235 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2235));
// unreffing _f1
*(&local19) = ((panda$core$String*) NULL);
goto block1;
block17:;
panda$core$Int64 $tmp2236 = (panda$core$Int64) {8};
panda$core$Bit $tmp2237 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2236);
bool $tmp2238 = $tmp2237.value;
if ($tmp2238) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$Position* $tmp2239 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2240 = *$tmp2239;
*(&local20) = $tmp2240;
org$pandalanguage$pandac$ASTNode** $tmp2241 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2242 = *$tmp2241;
*(&local21) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2243 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2243));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2242));
*(&local21) = $tmp2242;
panda$collections$ImmutableArray** $tmp2244 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp2245 = *$tmp2244;
*(&local22) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2246 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2246));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2245));
*(&local22) = $tmp2245;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2247 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2247));
// line 1
panda$collections$ImmutableArray* $tmp2248 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2248));
panda$collections$ImmutableArray* $tmp2249 = *(&local22);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2249));
// unreffing _f2
*(&local22) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2250 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2250));
// unreffing _f1
*(&local21) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block19:;
panda$core$Int64 $tmp2251 = (panda$core$Int64) {9};
panda$core$Bit $tmp2252 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2251);
bool $tmp2253 = $tmp2252.value;
if ($tmp2253) goto block20; else goto block21;
block20:;
org$pandalanguage$pandac$Position* $tmp2254 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2255 = *$tmp2254;
*(&local23) = $tmp2255;
org$pandalanguage$pandac$ASTNode** $tmp2256 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2257 = *$tmp2256;
*(&local24) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2258 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2258));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2257));
*(&local24) = $tmp2257;
panda$core$String** $tmp2259 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp2260 = *$tmp2259;
*(&local25) = ((panda$core$String*) NULL);
panda$core$String* $tmp2261 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2261));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2260));
*(&local25) = $tmp2260;
panda$collections$ImmutableArray** $tmp2262 = (panda$collections$ImmutableArray**) (param0->$data + 32);
panda$collections$ImmutableArray* $tmp2263 = *$tmp2262;
*(&local26) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2264 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2264));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2263));
*(&local26) = $tmp2263;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2265 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2265));
// line 1
panda$core$String* $tmp2266 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2266));
// line 1
panda$collections$ImmutableArray* $tmp2267 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2267));
panda$collections$ImmutableArray* $tmp2268 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2268));
// unreffing _f3
*(&local26) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp2269 = *(&local25);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2269));
// unreffing _f2
*(&local25) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2270 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2270));
// unreffing _f1
*(&local24) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block21:;
panda$core$Int64 $tmp2271 = (panda$core$Int64) {10};
panda$core$Bit $tmp2272 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2271);
bool $tmp2273 = $tmp2272.value;
if ($tmp2273) goto block22; else goto block23;
block22:;
org$pandalanguage$pandac$Position* $tmp2274 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2275 = *$tmp2274;
*(&local27) = $tmp2275;
org$pandalanguage$pandac$ASTNode** $tmp2276 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2277 = *$tmp2276;
*(&local28) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2278 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2278));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2277));
*(&local28) = $tmp2277;
org$pandalanguage$pandac$ChoiceCase** $tmp2279 = (org$pandalanguage$pandac$ChoiceCase**) (param0->$data + 24);
org$pandalanguage$pandac$ChoiceCase* $tmp2280 = *$tmp2279;
*(&local29) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
org$pandalanguage$pandac$ChoiceCase* $tmp2281 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2281));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2280));
*(&local29) = $tmp2280;
panda$core$Int64* $tmp2282 = (panda$core$Int64*) (param0->$data + 32);
panda$core$Int64 $tmp2283 = *$tmp2282;
*(&local30) = $tmp2283;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2284 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2284));
// line 1
org$pandalanguage$pandac$ChoiceCase* $tmp2285 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2285));
org$pandalanguage$pandac$ChoiceCase* $tmp2286 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2286));
// unreffing _f2
*(&local29) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2287 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2287));
// unreffing _f1
*(&local28) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block23:;
panda$core$Int64 $tmp2288 = (panda$core$Int64) {11};
panda$core$Bit $tmp2289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2288);
bool $tmp2290 = $tmp2289.value;
if ($tmp2290) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Position* $tmp2291 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2292 = *$tmp2291;
*(&local31) = $tmp2292;
org$pandalanguage$pandac$ASTNode** $tmp2293 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2294 = *$tmp2293;
*(&local32) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2295 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2295));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2294));
*(&local32) = $tmp2294;
panda$collections$ImmutableArray** $tmp2296 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp2297 = *$tmp2296;
*(&local33) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2298 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2298));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2297));
*(&local33) = $tmp2297;
org$pandalanguage$pandac$ClassDecl$Kind* $tmp2299 = (org$pandalanguage$pandac$ClassDecl$Kind*) (param0->$data + 32);
org$pandalanguage$pandac$ClassDecl$Kind $tmp2300 = *$tmp2299;
*(&local34) = $tmp2300;
panda$core$String** $tmp2301 = (panda$core$String**) (param0->$data + 40);
panda$core$String* $tmp2302 = *$tmp2301;
*(&local35) = ((panda$core$String*) NULL);
panda$core$String* $tmp2303 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2303));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2302));
*(&local35) = $tmp2302;
panda$collections$ImmutableArray** $tmp2304 = (panda$collections$ImmutableArray**) (param0->$data + 48);
panda$collections$ImmutableArray* $tmp2305 = *$tmp2304;
*(&local36) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2306 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2306));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2305));
*(&local36) = $tmp2305;
panda$collections$ImmutableArray** $tmp2307 = (panda$collections$ImmutableArray**) (param0->$data + 56);
panda$collections$ImmutableArray* $tmp2308 = *$tmp2307;
*(&local37) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2309 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2309));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2308));
*(&local37) = $tmp2308;
panda$collections$ImmutableArray** $tmp2310 = (panda$collections$ImmutableArray**) (param0->$data + 64);
panda$collections$ImmutableArray* $tmp2311 = *$tmp2310;
*(&local38) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2312 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2312));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2311));
*(&local38) = $tmp2311;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2313 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2313));
// line 1
panda$collections$ImmutableArray* $tmp2314 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2314));
// line 1
panda$core$String* $tmp2315 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2315));
// line 1
panda$collections$ImmutableArray* $tmp2316 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2316));
// line 1
panda$collections$ImmutableArray* $tmp2317 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2317));
// line 1
panda$collections$ImmutableArray* $tmp2318 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2318));
panda$collections$ImmutableArray* $tmp2319 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2319));
// unreffing _f7
*(&local38) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2320 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2320));
// unreffing _f6
*(&local37) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2321 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2321));
// unreffing _f5
*(&local36) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp2322 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2322));
// unreffing _f4
*(&local35) = ((panda$core$String*) NULL);
panda$collections$ImmutableArray* $tmp2323 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2323));
// unreffing _f2
*(&local33) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2324 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2324));
// unreffing _f1
*(&local32) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block25:;
panda$core$Int64 $tmp2325 = (panda$core$Int64) {12};
panda$core$Bit $tmp2326 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2325);
bool $tmp2327 = $tmp2326.value;
if ($tmp2327) goto block26; else goto block27;
block26:;
org$pandalanguage$pandac$Position* $tmp2328 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2329 = *$tmp2328;
*(&local39) = $tmp2329;
panda$core$String** $tmp2330 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2331 = *$tmp2330;
*(&local40) = ((panda$core$String*) NULL);
panda$core$String* $tmp2332 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2332));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2331));
*(&local40) = $tmp2331;
// line 1
panda$core$String* $tmp2333 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2333));
panda$core$String* $tmp2334 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2334));
// unreffing _f1
*(&local40) = ((panda$core$String*) NULL);
goto block1;
block27:;
panda$core$Int64 $tmp2335 = (panda$core$Int64) {13};
panda$core$Bit $tmp2336 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2335);
bool $tmp2337 = $tmp2336.value;
if ($tmp2337) goto block28; else goto block29;
block28:;
org$pandalanguage$pandac$Position* $tmp2338 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2339 = *$tmp2338;
*(&local41) = $tmp2339;
org$pandalanguage$pandac$ASTNode** $tmp2340 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2341 = *$tmp2340;
*(&local42) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2342 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2342));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2341));
*(&local42) = $tmp2341;
org$pandalanguage$pandac$ASTNode** $tmp2343 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2344 = *$tmp2343;
*(&local43) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2345 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2345));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2344));
*(&local43) = $tmp2344;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2346 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2346));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2347 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2347));
org$pandalanguage$pandac$ASTNode* $tmp2348 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2348));
// unreffing _f2
*(&local43) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2349 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2349));
// unreffing _f1
*(&local42) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block29:;
panda$core$Int64 $tmp2350 = (panda$core$Int64) {14};
panda$core$Bit $tmp2351 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2350);
bool $tmp2352 = $tmp2351.value;
if ($tmp2352) goto block30; else goto block31;
block30:;
org$pandalanguage$pandac$Position* $tmp2353 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2354 = *$tmp2353;
*(&local44) = $tmp2354;
panda$core$String** $tmp2355 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2356 = *$tmp2355;
*(&local45) = ((panda$core$String*) NULL);
panda$core$String* $tmp2357 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2357));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2356));
*(&local45) = $tmp2356;
panda$collections$ImmutableArray** $tmp2358 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp2359 = *$tmp2358;
*(&local46) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2360 = *(&local46);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2360));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2359));
*(&local46) = $tmp2359;
org$pandalanguage$pandac$ASTNode** $tmp2361 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2362 = *$tmp2361;
*(&local47) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2363 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2363));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2362));
*(&local47) = $tmp2362;
// line 1
panda$core$String* $tmp2364 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2364));
// line 1
panda$collections$ImmutableArray* $tmp2365 = *(&local46);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2365));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2366 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2366));
org$pandalanguage$pandac$ASTNode* $tmp2367 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2367));
// unreffing _f3
*(&local47) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp2368 = *(&local46);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2368));
// unreffing _f2
*(&local46) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp2369 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2369));
// unreffing _f1
*(&local45) = ((panda$core$String*) NULL);
goto block1;
block31:;
panda$core$Int64 $tmp2370 = (panda$core$Int64) {15};
panda$core$Bit $tmp2371 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2370);
bool $tmp2372 = $tmp2371.value;
if ($tmp2372) goto block32; else goto block33;
block32:;
org$pandalanguage$pandac$Position* $tmp2373 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2374 = *$tmp2373;
*(&local48) = $tmp2374;
org$pandalanguage$pandac$ASTNode** $tmp2375 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2376 = *$tmp2375;
*(&local49) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2377 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2377));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2376));
*(&local49) = $tmp2376;
panda$core$String** $tmp2378 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp2379 = *$tmp2378;
*(&local50) = ((panda$core$String*) NULL);
panda$core$String* $tmp2380 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2380));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2379));
*(&local50) = $tmp2379;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2381 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2381));
// line 1
panda$core$String* $tmp2382 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2382));
panda$core$String* $tmp2383 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2383));
// unreffing _f2
*(&local50) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2384 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2384));
// unreffing _f1
*(&local49) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block33:;
panda$core$Int64 $tmp2385 = (panda$core$Int64) {16};
panda$core$Bit $tmp2386 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2385);
bool $tmp2387 = $tmp2386.value;
if ($tmp2387) goto block34; else goto block35;
block34:;
org$pandalanguage$pandac$Position* $tmp2388 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2389 = *$tmp2388;
*(&local51) = $tmp2389;
org$pandalanguage$pandac$ASTNode** $tmp2390 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2391 = *$tmp2390;
*(&local52) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2392 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2392));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2391));
*(&local52) = $tmp2391;
panda$collections$ImmutableArray** $tmp2393 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp2394 = *$tmp2393;
*(&local53) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2395 = *(&local53);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2395));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2394));
*(&local53) = $tmp2394;
org$pandalanguage$pandac$ASTNode** $tmp2396 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2397 = *$tmp2396;
*(&local54) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2398 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2398));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2397));
*(&local54) = $tmp2397;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2399 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2399));
// line 1
panda$collections$ImmutableArray* $tmp2400 = *(&local53);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2400));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2401 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2401));
org$pandalanguage$pandac$ASTNode* $tmp2402 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2402));
// unreffing _f3
*(&local54) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp2403 = *(&local53);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2403));
// unreffing _f2
*(&local53) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2404 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2404));
// unreffing _f1
*(&local52) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block35:;
panda$core$Int64 $tmp2405 = (panda$core$Int64) {17};
panda$core$Bit $tmp2406 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2405);
bool $tmp2407 = $tmp2406.value;
if ($tmp2407) goto block36; else goto block37;
block36:;
panda$collections$ImmutableArray** $tmp2408 = (panda$collections$ImmutableArray**) (param0->$data + 0);
panda$collections$ImmutableArray* $tmp2409 = *$tmp2408;
*(&local55) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2410 = *(&local55);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2410));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2409));
*(&local55) = $tmp2409;
// line 1
panda$collections$ImmutableArray* $tmp2411 = *(&local55);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2411));
panda$collections$ImmutableArray* $tmp2412 = *(&local55);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2412));
// unreffing _f0
*(&local55) = ((panda$collections$ImmutableArray*) NULL);
goto block1;
block37:;
panda$core$Int64 $tmp2413 = (panda$core$Int64) {18};
panda$core$Bit $tmp2414 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2413);
bool $tmp2415 = $tmp2414.value;
if ($tmp2415) goto block38; else goto block39;
block38:;
org$pandalanguage$pandac$Position* $tmp2416 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2417 = *$tmp2416;
*(&local56) = $tmp2417;
panda$core$String** $tmp2418 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2419 = *$tmp2418;
*(&local57) = ((panda$core$String*) NULL);
panda$core$String* $tmp2420 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2420));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2419));
*(&local57) = $tmp2419;
org$pandalanguage$pandac$ASTNode** $tmp2421 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2422 = *$tmp2421;
*(&local58) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2423 = *(&local58);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2423));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2422));
*(&local58) = $tmp2422;
org$pandalanguage$pandac$ASTNode** $tmp2424 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2425 = *$tmp2424;
*(&local59) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2426 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2426));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2425));
*(&local59) = $tmp2425;
panda$collections$ImmutableArray** $tmp2427 = (panda$collections$ImmutableArray**) (param0->$data + 40);
panda$collections$ImmutableArray* $tmp2428 = *$tmp2427;
*(&local60) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2429 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2429));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2428));
*(&local60) = $tmp2428;
// line 1
panda$core$String* $tmp2430 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2430));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2431 = *(&local58);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2431));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2432 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2432));
// line 1
panda$collections$ImmutableArray* $tmp2433 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2433));
panda$collections$ImmutableArray* $tmp2434 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2434));
// unreffing _f4
*(&local60) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2435 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2435));
// unreffing _f3
*(&local59) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2436 = *(&local58);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2436));
// unreffing _f2
*(&local58) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2437 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2437));
// unreffing _f1
*(&local57) = ((panda$core$String*) NULL);
goto block1;
block39:;
panda$core$Int64 $tmp2438 = (panda$core$Int64) {19};
panda$core$Bit $tmp2439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2438);
bool $tmp2440 = $tmp2439.value;
if ($tmp2440) goto block40; else goto block41;
block40:;
org$pandalanguage$pandac$Position* $tmp2441 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2442 = *$tmp2441;
*(&local61) = $tmp2442;
panda$core$String** $tmp2443 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2444 = *$tmp2443;
*(&local62) = ((panda$core$String*) NULL);
panda$core$String* $tmp2445 = *(&local62);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2445));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2444));
*(&local62) = $tmp2444;
panda$collections$ImmutableArray** $tmp2446 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp2447 = *$tmp2446;
*(&local63) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2448 = *(&local63);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2448));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2447));
*(&local63) = $tmp2447;
// line 1
panda$core$String* $tmp2449 = *(&local62);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2449));
// line 1
panda$collections$ImmutableArray* $tmp2450 = *(&local63);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2450));
panda$collections$ImmutableArray* $tmp2451 = *(&local63);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2451));
// unreffing _f2
*(&local63) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp2452 = *(&local62);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2452));
// unreffing _f1
*(&local62) = ((panda$core$String*) NULL);
goto block1;
block41:;
panda$core$Int64 $tmp2453 = (panda$core$Int64) {20};
panda$core$Bit $tmp2454 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2453);
bool $tmp2455 = $tmp2454.value;
if ($tmp2455) goto block42; else goto block43;
block42:;
org$pandalanguage$pandac$Position* $tmp2456 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2457 = *$tmp2456;
*(&local64) = $tmp2457;
panda$core$String** $tmp2458 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2459 = *$tmp2458;
*(&local65) = ((panda$core$String*) NULL);
panda$core$String* $tmp2460 = *(&local65);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2460));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2459));
*(&local65) = $tmp2459;
// line 1
panda$core$String* $tmp2461 = *(&local65);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2461));
panda$core$String* $tmp2462 = *(&local65);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2462));
// unreffing _f1
*(&local65) = ((panda$core$String*) NULL);
goto block1;
block43:;
panda$core$Int64 $tmp2463 = (panda$core$Int64) {21};
panda$core$Bit $tmp2464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2463);
bool $tmp2465 = $tmp2464.value;
if ($tmp2465) goto block44; else goto block45;
block44:;
org$pandalanguage$pandac$Position* $tmp2466 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2467 = *$tmp2466;
*(&local66) = $tmp2467;
org$pandalanguage$pandac$ASTNode** $tmp2468 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2469 = *$tmp2468;
*(&local67) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2470 = *(&local67);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2470));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2469));
*(&local67) = $tmp2469;
panda$collections$ImmutableArray** $tmp2471 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp2472 = *$tmp2471;
*(&local68) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2473 = *(&local68);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2473));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2472));
*(&local68) = $tmp2472;
org$pandalanguage$pandac$ASTNode** $tmp2474 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2475 = *$tmp2474;
*(&local69) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2476 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2476));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2475));
*(&local69) = $tmp2475;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2477 = *(&local67);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2477));
// line 1
panda$collections$ImmutableArray* $tmp2478 = *(&local68);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2478));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2479 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2479));
org$pandalanguage$pandac$ASTNode* $tmp2480 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2480));
// unreffing _f3
*(&local69) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp2481 = *(&local68);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2481));
// unreffing _f2
*(&local68) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2482 = *(&local67);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2482));
// unreffing _f1
*(&local67) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block45:;
panda$core$Int64 $tmp2483 = (panda$core$Int64) {22};
panda$core$Bit $tmp2484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2483);
bool $tmp2485 = $tmp2484.value;
if ($tmp2485) goto block46; else goto block47;
block46:;
org$pandalanguage$pandac$Position* $tmp2486 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2487 = *$tmp2486;
*(&local70) = $tmp2487;
panda$core$UInt64* $tmp2488 = (panda$core$UInt64*) (param0->$data + 16);
panda$core$UInt64 $tmp2489 = *$tmp2488;
*(&local71) = $tmp2489;
goto block1;
block47:;
panda$core$Int64 $tmp2490 = (panda$core$Int64) {23};
panda$core$Bit $tmp2491 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2490);
bool $tmp2492 = $tmp2491.value;
if ($tmp2492) goto block48; else goto block49;
block48:;
org$pandalanguage$pandac$Position* $tmp2493 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2494 = *$tmp2493;
*(&local72) = $tmp2494;
org$pandalanguage$pandac$IR$Value** $tmp2495 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp2496 = *$tmp2495;
*(&local73) = ((org$pandalanguage$pandac$IR$Value*) NULL);
org$pandalanguage$pandac$IR$Value* $tmp2497 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2497));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2496));
*(&local73) = $tmp2496;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp2498 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2498));
org$pandalanguage$pandac$IR$Value* $tmp2499 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2499));
// unreffing _f1
*(&local73) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block49:;
panda$core$Int64 $tmp2500 = (panda$core$Int64) {24};
panda$core$Bit $tmp2501 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2500);
bool $tmp2502 = $tmp2501.value;
if ($tmp2502) goto block50; else goto block51;
block50:;
org$pandalanguage$pandac$Position* $tmp2503 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2504 = *$tmp2503;
*(&local74) = $tmp2504;
panda$core$String** $tmp2505 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2506 = *$tmp2505;
*(&local75) = ((panda$core$String*) NULL);
panda$core$String* $tmp2507 = *(&local75);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2507));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2506));
*(&local75) = $tmp2506;
panda$collections$ImmutableArray** $tmp2508 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp2509 = *$tmp2508;
*(&local76) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2510 = *(&local76);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2510));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2509));
*(&local76) = $tmp2509;
// line 1
panda$core$String* $tmp2511 = *(&local75);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2511));
// line 1
panda$collections$ImmutableArray* $tmp2512 = *(&local76);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2512));
panda$collections$ImmutableArray* $tmp2513 = *(&local76);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2513));
// unreffing _f2
*(&local76) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp2514 = *(&local75);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2514));
// unreffing _f1
*(&local75) = ((panda$core$String*) NULL);
goto block1;
block51:;
panda$core$Int64 $tmp2515 = (panda$core$Int64) {25};
panda$core$Bit $tmp2516 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2515);
bool $tmp2517 = $tmp2516.value;
if ($tmp2517) goto block52; else goto block53;
block52:;
org$pandalanguage$pandac$Position* $tmp2518 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2519 = *$tmp2518;
*(&local77) = $tmp2519;
org$pandalanguage$pandac$ASTNode** $tmp2520 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2521 = *$tmp2520;
*(&local78) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2522 = *(&local78);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2522));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2521));
*(&local78) = $tmp2521;
panda$collections$ImmutableArray** $tmp2523 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp2524 = *$tmp2523;
*(&local79) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2525 = *(&local79);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2525));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2524));
*(&local79) = $tmp2524;
panda$collections$ImmutableArray** $tmp2526 = (panda$collections$ImmutableArray**) (param0->$data + 32);
panda$collections$ImmutableArray* $tmp2527 = *$tmp2526;
*(&local80) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2528 = *(&local80);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2528));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2527));
*(&local80) = $tmp2527;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2529 = *(&local78);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2529));
// line 1
panda$collections$ImmutableArray* $tmp2530 = *(&local79);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2530));
// line 1
panda$collections$ImmutableArray* $tmp2531 = *(&local80);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2531));
panda$collections$ImmutableArray* $tmp2532 = *(&local80);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2532));
// unreffing _f3
*(&local80) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2533 = *(&local79);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2533));
// unreffing _f2
*(&local79) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2534 = *(&local78);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2534));
// unreffing _f1
*(&local78) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block53:;
panda$core$Int64 $tmp2535 = (panda$core$Int64) {26};
panda$core$Bit $tmp2536 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2535);
bool $tmp2537 = $tmp2536.value;
if ($tmp2537) goto block54; else goto block55;
block54:;
org$pandalanguage$pandac$Position* $tmp2538 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2539 = *$tmp2538;
*(&local81) = $tmp2539;
org$pandalanguage$pandac$ASTNode** $tmp2540 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2541 = *$tmp2540;
*(&local82) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2542 = *(&local82);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2542));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2541));
*(&local82) = $tmp2541;
panda$collections$ImmutableArray** $tmp2543 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp2544 = *$tmp2543;
*(&local83) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2545 = *(&local83);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2545));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2544));
*(&local83) = $tmp2544;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp2546 = (org$pandalanguage$pandac$MethodDecl$Kind*) (param0->$data + 32);
org$pandalanguage$pandac$MethodDecl$Kind $tmp2547 = *$tmp2546;
*(&local84) = $tmp2547;
panda$core$String** $tmp2548 = (panda$core$String**) (param0->$data + 40);
panda$core$String* $tmp2549 = *$tmp2548;
*(&local85) = ((panda$core$String*) NULL);
panda$core$String* $tmp2550 = *(&local85);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2550));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2549));
*(&local85) = $tmp2549;
panda$collections$ImmutableArray** $tmp2551 = (panda$collections$ImmutableArray**) (param0->$data + 48);
panda$collections$ImmutableArray* $tmp2552 = *$tmp2551;
*(&local86) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2553 = *(&local86);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2553));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2552));
*(&local86) = $tmp2552;
panda$collections$ImmutableArray** $tmp2554 = (panda$collections$ImmutableArray**) (param0->$data + 56);
panda$collections$ImmutableArray* $tmp2555 = *$tmp2554;
*(&local87) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2556 = *(&local87);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2556));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2555));
*(&local87) = $tmp2555;
org$pandalanguage$pandac$ASTNode** $tmp2557 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 64);
org$pandalanguage$pandac$ASTNode* $tmp2558 = *$tmp2557;
*(&local88) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2559 = *(&local88);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2559));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2558));
*(&local88) = $tmp2558;
panda$collections$ImmutableArray** $tmp2560 = (panda$collections$ImmutableArray**) (param0->$data + 72);
panda$collections$ImmutableArray* $tmp2561 = *$tmp2560;
*(&local89) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2562 = *(&local89);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2562));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2561));
*(&local89) = $tmp2561;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2563 = *(&local82);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2563));
// line 1
panda$collections$ImmutableArray* $tmp2564 = *(&local83);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2564));
// line 1
panda$core$String* $tmp2565 = *(&local85);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2565));
// line 1
panda$collections$ImmutableArray* $tmp2566 = *(&local86);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2566));
// line 1
panda$collections$ImmutableArray* $tmp2567 = *(&local87);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2567));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2568 = *(&local88);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2568));
// line 1
panda$collections$ImmutableArray* $tmp2569 = *(&local89);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2569));
panda$collections$ImmutableArray* $tmp2570 = *(&local89);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2570));
// unreffing _f8
*(&local89) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2571 = *(&local88);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2571));
// unreffing _f7
*(&local88) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp2572 = *(&local87);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2572));
// unreffing _f6
*(&local87) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2573 = *(&local86);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2573));
// unreffing _f5
*(&local86) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp2574 = *(&local85);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2574));
// unreffing _f4
*(&local85) = ((panda$core$String*) NULL);
panda$collections$ImmutableArray* $tmp2575 = *(&local83);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2575));
// unreffing _f2
*(&local83) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2576 = *(&local82);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2576));
// unreffing _f1
*(&local82) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block55:;
panda$core$Int64 $tmp2577 = (panda$core$Int64) {27};
panda$core$Bit $tmp2578 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2577);
bool $tmp2579 = $tmp2578.value;
if ($tmp2579) goto block56; else goto block57;
block56:;
org$pandalanguage$pandac$Position* $tmp2580 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2581 = *$tmp2580;
*(&local90) = $tmp2581;
org$pandalanguage$pandac$parser$Token$Kind* $tmp2582 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp2583 = *$tmp2582;
*(&local91) = $tmp2583;
panda$collections$ImmutableArray** $tmp2584 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp2585 = *$tmp2584;
*(&local92) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2586 = *(&local92);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2586));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2585));
*(&local92) = $tmp2585;
org$pandalanguage$pandac$ASTNode** $tmp2587 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2588 = *$tmp2587;
*(&local93) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2589 = *(&local93);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2589));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2588));
*(&local93) = $tmp2588;
// line 1
panda$collections$ImmutableArray* $tmp2590 = *(&local92);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2590));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2591 = *(&local93);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2591));
org$pandalanguage$pandac$ASTNode* $tmp2592 = *(&local93);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2592));
// unreffing _f3
*(&local93) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp2593 = *(&local92);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2593));
// unreffing _f2
*(&local92) = ((panda$collections$ImmutableArray*) NULL);
goto block1;
block57:;
panda$core$Int64 $tmp2594 = (panda$core$Int64) {28};
panda$core$Bit $tmp2595 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2594);
bool $tmp2596 = $tmp2595.value;
if ($tmp2596) goto block58; else goto block59;
block58:;
org$pandalanguage$pandac$Position* $tmp2597 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2598 = *$tmp2597;
*(&local94) = $tmp2598;
goto block1;
block59:;
panda$core$Int64 $tmp2599 = (panda$core$Int64) {29};
panda$core$Bit $tmp2600 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2599);
bool $tmp2601 = $tmp2600.value;
if ($tmp2601) goto block60; else goto block61;
block60:;
org$pandalanguage$pandac$Position* $tmp2602 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2603 = *$tmp2602;
*(&local95) = $tmp2603;
org$pandalanguage$pandac$ASTNode** $tmp2604 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2605 = *$tmp2604;
*(&local96) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2606 = *(&local96);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2606));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2605));
*(&local96) = $tmp2605;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2607 = *(&local96);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2607));
org$pandalanguage$pandac$ASTNode* $tmp2608 = *(&local96);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2608));
// unreffing _f1
*(&local96) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block61:;
panda$core$Int64 $tmp2609 = (panda$core$Int64) {30};
panda$core$Bit $tmp2610 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2609);
bool $tmp2611 = $tmp2610.value;
if ($tmp2611) goto block62; else goto block63;
block62:;
org$pandalanguage$pandac$Position* $tmp2612 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2613 = *$tmp2612;
*(&local97) = $tmp2613;
panda$core$String** $tmp2614 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2615 = *$tmp2614;
*(&local98) = ((panda$core$String*) NULL);
panda$core$String* $tmp2616 = *(&local98);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2616));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2615));
*(&local98) = $tmp2615;
// line 1
panda$core$String* $tmp2617 = *(&local98);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2617));
panda$core$String* $tmp2618 = *(&local98);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2618));
// unreffing _f1
*(&local98) = ((panda$core$String*) NULL);
goto block1;
block63:;
panda$core$Int64 $tmp2619 = (panda$core$Int64) {31};
panda$core$Bit $tmp2620 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2619);
bool $tmp2621 = $tmp2620.value;
if ($tmp2621) goto block64; else goto block65;
block64:;
org$pandalanguage$pandac$Position* $tmp2622 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2623 = *$tmp2622;
*(&local99) = $tmp2623;
panda$core$String** $tmp2624 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2625 = *$tmp2624;
*(&local100) = ((panda$core$String*) NULL);
panda$core$String* $tmp2626 = *(&local100);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2626));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2625));
*(&local100) = $tmp2625;
org$pandalanguage$pandac$ASTNode** $tmp2627 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2628 = *$tmp2627;
*(&local101) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2629 = *(&local101);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2629));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2628));
*(&local101) = $tmp2628;
// line 1
panda$core$String* $tmp2630 = *(&local100);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2630));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2631 = *(&local101);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2631));
org$pandalanguage$pandac$ASTNode* $tmp2632 = *(&local101);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2632));
// unreffing _f2
*(&local101) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2633 = *(&local100);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2633));
// unreffing _f1
*(&local100) = ((panda$core$String*) NULL);
goto block1;
block65:;
panda$core$Int64 $tmp2634 = (panda$core$Int64) {32};
panda$core$Bit $tmp2635 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2634);
bool $tmp2636 = $tmp2635.value;
if ($tmp2636) goto block66; else goto block67;
block66:;
org$pandalanguage$pandac$Position* $tmp2637 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2638 = *$tmp2637;
*(&local102) = $tmp2638;
org$pandalanguage$pandac$parser$Token$Kind* $tmp2639 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp2640 = *$tmp2639;
*(&local103) = $tmp2640;
org$pandalanguage$pandac$ASTNode** $tmp2641 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2642 = *$tmp2641;
*(&local104) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2643 = *(&local104);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2643));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2642));
*(&local104) = $tmp2642;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2644 = *(&local104);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2644));
org$pandalanguage$pandac$ASTNode* $tmp2645 = *(&local104);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2645));
// unreffing _f2
*(&local104) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block67:;
panda$core$Int64 $tmp2646 = (panda$core$Int64) {33};
panda$core$Bit $tmp2647 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2646);
bool $tmp2648 = $tmp2647.value;
if ($tmp2648) goto block68; else goto block69;
block68:;
org$pandalanguage$pandac$Position* $tmp2649 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2650 = *$tmp2649;
*(&local105) = $tmp2650;
org$pandalanguage$pandac$ASTNode** $tmp2651 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2652 = *$tmp2651;
*(&local106) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2653 = *(&local106);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2653));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2652));
*(&local106) = $tmp2652;
panda$core$Bit* $tmp2654 = (panda$core$Bit*) (param0->$data + 24);
panda$core$Bit $tmp2655 = *$tmp2654;
*(&local107) = $tmp2655;
org$pandalanguage$pandac$ASTNode** $tmp2656 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 25);
org$pandalanguage$pandac$ASTNode* $tmp2657 = *$tmp2656;
*(&local108) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2658 = *(&local108);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2658));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2657));
*(&local108) = $tmp2657;
org$pandalanguage$pandac$ASTNode** $tmp2659 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 33);
org$pandalanguage$pandac$ASTNode* $tmp2660 = *$tmp2659;
*(&local109) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2661 = *(&local109);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2661));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2660));
*(&local109) = $tmp2660;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2662 = *(&local106);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2662));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2663 = *(&local108);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2663));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2664 = *(&local109);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2664));
org$pandalanguage$pandac$ASTNode* $tmp2665 = *(&local109);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2665));
// unreffing _f4
*(&local109) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2666 = *(&local108);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2666));
// unreffing _f3
*(&local108) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2667 = *(&local106);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2667));
// unreffing _f1
*(&local106) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block69:;
panda$core$Int64 $tmp2668 = (panda$core$Int64) {34};
panda$core$Bit $tmp2669 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2668);
bool $tmp2670 = $tmp2669.value;
if ($tmp2670) goto block70; else goto block71;
block70:;
org$pandalanguage$pandac$Position* $tmp2671 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2672 = *$tmp2671;
*(&local110) = $tmp2672;
panda$core$Real64* $tmp2673 = (panda$core$Real64*) (param0->$data + 16);
panda$core$Real64 $tmp2674 = *$tmp2673;
*(&local111) = $tmp2674;
goto block1;
block71:;
panda$core$Int64 $tmp2675 = (panda$core$Int64) {35};
panda$core$Bit $tmp2676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2675);
bool $tmp2677 = $tmp2676.value;
if ($tmp2677) goto block72; else goto block73;
block72:;
org$pandalanguage$pandac$Position* $tmp2678 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2679 = *$tmp2678;
*(&local112) = $tmp2679;
panda$core$String** $tmp2680 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2681 = *$tmp2680;
*(&local113) = ((panda$core$String*) NULL);
panda$core$String* $tmp2682 = *(&local113);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2682));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2681));
*(&local113) = $tmp2681;
// line 1
panda$core$String* $tmp2683 = *(&local113);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2683));
panda$core$String* $tmp2684 = *(&local113);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2684));
// unreffing _f1
*(&local113) = ((panda$core$String*) NULL);
goto block1;
block73:;
panda$core$Int64 $tmp2685 = (panda$core$Int64) {36};
panda$core$Bit $tmp2686 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2685);
bool $tmp2687 = $tmp2686.value;
if ($tmp2687) goto block74; else goto block75;
block74:;
org$pandalanguage$pandac$Position* $tmp2688 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2689 = *$tmp2688;
*(&local114) = $tmp2689;
org$pandalanguage$pandac$ASTNode** $tmp2690 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2691 = *$tmp2690;
*(&local115) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2692 = *(&local115);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2692));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2691));
*(&local115) = $tmp2691;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2693 = *(&local115);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2693));
org$pandalanguage$pandac$ASTNode* $tmp2694 = *(&local115);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2694));
// unreffing _f1
*(&local115) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block75:;
panda$core$Int64 $tmp2695 = (panda$core$Int64) {37};
panda$core$Bit $tmp2696 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2695);
bool $tmp2697 = $tmp2696.value;
if ($tmp2697) goto block76; else goto block77;
block76:;
org$pandalanguage$pandac$Position* $tmp2698 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2699 = *$tmp2698;
*(&local116) = $tmp2699;
goto block1;
block77:;
panda$core$Int64 $tmp2700 = (panda$core$Int64) {38};
panda$core$Bit $tmp2701 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2700);
bool $tmp2702 = $tmp2701.value;
if ($tmp2702) goto block78; else goto block79;
block78:;
org$pandalanguage$pandac$Position* $tmp2703 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2704 = *$tmp2703;
*(&local117) = $tmp2704;
panda$core$String** $tmp2705 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2706 = *$tmp2705;
*(&local118) = ((panda$core$String*) NULL);
panda$core$String* $tmp2707 = *(&local118);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2707));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2706));
*(&local118) = $tmp2706;
// line 1
panda$core$String* $tmp2708 = *(&local118);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2708));
panda$core$String* $tmp2709 = *(&local118);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2709));
// unreffing _f1
*(&local118) = ((panda$core$String*) NULL);
goto block1;
block79:;
panda$core$Int64 $tmp2710 = (panda$core$Int64) {39};
panda$core$Bit $tmp2711 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2710);
bool $tmp2712 = $tmp2711.value;
if ($tmp2712) goto block80; else goto block81;
block80:;
org$pandalanguage$pandac$Position* $tmp2713 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2714 = *$tmp2713;
*(&local119) = $tmp2714;
goto block1;
block81:;
panda$core$Int64 $tmp2715 = (panda$core$Int64) {40};
panda$core$Bit $tmp2716 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2715);
bool $tmp2717 = $tmp2716.value;
if ($tmp2717) goto block82; else goto block83;
block82:;
org$pandalanguage$pandac$Position* $tmp2718 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2719 = *$tmp2718;
*(&local120) = $tmp2719;
panda$collections$ImmutableArray** $tmp2720 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp2721 = *$tmp2720;
*(&local121) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2722 = *(&local121);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2722));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2721));
*(&local121) = $tmp2721;
// line 1
panda$collections$ImmutableArray* $tmp2723 = *(&local121);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2723));
panda$collections$ImmutableArray* $tmp2724 = *(&local121);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2724));
// unreffing _f1
*(&local121) = ((panda$collections$ImmutableArray*) NULL);
goto block1;
block83:;
panda$core$Int64 $tmp2725 = (panda$core$Int64) {41};
panda$core$Bit $tmp2726 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2725);
bool $tmp2727 = $tmp2726.value;
if ($tmp2727) goto block84; else goto block85;
block84:;
org$pandalanguage$pandac$Position* $tmp2728 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2729 = *$tmp2728;
*(&local122) = $tmp2729;
panda$collections$ImmutableArray** $tmp2730 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp2731 = *$tmp2730;
*(&local123) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2732 = *(&local123);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2732));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2731));
*(&local123) = $tmp2731;
// line 1
panda$collections$ImmutableArray* $tmp2733 = *(&local123);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2733));
panda$collections$ImmutableArray* $tmp2734 = *(&local123);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2734));
// unreffing _f1
*(&local123) = ((panda$collections$ImmutableArray*) NULL);
goto block1;
block85:;
panda$core$Int64 $tmp2735 = (panda$core$Int64) {42};
panda$core$Bit $tmp2736 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2735);
bool $tmp2737 = $tmp2736.value;
if ($tmp2737) goto block86; else goto block87;
block86:;
org$pandalanguage$pandac$Position* $tmp2738 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2739 = *$tmp2738;
*(&local124) = $tmp2739;
panda$core$String** $tmp2740 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2741 = *$tmp2740;
*(&local125) = ((panda$core$String*) NULL);
panda$core$String* $tmp2742 = *(&local125);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2742));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2741));
*(&local125) = $tmp2741;
// line 1
panda$core$String* $tmp2743 = *(&local125);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2743));
panda$core$String* $tmp2744 = *(&local125);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2744));
// unreffing _f1
*(&local125) = ((panda$core$String*) NULL);
goto block1;
block87:;
panda$core$Int64 $tmp2745 = (panda$core$Int64) {43};
panda$core$Bit $tmp2746 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2745);
bool $tmp2747 = $tmp2746.value;
if ($tmp2747) goto block88; else goto block89;
block88:;
org$pandalanguage$pandac$Position* $tmp2748 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2749 = *$tmp2748;
*(&local126) = $tmp2749;
panda$collections$ImmutableArray** $tmp2750 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp2751 = *$tmp2750;
*(&local127) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2752 = *(&local127);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2752));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2751));
*(&local127) = $tmp2751;
org$pandalanguage$pandac$ASTNode** $tmp2753 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2754 = *$tmp2753;
*(&local128) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2755 = *(&local128);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2755));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2754));
*(&local128) = $tmp2754;
// line 1
panda$collections$ImmutableArray* $tmp2756 = *(&local127);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2756));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2757 = *(&local128);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2757));
org$pandalanguage$pandac$ASTNode* $tmp2758 = *(&local128);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2758));
// unreffing _f2
*(&local128) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp2759 = *(&local127);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2759));
// unreffing _f1
*(&local127) = ((panda$collections$ImmutableArray*) NULL);
goto block1;
block89:;
panda$core$Int64 $tmp2760 = (panda$core$Int64) {44};
panda$core$Bit $tmp2761 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2760);
bool $tmp2762 = $tmp2761.value;
if ($tmp2762) goto block90; else goto block91;
block90:;
org$pandalanguage$pandac$Position* $tmp2763 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2764 = *$tmp2763;
*(&local129) = $tmp2764;
panda$core$String** $tmp2765 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2766 = *$tmp2765;
*(&local130) = ((panda$core$String*) NULL);
panda$core$String* $tmp2767 = *(&local130);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2767));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2766));
*(&local130) = $tmp2766;
org$pandalanguage$pandac$ASTNode** $tmp2768 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2769 = *$tmp2768;
*(&local131) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2770 = *(&local131);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2770));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2769));
*(&local131) = $tmp2769;
// line 1
panda$core$String* $tmp2771 = *(&local130);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2771));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2772 = *(&local131);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2772));
org$pandalanguage$pandac$ASTNode* $tmp2773 = *(&local131);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2773));
// unreffing _f2
*(&local131) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2774 = *(&local130);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2774));
// unreffing _f1
*(&local130) = ((panda$core$String*) NULL);
goto block1;
block91:;
panda$core$Int64 $tmp2775 = (panda$core$Int64) {45};
panda$core$Bit $tmp2776 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2775);
bool $tmp2777 = $tmp2776.value;
if ($tmp2777) goto block92; else goto block93;
block92:;
org$pandalanguage$pandac$Position* $tmp2778 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2779 = *$tmp2778;
*(&local132) = $tmp2779;
panda$collections$ImmutableArray** $tmp2780 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp2781 = *$tmp2780;
*(&local133) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2782 = *(&local133);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2782));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2781));
*(&local133) = $tmp2781;
org$pandalanguage$pandac$ASTNode** $tmp2783 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2784 = *$tmp2783;
*(&local134) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2785 = *(&local134);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2785));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2784));
*(&local134) = $tmp2784;
// line 1
panda$collections$ImmutableArray* $tmp2786 = *(&local133);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2786));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2787 = *(&local134);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2787));
org$pandalanguage$pandac$ASTNode* $tmp2788 = *(&local134);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2788));
// unreffing _f2
*(&local134) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp2789 = *(&local133);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2789));
// unreffing _f1
*(&local133) = ((panda$collections$ImmutableArray*) NULL);
goto block1;
block93:;
panda$core$Int64 $tmp2790 = (panda$core$Int64) {46};
panda$core$Bit $tmp2791 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2790);
bool $tmp2792 = $tmp2791.value;
if ($tmp2792) goto block94; else goto block95;
block94:;
org$pandalanguage$pandac$Position* $tmp2793 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2794 = *$tmp2793;
*(&local135) = $tmp2794;
panda$core$String** $tmp2795 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2796 = *$tmp2795;
*(&local136) = ((panda$core$String*) NULL);
panda$core$String* $tmp2797 = *(&local136);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2797));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2796));
*(&local136) = $tmp2796;
// line 1
panda$core$String* $tmp2798 = *(&local136);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2798));
panda$core$String* $tmp2799 = *(&local136);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2799));
// unreffing _f1
*(&local136) = ((panda$core$String*) NULL);
goto block1;
block95:;
panda$core$Int64 $tmp2800 = (panda$core$Int64) {47};
panda$core$Bit $tmp2801 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2800);
bool $tmp2802 = $tmp2801.value;
if ($tmp2802) goto block96; else goto block97;
block96:;
org$pandalanguage$pandac$Position* $tmp2803 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2804 = *$tmp2803;
*(&local137) = $tmp2804;
org$pandalanguage$pandac$Variable$Kind* $tmp2805 = (org$pandalanguage$pandac$Variable$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$Variable$Kind $tmp2806 = *$tmp2805;
*(&local138) = $tmp2806;
panda$collections$ImmutableArray** $tmp2807 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp2808 = *$tmp2807;
*(&local139) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2809 = *(&local139);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2809));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2808));
*(&local139) = $tmp2808;
// line 1
panda$collections$ImmutableArray* $tmp2810 = *(&local139);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2810));
panda$collections$ImmutableArray* $tmp2811 = *(&local139);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2811));
// unreffing _f2
*(&local139) = ((panda$collections$ImmutableArray*) NULL);
goto block1;
block97:;
panda$core$Int64 $tmp2812 = (panda$core$Int64) {48};
panda$core$Bit $tmp2813 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2812);
bool $tmp2814 = $tmp2813.value;
if ($tmp2814) goto block98; else goto block99;
block98:;
org$pandalanguage$pandac$Position* $tmp2815 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2816 = *$tmp2815;
*(&local140) = $tmp2816;
panda$collections$ImmutableArray** $tmp2817 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp2818 = *$tmp2817;
*(&local141) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2819 = *(&local141);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2819));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2818));
*(&local141) = $tmp2818;
panda$collections$ImmutableArray** $tmp2820 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp2821 = *$tmp2820;
*(&local142) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2822 = *(&local142);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2822));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2821));
*(&local142) = $tmp2821;
// line 1
panda$collections$ImmutableArray* $tmp2823 = *(&local141);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2823));
// line 1
panda$collections$ImmutableArray* $tmp2824 = *(&local142);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2824));
panda$collections$ImmutableArray* $tmp2825 = *(&local142);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2825));
// unreffing _f2
*(&local142) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2826 = *(&local141);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2826));
// unreffing _f1
*(&local141) = ((panda$collections$ImmutableArray*) NULL);
goto block1;
block99:;
panda$core$Int64 $tmp2827 = (panda$core$Int64) {49};
panda$core$Bit $tmp2828 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2141, $tmp2827);
bool $tmp2829 = $tmp2828.value;
if ($tmp2829) goto block100; else goto block1;
block100:;
org$pandalanguage$pandac$Position* $tmp2830 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2831 = *$tmp2830;
*(&local143) = $tmp2831;
panda$core$String** $tmp2832 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2833 = *$tmp2832;
*(&local144) = ((panda$core$String*) NULL);
panda$core$String* $tmp2834 = *(&local144);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2834));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2833));
*(&local144) = $tmp2833;
org$pandalanguage$pandac$ASTNode** $tmp2835 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2836 = *$tmp2835;
*(&local145) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2837 = *(&local145);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2837));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2836));
*(&local145) = $tmp2836;
panda$collections$ImmutableArray** $tmp2838 = (panda$collections$ImmutableArray**) (param0->$data + 32);
panda$collections$ImmutableArray* $tmp2839 = *$tmp2838;
*(&local146) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2840 = *(&local146);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2840));
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2839));
*(&local146) = $tmp2839;
// line 1
panda$core$String* $tmp2841 = *(&local144);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2841));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2842 = *(&local145);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2842));
// line 1
panda$collections$ImmutableArray* $tmp2843 = *(&local146);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2843));
panda$collections$ImmutableArray* $tmp2844 = *(&local146);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2844));
// unreffing _f3
*(&local146) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2845 = *(&local145);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2845));
// unreffing _f2
*(&local145) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2846 = *(&local144);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2846));
// unreffing _f1
*(&local144) = ((panda$core$String*) NULL);
goto block1;
block1:;
// line 6
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, panda$core$String* param4, org$pandalanguage$pandac$ASTNode* param5) {

// line 6
panda$core$Int64* $tmp2847 = &param0->$rawValue;
*$tmp2847 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2848 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2848 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp2849 = (panda$core$String**) (param0->$data + 16);
*$tmp2849 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$core$String** $tmp2850 = (panda$core$String**) (param0->$data + 24);
*$tmp2850 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp2851 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
*$tmp2851 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$ASTNode* param4) {

// line 6
panda$core$Int64* $tmp2852 = &param0->$rawValue;
*$tmp2852 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2853 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2853 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp2854 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp2854 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp2855 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp2855 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3) {

// line 6
panda$core$Int64* $tmp2856 = &param0->$rawValue;
*$tmp2856 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2857 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2857 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp2858 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp2858 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2) {

// line 6
panda$core$Int64* $tmp2859 = &param0->$rawValue;
*$tmp2859 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2860 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2860 = param2;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$parser$Token$Kind param4, org$pandalanguage$pandac$ASTNode* param5) {

// line 6
panda$core$Int64* $tmp2861 = &param0->$rawValue;
*$tmp2861 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2862 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2862 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp2863 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp2863 = param3;
// line 6
org$pandalanguage$pandac$parser$Token$Kind* $tmp2864 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 24);
*$tmp2864 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp2865 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
*$tmp2865 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$Bit param3) {

// line 6
panda$core$Int64* $tmp2866 = &param0->$rawValue;
*$tmp2866 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2867 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2867 = param2;
// line 6
panda$core$Bit* $tmp2868 = (panda$core$Bit*) (param0->$data + 16);
*$tmp2868 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$collections$ImmutableArray* param3) {

// line 6
panda$core$Int64* $tmp2869 = &param0->$rawValue;
*$tmp2869 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2870 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2870 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$collections$ImmutableArray** $tmp2871 = (panda$collections$ImmutableArray**) (param0->$data + 16);
*$tmp2871 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3) {

// line 6
panda$core$Int64* $tmp2872 = &param0->$rawValue;
*$tmp2872 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2873 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2873 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp2874 = (panda$core$String**) (param0->$data + 16);
*$tmp2874 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, panda$collections$ImmutableArray* param4) {

// line 6
panda$core$Int64* $tmp2875 = &param0->$rawValue;
*$tmp2875 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2876 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2876 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp2877 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp2877 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$collections$ImmutableArray** $tmp2878 = (panda$collections$ImmutableArray**) (param0->$data + 24);
*$tmp2878 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, panda$core$String* param4, panda$collections$ImmutableArray* param5) {

// line 6
panda$core$Int64* $tmp2879 = &param0->$rawValue;
*$tmp2879 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2880 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2880 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp2881 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp2881 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$core$String** $tmp2882 = (panda$core$String**) (param0->$data + 24);
*$tmp2882 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
panda$collections$ImmutableArray** $tmp2883 = (panda$collections$ImmutableArray**) (param0->$data + 32);
*$tmp2883 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$ChoiceCase* param4, panda$core$Int64 param5) {

// line 6
panda$core$Int64* $tmp2884 = &param0->$rawValue;
*$tmp2884 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2885 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2885 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp2886 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp2886 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ChoiceCase** $tmp2887 = (org$pandalanguage$pandac$ChoiceCase**) (param0->$data + 24);
*$tmp2887 = param4;
// line 6
panda$core$Int64* $tmp2888 = (panda$core$Int64*) (param0->$data + 32);
*$tmp2888 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, panda$collections$ImmutableArray* param4, org$pandalanguage$pandac$ClassDecl$Kind param5, panda$core$String* param6, panda$collections$ImmutableArray* param7, panda$collections$ImmutableArray* param8, panda$collections$ImmutableArray* param9) {

// line 6
panda$core$Int64* $tmp2889 = &param0->$rawValue;
*$tmp2889 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2890 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2890 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp2891 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp2891 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$collections$ImmutableArray** $tmp2892 = (panda$collections$ImmutableArray**) (param0->$data + 24);
*$tmp2892 = param4;
// line 6
org$pandalanguage$pandac$ClassDecl$Kind* $tmp2893 = (org$pandalanguage$pandac$ClassDecl$Kind*) (param0->$data + 32);
*$tmp2893 = param5;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param6));
panda$core$String** $tmp2894 = (panda$core$String**) (param0->$data + 40);
*$tmp2894 = param6;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param7));
panda$collections$ImmutableArray** $tmp2895 = (panda$collections$ImmutableArray**) (param0->$data + 48);
*$tmp2895 = param7;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param8));
panda$collections$ImmutableArray** $tmp2896 = (panda$collections$ImmutableArray**) (param0->$data + 56);
*$tmp2896 = param8;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param9));
panda$collections$ImmutableArray** $tmp2897 = (panda$collections$ImmutableArray**) (param0->$data + 64);
*$tmp2897 = param9;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, panda$collections$ImmutableArray* param4, org$pandalanguage$pandac$ASTNode* param5) {

// line 6
panda$core$Int64* $tmp2898 = &param0->$rawValue;
*$tmp2898 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2899 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2899 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp2900 = (panda$core$String**) (param0->$data + 16);
*$tmp2900 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$collections$ImmutableArray** $tmp2901 = (panda$collections$ImmutableArray**) (param0->$data + 24);
*$tmp2901 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp2902 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
*$tmp2902 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, panda$core$String* param4) {

// line 6
panda$core$Int64* $tmp2903 = &param0->$rawValue;
*$tmp2903 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2904 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2904 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp2905 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp2905 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$core$String** $tmp2906 = (panda$core$String**) (param0->$data + 24);
*$tmp2906 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, panda$collections$ImmutableArray* param4, org$pandalanguage$pandac$ASTNode* param5) {

// line 6
panda$core$Int64* $tmp2907 = &param0->$rawValue;
*$tmp2907 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2908 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2908 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp2909 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp2909 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$collections$ImmutableArray** $tmp2910 = (panda$collections$ImmutableArray**) (param0->$data + 24);
*$tmp2910 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp2911 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
*$tmp2911 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, panda$collections$ImmutableArray* param2) {

// line 6
panda$core$Int64* $tmp2912 = &param0->$rawValue;
*$tmp2912 = param1;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$collections$ImmutableArray** $tmp2913 = (panda$collections$ImmutableArray**) (param0->$data + 0);
*$tmp2913 = param2;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, org$pandalanguage$pandac$ASTNode* param4, org$pandalanguage$pandac$ASTNode* param5, panda$collections$ImmutableArray* param6) {

// line 6
panda$core$Int64* $tmp2914 = &param0->$rawValue;
*$tmp2914 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2915 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2915 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp2916 = (panda$core$String**) (param0->$data + 16);
*$tmp2916 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp2917 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp2917 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp2918 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
*$tmp2918 = param5;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param6));
panda$collections$ImmutableArray** $tmp2919 = (panda$collections$ImmutableArray**) (param0->$data + 40);
*$tmp2919 = param6;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, panda$collections$ImmutableArray* param4) {

// line 6
panda$core$Int64* $tmp2920 = &param0->$rawValue;
*$tmp2920 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2921 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2921 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp2922 = (panda$core$String**) (param0->$data + 16);
*$tmp2922 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$collections$ImmutableArray** $tmp2923 = (panda$collections$ImmutableArray**) (param0->$data + 24);
*$tmp2923 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3) {

// line 6
panda$core$Int64* $tmp2924 = &param0->$rawValue;
*$tmp2924 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2925 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2925 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp2926 = (panda$core$String**) (param0->$data + 16);
*$tmp2926 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, panda$collections$ImmutableArray* param4, org$pandalanguage$pandac$ASTNode* param5) {

// line 6
panda$core$Int64* $tmp2927 = &param0->$rawValue;
*$tmp2927 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2928 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2928 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp2929 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp2929 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$collections$ImmutableArray** $tmp2930 = (panda$collections$ImmutableArray**) (param0->$data + 24);
*$tmp2930 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp2931 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
*$tmp2931 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$UInt64 param3) {

// line 6
panda$core$Int64* $tmp2932 = &param0->$rawValue;
*$tmp2932 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2933 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2933 = param2;
// line 6
panda$core$UInt64* $tmp2934 = (panda$core$UInt64*) (param0->$data + 16);
*$tmp2934 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3) {

// line 6
panda$core$Int64* $tmp2935 = &param0->$rawValue;
*$tmp2935 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2936 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2936 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp2937 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp2937 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, panda$collections$ImmutableArray* param4) {

// line 6
panda$core$Int64* $tmp2938 = &param0->$rawValue;
*$tmp2938 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2939 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2939 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp2940 = (panda$core$String**) (param0->$data + 16);
*$tmp2940 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$collections$ImmutableArray** $tmp2941 = (panda$collections$ImmutableArray**) (param0->$data + 24);
*$tmp2941 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, panda$collections$ImmutableArray* param4, panda$collections$ImmutableArray* param5) {

// line 6
panda$core$Int64* $tmp2942 = &param0->$rawValue;
*$tmp2942 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2943 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2943 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp2944 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp2944 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$collections$ImmutableArray** $tmp2945 = (panda$collections$ImmutableArray**) (param0->$data + 24);
*$tmp2945 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
panda$collections$ImmutableArray** $tmp2946 = (panda$collections$ImmutableArray**) (param0->$data + 32);
*$tmp2946 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, panda$collections$ImmutableArray* param4, org$pandalanguage$pandac$MethodDecl$Kind param5, panda$core$String* param6, panda$collections$ImmutableArray* param7, panda$collections$ImmutableArray* param8, org$pandalanguage$pandac$ASTNode* param9, panda$collections$ImmutableArray* param10) {

// line 6
panda$core$Int64* $tmp2947 = &param0->$rawValue;
*$tmp2947 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2948 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2948 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp2949 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp2949 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$collections$ImmutableArray** $tmp2950 = (panda$collections$ImmutableArray**) (param0->$data + 24);
*$tmp2950 = param4;
// line 6
org$pandalanguage$pandac$MethodDecl$Kind* $tmp2951 = (org$pandalanguage$pandac$MethodDecl$Kind*) (param0->$data + 32);
*$tmp2951 = param5;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param6));
panda$core$String** $tmp2952 = (panda$core$String**) (param0->$data + 40);
*$tmp2952 = param6;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param7));
panda$collections$ImmutableArray** $tmp2953 = (panda$collections$ImmutableArray**) (param0->$data + 48);
*$tmp2953 = param7;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param8));
panda$collections$ImmutableArray** $tmp2954 = (panda$collections$ImmutableArray**) (param0->$data + 56);
*$tmp2954 = param8;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param9));
org$pandalanguage$pandac$ASTNode** $tmp2955 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 64);
*$tmp2955 = param9;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param10));
panda$collections$ImmutableArray** $tmp2956 = (panda$collections$ImmutableArray**) (param0->$data + 72);
*$tmp2956 = param10;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$parser$Token$Kind param3, panda$collections$ImmutableArray* param4, org$pandalanguage$pandac$ASTNode* param5) {

// line 6
panda$core$Int64* $tmp2957 = &param0->$rawValue;
*$tmp2957 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2958 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2958 = param2;
// line 6
org$pandalanguage$pandac$parser$Token$Kind* $tmp2959 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
*$tmp2959 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$collections$ImmutableArray** $tmp2960 = (panda$collections$ImmutableArray**) (param0->$data + 24);
*$tmp2960 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp2961 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
*$tmp2961 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, org$pandalanguage$pandac$ASTNode* param4) {

// line 6
panda$core$Int64* $tmp2962 = &param0->$rawValue;
*$tmp2962 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2963 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2963 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp2964 = (panda$core$String**) (param0->$data + 16);
*$tmp2964 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp2965 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp2965 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$parser$Token$Kind param3, org$pandalanguage$pandac$ASTNode* param4) {

// line 6
panda$core$Int64* $tmp2966 = &param0->$rawValue;
*$tmp2966 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2967 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2967 = param2;
// line 6
org$pandalanguage$pandac$parser$Token$Kind* $tmp2968 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
*$tmp2968 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp2969 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp2969 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, panda$core$Bit param4, org$pandalanguage$pandac$ASTNode* param5, org$pandalanguage$pandac$ASTNode* param6) {

// line 6
panda$core$Int64* $tmp2970 = &param0->$rawValue;
*$tmp2970 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2971 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2971 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp2972 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp2972 = param3;
// line 6
panda$core$Bit* $tmp2973 = (panda$core$Bit*) (param0->$data + 24);
*$tmp2973 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp2974 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 25);
*$tmp2974 = param5;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param6));
org$pandalanguage$pandac$ASTNode** $tmp2975 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 33);
*$tmp2975 = param6;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$Real64 param3) {

// line 6
panda$core$Int64* $tmp2976 = &param0->$rawValue;
*$tmp2976 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2977 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2977 = param2;
// line 6
panda$core$Real64* $tmp2978 = (panda$core$Real64*) (param0->$data + 16);
*$tmp2978 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3) {

// line 6
panda$core$Int64* $tmp2979 = &param0->$rawValue;
*$tmp2979 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2980 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2980 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp2981 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp2981 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$collections$ImmutableArray* param3, org$pandalanguage$pandac$ASTNode* param4) {

// line 6
panda$core$Int64* $tmp2982 = &param0->$rawValue;
*$tmp2982 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2983 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2983 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$collections$ImmutableArray** $tmp2984 = (panda$collections$ImmutableArray**) (param0->$data + 16);
*$tmp2984 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp2985 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp2985 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, org$pandalanguage$pandac$ASTNode* param4) {

// line 6
panda$core$Int64* $tmp2986 = &param0->$rawValue;
*$tmp2986 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2987 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2987 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp2988 = (panda$core$String**) (param0->$data + 16);
*$tmp2988 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp2989 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp2989 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$Variable$Kind param3, panda$collections$ImmutableArray* param4) {

// line 6
panda$core$Int64* $tmp2990 = &param0->$rawValue;
*$tmp2990 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2991 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2991 = param2;
// line 6
org$pandalanguage$pandac$Variable$Kind* $tmp2992 = (org$pandalanguage$pandac$Variable$Kind*) (param0->$data + 16);
*$tmp2992 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$collections$ImmutableArray** $tmp2993 = (panda$collections$ImmutableArray**) (param0->$data + 24);
*$tmp2993 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$collections$ImmutableArray* param3, panda$collections$ImmutableArray* param4) {

// line 6
panda$core$Int64* $tmp2994 = &param0->$rawValue;
*$tmp2994 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2995 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2995 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$collections$ImmutableArray** $tmp2996 = (panda$collections$ImmutableArray**) (param0->$data + 16);
*$tmp2996 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$collections$ImmutableArray** $tmp2997 = (panda$collections$ImmutableArray**) (param0->$data + 24);
*$tmp2997 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, org$pandalanguage$pandac$ASTNode* param4, panda$collections$ImmutableArray* param5) {

// line 6
panda$core$Int64* $tmp2998 = &param0->$rawValue;
*$tmp2998 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2999 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2999 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp3000 = (panda$core$String**) (param0->$data + 16);
*$tmp3000 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp3001 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp3001 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
panda$collections$ImmutableArray** $tmp3002 = (panda$collections$ImmutableArray**) (param0->$data + 32);
*$tmp3002 = param5;
return;

}






