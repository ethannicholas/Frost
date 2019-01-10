#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "org/pandalanguage/pandac/FixedArray.h"
#include "org/pandalanguage/pandac/parser/Token/Kind.h"
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

typedef panda$collections$Iterator* (*$fn684)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn688)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn693)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn740)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn747)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn785)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn811)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn863)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn867)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn872)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn906)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn919)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn930)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn934)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn939)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn994)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn1006)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1039)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1043)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1048)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1081)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn1107)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn1118)(panda$collections$CollectionView*, panda$core$String*);
typedef panda$collections$Iterator* (*$fn1153)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1157)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1162)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1189)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1193)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1198)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1249)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1253)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1258)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1293)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1329)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1360)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1364)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1369)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1413)(org$pandalanguage$pandac$IR$Value*);
typedef panda$collections$Iterator* (*$fn1442)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1446)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1451)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1490)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1494)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1499)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1562)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1566)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1571)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1603)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1613)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1636)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1640)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1645)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1707)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1931)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1949)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2007)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2033)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2093)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2119)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2123)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2128)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2146)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2150)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2155)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2202)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2206)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2211)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 32, -9211815390615587804, NULL };
static panda$core$String $s531 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 13, -8809212395465398403, NULL };
static panda$core$String $s535 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 13, -8809212395465398403, NULL };
static panda$core$String $s536 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2e\x70\x6f\x73\x69\x74\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 111, 8956204005101181995, NULL };
static panda$core$String $s558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s562 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s595 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s597 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s602 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s604 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s621 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x28", 5, 17286533032, NULL };
static panda$core$String $s623 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s630 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s631 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s647 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s649 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s654 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s658 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s679 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s699 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s702 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s720 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s722 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s724 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s726 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s743 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s751 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s776 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s781 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s789 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s814 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s818 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s823 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s859 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s878 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s886 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s891 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static panda$core$String $s896 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static panda$core$String $s909 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s911 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s922 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s924 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s926 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s945 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s948 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s971 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s973 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s975 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s977 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s997 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s1001 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1033 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1035 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s1054 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1059 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 24242135792659305, NULL };
static panda$core$String $s1061 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1084 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1088 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1120 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s1123 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1149 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1168 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1204 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1235 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s1241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s1245 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1264 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1267 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1289 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1297 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1323 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x49\x44\x45\x4e\x54\x49\x46\x49\x45\x52\x5f\x47\x45\x4e\x45\x52\x49\x43\x53\x28", 20, -4089576957169252493, NULL };
static panda$core$String $s1325 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1333 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e\x29", 2, 16504, NULL };
static panda$core$String $s1353 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s1355 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1375 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1378 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1385 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s1387 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1436 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1438 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s1457 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1460 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1483 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s1485 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1505 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1515 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1558 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1577 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1585 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s1590 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s1606 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1616 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1618 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1625 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1627 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1632 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1651 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1654 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1683 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static panda$core$String $s1685 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static panda$core$String $s1689 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static panda$core$String $s1691 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static panda$core$String $s1695 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static panda$core$String $s1697 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static panda$core$String $s1701 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static panda$core$String $s1703 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static panda$core$String $s1710 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1712 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1716 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1724 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1728 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1736 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x29", 2, 14282, NULL };
static panda$core$String $s1744 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s1745 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s1756 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s1782 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1786 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1802 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1806 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1834 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s1836 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s1848 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s1874 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1876 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1891 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s1893 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1895 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s1897 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s1901 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s1902 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s1913 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s1918 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s1919 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s1934 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1936 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1952 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1954 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1983 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1987 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2010 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2012 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static panda$core$String $s2016 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2036 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s2038 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static panda$core$String $s2042 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2073 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s2078 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s2083 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s2088 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s2111 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s2113 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2115 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2135 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2139 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2142 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s2161 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2192 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s2196 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s2198 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2217 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2220 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2234 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x41\x53\x54\x4e\x6f\x64\x65\x3a\x20", 21, -8877512154781713630, NULL };
static panda$core$String $s2236 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2237 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 13, -8809212395465398403, NULL };
static panda$core$String $s2241 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 13, -8809212395465398403, NULL };
static panda$core$String $s2242 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 94, -4884667081240384487, NULL };

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
org$pandalanguage$pandac$Position local49;
org$pandalanguage$pandac$Position local50;
org$pandalanguage$pandac$Position local51;
// line 90
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
// line 92
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
org$pandalanguage$pandac$FixedArray** $tmp21 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp22 = *$tmp21;
// line 95
org$pandalanguage$pandac$Position $tmp23 = *(&local1);
return $tmp23;
block5:;
panda$core$Int64 $tmp24 = (panda$core$Int64) {2};
panda$core$Bit $tmp25 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp24);
bool $tmp26 = $tmp25.value;
if ($tmp26) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$Position* $tmp27 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp28 = *$tmp27;
*(&local2) = $tmp28;
org$pandalanguage$pandac$ASTNode** $tmp29 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp30 = *$tmp29;
org$pandalanguage$pandac$ASTNode** $tmp31 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp32 = *$tmp31;
// line 98
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
org$pandalanguage$pandac$ASTNode** $tmp39 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp40 = *$tmp39;
// line 101
org$pandalanguage$pandac$Position $tmp41 = *(&local3);
return $tmp41;
block9:;
panda$core$Int64 $tmp42 = (panda$core$Int64) {4};
panda$core$Bit $tmp43 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp42);
bool $tmp44 = $tmp43.value;
if ($tmp44) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Position* $tmp45 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp46 = *$tmp45;
*(&local4) = $tmp46;
// line 104
org$pandalanguage$pandac$Position $tmp47 = *(&local4);
return $tmp47;
block11:;
panda$core$Int64 $tmp48 = (panda$core$Int64) {5};
panda$core$Bit $tmp49 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp48);
bool $tmp50 = $tmp49.value;
if ($tmp50) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Position* $tmp51 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp52 = *$tmp51;
*(&local5) = $tmp52;
org$pandalanguage$pandac$ASTNode** $tmp53 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp54 = *$tmp53;
org$pandalanguage$pandac$parser$Token$Kind* $tmp55 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 24);
org$pandalanguage$pandac$parser$Token$Kind $tmp56 = *$tmp55;
org$pandalanguage$pandac$ASTNode** $tmp57 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp58 = *$tmp57;
// line 107
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
panda$core$Bit* $tmp65 = (panda$core$Bit*) (param0->$data + 16);
panda$core$Bit $tmp66 = *$tmp65;
// line 110
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
org$pandalanguage$pandac$FixedArray** $tmp73 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp74 = *$tmp73;
// line 113
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
panda$core$String** $tmp81 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp82 = *$tmp81;
// line 116
org$pandalanguage$pandac$Position $tmp83 = *(&local8);
return $tmp83;
block19:;
panda$core$Int64 $tmp84 = (panda$core$Int64) {9};
panda$core$Bit $tmp85 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp84);
bool $tmp86 = $tmp85.value;
if ($tmp86) goto block20; else goto block21;
block20:;
org$pandalanguage$pandac$Position* $tmp87 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp88 = *$tmp87;
*(&local9) = $tmp88;
org$pandalanguage$pandac$ASTNode** $tmp89 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp90 = *$tmp89;
org$pandalanguage$pandac$FixedArray** $tmp91 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp92 = *$tmp91;
// line 119
org$pandalanguage$pandac$Position $tmp93 = *(&local9);
return $tmp93;
block21:;
panda$core$Int64 $tmp94 = (panda$core$Int64) {10};
panda$core$Bit $tmp95 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp94);
bool $tmp96 = $tmp95.value;
if ($tmp96) goto block22; else goto block23;
block22:;
org$pandalanguage$pandac$Position* $tmp97 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp98 = *$tmp97;
*(&local10) = $tmp98;
org$pandalanguage$pandac$ASTNode** $tmp99 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp100 = *$tmp99;
panda$core$String** $tmp101 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp102 = *$tmp101;
org$pandalanguage$pandac$FixedArray** $tmp103 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp104 = *$tmp103;
// line 122
org$pandalanguage$pandac$Position $tmp105 = *(&local10);
return $tmp105;
block23:;
panda$core$Int64 $tmp106 = (panda$core$Int64) {11};
panda$core$Bit $tmp107 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp106);
bool $tmp108 = $tmp107.value;
if ($tmp108) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Position* $tmp109 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp110 = *$tmp109;
*(&local11) = $tmp110;
org$pandalanguage$pandac$ASTNode** $tmp111 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp112 = *$tmp111;
org$pandalanguage$pandac$ChoiceCase** $tmp113 = (org$pandalanguage$pandac$ChoiceCase**) (param0->$data + 24);
org$pandalanguage$pandac$ChoiceCase* $tmp114 = *$tmp113;
panda$core$Int64* $tmp115 = (panda$core$Int64*) (param0->$data + 32);
panda$core$Int64 $tmp116 = *$tmp115;
// line 125
org$pandalanguage$pandac$Position $tmp117 = *(&local11);
return $tmp117;
block25:;
panda$core$Int64 $tmp118 = (panda$core$Int64) {12};
panda$core$Bit $tmp119 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp118);
bool $tmp120 = $tmp119.value;
if ($tmp120) goto block26; else goto block27;
block26:;
org$pandalanguage$pandac$Position* $tmp121 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp122 = *$tmp121;
*(&local12) = $tmp122;
org$pandalanguage$pandac$ASTNode** $tmp123 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp124 = *$tmp123;
org$pandalanguage$pandac$FixedArray** $tmp125 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp126 = *$tmp125;
org$pandalanguage$pandac$ClassDecl$Kind* $tmp127 = (org$pandalanguage$pandac$ClassDecl$Kind*) (param0->$data + 32);
org$pandalanguage$pandac$ClassDecl$Kind $tmp128 = *$tmp127;
panda$core$String** $tmp129 = (panda$core$String**) (param0->$data + 40);
panda$core$String* $tmp130 = *$tmp129;
org$pandalanguage$pandac$FixedArray** $tmp131 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 48);
org$pandalanguage$pandac$FixedArray* $tmp132 = *$tmp131;
org$pandalanguage$pandac$FixedArray** $tmp133 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 56);
org$pandalanguage$pandac$FixedArray* $tmp134 = *$tmp133;
org$pandalanguage$pandac$FixedArray** $tmp135 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 64);
org$pandalanguage$pandac$FixedArray* $tmp136 = *$tmp135;
// line 128
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
panda$core$String** $tmp143 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp144 = *$tmp143;
// line 131
org$pandalanguage$pandac$Position $tmp145 = *(&local13);
return $tmp145;
block29:;
panda$core$Int64 $tmp146 = (panda$core$Int64) {14};
panda$core$Bit $tmp147 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp146);
bool $tmp148 = $tmp147.value;
if ($tmp148) goto block30; else goto block31;
block30:;
org$pandalanguage$pandac$Position* $tmp149 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp150 = *$tmp149;
*(&local14) = $tmp150;
org$pandalanguage$pandac$ASTNode** $tmp151 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp152 = *$tmp151;
org$pandalanguage$pandac$ASTNode** $tmp153 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp154 = *$tmp153;
// line 134
org$pandalanguage$pandac$Position $tmp155 = *(&local14);
return $tmp155;
block31:;
panda$core$Int64 $tmp156 = (panda$core$Int64) {15};
panda$core$Bit $tmp157 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp156);
bool $tmp158 = $tmp157.value;
if ($tmp158) goto block32; else goto block33;
block32:;
org$pandalanguage$pandac$Position* $tmp159 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp160 = *$tmp159;
*(&local15) = $tmp160;
panda$core$String** $tmp161 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp162 = *$tmp161;
org$pandalanguage$pandac$FixedArray** $tmp163 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp164 = *$tmp163;
org$pandalanguage$pandac$ASTNode** $tmp165 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp166 = *$tmp165;
// line 137
org$pandalanguage$pandac$Position $tmp167 = *(&local15);
return $tmp167;
block33:;
panda$core$Int64 $tmp168 = (panda$core$Int64) {16};
panda$core$Bit $tmp169 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp168);
bool $tmp170 = $tmp169.value;
if ($tmp170) goto block34; else goto block35;
block34:;
org$pandalanguage$pandac$Position* $tmp171 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp172 = *$tmp171;
*(&local16) = $tmp172;
org$pandalanguage$pandac$ASTNode** $tmp173 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp174 = *$tmp173;
panda$core$String** $tmp175 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp176 = *$tmp175;
// line 140
org$pandalanguage$pandac$Position $tmp177 = *(&local16);
return $tmp177;
block35:;
panda$core$Int64 $tmp178 = (panda$core$Int64) {17};
panda$core$Bit $tmp179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp178);
bool $tmp180 = $tmp179.value;
if ($tmp180) goto block36; else goto block37;
block36:;
org$pandalanguage$pandac$Position* $tmp181 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp182 = *$tmp181;
*(&local17) = $tmp182;
org$pandalanguage$pandac$ASTNode** $tmp183 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp184 = *$tmp183;
panda$core$String** $tmp185 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp186 = *$tmp185;
org$pandalanguage$pandac$FixedArray** $tmp187 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp188 = *$tmp187;
// line 143
org$pandalanguage$pandac$Position $tmp189 = *(&local17);
return $tmp189;
block37:;
panda$core$Int64 $tmp190 = (panda$core$Int64) {18};
panda$core$Bit $tmp191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp190);
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block38; else goto block39;
block38:;
org$pandalanguage$pandac$Position* $tmp193 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp194 = *$tmp193;
*(&local18) = $tmp194;
org$pandalanguage$pandac$ASTNode** $tmp195 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp196 = *$tmp195;
org$pandalanguage$pandac$FixedArray** $tmp197 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp198 = *$tmp197;
org$pandalanguage$pandac$ASTNode** $tmp199 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp200 = *$tmp199;
// line 146
org$pandalanguage$pandac$Position $tmp201 = *(&local18);
return $tmp201;
block39:;
panda$core$Int64 $tmp202 = (panda$core$Int64) {19};
panda$core$Bit $tmp203 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp202);
bool $tmp204 = $tmp203.value;
if ($tmp204) goto block40; else goto block41;
block40:;
org$pandalanguage$pandac$FixedArray** $tmp205 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 0);
org$pandalanguage$pandac$FixedArray* $tmp206 = *$tmp205;
// line 149
org$pandalanguage$pandac$Position $tmp207 = org$pandalanguage$pandac$Position$init();
return $tmp207;
block41:;
panda$core$Int64 $tmp208 = (panda$core$Int64) {20};
panda$core$Bit $tmp209 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp208);
bool $tmp210 = $tmp209.value;
if ($tmp210) goto block42; else goto block43;
block42:;
org$pandalanguage$pandac$Position* $tmp211 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp212 = *$tmp211;
*(&local19) = $tmp212;
panda$core$String** $tmp213 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp214 = *$tmp213;
org$pandalanguage$pandac$ASTNode** $tmp215 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp216 = *$tmp215;
org$pandalanguage$pandac$ASTNode** $tmp217 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp218 = *$tmp217;
org$pandalanguage$pandac$FixedArray** $tmp219 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 40);
org$pandalanguage$pandac$FixedArray* $tmp220 = *$tmp219;
// line 152
org$pandalanguage$pandac$Position $tmp221 = *(&local19);
return $tmp221;
block43:;
panda$core$Int64 $tmp222 = (panda$core$Int64) {21};
panda$core$Bit $tmp223 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp222);
bool $tmp224 = $tmp223.value;
if ($tmp224) goto block44; else goto block45;
block44:;
org$pandalanguage$pandac$Position* $tmp225 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp226 = *$tmp225;
*(&local20) = $tmp226;
panda$core$String** $tmp227 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp228 = *$tmp227;
org$pandalanguage$pandac$FixedArray** $tmp229 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp230 = *$tmp229;
// line 155
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
panda$core$String** $tmp237 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp238 = *$tmp237;
// line 158
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
panda$core$String** $tmp245 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp246 = *$tmp245;
org$pandalanguage$pandac$FixedArray** $tmp247 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp248 = *$tmp247;
// line 161
org$pandalanguage$pandac$Position $tmp249 = *(&local22);
return $tmp249;
block49:;
panda$core$Int64 $tmp250 = (panda$core$Int64) {24};
panda$core$Bit $tmp251 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp250);
bool $tmp252 = $tmp251.value;
if ($tmp252) goto block50; else goto block51;
block50:;
org$pandalanguage$pandac$Position* $tmp253 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp254 = *$tmp253;
*(&local23) = $tmp254;
org$pandalanguage$pandac$ASTNode** $tmp255 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp256 = *$tmp255;
org$pandalanguage$pandac$FixedArray** $tmp257 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp258 = *$tmp257;
org$pandalanguage$pandac$ASTNode** $tmp259 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp260 = *$tmp259;
// line 164
org$pandalanguage$pandac$Position $tmp261 = *(&local23);
return $tmp261;
block51:;
panda$core$Int64 $tmp262 = (panda$core$Int64) {25};
panda$core$Bit $tmp263 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp262);
bool $tmp264 = $tmp263.value;
if ($tmp264) goto block52; else goto block53;
block52:;
org$pandalanguage$pandac$Position* $tmp265 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp266 = *$tmp265;
*(&local24) = $tmp266;
panda$core$UInt64* $tmp267 = (panda$core$UInt64*) (param0->$data + 16);
panda$core$UInt64 $tmp268 = *$tmp267;
// line 167
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
org$pandalanguage$pandac$IR$Value** $tmp275 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp276 = *$tmp275;
// line 170
org$pandalanguage$pandac$Position $tmp277 = *(&local25);
return $tmp277;
block55:;
panda$core$Int64 $tmp278 = (panda$core$Int64) {27};
panda$core$Bit $tmp279 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp278);
bool $tmp280 = $tmp279.value;
if ($tmp280) goto block56; else goto block57;
block56:;
org$pandalanguage$pandac$Position* $tmp281 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp282 = *$tmp281;
*(&local26) = $tmp282;
panda$core$String** $tmp283 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp284 = *$tmp283;
org$pandalanguage$pandac$FixedArray** $tmp285 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp286 = *$tmp285;
// line 173
org$pandalanguage$pandac$Position $tmp287 = *(&local26);
return $tmp287;
block57:;
panda$core$Int64 $tmp288 = (panda$core$Int64) {28};
panda$core$Bit $tmp289 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp288);
bool $tmp290 = $tmp289.value;
if ($tmp290) goto block58; else goto block59;
block58:;
org$pandalanguage$pandac$Position* $tmp291 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp292 = *$tmp291;
*(&local27) = $tmp292;
org$pandalanguage$pandac$ASTNode** $tmp293 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp294 = *$tmp293;
org$pandalanguage$pandac$FixedArray** $tmp295 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp296 = *$tmp295;
org$pandalanguage$pandac$FixedArray** $tmp297 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp298 = *$tmp297;
// line 176
org$pandalanguage$pandac$Position $tmp299 = *(&local27);
return $tmp299;
block59:;
panda$core$Int64 $tmp300 = (panda$core$Int64) {29};
panda$core$Bit $tmp301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp300);
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block60; else goto block61;
block60:;
org$pandalanguage$pandac$Position* $tmp303 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp304 = *$tmp303;
*(&local28) = $tmp304;
org$pandalanguage$pandac$ASTNode** $tmp305 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp306 = *$tmp305;
org$pandalanguage$pandac$FixedArray** $tmp307 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp308 = *$tmp307;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp309 = (org$pandalanguage$pandac$MethodDecl$Kind*) (param0->$data + 32);
org$pandalanguage$pandac$MethodDecl$Kind $tmp310 = *$tmp309;
panda$core$String** $tmp311 = (panda$core$String**) (param0->$data + 40);
panda$core$String* $tmp312 = *$tmp311;
org$pandalanguage$pandac$FixedArray** $tmp313 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 48);
org$pandalanguage$pandac$FixedArray* $tmp314 = *$tmp313;
org$pandalanguage$pandac$FixedArray** $tmp315 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 56);
org$pandalanguage$pandac$FixedArray* $tmp316 = *$tmp315;
org$pandalanguage$pandac$ASTNode** $tmp317 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 64);
org$pandalanguage$pandac$ASTNode* $tmp318 = *$tmp317;
org$pandalanguage$pandac$FixedArray** $tmp319 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 72);
org$pandalanguage$pandac$FixedArray* $tmp320 = *$tmp319;
// line 179
org$pandalanguage$pandac$Position $tmp321 = *(&local28);
return $tmp321;
block61:;
panda$core$Int64 $tmp322 = (panda$core$Int64) {30};
panda$core$Bit $tmp323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp322);
bool $tmp324 = $tmp323.value;
if ($tmp324) goto block62; else goto block63;
block62:;
org$pandalanguage$pandac$Position* $tmp325 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp326 = *$tmp325;
*(&local29) = $tmp326;
org$pandalanguage$pandac$parser$Token$Kind* $tmp327 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp328 = *$tmp327;
org$pandalanguage$pandac$FixedArray** $tmp329 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp330 = *$tmp329;
org$pandalanguage$pandac$ASTNode** $tmp331 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp332 = *$tmp331;
// line 182
org$pandalanguage$pandac$Position $tmp333 = *(&local29);
return $tmp333;
block63:;
panda$core$Int64 $tmp334 = (panda$core$Int64) {31};
panda$core$Bit $tmp335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp334);
bool $tmp336 = $tmp335.value;
if ($tmp336) goto block64; else goto block65;
block64:;
org$pandalanguage$pandac$Position* $tmp337 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp338 = *$tmp337;
*(&local30) = $tmp338;
// line 185
org$pandalanguage$pandac$Position $tmp339 = *(&local30);
return $tmp339;
block65:;
panda$core$Int64 $tmp340 = (panda$core$Int64) {32};
panda$core$Bit $tmp341 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp340);
bool $tmp342 = $tmp341.value;
if ($tmp342) goto block66; else goto block67;
block66:;
org$pandalanguage$pandac$Position* $tmp343 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp344 = *$tmp343;
*(&local31) = $tmp344;
org$pandalanguage$pandac$ASTNode** $tmp345 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp346 = *$tmp345;
// line 188
org$pandalanguage$pandac$Position $tmp347 = *(&local31);
return $tmp347;
block67:;
panda$core$Int64 $tmp348 = (panda$core$Int64) {33};
panda$core$Bit $tmp349 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp348);
bool $tmp350 = $tmp349.value;
if ($tmp350) goto block68; else goto block69;
block68:;
org$pandalanguage$pandac$Position* $tmp351 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp352 = *$tmp351;
*(&local32) = $tmp352;
panda$core$String** $tmp353 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp354 = *$tmp353;
// line 191
org$pandalanguage$pandac$Position $tmp355 = *(&local32);
return $tmp355;
block69:;
panda$core$Int64 $tmp356 = (panda$core$Int64) {34};
panda$core$Bit $tmp357 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp356);
bool $tmp358 = $tmp357.value;
if ($tmp358) goto block70; else goto block71;
block70:;
org$pandalanguage$pandac$Position* $tmp359 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp360 = *$tmp359;
*(&local33) = $tmp360;
panda$core$String** $tmp361 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp362 = *$tmp361;
org$pandalanguage$pandac$ASTNode** $tmp363 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp364 = *$tmp363;
// line 194
org$pandalanguage$pandac$Position $tmp365 = *(&local33);
return $tmp365;
block71:;
panda$core$Int64 $tmp366 = (panda$core$Int64) {35};
panda$core$Bit $tmp367 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp366);
bool $tmp368 = $tmp367.value;
if ($tmp368) goto block72; else goto block73;
block72:;
org$pandalanguage$pandac$Position* $tmp369 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp370 = *$tmp369;
*(&local34) = $tmp370;
org$pandalanguage$pandac$parser$Token$Kind* $tmp371 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp372 = *$tmp371;
org$pandalanguage$pandac$ASTNode** $tmp373 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp374 = *$tmp373;
// line 197
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
panda$core$Bit* $tmp383 = (panda$core$Bit*) (param0->$data + 24);
panda$core$Bit $tmp384 = *$tmp383;
org$pandalanguage$pandac$ASTNode** $tmp385 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 25);
org$pandalanguage$pandac$ASTNode* $tmp386 = *$tmp385;
org$pandalanguage$pandac$ASTNode** $tmp387 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 33);
org$pandalanguage$pandac$ASTNode* $tmp388 = *$tmp387;
// line 200
org$pandalanguage$pandac$Position $tmp389 = *(&local35);
return $tmp389;
block75:;
panda$core$Int64 $tmp390 = (panda$core$Int64) {37};
panda$core$Bit $tmp391 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp390);
bool $tmp392 = $tmp391.value;
if ($tmp392) goto block76; else goto block77;
block76:;
org$pandalanguage$pandac$Position* $tmp393 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp394 = *$tmp393;
*(&local36) = $tmp394;
panda$core$Real64* $tmp395 = (panda$core$Real64*) (param0->$data + 16);
panda$core$Real64 $tmp396 = *$tmp395;
// line 203
org$pandalanguage$pandac$Position $tmp397 = *(&local36);
return $tmp397;
block77:;
panda$core$Int64 $tmp398 = (panda$core$Int64) {38};
panda$core$Bit $tmp399 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp398);
bool $tmp400 = $tmp399.value;
if ($tmp400) goto block78; else goto block79;
block78:;
org$pandalanguage$pandac$Position* $tmp401 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp402 = *$tmp401;
*(&local37) = $tmp402;
panda$core$String** $tmp403 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp404 = *$tmp403;
// line 206
org$pandalanguage$pandac$Position $tmp405 = *(&local37);
return $tmp405;
block79:;
panda$core$Int64 $tmp406 = (panda$core$Int64) {39};
panda$core$Bit $tmp407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp406);
bool $tmp408 = $tmp407.value;
if ($tmp408) goto block80; else goto block81;
block80:;
org$pandalanguage$pandac$Position* $tmp409 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp410 = *$tmp409;
*(&local38) = $tmp410;
org$pandalanguage$pandac$ASTNode** $tmp411 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp412 = *$tmp411;
// line 209
org$pandalanguage$pandac$Position $tmp413 = *(&local38);
return $tmp413;
block81:;
panda$core$Int64 $tmp414 = (panda$core$Int64) {40};
panda$core$Bit $tmp415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp414);
bool $tmp416 = $tmp415.value;
if ($tmp416) goto block82; else goto block83;
block82:;
org$pandalanguage$pandac$Position* $tmp417 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp418 = *$tmp417;
*(&local39) = $tmp418;
// line 212
org$pandalanguage$pandac$Position $tmp419 = *(&local39);
return $tmp419;
block83:;
panda$core$Int64 $tmp420 = (panda$core$Int64) {41};
panda$core$Bit $tmp421 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp420);
bool $tmp422 = $tmp421.value;
if ($tmp422) goto block84; else goto block85;
block84:;
org$pandalanguage$pandac$Position* $tmp423 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp424 = *$tmp423;
*(&local40) = $tmp424;
panda$core$String** $tmp425 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp426 = *$tmp425;
// line 215
org$pandalanguage$pandac$Position $tmp427 = *(&local40);
return $tmp427;
block85:;
panda$core$Int64 $tmp428 = (panda$core$Int64) {42};
panda$core$Bit $tmp429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp428);
bool $tmp430 = $tmp429.value;
if ($tmp430) goto block86; else goto block87;
block86:;
org$pandalanguage$pandac$Position* $tmp431 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp432 = *$tmp431;
*(&local41) = $tmp432;
// line 218
org$pandalanguage$pandac$Position $tmp433 = *(&local41);
return $tmp433;
block87:;
panda$core$Int64 $tmp434 = (panda$core$Int64) {43};
panda$core$Bit $tmp435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp434);
bool $tmp436 = $tmp435.value;
if ($tmp436) goto block88; else goto block89;
block88:;
org$pandalanguage$pandac$Position* $tmp437 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp438 = *$tmp437;
*(&local42) = $tmp438;
org$pandalanguage$pandac$FixedArray** $tmp439 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp440 = *$tmp439;
// line 221
org$pandalanguage$pandac$Position $tmp441 = *(&local42);
return $tmp441;
block89:;
panda$core$Int64 $tmp442 = (panda$core$Int64) {44};
panda$core$Bit $tmp443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp442);
bool $tmp444 = $tmp443.value;
if ($tmp444) goto block90; else goto block91;
block90:;
org$pandalanguage$pandac$Position* $tmp445 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp446 = *$tmp445;
*(&local43) = $tmp446;
org$pandalanguage$pandac$FixedArray** $tmp447 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp448 = *$tmp447;
// line 224
org$pandalanguage$pandac$Position $tmp449 = *(&local43);
return $tmp449;
block91:;
panda$core$Int64 $tmp450 = (panda$core$Int64) {45};
panda$core$Bit $tmp451 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp450);
bool $tmp452 = $tmp451.value;
if ($tmp452) goto block92; else goto block93;
block92:;
org$pandalanguage$pandac$Position* $tmp453 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp454 = *$tmp453;
*(&local44) = $tmp454;
panda$core$String** $tmp455 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp456 = *$tmp455;
// line 227
org$pandalanguage$pandac$Position $tmp457 = *(&local44);
return $tmp457;
block93:;
panda$core$Int64 $tmp458 = (panda$core$Int64) {47};
panda$core$Bit $tmp459 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp458);
bool $tmp460 = $tmp459.value;
if ($tmp460) goto block94; else goto block95;
block94:;
org$pandalanguage$pandac$Position* $tmp461 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp462 = *$tmp461;
*(&local45) = $tmp462;
panda$core$String** $tmp463 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp464 = *$tmp463;
org$pandalanguage$pandac$ASTNode** $tmp465 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp466 = *$tmp465;
// line 230
org$pandalanguage$pandac$Position $tmp467 = *(&local45);
return $tmp467;
block95:;
panda$core$Int64 $tmp468 = (panda$core$Int64) {46};
panda$core$Bit $tmp469 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp468);
bool $tmp470 = $tmp469.value;
if ($tmp470) goto block96; else goto block97;
block96:;
org$pandalanguage$pandac$Position* $tmp471 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp472 = *$tmp471;
*(&local46) = $tmp472;
org$pandalanguage$pandac$FixedArray** $tmp473 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp474 = *$tmp473;
org$pandalanguage$pandac$ASTNode** $tmp475 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp476 = *$tmp475;
// line 233
org$pandalanguage$pandac$Position $tmp477 = *(&local46);
return $tmp477;
block97:;
panda$core$Int64 $tmp478 = (panda$core$Int64) {48};
panda$core$Bit $tmp479 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp478);
bool $tmp480 = $tmp479.value;
if ($tmp480) goto block98; else goto block99;
block98:;
org$pandalanguage$pandac$Position* $tmp481 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp482 = *$tmp481;
*(&local47) = $tmp482;
org$pandalanguage$pandac$FixedArray** $tmp483 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp484 = *$tmp483;
org$pandalanguage$pandac$ASTNode** $tmp485 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp486 = *$tmp485;
// line 236
org$pandalanguage$pandac$Position $tmp487 = *(&local47);
return $tmp487;
block99:;
panda$core$Int64 $tmp488 = (panda$core$Int64) {49};
panda$core$Bit $tmp489 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp488);
bool $tmp490 = $tmp489.value;
if ($tmp490) goto block100; else goto block101;
block100:;
org$pandalanguage$pandac$Position* $tmp491 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp492 = *$tmp491;
*(&local48) = $tmp492;
panda$core$String** $tmp493 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp494 = *$tmp493;
// line 239
org$pandalanguage$pandac$Position $tmp495 = *(&local48);
return $tmp495;
block101:;
panda$core$Int64 $tmp496 = (panda$core$Int64) {50};
panda$core$Bit $tmp497 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp496);
bool $tmp498 = $tmp497.value;
if ($tmp498) goto block102; else goto block103;
block102:;
org$pandalanguage$pandac$Position* $tmp499 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp500 = *$tmp499;
*(&local49) = $tmp500;
org$pandalanguage$pandac$Variable$Kind* $tmp501 = (org$pandalanguage$pandac$Variable$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$Variable$Kind $tmp502 = *$tmp501;
org$pandalanguage$pandac$FixedArray** $tmp503 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp504 = *$tmp503;
// line 242
org$pandalanguage$pandac$Position $tmp505 = *(&local49);
return $tmp505;
block103:;
panda$core$Int64 $tmp506 = (panda$core$Int64) {51};
panda$core$Bit $tmp507 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp506);
bool $tmp508 = $tmp507.value;
if ($tmp508) goto block104; else goto block105;
block104:;
org$pandalanguage$pandac$Position* $tmp509 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp510 = *$tmp509;
*(&local50) = $tmp510;
org$pandalanguage$pandac$FixedArray** $tmp511 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp512 = *$tmp511;
org$pandalanguage$pandac$FixedArray** $tmp513 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp514 = *$tmp513;
// line 245
org$pandalanguage$pandac$Position $tmp515 = *(&local50);
return $tmp515;
block105:;
panda$core$Int64 $tmp516 = (panda$core$Int64) {52};
panda$core$Bit $tmp517 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp516);
bool $tmp518 = $tmp517.value;
if ($tmp518) goto block106; else goto block107;
block106:;
org$pandalanguage$pandac$Position* $tmp519 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp520 = *$tmp519;
*(&local51) = $tmp520;
panda$core$String** $tmp521 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp522 = *$tmp521;
org$pandalanguage$pandac$ASTNode** $tmp523 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp524 = *$tmp523;
org$pandalanguage$pandac$FixedArray** $tmp525 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp526 = *$tmp525;
// line 248
org$pandalanguage$pandac$Position $tmp527 = *(&local51);
return $tmp527;
block107:;
// line 251
panda$core$Bit $tmp528 = panda$core$Bit$init$builtin_bit(false);
bool $tmp529 = $tmp528.value;
if ($tmp529) goto block108; else goto block109;
block109:;
panda$core$Int64 $tmp530 = (panda$core$Int64) {251};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s531, $tmp530);
abort(); // unreachable
block108:;
goto block1;
block1:;
panda$core$Bit $tmp532 = panda$core$Bit$init$builtin_bit(false);
bool $tmp533 = $tmp532.value;
if ($tmp533) goto block110; else goto block111;
block111:;
panda$core$Int64 $tmp534 = (panda$core$Int64) {89};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s535, $tmp534, &$s536);
abort(); // unreachable
block110:;
abort(); // unreachable

}
panda$core$String* org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(org$pandalanguage$pandac$ASTNode* param0) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
org$pandalanguage$pandac$FixedArray* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
org$pandalanguage$pandac$ASTNode* local6 = NULL;
org$pandalanguage$pandac$parser$Token$Kind local7;
org$pandalanguage$pandac$ASTNode* local8 = NULL;
panda$core$Bit local9;
org$pandalanguage$pandac$FixedArray* local10 = NULL;
panda$core$MutableString* local11 = NULL;
org$pandalanguage$pandac$ASTNode* local12 = NULL;
panda$core$String* local13 = NULL;
org$pandalanguage$pandac$ASTNode* local14 = NULL;
org$pandalanguage$pandac$FixedArray* local15 = NULL;
org$pandalanguage$pandac$ASTNode* local16 = NULL;
panda$core$String* local17 = NULL;
org$pandalanguage$pandac$FixedArray* local18 = NULL;
panda$core$MutableString* local19 = NULL;
org$pandalanguage$pandac$ASTNode* local20 = NULL;
org$pandalanguage$pandac$ChoiceCase* local21 = NULL;
panda$core$Int64 local22;
org$pandalanguage$pandac$ASTNode* local23 = NULL;
org$pandalanguage$pandac$FixedArray* local24 = NULL;
org$pandalanguage$pandac$ClassDecl$Kind local25;
panda$core$String* local26 = NULL;
org$pandalanguage$pandac$FixedArray* local27 = NULL;
org$pandalanguage$pandac$FixedArray* local28 = NULL;
org$pandalanguage$pandac$FixedArray* local29 = NULL;
panda$core$MutableString* local30 = NULL;
org$pandalanguage$pandac$ASTNode* local31 = NULL;
org$pandalanguage$pandac$ASTNode* local32 = NULL;
panda$core$String* local33 = NULL;
org$pandalanguage$pandac$ASTNode* local34 = NULL;
org$pandalanguage$pandac$ASTNode* local35 = NULL;
panda$core$String* local36 = NULL;
org$pandalanguage$pandac$FixedArray* local37 = NULL;
org$pandalanguage$pandac$ASTNode* local38 = NULL;
panda$core$MutableString* local39 = NULL;
org$pandalanguage$pandac$ASTNode* local40 = NULL;
org$pandalanguage$pandac$ASTNode* local41 = NULL;
panda$core$String* local42 = NULL;
org$pandalanguage$pandac$ASTNode* local43 = NULL;
panda$core$String* local44 = NULL;
org$pandalanguage$pandac$FixedArray* local45 = NULL;
org$pandalanguage$pandac$ASTNode* local46 = NULL;
org$pandalanguage$pandac$FixedArray* local47 = NULL;
org$pandalanguage$pandac$ASTNode* local48 = NULL;
panda$core$MutableString* local49 = NULL;
org$pandalanguage$pandac$ASTNode* local50 = NULL;
org$pandalanguage$pandac$FixedArray* local51 = NULL;
panda$core$MutableString* local52 = NULL;
org$pandalanguage$pandac$ASTNode* local53 = NULL;
panda$core$String* local54 = NULL;
org$pandalanguage$pandac$ASTNode* local55 = NULL;
org$pandalanguage$pandac$ASTNode* local56 = NULL;
org$pandalanguage$pandac$FixedArray* local57 = NULL;
panda$core$MutableString* local58 = NULL;
org$pandalanguage$pandac$ASTNode* local59 = NULL;
panda$core$String* local60 = NULL;
org$pandalanguage$pandac$FixedArray* local61 = NULL;
panda$core$String* local62 = NULL;
panda$core$String* local63 = NULL;
org$pandalanguage$pandac$FixedArray* local64 = NULL;
org$pandalanguage$pandac$ASTNode* local65 = NULL;
org$pandalanguage$pandac$FixedArray* local66 = NULL;
org$pandalanguage$pandac$ASTNode* local67 = NULL;
panda$core$MutableString* local68 = NULL;
org$pandalanguage$pandac$ASTNode* local69 = NULL;
panda$core$UInt64 local70;
org$pandalanguage$pandac$IR$Value* local71 = NULL;
panda$core$String* local72 = NULL;
org$pandalanguage$pandac$FixedArray* local73 = NULL;
panda$core$MutableString* local74 = NULL;
org$pandalanguage$pandac$ASTNode* local75 = NULL;
org$pandalanguage$pandac$ASTNode* local76 = NULL;
org$pandalanguage$pandac$FixedArray* local77 = NULL;
org$pandalanguage$pandac$FixedArray* local78 = NULL;
panda$core$MutableString* local79 = NULL;
org$pandalanguage$pandac$ASTNode* local80 = NULL;
org$pandalanguage$pandac$ASTNode* local81 = NULL;
org$pandalanguage$pandac$FixedArray* local82 = NULL;
org$pandalanguage$pandac$MethodDecl$Kind local83;
panda$core$String* local84 = NULL;
org$pandalanguage$pandac$FixedArray* local85 = NULL;
org$pandalanguage$pandac$FixedArray* local86 = NULL;
org$pandalanguage$pandac$ASTNode* local87 = NULL;
org$pandalanguage$pandac$FixedArray* local88 = NULL;
panda$core$MutableString* local89 = NULL;
org$pandalanguage$pandac$ASTNode* local90 = NULL;
org$pandalanguage$pandac$ASTNode* local91 = NULL;
org$pandalanguage$pandac$parser$Token$Kind local92;
org$pandalanguage$pandac$FixedArray* local93 = NULL;
org$pandalanguage$pandac$ASTNode* local94 = NULL;
panda$core$String* local95 = NULL;
panda$core$String* local96 = NULL;
org$pandalanguage$pandac$ASTNode* local97 = NULL;
panda$core$String* local98 = NULL;
panda$core$String* local99 = NULL;
org$pandalanguage$pandac$ASTNode* local100 = NULL;
org$pandalanguage$pandac$parser$Token$Kind local101;
org$pandalanguage$pandac$ASTNode* local102 = NULL;
org$pandalanguage$pandac$ASTNode* local103 = NULL;
panda$core$Bit local104;
org$pandalanguage$pandac$ASTNode* local105 = NULL;
org$pandalanguage$pandac$ASTNode* local106 = NULL;
panda$core$MutableString* local107 = NULL;
panda$core$Real64 local108;
panda$core$String* local109 = NULL;
org$pandalanguage$pandac$ASTNode* local110 = NULL;
panda$core$String* local111 = NULL;
org$pandalanguage$pandac$FixedArray* local112 = NULL;
org$pandalanguage$pandac$FixedArray* local113 = NULL;
panda$core$String* local114 = NULL;
panda$core$String* local115 = NULL;
org$pandalanguage$pandac$ASTNode* local116 = NULL;
org$pandalanguage$pandac$FixedArray* local117 = NULL;
org$pandalanguage$pandac$ASTNode* local118 = NULL;
org$pandalanguage$pandac$FixedArray* local119 = NULL;
org$pandalanguage$pandac$ASTNode* local120 = NULL;
panda$core$String* local121 = NULL;
org$pandalanguage$pandac$Variable$Kind local122;
org$pandalanguage$pandac$FixedArray* local123 = NULL;
panda$core$MutableString* local124 = NULL;
org$pandalanguage$pandac$FixedArray* local125 = NULL;
org$pandalanguage$pandac$FixedArray* local126 = NULL;
panda$core$MutableString* local127 = NULL;
panda$core$String* local128 = NULL;
org$pandalanguage$pandac$ASTNode* local129 = NULL;
org$pandalanguage$pandac$ASTNode* local130 = NULL;
panda$core$String* local131 = NULL;
org$pandalanguage$pandac$ASTNode* local132 = NULL;
org$pandalanguage$pandac$FixedArray* local133 = NULL;
panda$core$MutableString* local134 = NULL;
org$pandalanguage$pandac$ASTNode* local135 = NULL;
// line 258
panda$core$Int64* $tmp537 = &param0->$rawValue;
panda$core$Int64 $tmp538 = *$tmp537;
panda$core$Int64 $tmp539 = (panda$core$Int64) {0};
panda$core$Bit $tmp540 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp539);
bool $tmp541 = $tmp540.value;
if ($tmp541) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp542 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp543 = *$tmp542;
panda$core$String** $tmp544 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp545 = *$tmp544;
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp545));
panda$core$String* $tmp546 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp546));
*(&local0) = $tmp545;
panda$core$String** $tmp547 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp548 = *$tmp547;
org$pandalanguage$pandac$ASTNode** $tmp549 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp550 = *$tmp549;
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp550));
org$pandalanguage$pandac$ASTNode* $tmp551 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp551));
*(&local1) = $tmp550;
// line 260
org$pandalanguage$pandac$ASTNode* $tmp552 = *(&local1);
panda$core$Bit $tmp553 = panda$core$Bit$init$builtin_bit($tmp552 != NULL);
bool $tmp554 = $tmp553.value;
if ($tmp554) goto block4; else goto block5;
block4:;
// line 261
panda$core$String* $tmp555 = *(&local0);
panda$core$String* $tmp556 = panda$core$String$convert$R$panda$core$String($tmp555);
panda$core$String* $tmp557 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp556, &$s558);
org$pandalanguage$pandac$ASTNode* $tmp559 = *(&local1);
panda$core$String* $tmp560 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp557, ((panda$core$Object*) $tmp559));
panda$core$String* $tmp561 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp560, &$s562);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp561));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp561));
// unreffing REF($42:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp560));
// unreffing REF($41:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp557));
// unreffing REF($38:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp556));
// unreffing REF($37:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp563 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp563));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp564 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp564));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return $tmp561;
block5:;
// line 263
panda$core$String* $tmp565 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp565));
org$pandalanguage$pandac$ASTNode* $tmp566 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp566));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp567 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp567));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return $tmp565;
block3:;
panda$core$Int64 $tmp568 = (panda$core$Int64) {1};
panda$core$Bit $tmp569 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp568);
bool $tmp570 = $tmp569.value;
if ($tmp570) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$Position* $tmp571 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp572 = *$tmp571;
org$pandalanguage$pandac$FixedArray** $tmp573 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp574 = *$tmp573;
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp574));
org$pandalanguage$pandac$FixedArray* $tmp575 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp575));
*(&local2) = $tmp574;
// line 266
org$pandalanguage$pandac$FixedArray* $tmp576 = *(&local2);
panda$core$String* $tmp577 = org$pandalanguage$pandac$FixedArray$convert$R$panda$core$String($tmp576);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp577));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp577));
// unreffing REF($101:panda.core.String)
org$pandalanguage$pandac$FixedArray* $tmp578 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp578));
// unreffing elements
*(&local2) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp577;
block7:;
panda$core$Int64 $tmp579 = (panda$core$Int64) {2};
panda$core$Bit $tmp580 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp579);
bool $tmp581 = $tmp580.value;
if ($tmp581) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$Position* $tmp582 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp583 = *$tmp582;
org$pandalanguage$pandac$ASTNode** $tmp584 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp585 = *$tmp584;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp585));
org$pandalanguage$pandac$ASTNode* $tmp586 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp586));
*(&local3) = $tmp585;
org$pandalanguage$pandac$ASTNode** $tmp587 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp588 = *$tmp587;
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp588));
org$pandalanguage$pandac$ASTNode* $tmp589 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp589));
*(&local4) = $tmp588;
// line 269
org$pandalanguage$pandac$ASTNode* $tmp590 = *(&local4);
panda$core$Bit $tmp591 = panda$core$Bit$init$builtin_bit($tmp590 == NULL);
bool $tmp592 = $tmp591.value;
if ($tmp592) goto block10; else goto block11;
block10:;
// line 270
org$pandalanguage$pandac$ASTNode* $tmp593 = *(&local3);
panda$core$String* $tmp594 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s595, ((panda$core$Object*) $tmp593));
panda$core$String* $tmp596 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp594, &$s597);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp596));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp596));
// unreffing REF($147:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp594));
// unreffing REF($146:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp598 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp598));
// unreffing msg
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp599 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp599));
// unreffing test
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp596;
block11:;
// line 272
org$pandalanguage$pandac$ASTNode* $tmp600 = *(&local3);
panda$core$String* $tmp601 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s602, ((panda$core$Object*) $tmp600));
panda$core$String* $tmp603 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp601, &$s604);
org$pandalanguage$pandac$ASTNode* $tmp605 = *(&local4);
panda$core$String* $tmp606 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp603, ((panda$core$Object*) $tmp605));
panda$core$String* $tmp607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp606, &$s608);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp607));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp607));
// unreffing REF($175:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp606));
// unreffing REF($174:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp603));
// unreffing REF($171:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp601));
// unreffing REF($170:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp609 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp609));
// unreffing msg
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp610 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp610));
// unreffing test
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp607;
block9:;
panda$core$Int64 $tmp611 = (panda$core$Int64) {3};
panda$core$Bit $tmp612 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp611);
bool $tmp613 = $tmp612.value;
if ($tmp613) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Position* $tmp614 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp615 = *$tmp614;
org$pandalanguage$pandac$ASTNode** $tmp616 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp617 = *$tmp616;
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp617));
org$pandalanguage$pandac$ASTNode* $tmp618 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp618));
*(&local5) = $tmp617;
// line 275
org$pandalanguage$pandac$ASTNode* $tmp619 = *(&local5);
panda$core$String* $tmp620 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s621, ((panda$core$Object*) $tmp619));
panda$core$String* $tmp622 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp620, &$s623);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp622));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp622));
// unreffing REF($220:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp620));
// unreffing REF($219:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp624 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp624));
// unreffing expr
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp622;
block13:;
panda$core$Int64 $tmp625 = (panda$core$Int64) {4};
panda$core$Bit $tmp626 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp625);
bool $tmp627 = $tmp626.value;
if ($tmp627) goto block14; else goto block15;
block14:;
org$pandalanguage$pandac$Position* $tmp628 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp629 = *$tmp628;
// line 278
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s630));
return &$s631;
block15:;
panda$core$Int64 $tmp632 = (panda$core$Int64) {5};
panda$core$Bit $tmp633 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp632);
bool $tmp634 = $tmp633.value;
if ($tmp634) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$Position* $tmp635 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp636 = *$tmp635;
org$pandalanguage$pandac$ASTNode** $tmp637 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp638 = *$tmp637;
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp638));
org$pandalanguage$pandac$ASTNode* $tmp639 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp639));
*(&local6) = $tmp638;
org$pandalanguage$pandac$parser$Token$Kind* $tmp640 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 24);
org$pandalanguage$pandac$parser$Token$Kind $tmp641 = *$tmp640;
*(&local7) = $tmp641;
org$pandalanguage$pandac$ASTNode** $tmp642 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp643 = *$tmp642;
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp643));
org$pandalanguage$pandac$ASTNode* $tmp644 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp644));
*(&local8) = $tmp643;
// line 281
org$pandalanguage$pandac$ASTNode* $tmp645 = *(&local6);
panda$core$String* $tmp646 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s647, ((panda$core$Object*) $tmp645));
panda$core$String* $tmp648 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp646, &$s649);
org$pandalanguage$pandac$parser$Token$Kind $tmp650 = *(&local7);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp651;
$tmp651 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp651->value = $tmp650;
panda$core$String* $tmp652 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp648, ((panda$core$Object*) $tmp651));
panda$core$String* $tmp653 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp652, &$s654);
org$pandalanguage$pandac$ASTNode* $tmp655 = *(&local8);
panda$core$String* $tmp656 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp653, ((panda$core$Object*) $tmp655));
panda$core$String* $tmp657 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp656, &$s658);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp657));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp657));
// unreffing REF($284:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp656));
// unreffing REF($283:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp653));
// unreffing REF($280:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp652));
// unreffing REF($279:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp651));
// unreffing REF($278:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp648));
// unreffing REF($276:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp646));
// unreffing REF($275:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp659 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp659));
// unreffing right
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp660 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp660));
// unreffing left
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp657;
block17:;
panda$core$Int64 $tmp661 = (panda$core$Int64) {6};
panda$core$Bit $tmp662 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp661);
bool $tmp663 = $tmp662.value;
if ($tmp663) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$Position* $tmp664 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp665 = *$tmp664;
panda$core$Bit* $tmp666 = (panda$core$Bit*) (param0->$data + 16);
panda$core$Bit $tmp667 = *$tmp666;
*(&local9) = $tmp667;
// line 284
panda$core$Bit $tmp668 = *(&local9);
panda$core$String* $tmp669 = panda$core$Bit$convert$R$panda$core$String($tmp668);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp669));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp669));
// unreffing REF($330:panda.core.String)
return $tmp669;
block19:;
panda$core$Int64 $tmp670 = (panda$core$Int64) {7};
panda$core$Bit $tmp671 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp670);
bool $tmp672 = $tmp671.value;
if ($tmp672) goto block20; else goto block21;
block20:;
org$pandalanguage$pandac$Position* $tmp673 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp674 = *$tmp673;
org$pandalanguage$pandac$FixedArray** $tmp675 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp676 = *$tmp675;
*(&local10) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp676));
org$pandalanguage$pandac$FixedArray* $tmp677 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp677));
*(&local10) = $tmp676;
// line 287
panda$core$MutableString* $tmp678 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp678, &$s679);
*(&local11) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp678));
panda$core$MutableString* $tmp680 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp680));
*(&local11) = $tmp678;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp678));
// unreffing REF($353:panda.core.MutableString)
// line 288
org$pandalanguage$pandac$FixedArray* $tmp681 = *(&local10);
ITable* $tmp682 = ((panda$collections$Iterable*) $tmp681)->$class->itable;
while ($tmp682->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp682 = $tmp682->next;
}
$fn684 $tmp683 = $tmp682->methods[0];
panda$collections$Iterator* $tmp685 = $tmp683(((panda$collections$Iterable*) $tmp681));
goto block22;
block22:;
ITable* $tmp686 = $tmp685->$class->itable;
while ($tmp686->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp686 = $tmp686->next;
}
$fn688 $tmp687 = $tmp686->methods[0];
panda$core$Bit $tmp689 = $tmp687($tmp685);
bool $tmp690 = $tmp689.value;
if ($tmp690) goto block24; else goto block23;
block23:;
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp691 = $tmp685->$class->itable;
while ($tmp691->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp691 = $tmp691->next;
}
$fn693 $tmp692 = $tmp691->methods[1];
panda$core$Object* $tmp694 = $tmp692($tmp685);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp694)));
org$pandalanguage$pandac$ASTNode* $tmp695 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp695));
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) $tmp694);
// line 289
panda$core$MutableString* $tmp696 = *(&local11);
org$pandalanguage$pandac$ASTNode* $tmp697 = *(&local12);
panda$core$String* $tmp698 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp697), &$s699);
panda$core$MutableString$append$panda$core$String($tmp696, $tmp698);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp698));
// unreffing REF($393:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp694);
// unreffing REF($381:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp700 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp700));
// unreffing s
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block22;
block24:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp685));
// unreffing REF($370:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 291
panda$core$MutableString* $tmp701 = *(&local11);
panda$core$MutableString$append$panda$core$String($tmp701, &$s702);
// line 292
panda$core$MutableString* $tmp703 = *(&local11);
panda$core$String* $tmp704 = panda$core$MutableString$finish$R$panda$core$String($tmp703);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp704));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp704));
// unreffing REF($415:panda.core.String)
panda$core$MutableString* $tmp705 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp705));
// unreffing result
*(&local11) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp706 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp706));
// unreffing statements
*(&local10) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp704;
block21:;
panda$core$Int64 $tmp707 = (panda$core$Int64) {8};
panda$core$Bit $tmp708 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp707);
bool $tmp709 = $tmp708.value;
if ($tmp709) goto block25; else goto block26;
block25:;
org$pandalanguage$pandac$Position* $tmp710 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp711 = *$tmp710;
panda$core$String** $tmp712 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp713 = *$tmp712;
*(&local13) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp713));
panda$core$String* $tmp714 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp714));
*(&local13) = $tmp713;
// line 295
panda$core$String* $tmp715 = *(&local13);
panda$core$Bit $tmp716 = panda$core$Bit$init$builtin_bit($tmp715 != NULL);
bool $tmp717 = $tmp716.value;
if ($tmp717) goto block27; else goto block28;
block27:;
// line 296
panda$core$String* $tmp718 = *(&local13);
panda$core$String* $tmp719 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s720, $tmp718);
panda$core$String* $tmp721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp719, &$s722);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp721));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp721));
// unreffing REF($457:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp719));
// unreffing REF($456:panda.core.String)
panda$core$String* $tmp723 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp723));
// unreffing label
*(&local13) = ((panda$core$String*) NULL);
return $tmp721;
block28:;
// line 298
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s724));
panda$core$String* $tmp725 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp725));
// unreffing label
*(&local13) = ((panda$core$String*) NULL);
return &$s726;
block26:;
panda$core$Int64 $tmp727 = (panda$core$Int64) {9};
panda$core$Bit $tmp728 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp727);
bool $tmp729 = $tmp728.value;
if ($tmp729) goto block29; else goto block30;
block29:;
org$pandalanguage$pandac$Position* $tmp730 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp731 = *$tmp730;
org$pandalanguage$pandac$ASTNode** $tmp732 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp733 = *$tmp732;
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp733));
org$pandalanguage$pandac$ASTNode* $tmp734 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp734));
*(&local14) = $tmp733;
org$pandalanguage$pandac$FixedArray** $tmp735 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp736 = *$tmp735;
*(&local15) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp736));
org$pandalanguage$pandac$FixedArray* $tmp737 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp737));
*(&local15) = $tmp736;
// line 301
org$pandalanguage$pandac$ASTNode* $tmp738 = *(&local14);
$fn740 $tmp739 = ($fn740) $tmp738->$class->vtable[0];
panda$core$String* $tmp741 = $tmp739($tmp738);
panda$core$String* $tmp742 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp741, &$s743);
org$pandalanguage$pandac$FixedArray* $tmp744 = *(&local15);
ITable* $tmp745 = ((panda$collections$CollectionView*) $tmp744)->$class->itable;
while ($tmp745->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp745 = $tmp745->next;
}
$fn747 $tmp746 = $tmp745->methods[1];
panda$core$String* $tmp748 = $tmp746(((panda$collections$CollectionView*) $tmp744));
panda$core$String* $tmp749 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp742, $tmp748);
panda$core$String* $tmp750 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp749, &$s751);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp750));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp750));
// unreffing REF($515:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp749));
// unreffing REF($514:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp748));
// unreffing REF($513:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp742));
// unreffing REF($509:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp741));
// unreffing REF($508:panda.core.String)
org$pandalanguage$pandac$FixedArray* $tmp752 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp752));
// unreffing args
*(&local15) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp753 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp753));
// unreffing target
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp750;
block30:;
panda$core$Int64 $tmp754 = (panda$core$Int64) {10};
panda$core$Bit $tmp755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp754);
bool $tmp756 = $tmp755.value;
if ($tmp756) goto block31; else goto block32;
block31:;
org$pandalanguage$pandac$Position* $tmp757 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp758 = *$tmp757;
org$pandalanguage$pandac$ASTNode** $tmp759 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp760 = *$tmp759;
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp760));
org$pandalanguage$pandac$ASTNode* $tmp761 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp761));
*(&local16) = $tmp760;
panda$core$String** $tmp762 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp763 = *$tmp762;
*(&local17) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp763));
panda$core$String* $tmp764 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp764));
*(&local17) = $tmp763;
org$pandalanguage$pandac$FixedArray** $tmp765 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp766 = *$tmp765;
*(&local18) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp766));
org$pandalanguage$pandac$FixedArray* $tmp767 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp767));
*(&local18) = $tmp766;
// line 304
panda$core$MutableString* $tmp768 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp768);
*(&local19) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp768));
panda$core$MutableString* $tmp769 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp769));
*(&local19) = $tmp768;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp768));
// unreffing REF($578:panda.core.MutableString)
// line 305
org$pandalanguage$pandac$ASTNode* $tmp770 = *(&local16);
panda$core$Bit $tmp771 = panda$core$Bit$init$builtin_bit($tmp770 != NULL);
bool $tmp772 = $tmp771.value;
if ($tmp772) goto block33; else goto block34;
block33:;
// line 306
panda$core$MutableString* $tmp773 = *(&local19);
org$pandalanguage$pandac$ASTNode* $tmp774 = *(&local16);
panda$core$String* $tmp775 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp774), &$s776);
panda$core$MutableString$append$panda$core$String($tmp773, $tmp775);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp775));
// unreffing REF($600:panda.core.String)
goto block34;
block34:;
// line 308
panda$core$MutableString* $tmp777 = *(&local19);
panda$core$String* $tmp778 = *(&local17);
panda$core$String* $tmp779 = panda$core$String$convert$R$panda$core$String($tmp778);
panda$core$String* $tmp780 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp779, &$s781);
org$pandalanguage$pandac$FixedArray* $tmp782 = *(&local18);
ITable* $tmp783 = ((panda$collections$CollectionView*) $tmp782)->$class->itable;
while ($tmp783->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp783 = $tmp783->next;
}
$fn785 $tmp784 = $tmp783->methods[1];
panda$core$String* $tmp786 = $tmp784(((panda$collections$CollectionView*) $tmp782));
panda$core$String* $tmp787 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp780, $tmp786);
panda$core$String* $tmp788 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp787, &$s789);
panda$core$MutableString$append$panda$core$String($tmp777, $tmp788);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp788));
// unreffing REF($616:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp787));
// unreffing REF($615:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp786));
// unreffing REF($614:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp780));
// unreffing REF($610:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp779));
// unreffing REF($609:panda.core.String)
// line 309
panda$core$MutableString* $tmp790 = *(&local19);
panda$core$String* $tmp791 = panda$core$MutableString$finish$R$panda$core$String($tmp790);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp791));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp791));
// unreffing REF($635:panda.core.String)
panda$core$MutableString* $tmp792 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp792));
// unreffing result
*(&local19) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp793 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp793));
// unreffing fields
*(&local18) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp794 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp794));
// unreffing name
*(&local17) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp795 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp795));
// unreffing dc
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp791;
block32:;
panda$core$Int64 $tmp796 = (panda$core$Int64) {11};
panda$core$Bit $tmp797 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp796);
bool $tmp798 = $tmp797.value;
if ($tmp798) goto block35; else goto block36;
block35:;
org$pandalanguage$pandac$Position* $tmp799 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp800 = *$tmp799;
org$pandalanguage$pandac$ASTNode** $tmp801 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp802 = *$tmp801;
*(&local20) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp802));
org$pandalanguage$pandac$ASTNode* $tmp803 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp803));
*(&local20) = $tmp802;
org$pandalanguage$pandac$ChoiceCase** $tmp804 = (org$pandalanguage$pandac$ChoiceCase**) (param0->$data + 24);
org$pandalanguage$pandac$ChoiceCase* $tmp805 = *$tmp804;
*(&local21) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp805));
org$pandalanguage$pandac$ChoiceCase* $tmp806 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp806));
*(&local21) = $tmp805;
panda$core$Int64* $tmp807 = (panda$core$Int64*) (param0->$data + 32);
panda$core$Int64 $tmp808 = *$tmp807;
*(&local22) = $tmp808;
// line 312
org$pandalanguage$pandac$ASTNode* $tmp809 = *(&local20);
$fn811 $tmp810 = ($fn811) $tmp809->$class->vtable[0];
panda$core$String* $tmp812 = $tmp810($tmp809);
panda$core$String* $tmp813 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp812, &$s814);
org$pandalanguage$pandac$ChoiceCase* $tmp815 = *(&local21);
panda$core$String* $tmp816 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp813, ((panda$core$Object*) $tmp815));
panda$core$String* $tmp817 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp816, &$s818);
panda$core$Int64 $tmp819 = *(&local22);
panda$core$Int64$wrapper* $tmp820;
$tmp820 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp820->value = $tmp819;
panda$core$String* $tmp821 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp817, ((panda$core$Object*) $tmp820));
panda$core$String* $tmp822 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp821, &$s823);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp822));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp822));
// unreffing REF($701:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp821));
// unreffing REF($700:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp820));
// unreffing REF($699:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp817));
// unreffing REF($697:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp816));
// unreffing REF($696:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp813));
// unreffing REF($693:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp812));
// unreffing REF($692:panda.core.String)
org$pandalanguage$pandac$ChoiceCase* $tmp824 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp824));
// unreffing ce
*(&local21) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp825 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp825));
// unreffing base
*(&local20) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp822;
block36:;
panda$core$Int64 $tmp826 = (panda$core$Int64) {12};
panda$core$Bit $tmp827 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp826);
bool $tmp828 = $tmp827.value;
if ($tmp828) goto block37; else goto block38;
block37:;
org$pandalanguage$pandac$Position* $tmp829 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp830 = *$tmp829;
org$pandalanguage$pandac$ASTNode** $tmp831 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp832 = *$tmp831;
*(&local23) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp832));
org$pandalanguage$pandac$ASTNode* $tmp833 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp833));
*(&local23) = $tmp832;
org$pandalanguage$pandac$FixedArray** $tmp834 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp835 = *$tmp834;
*(&local24) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp835));
org$pandalanguage$pandac$FixedArray* $tmp836 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp836));
*(&local24) = $tmp835;
org$pandalanguage$pandac$ClassDecl$Kind* $tmp837 = (org$pandalanguage$pandac$ClassDecl$Kind*) (param0->$data + 32);
org$pandalanguage$pandac$ClassDecl$Kind $tmp838 = *$tmp837;
*(&local25) = $tmp838;
panda$core$String** $tmp839 = (panda$core$String**) (param0->$data + 40);
panda$core$String* $tmp840 = *$tmp839;
*(&local26) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp840));
panda$core$String* $tmp841 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp841));
*(&local26) = $tmp840;
org$pandalanguage$pandac$FixedArray** $tmp842 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 48);
org$pandalanguage$pandac$FixedArray* $tmp843 = *$tmp842;
*(&local27) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp843));
org$pandalanguage$pandac$FixedArray* $tmp844 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp844));
*(&local27) = $tmp843;
org$pandalanguage$pandac$FixedArray** $tmp845 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 56);
org$pandalanguage$pandac$FixedArray* $tmp846 = *$tmp845;
*(&local28) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp846));
org$pandalanguage$pandac$FixedArray* $tmp847 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp847));
*(&local28) = $tmp846;
org$pandalanguage$pandac$FixedArray** $tmp848 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 64);
org$pandalanguage$pandac$FixedArray* $tmp849 = *$tmp848;
*(&local29) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp849));
org$pandalanguage$pandac$FixedArray* $tmp850 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp850));
*(&local29) = $tmp849;
// line 315
panda$core$MutableString* $tmp851 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp851);
*(&local30) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp851));
panda$core$MutableString* $tmp852 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp852));
*(&local30) = $tmp851;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp851));
// unreffing REF($800:panda.core.MutableString)
// line 316
org$pandalanguage$pandac$ASTNode* $tmp853 = *(&local23);
panda$core$Bit $tmp854 = panda$core$Bit$init$builtin_bit($tmp853 != NULL);
bool $tmp855 = $tmp854.value;
if ($tmp855) goto block39; else goto block40;
block39:;
// line 317
panda$core$MutableString* $tmp856 = *(&local30);
org$pandalanguage$pandac$ASTNode* $tmp857 = *(&local23);
panda$core$String* $tmp858 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp857), &$s859);
panda$core$MutableString$append$panda$core$String($tmp856, $tmp858);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp858));
// unreffing REF($822:panda.core.String)
goto block40;
block40:;
// line 319
org$pandalanguage$pandac$FixedArray* $tmp860 = *(&local24);
ITable* $tmp861 = ((panda$collections$Iterable*) $tmp860)->$class->itable;
while ($tmp861->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp861 = $tmp861->next;
}
$fn863 $tmp862 = $tmp861->methods[0];
panda$collections$Iterator* $tmp864 = $tmp862(((panda$collections$Iterable*) $tmp860));
goto block41;
block41:;
ITable* $tmp865 = $tmp864->$class->itable;
while ($tmp865->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp865 = $tmp865->next;
}
$fn867 $tmp866 = $tmp865->methods[0];
panda$core$Bit $tmp868 = $tmp866($tmp864);
bool $tmp869 = $tmp868.value;
if ($tmp869) goto block43; else goto block42;
block42:;
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp870 = $tmp864->$class->itable;
while ($tmp870->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp870 = $tmp870->next;
}
$fn872 $tmp871 = $tmp870->methods[1];
panda$core$Object* $tmp873 = $tmp871($tmp864);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp873)));
org$pandalanguage$pandac$ASTNode* $tmp874 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp874));
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) $tmp873);
// line 320
panda$core$MutableString* $tmp875 = *(&local30);
org$pandalanguage$pandac$ASTNode* $tmp876 = *(&local31);
panda$core$String* $tmp877 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp876), &$s878);
panda$core$MutableString$append$panda$core$String($tmp875, $tmp877);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp877));
// unreffing REF($856:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp873);
// unreffing REF($844:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp879 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp879));
// unreffing a
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block41;
block43:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp864));
// unreffing REF($833:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 322
org$pandalanguage$pandac$ClassDecl$Kind $tmp880 = *(&local25);
panda$core$Int64 $tmp881 = $tmp880.$rawValue;
panda$core$Int64 $tmp882 = (panda$core$Int64) {0};
panda$core$Bit $tmp883 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp881, $tmp882);
bool $tmp884 = $tmp883.value;
if ($tmp884) goto block45; else goto block46;
block45:;
// line 323
panda$core$MutableString* $tmp885 = *(&local30);
panda$core$MutableString$append$panda$core$String($tmp885, &$s886);
goto block44;
block46:;
panda$core$Int64 $tmp887 = (panda$core$Int64) {1};
panda$core$Bit $tmp888 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp881, $tmp887);
bool $tmp889 = $tmp888.value;
if ($tmp889) goto block47; else goto block48;
block47:;
// line 324
panda$core$MutableString* $tmp890 = *(&local30);
panda$core$MutableString$append$panda$core$String($tmp890, &$s891);
goto block44;
block48:;
panda$core$Int64 $tmp892 = (panda$core$Int64) {2};
panda$core$Bit $tmp893 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp881, $tmp892);
bool $tmp894 = $tmp893.value;
if ($tmp894) goto block49; else goto block44;
block49:;
// line 325
panda$core$MutableString* $tmp895 = *(&local30);
panda$core$MutableString$append$panda$core$String($tmp895, &$s896);
goto block44;
block44:;
// line 327
panda$core$MutableString* $tmp897 = *(&local30);
panda$core$String* $tmp898 = *(&local26);
panda$core$MutableString$append$panda$core$String($tmp897, $tmp898);
// line 328
org$pandalanguage$pandac$FixedArray* $tmp899 = *(&local27);
panda$core$Bit $tmp900 = panda$core$Bit$init$builtin_bit($tmp899 != NULL);
bool $tmp901 = $tmp900.value;
if ($tmp901) goto block50; else goto block51;
block50:;
// line 329
panda$core$MutableString* $tmp902 = *(&local30);
org$pandalanguage$pandac$FixedArray* $tmp903 = *(&local27);
ITable* $tmp904 = ((panda$collections$CollectionView*) $tmp903)->$class->itable;
while ($tmp904->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp904 = $tmp904->next;
}
$fn906 $tmp905 = $tmp904->methods[1];
panda$core$String* $tmp907 = $tmp905(((panda$collections$CollectionView*) $tmp903));
panda$core$String* $tmp908 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s909, $tmp907);
panda$core$String* $tmp910 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp908, &$s911);
panda$core$MutableString$append$panda$core$String($tmp902, $tmp910);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp910));
// unreffing REF($917:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp908));
// unreffing REF($916:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp907));
// unreffing REF($915:panda.core.String)
goto block51;
block51:;
// line 331
org$pandalanguage$pandac$FixedArray* $tmp912 = *(&local28);
panda$core$Bit $tmp913 = panda$core$Bit$init$builtin_bit($tmp912 != NULL);
bool $tmp914 = $tmp913.value;
if ($tmp914) goto block52; else goto block53;
block52:;
// line 332
panda$core$MutableString* $tmp915 = *(&local30);
org$pandalanguage$pandac$FixedArray* $tmp916 = *(&local28);
ITable* $tmp917 = ((panda$collections$CollectionView*) $tmp916)->$class->itable;
while ($tmp917->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp917 = $tmp917->next;
}
$fn919 $tmp918 = $tmp917->methods[1];
panda$core$String* $tmp920 = $tmp918(((panda$collections$CollectionView*) $tmp916));
panda$core$String* $tmp921 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s922, $tmp920);
panda$core$String* $tmp923 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp921, &$s924);
panda$core$MutableString$append$panda$core$String($tmp915, $tmp923);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp923));
// unreffing REF($942:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp921));
// unreffing REF($941:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp920));
// unreffing REF($940:panda.core.String)
goto block53;
block53:;
// line 334
panda$core$MutableString* $tmp925 = *(&local30);
panda$core$MutableString$append$panda$core$String($tmp925, &$s926);
// line 335
org$pandalanguage$pandac$FixedArray* $tmp927 = *(&local29);
ITable* $tmp928 = ((panda$collections$Iterable*) $tmp927)->$class->itable;
while ($tmp928->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp928 = $tmp928->next;
}
$fn930 $tmp929 = $tmp928->methods[0];
panda$collections$Iterator* $tmp931 = $tmp929(((panda$collections$Iterable*) $tmp927));
goto block54;
block54:;
ITable* $tmp932 = $tmp931->$class->itable;
while ($tmp932->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp932 = $tmp932->next;
}
$fn934 $tmp933 = $tmp932->methods[0];
panda$core$Bit $tmp935 = $tmp933($tmp931);
bool $tmp936 = $tmp935.value;
if ($tmp936) goto block56; else goto block55;
block55:;
*(&local32) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp937 = $tmp931->$class->itable;
while ($tmp937->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp937 = $tmp937->next;
}
$fn939 $tmp938 = $tmp937->methods[1];
panda$core$Object* $tmp940 = $tmp938($tmp931);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp940)));
org$pandalanguage$pandac$ASTNode* $tmp941 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp941));
*(&local32) = ((org$pandalanguage$pandac$ASTNode*) $tmp940);
// line 336
panda$core$MutableString* $tmp942 = *(&local30);
org$pandalanguage$pandac$ASTNode* $tmp943 = *(&local32);
panda$core$String* $tmp944 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp943), &$s945);
panda$core$MutableString$append$panda$core$String($tmp942, $tmp944);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp944));
// unreffing REF($985:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp940);
// unreffing REF($973:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp946 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp946));
// unreffing m
*(&local32) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block54;
block56:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp931));
// unreffing REF($962:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 338
panda$core$MutableString* $tmp947 = *(&local30);
panda$core$MutableString$append$panda$core$String($tmp947, &$s948);
// line 339
panda$core$MutableString* $tmp949 = *(&local30);
panda$core$String* $tmp950 = panda$core$MutableString$finish$R$panda$core$String($tmp949);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp950));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp950));
// unreffing REF($1007:panda.core.String)
panda$core$MutableString* $tmp951 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp951));
// unreffing result
*(&local30) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp952 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp952));
// unreffing members
*(&local29) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp953 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp953));
// unreffing supertypes
*(&local28) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp954 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp954));
// unreffing generics
*(&local27) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp955 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp955));
// unreffing name
*(&local26) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp956 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp956));
// unreffing annotations
*(&local24) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp957 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp957));
// unreffing dc
*(&local23) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp950;
block38:;
panda$core$Int64 $tmp958 = (panda$core$Int64) {13};
panda$core$Bit $tmp959 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp958);
bool $tmp960 = $tmp959.value;
if ($tmp960) goto block57; else goto block58;
block57:;
org$pandalanguage$pandac$Position* $tmp961 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp962 = *$tmp961;
panda$core$String** $tmp963 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp964 = *$tmp963;
*(&local33) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp964));
panda$core$String* $tmp965 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp965));
*(&local33) = $tmp964;
// line 342
panda$core$String* $tmp966 = *(&local33);
panda$core$Bit $tmp967 = panda$core$Bit$init$builtin_bit($tmp966 != NULL);
bool $tmp968 = $tmp967.value;
if ($tmp968) goto block59; else goto block60;
block59:;
// line 343
panda$core$String* $tmp969 = *(&local33);
panda$core$String* $tmp970 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s971, $tmp969);
panda$core$String* $tmp972 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp970, &$s973);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp972));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp972));
// unreffing REF($1074:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp970));
// unreffing REF($1073:panda.core.String)
panda$core$String* $tmp974 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp974));
// unreffing label
*(&local33) = ((panda$core$String*) NULL);
return $tmp972;
block60:;
// line 345
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s975));
panda$core$String* $tmp976 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp976));
// unreffing label
*(&local33) = ((panda$core$String*) NULL);
return &$s977;
block58:;
panda$core$Int64 $tmp978 = (panda$core$Int64) {14};
panda$core$Bit $tmp979 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp978);
bool $tmp980 = $tmp979.value;
if ($tmp980) goto block61; else goto block62;
block61:;
org$pandalanguage$pandac$Position* $tmp981 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp982 = *$tmp981;
org$pandalanguage$pandac$ASTNode** $tmp983 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp984 = *$tmp983;
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp984));
org$pandalanguage$pandac$ASTNode* $tmp985 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp985));
*(&local34) = $tmp984;
org$pandalanguage$pandac$ASTNode** $tmp986 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp987 = *$tmp986;
*(&local35) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp987));
org$pandalanguage$pandac$ASTNode* $tmp988 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp988));
*(&local35) = $tmp987;
// line 348
org$pandalanguage$pandac$ASTNode* $tmp989 = *(&local35);
panda$core$Bit $tmp990 = panda$core$Bit$init$builtin_bit($tmp989 != NULL);
bool $tmp991 = $tmp990.value;
if ($tmp991) goto block63; else goto block64;
block63:;
// line 349
org$pandalanguage$pandac$ASTNode* $tmp992 = *(&local34);
$fn994 $tmp993 = ($fn994) $tmp992->$class->vtable[0];
panda$core$String* $tmp995 = $tmp993($tmp992);
panda$core$String* $tmp996 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp995, &$s997);
org$pandalanguage$pandac$ASTNode* $tmp998 = *(&local35);
panda$core$String* $tmp999 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp996, ((panda$core$Object*) $tmp998));
panda$core$String* $tmp1000 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp999, &$s1001);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1000));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1000));
// unreffing REF($1136:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp999));
// unreffing REF($1135:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp996));
// unreffing REF($1132:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp995));
// unreffing REF($1131:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1002 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1002));
// unreffing value
*(&local35) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1003 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1003));
// unreffing target
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1000;
block64:;
// line 351
org$pandalanguage$pandac$ASTNode* $tmp1004 = *(&local34);
$fn1006 $tmp1005 = ($fn1006) $tmp1004->$class->vtable[0];
panda$core$String* $tmp1007 = $tmp1005($tmp1004);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1007));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1007));
// unreffing REF($1165:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1008 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1008));
// unreffing value
*(&local35) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1009 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1009));
// unreffing target
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1007;
block62:;
panda$core$Int64 $tmp1010 = (panda$core$Int64) {15};
panda$core$Bit $tmp1011 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1010);
bool $tmp1012 = $tmp1011.value;
if ($tmp1012) goto block65; else goto block66;
block65:;
org$pandalanguage$pandac$Position* $tmp1013 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1014 = *$tmp1013;
panda$core$String** $tmp1015 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1016 = *$tmp1015;
*(&local36) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1016));
panda$core$String* $tmp1017 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1017));
*(&local36) = $tmp1016;
org$pandalanguage$pandac$FixedArray** $tmp1018 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1019 = *$tmp1018;
*(&local37) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1019));
org$pandalanguage$pandac$FixedArray* $tmp1020 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1020));
*(&local37) = $tmp1019;
org$pandalanguage$pandac$ASTNode** $tmp1021 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1022 = *$tmp1021;
*(&local38) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1022));
org$pandalanguage$pandac$ASTNode* $tmp1023 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1023));
*(&local38) = $tmp1022;
// line 354
panda$core$MutableString* $tmp1024 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1024);
*(&local39) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1024));
panda$core$MutableString* $tmp1025 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1025));
*(&local39) = $tmp1024;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1024));
// unreffing REF($1216:panda.core.MutableString)
// line 355
panda$core$String* $tmp1026 = *(&local36);
panda$core$Bit $tmp1027 = panda$core$Bit$init$builtin_bit($tmp1026 != NULL);
bool $tmp1028 = $tmp1027.value;
if ($tmp1028) goto block67; else goto block68;
block67:;
// line 356
panda$core$MutableString* $tmp1029 = *(&local39);
panda$core$String* $tmp1030 = *(&local36);
panda$core$String* $tmp1031 = panda$core$String$convert$R$panda$core$String($tmp1030);
panda$core$String* $tmp1032 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1031, &$s1033);
panda$core$MutableString$append$panda$core$String($tmp1029, $tmp1032);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1032));
// unreffing REF($1239:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1031));
// unreffing REF($1238:panda.core.String)
goto block68;
block68:;
// line 358
panda$core$MutableString* $tmp1034 = *(&local39);
panda$core$MutableString$append$panda$core$String($tmp1034, &$s1035);
// line 359
org$pandalanguage$pandac$FixedArray* $tmp1036 = *(&local37);
ITable* $tmp1037 = ((panda$collections$Iterable*) $tmp1036)->$class->itable;
while ($tmp1037->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1037 = $tmp1037->next;
}
$fn1039 $tmp1038 = $tmp1037->methods[0];
panda$collections$Iterator* $tmp1040 = $tmp1038(((panda$collections$Iterable*) $tmp1036));
goto block69;
block69:;
ITable* $tmp1041 = $tmp1040->$class->itable;
while ($tmp1041->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1041 = $tmp1041->next;
}
$fn1043 $tmp1042 = $tmp1041->methods[0];
panda$core$Bit $tmp1044 = $tmp1042($tmp1040);
bool $tmp1045 = $tmp1044.value;
if ($tmp1045) goto block71; else goto block70;
block70:;
*(&local40) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1046 = $tmp1040->$class->itable;
while ($tmp1046->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1046 = $tmp1046->next;
}
$fn1048 $tmp1047 = $tmp1046->methods[1];
panda$core$Object* $tmp1049 = $tmp1047($tmp1040);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1049)));
org$pandalanguage$pandac$ASTNode* $tmp1050 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1050));
*(&local40) = ((org$pandalanguage$pandac$ASTNode*) $tmp1049);
// line 360
panda$core$MutableString* $tmp1051 = *(&local39);
org$pandalanguage$pandac$ASTNode* $tmp1052 = *(&local40);
panda$core$String* $tmp1053 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1052), &$s1054);
panda$core$MutableString$append$panda$core$String($tmp1051, $tmp1053);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1053));
// unreffing REF($1279:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1049);
// unreffing REF($1267:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1055 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1055));
// unreffing s
*(&local40) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block69;
block71:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1040));
// unreffing REF($1256:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 362
panda$core$MutableString* $tmp1056 = *(&local39);
org$pandalanguage$pandac$ASTNode* $tmp1057 = *(&local38);
panda$core$String* $tmp1058 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1059, ((panda$core$Object*) $tmp1057));
panda$core$String* $tmp1060 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1058, &$s1061);
panda$core$MutableString$append$panda$core$String($tmp1056, $tmp1060);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1060));
// unreffing REF($1301:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1058));
// unreffing REF($1300:panda.core.String)
// line 363
panda$core$MutableString* $tmp1062 = *(&local39);
panda$core$String* $tmp1063 = panda$core$MutableString$finish$R$panda$core$String($tmp1062);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1063));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1063));
// unreffing REF($1311:panda.core.String)
panda$core$MutableString* $tmp1064 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1064));
// unreffing result
*(&local39) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1065 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1065));
// unreffing test
*(&local38) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1066 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1066));
// unreffing statements
*(&local37) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp1067 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1067));
// unreffing label
*(&local36) = ((panda$core$String*) NULL);
return $tmp1063;
block66:;
panda$core$Int64 $tmp1068 = (panda$core$Int64) {16};
panda$core$Bit $tmp1069 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1068);
bool $tmp1070 = $tmp1069.value;
if ($tmp1070) goto block72; else goto block73;
block72:;
org$pandalanguage$pandac$Position* $tmp1071 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1072 = *$tmp1071;
org$pandalanguage$pandac$ASTNode** $tmp1073 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1074 = *$tmp1073;
*(&local41) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1074));
org$pandalanguage$pandac$ASTNode* $tmp1075 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1075));
*(&local41) = $tmp1074;
panda$core$String** $tmp1076 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp1077 = *$tmp1076;
*(&local42) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1077));
panda$core$String* $tmp1078 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1078));
*(&local42) = $tmp1077;
// line 366
org$pandalanguage$pandac$ASTNode* $tmp1079 = *(&local41);
$fn1081 $tmp1080 = ($fn1081) $tmp1079->$class->vtable[0];
panda$core$String* $tmp1082 = $tmp1080($tmp1079);
panda$core$String* $tmp1083 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1082, &$s1084);
panda$core$String* $tmp1085 = *(&local42);
panda$core$String* $tmp1086 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1083, $tmp1085);
panda$core$String* $tmp1087 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1086, &$s1088);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1087));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1087));
// unreffing REF($1369:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1086));
// unreffing REF($1368:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1083));
// unreffing REF($1366:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1082));
// unreffing REF($1365:panda.core.String)
panda$core$String* $tmp1089 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1089));
// unreffing field
*(&local42) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1090 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1090));
// unreffing base
*(&local41) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1087;
block73:;
panda$core$Int64 $tmp1091 = (panda$core$Int64) {17};
panda$core$Bit $tmp1092 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1091);
bool $tmp1093 = $tmp1092.value;
if ($tmp1093) goto block74; else goto block75;
block74:;
org$pandalanguage$pandac$Position* $tmp1094 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1095 = *$tmp1094;
org$pandalanguage$pandac$ASTNode** $tmp1096 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1097 = *$tmp1096;
*(&local43) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1097));
org$pandalanguage$pandac$ASTNode* $tmp1098 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1098));
*(&local43) = $tmp1097;
panda$core$String** $tmp1099 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp1100 = *$tmp1099;
*(&local44) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1100));
panda$core$String* $tmp1101 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1101));
*(&local44) = $tmp1100;
org$pandalanguage$pandac$FixedArray** $tmp1102 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp1103 = *$tmp1102;
*(&local45) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1103));
org$pandalanguage$pandac$FixedArray* $tmp1104 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1104));
*(&local45) = $tmp1103;
// line 369
org$pandalanguage$pandac$ASTNode* $tmp1105 = *(&local43);
$fn1107 $tmp1106 = ($fn1107) $tmp1105->$class->vtable[0];
panda$core$String* $tmp1108 = $tmp1106($tmp1105);
panda$core$String* $tmp1109 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1108, &$s1110);
panda$core$String* $tmp1111 = *(&local44);
panda$core$String* $tmp1112 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1109, $tmp1111);
panda$core$String* $tmp1113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1112, &$s1114);
org$pandalanguage$pandac$FixedArray* $tmp1115 = *(&local45);
ITable* $tmp1116 = ((panda$collections$CollectionView*) $tmp1115)->$class->itable;
while ($tmp1116->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1116 = $tmp1116->next;
}
$fn1118 $tmp1117 = $tmp1116->methods[2];
panda$core$String* $tmp1119 = $tmp1117(((panda$collections$CollectionView*) $tmp1115), &$s1120);
panda$core$String* $tmp1121 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1113, $tmp1119);
panda$core$String* $tmp1122 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1121, &$s1123);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1122));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1122));
// unreffing REF($1441:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1121));
// unreffing REF($1440:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1119));
// unreffing REF($1439:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1113));
// unreffing REF($1435:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1112));
// unreffing REF($1434:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1109));
// unreffing REF($1432:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1108));
// unreffing REF($1431:panda.core.String)
org$pandalanguage$pandac$FixedArray* $tmp1124 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1124));
// unreffing types
*(&local45) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp1125 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1125));
// unreffing field
*(&local44) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1126 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1126));
// unreffing base
*(&local43) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1122;
block75:;
panda$core$Int64 $tmp1127 = (panda$core$Int64) {18};
panda$core$Bit $tmp1128 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1127);
bool $tmp1129 = $tmp1128.value;
if ($tmp1129) goto block76; else goto block77;
block76:;
org$pandalanguage$pandac$Position* $tmp1130 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1131 = *$tmp1130;
org$pandalanguage$pandac$ASTNode** $tmp1132 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1133 = *$tmp1132;
*(&local46) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1133));
org$pandalanguage$pandac$ASTNode* $tmp1134 = *(&local46);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1134));
*(&local46) = $tmp1133;
org$pandalanguage$pandac$FixedArray** $tmp1135 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1136 = *$tmp1135;
*(&local47) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1136));
org$pandalanguage$pandac$FixedArray* $tmp1137 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1137));
*(&local47) = $tmp1136;
org$pandalanguage$pandac$ASTNode** $tmp1138 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1139 = *$tmp1138;
*(&local48) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1139));
org$pandalanguage$pandac$ASTNode* $tmp1140 = *(&local48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1140));
*(&local48) = $tmp1139;
// line 372
panda$core$MutableString* $tmp1141 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1141);
*(&local49) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1141));
panda$core$MutableString* $tmp1142 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1142));
*(&local49) = $tmp1141;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1141));
// unreffing REF($1515:panda.core.MutableString)
// line 373
org$pandalanguage$pandac$ASTNode* $tmp1143 = *(&local46);
panda$core$Bit $tmp1144 = panda$core$Bit$init$builtin_bit($tmp1143 != NULL);
bool $tmp1145 = $tmp1144.value;
if ($tmp1145) goto block78; else goto block79;
block78:;
// line 374
panda$core$MutableString* $tmp1146 = *(&local49);
org$pandalanguage$pandac$ASTNode* $tmp1147 = *(&local46);
panda$core$String* $tmp1148 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1147), &$s1149);
panda$core$MutableString$append$panda$core$String($tmp1146, $tmp1148);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1148));
// unreffing REF($1537:panda.core.String)
goto block79;
block79:;
// line 376
org$pandalanguage$pandac$FixedArray* $tmp1150 = *(&local47);
ITable* $tmp1151 = ((panda$collections$Iterable*) $tmp1150)->$class->itable;
while ($tmp1151->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1151 = $tmp1151->next;
}
$fn1153 $tmp1152 = $tmp1151->methods[0];
panda$collections$Iterator* $tmp1154 = $tmp1152(((panda$collections$Iterable*) $tmp1150));
goto block80;
block80:;
ITable* $tmp1155 = $tmp1154->$class->itable;
while ($tmp1155->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1155 = $tmp1155->next;
}
$fn1157 $tmp1156 = $tmp1155->methods[0];
panda$core$Bit $tmp1158 = $tmp1156($tmp1154);
bool $tmp1159 = $tmp1158.value;
if ($tmp1159) goto block82; else goto block81;
block81:;
*(&local50) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1160 = $tmp1154->$class->itable;
while ($tmp1160->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1160 = $tmp1160->next;
}
$fn1162 $tmp1161 = $tmp1160->methods[1];
panda$core$Object* $tmp1163 = $tmp1161($tmp1154);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1163)));
org$pandalanguage$pandac$ASTNode* $tmp1164 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1164));
*(&local50) = ((org$pandalanguage$pandac$ASTNode*) $tmp1163);
// line 377
panda$core$MutableString* $tmp1165 = *(&local49);
org$pandalanguage$pandac$ASTNode* $tmp1166 = *(&local50);
panda$core$String* $tmp1167 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1166), &$s1168);
panda$core$MutableString$append$panda$core$String($tmp1165, $tmp1167);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1167));
// unreffing REF($1571:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1163);
// unreffing REF($1559:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1169 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1169));
// unreffing a
*(&local50) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block80;
block82:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1154));
// unreffing REF($1548:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 379
panda$core$MutableString* $tmp1170 = *(&local49);
org$pandalanguage$pandac$ASTNode* $tmp1171 = *(&local48);
panda$core$MutableString$append$panda$core$Object($tmp1170, ((panda$core$Object*) $tmp1171));
// line 380
panda$core$MutableString* $tmp1172 = *(&local49);
panda$core$String* $tmp1173 = panda$core$MutableString$finish$R$panda$core$String($tmp1172);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1173));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1173));
// unreffing REF($1595:panda.core.String)
panda$core$MutableString* $tmp1174 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1174));
// unreffing result
*(&local49) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1175 = *(&local48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1175));
// unreffing decl
*(&local48) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1176 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1176));
// unreffing annotations
*(&local47) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1177 = *(&local46);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1177));
// unreffing dc
*(&local46) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1173;
block77:;
panda$core$Int64 $tmp1178 = (panda$core$Int64) {19};
panda$core$Bit $tmp1179 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1178);
bool $tmp1180 = $tmp1179.value;
if ($tmp1180) goto block83; else goto block84;
block83:;
org$pandalanguage$pandac$FixedArray** $tmp1181 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 0);
org$pandalanguage$pandac$FixedArray* $tmp1182 = *$tmp1181;
*(&local51) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1182));
org$pandalanguage$pandac$FixedArray* $tmp1183 = *(&local51);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1183));
*(&local51) = $tmp1182;
// line 383
panda$core$MutableString* $tmp1184 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1184);
*(&local52) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1184));
panda$core$MutableString* $tmp1185 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1185));
*(&local52) = $tmp1184;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1184));
// unreffing REF($1636:panda.core.MutableString)
// line 384
org$pandalanguage$pandac$FixedArray* $tmp1186 = *(&local51);
ITable* $tmp1187 = ((panda$collections$Iterable*) $tmp1186)->$class->itable;
while ($tmp1187->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1187 = $tmp1187->next;
}
$fn1189 $tmp1188 = $tmp1187->methods[0];
panda$collections$Iterator* $tmp1190 = $tmp1188(((panda$collections$Iterable*) $tmp1186));
goto block85;
block85:;
ITable* $tmp1191 = $tmp1190->$class->itable;
while ($tmp1191->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1191 = $tmp1191->next;
}
$fn1193 $tmp1192 = $tmp1191->methods[0];
panda$core$Bit $tmp1194 = $tmp1192($tmp1190);
bool $tmp1195 = $tmp1194.value;
if ($tmp1195) goto block87; else goto block86;
block86:;
*(&local53) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1196 = $tmp1190->$class->itable;
while ($tmp1196->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1196 = $tmp1196->next;
}
$fn1198 $tmp1197 = $tmp1196->methods[1];
panda$core$Object* $tmp1199 = $tmp1197($tmp1190);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1199)));
org$pandalanguage$pandac$ASTNode* $tmp1200 = *(&local53);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1200));
*(&local53) = ((org$pandalanguage$pandac$ASTNode*) $tmp1199);
// line 385
panda$core$MutableString* $tmp1201 = *(&local52);
org$pandalanguage$pandac$ASTNode* $tmp1202 = *(&local53);
panda$core$String* $tmp1203 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1202), &$s1204);
panda$core$MutableString$append$panda$core$String($tmp1201, $tmp1203);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1203));
// unreffing REF($1676:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1199);
// unreffing REF($1664:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1205 = *(&local53);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1205));
// unreffing e
*(&local53) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block85;
block87:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1190));
// unreffing REF($1653:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 387
panda$core$MutableString* $tmp1206 = *(&local52);
panda$core$String* $tmp1207 = panda$core$MutableString$finish$R$panda$core$String($tmp1206);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1207));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1207));
// unreffing REF($1695:panda.core.String)
panda$core$MutableString* $tmp1208 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1208));
// unreffing result
*(&local52) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1209 = *(&local51);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1209));
// unreffing entries
*(&local51) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp1207;
block84:;
panda$core$Int64 $tmp1210 = (panda$core$Int64) {20};
panda$core$Bit $tmp1211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1210);
bool $tmp1212 = $tmp1211.value;
if ($tmp1212) goto block88; else goto block89;
block88:;
org$pandalanguage$pandac$Position* $tmp1213 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1214 = *$tmp1213;
panda$core$String** $tmp1215 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1216 = *$tmp1215;
*(&local54) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1216));
panda$core$String* $tmp1217 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1217));
*(&local54) = $tmp1216;
org$pandalanguage$pandac$ASTNode** $tmp1218 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1219 = *$tmp1218;
*(&local55) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1219));
org$pandalanguage$pandac$ASTNode* $tmp1220 = *(&local55);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1220));
*(&local55) = $tmp1219;
org$pandalanguage$pandac$ASTNode** $tmp1221 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1222 = *$tmp1221;
*(&local56) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1222));
org$pandalanguage$pandac$ASTNode* $tmp1223 = *(&local56);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1223));
*(&local56) = $tmp1222;
org$pandalanguage$pandac$FixedArray** $tmp1224 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 40);
org$pandalanguage$pandac$FixedArray* $tmp1225 = *$tmp1224;
*(&local57) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1225));
org$pandalanguage$pandac$FixedArray* $tmp1226 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1226));
*(&local57) = $tmp1225;
// line 390
panda$core$MutableString* $tmp1227 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1227);
*(&local58) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1227));
panda$core$MutableString* $tmp1228 = *(&local58);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1228));
*(&local58) = $tmp1227;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1227));
// unreffing REF($1755:panda.core.MutableString)
// line 391
panda$core$String* $tmp1229 = *(&local54);
panda$core$Bit $tmp1230 = panda$core$Bit$init$builtin_bit($tmp1229 != NULL);
bool $tmp1231 = $tmp1230.value;
if ($tmp1231) goto block90; else goto block91;
block90:;
// line 392
panda$core$MutableString* $tmp1232 = *(&local58);
panda$core$String* $tmp1233 = *(&local54);
panda$core$String* $tmp1234 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1233, &$s1235);
panda$core$MutableString$append$panda$core$String($tmp1232, $tmp1234);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1234));
// unreffing REF($1777:panda.core.String)
goto block91;
block91:;
// line 394
panda$core$MutableString* $tmp1236 = *(&local58);
org$pandalanguage$pandac$ASTNode* $tmp1237 = *(&local55);
panda$core$String* $tmp1238 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1239, ((panda$core$Object*) $tmp1237));
panda$core$String* $tmp1240 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1238, &$s1241);
org$pandalanguage$pandac$ASTNode* $tmp1242 = *(&local56);
panda$core$String* $tmp1243 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1240, ((panda$core$Object*) $tmp1242));
panda$core$String* $tmp1244 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1243, &$s1245);
panda$core$MutableString$append$panda$core$String($tmp1236, $tmp1244);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1244));
// unreffing REF($1792:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1243));
// unreffing REF($1791:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1240));
// unreffing REF($1788:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1238));
// unreffing REF($1787:panda.core.String)
// line 395
org$pandalanguage$pandac$FixedArray* $tmp1246 = *(&local57);
ITable* $tmp1247 = ((panda$collections$Iterable*) $tmp1246)->$class->itable;
while ($tmp1247->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1247 = $tmp1247->next;
}
$fn1249 $tmp1248 = $tmp1247->methods[0];
panda$collections$Iterator* $tmp1250 = $tmp1248(((panda$collections$Iterable*) $tmp1246));
goto block92;
block92:;
ITable* $tmp1251 = $tmp1250->$class->itable;
while ($tmp1251->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1251 = $tmp1251->next;
}
$fn1253 $tmp1252 = $tmp1251->methods[0];
panda$core$Bit $tmp1254 = $tmp1252($tmp1250);
bool $tmp1255 = $tmp1254.value;
if ($tmp1255) goto block94; else goto block93;
block93:;
*(&local59) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1256 = $tmp1250->$class->itable;
while ($tmp1256->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1256 = $tmp1256->next;
}
$fn1258 $tmp1257 = $tmp1256->methods[1];
panda$core$Object* $tmp1259 = $tmp1257($tmp1250);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1259)));
org$pandalanguage$pandac$ASTNode* $tmp1260 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1260));
*(&local59) = ((org$pandalanguage$pandac$ASTNode*) $tmp1259);
// line 396
panda$core$MutableString* $tmp1261 = *(&local58);
org$pandalanguage$pandac$ASTNode* $tmp1262 = *(&local59);
panda$core$String* $tmp1263 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1262), &$s1264);
panda$core$MutableString$append$panda$core$String($tmp1261, $tmp1263);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1263));
// unreffing REF($1834:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1259);
// unreffing REF($1822:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1265 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1265));
// unreffing s
*(&local59) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block92;
block94:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1250));
// unreffing REF($1811:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 398
panda$core$MutableString* $tmp1266 = *(&local58);
panda$core$MutableString$append$panda$core$String($tmp1266, &$s1267);
// line 399
panda$core$MutableString* $tmp1268 = *(&local58);
panda$core$String* $tmp1269 = panda$core$MutableString$finish$R$panda$core$String($tmp1268);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1269));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1269));
// unreffing REF($1856:panda.core.String)
panda$core$MutableString* $tmp1270 = *(&local58);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1270));
// unreffing result
*(&local58) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1271 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1271));
// unreffing statements
*(&local57) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1272 = *(&local56);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1272));
// unreffing list
*(&local56) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1273 = *(&local55);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1273));
// unreffing target
*(&local55) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1274 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1274));
// unreffing label
*(&local54) = ((panda$core$String*) NULL);
return $tmp1269;
block89:;
panda$core$Int64 $tmp1275 = (panda$core$Int64) {21};
panda$core$Bit $tmp1276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1275);
bool $tmp1277 = $tmp1276.value;
if ($tmp1277) goto block95; else goto block96;
block95:;
org$pandalanguage$pandac$Position* $tmp1278 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1279 = *$tmp1278;
panda$core$String** $tmp1280 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1281 = *$tmp1280;
*(&local60) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1281));
panda$core$String* $tmp1282 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1282));
*(&local60) = $tmp1281;
org$pandalanguage$pandac$FixedArray** $tmp1283 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1284 = *$tmp1283;
*(&local61) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1284));
org$pandalanguage$pandac$FixedArray* $tmp1285 = *(&local61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1285));
*(&local61) = $tmp1284;
// line 402
panda$core$String* $tmp1286 = *(&local60);
panda$core$String* $tmp1287 = panda$core$String$convert$R$panda$core$String($tmp1286);
panda$core$String* $tmp1288 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1287, &$s1289);
org$pandalanguage$pandac$FixedArray* $tmp1290 = *(&local61);
ITable* $tmp1291 = ((panda$collections$CollectionView*) $tmp1290)->$class->itable;
while ($tmp1291->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1291 = $tmp1291->next;
}
$fn1293 $tmp1292 = $tmp1291->methods[1];
panda$core$String* $tmp1294 = $tmp1292(((panda$collections$CollectionView*) $tmp1290));
panda$core$String* $tmp1295 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1288, $tmp1294);
panda$core$String* $tmp1296 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1295, &$s1297);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1296));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1296));
// unreffing REF($1921:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1295));
// unreffing REF($1920:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1294));
// unreffing REF($1919:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1288));
// unreffing REF($1915:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1287));
// unreffing REF($1914:panda.core.String)
org$pandalanguage$pandac$FixedArray* $tmp1298 = *(&local61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1298));
// unreffing subtypes
*(&local61) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp1299 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1299));
// unreffing name
*(&local60) = ((panda$core$String*) NULL);
return $tmp1296;
block96:;
panda$core$Int64 $tmp1300 = (panda$core$Int64) {22};
panda$core$Bit $tmp1301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1300);
bool $tmp1302 = $tmp1301.value;
if ($tmp1302) goto block97; else goto block98;
block97:;
org$pandalanguage$pandac$Position* $tmp1303 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1304 = *$tmp1303;
panda$core$String** $tmp1305 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1306 = *$tmp1305;
*(&local62) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1306));
panda$core$String* $tmp1307 = *(&local62);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1307));
*(&local62) = $tmp1306;
// line 405
panda$core$String* $tmp1308 = *(&local62);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1308));
panda$core$String* $tmp1309 = *(&local62);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1309));
// unreffing name
*(&local62) = ((panda$core$String*) NULL);
return $tmp1308;
block98:;
panda$core$Int64 $tmp1310 = (panda$core$Int64) {23};
panda$core$Bit $tmp1311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1310);
bool $tmp1312 = $tmp1311.value;
if ($tmp1312) goto block99; else goto block100;
block99:;
org$pandalanguage$pandac$Position* $tmp1313 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1314 = *$tmp1313;
panda$core$String** $tmp1315 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1316 = *$tmp1315;
*(&local63) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1316));
panda$core$String* $tmp1317 = *(&local63);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1317));
*(&local63) = $tmp1316;
org$pandalanguage$pandac$FixedArray** $tmp1318 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1319 = *$tmp1318;
*(&local64) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1319));
org$pandalanguage$pandac$FixedArray* $tmp1320 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1320));
*(&local64) = $tmp1319;
// line 408
panda$core$String* $tmp1321 = *(&local63);
panda$core$String* $tmp1322 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1323, $tmp1321);
panda$core$String* $tmp1324 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1322, &$s1325);
org$pandalanguage$pandac$FixedArray* $tmp1326 = *(&local64);
ITable* $tmp1327 = ((panda$collections$CollectionView*) $tmp1326)->$class->itable;
while ($tmp1327->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1327 = $tmp1327->next;
}
$fn1329 $tmp1328 = $tmp1327->methods[1];
panda$core$String* $tmp1330 = $tmp1328(((panda$collections$CollectionView*) $tmp1326));
panda$core$String* $tmp1331 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1324, $tmp1330);
panda$core$String* $tmp1332 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1331, &$s1333);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1332));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1332));
// unreffing REF($2008:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1331));
// unreffing REF($2007:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1330));
// unreffing REF($2006:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1324));
// unreffing REF($2002:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1322));
// unreffing REF($2001:panda.core.String)
org$pandalanguage$pandac$FixedArray* $tmp1334 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1334));
// unreffing types
*(&local64) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp1335 = *(&local63);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1335));
// unreffing name
*(&local63) = ((panda$core$String*) NULL);
return $tmp1332;
block100:;
panda$core$Int64 $tmp1336 = (panda$core$Int64) {24};
panda$core$Bit $tmp1337 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1336);
bool $tmp1338 = $tmp1337.value;
if ($tmp1338) goto block101; else goto block102;
block101:;
org$pandalanguage$pandac$Position* $tmp1339 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1340 = *$tmp1339;
org$pandalanguage$pandac$ASTNode** $tmp1341 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1342 = *$tmp1341;
*(&local65) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1342));
org$pandalanguage$pandac$ASTNode* $tmp1343 = *(&local65);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1343));
*(&local65) = $tmp1342;
org$pandalanguage$pandac$FixedArray** $tmp1344 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1345 = *$tmp1344;
*(&local66) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1345));
org$pandalanguage$pandac$FixedArray* $tmp1346 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1346));
*(&local66) = $tmp1345;
org$pandalanguage$pandac$ASTNode** $tmp1347 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1348 = *$tmp1347;
*(&local67) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1348));
org$pandalanguage$pandac$ASTNode* $tmp1349 = *(&local67);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1349));
*(&local67) = $tmp1348;
// line 411
panda$core$MutableString* $tmp1350 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$ASTNode* $tmp1351 = *(&local65);
panda$core$String* $tmp1352 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1353, ((panda$core$Object*) $tmp1351));
panda$core$String* $tmp1354 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1352, &$s1355);
panda$core$MutableString$init$panda$core$String($tmp1350, $tmp1354);
*(&local68) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1350));
panda$core$MutableString* $tmp1356 = *(&local68);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1356));
*(&local68) = $tmp1350;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1354));
// unreffing REF($2075:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1352));
// unreffing REF($2074:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1350));
// unreffing REF($2071:panda.core.MutableString)
// line 412
org$pandalanguage$pandac$FixedArray* $tmp1357 = *(&local66);
ITable* $tmp1358 = ((panda$collections$Iterable*) $tmp1357)->$class->itable;
while ($tmp1358->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1358 = $tmp1358->next;
}
$fn1360 $tmp1359 = $tmp1358->methods[0];
panda$collections$Iterator* $tmp1361 = $tmp1359(((panda$collections$Iterable*) $tmp1357));
goto block103;
block103:;
ITable* $tmp1362 = $tmp1361->$class->itable;
while ($tmp1362->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1362 = $tmp1362->next;
}
$fn1364 $tmp1363 = $tmp1362->methods[0];
panda$core$Bit $tmp1365 = $tmp1363($tmp1361);
bool $tmp1366 = $tmp1365.value;
if ($tmp1366) goto block105; else goto block104;
block104:;
*(&local69) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1367 = $tmp1361->$class->itable;
while ($tmp1367->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1367 = $tmp1367->next;
}
$fn1369 $tmp1368 = $tmp1367->methods[1];
panda$core$Object* $tmp1370 = $tmp1368($tmp1361);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1370)));
org$pandalanguage$pandac$ASTNode* $tmp1371 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1371));
*(&local69) = ((org$pandalanguage$pandac$ASTNode*) $tmp1370);
// line 413
panda$core$MutableString* $tmp1372 = *(&local68);
org$pandalanguage$pandac$ASTNode* $tmp1373 = *(&local69);
panda$core$String* $tmp1374 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1373), &$s1375);
panda$core$MutableString$append$panda$core$String($tmp1372, $tmp1374);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1374));
// unreffing REF($2121:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1370);
// unreffing REF($2109:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1376 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1376));
// unreffing s
*(&local69) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block103;
block105:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1361));
// unreffing REF($2098:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 415
panda$core$MutableString* $tmp1377 = *(&local68);
panda$core$MutableString$append$panda$core$String($tmp1377, &$s1378);
// line 416
org$pandalanguage$pandac$ASTNode* $tmp1379 = *(&local67);
panda$core$Bit $tmp1380 = panda$core$Bit$init$builtin_bit($tmp1379 != NULL);
bool $tmp1381 = $tmp1380.value;
if ($tmp1381) goto block106; else goto block107;
block106:;
// line 417
panda$core$MutableString* $tmp1382 = *(&local68);
org$pandalanguage$pandac$ASTNode* $tmp1383 = *(&local67);
panda$core$String* $tmp1384 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1385, ((panda$core$Object*) $tmp1383));
panda$core$String* $tmp1386 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1384, &$s1387);
panda$core$MutableString$append$panda$core$String($tmp1382, $tmp1386);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1386));
// unreffing REF($2152:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1384));
// unreffing REF($2151:panda.core.String)
goto block107;
block107:;
// line 419
panda$core$MutableString* $tmp1388 = *(&local68);
panda$core$String* $tmp1389 = panda$core$MutableString$finish$R$panda$core$String($tmp1388);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1389));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1389));
// unreffing REF($2163:panda.core.String)
panda$core$MutableString* $tmp1390 = *(&local68);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1390));
// unreffing result
*(&local68) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1391 = *(&local67);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1391));
// unreffing ifFalse
*(&local67) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1392 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1392));
// unreffing ifTrue
*(&local66) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1393 = *(&local65);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1393));
// unreffing test
*(&local65) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1389;
block102:;
panda$core$Int64 $tmp1394 = (panda$core$Int64) {25};
panda$core$Bit $tmp1395 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1394);
bool $tmp1396 = $tmp1395.value;
if ($tmp1396) goto block108; else goto block109;
block108:;
org$pandalanguage$pandac$Position* $tmp1397 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1398 = *$tmp1397;
panda$core$UInt64* $tmp1399 = (panda$core$UInt64*) (param0->$data + 16);
panda$core$UInt64 $tmp1400 = *$tmp1399;
*(&local70) = $tmp1400;
// line 422
panda$core$UInt64 $tmp1401 = *(&local70);
panda$core$String* $tmp1402 = panda$core$UInt64$convert$R$panda$core$String($tmp1401);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1402));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1402));
// unreffing REF($2201:panda.core.String)
return $tmp1402;
block109:;
panda$core$Int64 $tmp1403 = (panda$core$Int64) {26};
panda$core$Bit $tmp1404 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1403);
bool $tmp1405 = $tmp1404.value;
if ($tmp1405) goto block110; else goto block111;
block110:;
org$pandalanguage$pandac$Position* $tmp1406 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1407 = *$tmp1406;
org$pandalanguage$pandac$IR$Value** $tmp1408 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp1409 = *$tmp1408;
*(&local71) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1409));
org$pandalanguage$pandac$IR$Value* $tmp1410 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1410));
*(&local71) = $tmp1409;
// line 425
org$pandalanguage$pandac$IR$Value* $tmp1411 = *(&local71);
$fn1413 $tmp1412 = ($fn1413) $tmp1411->$class->vtable[0];
panda$core$String* $tmp1414 = $tmp1412($tmp1411);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1414));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1414));
// unreffing REF($2226:panda.core.String)
org$pandalanguage$pandac$IR$Value* $tmp1415 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1415));
// unreffing value
*(&local71) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp1414;
block111:;
panda$core$Int64 $tmp1416 = (panda$core$Int64) {27};
panda$core$Bit $tmp1417 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1416);
bool $tmp1418 = $tmp1417.value;
if ($tmp1418) goto block112; else goto block113;
block112:;
org$pandalanguage$pandac$Position* $tmp1419 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1420 = *$tmp1419;
panda$core$String** $tmp1421 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1422 = *$tmp1421;
*(&local72) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1422));
panda$core$String* $tmp1423 = *(&local72);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1423));
*(&local72) = $tmp1422;
org$pandalanguage$pandac$FixedArray** $tmp1424 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1425 = *$tmp1424;
*(&local73) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1425));
org$pandalanguage$pandac$FixedArray* $tmp1426 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1426));
*(&local73) = $tmp1425;
// line 428
panda$core$MutableString* $tmp1427 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1427);
*(&local74) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1427));
panda$core$MutableString* $tmp1428 = *(&local74);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1428));
*(&local74) = $tmp1427;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1427));
// unreffing REF($2263:panda.core.MutableString)
// line 429
panda$core$String* $tmp1429 = *(&local72);
panda$core$Bit $tmp1430 = panda$core$Bit$init$builtin_bit($tmp1429 != NULL);
bool $tmp1431 = $tmp1430.value;
if ($tmp1431) goto block114; else goto block115;
block114:;
// line 430
panda$core$MutableString* $tmp1432 = *(&local74);
panda$core$String* $tmp1433 = *(&local72);
panda$core$String* $tmp1434 = panda$core$String$convert$R$panda$core$String($tmp1433);
panda$core$String* $tmp1435 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1434, &$s1436);
panda$core$MutableString$append$panda$core$String($tmp1432, $tmp1435);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1435));
// unreffing REF($2286:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1434));
// unreffing REF($2285:panda.core.String)
goto block115;
block115:;
// line 432
panda$core$MutableString* $tmp1437 = *(&local74);
panda$core$MutableString$append$panda$core$String($tmp1437, &$s1438);
// line 433
org$pandalanguage$pandac$FixedArray* $tmp1439 = *(&local73);
ITable* $tmp1440 = ((panda$collections$Iterable*) $tmp1439)->$class->itable;
while ($tmp1440->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1440 = $tmp1440->next;
}
$fn1442 $tmp1441 = $tmp1440->methods[0];
panda$collections$Iterator* $tmp1443 = $tmp1441(((panda$collections$Iterable*) $tmp1439));
goto block116;
block116:;
ITable* $tmp1444 = $tmp1443->$class->itable;
while ($tmp1444->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1444 = $tmp1444->next;
}
$fn1446 $tmp1445 = $tmp1444->methods[0];
panda$core$Bit $tmp1447 = $tmp1445($tmp1443);
bool $tmp1448 = $tmp1447.value;
if ($tmp1448) goto block118; else goto block117;
block117:;
*(&local75) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1449 = $tmp1443->$class->itable;
while ($tmp1449->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1449 = $tmp1449->next;
}
$fn1451 $tmp1450 = $tmp1449->methods[1];
panda$core$Object* $tmp1452 = $tmp1450($tmp1443);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1452)));
org$pandalanguage$pandac$ASTNode* $tmp1453 = *(&local75);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1453));
*(&local75) = ((org$pandalanguage$pandac$ASTNode*) $tmp1452);
// line 434
panda$core$MutableString* $tmp1454 = *(&local74);
org$pandalanguage$pandac$ASTNode* $tmp1455 = *(&local75);
panda$core$String* $tmp1456 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1455), &$s1457);
panda$core$MutableString$append$panda$core$String($tmp1454, $tmp1456);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1456));
// unreffing REF($2326:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1452);
// unreffing REF($2314:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1458 = *(&local75);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1458));
// unreffing s
*(&local75) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block116;
block118:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1443));
// unreffing REF($2303:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 436
panda$core$MutableString* $tmp1459 = *(&local74);
panda$core$MutableString$append$panda$core$String($tmp1459, &$s1460);
// line 437
panda$core$MutableString* $tmp1461 = *(&local74);
panda$core$String* $tmp1462 = panda$core$MutableString$finish$R$panda$core$String($tmp1461);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1462));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1462));
// unreffing REF($2348:panda.core.String)
panda$core$MutableString* $tmp1463 = *(&local74);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1463));
// unreffing result
*(&local74) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1464 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1464));
// unreffing statements
*(&local73) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp1465 = *(&local72);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1465));
// unreffing label
*(&local72) = ((panda$core$String*) NULL);
return $tmp1462;
block113:;
panda$core$Int64 $tmp1466 = (panda$core$Int64) {28};
panda$core$Bit $tmp1467 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1466);
bool $tmp1468 = $tmp1467.value;
if ($tmp1468) goto block119; else goto block120;
block119:;
org$pandalanguage$pandac$Position* $tmp1469 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1470 = *$tmp1469;
org$pandalanguage$pandac$ASTNode** $tmp1471 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1472 = *$tmp1471;
*(&local76) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1472));
org$pandalanguage$pandac$ASTNode* $tmp1473 = *(&local76);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1473));
*(&local76) = $tmp1472;
org$pandalanguage$pandac$FixedArray** $tmp1474 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1475 = *$tmp1474;
*(&local77) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1475));
org$pandalanguage$pandac$FixedArray* $tmp1476 = *(&local77);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1476));
*(&local77) = $tmp1475;
org$pandalanguage$pandac$FixedArray** $tmp1477 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp1478 = *$tmp1477;
*(&local78) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1478));
org$pandalanguage$pandac$FixedArray* $tmp1479 = *(&local78);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1479));
*(&local78) = $tmp1478;
// line 440
panda$core$MutableString* $tmp1480 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$ASTNode* $tmp1481 = *(&local76);
panda$core$String* $tmp1482 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1483, ((panda$core$Object*) $tmp1481));
panda$core$String* $tmp1484 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1482, &$s1485);
panda$core$MutableString$init$panda$core$String($tmp1480, $tmp1484);
*(&local79) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1480));
panda$core$MutableString* $tmp1486 = *(&local79);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1486));
*(&local79) = $tmp1480;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1484));
// unreffing REF($2408:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1482));
// unreffing REF($2407:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1480));
// unreffing REF($2404:panda.core.MutableString)
// line 441
org$pandalanguage$pandac$FixedArray* $tmp1487 = *(&local77);
ITable* $tmp1488 = ((panda$collections$Iterable*) $tmp1487)->$class->itable;
while ($tmp1488->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1488 = $tmp1488->next;
}
$fn1490 $tmp1489 = $tmp1488->methods[0];
panda$collections$Iterator* $tmp1491 = $tmp1489(((panda$collections$Iterable*) $tmp1487));
goto block121;
block121:;
ITable* $tmp1492 = $tmp1491->$class->itable;
while ($tmp1492->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1492 = $tmp1492->next;
}
$fn1494 $tmp1493 = $tmp1492->methods[0];
panda$core$Bit $tmp1495 = $tmp1493($tmp1491);
bool $tmp1496 = $tmp1495.value;
if ($tmp1496) goto block123; else goto block122;
block122:;
*(&local80) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1497 = $tmp1491->$class->itable;
while ($tmp1497->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1497 = $tmp1497->next;
}
$fn1499 $tmp1498 = $tmp1497->methods[1];
panda$core$Object* $tmp1500 = $tmp1498($tmp1491);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1500)));
org$pandalanguage$pandac$ASTNode* $tmp1501 = *(&local80);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1501));
*(&local80) = ((org$pandalanguage$pandac$ASTNode*) $tmp1500);
// line 442
panda$core$MutableString* $tmp1502 = *(&local79);
org$pandalanguage$pandac$ASTNode* $tmp1503 = *(&local80);
panda$core$String* $tmp1504 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1503), &$s1505);
panda$core$MutableString$append$panda$core$String($tmp1502, $tmp1504);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1504));
// unreffing REF($2454:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1500);
// unreffing REF($2442:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1506 = *(&local80);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1506));
// unreffing w
*(&local80) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block121;
block123:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1491));
// unreffing REF($2431:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 444
org$pandalanguage$pandac$FixedArray* $tmp1507 = *(&local78);
panda$core$Bit $tmp1508 = panda$core$Bit$init$builtin_bit($tmp1507 != NULL);
bool $tmp1509 = $tmp1508.value;
if ($tmp1509) goto block124; else goto block125;
block124:;
// line 445
panda$core$MutableString* $tmp1510 = *(&local79);
org$pandalanguage$pandac$FixedArray* $tmp1511 = *(&local78);
panda$core$String* $tmp1512 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1511), &$s1513);
panda$core$MutableString$append$panda$core$String($tmp1510, $tmp1512);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1512));
// unreffing REF($2481:panda.core.String)
goto block125;
block125:;
// line 447
panda$core$MutableString* $tmp1514 = *(&local79);
panda$core$MutableString$append$panda$core$String($tmp1514, &$s1515);
// line 448
panda$core$MutableString* $tmp1516 = *(&local79);
panda$core$String* $tmp1517 = panda$core$MutableString$finish$R$panda$core$String($tmp1516);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1517));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1517));
// unreffing REF($2492:panda.core.String)
panda$core$MutableString* $tmp1518 = *(&local79);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1518));
// unreffing result
*(&local79) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1519 = *(&local78);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1519));
// unreffing other
*(&local78) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1520 = *(&local77);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1520));
// unreffing whens
*(&local77) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1521 = *(&local76);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1521));
// unreffing value
*(&local76) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1517;
block120:;
panda$core$Int64 $tmp1522 = (panda$core$Int64) {29};
panda$core$Bit $tmp1523 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1522);
bool $tmp1524 = $tmp1523.value;
if ($tmp1524) goto block126; else goto block127;
block126:;
org$pandalanguage$pandac$Position* $tmp1525 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1526 = *$tmp1525;
org$pandalanguage$pandac$ASTNode** $tmp1527 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1528 = *$tmp1527;
*(&local81) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1528));
org$pandalanguage$pandac$ASTNode* $tmp1529 = *(&local81);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1529));
*(&local81) = $tmp1528;
org$pandalanguage$pandac$FixedArray** $tmp1530 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1531 = *$tmp1530;
*(&local82) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1531));
org$pandalanguage$pandac$FixedArray* $tmp1532 = *(&local82);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1532));
*(&local82) = $tmp1531;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp1533 = (org$pandalanguage$pandac$MethodDecl$Kind*) (param0->$data + 32);
org$pandalanguage$pandac$MethodDecl$Kind $tmp1534 = *$tmp1533;
*(&local83) = $tmp1534;
panda$core$String** $tmp1535 = (panda$core$String**) (param0->$data + 40);
panda$core$String* $tmp1536 = *$tmp1535;
*(&local84) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1536));
panda$core$String* $tmp1537 = *(&local84);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1537));
*(&local84) = $tmp1536;
org$pandalanguage$pandac$FixedArray** $tmp1538 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 48);
org$pandalanguage$pandac$FixedArray* $tmp1539 = *$tmp1538;
*(&local85) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1539));
org$pandalanguage$pandac$FixedArray* $tmp1540 = *(&local85);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1540));
*(&local85) = $tmp1539;
org$pandalanguage$pandac$FixedArray** $tmp1541 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 56);
org$pandalanguage$pandac$FixedArray* $tmp1542 = *$tmp1541;
*(&local86) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1542));
org$pandalanguage$pandac$FixedArray* $tmp1543 = *(&local86);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1543));
*(&local86) = $tmp1542;
org$pandalanguage$pandac$ASTNode** $tmp1544 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 64);
org$pandalanguage$pandac$ASTNode* $tmp1545 = *$tmp1544;
*(&local87) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1545));
org$pandalanguage$pandac$ASTNode* $tmp1546 = *(&local87);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1546));
*(&local87) = $tmp1545;
org$pandalanguage$pandac$FixedArray** $tmp1547 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 72);
org$pandalanguage$pandac$FixedArray* $tmp1548 = *$tmp1547;
*(&local88) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1548));
org$pandalanguage$pandac$FixedArray* $tmp1549 = *(&local88);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1549));
*(&local88) = $tmp1548;
// line 452
panda$core$MutableString* $tmp1550 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1550);
*(&local89) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1550));
panda$core$MutableString* $tmp1551 = *(&local89);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1551));
*(&local89) = $tmp1550;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1550));
// unreffing REF($2592:panda.core.MutableString)
// line 453
org$pandalanguage$pandac$ASTNode* $tmp1552 = *(&local81);
panda$core$Bit $tmp1553 = panda$core$Bit$init$builtin_bit($tmp1552 != NULL);
bool $tmp1554 = $tmp1553.value;
if ($tmp1554) goto block128; else goto block129;
block128:;
// line 454
panda$core$MutableString* $tmp1555 = *(&local89);
org$pandalanguage$pandac$ASTNode* $tmp1556 = *(&local81);
panda$core$String* $tmp1557 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1556), &$s1558);
panda$core$MutableString$append$panda$core$String($tmp1555, $tmp1557);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1557));
// unreffing REF($2614:panda.core.String)
goto block129;
block129:;
// line 456
org$pandalanguage$pandac$FixedArray* $tmp1559 = *(&local82);
ITable* $tmp1560 = ((panda$collections$Iterable*) $tmp1559)->$class->itable;
while ($tmp1560->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1560 = $tmp1560->next;
}
$fn1562 $tmp1561 = $tmp1560->methods[0];
panda$collections$Iterator* $tmp1563 = $tmp1561(((panda$collections$Iterable*) $tmp1559));
goto block130;
block130:;
ITable* $tmp1564 = $tmp1563->$class->itable;
while ($tmp1564->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1564 = $tmp1564->next;
}
$fn1566 $tmp1565 = $tmp1564->methods[0];
panda$core$Bit $tmp1567 = $tmp1565($tmp1563);
bool $tmp1568 = $tmp1567.value;
if ($tmp1568) goto block132; else goto block131;
block131:;
*(&local90) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1569 = $tmp1563->$class->itable;
while ($tmp1569->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1569 = $tmp1569->next;
}
$fn1571 $tmp1570 = $tmp1569->methods[1];
panda$core$Object* $tmp1572 = $tmp1570($tmp1563);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1572)));
org$pandalanguage$pandac$ASTNode* $tmp1573 = *(&local90);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1573));
*(&local90) = ((org$pandalanguage$pandac$ASTNode*) $tmp1572);
// line 457
panda$core$MutableString* $tmp1574 = *(&local89);
org$pandalanguage$pandac$ASTNode* $tmp1575 = *(&local90);
panda$core$String* $tmp1576 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1575), &$s1577);
panda$core$MutableString$append$panda$core$String($tmp1574, $tmp1576);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1576));
// unreffing REF($2648:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1572);
// unreffing REF($2636:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1578 = *(&local90);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1578));
// unreffing a
*(&local90) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block130;
block132:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1563));
// unreffing REF($2625:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 459
org$pandalanguage$pandac$MethodDecl$Kind $tmp1579 = *(&local83);
panda$core$Int64 $tmp1580 = $tmp1579.$rawValue;
panda$core$Int64 $tmp1581 = (panda$core$Int64) {0};
panda$core$Bit $tmp1582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1580, $tmp1581);
bool $tmp1583 = $tmp1582.value;
if ($tmp1583) goto block134; else goto block135;
block134:;
// line 460
panda$core$MutableString* $tmp1584 = *(&local89);
panda$core$MutableString$append$panda$core$String($tmp1584, &$s1585);
goto block133;
block135:;
panda$core$Int64 $tmp1586 = (panda$core$Int64) {1};
panda$core$Bit $tmp1587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1580, $tmp1586);
bool $tmp1588 = $tmp1587.value;
if ($tmp1588) goto block136; else goto block137;
block136:;
// line 461
panda$core$MutableString* $tmp1589 = *(&local89);
panda$core$MutableString$append$panda$core$String($tmp1589, &$s1590);
goto block133;
block137:;
panda$core$Int64 $tmp1591 = (panda$core$Int64) {2};
panda$core$Bit $tmp1592 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1580, $tmp1591);
bool $tmp1593 = $tmp1592.value;
if ($tmp1593) goto block138; else goto block133;
block138:;
goto block133;
block133:;
// line 464
panda$core$MutableString* $tmp1594 = *(&local89);
panda$core$String* $tmp1595 = *(&local84);
panda$core$MutableString$append$panda$core$String($tmp1594, $tmp1595);
// line 465
org$pandalanguage$pandac$FixedArray* $tmp1596 = *(&local85);
panda$core$Bit $tmp1597 = panda$core$Bit$init$builtin_bit($tmp1596 != NULL);
bool $tmp1598 = $tmp1597.value;
if ($tmp1598) goto block139; else goto block140;
block139:;
// line 466
panda$core$MutableString* $tmp1599 = *(&local89);
org$pandalanguage$pandac$FixedArray* $tmp1600 = *(&local85);
ITable* $tmp1601 = ((panda$collections$CollectionView*) $tmp1600)->$class->itable;
while ($tmp1601->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1601 = $tmp1601->next;
}
$fn1603 $tmp1602 = $tmp1601->methods[1];
panda$core$String* $tmp1604 = $tmp1602(((panda$collections$CollectionView*) $tmp1600));
panda$core$String* $tmp1605 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1606, $tmp1604);
panda$core$String* $tmp1607 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1605, &$s1608);
panda$core$MutableString$append$panda$core$String($tmp1599, $tmp1607);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1607));
// unreffing REF($2706:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1605));
// unreffing REF($2705:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1604));
// unreffing REF($2704:panda.core.String)
goto block140;
block140:;
// line 468
panda$core$MutableString* $tmp1609 = *(&local89);
org$pandalanguage$pandac$FixedArray* $tmp1610 = *(&local86);
ITable* $tmp1611 = ((panda$collections$CollectionView*) $tmp1610)->$class->itable;
while ($tmp1611->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1611 = $tmp1611->next;
}
$fn1613 $tmp1612 = $tmp1611->methods[1];
panda$core$String* $tmp1614 = $tmp1612(((panda$collections$CollectionView*) $tmp1610));
panda$core$String* $tmp1615 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1616, $tmp1614);
panda$core$String* $tmp1617 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1615, &$s1618);
panda$core$MutableString$append$panda$core$String($tmp1609, $tmp1617);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1617));
// unreffing REF($2725:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1615));
// unreffing REF($2724:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1614));
// unreffing REF($2723:panda.core.String)
// line 469
org$pandalanguage$pandac$ASTNode* $tmp1619 = *(&local87);
panda$core$Bit $tmp1620 = panda$core$Bit$init$builtin_bit($tmp1619 != NULL);
bool $tmp1621 = $tmp1620.value;
if ($tmp1621) goto block141; else goto block142;
block141:;
// line 470
panda$core$MutableString* $tmp1622 = *(&local89);
org$pandalanguage$pandac$ASTNode* $tmp1623 = *(&local87);
panda$core$String* $tmp1624 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1625, ((panda$core$Object*) $tmp1623));
panda$core$String* $tmp1626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1624, &$s1627);
panda$core$MutableString$append$panda$core$String($tmp1622, $tmp1626);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1626));
// unreffing REF($2747:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1624));
// unreffing REF($2746:panda.core.String)
goto block142;
block142:;
// line 472
org$pandalanguage$pandac$FixedArray* $tmp1628 = *(&local88);
panda$core$Bit $tmp1629 = panda$core$Bit$init$builtin_bit($tmp1628 != NULL);
bool $tmp1630 = $tmp1629.value;
if ($tmp1630) goto block143; else goto block144;
block143:;
// line 473
panda$core$MutableString* $tmp1631 = *(&local89);
panda$core$MutableString$append$panda$core$String($tmp1631, &$s1632);
// line 474
org$pandalanguage$pandac$FixedArray* $tmp1633 = *(&local88);
ITable* $tmp1634 = ((panda$collections$Iterable*) $tmp1633)->$class->itable;
while ($tmp1634->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1634 = $tmp1634->next;
}
$fn1636 $tmp1635 = $tmp1634->methods[0];
panda$collections$Iterator* $tmp1637 = $tmp1635(((panda$collections$Iterable*) $tmp1633));
goto block145;
block145:;
ITable* $tmp1638 = $tmp1637->$class->itable;
while ($tmp1638->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1638 = $tmp1638->next;
}
$fn1640 $tmp1639 = $tmp1638->methods[0];
panda$core$Bit $tmp1641 = $tmp1639($tmp1637);
bool $tmp1642 = $tmp1641.value;
if ($tmp1642) goto block147; else goto block146;
block146:;
*(&local91) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1643 = $tmp1637->$class->itable;
while ($tmp1643->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1643 = $tmp1643->next;
}
$fn1645 $tmp1644 = $tmp1643->methods[1];
panda$core$Object* $tmp1646 = $tmp1644($tmp1637);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1646)));
org$pandalanguage$pandac$ASTNode* $tmp1647 = *(&local91);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1647));
*(&local91) = ((org$pandalanguage$pandac$ASTNode*) $tmp1646);
// line 475
panda$core$MutableString* $tmp1648 = *(&local89);
org$pandalanguage$pandac$ASTNode* $tmp1649 = *(&local91);
panda$core$String* $tmp1650 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1649), &$s1651);
panda$core$MutableString$append$panda$core$String($tmp1648, $tmp1650);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1650));
// unreffing REF($2793:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1646);
// unreffing REF($2781:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1652 = *(&local91);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1652));
// unreffing s
*(&local91) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block145;
block147:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1637));
// unreffing REF($2770:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 477
panda$core$MutableString* $tmp1653 = *(&local89);
panda$core$MutableString$append$panda$core$String($tmp1653, &$s1654);
goto block144;
block144:;
// line 479
panda$core$MutableString* $tmp1655 = *(&local89);
panda$core$String* $tmp1656 = panda$core$MutableString$finish$R$panda$core$String($tmp1655);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1656));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1656));
// unreffing REF($2816:panda.core.String)
panda$core$MutableString* $tmp1657 = *(&local89);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1657));
// unreffing result
*(&local89) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1658 = *(&local88);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1658));
// unreffing statements
*(&local88) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1659 = *(&local87);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1659));
// unreffing returnType
*(&local87) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1660 = *(&local86);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1660));
// unreffing parameters
*(&local86) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1661 = *(&local85);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1661));
// unreffing generics
*(&local85) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp1662 = *(&local84);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1662));
// unreffing name
*(&local84) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1663 = *(&local82);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1663));
// unreffing annotations
*(&local82) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1664 = *(&local81);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1664));
// unreffing dc
*(&local81) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1656;
block127:;
panda$core$Int64 $tmp1665 = (panda$core$Int64) {30};
panda$core$Bit $tmp1666 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1665);
bool $tmp1667 = $tmp1666.value;
if ($tmp1667) goto block148; else goto block149;
block148:;
org$pandalanguage$pandac$Position* $tmp1668 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1669 = *$tmp1668;
org$pandalanguage$pandac$parser$Token$Kind* $tmp1670 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp1671 = *$tmp1670;
*(&local92) = $tmp1671;
org$pandalanguage$pandac$FixedArray** $tmp1672 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp1673 = *$tmp1672;
*(&local93) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1673));
org$pandalanguage$pandac$FixedArray* $tmp1674 = *(&local93);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1674));
*(&local93) = $tmp1673;
org$pandalanguage$pandac$ASTNode** $tmp1675 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1676 = *$tmp1675;
*(&local94) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1676));
org$pandalanguage$pandac$ASTNode* $tmp1677 = *(&local94);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1677));
*(&local94) = $tmp1676;
// line 482
*(&local95) = ((panda$core$String*) NULL);
// line 483
org$pandalanguage$pandac$parser$Token$Kind $tmp1678 = *(&local92);
panda$core$Int64 $tmp1679 = $tmp1678.$rawValue;
panda$core$Int64 $tmp1680 = (panda$core$Int64) {91};
panda$core$Bit $tmp1681 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1679, $tmp1680);
bool $tmp1682 = $tmp1681.value;
if ($tmp1682) goto block151; else goto block152;
block151:;
// line 485
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1683));
panda$core$String* $tmp1684 = *(&local95);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1684));
*(&local95) = &$s1685;
goto block150;
block152:;
panda$core$Int64 $tmp1686 = (panda$core$Int64) {92};
panda$core$Bit $tmp1687 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1679, $tmp1686);
bool $tmp1688 = $tmp1687.value;
if ($tmp1688) goto block153; else goto block154;
block153:;
// line 488
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1689));
panda$core$String* $tmp1690 = *(&local95);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1690));
*(&local95) = &$s1691;
goto block150;
block154:;
panda$core$Int64 $tmp1692 = (panda$core$Int64) {93};
panda$core$Bit $tmp1693 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1679, $tmp1692);
bool $tmp1694 = $tmp1693.value;
if ($tmp1694) goto block155; else goto block156;
block155:;
// line 491
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1695));
panda$core$String* $tmp1696 = *(&local95);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1696));
*(&local95) = &$s1697;
goto block150;
block156:;
panda$core$Int64 $tmp1698 = (panda$core$Int64) {94};
panda$core$Bit $tmp1699 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1679, $tmp1698);
bool $tmp1700 = $tmp1699.value;
if ($tmp1700) goto block157; else goto block150;
block157:;
// line 494
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1701));
panda$core$String* $tmp1702 = *(&local95);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1702));
*(&local95) = &$s1703;
goto block150;
block150:;
// line 497
org$pandalanguage$pandac$FixedArray* $tmp1704 = *(&local93);
ITable* $tmp1705 = ((panda$collections$CollectionView*) $tmp1704)->$class->itable;
while ($tmp1705->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1705 = $tmp1705->next;
}
$fn1707 $tmp1706 = $tmp1705->methods[1];
panda$core$String* $tmp1708 = $tmp1706(((panda$collections$CollectionView*) $tmp1704));
panda$core$String* $tmp1709 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1710, $tmp1708);
panda$core$String* $tmp1711 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1709, &$s1712);
panda$core$String* $tmp1713 = *(&local95);
panda$core$String* $tmp1714 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1711, $tmp1713);
panda$core$String* $tmp1715 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1714, &$s1716);
*(&local96) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1715));
panda$core$String* $tmp1717 = *(&local96);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1717));
*(&local96) = $tmp1715;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1715));
// unreffing REF($2952:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1714));
// unreffing REF($2951:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1711));
// unreffing REF($2949:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1709));
// unreffing REF($2948:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1708));
// unreffing REF($2947:panda.core.String)
// line 498
org$pandalanguage$pandac$ASTNode* $tmp1718 = *(&local94);
panda$core$Bit $tmp1719 = panda$core$Bit$init$builtin_bit($tmp1718 != NULL);
bool $tmp1720 = $tmp1719.value;
if ($tmp1720) goto block158; else goto block159;
block158:;
// line 499
panda$core$String* $tmp1721 = *(&local96);
panda$core$String* $tmp1722 = panda$core$String$convert$R$panda$core$String($tmp1721);
panda$core$String* $tmp1723 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1722, &$s1724);
org$pandalanguage$pandac$ASTNode* $tmp1725 = *(&local94);
panda$core$String* $tmp1726 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1723, ((panda$core$Object*) $tmp1725));
panda$core$String* $tmp1727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1726, &$s1728);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1727));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1727));
// unreffing REF($2988:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1726));
// unreffing REF($2987:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1723));
// unreffing REF($2984:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1722));
// unreffing REF($2983:panda.core.String)
panda$core$String* $tmp1729 = *(&local96);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1729));
// unreffing partial
*(&local96) = ((panda$core$String*) NULL);
panda$core$String* $tmp1730 = *(&local95);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1730));
// unreffing yield
*(&local95) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1731 = *(&local94);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1731));
// unreffing returnType
*(&local94) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1732 = *(&local93);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1732));
// unreffing paramTypes
*(&local93) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp1727;
block159:;
// line 501
panda$core$String* $tmp1733 = *(&local96);
panda$core$String* $tmp1734 = panda$core$String$convert$R$panda$core$String($tmp1733);
panda$core$String* $tmp1735 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1734, &$s1736);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1735));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1735));
// unreffing REF($3027:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1734));
// unreffing REF($3026:panda.core.String)
panda$core$String* $tmp1737 = *(&local96);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1737));
// unreffing partial
*(&local96) = ((panda$core$String*) NULL);
panda$core$String* $tmp1738 = *(&local95);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1738));
// unreffing yield
*(&local95) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1739 = *(&local94);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1739));
// unreffing returnType
*(&local94) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp1740 = *(&local93);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1740));
// unreffing paramTypes
*(&local93) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp1735;
block149:;
panda$core$Int64 $tmp1741 = (panda$core$Int64) {31};
panda$core$Bit $tmp1742 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1741);
bool $tmp1743 = $tmp1742.value;
if ($tmp1743) goto block160; else goto block161;
block160:;
// line 504
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1744));
return &$s1745;
block161:;
panda$core$Int64 $tmp1746 = (panda$core$Int64) {32};
panda$core$Bit $tmp1747 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1746);
bool $tmp1748 = $tmp1747.value;
if ($tmp1748) goto block162; else goto block163;
block162:;
org$pandalanguage$pandac$Position* $tmp1749 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1750 = *$tmp1749;
org$pandalanguage$pandac$ASTNode** $tmp1751 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1752 = *$tmp1751;
*(&local97) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1752));
org$pandalanguage$pandac$ASTNode* $tmp1753 = *(&local97);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1753));
*(&local97) = $tmp1752;
// line 507
org$pandalanguage$pandac$ASTNode* $tmp1754 = *(&local97);
panda$core$String* $tmp1755 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1754), &$s1756);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1755));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1755));
// unreffing REF($3083:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1757 = *(&local97);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1757));
// unreffing base
*(&local97) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1755;
block163:;
panda$core$Int64 $tmp1758 = (panda$core$Int64) {33};
panda$core$Bit $tmp1759 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1758);
bool $tmp1760 = $tmp1759.value;
if ($tmp1760) goto block164; else goto block165;
block164:;
org$pandalanguage$pandac$Position* $tmp1761 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1762 = *$tmp1761;
panda$core$String** $tmp1763 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1764 = *$tmp1763;
*(&local98) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1764));
panda$core$String* $tmp1765 = *(&local98);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1765));
*(&local98) = $tmp1764;
// line 510
panda$core$String* $tmp1766 = *(&local98);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1766));
panda$core$String* $tmp1767 = *(&local98);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1767));
// unreffing name
*(&local98) = ((panda$core$String*) NULL);
return $tmp1766;
block165:;
panda$core$Int64 $tmp1768 = (panda$core$Int64) {34};
panda$core$Bit $tmp1769 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1768);
bool $tmp1770 = $tmp1769.value;
if ($tmp1770) goto block166; else goto block167;
block166:;
org$pandalanguage$pandac$Position* $tmp1771 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1772 = *$tmp1771;
panda$core$String** $tmp1773 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1774 = *$tmp1773;
*(&local99) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1774));
panda$core$String* $tmp1775 = *(&local99);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1775));
*(&local99) = $tmp1774;
org$pandalanguage$pandac$ASTNode** $tmp1776 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1777 = *$tmp1776;
*(&local100) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1777));
org$pandalanguage$pandac$ASTNode* $tmp1778 = *(&local100);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1778));
*(&local100) = $tmp1777;
// line 513
panda$core$String* $tmp1779 = *(&local99);
panda$core$String* $tmp1780 = panda$core$String$convert$R$panda$core$String($tmp1779);
panda$core$String* $tmp1781 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1780, &$s1782);
org$pandalanguage$pandac$ASTNode* $tmp1783 = *(&local100);
panda$core$String* $tmp1784 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1781, ((panda$core$Object*) $tmp1783));
panda$core$String* $tmp1785 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1784, &$s1786);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1785));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1785));
// unreffing REF($3151:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1784));
// unreffing REF($3150:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1781));
// unreffing REF($3147:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1780));
// unreffing REF($3146:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1787 = *(&local100);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1787));
// unreffing type
*(&local100) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1788 = *(&local99);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1788));
// unreffing name
*(&local99) = ((panda$core$String*) NULL);
return $tmp1785;
block167:;
panda$core$Int64 $tmp1789 = (panda$core$Int64) {35};
panda$core$Bit $tmp1790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1789);
bool $tmp1791 = $tmp1790.value;
if ($tmp1791) goto block168; else goto block169;
block168:;
org$pandalanguage$pandac$Position* $tmp1792 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1793 = *$tmp1792;
org$pandalanguage$pandac$parser$Token$Kind* $tmp1794 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp1795 = *$tmp1794;
*(&local101) = $tmp1795;
org$pandalanguage$pandac$ASTNode** $tmp1796 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1797 = *$tmp1796;
*(&local102) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1797));
org$pandalanguage$pandac$ASTNode* $tmp1798 = *(&local102);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1798));
*(&local102) = $tmp1797;
// line 516
org$pandalanguage$pandac$parser$Token$Kind $tmp1799 = *(&local101);
panda$core$String* $tmp1800 = org$pandalanguage$pandac$parser$Token$Kind$convert$R$panda$core$String($tmp1799);
panda$core$String* $tmp1801 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1800, &$s1802);
org$pandalanguage$pandac$ASTNode* $tmp1803 = *(&local102);
panda$core$String* $tmp1804 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1801, ((panda$core$Object*) $tmp1803));
panda$core$String* $tmp1805 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1804, &$s1806);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1805));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1805));
// unreffing REF($3202:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1804));
// unreffing REF($3201:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1801));
// unreffing REF($3198:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1800));
// unreffing REF($3197:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1807 = *(&local102);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1807));
// unreffing base
*(&local102) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1805;
block169:;
panda$core$Int64 $tmp1808 = (panda$core$Int64) {36};
panda$core$Bit $tmp1809 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1808);
bool $tmp1810 = $tmp1809.value;
if ($tmp1810) goto block170; else goto block171;
block170:;
org$pandalanguage$pandac$Position* $tmp1811 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1812 = *$tmp1811;
org$pandalanguage$pandac$ASTNode** $tmp1813 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1814 = *$tmp1813;
*(&local103) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1814));
org$pandalanguage$pandac$ASTNode* $tmp1815 = *(&local103);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1815));
*(&local103) = $tmp1814;
panda$core$Bit* $tmp1816 = (panda$core$Bit*) (param0->$data + 24);
panda$core$Bit $tmp1817 = *$tmp1816;
*(&local104) = $tmp1817;
org$pandalanguage$pandac$ASTNode** $tmp1818 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 25);
org$pandalanguage$pandac$ASTNode* $tmp1819 = *$tmp1818;
*(&local105) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1819));
org$pandalanguage$pandac$ASTNode* $tmp1820 = *(&local105);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1820));
*(&local105) = $tmp1819;
org$pandalanguage$pandac$ASTNode** $tmp1821 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 33);
org$pandalanguage$pandac$ASTNode* $tmp1822 = *$tmp1821;
*(&local106) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1822));
org$pandalanguage$pandac$ASTNode* $tmp1823 = *(&local106);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1823));
*(&local106) = $tmp1822;
// line 519
panda$core$MutableString* $tmp1824 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1824);
*(&local107) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1824));
panda$core$MutableString* $tmp1825 = *(&local107);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1825));
*(&local107) = $tmp1824;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1824));
// unreffing REF($3260:panda.core.MutableString)
// line 520
org$pandalanguage$pandac$ASTNode* $tmp1826 = *(&local103);
panda$core$Bit $tmp1827 = panda$core$Bit$init$builtin_bit($tmp1826 != NULL);
bool $tmp1828 = $tmp1827.value;
if ($tmp1828) goto block172; else goto block173;
block172:;
// line 521
panda$core$MutableString* $tmp1829 = *(&local107);
org$pandalanguage$pandac$ASTNode* $tmp1830 = *(&local103);
panda$core$MutableString$append$panda$core$Object($tmp1829, ((panda$core$Object*) $tmp1830));
goto block173;
block173:;
// line 523
panda$core$Bit $tmp1831 = *(&local104);
bool $tmp1832 = $tmp1831.value;
if ($tmp1832) goto block174; else goto block176;
block174:;
// line 524
panda$core$MutableString* $tmp1833 = *(&local107);
panda$core$MutableString$append$panda$core$String($tmp1833, &$s1834);
goto block175;
block176:;
// line 1
// line 527
panda$core$MutableString* $tmp1835 = *(&local107);
panda$core$MutableString$append$panda$core$String($tmp1835, &$s1836);
goto block175;
block175:;
// line 529
org$pandalanguage$pandac$ASTNode* $tmp1837 = *(&local105);
panda$core$Bit $tmp1838 = panda$core$Bit$init$builtin_bit($tmp1837 != NULL);
bool $tmp1839 = $tmp1838.value;
if ($tmp1839) goto block177; else goto block178;
block177:;
// line 530
panda$core$MutableString* $tmp1840 = *(&local107);
org$pandalanguage$pandac$ASTNode* $tmp1841 = *(&local105);
panda$core$MutableString$append$panda$core$Object($tmp1840, ((panda$core$Object*) $tmp1841));
goto block178;
block178:;
// line 532
org$pandalanguage$pandac$ASTNode* $tmp1842 = *(&local106);
panda$core$Bit $tmp1843 = panda$core$Bit$init$builtin_bit($tmp1842 != NULL);
bool $tmp1844 = $tmp1843.value;
if ($tmp1844) goto block179; else goto block180;
block179:;
// line 533
panda$core$MutableString* $tmp1845 = *(&local107);
org$pandalanguage$pandac$ASTNode* $tmp1846 = *(&local106);
panda$core$String* $tmp1847 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1848, ((panda$core$Object*) $tmp1846));
panda$core$MutableString$append$panda$core$String($tmp1845, $tmp1847);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1847));
// unreffing REF($3319:panda.core.String)
goto block180;
block180:;
// line 535
panda$core$MutableString* $tmp1849 = *(&local107);
panda$core$String* $tmp1850 = panda$core$MutableString$finish$R$panda$core$String($tmp1849);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1850));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1850));
// unreffing REF($3327:panda.core.String)
panda$core$MutableString* $tmp1851 = *(&local107);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1851));
// unreffing result
*(&local107) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1852 = *(&local106);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1852));
// unreffing step
*(&local106) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1853 = *(&local105);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1853));
// unreffing end
*(&local105) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1854 = *(&local103);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1854));
// unreffing start
*(&local103) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1850;
block171:;
panda$core$Int64 $tmp1855 = (panda$core$Int64) {37};
panda$core$Bit $tmp1856 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1855);
bool $tmp1857 = $tmp1856.value;
if ($tmp1857) goto block181; else goto block182;
block181:;
org$pandalanguage$pandac$Position* $tmp1858 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1859 = *$tmp1858;
panda$core$Real64* $tmp1860 = (panda$core$Real64*) (param0->$data + 16);
panda$core$Real64 $tmp1861 = *$tmp1860;
*(&local108) = $tmp1861;
// line 538
panda$core$Real64 $tmp1862 = *(&local108);
panda$core$String* $tmp1863 = panda$core$Real64$convert$R$panda$core$String($tmp1862);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1863));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1863));
// unreffing REF($3365:panda.core.String)
return $tmp1863;
block182:;
panda$core$Int64 $tmp1864 = (panda$core$Int64) {38};
panda$core$Bit $tmp1865 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1864);
bool $tmp1866 = $tmp1865.value;
if ($tmp1866) goto block183; else goto block184;
block183:;
org$pandalanguage$pandac$Position* $tmp1867 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1868 = *$tmp1867;
panda$core$String** $tmp1869 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1870 = *$tmp1869;
*(&local109) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1870));
panda$core$String* $tmp1871 = *(&local109);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1871));
*(&local109) = $tmp1870;
// line 541
panda$core$String* $tmp1872 = *(&local109);
panda$core$String* $tmp1873 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1874, $tmp1872);
panda$core$String* $tmp1875 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1873, &$s1876);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1875));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1875));
// unreffing REF($3390:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1873));
// unreffing REF($3389:panda.core.String)
panda$core$String* $tmp1877 = *(&local109);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1877));
// unreffing src
*(&local109) = ((panda$core$String*) NULL);
return $tmp1875;
block184:;
panda$core$Int64 $tmp1878 = (panda$core$Int64) {39};
panda$core$Bit $tmp1879 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1878);
bool $tmp1880 = $tmp1879.value;
if ($tmp1880) goto block185; else goto block186;
block185:;
org$pandalanguage$pandac$Position* $tmp1881 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1882 = *$tmp1881;
org$pandalanguage$pandac$ASTNode** $tmp1883 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1884 = *$tmp1883;
*(&local110) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1884));
org$pandalanguage$pandac$ASTNode* $tmp1885 = *(&local110);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1885));
*(&local110) = $tmp1884;
// line 544
org$pandalanguage$pandac$ASTNode* $tmp1886 = *(&local110);
panda$core$Bit $tmp1887 = panda$core$Bit$init$builtin_bit($tmp1886 != NULL);
bool $tmp1888 = $tmp1887.value;
if ($tmp1888) goto block187; else goto block188;
block187:;
// line 545
org$pandalanguage$pandac$ASTNode* $tmp1889 = *(&local110);
panda$core$String* $tmp1890 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1891, ((panda$core$Object*) $tmp1889));
panda$core$String* $tmp1892 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1890, &$s1893);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1892));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1892));
// unreffing REF($3430:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1890));
// unreffing REF($3429:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1894 = *(&local110);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1894));
// unreffing value
*(&local110) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1892;
block188:;
// line 547
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1895));
org$pandalanguage$pandac$ASTNode* $tmp1896 = *(&local110);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1896));
// unreffing value
*(&local110) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return &$s1897;
block186:;
panda$core$Int64 $tmp1898 = (panda$core$Int64) {40};
panda$core$Bit $tmp1899 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1898);
bool $tmp1900 = $tmp1899.value;
if ($tmp1900) goto block189; else goto block190;
block189:;
// line 550
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1901));
return &$s1902;
block190:;
panda$core$Int64 $tmp1903 = (panda$core$Int64) {41};
panda$core$Bit $tmp1904 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1903);
bool $tmp1905 = $tmp1904.value;
if ($tmp1905) goto block191; else goto block192;
block191:;
org$pandalanguage$pandac$Position* $tmp1906 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1907 = *$tmp1906;
panda$core$String** $tmp1908 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1909 = *$tmp1908;
*(&local111) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1909));
panda$core$String* $tmp1910 = *(&local111);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1910));
*(&local111) = $tmp1909;
// line 553
panda$core$String* $tmp1911 = *(&local111);
panda$core$String* $tmp1912 = panda$core$String$format$panda$core$String$R$panda$core$String($tmp1911, &$s1913);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1912));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1912));
// unreffing REF($3479:panda.core.String)
panda$core$String* $tmp1914 = *(&local111);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1914));
// unreffing str
*(&local111) = ((panda$core$String*) NULL);
return $tmp1912;
block192:;
panda$core$Int64 $tmp1915 = (panda$core$Int64) {42};
panda$core$Bit $tmp1916 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1915);
bool $tmp1917 = $tmp1916.value;
if ($tmp1917) goto block193; else goto block194;
block193:;
// line 556
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1918));
return &$s1919;
block194:;
panda$core$Int64 $tmp1920 = (panda$core$Int64) {43};
panda$core$Bit $tmp1921 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1920);
bool $tmp1922 = $tmp1921.value;
if ($tmp1922) goto block195; else goto block196;
block195:;
org$pandalanguage$pandac$Position* $tmp1923 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1924 = *$tmp1923;
org$pandalanguage$pandac$FixedArray** $tmp1925 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp1926 = *$tmp1925;
*(&local112) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1926));
org$pandalanguage$pandac$FixedArray* $tmp1927 = *(&local112);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1927));
*(&local112) = $tmp1926;
// line 559
org$pandalanguage$pandac$FixedArray* $tmp1928 = *(&local112);
ITable* $tmp1929 = ((panda$collections$CollectionView*) $tmp1928)->$class->itable;
while ($tmp1929->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1929 = $tmp1929->next;
}
$fn1931 $tmp1930 = $tmp1929->methods[1];
panda$core$String* $tmp1932 = $tmp1930(((panda$collections$CollectionView*) $tmp1928));
panda$core$String* $tmp1933 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1934, $tmp1932);
panda$core$String* $tmp1935 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1933, &$s1936);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1935));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1935));
// unreffing REF($3520:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1933));
// unreffing REF($3519:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1932));
// unreffing REF($3518:panda.core.String)
org$pandalanguage$pandac$FixedArray* $tmp1937 = *(&local112);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1937));
// unreffing arguments
*(&local112) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp1935;
block196:;
panda$core$Int64 $tmp1938 = (panda$core$Int64) {44};
panda$core$Bit $tmp1939 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1938);
bool $tmp1940 = $tmp1939.value;
if ($tmp1940) goto block197; else goto block198;
block197:;
org$pandalanguage$pandac$Position* $tmp1941 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1942 = *$tmp1941;
org$pandalanguage$pandac$FixedArray** $tmp1943 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp1944 = *$tmp1943;
*(&local113) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1944));
org$pandalanguage$pandac$FixedArray* $tmp1945 = *(&local113);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1945));
*(&local113) = $tmp1944;
// line 562
org$pandalanguage$pandac$FixedArray* $tmp1946 = *(&local113);
ITable* $tmp1947 = ((panda$collections$CollectionView*) $tmp1946)->$class->itable;
while ($tmp1947->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1947 = $tmp1947->next;
}
$fn1949 $tmp1948 = $tmp1947->methods[1];
panda$core$String* $tmp1950 = $tmp1948(((panda$collections$CollectionView*) $tmp1946));
panda$core$String* $tmp1951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1952, $tmp1950);
panda$core$String* $tmp1953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1951, &$s1954);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1953));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1953));
// unreffing REF($3559:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1951));
// unreffing REF($3558:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1950));
// unreffing REF($3557:panda.core.String)
org$pandalanguage$pandac$FixedArray* $tmp1955 = *(&local113);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1955));
// unreffing parameters
*(&local113) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp1953;
block198:;
panda$core$Int64 $tmp1956 = (panda$core$Int64) {45};
panda$core$Bit $tmp1957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1956);
bool $tmp1958 = $tmp1957.value;
if ($tmp1958) goto block199; else goto block200;
block199:;
org$pandalanguage$pandac$Position* $tmp1959 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1960 = *$tmp1959;
panda$core$String** $tmp1961 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1962 = *$tmp1961;
*(&local114) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1962));
panda$core$String* $tmp1963 = *(&local114);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1963));
*(&local114) = $tmp1962;
// line 565
panda$core$String* $tmp1964 = *(&local114);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1964));
panda$core$String* $tmp1965 = *(&local114);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1965));
// unreffing name
*(&local114) = ((panda$core$String*) NULL);
return $tmp1964;
block200:;
panda$core$Int64 $tmp1966 = (panda$core$Int64) {47};
panda$core$Bit $tmp1967 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1966);
bool $tmp1968 = $tmp1967.value;
if ($tmp1968) goto block201; else goto block202;
block201:;
org$pandalanguage$pandac$Position* $tmp1969 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1970 = *$tmp1969;
panda$core$String** $tmp1971 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1972 = *$tmp1971;
*(&local115) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1972));
panda$core$String* $tmp1973 = *(&local115);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1973));
*(&local115) = $tmp1972;
org$pandalanguage$pandac$ASTNode** $tmp1974 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1975 = *$tmp1974;
*(&local116) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1975));
org$pandalanguage$pandac$ASTNode* $tmp1976 = *(&local116);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1976));
*(&local116) = $tmp1975;
// line 568
org$pandalanguage$pandac$ASTNode* $tmp1977 = *(&local116);
panda$core$Bit $tmp1978 = panda$core$Bit$init$builtin_bit($tmp1977 != NULL);
bool $tmp1979 = $tmp1978.value;
if ($tmp1979) goto block203; else goto block204;
block203:;
// line 569
panda$core$String* $tmp1980 = *(&local115);
panda$core$String* $tmp1981 = panda$core$String$convert$R$panda$core$String($tmp1980);
panda$core$String* $tmp1982 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1981, &$s1983);
org$pandalanguage$pandac$ASTNode* $tmp1984 = *(&local116);
panda$core$String* $tmp1985 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1982, ((panda$core$Object*) $tmp1984));
panda$core$String* $tmp1986 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1985, &$s1987);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1986));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1986));
// unreffing REF($3639:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1985));
// unreffing REF($3638:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1982));
// unreffing REF($3635:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1981));
// unreffing REF($3634:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1988 = *(&local116);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1988));
// unreffing type
*(&local116) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1989 = *(&local115);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1989));
// unreffing name
*(&local115) = ((panda$core$String*) NULL);
return $tmp1986;
block204:;
// line 571
panda$core$String* $tmp1990 = *(&local115);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1990));
org$pandalanguage$pandac$ASTNode* $tmp1991 = *(&local116);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1991));
// unreffing type
*(&local116) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1992 = *(&local115);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1992));
// unreffing name
*(&local115) = ((panda$core$String*) NULL);
return $tmp1990;
block202:;
panda$core$Int64 $tmp1993 = (panda$core$Int64) {46};
panda$core$Bit $tmp1994 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp1993);
bool $tmp1995 = $tmp1994.value;
if ($tmp1995) goto block205; else goto block206;
block205:;
org$pandalanguage$pandac$Position* $tmp1996 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1997 = *$tmp1996;
org$pandalanguage$pandac$FixedArray** $tmp1998 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp1999 = *$tmp1998;
*(&local117) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1999));
org$pandalanguage$pandac$FixedArray* $tmp2000 = *(&local117);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2000));
*(&local117) = $tmp1999;
org$pandalanguage$pandac$ASTNode** $tmp2001 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2002 = *$tmp2001;
*(&local118) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2002));
org$pandalanguage$pandac$ASTNode* $tmp2003 = *(&local118);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2003));
*(&local118) = $tmp2002;
// line 574
org$pandalanguage$pandac$FixedArray* $tmp2004 = *(&local117);
ITable* $tmp2005 = ((panda$collections$CollectionView*) $tmp2004)->$class->itable;
while ($tmp2005->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2005 = $tmp2005->next;
}
$fn2007 $tmp2006 = $tmp2005->methods[1];
panda$core$String* $tmp2008 = $tmp2006(((panda$collections$CollectionView*) $tmp2004));
panda$core$String* $tmp2009 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2010, $tmp2008);
panda$core$String* $tmp2011 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2009, &$s2012);
org$pandalanguage$pandac$ASTNode* $tmp2013 = *(&local118);
panda$core$String* $tmp2014 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2011, ((panda$core$Object*) $tmp2013));
panda$core$String* $tmp2015 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2014, &$s2016);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2015));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2015));
// unreffing REF($3714:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2014));
// unreffing REF($3713:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2011));
// unreffing REF($3710:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2009));
// unreffing REF($3709:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2008));
// unreffing REF($3708:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp2017 = *(&local118);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2017));
// unreffing body
*(&local118) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2018 = *(&local117);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2018));
// unreffing parameters
*(&local117) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp2015;
block206:;
panda$core$Int64 $tmp2019 = (panda$core$Int64) {48};
panda$core$Bit $tmp2020 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp2019);
bool $tmp2021 = $tmp2020.value;
if ($tmp2021) goto block207; else goto block208;
block207:;
org$pandalanguage$pandac$Position* $tmp2022 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2023 = *$tmp2022;
org$pandalanguage$pandac$FixedArray** $tmp2024 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp2025 = *$tmp2024;
*(&local119) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2025));
org$pandalanguage$pandac$FixedArray* $tmp2026 = *(&local119);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2026));
*(&local119) = $tmp2025;
org$pandalanguage$pandac$ASTNode** $tmp2027 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2028 = *$tmp2027;
*(&local120) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2028));
org$pandalanguage$pandac$ASTNode* $tmp2029 = *(&local120);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2029));
*(&local120) = $tmp2028;
// line 577
org$pandalanguage$pandac$FixedArray* $tmp2030 = *(&local119);
ITable* $tmp2031 = ((panda$collections$CollectionView*) $tmp2030)->$class->itable;
while ($tmp2031->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2031 = $tmp2031->next;
}
$fn2033 $tmp2032 = $tmp2031->methods[1];
panda$core$String* $tmp2034 = $tmp2032(((panda$collections$CollectionView*) $tmp2030));
panda$core$String* $tmp2035 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s2036, $tmp2034);
panda$core$String* $tmp2037 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2035, &$s2038);
org$pandalanguage$pandac$ASTNode* $tmp2039 = *(&local120);
panda$core$String* $tmp2040 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2037, ((panda$core$Object*) $tmp2039));
panda$core$String* $tmp2041 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2040, &$s2042);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2041));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2041));
// unreffing REF($3777:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2040));
// unreffing REF($3776:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2037));
// unreffing REF($3773:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2035));
// unreffing REF($3772:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2034));
// unreffing REF($3771:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp2043 = *(&local120);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2043));
// unreffing body
*(&local120) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2044 = *(&local119);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2044));
// unreffing parameters
*(&local119) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp2041;
block208:;
panda$core$Int64 $tmp2045 = (panda$core$Int64) {49};
panda$core$Bit $tmp2046 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp2045);
bool $tmp2047 = $tmp2046.value;
if ($tmp2047) goto block209; else goto block210;
block209:;
org$pandalanguage$pandac$Position* $tmp2048 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2049 = *$tmp2048;
panda$core$String** $tmp2050 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2051 = *$tmp2050;
*(&local121) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2051));
panda$core$String* $tmp2052 = *(&local121);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2052));
*(&local121) = $tmp2051;
// line 580
panda$core$String* $tmp2053 = *(&local121);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2053));
panda$core$String* $tmp2054 = *(&local121);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2054));
// unreffing name
*(&local121) = ((panda$core$String*) NULL);
return $tmp2053;
block210:;
panda$core$Int64 $tmp2055 = (panda$core$Int64) {50};
panda$core$Bit $tmp2056 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp2055);
bool $tmp2057 = $tmp2056.value;
if ($tmp2057) goto block211; else goto block212;
block211:;
org$pandalanguage$pandac$Position* $tmp2058 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2059 = *$tmp2058;
org$pandalanguage$pandac$Variable$Kind* $tmp2060 = (org$pandalanguage$pandac$Variable$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$Variable$Kind $tmp2061 = *$tmp2060;
*(&local122) = $tmp2061;
org$pandalanguage$pandac$FixedArray** $tmp2062 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2063 = *$tmp2062;
*(&local123) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2063));
org$pandalanguage$pandac$FixedArray* $tmp2064 = *(&local123);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2064));
*(&local123) = $tmp2063;
// line 583
panda$core$MutableString* $tmp2065 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp2065);
*(&local124) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2065));
panda$core$MutableString* $tmp2066 = *(&local124);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2066));
*(&local124) = $tmp2065;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2065));
// unreffing REF($3850:panda.core.MutableString)
// line 584
org$pandalanguage$pandac$Variable$Kind $tmp2067 = *(&local122);
panda$core$Int64 $tmp2068 = $tmp2067.$rawValue;
panda$core$Int64 $tmp2069 = (panda$core$Int64) {0};
panda$core$Bit $tmp2070 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2068, $tmp2069);
bool $tmp2071 = $tmp2070.value;
if ($tmp2071) goto block214; else goto block215;
block214:;
// line 585
panda$core$MutableString* $tmp2072 = *(&local124);
panda$core$MutableString$append$panda$core$String($tmp2072, &$s2073);
goto block213;
block215:;
panda$core$Int64 $tmp2074 = (panda$core$Int64) {1};
panda$core$Bit $tmp2075 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2068, $tmp2074);
bool $tmp2076 = $tmp2075.value;
if ($tmp2076) goto block216; else goto block217;
block216:;
// line 586
panda$core$MutableString* $tmp2077 = *(&local124);
panda$core$MutableString$append$panda$core$String($tmp2077, &$s2078);
goto block213;
block217:;
panda$core$Int64 $tmp2079 = (panda$core$Int64) {2};
panda$core$Bit $tmp2080 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2068, $tmp2079);
bool $tmp2081 = $tmp2080.value;
if ($tmp2081) goto block218; else goto block219;
block218:;
// line 587
panda$core$MutableString* $tmp2082 = *(&local124);
panda$core$MutableString$append$panda$core$String($tmp2082, &$s2083);
goto block213;
block219:;
panda$core$Int64 $tmp2084 = (panda$core$Int64) {3};
panda$core$Bit $tmp2085 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2068, $tmp2084);
bool $tmp2086 = $tmp2085.value;
if ($tmp2086) goto block220; else goto block213;
block220:;
// line 588
panda$core$MutableString* $tmp2087 = *(&local124);
panda$core$MutableString$append$panda$core$String($tmp2087, &$s2088);
goto block213;
block213:;
// line 590
panda$core$MutableString* $tmp2089 = *(&local124);
org$pandalanguage$pandac$FixedArray* $tmp2090 = *(&local123);
ITable* $tmp2091 = ((panda$collections$CollectionView*) $tmp2090)->$class->itable;
while ($tmp2091->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2091 = $tmp2091->next;
}
$fn2093 $tmp2092 = $tmp2091->methods[1];
panda$core$String* $tmp2094 = $tmp2092(((panda$collections$CollectionView*) $tmp2090));
panda$core$MutableString$append$panda$core$String($tmp2089, $tmp2094);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2094));
// unreffing REF($3902:panda.core.String)
// line 591
panda$core$MutableString* $tmp2095 = *(&local124);
panda$core$String* $tmp2096 = panda$core$MutableString$finish$R$panda$core$String($tmp2095);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2096));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2096));
// unreffing REF($3909:panda.core.String)
panda$core$MutableString* $tmp2097 = *(&local124);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2097));
// unreffing result
*(&local124) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2098 = *(&local123);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2098));
// unreffing decls
*(&local123) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp2096;
block212:;
panda$core$Int64 $tmp2099 = (panda$core$Int64) {51};
panda$core$Bit $tmp2100 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp2099);
bool $tmp2101 = $tmp2100.value;
if ($tmp2101) goto block221; else goto block222;
block221:;
org$pandalanguage$pandac$Position* $tmp2102 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2103 = *$tmp2102;
org$pandalanguage$pandac$FixedArray** $tmp2104 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp2105 = *$tmp2104;
*(&local125) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2105));
org$pandalanguage$pandac$FixedArray* $tmp2106 = *(&local125);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2106));
*(&local125) = $tmp2105;
org$pandalanguage$pandac$FixedArray** $tmp2107 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2108 = *$tmp2107;
*(&local126) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2108));
org$pandalanguage$pandac$FixedArray* $tmp2109 = *(&local126);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2109));
*(&local126) = $tmp2108;
// line 594
panda$core$MutableString* $tmp2110 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp2110, &$s2111);
*(&local127) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2110));
panda$core$MutableString* $tmp2112 = *(&local127);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2112));
*(&local127) = $tmp2110;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2110));
// unreffing REF($3951:panda.core.MutableString)
// line 595
*(&local128) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2113));
panda$core$String* $tmp2114 = *(&local128);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2114));
*(&local128) = &$s2115;
// line 596
org$pandalanguage$pandac$FixedArray* $tmp2116 = *(&local125);
ITable* $tmp2117 = ((panda$collections$Iterable*) $tmp2116)->$class->itable;
while ($tmp2117->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2117 = $tmp2117->next;
}
$fn2119 $tmp2118 = $tmp2117->methods[0];
panda$collections$Iterator* $tmp2120 = $tmp2118(((panda$collections$Iterable*) $tmp2116));
goto block223;
block223:;
ITable* $tmp2121 = $tmp2120->$class->itable;
while ($tmp2121->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2121 = $tmp2121->next;
}
$fn2123 $tmp2122 = $tmp2121->methods[0];
panda$core$Bit $tmp2124 = $tmp2122($tmp2120);
bool $tmp2125 = $tmp2124.value;
if ($tmp2125) goto block225; else goto block224;
block224:;
*(&local129) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2126 = $tmp2120->$class->itable;
while ($tmp2126->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2126 = $tmp2126->next;
}
$fn2128 $tmp2127 = $tmp2126->methods[1];
panda$core$Object* $tmp2129 = $tmp2127($tmp2120);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2129)));
org$pandalanguage$pandac$ASTNode* $tmp2130 = *(&local129);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2130));
*(&local129) = ((org$pandalanguage$pandac$ASTNode*) $tmp2129);
// line 597
panda$core$MutableString* $tmp2131 = *(&local127);
panda$core$String* $tmp2132 = *(&local128);
panda$core$String* $tmp2133 = panda$core$String$convert$R$panda$core$String($tmp2132);
panda$core$String* $tmp2134 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2133, &$s2135);
org$pandalanguage$pandac$ASTNode* $tmp2136 = *(&local129);
panda$core$String* $tmp2137 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2134, ((panda$core$Object*) $tmp2136));
panda$core$String* $tmp2138 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2137, &$s2139);
panda$core$MutableString$append$panda$core$String($tmp2131, $tmp2138);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2138));
// unreffing REF($4003:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2137));
// unreffing REF($4002:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2134));
// unreffing REF($3999:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2133));
// unreffing REF($3998:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2129);
// unreffing REF($3987:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2140 = *(&local129);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2140));
// unreffing t
*(&local129) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block223;
block225:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2120));
// unreffing REF($3976:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 599
panda$core$MutableString* $tmp2141 = *(&local127);
panda$core$MutableString$append$panda$core$String($tmp2141, &$s2142);
// line 600
org$pandalanguage$pandac$FixedArray* $tmp2143 = *(&local126);
ITable* $tmp2144 = ((panda$collections$Iterable*) $tmp2143)->$class->itable;
while ($tmp2144->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2144 = $tmp2144->next;
}
$fn2146 $tmp2145 = $tmp2144->methods[0];
panda$collections$Iterator* $tmp2147 = $tmp2145(((panda$collections$Iterable*) $tmp2143));
goto block226;
block226:;
ITable* $tmp2148 = $tmp2147->$class->itable;
while ($tmp2148->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2148 = $tmp2148->next;
}
$fn2150 $tmp2149 = $tmp2148->methods[0];
panda$core$Bit $tmp2151 = $tmp2149($tmp2147);
bool $tmp2152 = $tmp2151.value;
if ($tmp2152) goto block228; else goto block227;
block227:;
*(&local130) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2153 = $tmp2147->$class->itable;
while ($tmp2153->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2153 = $tmp2153->next;
}
$fn2155 $tmp2154 = $tmp2153->methods[1];
panda$core$Object* $tmp2156 = $tmp2154($tmp2147);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2156)));
org$pandalanguage$pandac$ASTNode* $tmp2157 = *(&local130);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2157));
*(&local130) = ((org$pandalanguage$pandac$ASTNode*) $tmp2156);
// line 601
panda$core$MutableString* $tmp2158 = *(&local127);
org$pandalanguage$pandac$ASTNode* $tmp2159 = *(&local130);
panda$core$String* $tmp2160 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2161, ((panda$core$Object*) $tmp2159));
panda$core$MutableString$append$panda$core$String($tmp2158, $tmp2160);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2160));
// unreffing REF($4060:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2156);
// unreffing REF($4048:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2162 = *(&local130);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2162));
// unreffing s
*(&local130) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block226;
block228:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2147));
// unreffing REF($4037:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 603
panda$core$MutableString* $tmp2163 = *(&local127);
panda$core$String* $tmp2164 = panda$core$MutableString$finish$R$panda$core$String($tmp2163);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2164));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2164));
// unreffing REF($4079:panda.core.String)
panda$core$String* $tmp2165 = *(&local128);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2165));
// unreffing separator
*(&local128) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp2166 = *(&local127);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2166));
// unreffing result
*(&local127) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2167 = *(&local126);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2167));
// unreffing statements
*(&local126) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2168 = *(&local125);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2168));
// unreffing tests
*(&local125) = ((org$pandalanguage$pandac$FixedArray*) NULL);
return $tmp2164;
block222:;
panda$core$Int64 $tmp2169 = (panda$core$Int64) {52};
panda$core$Bit $tmp2170 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp538, $tmp2169);
bool $tmp2171 = $tmp2170.value;
if ($tmp2171) goto block229; else goto block230;
block229:;
org$pandalanguage$pandac$Position* $tmp2172 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2173 = *$tmp2172;
panda$core$String** $tmp2174 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2175 = *$tmp2174;
*(&local131) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2175));
panda$core$String* $tmp2176 = *(&local131);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2176));
*(&local131) = $tmp2175;
org$pandalanguage$pandac$ASTNode** $tmp2177 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2178 = *$tmp2177;
*(&local132) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2178));
org$pandalanguage$pandac$ASTNode* $tmp2179 = *(&local132);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2179));
*(&local132) = $tmp2178;
org$pandalanguage$pandac$FixedArray** $tmp2180 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp2181 = *$tmp2180;
*(&local133) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2181));
org$pandalanguage$pandac$FixedArray* $tmp2182 = *(&local133);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2182));
*(&local133) = $tmp2181;
// line 606
panda$core$MutableString* $tmp2183 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp2183);
*(&local134) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2183));
panda$core$MutableString* $tmp2184 = *(&local134);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2184));
*(&local134) = $tmp2183;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2183));
// unreffing REF($4140:panda.core.MutableString)
// line 607
panda$core$String* $tmp2185 = *(&local131);
panda$core$Bit $tmp2186 = panda$core$Bit$init$builtin_bit($tmp2185 != NULL);
bool $tmp2187 = $tmp2186.value;
if ($tmp2187) goto block231; else goto block232;
block231:;
// line 608
panda$core$MutableString* $tmp2188 = *(&local134);
panda$core$String* $tmp2189 = *(&local131);
panda$core$String* $tmp2190 = panda$core$String$convert$R$panda$core$String($tmp2189);
panda$core$String* $tmp2191 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2190, &$s2192);
panda$core$MutableString$append$panda$core$String($tmp2188, $tmp2191);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2191));
// unreffing REF($4163:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2190));
// unreffing REF($4162:panda.core.String)
goto block232;
block232:;
// line 610
panda$core$MutableString* $tmp2193 = *(&local134);
org$pandalanguage$pandac$ASTNode* $tmp2194 = *(&local132);
panda$core$String* $tmp2195 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2196, ((panda$core$Object*) $tmp2194));
panda$core$String* $tmp2197 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2195, &$s2198);
panda$core$MutableString$append$panda$core$String($tmp2193, $tmp2197);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2197));
// unreffing REF($4177:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2195));
// unreffing REF($4176:panda.core.String)
// line 611
org$pandalanguage$pandac$FixedArray* $tmp2199 = *(&local133);
ITable* $tmp2200 = ((panda$collections$Iterable*) $tmp2199)->$class->itable;
while ($tmp2200->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2200 = $tmp2200->next;
}
$fn2202 $tmp2201 = $tmp2200->methods[0];
panda$collections$Iterator* $tmp2203 = $tmp2201(((panda$collections$Iterable*) $tmp2199));
goto block233;
block233:;
ITable* $tmp2204 = $tmp2203->$class->itable;
while ($tmp2204->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2204 = $tmp2204->next;
}
$fn2206 $tmp2205 = $tmp2204->methods[0];
panda$core$Bit $tmp2207 = $tmp2205($tmp2203);
bool $tmp2208 = $tmp2207.value;
if ($tmp2208) goto block235; else goto block234;
block234:;
*(&local135) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2209 = $tmp2203->$class->itable;
while ($tmp2209->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2209 = $tmp2209->next;
}
$fn2211 $tmp2210 = $tmp2209->methods[1];
panda$core$Object* $tmp2212 = $tmp2210($tmp2203);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2212)));
org$pandalanguage$pandac$ASTNode* $tmp2213 = *(&local135);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2213));
*(&local135) = ((org$pandalanguage$pandac$ASTNode*) $tmp2212);
// line 612
panda$core$MutableString* $tmp2214 = *(&local134);
org$pandalanguage$pandac$ASTNode* $tmp2215 = *(&local135);
panda$core$String* $tmp2216 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp2215), &$s2217);
panda$core$MutableString$append$panda$core$String($tmp2214, $tmp2216);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2216));
// unreffing REF($4213:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2212);
// unreffing REF($4201:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2218 = *(&local135);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2218));
// unreffing s
*(&local135) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block233;
block235:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2203));
// unreffing REF($4190:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 614
panda$core$MutableString* $tmp2219 = *(&local134);
panda$core$MutableString$append$panda$core$String($tmp2219, &$s2220);
// line 615
panda$core$MutableString* $tmp2221 = *(&local134);
panda$core$String* $tmp2222 = panda$core$MutableString$finish$R$panda$core$String($tmp2221);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2222));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2222));
// unreffing REF($4235:panda.core.String)
panda$core$MutableString* $tmp2223 = *(&local134);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2223));
// unreffing result
*(&local134) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2224 = *(&local133);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2224));
// unreffing statements
*(&local133) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2225 = *(&local132);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2225));
// unreffing test
*(&local132) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2226 = *(&local131);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2226));
// unreffing label
*(&local131) = ((panda$core$String*) NULL);
return $tmp2222;
block230:;
// line 618
panda$core$Bit $tmp2227 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2228 = $tmp2227.value;
if ($tmp2228) goto block236; else goto block237;
block237:;
panda$core$Int64 $tmp2229 = (panda$core$Int64) {618};
panda$core$Int64* $tmp2230 = &param0->$rawValue;
panda$core$Int64 $tmp2231 = *$tmp2230;
panda$core$Int64$wrapper* $tmp2232;
$tmp2232 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp2232->value = $tmp2231;
panda$core$String* $tmp2233 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2234, ((panda$core$Object*) $tmp2232));
panda$core$String* $tmp2235 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2233, &$s2236);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2237, $tmp2229, $tmp2235);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2235));
// unreffing REF($4271:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2233));
// unreffing REF($4270:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2232));
// unreffing REF($4269:panda.core.Object)
abort(); // unreachable
block236:;
goto block1;
block1:;
panda$core$Bit $tmp2238 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2239 = $tmp2238.value;
if ($tmp2239) goto block238; else goto block239;
block239:;
panda$core$Int64 $tmp2240 = (panda$core$Int64) {257};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2241, $tmp2240, &$s2242);
abort(); // unreachable
block238:;
abort(); // unreachable

}
void org$pandalanguage$pandac$ASTNode$cleanup(org$pandalanguage$pandac$ASTNode* param0) {

org$pandalanguage$pandac$Position local0;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
org$pandalanguage$pandac$Position local4;
org$pandalanguage$pandac$FixedArray* local5 = NULL;
org$pandalanguage$pandac$Position local6;
org$pandalanguage$pandac$ASTNode* local7 = NULL;
org$pandalanguage$pandac$ASTNode* local8 = NULL;
org$pandalanguage$pandac$Position local9;
org$pandalanguage$pandac$ASTNode* local10 = NULL;
org$pandalanguage$pandac$Position local11;
org$pandalanguage$pandac$Position local12;
org$pandalanguage$pandac$ASTNode* local13 = NULL;
org$pandalanguage$pandac$parser$Token$Kind local14;
org$pandalanguage$pandac$ASTNode* local15 = NULL;
org$pandalanguage$pandac$Position local16;
panda$core$Bit local17;
org$pandalanguage$pandac$Position local18;
org$pandalanguage$pandac$FixedArray* local19 = NULL;
org$pandalanguage$pandac$Position local20;
panda$core$String* local21 = NULL;
org$pandalanguage$pandac$Position local22;
org$pandalanguage$pandac$ASTNode* local23 = NULL;
org$pandalanguage$pandac$FixedArray* local24 = NULL;
org$pandalanguage$pandac$Position local25;
org$pandalanguage$pandac$ASTNode* local26 = NULL;
panda$core$String* local27 = NULL;
org$pandalanguage$pandac$FixedArray* local28 = NULL;
org$pandalanguage$pandac$Position local29;
org$pandalanguage$pandac$ASTNode* local30 = NULL;
org$pandalanguage$pandac$ChoiceCase* local31 = NULL;
panda$core$Int64 local32;
org$pandalanguage$pandac$Position local33;
org$pandalanguage$pandac$ASTNode* local34 = NULL;
org$pandalanguage$pandac$FixedArray* local35 = NULL;
org$pandalanguage$pandac$ClassDecl$Kind local36;
panda$core$String* local37 = NULL;
org$pandalanguage$pandac$FixedArray* local38 = NULL;
org$pandalanguage$pandac$FixedArray* local39 = NULL;
org$pandalanguage$pandac$FixedArray* local40 = NULL;
org$pandalanguage$pandac$Position local41;
panda$core$String* local42 = NULL;
org$pandalanguage$pandac$Position local43;
org$pandalanguage$pandac$ASTNode* local44 = NULL;
org$pandalanguage$pandac$ASTNode* local45 = NULL;
org$pandalanguage$pandac$Position local46;
panda$core$String* local47 = NULL;
org$pandalanguage$pandac$FixedArray* local48 = NULL;
org$pandalanguage$pandac$ASTNode* local49 = NULL;
org$pandalanguage$pandac$Position local50;
org$pandalanguage$pandac$ASTNode* local51 = NULL;
panda$core$String* local52 = NULL;
org$pandalanguage$pandac$Position local53;
org$pandalanguage$pandac$ASTNode* local54 = NULL;
panda$core$String* local55 = NULL;
org$pandalanguage$pandac$FixedArray* local56 = NULL;
org$pandalanguage$pandac$Position local57;
org$pandalanguage$pandac$ASTNode* local58 = NULL;
org$pandalanguage$pandac$FixedArray* local59 = NULL;
org$pandalanguage$pandac$ASTNode* local60 = NULL;
org$pandalanguage$pandac$FixedArray* local61 = NULL;
org$pandalanguage$pandac$Position local62;
panda$core$String* local63 = NULL;
org$pandalanguage$pandac$ASTNode* local64 = NULL;
org$pandalanguage$pandac$ASTNode* local65 = NULL;
org$pandalanguage$pandac$FixedArray* local66 = NULL;
org$pandalanguage$pandac$Position local67;
panda$core$String* local68 = NULL;
org$pandalanguage$pandac$FixedArray* local69 = NULL;
org$pandalanguage$pandac$Position local70;
panda$core$String* local71 = NULL;
org$pandalanguage$pandac$Position local72;
panda$core$String* local73 = NULL;
org$pandalanguage$pandac$FixedArray* local74 = NULL;
org$pandalanguage$pandac$Position local75;
org$pandalanguage$pandac$ASTNode* local76 = NULL;
org$pandalanguage$pandac$FixedArray* local77 = NULL;
org$pandalanguage$pandac$ASTNode* local78 = NULL;
org$pandalanguage$pandac$Position local79;
panda$core$UInt64 local80;
org$pandalanguage$pandac$Position local81;
org$pandalanguage$pandac$IR$Value* local82 = NULL;
org$pandalanguage$pandac$Position local83;
panda$core$String* local84 = NULL;
org$pandalanguage$pandac$FixedArray* local85 = NULL;
org$pandalanguage$pandac$Position local86;
org$pandalanguage$pandac$ASTNode* local87 = NULL;
org$pandalanguage$pandac$FixedArray* local88 = NULL;
org$pandalanguage$pandac$FixedArray* local89 = NULL;
org$pandalanguage$pandac$Position local90;
org$pandalanguage$pandac$ASTNode* local91 = NULL;
org$pandalanguage$pandac$FixedArray* local92 = NULL;
org$pandalanguage$pandac$MethodDecl$Kind local93;
panda$core$String* local94 = NULL;
org$pandalanguage$pandac$FixedArray* local95 = NULL;
org$pandalanguage$pandac$FixedArray* local96 = NULL;
org$pandalanguage$pandac$ASTNode* local97 = NULL;
org$pandalanguage$pandac$FixedArray* local98 = NULL;
org$pandalanguage$pandac$Position local99;
org$pandalanguage$pandac$parser$Token$Kind local100;
org$pandalanguage$pandac$FixedArray* local101 = NULL;
org$pandalanguage$pandac$ASTNode* local102 = NULL;
org$pandalanguage$pandac$Position local103;
org$pandalanguage$pandac$Position local104;
org$pandalanguage$pandac$ASTNode* local105 = NULL;
org$pandalanguage$pandac$Position local106;
panda$core$String* local107 = NULL;
org$pandalanguage$pandac$Position local108;
panda$core$String* local109 = NULL;
org$pandalanguage$pandac$ASTNode* local110 = NULL;
org$pandalanguage$pandac$Position local111;
org$pandalanguage$pandac$parser$Token$Kind local112;
org$pandalanguage$pandac$ASTNode* local113 = NULL;
org$pandalanguage$pandac$Position local114;
org$pandalanguage$pandac$ASTNode* local115 = NULL;
panda$core$Bit local116;
org$pandalanguage$pandac$ASTNode* local117 = NULL;
org$pandalanguage$pandac$ASTNode* local118 = NULL;
org$pandalanguage$pandac$Position local119;
panda$core$Real64 local120;
org$pandalanguage$pandac$Position local121;
panda$core$String* local122 = NULL;
org$pandalanguage$pandac$Position local123;
org$pandalanguage$pandac$ASTNode* local124 = NULL;
org$pandalanguage$pandac$Position local125;
org$pandalanguage$pandac$Position local126;
panda$core$String* local127 = NULL;
org$pandalanguage$pandac$Position local128;
org$pandalanguage$pandac$Position local129;
org$pandalanguage$pandac$FixedArray* local130 = NULL;
org$pandalanguage$pandac$Position local131;
org$pandalanguage$pandac$FixedArray* local132 = NULL;
org$pandalanguage$pandac$Position local133;
panda$core$String* local134 = NULL;
org$pandalanguage$pandac$Position local135;
org$pandalanguage$pandac$FixedArray* local136 = NULL;
org$pandalanguage$pandac$ASTNode* local137 = NULL;
org$pandalanguage$pandac$Position local138;
panda$core$String* local139 = NULL;
org$pandalanguage$pandac$ASTNode* local140 = NULL;
org$pandalanguage$pandac$Position local141;
org$pandalanguage$pandac$FixedArray* local142 = NULL;
org$pandalanguage$pandac$ASTNode* local143 = NULL;
org$pandalanguage$pandac$Position local144;
panda$core$String* local145 = NULL;
org$pandalanguage$pandac$Position local146;
org$pandalanguage$pandac$Variable$Kind local147;
org$pandalanguage$pandac$FixedArray* local148 = NULL;
org$pandalanguage$pandac$Position local149;
org$pandalanguage$pandac$FixedArray* local150 = NULL;
org$pandalanguage$pandac$FixedArray* local151 = NULL;
org$pandalanguage$pandac$Position local152;
panda$core$String* local153 = NULL;
org$pandalanguage$pandac$ASTNode* local154 = NULL;
org$pandalanguage$pandac$FixedArray* local155 = NULL;
// line 6
panda$core$Int64* $tmp2243 = &param0->$rawValue;
panda$core$Int64 $tmp2244 = *$tmp2243;
panda$core$Int64 $tmp2245 = (panda$core$Int64) {0};
panda$core$Bit $tmp2246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2245);
bool $tmp2247 = $tmp2246.value;
if ($tmp2247) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp2248 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2249 = *$tmp2248;
*(&local0) = $tmp2249;
panda$core$String** $tmp2250 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2251 = *$tmp2250;
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2251));
panda$core$String* $tmp2252 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2252));
*(&local1) = $tmp2251;
panda$core$String** $tmp2253 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp2254 = *$tmp2253;
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2254));
panda$core$String* $tmp2255 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2255));
*(&local2) = $tmp2254;
org$pandalanguage$pandac$ASTNode** $tmp2256 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2257 = *$tmp2256;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2257));
org$pandalanguage$pandac$ASTNode* $tmp2258 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2258));
*(&local3) = $tmp2257;
// line 1
panda$core$String* $tmp2259 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2259));
// line 1
panda$core$String* $tmp2260 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2260));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2261 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2261));
org$pandalanguage$pandac$ASTNode* $tmp2262 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2262));
// unreffing _f3
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2263 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2263));
// unreffing _f2
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp2264 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2264));
// unreffing _f1
*(&local1) = ((panda$core$String*) NULL);
goto block1;
block3:;
panda$core$Int64 $tmp2265 = (panda$core$Int64) {1};
panda$core$Bit $tmp2266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2265);
bool $tmp2267 = $tmp2266.value;
if ($tmp2267) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Position* $tmp2268 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2269 = *$tmp2268;
*(&local4) = $tmp2269;
org$pandalanguage$pandac$FixedArray** $tmp2270 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp2271 = *$tmp2270;
*(&local5) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2271));
org$pandalanguage$pandac$FixedArray* $tmp2272 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2272));
*(&local5) = $tmp2271;
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2273 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2273));
org$pandalanguage$pandac$FixedArray* $tmp2274 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2274));
// unreffing _f1
*(&local5) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block1;
block5:;
panda$core$Int64 $tmp2275 = (panda$core$Int64) {2};
panda$core$Bit $tmp2276 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2275);
bool $tmp2277 = $tmp2276.value;
if ($tmp2277) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$Position* $tmp2278 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2279 = *$tmp2278;
*(&local6) = $tmp2279;
org$pandalanguage$pandac$ASTNode** $tmp2280 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2281 = *$tmp2280;
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2281));
org$pandalanguage$pandac$ASTNode* $tmp2282 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2282));
*(&local7) = $tmp2281;
org$pandalanguage$pandac$ASTNode** $tmp2283 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2284 = *$tmp2283;
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2284));
org$pandalanguage$pandac$ASTNode* $tmp2285 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2285));
*(&local8) = $tmp2284;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2286 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2286));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2287 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2287));
org$pandalanguage$pandac$ASTNode* $tmp2288 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2288));
// unreffing _f2
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2289 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2289));
// unreffing _f1
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block7:;
panda$core$Int64 $tmp2290 = (panda$core$Int64) {3};
panda$core$Bit $tmp2291 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2290);
bool $tmp2292 = $tmp2291.value;
if ($tmp2292) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$Position* $tmp2293 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2294 = *$tmp2293;
*(&local9) = $tmp2294;
org$pandalanguage$pandac$ASTNode** $tmp2295 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2296 = *$tmp2295;
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2296));
org$pandalanguage$pandac$ASTNode* $tmp2297 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2297));
*(&local10) = $tmp2296;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2298 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2298));
org$pandalanguage$pandac$ASTNode* $tmp2299 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2299));
// unreffing _f1
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block9:;
panda$core$Int64 $tmp2300 = (panda$core$Int64) {4};
panda$core$Bit $tmp2301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2300);
bool $tmp2302 = $tmp2301.value;
if ($tmp2302) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Position* $tmp2303 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2304 = *$tmp2303;
*(&local11) = $tmp2304;
goto block1;
block11:;
panda$core$Int64 $tmp2305 = (panda$core$Int64) {5};
panda$core$Bit $tmp2306 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2305);
bool $tmp2307 = $tmp2306.value;
if ($tmp2307) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Position* $tmp2308 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2309 = *$tmp2308;
*(&local12) = $tmp2309;
org$pandalanguage$pandac$ASTNode** $tmp2310 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2311 = *$tmp2310;
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2311));
org$pandalanguage$pandac$ASTNode* $tmp2312 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2312));
*(&local13) = $tmp2311;
org$pandalanguage$pandac$parser$Token$Kind* $tmp2313 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 24);
org$pandalanguage$pandac$parser$Token$Kind $tmp2314 = *$tmp2313;
*(&local14) = $tmp2314;
org$pandalanguage$pandac$ASTNode** $tmp2315 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2316 = *$tmp2315;
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2316));
org$pandalanguage$pandac$ASTNode* $tmp2317 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2317));
*(&local15) = $tmp2316;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2318 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2318));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2319 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2319));
org$pandalanguage$pandac$ASTNode* $tmp2320 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2320));
// unreffing _f3
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2321 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2321));
// unreffing _f1
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block13:;
panda$core$Int64 $tmp2322 = (panda$core$Int64) {6};
panda$core$Bit $tmp2323 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2322);
bool $tmp2324 = $tmp2323.value;
if ($tmp2324) goto block14; else goto block15;
block14:;
org$pandalanguage$pandac$Position* $tmp2325 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2326 = *$tmp2325;
*(&local16) = $tmp2326;
panda$core$Bit* $tmp2327 = (panda$core$Bit*) (param0->$data + 16);
panda$core$Bit $tmp2328 = *$tmp2327;
*(&local17) = $tmp2328;
goto block1;
block15:;
panda$core$Int64 $tmp2329 = (panda$core$Int64) {7};
panda$core$Bit $tmp2330 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2329);
bool $tmp2331 = $tmp2330.value;
if ($tmp2331) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$Position* $tmp2332 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2333 = *$tmp2332;
*(&local18) = $tmp2333;
org$pandalanguage$pandac$FixedArray** $tmp2334 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp2335 = *$tmp2334;
*(&local19) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2335));
org$pandalanguage$pandac$FixedArray* $tmp2336 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2336));
*(&local19) = $tmp2335;
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2337 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2337));
org$pandalanguage$pandac$FixedArray* $tmp2338 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2338));
// unreffing _f1
*(&local19) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block1;
block17:;
panda$core$Int64 $tmp2339 = (panda$core$Int64) {8};
panda$core$Bit $tmp2340 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2339);
bool $tmp2341 = $tmp2340.value;
if ($tmp2341) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$Position* $tmp2342 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2343 = *$tmp2342;
*(&local20) = $tmp2343;
panda$core$String** $tmp2344 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2345 = *$tmp2344;
*(&local21) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2345));
panda$core$String* $tmp2346 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2346));
*(&local21) = $tmp2345;
// line 1
panda$core$String* $tmp2347 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2347));
panda$core$String* $tmp2348 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2348));
// unreffing _f1
*(&local21) = ((panda$core$String*) NULL);
goto block1;
block19:;
panda$core$Int64 $tmp2349 = (panda$core$Int64) {9};
panda$core$Bit $tmp2350 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2349);
bool $tmp2351 = $tmp2350.value;
if ($tmp2351) goto block20; else goto block21;
block20:;
org$pandalanguage$pandac$Position* $tmp2352 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2353 = *$tmp2352;
*(&local22) = $tmp2353;
org$pandalanguage$pandac$ASTNode** $tmp2354 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2355 = *$tmp2354;
*(&local23) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2355));
org$pandalanguage$pandac$ASTNode* $tmp2356 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2356));
*(&local23) = $tmp2355;
org$pandalanguage$pandac$FixedArray** $tmp2357 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2358 = *$tmp2357;
*(&local24) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2358));
org$pandalanguage$pandac$FixedArray* $tmp2359 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2359));
*(&local24) = $tmp2358;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2360 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2360));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2361 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2361));
org$pandalanguage$pandac$FixedArray* $tmp2362 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2362));
// unreffing _f2
*(&local24) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2363 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2363));
// unreffing _f1
*(&local23) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block21:;
panda$core$Int64 $tmp2364 = (panda$core$Int64) {10};
panda$core$Bit $tmp2365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2364);
bool $tmp2366 = $tmp2365.value;
if ($tmp2366) goto block22; else goto block23;
block22:;
org$pandalanguage$pandac$Position* $tmp2367 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2368 = *$tmp2367;
*(&local25) = $tmp2368;
org$pandalanguage$pandac$ASTNode** $tmp2369 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2370 = *$tmp2369;
*(&local26) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2370));
org$pandalanguage$pandac$ASTNode* $tmp2371 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2371));
*(&local26) = $tmp2370;
panda$core$String** $tmp2372 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp2373 = *$tmp2372;
*(&local27) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2373));
panda$core$String* $tmp2374 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2374));
*(&local27) = $tmp2373;
org$pandalanguage$pandac$FixedArray** $tmp2375 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp2376 = *$tmp2375;
*(&local28) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2376));
org$pandalanguage$pandac$FixedArray* $tmp2377 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2377));
*(&local28) = $tmp2376;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2378 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2378));
// line 1
panda$core$String* $tmp2379 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2379));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2380 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2380));
org$pandalanguage$pandac$FixedArray* $tmp2381 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2381));
// unreffing _f3
*(&local28) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp2382 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2382));
// unreffing _f2
*(&local27) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2383 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2383));
// unreffing _f1
*(&local26) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block23:;
panda$core$Int64 $tmp2384 = (panda$core$Int64) {11};
panda$core$Bit $tmp2385 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2384);
bool $tmp2386 = $tmp2385.value;
if ($tmp2386) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Position* $tmp2387 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2388 = *$tmp2387;
*(&local29) = $tmp2388;
org$pandalanguage$pandac$ASTNode** $tmp2389 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2390 = *$tmp2389;
*(&local30) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2390));
org$pandalanguage$pandac$ASTNode* $tmp2391 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2391));
*(&local30) = $tmp2390;
org$pandalanguage$pandac$ChoiceCase** $tmp2392 = (org$pandalanguage$pandac$ChoiceCase**) (param0->$data + 24);
org$pandalanguage$pandac$ChoiceCase* $tmp2393 = *$tmp2392;
*(&local31) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2393));
org$pandalanguage$pandac$ChoiceCase* $tmp2394 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2394));
*(&local31) = $tmp2393;
panda$core$Int64* $tmp2395 = (panda$core$Int64*) (param0->$data + 32);
panda$core$Int64 $tmp2396 = *$tmp2395;
*(&local32) = $tmp2396;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2397 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2397));
// line 1
org$pandalanguage$pandac$ChoiceCase* $tmp2398 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2398));
org$pandalanguage$pandac$ChoiceCase* $tmp2399 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2399));
// unreffing _f2
*(&local31) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2400 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2400));
// unreffing _f1
*(&local30) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block25:;
panda$core$Int64 $tmp2401 = (panda$core$Int64) {12};
panda$core$Bit $tmp2402 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2401);
bool $tmp2403 = $tmp2402.value;
if ($tmp2403) goto block26; else goto block27;
block26:;
org$pandalanguage$pandac$Position* $tmp2404 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2405 = *$tmp2404;
*(&local33) = $tmp2405;
org$pandalanguage$pandac$ASTNode** $tmp2406 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2407 = *$tmp2406;
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2407));
org$pandalanguage$pandac$ASTNode* $tmp2408 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2408));
*(&local34) = $tmp2407;
org$pandalanguage$pandac$FixedArray** $tmp2409 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2410 = *$tmp2409;
*(&local35) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2410));
org$pandalanguage$pandac$FixedArray* $tmp2411 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2411));
*(&local35) = $tmp2410;
org$pandalanguage$pandac$ClassDecl$Kind* $tmp2412 = (org$pandalanguage$pandac$ClassDecl$Kind*) (param0->$data + 32);
org$pandalanguage$pandac$ClassDecl$Kind $tmp2413 = *$tmp2412;
*(&local36) = $tmp2413;
panda$core$String** $tmp2414 = (panda$core$String**) (param0->$data + 40);
panda$core$String* $tmp2415 = *$tmp2414;
*(&local37) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2415));
panda$core$String* $tmp2416 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2416));
*(&local37) = $tmp2415;
org$pandalanguage$pandac$FixedArray** $tmp2417 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 48);
org$pandalanguage$pandac$FixedArray* $tmp2418 = *$tmp2417;
*(&local38) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2418));
org$pandalanguage$pandac$FixedArray* $tmp2419 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2419));
*(&local38) = $tmp2418;
org$pandalanguage$pandac$FixedArray** $tmp2420 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 56);
org$pandalanguage$pandac$FixedArray* $tmp2421 = *$tmp2420;
*(&local39) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2421));
org$pandalanguage$pandac$FixedArray* $tmp2422 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2422));
*(&local39) = $tmp2421;
org$pandalanguage$pandac$FixedArray** $tmp2423 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 64);
org$pandalanguage$pandac$FixedArray* $tmp2424 = *$tmp2423;
*(&local40) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2424));
org$pandalanguage$pandac$FixedArray* $tmp2425 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2425));
*(&local40) = $tmp2424;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2426 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2426));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2427 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2427));
// line 1
panda$core$String* $tmp2428 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2428));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2429 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2429));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2430 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2430));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2431 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2431));
org$pandalanguage$pandac$FixedArray* $tmp2432 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2432));
// unreffing _f7
*(&local40) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2433 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2433));
// unreffing _f6
*(&local39) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2434 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2434));
// unreffing _f5
*(&local38) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp2435 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2435));
// unreffing _f4
*(&local37) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2436 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2436));
// unreffing _f2
*(&local35) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2437 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2437));
// unreffing _f1
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block27:;
panda$core$Int64 $tmp2438 = (panda$core$Int64) {13};
panda$core$Bit $tmp2439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2438);
bool $tmp2440 = $tmp2439.value;
if ($tmp2440) goto block28; else goto block29;
block28:;
org$pandalanguage$pandac$Position* $tmp2441 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2442 = *$tmp2441;
*(&local41) = $tmp2442;
panda$core$String** $tmp2443 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2444 = *$tmp2443;
*(&local42) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2444));
panda$core$String* $tmp2445 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2445));
*(&local42) = $tmp2444;
// line 1
panda$core$String* $tmp2446 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2446));
panda$core$String* $tmp2447 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2447));
// unreffing _f1
*(&local42) = ((panda$core$String*) NULL);
goto block1;
block29:;
panda$core$Int64 $tmp2448 = (panda$core$Int64) {14};
panda$core$Bit $tmp2449 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2448);
bool $tmp2450 = $tmp2449.value;
if ($tmp2450) goto block30; else goto block31;
block30:;
org$pandalanguage$pandac$Position* $tmp2451 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2452 = *$tmp2451;
*(&local43) = $tmp2452;
org$pandalanguage$pandac$ASTNode** $tmp2453 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2454 = *$tmp2453;
*(&local44) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2454));
org$pandalanguage$pandac$ASTNode* $tmp2455 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2455));
*(&local44) = $tmp2454;
org$pandalanguage$pandac$ASTNode** $tmp2456 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2457 = *$tmp2456;
*(&local45) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2457));
org$pandalanguage$pandac$ASTNode* $tmp2458 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2458));
*(&local45) = $tmp2457;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2459 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2459));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2460 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2460));
org$pandalanguage$pandac$ASTNode* $tmp2461 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2461));
// unreffing _f2
*(&local45) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2462 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2462));
// unreffing _f1
*(&local44) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block31:;
panda$core$Int64 $tmp2463 = (panda$core$Int64) {15};
panda$core$Bit $tmp2464 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2463);
bool $tmp2465 = $tmp2464.value;
if ($tmp2465) goto block32; else goto block33;
block32:;
org$pandalanguage$pandac$Position* $tmp2466 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2467 = *$tmp2466;
*(&local46) = $tmp2467;
panda$core$String** $tmp2468 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2469 = *$tmp2468;
*(&local47) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2469));
panda$core$String* $tmp2470 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2470));
*(&local47) = $tmp2469;
org$pandalanguage$pandac$FixedArray** $tmp2471 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2472 = *$tmp2471;
*(&local48) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2472));
org$pandalanguage$pandac$FixedArray* $tmp2473 = *(&local48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2473));
*(&local48) = $tmp2472;
org$pandalanguage$pandac$ASTNode** $tmp2474 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2475 = *$tmp2474;
*(&local49) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2475));
org$pandalanguage$pandac$ASTNode* $tmp2476 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2476));
*(&local49) = $tmp2475;
// line 1
panda$core$String* $tmp2477 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2477));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2478 = *(&local48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2478));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2479 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2479));
org$pandalanguage$pandac$ASTNode* $tmp2480 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2480));
// unreffing _f3
*(&local49) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2481 = *(&local48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2481));
// unreffing _f2
*(&local48) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp2482 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2482));
// unreffing _f1
*(&local47) = ((panda$core$String*) NULL);
goto block1;
block33:;
panda$core$Int64 $tmp2483 = (panda$core$Int64) {16};
panda$core$Bit $tmp2484 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2483);
bool $tmp2485 = $tmp2484.value;
if ($tmp2485) goto block34; else goto block35;
block34:;
org$pandalanguage$pandac$Position* $tmp2486 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2487 = *$tmp2486;
*(&local50) = $tmp2487;
org$pandalanguage$pandac$ASTNode** $tmp2488 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2489 = *$tmp2488;
*(&local51) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2489));
org$pandalanguage$pandac$ASTNode* $tmp2490 = *(&local51);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2490));
*(&local51) = $tmp2489;
panda$core$String** $tmp2491 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp2492 = *$tmp2491;
*(&local52) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2492));
panda$core$String* $tmp2493 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2493));
*(&local52) = $tmp2492;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2494 = *(&local51);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2494));
// line 1
panda$core$String* $tmp2495 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2495));
panda$core$String* $tmp2496 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2496));
// unreffing _f2
*(&local52) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2497 = *(&local51);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2497));
// unreffing _f1
*(&local51) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block35:;
panda$core$Int64 $tmp2498 = (panda$core$Int64) {17};
panda$core$Bit $tmp2499 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2498);
bool $tmp2500 = $tmp2499.value;
if ($tmp2500) goto block36; else goto block37;
block36:;
org$pandalanguage$pandac$Position* $tmp2501 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2502 = *$tmp2501;
*(&local53) = $tmp2502;
org$pandalanguage$pandac$ASTNode** $tmp2503 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2504 = *$tmp2503;
*(&local54) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2504));
org$pandalanguage$pandac$ASTNode* $tmp2505 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2505));
*(&local54) = $tmp2504;
panda$core$String** $tmp2506 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp2507 = *$tmp2506;
*(&local55) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2507));
panda$core$String* $tmp2508 = *(&local55);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2508));
*(&local55) = $tmp2507;
org$pandalanguage$pandac$FixedArray** $tmp2509 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp2510 = *$tmp2509;
*(&local56) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2510));
org$pandalanguage$pandac$FixedArray* $tmp2511 = *(&local56);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2511));
*(&local56) = $tmp2510;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2512 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2512));
// line 1
panda$core$String* $tmp2513 = *(&local55);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2513));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2514 = *(&local56);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2514));
org$pandalanguage$pandac$FixedArray* $tmp2515 = *(&local56);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2515));
// unreffing _f3
*(&local56) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp2516 = *(&local55);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2516));
// unreffing _f2
*(&local55) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2517 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2517));
// unreffing _f1
*(&local54) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block37:;
panda$core$Int64 $tmp2518 = (panda$core$Int64) {18};
panda$core$Bit $tmp2519 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2518);
bool $tmp2520 = $tmp2519.value;
if ($tmp2520) goto block38; else goto block39;
block38:;
org$pandalanguage$pandac$Position* $tmp2521 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2522 = *$tmp2521;
*(&local57) = $tmp2522;
org$pandalanguage$pandac$ASTNode** $tmp2523 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2524 = *$tmp2523;
*(&local58) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2524));
org$pandalanguage$pandac$ASTNode* $tmp2525 = *(&local58);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2525));
*(&local58) = $tmp2524;
org$pandalanguage$pandac$FixedArray** $tmp2526 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2527 = *$tmp2526;
*(&local59) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2527));
org$pandalanguage$pandac$FixedArray* $tmp2528 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2528));
*(&local59) = $tmp2527;
org$pandalanguage$pandac$ASTNode** $tmp2529 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2530 = *$tmp2529;
*(&local60) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2530));
org$pandalanguage$pandac$ASTNode* $tmp2531 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2531));
*(&local60) = $tmp2530;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2532 = *(&local58);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2532));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2533 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2533));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2534 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2534));
org$pandalanguage$pandac$ASTNode* $tmp2535 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2535));
// unreffing _f3
*(&local60) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2536 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2536));
// unreffing _f2
*(&local59) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2537 = *(&local58);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2537));
// unreffing _f1
*(&local58) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block39:;
panda$core$Int64 $tmp2538 = (panda$core$Int64) {19};
panda$core$Bit $tmp2539 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2538);
bool $tmp2540 = $tmp2539.value;
if ($tmp2540) goto block40; else goto block41;
block40:;
org$pandalanguage$pandac$FixedArray** $tmp2541 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 0);
org$pandalanguage$pandac$FixedArray* $tmp2542 = *$tmp2541;
*(&local61) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2542));
org$pandalanguage$pandac$FixedArray* $tmp2543 = *(&local61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2543));
*(&local61) = $tmp2542;
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2544 = *(&local61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2544));
org$pandalanguage$pandac$FixedArray* $tmp2545 = *(&local61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2545));
// unreffing _f0
*(&local61) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block1;
block41:;
panda$core$Int64 $tmp2546 = (panda$core$Int64) {20};
panda$core$Bit $tmp2547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2546);
bool $tmp2548 = $tmp2547.value;
if ($tmp2548) goto block42; else goto block43;
block42:;
org$pandalanguage$pandac$Position* $tmp2549 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2550 = *$tmp2549;
*(&local62) = $tmp2550;
panda$core$String** $tmp2551 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2552 = *$tmp2551;
*(&local63) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2552));
panda$core$String* $tmp2553 = *(&local63);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2553));
*(&local63) = $tmp2552;
org$pandalanguage$pandac$ASTNode** $tmp2554 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2555 = *$tmp2554;
*(&local64) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2555));
org$pandalanguage$pandac$ASTNode* $tmp2556 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2556));
*(&local64) = $tmp2555;
org$pandalanguage$pandac$ASTNode** $tmp2557 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2558 = *$tmp2557;
*(&local65) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2558));
org$pandalanguage$pandac$ASTNode* $tmp2559 = *(&local65);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2559));
*(&local65) = $tmp2558;
org$pandalanguage$pandac$FixedArray** $tmp2560 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 40);
org$pandalanguage$pandac$FixedArray* $tmp2561 = *$tmp2560;
*(&local66) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2561));
org$pandalanguage$pandac$FixedArray* $tmp2562 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2562));
*(&local66) = $tmp2561;
// line 1
panda$core$String* $tmp2563 = *(&local63);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2563));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2564 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2564));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2565 = *(&local65);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2565));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2566 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2566));
org$pandalanguage$pandac$FixedArray* $tmp2567 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2567));
// unreffing _f4
*(&local66) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2568 = *(&local65);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2568));
// unreffing _f3
*(&local65) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2569 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2569));
// unreffing _f2
*(&local64) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2570 = *(&local63);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2570));
// unreffing _f1
*(&local63) = ((panda$core$String*) NULL);
goto block1;
block43:;
panda$core$Int64 $tmp2571 = (panda$core$Int64) {21};
panda$core$Bit $tmp2572 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2571);
bool $tmp2573 = $tmp2572.value;
if ($tmp2573) goto block44; else goto block45;
block44:;
org$pandalanguage$pandac$Position* $tmp2574 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2575 = *$tmp2574;
*(&local67) = $tmp2575;
panda$core$String** $tmp2576 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2577 = *$tmp2576;
*(&local68) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2577));
panda$core$String* $tmp2578 = *(&local68);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2578));
*(&local68) = $tmp2577;
org$pandalanguage$pandac$FixedArray** $tmp2579 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2580 = *$tmp2579;
*(&local69) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2580));
org$pandalanguage$pandac$FixedArray* $tmp2581 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2581));
*(&local69) = $tmp2580;
// line 1
panda$core$String* $tmp2582 = *(&local68);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2582));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2583 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2583));
org$pandalanguage$pandac$FixedArray* $tmp2584 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2584));
// unreffing _f2
*(&local69) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp2585 = *(&local68);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2585));
// unreffing _f1
*(&local68) = ((panda$core$String*) NULL);
goto block1;
block45:;
panda$core$Int64 $tmp2586 = (panda$core$Int64) {22};
panda$core$Bit $tmp2587 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2586);
bool $tmp2588 = $tmp2587.value;
if ($tmp2588) goto block46; else goto block47;
block46:;
org$pandalanguage$pandac$Position* $tmp2589 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2590 = *$tmp2589;
*(&local70) = $tmp2590;
panda$core$String** $tmp2591 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2592 = *$tmp2591;
*(&local71) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2592));
panda$core$String* $tmp2593 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2593));
*(&local71) = $tmp2592;
// line 1
panda$core$String* $tmp2594 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2594));
panda$core$String* $tmp2595 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2595));
// unreffing _f1
*(&local71) = ((panda$core$String*) NULL);
goto block1;
block47:;
panda$core$Int64 $tmp2596 = (panda$core$Int64) {23};
panda$core$Bit $tmp2597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2596);
bool $tmp2598 = $tmp2597.value;
if ($tmp2598) goto block48; else goto block49;
block48:;
org$pandalanguage$pandac$Position* $tmp2599 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2600 = *$tmp2599;
*(&local72) = $tmp2600;
panda$core$String** $tmp2601 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2602 = *$tmp2601;
*(&local73) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2602));
panda$core$String* $tmp2603 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2603));
*(&local73) = $tmp2602;
org$pandalanguage$pandac$FixedArray** $tmp2604 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2605 = *$tmp2604;
*(&local74) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2605));
org$pandalanguage$pandac$FixedArray* $tmp2606 = *(&local74);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2606));
*(&local74) = $tmp2605;
// line 1
panda$core$String* $tmp2607 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2607));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2608 = *(&local74);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2608));
org$pandalanguage$pandac$FixedArray* $tmp2609 = *(&local74);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2609));
// unreffing _f2
*(&local74) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp2610 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2610));
// unreffing _f1
*(&local73) = ((panda$core$String*) NULL);
goto block1;
block49:;
panda$core$Int64 $tmp2611 = (panda$core$Int64) {24};
panda$core$Bit $tmp2612 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2611);
bool $tmp2613 = $tmp2612.value;
if ($tmp2613) goto block50; else goto block51;
block50:;
org$pandalanguage$pandac$Position* $tmp2614 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2615 = *$tmp2614;
*(&local75) = $tmp2615;
org$pandalanguage$pandac$ASTNode** $tmp2616 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2617 = *$tmp2616;
*(&local76) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2617));
org$pandalanguage$pandac$ASTNode* $tmp2618 = *(&local76);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2618));
*(&local76) = $tmp2617;
org$pandalanguage$pandac$FixedArray** $tmp2619 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2620 = *$tmp2619;
*(&local77) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2620));
org$pandalanguage$pandac$FixedArray* $tmp2621 = *(&local77);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2621));
*(&local77) = $tmp2620;
org$pandalanguage$pandac$ASTNode** $tmp2622 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2623 = *$tmp2622;
*(&local78) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2623));
org$pandalanguage$pandac$ASTNode* $tmp2624 = *(&local78);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2624));
*(&local78) = $tmp2623;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2625 = *(&local76);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2625));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2626 = *(&local77);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2626));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2627 = *(&local78);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2627));
org$pandalanguage$pandac$ASTNode* $tmp2628 = *(&local78);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2628));
// unreffing _f3
*(&local78) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2629 = *(&local77);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2629));
// unreffing _f2
*(&local77) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2630 = *(&local76);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2630));
// unreffing _f1
*(&local76) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block51:;
panda$core$Int64 $tmp2631 = (panda$core$Int64) {25};
panda$core$Bit $tmp2632 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2631);
bool $tmp2633 = $tmp2632.value;
if ($tmp2633) goto block52; else goto block53;
block52:;
org$pandalanguage$pandac$Position* $tmp2634 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2635 = *$tmp2634;
*(&local79) = $tmp2635;
panda$core$UInt64* $tmp2636 = (panda$core$UInt64*) (param0->$data + 16);
panda$core$UInt64 $tmp2637 = *$tmp2636;
*(&local80) = $tmp2637;
goto block1;
block53:;
panda$core$Int64 $tmp2638 = (panda$core$Int64) {26};
panda$core$Bit $tmp2639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2638);
bool $tmp2640 = $tmp2639.value;
if ($tmp2640) goto block54; else goto block55;
block54:;
org$pandalanguage$pandac$Position* $tmp2641 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2642 = *$tmp2641;
*(&local81) = $tmp2642;
org$pandalanguage$pandac$IR$Value** $tmp2643 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp2644 = *$tmp2643;
*(&local82) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2644));
org$pandalanguage$pandac$IR$Value* $tmp2645 = *(&local82);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2645));
*(&local82) = $tmp2644;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp2646 = *(&local82);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2646));
org$pandalanguage$pandac$IR$Value* $tmp2647 = *(&local82);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2647));
// unreffing _f1
*(&local82) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block55:;
panda$core$Int64 $tmp2648 = (panda$core$Int64) {27};
panda$core$Bit $tmp2649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2648);
bool $tmp2650 = $tmp2649.value;
if ($tmp2650) goto block56; else goto block57;
block56:;
org$pandalanguage$pandac$Position* $tmp2651 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2652 = *$tmp2651;
*(&local83) = $tmp2652;
panda$core$String** $tmp2653 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2654 = *$tmp2653;
*(&local84) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2654));
panda$core$String* $tmp2655 = *(&local84);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2655));
*(&local84) = $tmp2654;
org$pandalanguage$pandac$FixedArray** $tmp2656 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2657 = *$tmp2656;
*(&local85) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2657));
org$pandalanguage$pandac$FixedArray* $tmp2658 = *(&local85);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2658));
*(&local85) = $tmp2657;
// line 1
panda$core$String* $tmp2659 = *(&local84);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2659));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2660 = *(&local85);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2660));
org$pandalanguage$pandac$FixedArray* $tmp2661 = *(&local85);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2661));
// unreffing _f2
*(&local85) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp2662 = *(&local84);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2662));
// unreffing _f1
*(&local84) = ((panda$core$String*) NULL);
goto block1;
block57:;
panda$core$Int64 $tmp2663 = (panda$core$Int64) {28};
panda$core$Bit $tmp2664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2663);
bool $tmp2665 = $tmp2664.value;
if ($tmp2665) goto block58; else goto block59;
block58:;
org$pandalanguage$pandac$Position* $tmp2666 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2667 = *$tmp2666;
*(&local86) = $tmp2667;
org$pandalanguage$pandac$ASTNode** $tmp2668 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2669 = *$tmp2668;
*(&local87) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2669));
org$pandalanguage$pandac$ASTNode* $tmp2670 = *(&local87);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2670));
*(&local87) = $tmp2669;
org$pandalanguage$pandac$FixedArray** $tmp2671 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2672 = *$tmp2671;
*(&local88) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2672));
org$pandalanguage$pandac$FixedArray* $tmp2673 = *(&local88);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2673));
*(&local88) = $tmp2672;
org$pandalanguage$pandac$FixedArray** $tmp2674 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp2675 = *$tmp2674;
*(&local89) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2675));
org$pandalanguage$pandac$FixedArray* $tmp2676 = *(&local89);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2676));
*(&local89) = $tmp2675;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2677 = *(&local87);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2677));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2678 = *(&local88);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2678));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2679 = *(&local89);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2679));
org$pandalanguage$pandac$FixedArray* $tmp2680 = *(&local89);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2680));
// unreffing _f3
*(&local89) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2681 = *(&local88);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2681));
// unreffing _f2
*(&local88) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2682 = *(&local87);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2682));
// unreffing _f1
*(&local87) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block59:;
panda$core$Int64 $tmp2683 = (panda$core$Int64) {29};
panda$core$Bit $tmp2684 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2683);
bool $tmp2685 = $tmp2684.value;
if ($tmp2685) goto block60; else goto block61;
block60:;
org$pandalanguage$pandac$Position* $tmp2686 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2687 = *$tmp2686;
*(&local90) = $tmp2687;
org$pandalanguage$pandac$ASTNode** $tmp2688 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2689 = *$tmp2688;
*(&local91) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2689));
org$pandalanguage$pandac$ASTNode* $tmp2690 = *(&local91);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2690));
*(&local91) = $tmp2689;
org$pandalanguage$pandac$FixedArray** $tmp2691 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2692 = *$tmp2691;
*(&local92) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2692));
org$pandalanguage$pandac$FixedArray* $tmp2693 = *(&local92);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2693));
*(&local92) = $tmp2692;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp2694 = (org$pandalanguage$pandac$MethodDecl$Kind*) (param0->$data + 32);
org$pandalanguage$pandac$MethodDecl$Kind $tmp2695 = *$tmp2694;
*(&local93) = $tmp2695;
panda$core$String** $tmp2696 = (panda$core$String**) (param0->$data + 40);
panda$core$String* $tmp2697 = *$tmp2696;
*(&local94) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2697));
panda$core$String* $tmp2698 = *(&local94);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2698));
*(&local94) = $tmp2697;
org$pandalanguage$pandac$FixedArray** $tmp2699 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 48);
org$pandalanguage$pandac$FixedArray* $tmp2700 = *$tmp2699;
*(&local95) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2700));
org$pandalanguage$pandac$FixedArray* $tmp2701 = *(&local95);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2701));
*(&local95) = $tmp2700;
org$pandalanguage$pandac$FixedArray** $tmp2702 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 56);
org$pandalanguage$pandac$FixedArray* $tmp2703 = *$tmp2702;
*(&local96) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2703));
org$pandalanguage$pandac$FixedArray* $tmp2704 = *(&local96);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2704));
*(&local96) = $tmp2703;
org$pandalanguage$pandac$ASTNode** $tmp2705 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 64);
org$pandalanguage$pandac$ASTNode* $tmp2706 = *$tmp2705;
*(&local97) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2706));
org$pandalanguage$pandac$ASTNode* $tmp2707 = *(&local97);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2707));
*(&local97) = $tmp2706;
org$pandalanguage$pandac$FixedArray** $tmp2708 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 72);
org$pandalanguage$pandac$FixedArray* $tmp2709 = *$tmp2708;
*(&local98) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2709));
org$pandalanguage$pandac$FixedArray* $tmp2710 = *(&local98);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2710));
*(&local98) = $tmp2709;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2711 = *(&local91);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2711));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2712 = *(&local92);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2712));
// line 1
panda$core$String* $tmp2713 = *(&local94);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2713));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2714 = *(&local95);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2714));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2715 = *(&local96);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2715));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2716 = *(&local97);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2716));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2717 = *(&local98);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2717));
org$pandalanguage$pandac$FixedArray* $tmp2718 = *(&local98);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2718));
// unreffing _f8
*(&local98) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2719 = *(&local97);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2719));
// unreffing _f7
*(&local97) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2720 = *(&local96);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2720));
// unreffing _f6
*(&local96) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2721 = *(&local95);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2721));
// unreffing _f5
*(&local95) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$String* $tmp2722 = *(&local94);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2722));
// unreffing _f4
*(&local94) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2723 = *(&local92);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2723));
// unreffing _f2
*(&local92) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2724 = *(&local91);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2724));
// unreffing _f1
*(&local91) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block61:;
panda$core$Int64 $tmp2725 = (panda$core$Int64) {30};
panda$core$Bit $tmp2726 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2725);
bool $tmp2727 = $tmp2726.value;
if ($tmp2727) goto block62; else goto block63;
block62:;
org$pandalanguage$pandac$Position* $tmp2728 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2729 = *$tmp2728;
*(&local99) = $tmp2729;
org$pandalanguage$pandac$parser$Token$Kind* $tmp2730 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp2731 = *$tmp2730;
*(&local100) = $tmp2731;
org$pandalanguage$pandac$FixedArray** $tmp2732 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2733 = *$tmp2732;
*(&local101) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2733));
org$pandalanguage$pandac$FixedArray* $tmp2734 = *(&local101);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2734));
*(&local101) = $tmp2733;
org$pandalanguage$pandac$ASTNode** $tmp2735 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2736 = *$tmp2735;
*(&local102) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2736));
org$pandalanguage$pandac$ASTNode* $tmp2737 = *(&local102);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2737));
*(&local102) = $tmp2736;
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2738 = *(&local101);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2738));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2739 = *(&local102);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2739));
org$pandalanguage$pandac$ASTNode* $tmp2740 = *(&local102);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2740));
// unreffing _f3
*(&local102) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2741 = *(&local101);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2741));
// unreffing _f2
*(&local101) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block1;
block63:;
panda$core$Int64 $tmp2742 = (panda$core$Int64) {31};
panda$core$Bit $tmp2743 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2742);
bool $tmp2744 = $tmp2743.value;
if ($tmp2744) goto block64; else goto block65;
block64:;
org$pandalanguage$pandac$Position* $tmp2745 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2746 = *$tmp2745;
*(&local103) = $tmp2746;
goto block1;
block65:;
panda$core$Int64 $tmp2747 = (panda$core$Int64) {32};
panda$core$Bit $tmp2748 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2747);
bool $tmp2749 = $tmp2748.value;
if ($tmp2749) goto block66; else goto block67;
block66:;
org$pandalanguage$pandac$Position* $tmp2750 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2751 = *$tmp2750;
*(&local104) = $tmp2751;
org$pandalanguage$pandac$ASTNode** $tmp2752 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2753 = *$tmp2752;
*(&local105) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2753));
org$pandalanguage$pandac$ASTNode* $tmp2754 = *(&local105);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2754));
*(&local105) = $tmp2753;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2755 = *(&local105);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2755));
org$pandalanguage$pandac$ASTNode* $tmp2756 = *(&local105);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2756));
// unreffing _f1
*(&local105) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block67:;
panda$core$Int64 $tmp2757 = (panda$core$Int64) {33};
panda$core$Bit $tmp2758 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2757);
bool $tmp2759 = $tmp2758.value;
if ($tmp2759) goto block68; else goto block69;
block68:;
org$pandalanguage$pandac$Position* $tmp2760 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2761 = *$tmp2760;
*(&local106) = $tmp2761;
panda$core$String** $tmp2762 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2763 = *$tmp2762;
*(&local107) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2763));
panda$core$String* $tmp2764 = *(&local107);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2764));
*(&local107) = $tmp2763;
// line 1
panda$core$String* $tmp2765 = *(&local107);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2765));
panda$core$String* $tmp2766 = *(&local107);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2766));
// unreffing _f1
*(&local107) = ((panda$core$String*) NULL);
goto block1;
block69:;
panda$core$Int64 $tmp2767 = (panda$core$Int64) {34};
panda$core$Bit $tmp2768 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2767);
bool $tmp2769 = $tmp2768.value;
if ($tmp2769) goto block70; else goto block71;
block70:;
org$pandalanguage$pandac$Position* $tmp2770 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2771 = *$tmp2770;
*(&local108) = $tmp2771;
panda$core$String** $tmp2772 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2773 = *$tmp2772;
*(&local109) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2773));
panda$core$String* $tmp2774 = *(&local109);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2774));
*(&local109) = $tmp2773;
org$pandalanguage$pandac$ASTNode** $tmp2775 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2776 = *$tmp2775;
*(&local110) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2776));
org$pandalanguage$pandac$ASTNode* $tmp2777 = *(&local110);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2777));
*(&local110) = $tmp2776;
// line 1
panda$core$String* $tmp2778 = *(&local109);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2778));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2779 = *(&local110);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2779));
org$pandalanguage$pandac$ASTNode* $tmp2780 = *(&local110);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2780));
// unreffing _f2
*(&local110) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2781 = *(&local109);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2781));
// unreffing _f1
*(&local109) = ((panda$core$String*) NULL);
goto block1;
block71:;
panda$core$Int64 $tmp2782 = (panda$core$Int64) {35};
panda$core$Bit $tmp2783 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2782);
bool $tmp2784 = $tmp2783.value;
if ($tmp2784) goto block72; else goto block73;
block72:;
org$pandalanguage$pandac$Position* $tmp2785 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2786 = *$tmp2785;
*(&local111) = $tmp2786;
org$pandalanguage$pandac$parser$Token$Kind* $tmp2787 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp2788 = *$tmp2787;
*(&local112) = $tmp2788;
org$pandalanguage$pandac$ASTNode** $tmp2789 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2790 = *$tmp2789;
*(&local113) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2790));
org$pandalanguage$pandac$ASTNode* $tmp2791 = *(&local113);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2791));
*(&local113) = $tmp2790;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2792 = *(&local113);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2792));
org$pandalanguage$pandac$ASTNode* $tmp2793 = *(&local113);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2793));
// unreffing _f2
*(&local113) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block73:;
panda$core$Int64 $tmp2794 = (panda$core$Int64) {36};
panda$core$Bit $tmp2795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2794);
bool $tmp2796 = $tmp2795.value;
if ($tmp2796) goto block74; else goto block75;
block74:;
org$pandalanguage$pandac$Position* $tmp2797 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2798 = *$tmp2797;
*(&local114) = $tmp2798;
org$pandalanguage$pandac$ASTNode** $tmp2799 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2800 = *$tmp2799;
*(&local115) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2800));
org$pandalanguage$pandac$ASTNode* $tmp2801 = *(&local115);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2801));
*(&local115) = $tmp2800;
panda$core$Bit* $tmp2802 = (panda$core$Bit*) (param0->$data + 24);
panda$core$Bit $tmp2803 = *$tmp2802;
*(&local116) = $tmp2803;
org$pandalanguage$pandac$ASTNode** $tmp2804 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 25);
org$pandalanguage$pandac$ASTNode* $tmp2805 = *$tmp2804;
*(&local117) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2805));
org$pandalanguage$pandac$ASTNode* $tmp2806 = *(&local117);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2806));
*(&local117) = $tmp2805;
org$pandalanguage$pandac$ASTNode** $tmp2807 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 33);
org$pandalanguage$pandac$ASTNode* $tmp2808 = *$tmp2807;
*(&local118) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2808));
org$pandalanguage$pandac$ASTNode* $tmp2809 = *(&local118);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2809));
*(&local118) = $tmp2808;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2810 = *(&local115);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2810));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2811 = *(&local117);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2811));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2812 = *(&local118);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2812));
org$pandalanguage$pandac$ASTNode* $tmp2813 = *(&local118);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2813));
// unreffing _f4
*(&local118) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2814 = *(&local117);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2814));
// unreffing _f3
*(&local117) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2815 = *(&local115);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2815));
// unreffing _f1
*(&local115) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block75:;
panda$core$Int64 $tmp2816 = (panda$core$Int64) {37};
panda$core$Bit $tmp2817 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2816);
bool $tmp2818 = $tmp2817.value;
if ($tmp2818) goto block76; else goto block77;
block76:;
org$pandalanguage$pandac$Position* $tmp2819 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2820 = *$tmp2819;
*(&local119) = $tmp2820;
panda$core$Real64* $tmp2821 = (panda$core$Real64*) (param0->$data + 16);
panda$core$Real64 $tmp2822 = *$tmp2821;
*(&local120) = $tmp2822;
goto block1;
block77:;
panda$core$Int64 $tmp2823 = (panda$core$Int64) {38};
panda$core$Bit $tmp2824 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2823);
bool $tmp2825 = $tmp2824.value;
if ($tmp2825) goto block78; else goto block79;
block78:;
org$pandalanguage$pandac$Position* $tmp2826 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2827 = *$tmp2826;
*(&local121) = $tmp2827;
panda$core$String** $tmp2828 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2829 = *$tmp2828;
*(&local122) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2829));
panda$core$String* $tmp2830 = *(&local122);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2830));
*(&local122) = $tmp2829;
// line 1
panda$core$String* $tmp2831 = *(&local122);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2831));
panda$core$String* $tmp2832 = *(&local122);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2832));
// unreffing _f1
*(&local122) = ((panda$core$String*) NULL);
goto block1;
block79:;
panda$core$Int64 $tmp2833 = (panda$core$Int64) {39};
panda$core$Bit $tmp2834 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2833);
bool $tmp2835 = $tmp2834.value;
if ($tmp2835) goto block80; else goto block81;
block80:;
org$pandalanguage$pandac$Position* $tmp2836 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2837 = *$tmp2836;
*(&local123) = $tmp2837;
org$pandalanguage$pandac$ASTNode** $tmp2838 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2839 = *$tmp2838;
*(&local124) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2839));
org$pandalanguage$pandac$ASTNode* $tmp2840 = *(&local124);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2840));
*(&local124) = $tmp2839;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2841 = *(&local124);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2841));
org$pandalanguage$pandac$ASTNode* $tmp2842 = *(&local124);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2842));
// unreffing _f1
*(&local124) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block81:;
panda$core$Int64 $tmp2843 = (panda$core$Int64) {40};
panda$core$Bit $tmp2844 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2843);
bool $tmp2845 = $tmp2844.value;
if ($tmp2845) goto block82; else goto block83;
block82:;
org$pandalanguage$pandac$Position* $tmp2846 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2847 = *$tmp2846;
*(&local125) = $tmp2847;
goto block1;
block83:;
panda$core$Int64 $tmp2848 = (panda$core$Int64) {41};
panda$core$Bit $tmp2849 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2848);
bool $tmp2850 = $tmp2849.value;
if ($tmp2850) goto block84; else goto block85;
block84:;
org$pandalanguage$pandac$Position* $tmp2851 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2852 = *$tmp2851;
*(&local126) = $tmp2852;
panda$core$String** $tmp2853 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2854 = *$tmp2853;
*(&local127) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2854));
panda$core$String* $tmp2855 = *(&local127);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2855));
*(&local127) = $tmp2854;
// line 1
panda$core$String* $tmp2856 = *(&local127);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2856));
panda$core$String* $tmp2857 = *(&local127);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2857));
// unreffing _f1
*(&local127) = ((panda$core$String*) NULL);
goto block1;
block85:;
panda$core$Int64 $tmp2858 = (panda$core$Int64) {42};
panda$core$Bit $tmp2859 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2858);
bool $tmp2860 = $tmp2859.value;
if ($tmp2860) goto block86; else goto block87;
block86:;
org$pandalanguage$pandac$Position* $tmp2861 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2862 = *$tmp2861;
*(&local128) = $tmp2862;
goto block1;
block87:;
panda$core$Int64 $tmp2863 = (panda$core$Int64) {43};
panda$core$Bit $tmp2864 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2863);
bool $tmp2865 = $tmp2864.value;
if ($tmp2865) goto block88; else goto block89;
block88:;
org$pandalanguage$pandac$Position* $tmp2866 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2867 = *$tmp2866;
*(&local129) = $tmp2867;
org$pandalanguage$pandac$FixedArray** $tmp2868 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp2869 = *$tmp2868;
*(&local130) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2869));
org$pandalanguage$pandac$FixedArray* $tmp2870 = *(&local130);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2870));
*(&local130) = $tmp2869;
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2871 = *(&local130);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2871));
org$pandalanguage$pandac$FixedArray* $tmp2872 = *(&local130);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2872));
// unreffing _f1
*(&local130) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block1;
block89:;
panda$core$Int64 $tmp2873 = (panda$core$Int64) {44};
panda$core$Bit $tmp2874 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2873);
bool $tmp2875 = $tmp2874.value;
if ($tmp2875) goto block90; else goto block91;
block90:;
org$pandalanguage$pandac$Position* $tmp2876 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2877 = *$tmp2876;
*(&local131) = $tmp2877;
org$pandalanguage$pandac$FixedArray** $tmp2878 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp2879 = *$tmp2878;
*(&local132) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2879));
org$pandalanguage$pandac$FixedArray* $tmp2880 = *(&local132);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2880));
*(&local132) = $tmp2879;
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2881 = *(&local132);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2881));
org$pandalanguage$pandac$FixedArray* $tmp2882 = *(&local132);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2882));
// unreffing _f1
*(&local132) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block1;
block91:;
panda$core$Int64 $tmp2883 = (panda$core$Int64) {45};
panda$core$Bit $tmp2884 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2883);
bool $tmp2885 = $tmp2884.value;
if ($tmp2885) goto block92; else goto block93;
block92:;
org$pandalanguage$pandac$Position* $tmp2886 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2887 = *$tmp2886;
*(&local133) = $tmp2887;
panda$core$String** $tmp2888 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2889 = *$tmp2888;
*(&local134) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2889));
panda$core$String* $tmp2890 = *(&local134);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2890));
*(&local134) = $tmp2889;
// line 1
panda$core$String* $tmp2891 = *(&local134);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2891));
panda$core$String* $tmp2892 = *(&local134);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2892));
// unreffing _f1
*(&local134) = ((panda$core$String*) NULL);
goto block1;
block93:;
panda$core$Int64 $tmp2893 = (panda$core$Int64) {46};
panda$core$Bit $tmp2894 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2893);
bool $tmp2895 = $tmp2894.value;
if ($tmp2895) goto block94; else goto block95;
block94:;
org$pandalanguage$pandac$Position* $tmp2896 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2897 = *$tmp2896;
*(&local135) = $tmp2897;
org$pandalanguage$pandac$FixedArray** $tmp2898 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp2899 = *$tmp2898;
*(&local136) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2899));
org$pandalanguage$pandac$FixedArray* $tmp2900 = *(&local136);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2900));
*(&local136) = $tmp2899;
org$pandalanguage$pandac$ASTNode** $tmp2901 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2902 = *$tmp2901;
*(&local137) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2902));
org$pandalanguage$pandac$ASTNode* $tmp2903 = *(&local137);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2903));
*(&local137) = $tmp2902;
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2904 = *(&local136);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2904));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2905 = *(&local137);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2905));
org$pandalanguage$pandac$ASTNode* $tmp2906 = *(&local137);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2906));
// unreffing _f2
*(&local137) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2907 = *(&local136);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2907));
// unreffing _f1
*(&local136) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block1;
block95:;
panda$core$Int64 $tmp2908 = (panda$core$Int64) {47};
panda$core$Bit $tmp2909 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2908);
bool $tmp2910 = $tmp2909.value;
if ($tmp2910) goto block96; else goto block97;
block96:;
org$pandalanguage$pandac$Position* $tmp2911 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2912 = *$tmp2911;
*(&local138) = $tmp2912;
panda$core$String** $tmp2913 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2914 = *$tmp2913;
*(&local139) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2914));
panda$core$String* $tmp2915 = *(&local139);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2915));
*(&local139) = $tmp2914;
org$pandalanguage$pandac$ASTNode** $tmp2916 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2917 = *$tmp2916;
*(&local140) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2917));
org$pandalanguage$pandac$ASTNode* $tmp2918 = *(&local140);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2918));
*(&local140) = $tmp2917;
// line 1
panda$core$String* $tmp2919 = *(&local139);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2919));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2920 = *(&local140);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2920));
org$pandalanguage$pandac$ASTNode* $tmp2921 = *(&local140);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2921));
// unreffing _f2
*(&local140) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2922 = *(&local139);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2922));
// unreffing _f1
*(&local139) = ((panda$core$String*) NULL);
goto block1;
block97:;
panda$core$Int64 $tmp2923 = (panda$core$Int64) {48};
panda$core$Bit $tmp2924 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2923);
bool $tmp2925 = $tmp2924.value;
if ($tmp2925) goto block98; else goto block99;
block98:;
org$pandalanguage$pandac$Position* $tmp2926 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2927 = *$tmp2926;
*(&local141) = $tmp2927;
org$pandalanguage$pandac$FixedArray** $tmp2928 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp2929 = *$tmp2928;
*(&local142) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2929));
org$pandalanguage$pandac$FixedArray* $tmp2930 = *(&local142);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2930));
*(&local142) = $tmp2929;
org$pandalanguage$pandac$ASTNode** $tmp2931 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2932 = *$tmp2931;
*(&local143) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2932));
org$pandalanguage$pandac$ASTNode* $tmp2933 = *(&local143);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2933));
*(&local143) = $tmp2932;
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2934 = *(&local142);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2934));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2935 = *(&local143);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2935));
org$pandalanguage$pandac$ASTNode* $tmp2936 = *(&local143);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2936));
// unreffing _f2
*(&local143) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2937 = *(&local142);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2937));
// unreffing _f1
*(&local142) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block1;
block99:;
panda$core$Int64 $tmp2938 = (panda$core$Int64) {49};
panda$core$Bit $tmp2939 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2938);
bool $tmp2940 = $tmp2939.value;
if ($tmp2940) goto block100; else goto block101;
block100:;
org$pandalanguage$pandac$Position* $tmp2941 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2942 = *$tmp2941;
*(&local144) = $tmp2942;
panda$core$String** $tmp2943 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2944 = *$tmp2943;
*(&local145) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2944));
panda$core$String* $tmp2945 = *(&local145);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2945));
*(&local145) = $tmp2944;
// line 1
panda$core$String* $tmp2946 = *(&local145);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2946));
panda$core$String* $tmp2947 = *(&local145);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2947));
// unreffing _f1
*(&local145) = ((panda$core$String*) NULL);
goto block1;
block101:;
panda$core$Int64 $tmp2948 = (panda$core$Int64) {50};
panda$core$Bit $tmp2949 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2948);
bool $tmp2950 = $tmp2949.value;
if ($tmp2950) goto block102; else goto block103;
block102:;
org$pandalanguage$pandac$Position* $tmp2951 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2952 = *$tmp2951;
*(&local146) = $tmp2952;
org$pandalanguage$pandac$Variable$Kind* $tmp2953 = (org$pandalanguage$pandac$Variable$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$Variable$Kind $tmp2954 = *$tmp2953;
*(&local147) = $tmp2954;
org$pandalanguage$pandac$FixedArray** $tmp2955 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2956 = *$tmp2955;
*(&local148) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2956));
org$pandalanguage$pandac$FixedArray* $tmp2957 = *(&local148);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2957));
*(&local148) = $tmp2956;
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2958 = *(&local148);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2958));
org$pandalanguage$pandac$FixedArray* $tmp2959 = *(&local148);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2959));
// unreffing _f2
*(&local148) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block1;
block103:;
panda$core$Int64 $tmp2960 = (panda$core$Int64) {51};
panda$core$Bit $tmp2961 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2960);
bool $tmp2962 = $tmp2961.value;
if ($tmp2962) goto block104; else goto block105;
block104:;
org$pandalanguage$pandac$Position* $tmp2963 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2964 = *$tmp2963;
*(&local149) = $tmp2964;
org$pandalanguage$pandac$FixedArray** $tmp2965 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
org$pandalanguage$pandac$FixedArray* $tmp2966 = *$tmp2965;
*(&local150) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2966));
org$pandalanguage$pandac$FixedArray* $tmp2967 = *(&local150);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2967));
*(&local150) = $tmp2966;
org$pandalanguage$pandac$FixedArray** $tmp2968 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
org$pandalanguage$pandac$FixedArray* $tmp2969 = *$tmp2968;
*(&local151) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2969));
org$pandalanguage$pandac$FixedArray* $tmp2970 = *(&local151);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2970));
*(&local151) = $tmp2969;
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2971 = *(&local150);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2971));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2972 = *(&local151);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2972));
org$pandalanguage$pandac$FixedArray* $tmp2973 = *(&local151);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2973));
// unreffing _f2
*(&local151) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$FixedArray* $tmp2974 = *(&local150);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2974));
// unreffing _f1
*(&local150) = ((org$pandalanguage$pandac$FixedArray*) NULL);
goto block1;
block105:;
panda$core$Int64 $tmp2975 = (panda$core$Int64) {52};
panda$core$Bit $tmp2976 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2244, $tmp2975);
bool $tmp2977 = $tmp2976.value;
if ($tmp2977) goto block106; else goto block1;
block106:;
org$pandalanguage$pandac$Position* $tmp2978 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2979 = *$tmp2978;
*(&local152) = $tmp2979;
panda$core$String** $tmp2980 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2981 = *$tmp2980;
*(&local153) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2981));
panda$core$String* $tmp2982 = *(&local153);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2982));
*(&local153) = $tmp2981;
org$pandalanguage$pandac$ASTNode** $tmp2983 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2984 = *$tmp2983;
*(&local154) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2984));
org$pandalanguage$pandac$ASTNode* $tmp2985 = *(&local154);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2985));
*(&local154) = $tmp2984;
org$pandalanguage$pandac$FixedArray** $tmp2986 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
org$pandalanguage$pandac$FixedArray* $tmp2987 = *$tmp2986;
*(&local155) = ((org$pandalanguage$pandac$FixedArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2987));
org$pandalanguage$pandac$FixedArray* $tmp2988 = *(&local155);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2988));
*(&local155) = $tmp2987;
// line 1
panda$core$String* $tmp2989 = *(&local153);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2989));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2990 = *(&local154);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2990));
// line 1
org$pandalanguage$pandac$FixedArray* $tmp2991 = *(&local155);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2991));
org$pandalanguage$pandac$FixedArray* $tmp2992 = *(&local155);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2992));
// unreffing _f3
*(&local155) = ((org$pandalanguage$pandac$FixedArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2993 = *(&local154);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2993));
// unreffing _f2
*(&local154) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2994 = *(&local153);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2994));
// unreffing _f1
*(&local153) = ((panda$core$String*) NULL);
goto block1;
block1:;
// line 6
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, panda$core$String* param4, org$pandalanguage$pandac$ASTNode* param5) {

// line 6
panda$core$Int64* $tmp2995 = &param0->$rawValue;
*$tmp2995 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2996 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2996 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp2997 = (panda$core$String**) (param0->$data + 16);
*$tmp2997 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$core$String** $tmp2998 = (panda$core$String**) (param0->$data + 24);
*$tmp2998 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp2999 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
*$tmp2999 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$FixedArray* param3) {

// line 6
panda$core$Int64* $tmp3000 = &param0->$rawValue;
*$tmp3000 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3001 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3001 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$FixedArray** $tmp3002 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
*$tmp3002 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$ASTNode* param4) {

// line 6
panda$core$Int64* $tmp3003 = &param0->$rawValue;
*$tmp3003 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3004 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3004 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3005 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3005 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp3006 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp3006 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3) {

// line 6
panda$core$Int64* $tmp3007 = &param0->$rawValue;
*$tmp3007 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3008 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3008 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3009 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3009 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2) {

// line 6
panda$core$Int64* $tmp3010 = &param0->$rawValue;
*$tmp3010 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3011 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3011 = param2;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$parser$Token$Kind param4, org$pandalanguage$pandac$ASTNode* param5) {

// line 6
panda$core$Int64* $tmp3012 = &param0->$rawValue;
*$tmp3012 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3013 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3013 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3014 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3014 = param3;
// line 6
org$pandalanguage$pandac$parser$Token$Kind* $tmp3015 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 24);
*$tmp3015 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp3016 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
*$tmp3016 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$Bit param3) {

// line 6
panda$core$Int64* $tmp3017 = &param0->$rawValue;
*$tmp3017 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3018 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3018 = param2;
// line 6
panda$core$Bit* $tmp3019 = (panda$core$Bit*) (param0->$data + 16);
*$tmp3019 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3) {

// line 6
panda$core$Int64* $tmp3020 = &param0->$rawValue;
*$tmp3020 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3021 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3021 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp3022 = (panda$core$String**) (param0->$data + 16);
*$tmp3022 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$FixedArray* param4) {

// line 6
panda$core$Int64* $tmp3023 = &param0->$rawValue;
*$tmp3023 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3024 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3024 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3025 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3025 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp3026 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp3026 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, panda$core$String* param4, org$pandalanguage$pandac$FixedArray* param5) {

// line 6
panda$core$Int64* $tmp3027 = &param0->$rawValue;
*$tmp3027 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3028 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3028 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3029 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3029 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$core$String** $tmp3030 = (panda$core$String**) (param0->$data + 24);
*$tmp3030 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$FixedArray** $tmp3031 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
*$tmp3031 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$ChoiceCase* param4, panda$core$Int64 param5) {

// line 6
panda$core$Int64* $tmp3032 = &param0->$rawValue;
*$tmp3032 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3033 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3033 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3034 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3034 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ChoiceCase** $tmp3035 = (org$pandalanguage$pandac$ChoiceCase**) (param0->$data + 24);
*$tmp3035 = param4;
// line 6
panda$core$Int64* $tmp3036 = (panda$core$Int64*) (param0->$data + 32);
*$tmp3036 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$FixedArray* param4, org$pandalanguage$pandac$ClassDecl$Kind param5, panda$core$String* param6, org$pandalanguage$pandac$FixedArray* param7, org$pandalanguage$pandac$FixedArray* param8, org$pandalanguage$pandac$FixedArray* param9) {

// line 6
panda$core$Int64* $tmp3037 = &param0->$rawValue;
*$tmp3037 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3038 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3038 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3039 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3039 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp3040 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp3040 = param4;
// line 6
org$pandalanguage$pandac$ClassDecl$Kind* $tmp3041 = (org$pandalanguage$pandac$ClassDecl$Kind*) (param0->$data + 32);
*$tmp3041 = param5;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param6));
panda$core$String** $tmp3042 = (panda$core$String**) (param0->$data + 40);
*$tmp3042 = param6;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param7));
org$pandalanguage$pandac$FixedArray** $tmp3043 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 48);
*$tmp3043 = param7;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param8));
org$pandalanguage$pandac$FixedArray** $tmp3044 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 56);
*$tmp3044 = param8;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param9));
org$pandalanguage$pandac$FixedArray** $tmp3045 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 64);
*$tmp3045 = param9;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, org$pandalanguage$pandac$FixedArray* param4, org$pandalanguage$pandac$ASTNode* param5) {

// line 6
panda$core$Int64* $tmp3046 = &param0->$rawValue;
*$tmp3046 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3047 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3047 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp3048 = (panda$core$String**) (param0->$data + 16);
*$tmp3048 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp3049 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp3049 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp3050 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
*$tmp3050 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, panda$core$String* param4) {

// line 6
panda$core$Int64* $tmp3051 = &param0->$rawValue;
*$tmp3051 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3052 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3052 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3053 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3053 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$core$String** $tmp3054 = (panda$core$String**) (param0->$data + 24);
*$tmp3054 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, panda$core$String* param4, org$pandalanguage$pandac$FixedArray* param5) {

// line 6
panda$core$Int64* $tmp3055 = &param0->$rawValue;
*$tmp3055 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3056 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3056 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3057 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3057 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$core$String** $tmp3058 = (panda$core$String**) (param0->$data + 24);
*$tmp3058 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$FixedArray** $tmp3059 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
*$tmp3059 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$FixedArray* param4, org$pandalanguage$pandac$ASTNode* param5) {

// line 6
panda$core$Int64* $tmp3060 = &param0->$rawValue;
*$tmp3060 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3061 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3061 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3062 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3062 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp3063 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp3063 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp3064 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
*$tmp3064 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$FixedArray* param2) {

// line 6
panda$core$Int64* $tmp3065 = &param0->$rawValue;
*$tmp3065 = param1;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
org$pandalanguage$pandac$FixedArray** $tmp3066 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 0);
*$tmp3066 = param2;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, org$pandalanguage$pandac$ASTNode* param4, org$pandalanguage$pandac$ASTNode* param5, org$pandalanguage$pandac$FixedArray* param6) {

// line 6
panda$core$Int64* $tmp3067 = &param0->$rawValue;
*$tmp3067 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3068 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3068 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp3069 = (panda$core$String**) (param0->$data + 16);
*$tmp3069 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp3070 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp3070 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp3071 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
*$tmp3071 = param5;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param6));
org$pandalanguage$pandac$FixedArray** $tmp3072 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 40);
*$tmp3072 = param6;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, org$pandalanguage$pandac$FixedArray* param4) {

// line 6
panda$core$Int64* $tmp3073 = &param0->$rawValue;
*$tmp3073 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3074 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3074 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp3075 = (panda$core$String**) (param0->$data + 16);
*$tmp3075 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp3076 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp3076 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3) {

// line 6
panda$core$Int64* $tmp3077 = &param0->$rawValue;
*$tmp3077 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3078 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3078 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp3079 = (panda$core$String**) (param0->$data + 16);
*$tmp3079 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$FixedArray* param4, org$pandalanguage$pandac$ASTNode* param5) {

// line 6
panda$core$Int64* $tmp3080 = &param0->$rawValue;
*$tmp3080 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3081 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3081 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3082 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3082 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp3083 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp3083 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp3084 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
*$tmp3084 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$UInt64 param3) {

// line 6
panda$core$Int64* $tmp3085 = &param0->$rawValue;
*$tmp3085 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3086 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3086 = param2;
// line 6
panda$core$UInt64* $tmp3087 = (panda$core$UInt64*) (param0->$data + 16);
*$tmp3087 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3) {

// line 6
panda$core$Int64* $tmp3088 = &param0->$rawValue;
*$tmp3088 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3089 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3089 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp3090 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp3090 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, org$pandalanguage$pandac$FixedArray* param4) {

// line 6
panda$core$Int64* $tmp3091 = &param0->$rawValue;
*$tmp3091 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3092 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3092 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp3093 = (panda$core$String**) (param0->$data + 16);
*$tmp3093 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp3094 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp3094 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$FixedArray* param4, org$pandalanguage$pandac$FixedArray* param5) {

// line 6
panda$core$Int64* $tmp3095 = &param0->$rawValue;
*$tmp3095 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3096 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3096 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3097 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3097 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp3098 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp3098 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$FixedArray** $tmp3099 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
*$tmp3099 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$FixedArray* param4, org$pandalanguage$pandac$MethodDecl$Kind param5, panda$core$String* param6, org$pandalanguage$pandac$FixedArray* param7, org$pandalanguage$pandac$FixedArray* param8, org$pandalanguage$pandac$ASTNode* param9, org$pandalanguage$pandac$FixedArray* param10) {

// line 6
panda$core$Int64* $tmp3100 = &param0->$rawValue;
*$tmp3100 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3101 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3101 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3102 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3102 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp3103 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp3103 = param4;
// line 6
org$pandalanguage$pandac$MethodDecl$Kind* $tmp3104 = (org$pandalanguage$pandac$MethodDecl$Kind*) (param0->$data + 32);
*$tmp3104 = param5;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param6));
panda$core$String** $tmp3105 = (panda$core$String**) (param0->$data + 40);
*$tmp3105 = param6;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param7));
org$pandalanguage$pandac$FixedArray** $tmp3106 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 48);
*$tmp3106 = param7;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param8));
org$pandalanguage$pandac$FixedArray** $tmp3107 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 56);
*$tmp3107 = param8;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param9));
org$pandalanguage$pandac$ASTNode** $tmp3108 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 64);
*$tmp3108 = param9;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param10));
org$pandalanguage$pandac$FixedArray** $tmp3109 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 72);
*$tmp3109 = param10;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$parser$Token$Kind param3, org$pandalanguage$pandac$FixedArray* param4, org$pandalanguage$pandac$ASTNode* param5) {

// line 6
panda$core$Int64* $tmp3110 = &param0->$rawValue;
*$tmp3110 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3111 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3111 = param2;
// line 6
org$pandalanguage$pandac$parser$Token$Kind* $tmp3112 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
*$tmp3112 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp3113 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp3113 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp3114 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
*$tmp3114 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, org$pandalanguage$pandac$ASTNode* param4) {

// line 6
panda$core$Int64* $tmp3115 = &param0->$rawValue;
*$tmp3115 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3116 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3116 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp3117 = (panda$core$String**) (param0->$data + 16);
*$tmp3117 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp3118 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp3118 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$parser$Token$Kind param3, org$pandalanguage$pandac$ASTNode* param4) {

// line 6
panda$core$Int64* $tmp3119 = &param0->$rawValue;
*$tmp3119 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3120 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3120 = param2;
// line 6
org$pandalanguage$pandac$parser$Token$Kind* $tmp3121 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
*$tmp3121 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp3122 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp3122 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, panda$core$Bit param4, org$pandalanguage$pandac$ASTNode* param5, org$pandalanguage$pandac$ASTNode* param6) {

// line 6
panda$core$Int64* $tmp3123 = &param0->$rawValue;
*$tmp3123 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3124 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3124 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3125 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3125 = param3;
// line 6
panda$core$Bit* $tmp3126 = (panda$core$Bit*) (param0->$data + 24);
*$tmp3126 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp3127 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 25);
*$tmp3127 = param5;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param6));
org$pandalanguage$pandac$ASTNode** $tmp3128 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 33);
*$tmp3128 = param6;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$Real64 param3) {

// line 6
panda$core$Int64* $tmp3129 = &param0->$rawValue;
*$tmp3129 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3130 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3130 = param2;
// line 6
panda$core$Real64* $tmp3131 = (panda$core$Real64*) (param0->$data + 16);
*$tmp3131 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3) {

// line 6
panda$core$Int64* $tmp3132 = &param0->$rawValue;
*$tmp3132 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3133 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3133 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3134 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3134 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$FixedArray* param3, org$pandalanguage$pandac$ASTNode* param4) {

// line 6
panda$core$Int64* $tmp3135 = &param0->$rawValue;
*$tmp3135 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3136 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3136 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$FixedArray** $tmp3137 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
*$tmp3137 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp3138 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp3138 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, org$pandalanguage$pandac$ASTNode* param4) {

// line 6
panda$core$Int64* $tmp3139 = &param0->$rawValue;
*$tmp3139 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3140 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3140 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp3141 = (panda$core$String**) (param0->$data + 16);
*$tmp3141 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp3142 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp3142 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$Variable$Kind param3, org$pandalanguage$pandac$FixedArray* param4) {

// line 6
panda$core$Int64* $tmp3143 = &param0->$rawValue;
*$tmp3143 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3144 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3144 = param2;
// line 6
org$pandalanguage$pandac$Variable$Kind* $tmp3145 = (org$pandalanguage$pandac$Variable$Kind*) (param0->$data + 16);
*$tmp3145 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp3146 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp3146 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$FixedArray* param3, org$pandalanguage$pandac$FixedArray* param4) {

// line 6
panda$core$Int64* $tmp3147 = &param0->$rawValue;
*$tmp3147 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3148 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3148 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$FixedArray** $tmp3149 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 16);
*$tmp3149 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$FixedArray** $tmp3150 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 24);
*$tmp3150 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$FixedArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, org$pandalanguage$pandac$ASTNode* param4, org$pandalanguage$pandac$FixedArray* param5) {

// line 6
panda$core$Int64* $tmp3151 = &param0->$rawValue;
*$tmp3151 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3152 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3152 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp3153 = (panda$core$String**) (param0->$data + 16);
*$tmp3153 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp3154 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp3154 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$FixedArray** $tmp3155 = (org$pandalanguage$pandac$FixedArray**) (param0->$data + 32);
*$tmp3155 = param5;
return;

}






