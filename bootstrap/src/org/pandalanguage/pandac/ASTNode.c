#include "org/pandalanguage/pandac/ASTNode.h"
#include "panda/core/Object.h"
#include "panda/core/Class.h"
#include "panda/core/String.h"
#include "org/pandalanguage/pandac/Position.h"
#include "panda/core/Int64.h"
#include "panda/core/Bit.h"
#include "panda/collections/ImmutableArray.h"
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

typedef panda$collections$Iterator* (*$fn662)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn666)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn671)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn718)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn725)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn763)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn789)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn841)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn845)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn850)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn884)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn897)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn908)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn912)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn917)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn972)(org$pandalanguage$pandac$ASTNode*);
typedef panda$core$String* (*$fn984)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1017)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1021)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1026)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1059)(org$pandalanguage$pandac$ASTNode*);
typedef panda$collections$Iterator* (*$fn1095)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1099)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1104)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1131)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1135)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1140)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1191)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1195)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1200)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1235)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1276)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1280)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1285)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1329)(org$pandalanguage$pandac$IR$Value*);
typedef panda$collections$Iterator* (*$fn1358)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1362)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1367)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1406)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1410)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1415)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn1478)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1482)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1487)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1519)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1529)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn1552)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn1556)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn1561)(panda$collections$Iterator*);
typedef panda$core$String* (*$fn1623)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1847)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1865)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1923)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn1949)(panda$collections$CollectionView*);
typedef panda$core$String* (*$fn2009)(panda$collections$CollectionView*);
typedef panda$collections$Iterator* (*$fn2035)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2039)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2044)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2062)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2066)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2071)(panda$collections$Iterator*);
typedef panda$collections$Iterator* (*$fn2118)(panda$collections$Iterable*);
typedef panda$core$Bit (*$fn2122)(panda$collections$Iterator*);
typedef panda$core$Object* (*$fn2127)(panda$collections$Iterator*);

static panda$core$String $s1 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65", 32, -9211815390615587804, NULL };
static panda$core$String $s509 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 13, -8809212395465398403, NULL };
static panda$core$String $s513 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 13, -8809212395465398403, NULL };
static panda$core$String $s514 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2e\x70\x6f\x73\x69\x74\x69\x6f\x6e\x28\x29\x3a\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x50\x6f\x73\x69\x74\x69\x6f\x6e\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 111, 8956204005101181995, NULL };
static panda$core$String $s536 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s540 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s573 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s575 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s580 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x61\x73\x73\x65\x72\x74\x20", 7, 211401723557791, NULL };
static panda$core$String $s582 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2c\x20", 2, 14677, NULL };
static panda$core$String $s586 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s599 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x70\x72\x65\x28", 5, 17286533032, NULL };
static panda$core$String $s601 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s608 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s609 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x40\x72\x65\x74\x75\x72\x6e", 7, 176359607126837, NULL };
static panda$core$String $s625 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s627 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s632 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20", 1, 133, NULL };
static panda$core$String $s636 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s657 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7b\x0a", 2, 22634, NULL };
static panda$core$String $s677 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s680 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s698 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b\x20", 6, 2103477946150, NULL };
static panda$core$String $s700 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s702 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s704 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x62\x72\x65\x61\x6b", 5, 20826514318, NULL };
static panda$core$String $s721 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s729 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s754 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s759 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s767 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s792 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s796 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s801 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s837 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s856 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s864 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6c\x61\x73\x73\x20", 6, 2113359747467, NULL };
static panda$core$String $s869 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x6e\x74\x65\x72\x66\x61\x63\x65\x20", 10, 5141924857140843686, NULL };
static panda$core$String $s874 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x68\x6f\x69\x63\x65\x20", 7, 213408740478552, NULL };
static panda$core$String $s887 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s889 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s900 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s902 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s904 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s923 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s926 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s949 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65\x20", 9, 2177732111093651202, NULL };
static panda$core$String $s951 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s953 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s955 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x74\x69\x6e\x75\x65", 8, 21561704070234170, NULL };
static panda$core$String $s975 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x3a\x3d\x20", 4, 137627884, NULL };
static panda$core$String $s979 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1011 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1013 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x6f\x20\x7b\x0a", 5, 21030842877, NULL };
static panda$core$String $s1032 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1037 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d\x0a\x77\x68\x69\x6c\x65\x20", 8, 24242135792659305, NULL };
static panda$core$String $s1039 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1062 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e", 1, 147, NULL };
static panda$core$String $s1066 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1091 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1110 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1146 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1177 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a\x20", 2, 16091, NULL };
static panda$core$String $s1181 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x6f\x72\x20", 4, 210294960, NULL };
static panda$core$String $s1183 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x69\x6e\x20", 4, 138112280, NULL };
static panda$core$String $s1187 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1206 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1209 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1231 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1239 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1269 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x69\x66\x20", 3, 2111740, NULL };
static panda$core$String $s1271 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1291 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1294 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1301 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a\x65\x6c\x73\x65\x20", 6, 1177243711968, NULL };
static panda$core$String $s1303 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1352 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1354 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6c\x6f\x6f\x70\x20\x7b\x0a", 7, 223035999068308, NULL };
static panda$core$String $s1373 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1376 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1399 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x61\x74\x63\x68\x20", 6, 2217335499458, NULL };
static panda$core$String $s1401 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1421 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1429 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1431 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1474 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1493 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1501 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6d\x65\x74\x68\x6f\x64\x20", 7, 223992931077074, NULL };
static panda$core$String $s1506 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20", 9, 2210860915941501903, NULL };
static panda$core$String $s1522 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3c", 1, 161, NULL };
static panda$core$String $s1524 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3e", 1, 163, NULL };
static panda$core$String $s1532 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1534 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1541 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1543 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1548 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s1567 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s1570 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s1599 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static panda$core$String $s1601 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3e", 2, 16424, NULL };
static panda$core$String $s1605 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static panda$core$String $s1607 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x26\x3e", 3, 1656462, NULL };
static panda$core$String $s1611 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static panda$core$String $s1613 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x3e\x2a", 3, 1658866, NULL };
static panda$core$String $s1617 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static panda$core$String $s1619 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3d\x26\x3e\x2a", 4, 167302704, NULL };
static panda$core$String $s1626 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1628 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1632 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1640 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1644 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1652 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28\x29", 2, 14282, NULL };
static panda$core$String $s1660 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s1661 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x6e\x75\x6c\x6c", 4, 218598044, NULL };
static panda$core$String $s1672 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3f", 1, 164, NULL };
static panda$core$String $s1698 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1702 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1718 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1722 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1750 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e\x2e", 3, 1504239, NULL };
static panda$core$String $s1752 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2e\x2e", 2, 14893, NULL };
static panda$core$String $s1764 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x62\x79\x20", 4, 138041984, NULL };
static panda$core$String $s1790 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1792 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x2f", 1, 148, NULL };
static panda$core$String $s1807 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e\x20", 7, 229300545255605, NULL };
static panda$core$String $s1809 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1811 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s1813 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x72\x65\x74\x75\x72\x6e", 6, 2270302428273, NULL };
static panda$core$String $s1817 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s1818 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x65\x6c\x66", 4, 223586327, NULL };
static panda$core$String $s1829 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x61\x6e\x64\x61", 5, 22265936917, NULL };
static panda$core$String $s1834 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s1835 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x73\x75\x70\x65\x72", 5, 22598744660, NULL };
static panda$core$String $s1850 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1852 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1868 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1870 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29", 1, 142, NULL };
static panda$core$String $s1899 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s1903 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1926 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1928 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static panda$core$String $s1932 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1952 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x28", 1, 141, NULL };
static panda$core$String $s1954 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x29\x3d\x3e", 3, 1454765, NULL };
static panda$core$String $s1958 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s1989 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x76\x61\x72\x20", 4, 226636962, NULL };
static panda$core$String $s1994 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x64\x65\x66\x20", 4, 208131136, NULL };
static panda$core$String $s1999 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x63\x6f\x6e\x73\x74\x61\x6e\x74\x20", 9, 2177732101714751307, NULL };
static panda$core$String $s2004 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x70\x72\x6f\x70\x65\x72\x74\x79\x20", 9, 2318826142498553734, NULL };
static panda$core$String $s2027 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x65\x6e\x20", 5, 23001480967, NULL };
static panda$core$String $s2029 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2031 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2051 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2055 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2058 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s2077 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2108 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x3a", 1, 159, NULL };
static panda$core$String $s2112 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x77\x68\x69\x6c\x65\x20", 6, 2323153685470, NULL };
static panda$core$String $s2114 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x20\x7b\x0a", 3, 1369166, NULL };
static panda$core$String $s2133 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x0a", 1, 111, NULL };
static panda$core$String $s2136 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x7d", 1, 226, NULL };
static panda$core$String $s2150 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x75\x6e\x73\x75\x70\x70\x6f\x72\x74\x65\x64\x20\x41\x53\x54\x4e\x6f\x64\x65\x3a\x20", 21, -8877512154781713630, NULL };
static panda$core$String $s2152 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "", 0, 1, NULL };
static panda$core$String $s2153 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 13, -8809212395465398403, NULL };
static panda$core$String $s2157 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x41\x53\x54\x4e\x6f\x64\x65\x2e\x70\x61\x6e\x64\x61", 13, -8809212395465398403, NULL };
static panda$core$String $s2158 = { (panda$core$Class*) &panda$core$String$class, -999, (panda$core$Char8*) "\x66\x75\x6e\x63\x74\x69\x6f\x6e\x20\x6f\x72\x67\x2e\x70\x61\x6e\x64\x61\x6c\x61\x6e\x67\x75\x61\x67\x65\x2e\x70\x61\x6e\x64\x61\x63\x2e\x41\x53\x54\x4e\x6f\x64\x65\x2e\x63\x6f\x6e\x76\x65\x72\x74\x28\x29\x3a\x70\x61\x6e\x64\x61\x2e\x63\x6f\x72\x65\x2e\x53\x74\x72\x69\x6e\x67\x20\x65\x78\x69\x74\x65\x64\x20\x77\x69\x74\x68\x6f\x75\x74\x20\x72\x65\x74\x75\x72\x6e\x69\x6e\x67", 94, -4884667081240384487, NULL };

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
// line 88
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
// line 90
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
panda$collections$ImmutableArray** $tmp21 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp22 = *$tmp21;
// line 93
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
// line 96
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
// line 99
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
// line 102
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
// line 105
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
// line 108
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
panda$collections$ImmutableArray** $tmp73 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp74 = *$tmp73;
// line 111
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
// line 114
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
panda$collections$ImmutableArray** $tmp91 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp92 = *$tmp91;
// line 117
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
panda$collections$ImmutableArray** $tmp103 = (panda$collections$ImmutableArray**) (param0->$data + 32);
panda$collections$ImmutableArray* $tmp104 = *$tmp103;
// line 120
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
// line 123
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
panda$collections$ImmutableArray** $tmp125 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp126 = *$tmp125;
org$pandalanguage$pandac$ClassDecl$Kind* $tmp127 = (org$pandalanguage$pandac$ClassDecl$Kind*) (param0->$data + 32);
org$pandalanguage$pandac$ClassDecl$Kind $tmp128 = *$tmp127;
panda$core$String** $tmp129 = (panda$core$String**) (param0->$data + 40);
panda$core$String* $tmp130 = *$tmp129;
panda$collections$ImmutableArray** $tmp131 = (panda$collections$ImmutableArray**) (param0->$data + 48);
panda$collections$ImmutableArray* $tmp132 = *$tmp131;
panda$collections$ImmutableArray** $tmp133 = (panda$collections$ImmutableArray**) (param0->$data + 56);
panda$collections$ImmutableArray* $tmp134 = *$tmp133;
panda$collections$ImmutableArray** $tmp135 = (panda$collections$ImmutableArray**) (param0->$data + 64);
panda$collections$ImmutableArray* $tmp136 = *$tmp135;
// line 126
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
// line 129
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
// line 132
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
panda$collections$ImmutableArray** $tmp163 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp164 = *$tmp163;
org$pandalanguage$pandac$ASTNode** $tmp165 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp166 = *$tmp165;
// line 135
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
// line 138
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
panda$collections$ImmutableArray** $tmp185 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp186 = *$tmp185;
org$pandalanguage$pandac$ASTNode** $tmp187 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp188 = *$tmp187;
// line 141
org$pandalanguage$pandac$Position $tmp189 = *(&local17);
return $tmp189;
block37:;
panda$core$Int64 $tmp190 = (panda$core$Int64) {18};
panda$core$Bit $tmp191 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp190);
bool $tmp192 = $tmp191.value;
if ($tmp192) goto block38; else goto block39;
block38:;
panda$collections$ImmutableArray** $tmp193 = (panda$collections$ImmutableArray**) (param0->$data + 0);
panda$collections$ImmutableArray* $tmp194 = *$tmp193;
// line 144
org$pandalanguage$pandac$Position $tmp195 = org$pandalanguage$pandac$Position$init();
return $tmp195;
block39:;
panda$core$Int64 $tmp196 = (panda$core$Int64) {19};
panda$core$Bit $tmp197 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp196);
bool $tmp198 = $tmp197.value;
if ($tmp198) goto block40; else goto block41;
block40:;
org$pandalanguage$pandac$Position* $tmp199 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp200 = *$tmp199;
*(&local18) = $tmp200;
panda$core$String** $tmp201 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp202 = *$tmp201;
org$pandalanguage$pandac$ASTNode** $tmp203 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp204 = *$tmp203;
org$pandalanguage$pandac$ASTNode** $tmp205 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp206 = *$tmp205;
panda$collections$ImmutableArray** $tmp207 = (panda$collections$ImmutableArray**) (param0->$data + 40);
panda$collections$ImmutableArray* $tmp208 = *$tmp207;
// line 147
org$pandalanguage$pandac$Position $tmp209 = *(&local18);
return $tmp209;
block41:;
panda$core$Int64 $tmp210 = (panda$core$Int64) {20};
panda$core$Bit $tmp211 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp210);
bool $tmp212 = $tmp211.value;
if ($tmp212) goto block42; else goto block43;
block42:;
org$pandalanguage$pandac$Position* $tmp213 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp214 = *$tmp213;
*(&local19) = $tmp214;
panda$core$String** $tmp215 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp216 = *$tmp215;
panda$collections$ImmutableArray** $tmp217 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp218 = *$tmp217;
// line 150
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
panda$core$String** $tmp225 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp226 = *$tmp225;
// line 153
org$pandalanguage$pandac$Position $tmp227 = *(&local20);
return $tmp227;
block45:;
panda$core$Int64 $tmp228 = (panda$core$Int64) {22};
panda$core$Bit $tmp229 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp228);
bool $tmp230 = $tmp229.value;
if ($tmp230) goto block46; else goto block47;
block46:;
org$pandalanguage$pandac$Position* $tmp231 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp232 = *$tmp231;
*(&local21) = $tmp232;
org$pandalanguage$pandac$ASTNode** $tmp233 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp234 = *$tmp233;
panda$collections$ImmutableArray** $tmp235 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp236 = *$tmp235;
org$pandalanguage$pandac$ASTNode** $tmp237 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp238 = *$tmp237;
// line 156
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
panda$core$UInt64* $tmp245 = (panda$core$UInt64*) (param0->$data + 16);
panda$core$UInt64 $tmp246 = *$tmp245;
// line 159
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
org$pandalanguage$pandac$IR$Value** $tmp253 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp254 = *$tmp253;
// line 162
org$pandalanguage$pandac$Position $tmp255 = *(&local23);
return $tmp255;
block51:;
panda$core$Int64 $tmp256 = (panda$core$Int64) {25};
panda$core$Bit $tmp257 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp256);
bool $tmp258 = $tmp257.value;
if ($tmp258) goto block52; else goto block53;
block52:;
org$pandalanguage$pandac$Position* $tmp259 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp260 = *$tmp259;
*(&local24) = $tmp260;
panda$core$String** $tmp261 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp262 = *$tmp261;
panda$collections$ImmutableArray** $tmp263 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp264 = *$tmp263;
// line 165
org$pandalanguage$pandac$Position $tmp265 = *(&local24);
return $tmp265;
block53:;
panda$core$Int64 $tmp266 = (panda$core$Int64) {26};
panda$core$Bit $tmp267 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp266);
bool $tmp268 = $tmp267.value;
if ($tmp268) goto block54; else goto block55;
block54:;
org$pandalanguage$pandac$Position* $tmp269 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp270 = *$tmp269;
*(&local25) = $tmp270;
org$pandalanguage$pandac$ASTNode** $tmp271 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp272 = *$tmp271;
panda$collections$ImmutableArray** $tmp273 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp274 = *$tmp273;
panda$collections$ImmutableArray** $tmp275 = (panda$collections$ImmutableArray**) (param0->$data + 32);
panda$collections$ImmutableArray* $tmp276 = *$tmp275;
// line 168
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
org$pandalanguage$pandac$ASTNode** $tmp283 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp284 = *$tmp283;
panda$collections$ImmutableArray** $tmp285 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp286 = *$tmp285;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp287 = (org$pandalanguage$pandac$MethodDecl$Kind*) (param0->$data + 32);
org$pandalanguage$pandac$MethodDecl$Kind $tmp288 = *$tmp287;
panda$core$String** $tmp289 = (panda$core$String**) (param0->$data + 40);
panda$core$String* $tmp290 = *$tmp289;
panda$collections$ImmutableArray** $tmp291 = (panda$collections$ImmutableArray**) (param0->$data + 48);
panda$collections$ImmutableArray* $tmp292 = *$tmp291;
panda$collections$ImmutableArray** $tmp293 = (panda$collections$ImmutableArray**) (param0->$data + 56);
panda$collections$ImmutableArray* $tmp294 = *$tmp293;
org$pandalanguage$pandac$ASTNode** $tmp295 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 64);
org$pandalanguage$pandac$ASTNode* $tmp296 = *$tmp295;
panda$collections$ImmutableArray** $tmp297 = (panda$collections$ImmutableArray**) (param0->$data + 72);
panda$collections$ImmutableArray* $tmp298 = *$tmp297;
// line 171
org$pandalanguage$pandac$Position $tmp299 = *(&local26);
return $tmp299;
block57:;
panda$core$Int64 $tmp300 = (panda$core$Int64) {28};
panda$core$Bit $tmp301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp300);
bool $tmp302 = $tmp301.value;
if ($tmp302) goto block58; else goto block59;
block58:;
org$pandalanguage$pandac$Position* $tmp303 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp304 = *$tmp303;
*(&local27) = $tmp304;
org$pandalanguage$pandac$parser$Token$Kind* $tmp305 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp306 = *$tmp305;
panda$collections$ImmutableArray** $tmp307 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp308 = *$tmp307;
org$pandalanguage$pandac$ASTNode** $tmp309 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp310 = *$tmp309;
// line 174
org$pandalanguage$pandac$Position $tmp311 = *(&local27);
return $tmp311;
block59:;
panda$core$Int64 $tmp312 = (panda$core$Int64) {29};
panda$core$Bit $tmp313 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp312);
bool $tmp314 = $tmp313.value;
if ($tmp314) goto block60; else goto block61;
block60:;
org$pandalanguage$pandac$Position* $tmp315 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp316 = *$tmp315;
*(&local28) = $tmp316;
// line 177
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
org$pandalanguage$pandac$ASTNode** $tmp323 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp324 = *$tmp323;
// line 180
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
// line 183
org$pandalanguage$pandac$Position $tmp333 = *(&local30);
return $tmp333;
block65:;
panda$core$Int64 $tmp334 = (panda$core$Int64) {32};
panda$core$Bit $tmp335 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp334);
bool $tmp336 = $tmp335.value;
if ($tmp336) goto block66; else goto block67;
block66:;
org$pandalanguage$pandac$Position* $tmp337 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp338 = *$tmp337;
*(&local31) = $tmp338;
panda$core$String** $tmp339 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp340 = *$tmp339;
org$pandalanguage$pandac$ASTNode** $tmp341 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp342 = *$tmp341;
// line 186
org$pandalanguage$pandac$Position $tmp343 = *(&local31);
return $tmp343;
block67:;
panda$core$Int64 $tmp344 = (panda$core$Int64) {33};
panda$core$Bit $tmp345 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp344);
bool $tmp346 = $tmp345.value;
if ($tmp346) goto block68; else goto block69;
block68:;
org$pandalanguage$pandac$Position* $tmp347 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp348 = *$tmp347;
*(&local32) = $tmp348;
org$pandalanguage$pandac$parser$Token$Kind* $tmp349 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp350 = *$tmp349;
org$pandalanguage$pandac$ASTNode** $tmp351 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp352 = *$tmp351;
// line 189
org$pandalanguage$pandac$Position $tmp353 = *(&local32);
return $tmp353;
block69:;
panda$core$Int64 $tmp354 = (panda$core$Int64) {34};
panda$core$Bit $tmp355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp354);
bool $tmp356 = $tmp355.value;
if ($tmp356) goto block70; else goto block71;
block70:;
org$pandalanguage$pandac$Position* $tmp357 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp358 = *$tmp357;
*(&local33) = $tmp358;
org$pandalanguage$pandac$ASTNode** $tmp359 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp360 = *$tmp359;
panda$core$Bit* $tmp361 = (panda$core$Bit*) (param0->$data + 24);
panda$core$Bit $tmp362 = *$tmp361;
org$pandalanguage$pandac$ASTNode** $tmp363 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 25);
org$pandalanguage$pandac$ASTNode* $tmp364 = *$tmp363;
org$pandalanguage$pandac$ASTNode** $tmp365 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 33);
org$pandalanguage$pandac$ASTNode* $tmp366 = *$tmp365;
// line 192
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
panda$core$Real64* $tmp373 = (panda$core$Real64*) (param0->$data + 16);
panda$core$Real64 $tmp374 = *$tmp373;
// line 195
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
panda$core$String** $tmp381 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp382 = *$tmp381;
// line 198
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
org$pandalanguage$pandac$ASTNode** $tmp389 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp390 = *$tmp389;
// line 201
org$pandalanguage$pandac$Position $tmp391 = *(&local36);
return $tmp391;
block77:;
panda$core$Int64 $tmp392 = (panda$core$Int64) {38};
panda$core$Bit $tmp393 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp392);
bool $tmp394 = $tmp393.value;
if ($tmp394) goto block78; else goto block79;
block78:;
org$pandalanguage$pandac$Position* $tmp395 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp396 = *$tmp395;
*(&local37) = $tmp396;
// line 204
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
panda$core$String** $tmp403 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp404 = *$tmp403;
// line 207
org$pandalanguage$pandac$Position $tmp405 = *(&local38);
return $tmp405;
block81:;
panda$core$Int64 $tmp406 = (panda$core$Int64) {40};
panda$core$Bit $tmp407 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp406);
bool $tmp408 = $tmp407.value;
if ($tmp408) goto block82; else goto block83;
block82:;
org$pandalanguage$pandac$Position* $tmp409 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp410 = *$tmp409;
*(&local39) = $tmp410;
// line 210
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
// line 213
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
panda$collections$ImmutableArray** $tmp425 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp426 = *$tmp425;
// line 216
org$pandalanguage$pandac$Position $tmp427 = *(&local41);
return $tmp427;
block87:;
panda$core$Int64 $tmp428 = (panda$core$Int64) {43};
panda$core$Bit $tmp429 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp428);
bool $tmp430 = $tmp429.value;
if ($tmp430) goto block88; else goto block89;
block88:;
org$pandalanguage$pandac$Position* $tmp431 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp432 = *$tmp431;
*(&local42) = $tmp432;
panda$core$String** $tmp433 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp434 = *$tmp433;
// line 219
org$pandalanguage$pandac$Position $tmp435 = *(&local42);
return $tmp435;
block89:;
panda$core$Int64 $tmp436 = (panda$core$Int64) {45};
panda$core$Bit $tmp437 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp436);
bool $tmp438 = $tmp437.value;
if ($tmp438) goto block90; else goto block91;
block90:;
org$pandalanguage$pandac$Position* $tmp439 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp440 = *$tmp439;
*(&local43) = $tmp440;
panda$core$String** $tmp441 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp442 = *$tmp441;
org$pandalanguage$pandac$ASTNode** $tmp443 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp444 = *$tmp443;
// line 222
org$pandalanguage$pandac$Position $tmp445 = *(&local43);
return $tmp445;
block91:;
panda$core$Int64 $tmp446 = (panda$core$Int64) {44};
panda$core$Bit $tmp447 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp446);
bool $tmp448 = $tmp447.value;
if ($tmp448) goto block92; else goto block93;
block92:;
org$pandalanguage$pandac$Position* $tmp449 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp450 = *$tmp449;
*(&local44) = $tmp450;
panda$collections$ImmutableArray** $tmp451 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp452 = *$tmp451;
org$pandalanguage$pandac$ASTNode** $tmp453 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp454 = *$tmp453;
// line 225
org$pandalanguage$pandac$Position $tmp455 = *(&local44);
return $tmp455;
block93:;
panda$core$Int64 $tmp456 = (panda$core$Int64) {46};
panda$core$Bit $tmp457 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp456);
bool $tmp458 = $tmp457.value;
if ($tmp458) goto block94; else goto block95;
block94:;
org$pandalanguage$pandac$Position* $tmp459 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp460 = *$tmp459;
*(&local45) = $tmp460;
panda$collections$ImmutableArray** $tmp461 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp462 = *$tmp461;
org$pandalanguage$pandac$ASTNode** $tmp463 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp464 = *$tmp463;
// line 228
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
panda$core$String** $tmp471 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp472 = *$tmp471;
// line 231
org$pandalanguage$pandac$Position $tmp473 = *(&local46);
return $tmp473;
block97:;
panda$core$Int64 $tmp474 = (panda$core$Int64) {48};
panda$core$Bit $tmp475 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp474);
bool $tmp476 = $tmp475.value;
if ($tmp476) goto block98; else goto block99;
block98:;
org$pandalanguage$pandac$Position* $tmp477 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp478 = *$tmp477;
*(&local47) = $tmp478;
org$pandalanguage$pandac$Variable$Kind* $tmp479 = (org$pandalanguage$pandac$Variable$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$Variable$Kind $tmp480 = *$tmp479;
panda$collections$ImmutableArray** $tmp481 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp482 = *$tmp481;
// line 234
org$pandalanguage$pandac$Position $tmp483 = *(&local47);
return $tmp483;
block99:;
panda$core$Int64 $tmp484 = (panda$core$Int64) {49};
panda$core$Bit $tmp485 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp484);
bool $tmp486 = $tmp485.value;
if ($tmp486) goto block100; else goto block101;
block100:;
org$pandalanguage$pandac$Position* $tmp487 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp488 = *$tmp487;
*(&local48) = $tmp488;
panda$collections$ImmutableArray** $tmp489 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp490 = *$tmp489;
panda$collections$ImmutableArray** $tmp491 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp492 = *$tmp491;
// line 237
org$pandalanguage$pandac$Position $tmp493 = *(&local48);
return $tmp493;
block101:;
panda$core$Int64 $tmp494 = (panda$core$Int64) {50};
panda$core$Bit $tmp495 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp3, $tmp494);
bool $tmp496 = $tmp495.value;
if ($tmp496) goto block102; else goto block103;
block102:;
org$pandalanguage$pandac$Position* $tmp497 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp498 = *$tmp497;
*(&local49) = $tmp498;
panda$core$String** $tmp499 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp500 = *$tmp499;
org$pandalanguage$pandac$ASTNode** $tmp501 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp502 = *$tmp501;
panda$collections$ImmutableArray** $tmp503 = (panda$collections$ImmutableArray**) (param0->$data + 32);
panda$collections$ImmutableArray* $tmp504 = *$tmp503;
// line 240
org$pandalanguage$pandac$Position $tmp505 = *(&local49);
return $tmp505;
block103:;
// line 243
panda$core$Bit $tmp506 = panda$core$Bit$init$builtin_bit(false);
bool $tmp507 = $tmp506.value;
if ($tmp507) goto block104; else goto block105;
block105:;
panda$core$Int64 $tmp508 = (panda$core$Int64) {243};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64(&$s509, $tmp508);
abort(); // unreachable
block104:;
goto block1;
block1:;
panda$core$Bit $tmp510 = panda$core$Bit$init$builtin_bit(false);
bool $tmp511 = $tmp510.value;
if ($tmp511) goto block106; else goto block107;
block107:;
panda$core$Int64 $tmp512 = (panda$core$Int64) {87};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s513, $tmp512, &$s514);
abort(); // unreachable
block106:;
abort(); // unreachable

}
panda$core$String* org$pandalanguage$pandac$ASTNode$convert$R$panda$core$String(org$pandalanguage$pandac$ASTNode* param0) {

panda$core$String* local0 = NULL;
org$pandalanguage$pandac$ASTNode* local1 = NULL;
panda$collections$ImmutableArray* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
org$pandalanguage$pandac$ASTNode* local4 = NULL;
org$pandalanguage$pandac$ASTNode* local5 = NULL;
org$pandalanguage$pandac$ASTNode* local6 = NULL;
org$pandalanguage$pandac$parser$Token$Kind local7;
org$pandalanguage$pandac$ASTNode* local8 = NULL;
panda$core$Bit local9;
panda$collections$ImmutableArray* local10 = NULL;
panda$core$MutableString* local11 = NULL;
org$pandalanguage$pandac$ASTNode* local12 = NULL;
panda$core$String* local13 = NULL;
org$pandalanguage$pandac$ASTNode* local14 = NULL;
panda$collections$ImmutableArray* local15 = NULL;
org$pandalanguage$pandac$ASTNode* local16 = NULL;
panda$core$String* local17 = NULL;
panda$collections$ImmutableArray* local18 = NULL;
panda$core$MutableString* local19 = NULL;
org$pandalanguage$pandac$ASTNode* local20 = NULL;
org$pandalanguage$pandac$ChoiceCase* local21 = NULL;
panda$core$Int64 local22;
org$pandalanguage$pandac$ASTNode* local23 = NULL;
panda$collections$ImmutableArray* local24 = NULL;
org$pandalanguage$pandac$ClassDecl$Kind local25;
panda$core$String* local26 = NULL;
panda$collections$ImmutableArray* local27 = NULL;
panda$collections$ImmutableArray* local28 = NULL;
panda$collections$ImmutableArray* local29 = NULL;
panda$core$MutableString* local30 = NULL;
org$pandalanguage$pandac$ASTNode* local31 = NULL;
org$pandalanguage$pandac$ASTNode* local32 = NULL;
panda$core$String* local33 = NULL;
org$pandalanguage$pandac$ASTNode* local34 = NULL;
org$pandalanguage$pandac$ASTNode* local35 = NULL;
panda$core$String* local36 = NULL;
panda$collections$ImmutableArray* local37 = NULL;
org$pandalanguage$pandac$ASTNode* local38 = NULL;
panda$core$MutableString* local39 = NULL;
org$pandalanguage$pandac$ASTNode* local40 = NULL;
org$pandalanguage$pandac$ASTNode* local41 = NULL;
panda$core$String* local42 = NULL;
org$pandalanguage$pandac$ASTNode* local43 = NULL;
panda$collections$ImmutableArray* local44 = NULL;
org$pandalanguage$pandac$ASTNode* local45 = NULL;
panda$core$MutableString* local46 = NULL;
org$pandalanguage$pandac$ASTNode* local47 = NULL;
panda$collections$ImmutableArray* local48 = NULL;
panda$core$MutableString* local49 = NULL;
org$pandalanguage$pandac$ASTNode* local50 = NULL;
panda$core$String* local51 = NULL;
org$pandalanguage$pandac$ASTNode* local52 = NULL;
org$pandalanguage$pandac$ASTNode* local53 = NULL;
panda$collections$ImmutableArray* local54 = NULL;
panda$core$MutableString* local55 = NULL;
org$pandalanguage$pandac$ASTNode* local56 = NULL;
panda$core$String* local57 = NULL;
panda$collections$ImmutableArray* local58 = NULL;
panda$core$String* local59 = NULL;
org$pandalanguage$pandac$ASTNode* local60 = NULL;
panda$collections$ImmutableArray* local61 = NULL;
org$pandalanguage$pandac$ASTNode* local62 = NULL;
panda$core$MutableString* local63 = NULL;
org$pandalanguage$pandac$ASTNode* local64 = NULL;
panda$core$UInt64 local65;
org$pandalanguage$pandac$IR$Value* local66 = NULL;
panda$core$String* local67 = NULL;
panda$collections$ImmutableArray* local68 = NULL;
panda$core$MutableString* local69 = NULL;
org$pandalanguage$pandac$ASTNode* local70 = NULL;
org$pandalanguage$pandac$ASTNode* local71 = NULL;
panda$collections$ImmutableArray* local72 = NULL;
panda$collections$ImmutableArray* local73 = NULL;
panda$core$MutableString* local74 = NULL;
org$pandalanguage$pandac$ASTNode* local75 = NULL;
org$pandalanguage$pandac$ASTNode* local76 = NULL;
panda$collections$ImmutableArray* local77 = NULL;
org$pandalanguage$pandac$MethodDecl$Kind local78;
panda$core$String* local79 = NULL;
panda$collections$ImmutableArray* local80 = NULL;
panda$collections$ImmutableArray* local81 = NULL;
org$pandalanguage$pandac$ASTNode* local82 = NULL;
panda$collections$ImmutableArray* local83 = NULL;
panda$core$MutableString* local84 = NULL;
org$pandalanguage$pandac$ASTNode* local85 = NULL;
org$pandalanguage$pandac$ASTNode* local86 = NULL;
org$pandalanguage$pandac$parser$Token$Kind local87;
panda$collections$ImmutableArray* local88 = NULL;
org$pandalanguage$pandac$ASTNode* local89 = NULL;
panda$core$String* local90 = NULL;
panda$core$String* local91 = NULL;
org$pandalanguage$pandac$ASTNode* local92 = NULL;
panda$core$String* local93 = NULL;
panda$core$String* local94 = NULL;
org$pandalanguage$pandac$ASTNode* local95 = NULL;
org$pandalanguage$pandac$parser$Token$Kind local96;
org$pandalanguage$pandac$ASTNode* local97 = NULL;
org$pandalanguage$pandac$ASTNode* local98 = NULL;
panda$core$Bit local99;
org$pandalanguage$pandac$ASTNode* local100 = NULL;
org$pandalanguage$pandac$ASTNode* local101 = NULL;
panda$core$MutableString* local102 = NULL;
panda$core$Real64 local103;
panda$core$String* local104 = NULL;
org$pandalanguage$pandac$ASTNode* local105 = NULL;
panda$core$String* local106 = NULL;
panda$collections$ImmutableArray* local107 = NULL;
panda$collections$ImmutableArray* local108 = NULL;
panda$core$String* local109 = NULL;
panda$core$String* local110 = NULL;
org$pandalanguage$pandac$ASTNode* local111 = NULL;
panda$collections$ImmutableArray* local112 = NULL;
org$pandalanguage$pandac$ASTNode* local113 = NULL;
panda$collections$ImmutableArray* local114 = NULL;
org$pandalanguage$pandac$ASTNode* local115 = NULL;
panda$core$String* local116 = NULL;
org$pandalanguage$pandac$Variable$Kind local117;
panda$collections$ImmutableArray* local118 = NULL;
panda$core$MutableString* local119 = NULL;
panda$collections$ImmutableArray* local120 = NULL;
panda$collections$ImmutableArray* local121 = NULL;
panda$core$MutableString* local122 = NULL;
panda$core$String* local123 = NULL;
org$pandalanguage$pandac$ASTNode* local124 = NULL;
org$pandalanguage$pandac$ASTNode* local125 = NULL;
panda$core$String* local126 = NULL;
org$pandalanguage$pandac$ASTNode* local127 = NULL;
panda$collections$ImmutableArray* local128 = NULL;
panda$core$MutableString* local129 = NULL;
org$pandalanguage$pandac$ASTNode* local130 = NULL;
// line 250
panda$core$Int64* $tmp515 = &param0->$rawValue;
panda$core$Int64 $tmp516 = *$tmp515;
panda$core$Int64 $tmp517 = (panda$core$Int64) {0};
panda$core$Bit $tmp518 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp517);
bool $tmp519 = $tmp518.value;
if ($tmp519) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp520 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp521 = *$tmp520;
panda$core$String** $tmp522 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp523 = *$tmp522;
*(&local0) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp523));
panda$core$String* $tmp524 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp524));
*(&local0) = $tmp523;
panda$core$String** $tmp525 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp526 = *$tmp525;
org$pandalanguage$pandac$ASTNode** $tmp527 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp528 = *$tmp527;
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp528));
org$pandalanguage$pandac$ASTNode* $tmp529 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp529));
*(&local1) = $tmp528;
// line 252
org$pandalanguage$pandac$ASTNode* $tmp530 = *(&local1);
panda$core$Bit $tmp531 = panda$core$Bit$init$builtin_bit($tmp530 != NULL);
bool $tmp532 = $tmp531.value;
if ($tmp532) goto block4; else goto block5;
block4:;
// line 253
panda$core$String* $tmp533 = *(&local0);
panda$core$String* $tmp534 = panda$core$String$convert$R$panda$core$String($tmp533);
panda$core$String* $tmp535 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp534, &$s536);
org$pandalanguage$pandac$ASTNode* $tmp537 = *(&local1);
panda$core$String* $tmp538 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp535, ((panda$core$Object*) $tmp537));
panda$core$String* $tmp539 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp538, &$s540);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp539));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp539));
// unreffing REF($42:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp538));
// unreffing REF($41:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp535));
// unreffing REF($38:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp534));
// unreffing REF($37:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp541 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp541));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp542 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp542));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return $tmp539;
block5:;
// line 255
panda$core$String* $tmp543 = *(&local0);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp543));
org$pandalanguage$pandac$ASTNode* $tmp544 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp544));
// unreffing expr
*(&local1) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp545 = *(&local0);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp545));
// unreffing name
*(&local0) = ((panda$core$String*) NULL);
return $tmp543;
block3:;
panda$core$Int64 $tmp546 = (panda$core$Int64) {1};
panda$core$Bit $tmp547 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp546);
bool $tmp548 = $tmp547.value;
if ($tmp548) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$Position* $tmp549 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp550 = *$tmp549;
panda$collections$ImmutableArray** $tmp551 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp552 = *$tmp551;
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp552));
panda$collections$ImmutableArray* $tmp553 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp553));
*(&local2) = $tmp552;
// line 258
panda$collections$ImmutableArray* $tmp554 = *(&local2);
panda$core$String* $tmp555 = panda$collections$ImmutableArray$convert$R$panda$core$String($tmp554);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp555));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp555));
// unreffing REF($101:panda.core.String)
panda$collections$ImmutableArray* $tmp556 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp556));
// unreffing elements
*(&local2) = ((panda$collections$ImmutableArray*) NULL);
return $tmp555;
block7:;
panda$core$Int64 $tmp557 = (panda$core$Int64) {2};
panda$core$Bit $tmp558 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp557);
bool $tmp559 = $tmp558.value;
if ($tmp559) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$Position* $tmp560 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp561 = *$tmp560;
org$pandalanguage$pandac$ASTNode** $tmp562 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp563 = *$tmp562;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp563));
org$pandalanguage$pandac$ASTNode* $tmp564 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp564));
*(&local3) = $tmp563;
org$pandalanguage$pandac$ASTNode** $tmp565 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp566 = *$tmp565;
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp566));
org$pandalanguage$pandac$ASTNode* $tmp567 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp567));
*(&local4) = $tmp566;
// line 261
org$pandalanguage$pandac$ASTNode* $tmp568 = *(&local4);
panda$core$Bit $tmp569 = panda$core$Bit$init$builtin_bit($tmp568 == NULL);
bool $tmp570 = $tmp569.value;
if ($tmp570) goto block10; else goto block11;
block10:;
// line 262
org$pandalanguage$pandac$ASTNode* $tmp571 = *(&local3);
panda$core$String* $tmp572 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s573, ((panda$core$Object*) $tmp571));
panda$core$String* $tmp574 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp572, &$s575);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp574));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp574));
// unreffing REF($147:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp572));
// unreffing REF($146:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp576 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp576));
// unreffing msg
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp577 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp577));
// unreffing test
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp574;
block11:;
// line 264
org$pandalanguage$pandac$ASTNode* $tmp578 = *(&local3);
panda$core$String* $tmp579 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s580, ((panda$core$Object*) $tmp578));
panda$core$String* $tmp581 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp579, &$s582);
org$pandalanguage$pandac$ASTNode* $tmp583 = *(&local4);
panda$core$String* $tmp584 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp581, ((panda$core$Object*) $tmp583));
panda$core$String* $tmp585 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp584, &$s586);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp585));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp585));
// unreffing REF($175:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp584));
// unreffing REF($174:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp581));
// unreffing REF($171:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp579));
// unreffing REF($170:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp587 = *(&local4);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp587));
// unreffing msg
*(&local4) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp588 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp588));
// unreffing test
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp585;
block9:;
panda$core$Int64 $tmp589 = (panda$core$Int64) {3};
panda$core$Bit $tmp590 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp589);
bool $tmp591 = $tmp590.value;
if ($tmp591) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Position* $tmp592 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp593 = *$tmp592;
org$pandalanguage$pandac$ASTNode** $tmp594 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp595 = *$tmp594;
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp595));
org$pandalanguage$pandac$ASTNode* $tmp596 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp596));
*(&local5) = $tmp595;
// line 267
org$pandalanguage$pandac$ASTNode* $tmp597 = *(&local5);
panda$core$String* $tmp598 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s599, ((panda$core$Object*) $tmp597));
panda$core$String* $tmp600 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp598, &$s601);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp600));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp600));
// unreffing REF($220:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp598));
// unreffing REF($219:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp602 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp602));
// unreffing expr
*(&local5) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp600;
block13:;
panda$core$Int64 $tmp603 = (panda$core$Int64) {4};
panda$core$Bit $tmp604 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp603);
bool $tmp605 = $tmp604.value;
if ($tmp605) goto block14; else goto block15;
block14:;
org$pandalanguage$pandac$Position* $tmp606 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp607 = *$tmp606;
// line 270
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s608));
return &$s609;
block15:;
panda$core$Int64 $tmp610 = (panda$core$Int64) {5};
panda$core$Bit $tmp611 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp610);
bool $tmp612 = $tmp611.value;
if ($tmp612) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$Position* $tmp613 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp614 = *$tmp613;
org$pandalanguage$pandac$ASTNode** $tmp615 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp616 = *$tmp615;
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp616));
org$pandalanguage$pandac$ASTNode* $tmp617 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp617));
*(&local6) = $tmp616;
org$pandalanguage$pandac$parser$Token$Kind* $tmp618 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 24);
org$pandalanguage$pandac$parser$Token$Kind $tmp619 = *$tmp618;
*(&local7) = $tmp619;
org$pandalanguage$pandac$ASTNode** $tmp620 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp621 = *$tmp620;
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp621));
org$pandalanguage$pandac$ASTNode* $tmp622 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp622));
*(&local8) = $tmp621;
// line 273
org$pandalanguage$pandac$ASTNode* $tmp623 = *(&local6);
panda$core$String* $tmp624 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s625, ((panda$core$Object*) $tmp623));
panda$core$String* $tmp626 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp624, &$s627);
org$pandalanguage$pandac$parser$Token$Kind $tmp628 = *(&local7);
org$pandalanguage$pandac$parser$Token$Kind$wrapper* $tmp629;
$tmp629 = (org$pandalanguage$pandac$parser$Token$Kind$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &org$pandalanguage$pandac$parser$Token$Kind$wrapperclass);
$tmp629->value = $tmp628;
panda$core$String* $tmp630 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp626, ((panda$core$Object*) $tmp629));
panda$core$String* $tmp631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp630, &$s632);
org$pandalanguage$pandac$ASTNode* $tmp633 = *(&local8);
panda$core$String* $tmp634 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp631, ((panda$core$Object*) $tmp633));
panda$core$String* $tmp635 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp634, &$s636);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp635));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp635));
// unreffing REF($284:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp634));
// unreffing REF($283:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp631));
// unreffing REF($280:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp630));
// unreffing REF($279:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp629));
// unreffing REF($278:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp626));
// unreffing REF($276:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp624));
// unreffing REF($275:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp637 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp637));
// unreffing right
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp638 = *(&local6);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp638));
// unreffing left
*(&local6) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp635;
block17:;
panda$core$Int64 $tmp639 = (panda$core$Int64) {6};
panda$core$Bit $tmp640 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp639);
bool $tmp641 = $tmp640.value;
if ($tmp641) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$Position* $tmp642 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp643 = *$tmp642;
panda$core$Bit* $tmp644 = (panda$core$Bit*) (param0->$data + 16);
panda$core$Bit $tmp645 = *$tmp644;
*(&local9) = $tmp645;
// line 276
panda$core$Bit $tmp646 = *(&local9);
panda$core$String* $tmp647 = panda$core$Bit$convert$R$panda$core$String($tmp646);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp647));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp647));
// unreffing REF($330:panda.core.String)
return $tmp647;
block19:;
panda$core$Int64 $tmp648 = (panda$core$Int64) {7};
panda$core$Bit $tmp649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp648);
bool $tmp650 = $tmp649.value;
if ($tmp650) goto block20; else goto block21;
block20:;
org$pandalanguage$pandac$Position* $tmp651 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp652 = *$tmp651;
panda$collections$ImmutableArray** $tmp653 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp654 = *$tmp653;
*(&local10) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp654));
panda$collections$ImmutableArray* $tmp655 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp655));
*(&local10) = $tmp654;
// line 279
panda$core$MutableString* $tmp656 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp656, &$s657);
*(&local11) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp656));
panda$core$MutableString* $tmp658 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp658));
*(&local11) = $tmp656;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp656));
// unreffing REF($353:panda.core.MutableString)
// line 280
panda$collections$ImmutableArray* $tmp659 = *(&local10);
ITable* $tmp660 = ((panda$collections$Iterable*) $tmp659)->$class->itable;
while ($tmp660->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp660 = $tmp660->next;
}
$fn662 $tmp661 = $tmp660->methods[0];
panda$collections$Iterator* $tmp663 = $tmp661(((panda$collections$Iterable*) $tmp659));
goto block22;
block22:;
ITable* $tmp664 = $tmp663->$class->itable;
while ($tmp664->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp664 = $tmp664->next;
}
$fn666 $tmp665 = $tmp664->methods[0];
panda$core$Bit $tmp667 = $tmp665($tmp663);
bool $tmp668 = $tmp667.value;
if ($tmp668) goto block24; else goto block23;
block23:;
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp669 = $tmp663->$class->itable;
while ($tmp669->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp669 = $tmp669->next;
}
$fn671 $tmp670 = $tmp669->methods[1];
panda$core$Object* $tmp672 = $tmp670($tmp663);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp672)));
org$pandalanguage$pandac$ASTNode* $tmp673 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp673));
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) $tmp672);
// line 281
panda$core$MutableString* $tmp674 = *(&local11);
org$pandalanguage$pandac$ASTNode* $tmp675 = *(&local12);
panda$core$String* $tmp676 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp675), &$s677);
panda$core$MutableString$append$panda$core$String($tmp674, $tmp676);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp676));
// unreffing REF($393:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp672);
// unreffing REF($381:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp678 = *(&local12);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp678));
// unreffing s
*(&local12) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block22;
block24:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp663));
// unreffing REF($370:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 283
panda$core$MutableString* $tmp679 = *(&local11);
panda$core$MutableString$append$panda$core$String($tmp679, &$s680);
// line 284
panda$core$MutableString* $tmp681 = *(&local11);
panda$core$String* $tmp682 = panda$core$MutableString$finish$R$panda$core$String($tmp681);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp682));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp682));
// unreffing REF($415:panda.core.String)
panda$core$MutableString* $tmp683 = *(&local11);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp683));
// unreffing result
*(&local11) = ((panda$core$MutableString*) NULL);
panda$collections$ImmutableArray* $tmp684 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp684));
// unreffing statements
*(&local10) = ((panda$collections$ImmutableArray*) NULL);
return $tmp682;
block21:;
panda$core$Int64 $tmp685 = (panda$core$Int64) {8};
panda$core$Bit $tmp686 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp685);
bool $tmp687 = $tmp686.value;
if ($tmp687) goto block25; else goto block26;
block25:;
org$pandalanguage$pandac$Position* $tmp688 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp689 = *$tmp688;
panda$core$String** $tmp690 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp691 = *$tmp690;
*(&local13) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp691));
panda$core$String* $tmp692 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp692));
*(&local13) = $tmp691;
// line 287
panda$core$String* $tmp693 = *(&local13);
panda$core$Bit $tmp694 = panda$core$Bit$init$builtin_bit($tmp693 != NULL);
bool $tmp695 = $tmp694.value;
if ($tmp695) goto block27; else goto block28;
block27:;
// line 288
panda$core$String* $tmp696 = *(&local13);
panda$core$String* $tmp697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s698, $tmp696);
panda$core$String* $tmp699 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp697, &$s700);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp699));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp699));
// unreffing REF($457:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp697));
// unreffing REF($456:panda.core.String)
panda$core$String* $tmp701 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp701));
// unreffing label
*(&local13) = ((panda$core$String*) NULL);
return $tmp699;
block28:;
// line 290
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s702));
panda$core$String* $tmp703 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp703));
// unreffing label
*(&local13) = ((panda$core$String*) NULL);
return &$s704;
block26:;
panda$core$Int64 $tmp705 = (panda$core$Int64) {9};
panda$core$Bit $tmp706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp705);
bool $tmp707 = $tmp706.value;
if ($tmp707) goto block29; else goto block30;
block29:;
org$pandalanguage$pandac$Position* $tmp708 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp709 = *$tmp708;
org$pandalanguage$pandac$ASTNode** $tmp710 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp711 = *$tmp710;
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp711));
org$pandalanguage$pandac$ASTNode* $tmp712 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp712));
*(&local14) = $tmp711;
panda$collections$ImmutableArray** $tmp713 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp714 = *$tmp713;
*(&local15) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp714));
panda$collections$ImmutableArray* $tmp715 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp715));
*(&local15) = $tmp714;
// line 293
org$pandalanguage$pandac$ASTNode* $tmp716 = *(&local14);
$fn718 $tmp717 = ($fn718) $tmp716->$class->vtable[0];
panda$core$String* $tmp719 = $tmp717($tmp716);
panda$core$String* $tmp720 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp719, &$s721);
panda$collections$ImmutableArray* $tmp722 = *(&local15);
ITable* $tmp723 = ((panda$collections$CollectionView*) $tmp722)->$class->itable;
while ($tmp723->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp723 = $tmp723->next;
}
$fn725 $tmp724 = $tmp723->methods[1];
panda$core$String* $tmp726 = $tmp724(((panda$collections$CollectionView*) $tmp722));
panda$core$String* $tmp727 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp720, $tmp726);
panda$core$String* $tmp728 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp727, &$s729);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp728));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp728));
// unreffing REF($515:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp727));
// unreffing REF($514:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp726));
// unreffing REF($513:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp720));
// unreffing REF($509:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp719));
// unreffing REF($508:panda.core.String)
panda$collections$ImmutableArray* $tmp730 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp730));
// unreffing args
*(&local15) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp731 = *(&local14);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp731));
// unreffing target
*(&local14) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp728;
block30:;
panda$core$Int64 $tmp732 = (panda$core$Int64) {10};
panda$core$Bit $tmp733 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp732);
bool $tmp734 = $tmp733.value;
if ($tmp734) goto block31; else goto block32;
block31:;
org$pandalanguage$pandac$Position* $tmp735 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp736 = *$tmp735;
org$pandalanguage$pandac$ASTNode** $tmp737 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp738 = *$tmp737;
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp738));
org$pandalanguage$pandac$ASTNode* $tmp739 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp739));
*(&local16) = $tmp738;
panda$core$String** $tmp740 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp741 = *$tmp740;
*(&local17) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp741));
panda$core$String* $tmp742 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp742));
*(&local17) = $tmp741;
panda$collections$ImmutableArray** $tmp743 = (panda$collections$ImmutableArray**) (param0->$data + 32);
panda$collections$ImmutableArray* $tmp744 = *$tmp743;
*(&local18) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp744));
panda$collections$ImmutableArray* $tmp745 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp745));
*(&local18) = $tmp744;
// line 296
panda$core$MutableString* $tmp746 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp746);
*(&local19) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp746));
panda$core$MutableString* $tmp747 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp747));
*(&local19) = $tmp746;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp746));
// unreffing REF($578:panda.core.MutableString)
// line 297
org$pandalanguage$pandac$ASTNode* $tmp748 = *(&local16);
panda$core$Bit $tmp749 = panda$core$Bit$init$builtin_bit($tmp748 != NULL);
bool $tmp750 = $tmp749.value;
if ($tmp750) goto block33; else goto block34;
block33:;
// line 298
panda$core$MutableString* $tmp751 = *(&local19);
org$pandalanguage$pandac$ASTNode* $tmp752 = *(&local16);
panda$core$String* $tmp753 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp752), &$s754);
panda$core$MutableString$append$panda$core$String($tmp751, $tmp753);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp753));
// unreffing REF($600:panda.core.String)
goto block34;
block34:;
// line 300
panda$core$MutableString* $tmp755 = *(&local19);
panda$core$String* $tmp756 = *(&local17);
panda$core$String* $tmp757 = panda$core$String$convert$R$panda$core$String($tmp756);
panda$core$String* $tmp758 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp757, &$s759);
panda$collections$ImmutableArray* $tmp760 = *(&local18);
ITable* $tmp761 = ((panda$collections$CollectionView*) $tmp760)->$class->itable;
while ($tmp761->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp761 = $tmp761->next;
}
$fn763 $tmp762 = $tmp761->methods[1];
panda$core$String* $tmp764 = $tmp762(((panda$collections$CollectionView*) $tmp760));
panda$core$String* $tmp765 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp758, $tmp764);
panda$core$String* $tmp766 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp765, &$s767);
panda$core$MutableString$append$panda$core$String($tmp755, $tmp766);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp766));
// unreffing REF($616:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp765));
// unreffing REF($615:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp764));
// unreffing REF($614:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp758));
// unreffing REF($610:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp757));
// unreffing REF($609:panda.core.String)
// line 301
panda$core$MutableString* $tmp768 = *(&local19);
panda$core$String* $tmp769 = panda$core$MutableString$finish$R$panda$core$String($tmp768);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp769));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp769));
// unreffing REF($635:panda.core.String)
panda$core$MutableString* $tmp770 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp770));
// unreffing result
*(&local19) = ((panda$core$MutableString*) NULL);
panda$collections$ImmutableArray* $tmp771 = *(&local18);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp771));
// unreffing fields
*(&local18) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp772 = *(&local17);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp772));
// unreffing name
*(&local17) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp773 = *(&local16);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp773));
// unreffing dc
*(&local16) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp769;
block32:;
panda$core$Int64 $tmp774 = (panda$core$Int64) {11};
panda$core$Bit $tmp775 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp774);
bool $tmp776 = $tmp775.value;
if ($tmp776) goto block35; else goto block36;
block35:;
org$pandalanguage$pandac$Position* $tmp777 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp778 = *$tmp777;
org$pandalanguage$pandac$ASTNode** $tmp779 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp780 = *$tmp779;
*(&local20) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp780));
org$pandalanguage$pandac$ASTNode* $tmp781 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp781));
*(&local20) = $tmp780;
org$pandalanguage$pandac$ChoiceCase** $tmp782 = (org$pandalanguage$pandac$ChoiceCase**) (param0->$data + 24);
org$pandalanguage$pandac$ChoiceCase* $tmp783 = *$tmp782;
*(&local21) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp783));
org$pandalanguage$pandac$ChoiceCase* $tmp784 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp784));
*(&local21) = $tmp783;
panda$core$Int64* $tmp785 = (panda$core$Int64*) (param0->$data + 32);
panda$core$Int64 $tmp786 = *$tmp785;
*(&local22) = $tmp786;
// line 304
org$pandalanguage$pandac$ASTNode* $tmp787 = *(&local20);
$fn789 $tmp788 = ($fn789) $tmp787->$class->vtable[0];
panda$core$String* $tmp790 = $tmp788($tmp787);
panda$core$String* $tmp791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp790, &$s792);
org$pandalanguage$pandac$ChoiceCase* $tmp793 = *(&local21);
panda$core$String* $tmp794 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp791, ((panda$core$Object*) $tmp793));
panda$core$String* $tmp795 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp794, &$s796);
panda$core$Int64 $tmp797 = *(&local22);
panda$core$Int64$wrapper* $tmp798;
$tmp798 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp798->value = $tmp797;
panda$core$String* $tmp799 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp795, ((panda$core$Object*) $tmp798));
panda$core$String* $tmp800 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp799, &$s801);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp800));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp800));
// unreffing REF($701:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp799));
// unreffing REF($700:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp798));
// unreffing REF($699:panda.core.Object)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp795));
// unreffing REF($697:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp794));
// unreffing REF($696:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp791));
// unreffing REF($693:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp790));
// unreffing REF($692:panda.core.String)
org$pandalanguage$pandac$ChoiceCase* $tmp802 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp802));
// unreffing ce
*(&local21) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp803 = *(&local20);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp803));
// unreffing base
*(&local20) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp800;
block36:;
panda$core$Int64 $tmp804 = (panda$core$Int64) {12};
panda$core$Bit $tmp805 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp804);
bool $tmp806 = $tmp805.value;
if ($tmp806) goto block37; else goto block38;
block37:;
org$pandalanguage$pandac$Position* $tmp807 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp808 = *$tmp807;
org$pandalanguage$pandac$ASTNode** $tmp809 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp810 = *$tmp809;
*(&local23) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp810));
org$pandalanguage$pandac$ASTNode* $tmp811 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp811));
*(&local23) = $tmp810;
panda$collections$ImmutableArray** $tmp812 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp813 = *$tmp812;
*(&local24) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp813));
panda$collections$ImmutableArray* $tmp814 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp814));
*(&local24) = $tmp813;
org$pandalanguage$pandac$ClassDecl$Kind* $tmp815 = (org$pandalanguage$pandac$ClassDecl$Kind*) (param0->$data + 32);
org$pandalanguage$pandac$ClassDecl$Kind $tmp816 = *$tmp815;
*(&local25) = $tmp816;
panda$core$String** $tmp817 = (panda$core$String**) (param0->$data + 40);
panda$core$String* $tmp818 = *$tmp817;
*(&local26) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp818));
panda$core$String* $tmp819 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp819));
*(&local26) = $tmp818;
panda$collections$ImmutableArray** $tmp820 = (panda$collections$ImmutableArray**) (param0->$data + 48);
panda$collections$ImmutableArray* $tmp821 = *$tmp820;
*(&local27) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp821));
panda$collections$ImmutableArray* $tmp822 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp822));
*(&local27) = $tmp821;
panda$collections$ImmutableArray** $tmp823 = (panda$collections$ImmutableArray**) (param0->$data + 56);
panda$collections$ImmutableArray* $tmp824 = *$tmp823;
*(&local28) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp824));
panda$collections$ImmutableArray* $tmp825 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp825));
*(&local28) = $tmp824;
panda$collections$ImmutableArray** $tmp826 = (panda$collections$ImmutableArray**) (param0->$data + 64);
panda$collections$ImmutableArray* $tmp827 = *$tmp826;
*(&local29) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp827));
panda$collections$ImmutableArray* $tmp828 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp828));
*(&local29) = $tmp827;
// line 307
panda$core$MutableString* $tmp829 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp829);
*(&local30) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp829));
panda$core$MutableString* $tmp830 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp830));
*(&local30) = $tmp829;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp829));
// unreffing REF($800:panda.core.MutableString)
// line 308
org$pandalanguage$pandac$ASTNode* $tmp831 = *(&local23);
panda$core$Bit $tmp832 = panda$core$Bit$init$builtin_bit($tmp831 != NULL);
bool $tmp833 = $tmp832.value;
if ($tmp833) goto block39; else goto block40;
block39:;
// line 309
panda$core$MutableString* $tmp834 = *(&local30);
org$pandalanguage$pandac$ASTNode* $tmp835 = *(&local23);
panda$core$String* $tmp836 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp835), &$s837);
panda$core$MutableString$append$panda$core$String($tmp834, $tmp836);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp836));
// unreffing REF($822:panda.core.String)
goto block40;
block40:;
// line 311
panda$collections$ImmutableArray* $tmp838 = *(&local24);
ITable* $tmp839 = ((panda$collections$Iterable*) $tmp838)->$class->itable;
while ($tmp839->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp839 = $tmp839->next;
}
$fn841 $tmp840 = $tmp839->methods[0];
panda$collections$Iterator* $tmp842 = $tmp840(((panda$collections$Iterable*) $tmp838));
goto block41;
block41:;
ITable* $tmp843 = $tmp842->$class->itable;
while ($tmp843->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp843 = $tmp843->next;
}
$fn845 $tmp844 = $tmp843->methods[0];
panda$core$Bit $tmp846 = $tmp844($tmp842);
bool $tmp847 = $tmp846.value;
if ($tmp847) goto block43; else goto block42;
block42:;
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp848 = $tmp842->$class->itable;
while ($tmp848->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp848 = $tmp848->next;
}
$fn850 $tmp849 = $tmp848->methods[1];
panda$core$Object* $tmp851 = $tmp849($tmp842);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp851)));
org$pandalanguage$pandac$ASTNode* $tmp852 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp852));
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) $tmp851);
// line 312
panda$core$MutableString* $tmp853 = *(&local30);
org$pandalanguage$pandac$ASTNode* $tmp854 = *(&local31);
panda$core$String* $tmp855 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp854), &$s856);
panda$core$MutableString$append$panda$core$String($tmp853, $tmp855);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp855));
// unreffing REF($856:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp851);
// unreffing REF($844:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp857 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp857));
// unreffing a
*(&local31) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block41;
block43:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp842));
// unreffing REF($833:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 314
org$pandalanguage$pandac$ClassDecl$Kind $tmp858 = *(&local25);
panda$core$Int64 $tmp859 = $tmp858.$rawValue;
panda$core$Int64 $tmp860 = (panda$core$Int64) {0};
panda$core$Bit $tmp861 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp859, $tmp860);
bool $tmp862 = $tmp861.value;
if ($tmp862) goto block45; else goto block46;
block45:;
// line 315
panda$core$MutableString* $tmp863 = *(&local30);
panda$core$MutableString$append$panda$core$String($tmp863, &$s864);
goto block44;
block46:;
panda$core$Int64 $tmp865 = (panda$core$Int64) {1};
panda$core$Bit $tmp866 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp859, $tmp865);
bool $tmp867 = $tmp866.value;
if ($tmp867) goto block47; else goto block48;
block47:;
// line 316
panda$core$MutableString* $tmp868 = *(&local30);
panda$core$MutableString$append$panda$core$String($tmp868, &$s869);
goto block44;
block48:;
panda$core$Int64 $tmp870 = (panda$core$Int64) {2};
panda$core$Bit $tmp871 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp859, $tmp870);
bool $tmp872 = $tmp871.value;
if ($tmp872) goto block49; else goto block44;
block49:;
// line 317
panda$core$MutableString* $tmp873 = *(&local30);
panda$core$MutableString$append$panda$core$String($tmp873, &$s874);
goto block44;
block44:;
// line 319
panda$core$MutableString* $tmp875 = *(&local30);
panda$core$String* $tmp876 = *(&local26);
panda$core$MutableString$append$panda$core$String($tmp875, $tmp876);
// line 320
panda$collections$ImmutableArray* $tmp877 = *(&local27);
panda$core$Bit $tmp878 = panda$core$Bit$init$builtin_bit($tmp877 != NULL);
bool $tmp879 = $tmp878.value;
if ($tmp879) goto block50; else goto block51;
block50:;
// line 321
panda$core$MutableString* $tmp880 = *(&local30);
panda$collections$ImmutableArray* $tmp881 = *(&local27);
ITable* $tmp882 = ((panda$collections$CollectionView*) $tmp881)->$class->itable;
while ($tmp882->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp882 = $tmp882->next;
}
$fn884 $tmp883 = $tmp882->methods[1];
panda$core$String* $tmp885 = $tmp883(((panda$collections$CollectionView*) $tmp881));
panda$core$String* $tmp886 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s887, $tmp885);
panda$core$String* $tmp888 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp886, &$s889);
panda$core$MutableString$append$panda$core$String($tmp880, $tmp888);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp888));
// unreffing REF($917:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp886));
// unreffing REF($916:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp885));
// unreffing REF($915:panda.core.String)
goto block51;
block51:;
// line 323
panda$collections$ImmutableArray* $tmp890 = *(&local28);
panda$core$Bit $tmp891 = panda$core$Bit$init$builtin_bit($tmp890 != NULL);
bool $tmp892 = $tmp891.value;
if ($tmp892) goto block52; else goto block53;
block52:;
// line 324
panda$core$MutableString* $tmp893 = *(&local30);
panda$collections$ImmutableArray* $tmp894 = *(&local28);
ITable* $tmp895 = ((panda$collections$CollectionView*) $tmp894)->$class->itable;
while ($tmp895->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp895 = $tmp895->next;
}
$fn897 $tmp896 = $tmp895->methods[1];
panda$core$String* $tmp898 = $tmp896(((panda$collections$CollectionView*) $tmp894));
panda$core$String* $tmp899 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s900, $tmp898);
panda$core$String* $tmp901 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp899, &$s902);
panda$core$MutableString$append$panda$core$String($tmp893, $tmp901);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp901));
// unreffing REF($942:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp899));
// unreffing REF($941:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp898));
// unreffing REF($940:panda.core.String)
goto block53;
block53:;
// line 326
panda$core$MutableString* $tmp903 = *(&local30);
panda$core$MutableString$append$panda$core$String($tmp903, &$s904);
// line 327
panda$collections$ImmutableArray* $tmp905 = *(&local29);
ITable* $tmp906 = ((panda$collections$Iterable*) $tmp905)->$class->itable;
while ($tmp906->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp906 = $tmp906->next;
}
$fn908 $tmp907 = $tmp906->methods[0];
panda$collections$Iterator* $tmp909 = $tmp907(((panda$collections$Iterable*) $tmp905));
goto block54;
block54:;
ITable* $tmp910 = $tmp909->$class->itable;
while ($tmp910->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp910 = $tmp910->next;
}
$fn912 $tmp911 = $tmp910->methods[0];
panda$core$Bit $tmp913 = $tmp911($tmp909);
bool $tmp914 = $tmp913.value;
if ($tmp914) goto block56; else goto block55;
block55:;
*(&local32) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp915 = $tmp909->$class->itable;
while ($tmp915->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp915 = $tmp915->next;
}
$fn917 $tmp916 = $tmp915->methods[1];
panda$core$Object* $tmp918 = $tmp916($tmp909);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp918)));
org$pandalanguage$pandac$ASTNode* $tmp919 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp919));
*(&local32) = ((org$pandalanguage$pandac$ASTNode*) $tmp918);
// line 328
panda$core$MutableString* $tmp920 = *(&local30);
org$pandalanguage$pandac$ASTNode* $tmp921 = *(&local32);
panda$core$String* $tmp922 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp921), &$s923);
panda$core$MutableString$append$panda$core$String($tmp920, $tmp922);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp922));
// unreffing REF($985:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp918);
// unreffing REF($973:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp924 = *(&local32);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp924));
// unreffing m
*(&local32) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block54;
block56:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp909));
// unreffing REF($962:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 330
panda$core$MutableString* $tmp925 = *(&local30);
panda$core$MutableString$append$panda$core$String($tmp925, &$s926);
// line 331
panda$core$MutableString* $tmp927 = *(&local30);
panda$core$String* $tmp928 = panda$core$MutableString$finish$R$panda$core$String($tmp927);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp928));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp928));
// unreffing REF($1007:panda.core.String)
panda$core$MutableString* $tmp929 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp929));
// unreffing result
*(&local30) = ((panda$core$MutableString*) NULL);
panda$collections$ImmutableArray* $tmp930 = *(&local29);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp930));
// unreffing members
*(&local29) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp931 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp931));
// unreffing supertypes
*(&local28) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp932 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp932));
// unreffing generics
*(&local27) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp933 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp933));
// unreffing name
*(&local26) = ((panda$core$String*) NULL);
panda$collections$ImmutableArray* $tmp934 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp934));
// unreffing annotations
*(&local24) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp935 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp935));
// unreffing dc
*(&local23) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp928;
block38:;
panda$core$Int64 $tmp936 = (panda$core$Int64) {13};
panda$core$Bit $tmp937 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp936);
bool $tmp938 = $tmp937.value;
if ($tmp938) goto block57; else goto block58;
block57:;
org$pandalanguage$pandac$Position* $tmp939 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp940 = *$tmp939;
panda$core$String** $tmp941 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp942 = *$tmp941;
*(&local33) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp942));
panda$core$String* $tmp943 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp943));
*(&local33) = $tmp942;
// line 334
panda$core$String* $tmp944 = *(&local33);
panda$core$Bit $tmp945 = panda$core$Bit$init$builtin_bit($tmp944 != NULL);
bool $tmp946 = $tmp945.value;
if ($tmp946) goto block59; else goto block60;
block59:;
// line 335
panda$core$String* $tmp947 = *(&local33);
panda$core$String* $tmp948 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s949, $tmp947);
panda$core$String* $tmp950 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp948, &$s951);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp950));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp950));
// unreffing REF($1074:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp948));
// unreffing REF($1073:panda.core.String)
panda$core$String* $tmp952 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp952));
// unreffing label
*(&local33) = ((panda$core$String*) NULL);
return $tmp950;
block60:;
// line 337
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s953));
panda$core$String* $tmp954 = *(&local33);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp954));
// unreffing label
*(&local33) = ((panda$core$String*) NULL);
return &$s955;
block58:;
panda$core$Int64 $tmp956 = (panda$core$Int64) {14};
panda$core$Bit $tmp957 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp956);
bool $tmp958 = $tmp957.value;
if ($tmp958) goto block61; else goto block62;
block61:;
org$pandalanguage$pandac$Position* $tmp959 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp960 = *$tmp959;
org$pandalanguage$pandac$ASTNode** $tmp961 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp962 = *$tmp961;
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp962));
org$pandalanguage$pandac$ASTNode* $tmp963 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp963));
*(&local34) = $tmp962;
org$pandalanguage$pandac$ASTNode** $tmp964 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp965 = *$tmp964;
*(&local35) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp965));
org$pandalanguage$pandac$ASTNode* $tmp966 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp966));
*(&local35) = $tmp965;
// line 340
org$pandalanguage$pandac$ASTNode* $tmp967 = *(&local35);
panda$core$Bit $tmp968 = panda$core$Bit$init$builtin_bit($tmp967 != NULL);
bool $tmp969 = $tmp968.value;
if ($tmp969) goto block63; else goto block64;
block63:;
// line 341
org$pandalanguage$pandac$ASTNode* $tmp970 = *(&local34);
$fn972 $tmp971 = ($fn972) $tmp970->$class->vtable[0];
panda$core$String* $tmp973 = $tmp971($tmp970);
panda$core$String* $tmp974 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp973, &$s975);
org$pandalanguage$pandac$ASTNode* $tmp976 = *(&local35);
panda$core$String* $tmp977 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp974, ((panda$core$Object*) $tmp976));
panda$core$String* $tmp978 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp977, &$s979);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp978));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp978));
// unreffing REF($1136:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp977));
// unreffing REF($1135:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp974));
// unreffing REF($1132:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp973));
// unreffing REF($1131:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp980 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp980));
// unreffing value
*(&local35) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp981 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp981));
// unreffing target
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp978;
block64:;
// line 343
org$pandalanguage$pandac$ASTNode* $tmp982 = *(&local34);
$fn984 $tmp983 = ($fn984) $tmp982->$class->vtable[0];
panda$core$String* $tmp985 = $tmp983($tmp982);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp985));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp985));
// unreffing REF($1165:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp986 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp986));
// unreffing value
*(&local35) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp987 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp987));
// unreffing target
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp985;
block62:;
panda$core$Int64 $tmp988 = (panda$core$Int64) {15};
panda$core$Bit $tmp989 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp988);
bool $tmp990 = $tmp989.value;
if ($tmp990) goto block65; else goto block66;
block65:;
org$pandalanguage$pandac$Position* $tmp991 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp992 = *$tmp991;
panda$core$String** $tmp993 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp994 = *$tmp993;
*(&local36) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp994));
panda$core$String* $tmp995 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp995));
*(&local36) = $tmp994;
panda$collections$ImmutableArray** $tmp996 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp997 = *$tmp996;
*(&local37) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp997));
panda$collections$ImmutableArray* $tmp998 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp998));
*(&local37) = $tmp997;
org$pandalanguage$pandac$ASTNode** $tmp999 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1000 = *$tmp999;
*(&local38) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1000));
org$pandalanguage$pandac$ASTNode* $tmp1001 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1001));
*(&local38) = $tmp1000;
// line 346
panda$core$MutableString* $tmp1002 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1002);
*(&local39) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1002));
panda$core$MutableString* $tmp1003 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1003));
*(&local39) = $tmp1002;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1002));
// unreffing REF($1216:panda.core.MutableString)
// line 347
panda$core$String* $tmp1004 = *(&local36);
panda$core$Bit $tmp1005 = panda$core$Bit$init$builtin_bit($tmp1004 != NULL);
bool $tmp1006 = $tmp1005.value;
if ($tmp1006) goto block67; else goto block68;
block67:;
// line 348
panda$core$MutableString* $tmp1007 = *(&local39);
panda$core$String* $tmp1008 = *(&local36);
panda$core$String* $tmp1009 = panda$core$String$convert$R$panda$core$String($tmp1008);
panda$core$String* $tmp1010 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1009, &$s1011);
panda$core$MutableString$append$panda$core$String($tmp1007, $tmp1010);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1010));
// unreffing REF($1239:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1009));
// unreffing REF($1238:panda.core.String)
goto block68;
block68:;
// line 350
panda$core$MutableString* $tmp1012 = *(&local39);
panda$core$MutableString$append$panda$core$String($tmp1012, &$s1013);
// line 351
panda$collections$ImmutableArray* $tmp1014 = *(&local37);
ITable* $tmp1015 = ((panda$collections$Iterable*) $tmp1014)->$class->itable;
while ($tmp1015->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1015 = $tmp1015->next;
}
$fn1017 $tmp1016 = $tmp1015->methods[0];
panda$collections$Iterator* $tmp1018 = $tmp1016(((panda$collections$Iterable*) $tmp1014));
goto block69;
block69:;
ITable* $tmp1019 = $tmp1018->$class->itable;
while ($tmp1019->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1019 = $tmp1019->next;
}
$fn1021 $tmp1020 = $tmp1019->methods[0];
panda$core$Bit $tmp1022 = $tmp1020($tmp1018);
bool $tmp1023 = $tmp1022.value;
if ($tmp1023) goto block71; else goto block70;
block70:;
*(&local40) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1024 = $tmp1018->$class->itable;
while ($tmp1024->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1024 = $tmp1024->next;
}
$fn1026 $tmp1025 = $tmp1024->methods[1];
panda$core$Object* $tmp1027 = $tmp1025($tmp1018);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1027)));
org$pandalanguage$pandac$ASTNode* $tmp1028 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1028));
*(&local40) = ((org$pandalanguage$pandac$ASTNode*) $tmp1027);
// line 352
panda$core$MutableString* $tmp1029 = *(&local39);
org$pandalanguage$pandac$ASTNode* $tmp1030 = *(&local40);
panda$core$String* $tmp1031 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1030), &$s1032);
panda$core$MutableString$append$panda$core$String($tmp1029, $tmp1031);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1031));
// unreffing REF($1279:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1027);
// unreffing REF($1267:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1033 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1033));
// unreffing s
*(&local40) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block69;
block71:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1018));
// unreffing REF($1256:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 354
panda$core$MutableString* $tmp1034 = *(&local39);
org$pandalanguage$pandac$ASTNode* $tmp1035 = *(&local38);
panda$core$String* $tmp1036 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1037, ((panda$core$Object*) $tmp1035));
panda$core$String* $tmp1038 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1036, &$s1039);
panda$core$MutableString$append$panda$core$String($tmp1034, $tmp1038);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1038));
// unreffing REF($1301:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1036));
// unreffing REF($1300:panda.core.String)
// line 355
panda$core$MutableString* $tmp1040 = *(&local39);
panda$core$String* $tmp1041 = panda$core$MutableString$finish$R$panda$core$String($tmp1040);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1041));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1041));
// unreffing REF($1311:panda.core.String)
panda$core$MutableString* $tmp1042 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1042));
// unreffing result
*(&local39) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1043 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1043));
// unreffing test
*(&local38) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp1044 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1044));
// unreffing statements
*(&local37) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp1045 = *(&local36);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1045));
// unreffing label
*(&local36) = ((panda$core$String*) NULL);
return $tmp1041;
block66:;
panda$core$Int64 $tmp1046 = (panda$core$Int64) {16};
panda$core$Bit $tmp1047 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp1046);
bool $tmp1048 = $tmp1047.value;
if ($tmp1048) goto block72; else goto block73;
block72:;
org$pandalanguage$pandac$Position* $tmp1049 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1050 = *$tmp1049;
org$pandalanguage$pandac$ASTNode** $tmp1051 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1052 = *$tmp1051;
*(&local41) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1052));
org$pandalanguage$pandac$ASTNode* $tmp1053 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1053));
*(&local41) = $tmp1052;
panda$core$String** $tmp1054 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp1055 = *$tmp1054;
*(&local42) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1055));
panda$core$String* $tmp1056 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1056));
*(&local42) = $tmp1055;
// line 358
org$pandalanguage$pandac$ASTNode* $tmp1057 = *(&local41);
$fn1059 $tmp1058 = ($fn1059) $tmp1057->$class->vtable[0];
panda$core$String* $tmp1060 = $tmp1058($tmp1057);
panda$core$String* $tmp1061 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1060, &$s1062);
panda$core$String* $tmp1063 = *(&local42);
panda$core$String* $tmp1064 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1061, $tmp1063);
panda$core$String* $tmp1065 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1064, &$s1066);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1065));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1065));
// unreffing REF($1369:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1064));
// unreffing REF($1368:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1061));
// unreffing REF($1366:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1060));
// unreffing REF($1365:panda.core.String)
panda$core$String* $tmp1067 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1067));
// unreffing field
*(&local42) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1068 = *(&local41);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1068));
// unreffing base
*(&local41) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1065;
block73:;
panda$core$Int64 $tmp1069 = (panda$core$Int64) {17};
panda$core$Bit $tmp1070 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp1069);
bool $tmp1071 = $tmp1070.value;
if ($tmp1071) goto block74; else goto block75;
block74:;
org$pandalanguage$pandac$Position* $tmp1072 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1073 = *$tmp1072;
org$pandalanguage$pandac$ASTNode** $tmp1074 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1075 = *$tmp1074;
*(&local43) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1075));
org$pandalanguage$pandac$ASTNode* $tmp1076 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1076));
*(&local43) = $tmp1075;
panda$collections$ImmutableArray** $tmp1077 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp1078 = *$tmp1077;
*(&local44) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1078));
panda$collections$ImmutableArray* $tmp1079 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1079));
*(&local44) = $tmp1078;
org$pandalanguage$pandac$ASTNode** $tmp1080 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1081 = *$tmp1080;
*(&local45) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1081));
org$pandalanguage$pandac$ASTNode* $tmp1082 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1082));
*(&local45) = $tmp1081;
// line 361
panda$core$MutableString* $tmp1083 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1083);
*(&local46) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1083));
panda$core$MutableString* $tmp1084 = *(&local46);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1084));
*(&local46) = $tmp1083;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1083));
// unreffing REF($1429:panda.core.MutableString)
// line 362
org$pandalanguage$pandac$ASTNode* $tmp1085 = *(&local43);
panda$core$Bit $tmp1086 = panda$core$Bit$init$builtin_bit($tmp1085 != NULL);
bool $tmp1087 = $tmp1086.value;
if ($tmp1087) goto block76; else goto block77;
block76:;
// line 363
panda$core$MutableString* $tmp1088 = *(&local46);
org$pandalanguage$pandac$ASTNode* $tmp1089 = *(&local43);
panda$core$String* $tmp1090 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1089), &$s1091);
panda$core$MutableString$append$panda$core$String($tmp1088, $tmp1090);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1090));
// unreffing REF($1451:panda.core.String)
goto block77;
block77:;
// line 365
panda$collections$ImmutableArray* $tmp1092 = *(&local44);
ITable* $tmp1093 = ((panda$collections$Iterable*) $tmp1092)->$class->itable;
while ($tmp1093->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1093 = $tmp1093->next;
}
$fn1095 $tmp1094 = $tmp1093->methods[0];
panda$collections$Iterator* $tmp1096 = $tmp1094(((panda$collections$Iterable*) $tmp1092));
goto block78;
block78:;
ITable* $tmp1097 = $tmp1096->$class->itable;
while ($tmp1097->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1097 = $tmp1097->next;
}
$fn1099 $tmp1098 = $tmp1097->methods[0];
panda$core$Bit $tmp1100 = $tmp1098($tmp1096);
bool $tmp1101 = $tmp1100.value;
if ($tmp1101) goto block80; else goto block79;
block79:;
*(&local47) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1102 = $tmp1096->$class->itable;
while ($tmp1102->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1102 = $tmp1102->next;
}
$fn1104 $tmp1103 = $tmp1102->methods[1];
panda$core$Object* $tmp1105 = $tmp1103($tmp1096);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1105)));
org$pandalanguage$pandac$ASTNode* $tmp1106 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1106));
*(&local47) = ((org$pandalanguage$pandac$ASTNode*) $tmp1105);
// line 366
panda$core$MutableString* $tmp1107 = *(&local46);
org$pandalanguage$pandac$ASTNode* $tmp1108 = *(&local47);
panda$core$String* $tmp1109 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1108), &$s1110);
panda$core$MutableString$append$panda$core$String($tmp1107, $tmp1109);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1109));
// unreffing REF($1485:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1105);
// unreffing REF($1473:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1111 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1111));
// unreffing a
*(&local47) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block78;
block80:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1096));
// unreffing REF($1462:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 368
panda$core$MutableString* $tmp1112 = *(&local46);
org$pandalanguage$pandac$ASTNode* $tmp1113 = *(&local45);
panda$core$MutableString$append$panda$core$Object($tmp1112, ((panda$core$Object*) $tmp1113));
// line 369
panda$core$MutableString* $tmp1114 = *(&local46);
panda$core$String* $tmp1115 = panda$core$MutableString$finish$R$panda$core$String($tmp1114);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1115));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1115));
// unreffing REF($1509:panda.core.String)
panda$core$MutableString* $tmp1116 = *(&local46);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1116));
// unreffing result
*(&local46) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1117 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1117));
// unreffing decl
*(&local45) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp1118 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1118));
// unreffing annotations
*(&local44) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1119 = *(&local43);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1119));
// unreffing dc
*(&local43) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1115;
block75:;
panda$core$Int64 $tmp1120 = (panda$core$Int64) {18};
panda$core$Bit $tmp1121 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp1120);
bool $tmp1122 = $tmp1121.value;
if ($tmp1122) goto block81; else goto block82;
block81:;
panda$collections$ImmutableArray** $tmp1123 = (panda$collections$ImmutableArray**) (param0->$data + 0);
panda$collections$ImmutableArray* $tmp1124 = *$tmp1123;
*(&local48) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1124));
panda$collections$ImmutableArray* $tmp1125 = *(&local48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1125));
*(&local48) = $tmp1124;
// line 372
panda$core$MutableString* $tmp1126 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1126);
*(&local49) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1126));
panda$core$MutableString* $tmp1127 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1127));
*(&local49) = $tmp1126;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1126));
// unreffing REF($1550:panda.core.MutableString)
// line 373
panda$collections$ImmutableArray* $tmp1128 = *(&local48);
ITable* $tmp1129 = ((panda$collections$Iterable*) $tmp1128)->$class->itable;
while ($tmp1129->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1129 = $tmp1129->next;
}
$fn1131 $tmp1130 = $tmp1129->methods[0];
panda$collections$Iterator* $tmp1132 = $tmp1130(((panda$collections$Iterable*) $tmp1128));
goto block83;
block83:;
ITable* $tmp1133 = $tmp1132->$class->itable;
while ($tmp1133->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1133 = $tmp1133->next;
}
$fn1135 $tmp1134 = $tmp1133->methods[0];
panda$core$Bit $tmp1136 = $tmp1134($tmp1132);
bool $tmp1137 = $tmp1136.value;
if ($tmp1137) goto block85; else goto block84;
block84:;
*(&local50) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1138 = $tmp1132->$class->itable;
while ($tmp1138->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1138 = $tmp1138->next;
}
$fn1140 $tmp1139 = $tmp1138->methods[1];
panda$core$Object* $tmp1141 = $tmp1139($tmp1132);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1141)));
org$pandalanguage$pandac$ASTNode* $tmp1142 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1142));
*(&local50) = ((org$pandalanguage$pandac$ASTNode*) $tmp1141);
// line 374
panda$core$MutableString* $tmp1143 = *(&local49);
org$pandalanguage$pandac$ASTNode* $tmp1144 = *(&local50);
panda$core$String* $tmp1145 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1144), &$s1146);
panda$core$MutableString$append$panda$core$String($tmp1143, $tmp1145);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1145));
// unreffing REF($1590:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1141);
// unreffing REF($1578:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1147 = *(&local50);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1147));
// unreffing e
*(&local50) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block83;
block85:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1132));
// unreffing REF($1567:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 376
panda$core$MutableString* $tmp1148 = *(&local49);
panda$core$String* $tmp1149 = panda$core$MutableString$finish$R$panda$core$String($tmp1148);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1149));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1149));
// unreffing REF($1609:panda.core.String)
panda$core$MutableString* $tmp1150 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1150));
// unreffing result
*(&local49) = ((panda$core$MutableString*) NULL);
panda$collections$ImmutableArray* $tmp1151 = *(&local48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1151));
// unreffing entries
*(&local48) = ((panda$collections$ImmutableArray*) NULL);
return $tmp1149;
block82:;
panda$core$Int64 $tmp1152 = (panda$core$Int64) {19};
panda$core$Bit $tmp1153 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp1152);
bool $tmp1154 = $tmp1153.value;
if ($tmp1154) goto block86; else goto block87;
block86:;
org$pandalanguage$pandac$Position* $tmp1155 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1156 = *$tmp1155;
panda$core$String** $tmp1157 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1158 = *$tmp1157;
*(&local51) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1158));
panda$core$String* $tmp1159 = *(&local51);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1159));
*(&local51) = $tmp1158;
org$pandalanguage$pandac$ASTNode** $tmp1160 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1161 = *$tmp1160;
*(&local52) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1161));
org$pandalanguage$pandac$ASTNode* $tmp1162 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1162));
*(&local52) = $tmp1161;
org$pandalanguage$pandac$ASTNode** $tmp1163 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1164 = *$tmp1163;
*(&local53) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1164));
org$pandalanguage$pandac$ASTNode* $tmp1165 = *(&local53);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1165));
*(&local53) = $tmp1164;
panda$collections$ImmutableArray** $tmp1166 = (panda$collections$ImmutableArray**) (param0->$data + 40);
panda$collections$ImmutableArray* $tmp1167 = *$tmp1166;
*(&local54) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1167));
panda$collections$ImmutableArray* $tmp1168 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1168));
*(&local54) = $tmp1167;
// line 379
panda$core$MutableString* $tmp1169 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1169);
*(&local55) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1169));
panda$core$MutableString* $tmp1170 = *(&local55);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1170));
*(&local55) = $tmp1169;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1169));
// unreffing REF($1669:panda.core.MutableString)
// line 380
panda$core$String* $tmp1171 = *(&local51);
panda$core$Bit $tmp1172 = panda$core$Bit$init$builtin_bit($tmp1171 != NULL);
bool $tmp1173 = $tmp1172.value;
if ($tmp1173) goto block88; else goto block89;
block88:;
// line 381
panda$core$MutableString* $tmp1174 = *(&local55);
panda$core$String* $tmp1175 = *(&local51);
panda$core$String* $tmp1176 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1175, &$s1177);
panda$core$MutableString$append$panda$core$String($tmp1174, $tmp1176);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1176));
// unreffing REF($1691:panda.core.String)
goto block89;
block89:;
// line 383
panda$core$MutableString* $tmp1178 = *(&local55);
org$pandalanguage$pandac$ASTNode* $tmp1179 = *(&local52);
panda$core$String* $tmp1180 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1181, ((panda$core$Object*) $tmp1179));
panda$core$String* $tmp1182 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1180, &$s1183);
org$pandalanguage$pandac$ASTNode* $tmp1184 = *(&local53);
panda$core$String* $tmp1185 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1182, ((panda$core$Object*) $tmp1184));
panda$core$String* $tmp1186 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1185, &$s1187);
panda$core$MutableString$append$panda$core$String($tmp1178, $tmp1186);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1186));
// unreffing REF($1706:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1185));
// unreffing REF($1705:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1182));
// unreffing REF($1702:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1180));
// unreffing REF($1701:panda.core.String)
// line 384
panda$collections$ImmutableArray* $tmp1188 = *(&local54);
ITable* $tmp1189 = ((panda$collections$Iterable*) $tmp1188)->$class->itable;
while ($tmp1189->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1189 = $tmp1189->next;
}
$fn1191 $tmp1190 = $tmp1189->methods[0];
panda$collections$Iterator* $tmp1192 = $tmp1190(((panda$collections$Iterable*) $tmp1188));
goto block90;
block90:;
ITable* $tmp1193 = $tmp1192->$class->itable;
while ($tmp1193->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1193 = $tmp1193->next;
}
$fn1195 $tmp1194 = $tmp1193->methods[0];
panda$core$Bit $tmp1196 = $tmp1194($tmp1192);
bool $tmp1197 = $tmp1196.value;
if ($tmp1197) goto block92; else goto block91;
block91:;
*(&local56) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1198 = $tmp1192->$class->itable;
while ($tmp1198->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1198 = $tmp1198->next;
}
$fn1200 $tmp1199 = $tmp1198->methods[1];
panda$core$Object* $tmp1201 = $tmp1199($tmp1192);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1201)));
org$pandalanguage$pandac$ASTNode* $tmp1202 = *(&local56);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1202));
*(&local56) = ((org$pandalanguage$pandac$ASTNode*) $tmp1201);
// line 385
panda$core$MutableString* $tmp1203 = *(&local55);
org$pandalanguage$pandac$ASTNode* $tmp1204 = *(&local56);
panda$core$String* $tmp1205 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1204), &$s1206);
panda$core$MutableString$append$panda$core$String($tmp1203, $tmp1205);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1205));
// unreffing REF($1748:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1201);
// unreffing REF($1736:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1207 = *(&local56);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1207));
// unreffing s
*(&local56) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block90;
block92:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1192));
// unreffing REF($1725:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 387
panda$core$MutableString* $tmp1208 = *(&local55);
panda$core$MutableString$append$panda$core$String($tmp1208, &$s1209);
// line 388
panda$core$MutableString* $tmp1210 = *(&local55);
panda$core$String* $tmp1211 = panda$core$MutableString$finish$R$panda$core$String($tmp1210);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1211));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1211));
// unreffing REF($1770:panda.core.String)
panda$core$MutableString* $tmp1212 = *(&local55);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1212));
// unreffing result
*(&local55) = ((panda$core$MutableString*) NULL);
panda$collections$ImmutableArray* $tmp1213 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1213));
// unreffing statements
*(&local54) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1214 = *(&local53);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1214));
// unreffing list
*(&local53) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1215 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1215));
// unreffing target
*(&local52) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1216 = *(&local51);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1216));
// unreffing label
*(&local51) = ((panda$core$String*) NULL);
return $tmp1211;
block87:;
panda$core$Int64 $tmp1217 = (panda$core$Int64) {20};
panda$core$Bit $tmp1218 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp1217);
bool $tmp1219 = $tmp1218.value;
if ($tmp1219) goto block93; else goto block94;
block93:;
org$pandalanguage$pandac$Position* $tmp1220 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1221 = *$tmp1220;
panda$core$String** $tmp1222 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1223 = *$tmp1222;
*(&local57) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1223));
panda$core$String* $tmp1224 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1224));
*(&local57) = $tmp1223;
panda$collections$ImmutableArray** $tmp1225 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp1226 = *$tmp1225;
*(&local58) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1226));
panda$collections$ImmutableArray* $tmp1227 = *(&local58);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1227));
*(&local58) = $tmp1226;
// line 391
panda$core$String* $tmp1228 = *(&local57);
panda$core$String* $tmp1229 = panda$core$String$convert$R$panda$core$String($tmp1228);
panda$core$String* $tmp1230 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1229, &$s1231);
panda$collections$ImmutableArray* $tmp1232 = *(&local58);
ITable* $tmp1233 = ((panda$collections$CollectionView*) $tmp1232)->$class->itable;
while ($tmp1233->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1233 = $tmp1233->next;
}
$fn1235 $tmp1234 = $tmp1233->methods[1];
panda$core$String* $tmp1236 = $tmp1234(((panda$collections$CollectionView*) $tmp1232));
panda$core$String* $tmp1237 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1230, $tmp1236);
panda$core$String* $tmp1238 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1237, &$s1239);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1238));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1238));
// unreffing REF($1835:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1237));
// unreffing REF($1834:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1236));
// unreffing REF($1833:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1230));
// unreffing REF($1829:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1229));
// unreffing REF($1828:panda.core.String)
panda$collections$ImmutableArray* $tmp1240 = *(&local58);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1240));
// unreffing subtypes
*(&local58) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp1241 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1241));
// unreffing name
*(&local57) = ((panda$core$String*) NULL);
return $tmp1238;
block94:;
panda$core$Int64 $tmp1242 = (panda$core$Int64) {21};
panda$core$Bit $tmp1243 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp1242);
bool $tmp1244 = $tmp1243.value;
if ($tmp1244) goto block95; else goto block96;
block95:;
org$pandalanguage$pandac$Position* $tmp1245 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1246 = *$tmp1245;
panda$core$String** $tmp1247 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1248 = *$tmp1247;
*(&local59) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1248));
panda$core$String* $tmp1249 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1249));
*(&local59) = $tmp1248;
// line 394
panda$core$String* $tmp1250 = *(&local59);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1250));
panda$core$String* $tmp1251 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1251));
// unreffing name
*(&local59) = ((panda$core$String*) NULL);
return $tmp1250;
block96:;
panda$core$Int64 $tmp1252 = (panda$core$Int64) {22};
panda$core$Bit $tmp1253 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp1252);
bool $tmp1254 = $tmp1253.value;
if ($tmp1254) goto block97; else goto block98;
block97:;
org$pandalanguage$pandac$Position* $tmp1255 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1256 = *$tmp1255;
org$pandalanguage$pandac$ASTNode** $tmp1257 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1258 = *$tmp1257;
*(&local60) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1258));
org$pandalanguage$pandac$ASTNode* $tmp1259 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1259));
*(&local60) = $tmp1258;
panda$collections$ImmutableArray** $tmp1260 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp1261 = *$tmp1260;
*(&local61) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1261));
panda$collections$ImmutableArray* $tmp1262 = *(&local61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1262));
*(&local61) = $tmp1261;
org$pandalanguage$pandac$ASTNode** $tmp1263 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1264 = *$tmp1263;
*(&local62) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1264));
org$pandalanguage$pandac$ASTNode* $tmp1265 = *(&local62);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1265));
*(&local62) = $tmp1264;
// line 397
panda$core$MutableString* $tmp1266 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$ASTNode* $tmp1267 = *(&local60);
panda$core$String* $tmp1268 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1269, ((panda$core$Object*) $tmp1267));
panda$core$String* $tmp1270 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1268, &$s1271);
panda$core$MutableString$init$panda$core$String($tmp1266, $tmp1270);
*(&local63) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1266));
panda$core$MutableString* $tmp1272 = *(&local63);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1272));
*(&local63) = $tmp1266;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1270));
// unreffing REF($1927:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1268));
// unreffing REF($1926:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1266));
// unreffing REF($1923:panda.core.MutableString)
// line 398
panda$collections$ImmutableArray* $tmp1273 = *(&local61);
ITable* $tmp1274 = ((panda$collections$Iterable*) $tmp1273)->$class->itable;
while ($tmp1274->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1274 = $tmp1274->next;
}
$fn1276 $tmp1275 = $tmp1274->methods[0];
panda$collections$Iterator* $tmp1277 = $tmp1275(((panda$collections$Iterable*) $tmp1273));
goto block99;
block99:;
ITable* $tmp1278 = $tmp1277->$class->itable;
while ($tmp1278->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1278 = $tmp1278->next;
}
$fn1280 $tmp1279 = $tmp1278->methods[0];
panda$core$Bit $tmp1281 = $tmp1279($tmp1277);
bool $tmp1282 = $tmp1281.value;
if ($tmp1282) goto block101; else goto block100;
block100:;
*(&local64) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1283 = $tmp1277->$class->itable;
while ($tmp1283->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1283 = $tmp1283->next;
}
$fn1285 $tmp1284 = $tmp1283->methods[1];
panda$core$Object* $tmp1286 = $tmp1284($tmp1277);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1286)));
org$pandalanguage$pandac$ASTNode* $tmp1287 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1287));
*(&local64) = ((org$pandalanguage$pandac$ASTNode*) $tmp1286);
// line 399
panda$core$MutableString* $tmp1288 = *(&local63);
org$pandalanguage$pandac$ASTNode* $tmp1289 = *(&local64);
panda$core$String* $tmp1290 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1289), &$s1291);
panda$core$MutableString$append$panda$core$String($tmp1288, $tmp1290);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1290));
// unreffing REF($1973:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1286);
// unreffing REF($1961:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1292 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1292));
// unreffing s
*(&local64) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block99;
block101:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1277));
// unreffing REF($1950:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 401
panda$core$MutableString* $tmp1293 = *(&local63);
panda$core$MutableString$append$panda$core$String($tmp1293, &$s1294);
// line 402
org$pandalanguage$pandac$ASTNode* $tmp1295 = *(&local62);
panda$core$Bit $tmp1296 = panda$core$Bit$init$builtin_bit($tmp1295 != NULL);
bool $tmp1297 = $tmp1296.value;
if ($tmp1297) goto block102; else goto block103;
block102:;
// line 403
panda$core$MutableString* $tmp1298 = *(&local63);
org$pandalanguage$pandac$ASTNode* $tmp1299 = *(&local62);
panda$core$String* $tmp1300 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1301, ((panda$core$Object*) $tmp1299));
panda$core$String* $tmp1302 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1300, &$s1303);
panda$core$MutableString$append$panda$core$String($tmp1298, $tmp1302);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1302));
// unreffing REF($2004:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1300));
// unreffing REF($2003:panda.core.String)
goto block103;
block103:;
// line 405
panda$core$MutableString* $tmp1304 = *(&local63);
panda$core$String* $tmp1305 = panda$core$MutableString$finish$R$panda$core$String($tmp1304);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1305));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1305));
// unreffing REF($2015:panda.core.String)
panda$core$MutableString* $tmp1306 = *(&local63);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1306));
// unreffing result
*(&local63) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1307 = *(&local62);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1307));
// unreffing ifFalse
*(&local62) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp1308 = *(&local61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1308));
// unreffing ifTrue
*(&local61) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1309 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1309));
// unreffing test
*(&local60) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1305;
block98:;
panda$core$Int64 $tmp1310 = (panda$core$Int64) {23};
panda$core$Bit $tmp1311 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp1310);
bool $tmp1312 = $tmp1311.value;
if ($tmp1312) goto block104; else goto block105;
block104:;
org$pandalanguage$pandac$Position* $tmp1313 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1314 = *$tmp1313;
panda$core$UInt64* $tmp1315 = (panda$core$UInt64*) (param0->$data + 16);
panda$core$UInt64 $tmp1316 = *$tmp1315;
*(&local65) = $tmp1316;
// line 408
panda$core$UInt64 $tmp1317 = *(&local65);
panda$core$String* $tmp1318 = panda$core$UInt64$convert$R$panda$core$String($tmp1317);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1318));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1318));
// unreffing REF($2053:panda.core.String)
return $tmp1318;
block105:;
panda$core$Int64 $tmp1319 = (panda$core$Int64) {24};
panda$core$Bit $tmp1320 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp1319);
bool $tmp1321 = $tmp1320.value;
if ($tmp1321) goto block106; else goto block107;
block106:;
org$pandalanguage$pandac$Position* $tmp1322 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1323 = *$tmp1322;
org$pandalanguage$pandac$IR$Value** $tmp1324 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp1325 = *$tmp1324;
*(&local66) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1325));
org$pandalanguage$pandac$IR$Value* $tmp1326 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1326));
*(&local66) = $tmp1325;
// line 411
org$pandalanguage$pandac$IR$Value* $tmp1327 = *(&local66);
$fn1329 $tmp1328 = ($fn1329) $tmp1327->$class->vtable[0];
panda$core$String* $tmp1330 = $tmp1328($tmp1327);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1330));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1330));
// unreffing REF($2078:panda.core.String)
org$pandalanguage$pandac$IR$Value* $tmp1331 = *(&local66);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1331));
// unreffing value
*(&local66) = ((org$pandalanguage$pandac$IR$Value*) NULL);
return $tmp1330;
block107:;
panda$core$Int64 $tmp1332 = (panda$core$Int64) {25};
panda$core$Bit $tmp1333 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp1332);
bool $tmp1334 = $tmp1333.value;
if ($tmp1334) goto block108; else goto block109;
block108:;
org$pandalanguage$pandac$Position* $tmp1335 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1336 = *$tmp1335;
panda$core$String** $tmp1337 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1338 = *$tmp1337;
*(&local67) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1338));
panda$core$String* $tmp1339 = *(&local67);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1339));
*(&local67) = $tmp1338;
panda$collections$ImmutableArray** $tmp1340 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp1341 = *$tmp1340;
*(&local68) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1341));
panda$collections$ImmutableArray* $tmp1342 = *(&local68);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1342));
*(&local68) = $tmp1341;
// line 414
panda$core$MutableString* $tmp1343 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1343);
*(&local69) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1343));
panda$core$MutableString* $tmp1344 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1344));
*(&local69) = $tmp1343;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1343));
// unreffing REF($2115:panda.core.MutableString)
// line 415
panda$core$String* $tmp1345 = *(&local67);
panda$core$Bit $tmp1346 = panda$core$Bit$init$builtin_bit($tmp1345 != NULL);
bool $tmp1347 = $tmp1346.value;
if ($tmp1347) goto block110; else goto block111;
block110:;
// line 416
panda$core$MutableString* $tmp1348 = *(&local69);
panda$core$String* $tmp1349 = *(&local67);
panda$core$String* $tmp1350 = panda$core$String$convert$R$panda$core$String($tmp1349);
panda$core$String* $tmp1351 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1350, &$s1352);
panda$core$MutableString$append$panda$core$String($tmp1348, $tmp1351);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1351));
// unreffing REF($2138:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1350));
// unreffing REF($2137:panda.core.String)
goto block111;
block111:;
// line 418
panda$core$MutableString* $tmp1353 = *(&local69);
panda$core$MutableString$append$panda$core$String($tmp1353, &$s1354);
// line 419
panda$collections$ImmutableArray* $tmp1355 = *(&local68);
ITable* $tmp1356 = ((panda$collections$Iterable*) $tmp1355)->$class->itable;
while ($tmp1356->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1356 = $tmp1356->next;
}
$fn1358 $tmp1357 = $tmp1356->methods[0];
panda$collections$Iterator* $tmp1359 = $tmp1357(((panda$collections$Iterable*) $tmp1355));
goto block112;
block112:;
ITable* $tmp1360 = $tmp1359->$class->itable;
while ($tmp1360->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1360 = $tmp1360->next;
}
$fn1362 $tmp1361 = $tmp1360->methods[0];
panda$core$Bit $tmp1363 = $tmp1361($tmp1359);
bool $tmp1364 = $tmp1363.value;
if ($tmp1364) goto block114; else goto block113;
block113:;
*(&local70) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1365 = $tmp1359->$class->itable;
while ($tmp1365->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1365 = $tmp1365->next;
}
$fn1367 $tmp1366 = $tmp1365->methods[1];
panda$core$Object* $tmp1368 = $tmp1366($tmp1359);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1368)));
org$pandalanguage$pandac$ASTNode* $tmp1369 = *(&local70);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1369));
*(&local70) = ((org$pandalanguage$pandac$ASTNode*) $tmp1368);
// line 420
panda$core$MutableString* $tmp1370 = *(&local69);
org$pandalanguage$pandac$ASTNode* $tmp1371 = *(&local70);
panda$core$String* $tmp1372 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1371), &$s1373);
panda$core$MutableString$append$panda$core$String($tmp1370, $tmp1372);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1372));
// unreffing REF($2178:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1368);
// unreffing REF($2166:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1374 = *(&local70);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1374));
// unreffing s
*(&local70) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block112;
block114:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1359));
// unreffing REF($2155:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 422
panda$core$MutableString* $tmp1375 = *(&local69);
panda$core$MutableString$append$panda$core$String($tmp1375, &$s1376);
// line 423
panda$core$MutableString* $tmp1377 = *(&local69);
panda$core$String* $tmp1378 = panda$core$MutableString$finish$R$panda$core$String($tmp1377);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1378));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1378));
// unreffing REF($2200:panda.core.String)
panda$core$MutableString* $tmp1379 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1379));
// unreffing result
*(&local69) = ((panda$core$MutableString*) NULL);
panda$collections$ImmutableArray* $tmp1380 = *(&local68);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1380));
// unreffing statements
*(&local68) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp1381 = *(&local67);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1381));
// unreffing label
*(&local67) = ((panda$core$String*) NULL);
return $tmp1378;
block109:;
panda$core$Int64 $tmp1382 = (panda$core$Int64) {26};
panda$core$Bit $tmp1383 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp1382);
bool $tmp1384 = $tmp1383.value;
if ($tmp1384) goto block115; else goto block116;
block115:;
org$pandalanguage$pandac$Position* $tmp1385 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1386 = *$tmp1385;
org$pandalanguage$pandac$ASTNode** $tmp1387 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1388 = *$tmp1387;
*(&local71) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1388));
org$pandalanguage$pandac$ASTNode* $tmp1389 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1389));
*(&local71) = $tmp1388;
panda$collections$ImmutableArray** $tmp1390 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp1391 = *$tmp1390;
*(&local72) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1391));
panda$collections$ImmutableArray* $tmp1392 = *(&local72);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1392));
*(&local72) = $tmp1391;
panda$collections$ImmutableArray** $tmp1393 = (panda$collections$ImmutableArray**) (param0->$data + 32);
panda$collections$ImmutableArray* $tmp1394 = *$tmp1393;
*(&local73) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1394));
panda$collections$ImmutableArray* $tmp1395 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1395));
*(&local73) = $tmp1394;
// line 426
panda$core$MutableString* $tmp1396 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
org$pandalanguage$pandac$ASTNode* $tmp1397 = *(&local71);
panda$core$String* $tmp1398 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1399, ((panda$core$Object*) $tmp1397));
panda$core$String* $tmp1400 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1398, &$s1401);
panda$core$MutableString$init$panda$core$String($tmp1396, $tmp1400);
*(&local74) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1396));
panda$core$MutableString* $tmp1402 = *(&local74);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1402));
*(&local74) = $tmp1396;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1400));
// unreffing REF($2260:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1398));
// unreffing REF($2259:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1396));
// unreffing REF($2256:panda.core.MutableString)
// line 427
panda$collections$ImmutableArray* $tmp1403 = *(&local72);
ITable* $tmp1404 = ((panda$collections$Iterable*) $tmp1403)->$class->itable;
while ($tmp1404->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1404 = $tmp1404->next;
}
$fn1406 $tmp1405 = $tmp1404->methods[0];
panda$collections$Iterator* $tmp1407 = $tmp1405(((panda$collections$Iterable*) $tmp1403));
goto block117;
block117:;
ITable* $tmp1408 = $tmp1407->$class->itable;
while ($tmp1408->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1408 = $tmp1408->next;
}
$fn1410 $tmp1409 = $tmp1408->methods[0];
panda$core$Bit $tmp1411 = $tmp1409($tmp1407);
bool $tmp1412 = $tmp1411.value;
if ($tmp1412) goto block119; else goto block118;
block118:;
*(&local75) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1413 = $tmp1407->$class->itable;
while ($tmp1413->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1413 = $tmp1413->next;
}
$fn1415 $tmp1414 = $tmp1413->methods[1];
panda$core$Object* $tmp1416 = $tmp1414($tmp1407);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1416)));
org$pandalanguage$pandac$ASTNode* $tmp1417 = *(&local75);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1417));
*(&local75) = ((org$pandalanguage$pandac$ASTNode*) $tmp1416);
// line 428
panda$core$MutableString* $tmp1418 = *(&local74);
org$pandalanguage$pandac$ASTNode* $tmp1419 = *(&local75);
panda$core$String* $tmp1420 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1419), &$s1421);
panda$core$MutableString$append$panda$core$String($tmp1418, $tmp1420);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1420));
// unreffing REF($2306:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1416);
// unreffing REF($2294:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1422 = *(&local75);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1422));
// unreffing w
*(&local75) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block117;
block119:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1407));
// unreffing REF($2283:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 430
panda$collections$ImmutableArray* $tmp1423 = *(&local73);
panda$core$Bit $tmp1424 = panda$core$Bit$init$builtin_bit($tmp1423 != NULL);
bool $tmp1425 = $tmp1424.value;
if ($tmp1425) goto block120; else goto block121;
block120:;
// line 431
panda$core$MutableString* $tmp1426 = *(&local74);
panda$collections$ImmutableArray* $tmp1427 = *(&local73);
panda$core$String* $tmp1428 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1427), &$s1429);
panda$core$MutableString$append$panda$core$String($tmp1426, $tmp1428);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1428));
// unreffing REF($2333:panda.core.String)
goto block121;
block121:;
// line 433
panda$core$MutableString* $tmp1430 = *(&local74);
panda$core$MutableString$append$panda$core$String($tmp1430, &$s1431);
// line 434
panda$core$MutableString* $tmp1432 = *(&local74);
panda$core$String* $tmp1433 = panda$core$MutableString$finish$R$panda$core$String($tmp1432);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1433));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1433));
// unreffing REF($2344:panda.core.String)
panda$core$MutableString* $tmp1434 = *(&local74);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1434));
// unreffing result
*(&local74) = ((panda$core$MutableString*) NULL);
panda$collections$ImmutableArray* $tmp1435 = *(&local73);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1435));
// unreffing other
*(&local73) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1436 = *(&local72);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1436));
// unreffing whens
*(&local72) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1437 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1437));
// unreffing value
*(&local71) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1433;
block116:;
panda$core$Int64 $tmp1438 = (panda$core$Int64) {27};
panda$core$Bit $tmp1439 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp1438);
bool $tmp1440 = $tmp1439.value;
if ($tmp1440) goto block122; else goto block123;
block122:;
org$pandalanguage$pandac$Position* $tmp1441 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1442 = *$tmp1441;
org$pandalanguage$pandac$ASTNode** $tmp1443 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1444 = *$tmp1443;
*(&local76) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1444));
org$pandalanguage$pandac$ASTNode* $tmp1445 = *(&local76);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1445));
*(&local76) = $tmp1444;
panda$collections$ImmutableArray** $tmp1446 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp1447 = *$tmp1446;
*(&local77) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1447));
panda$collections$ImmutableArray* $tmp1448 = *(&local77);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1448));
*(&local77) = $tmp1447;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp1449 = (org$pandalanguage$pandac$MethodDecl$Kind*) (param0->$data + 32);
org$pandalanguage$pandac$MethodDecl$Kind $tmp1450 = *$tmp1449;
*(&local78) = $tmp1450;
panda$core$String** $tmp1451 = (panda$core$String**) (param0->$data + 40);
panda$core$String* $tmp1452 = *$tmp1451;
*(&local79) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1452));
panda$core$String* $tmp1453 = *(&local79);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1453));
*(&local79) = $tmp1452;
panda$collections$ImmutableArray** $tmp1454 = (panda$collections$ImmutableArray**) (param0->$data + 48);
panda$collections$ImmutableArray* $tmp1455 = *$tmp1454;
*(&local80) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1455));
panda$collections$ImmutableArray* $tmp1456 = *(&local80);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1456));
*(&local80) = $tmp1455;
panda$collections$ImmutableArray** $tmp1457 = (panda$collections$ImmutableArray**) (param0->$data + 56);
panda$collections$ImmutableArray* $tmp1458 = *$tmp1457;
*(&local81) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1458));
panda$collections$ImmutableArray* $tmp1459 = *(&local81);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1459));
*(&local81) = $tmp1458;
org$pandalanguage$pandac$ASTNode** $tmp1460 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 64);
org$pandalanguage$pandac$ASTNode* $tmp1461 = *$tmp1460;
*(&local82) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1461));
org$pandalanguage$pandac$ASTNode* $tmp1462 = *(&local82);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1462));
*(&local82) = $tmp1461;
panda$collections$ImmutableArray** $tmp1463 = (panda$collections$ImmutableArray**) (param0->$data + 72);
panda$collections$ImmutableArray* $tmp1464 = *$tmp1463;
*(&local83) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1464));
panda$collections$ImmutableArray* $tmp1465 = *(&local83);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1465));
*(&local83) = $tmp1464;
// line 438
panda$core$MutableString* $tmp1466 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1466);
*(&local84) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1466));
panda$core$MutableString* $tmp1467 = *(&local84);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1467));
*(&local84) = $tmp1466;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1466));
// unreffing REF($2444:panda.core.MutableString)
// line 439
org$pandalanguage$pandac$ASTNode* $tmp1468 = *(&local76);
panda$core$Bit $tmp1469 = panda$core$Bit$init$builtin_bit($tmp1468 != NULL);
bool $tmp1470 = $tmp1469.value;
if ($tmp1470) goto block124; else goto block125;
block124:;
// line 440
panda$core$MutableString* $tmp1471 = *(&local84);
org$pandalanguage$pandac$ASTNode* $tmp1472 = *(&local76);
panda$core$String* $tmp1473 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1472), &$s1474);
panda$core$MutableString$append$panda$core$String($tmp1471, $tmp1473);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1473));
// unreffing REF($2466:panda.core.String)
goto block125;
block125:;
// line 442
panda$collections$ImmutableArray* $tmp1475 = *(&local77);
ITable* $tmp1476 = ((panda$collections$Iterable*) $tmp1475)->$class->itable;
while ($tmp1476->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1476 = $tmp1476->next;
}
$fn1478 $tmp1477 = $tmp1476->methods[0];
panda$collections$Iterator* $tmp1479 = $tmp1477(((panda$collections$Iterable*) $tmp1475));
goto block126;
block126:;
ITable* $tmp1480 = $tmp1479->$class->itable;
while ($tmp1480->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1480 = $tmp1480->next;
}
$fn1482 $tmp1481 = $tmp1480->methods[0];
panda$core$Bit $tmp1483 = $tmp1481($tmp1479);
bool $tmp1484 = $tmp1483.value;
if ($tmp1484) goto block128; else goto block127;
block127:;
*(&local85) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1485 = $tmp1479->$class->itable;
while ($tmp1485->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1485 = $tmp1485->next;
}
$fn1487 $tmp1486 = $tmp1485->methods[1];
panda$core$Object* $tmp1488 = $tmp1486($tmp1479);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1488)));
org$pandalanguage$pandac$ASTNode* $tmp1489 = *(&local85);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1489));
*(&local85) = ((org$pandalanguage$pandac$ASTNode*) $tmp1488);
// line 443
panda$core$MutableString* $tmp1490 = *(&local84);
org$pandalanguage$pandac$ASTNode* $tmp1491 = *(&local85);
panda$core$String* $tmp1492 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1491), &$s1493);
panda$core$MutableString$append$panda$core$String($tmp1490, $tmp1492);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1492));
// unreffing REF($2500:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1488);
// unreffing REF($2488:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1494 = *(&local85);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1494));
// unreffing a
*(&local85) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block126;
block128:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1479));
// unreffing REF($2477:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 445
org$pandalanguage$pandac$MethodDecl$Kind $tmp1495 = *(&local78);
panda$core$Int64 $tmp1496 = $tmp1495.$rawValue;
panda$core$Int64 $tmp1497 = (panda$core$Int64) {0};
panda$core$Bit $tmp1498 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1496, $tmp1497);
bool $tmp1499 = $tmp1498.value;
if ($tmp1499) goto block130; else goto block131;
block130:;
// line 446
panda$core$MutableString* $tmp1500 = *(&local84);
panda$core$MutableString$append$panda$core$String($tmp1500, &$s1501);
goto block129;
block131:;
panda$core$Int64 $tmp1502 = (panda$core$Int64) {1};
panda$core$Bit $tmp1503 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1496, $tmp1502);
bool $tmp1504 = $tmp1503.value;
if ($tmp1504) goto block132; else goto block133;
block132:;
// line 447
panda$core$MutableString* $tmp1505 = *(&local84);
panda$core$MutableString$append$panda$core$String($tmp1505, &$s1506);
goto block129;
block133:;
panda$core$Int64 $tmp1507 = (panda$core$Int64) {2};
panda$core$Bit $tmp1508 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1496, $tmp1507);
bool $tmp1509 = $tmp1508.value;
if ($tmp1509) goto block134; else goto block129;
block134:;
goto block129;
block129:;
// line 450
panda$core$MutableString* $tmp1510 = *(&local84);
panda$core$String* $tmp1511 = *(&local79);
panda$core$MutableString$append$panda$core$String($tmp1510, $tmp1511);
// line 451
panda$collections$ImmutableArray* $tmp1512 = *(&local80);
panda$core$Bit $tmp1513 = panda$core$Bit$init$builtin_bit($tmp1512 != NULL);
bool $tmp1514 = $tmp1513.value;
if ($tmp1514) goto block135; else goto block136;
block135:;
// line 452
panda$core$MutableString* $tmp1515 = *(&local84);
panda$collections$ImmutableArray* $tmp1516 = *(&local80);
ITable* $tmp1517 = ((panda$collections$CollectionView*) $tmp1516)->$class->itable;
while ($tmp1517->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1517 = $tmp1517->next;
}
$fn1519 $tmp1518 = $tmp1517->methods[1];
panda$core$String* $tmp1520 = $tmp1518(((panda$collections$CollectionView*) $tmp1516));
panda$core$String* $tmp1521 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1522, $tmp1520);
panda$core$String* $tmp1523 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1521, &$s1524);
panda$core$MutableString$append$panda$core$String($tmp1515, $tmp1523);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1523));
// unreffing REF($2558:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1521));
// unreffing REF($2557:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1520));
// unreffing REF($2556:panda.core.String)
goto block136;
block136:;
// line 454
panda$core$MutableString* $tmp1525 = *(&local84);
panda$collections$ImmutableArray* $tmp1526 = *(&local81);
ITable* $tmp1527 = ((panda$collections$CollectionView*) $tmp1526)->$class->itable;
while ($tmp1527->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1527 = $tmp1527->next;
}
$fn1529 $tmp1528 = $tmp1527->methods[1];
panda$core$String* $tmp1530 = $tmp1528(((panda$collections$CollectionView*) $tmp1526));
panda$core$String* $tmp1531 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1532, $tmp1530);
panda$core$String* $tmp1533 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1531, &$s1534);
panda$core$MutableString$append$panda$core$String($tmp1525, $tmp1533);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1533));
// unreffing REF($2577:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1531));
// unreffing REF($2576:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1530));
// unreffing REF($2575:panda.core.String)
// line 455
org$pandalanguage$pandac$ASTNode* $tmp1535 = *(&local82);
panda$core$Bit $tmp1536 = panda$core$Bit$init$builtin_bit($tmp1535 != NULL);
bool $tmp1537 = $tmp1536.value;
if ($tmp1537) goto block137; else goto block138;
block137:;
// line 456
panda$core$MutableString* $tmp1538 = *(&local84);
org$pandalanguage$pandac$ASTNode* $tmp1539 = *(&local82);
panda$core$String* $tmp1540 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1541, ((panda$core$Object*) $tmp1539));
panda$core$String* $tmp1542 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1540, &$s1543);
panda$core$MutableString$append$panda$core$String($tmp1538, $tmp1542);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1542));
// unreffing REF($2599:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1540));
// unreffing REF($2598:panda.core.String)
goto block138;
block138:;
// line 458
panda$collections$ImmutableArray* $tmp1544 = *(&local83);
panda$core$Bit $tmp1545 = panda$core$Bit$init$builtin_bit($tmp1544 != NULL);
bool $tmp1546 = $tmp1545.value;
if ($tmp1546) goto block139; else goto block140;
block139:;
// line 459
panda$core$MutableString* $tmp1547 = *(&local84);
panda$core$MutableString$append$panda$core$String($tmp1547, &$s1548);
// line 460
panda$collections$ImmutableArray* $tmp1549 = *(&local83);
ITable* $tmp1550 = ((panda$collections$Iterable*) $tmp1549)->$class->itable;
while ($tmp1550->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp1550 = $tmp1550->next;
}
$fn1552 $tmp1551 = $tmp1550->methods[0];
panda$collections$Iterator* $tmp1553 = $tmp1551(((panda$collections$Iterable*) $tmp1549));
goto block141;
block141:;
ITable* $tmp1554 = $tmp1553->$class->itable;
while ($tmp1554->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1554 = $tmp1554->next;
}
$fn1556 $tmp1555 = $tmp1554->methods[0];
panda$core$Bit $tmp1557 = $tmp1555($tmp1553);
bool $tmp1558 = $tmp1557.value;
if ($tmp1558) goto block143; else goto block142;
block142:;
*(&local86) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp1559 = $tmp1553->$class->itable;
while ($tmp1559->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp1559 = $tmp1559->next;
}
$fn1561 $tmp1560 = $tmp1559->methods[1];
panda$core$Object* $tmp1562 = $tmp1560($tmp1553);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp1562)));
org$pandalanguage$pandac$ASTNode* $tmp1563 = *(&local86);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1563));
*(&local86) = ((org$pandalanguage$pandac$ASTNode*) $tmp1562);
// line 461
panda$core$MutableString* $tmp1564 = *(&local84);
org$pandalanguage$pandac$ASTNode* $tmp1565 = *(&local86);
panda$core$String* $tmp1566 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1565), &$s1567);
panda$core$MutableString$append$panda$core$String($tmp1564, $tmp1566);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1566));
// unreffing REF($2645:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp1562);
// unreffing REF($2633:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp1568 = *(&local86);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1568));
// unreffing s
*(&local86) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block141;
block143:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1553));
// unreffing REF($2622:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 463
panda$core$MutableString* $tmp1569 = *(&local84);
panda$core$MutableString$append$panda$core$String($tmp1569, &$s1570);
goto block140;
block140:;
// line 465
panda$core$MutableString* $tmp1571 = *(&local84);
panda$core$String* $tmp1572 = panda$core$MutableString$finish$R$panda$core$String($tmp1571);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1572));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1572));
// unreffing REF($2668:panda.core.String)
panda$core$MutableString* $tmp1573 = *(&local84);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1573));
// unreffing result
*(&local84) = ((panda$core$MutableString*) NULL);
panda$collections$ImmutableArray* $tmp1574 = *(&local83);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1574));
// unreffing statements
*(&local83) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1575 = *(&local82);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1575));
// unreffing returnType
*(&local82) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp1576 = *(&local81);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1576));
// unreffing parameters
*(&local81) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp1577 = *(&local80);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1577));
// unreffing generics
*(&local80) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp1578 = *(&local79);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1578));
// unreffing name
*(&local79) = ((panda$core$String*) NULL);
panda$collections$ImmutableArray* $tmp1579 = *(&local77);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1579));
// unreffing annotations
*(&local77) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1580 = *(&local76);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1580));
// unreffing dc
*(&local76) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1572;
block123:;
panda$core$Int64 $tmp1581 = (panda$core$Int64) {28};
panda$core$Bit $tmp1582 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp1581);
bool $tmp1583 = $tmp1582.value;
if ($tmp1583) goto block144; else goto block145;
block144:;
org$pandalanguage$pandac$Position* $tmp1584 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1585 = *$tmp1584;
org$pandalanguage$pandac$parser$Token$Kind* $tmp1586 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp1587 = *$tmp1586;
*(&local87) = $tmp1587;
panda$collections$ImmutableArray** $tmp1588 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp1589 = *$tmp1588;
*(&local88) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1589));
panda$collections$ImmutableArray* $tmp1590 = *(&local88);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1590));
*(&local88) = $tmp1589;
org$pandalanguage$pandac$ASTNode** $tmp1591 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp1592 = *$tmp1591;
*(&local89) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1592));
org$pandalanguage$pandac$ASTNode* $tmp1593 = *(&local89);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1593));
*(&local89) = $tmp1592;
// line 468
*(&local90) = ((panda$core$String*) NULL);
// line 469
org$pandalanguage$pandac$parser$Token$Kind $tmp1594 = *(&local87);
panda$core$Int64 $tmp1595 = $tmp1594.$rawValue;
panda$core$Int64 $tmp1596 = (panda$core$Int64) {91};
panda$core$Bit $tmp1597 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1595, $tmp1596);
bool $tmp1598 = $tmp1597.value;
if ($tmp1598) goto block147; else goto block148;
block147:;
// line 471
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1599));
panda$core$String* $tmp1600 = *(&local90);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1600));
*(&local90) = &$s1601;
goto block146;
block148:;
panda$core$Int64 $tmp1602 = (panda$core$Int64) {92};
panda$core$Bit $tmp1603 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1595, $tmp1602);
bool $tmp1604 = $tmp1603.value;
if ($tmp1604) goto block149; else goto block150;
block149:;
// line 474
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1605));
panda$core$String* $tmp1606 = *(&local90);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1606));
*(&local90) = &$s1607;
goto block146;
block150:;
panda$core$Int64 $tmp1608 = (panda$core$Int64) {93};
panda$core$Bit $tmp1609 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1595, $tmp1608);
bool $tmp1610 = $tmp1609.value;
if ($tmp1610) goto block151; else goto block152;
block151:;
// line 477
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1611));
panda$core$String* $tmp1612 = *(&local90);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1612));
*(&local90) = &$s1613;
goto block146;
block152:;
panda$core$Int64 $tmp1614 = (panda$core$Int64) {94};
panda$core$Bit $tmp1615 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1595, $tmp1614);
bool $tmp1616 = $tmp1615.value;
if ($tmp1616) goto block153; else goto block146;
block153:;
// line 480
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1617));
panda$core$String* $tmp1618 = *(&local90);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1618));
*(&local90) = &$s1619;
goto block146;
block146:;
// line 483
panda$collections$ImmutableArray* $tmp1620 = *(&local88);
ITable* $tmp1621 = ((panda$collections$CollectionView*) $tmp1620)->$class->itable;
while ($tmp1621->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1621 = $tmp1621->next;
}
$fn1623 $tmp1622 = $tmp1621->methods[1];
panda$core$String* $tmp1624 = $tmp1622(((panda$collections$CollectionView*) $tmp1620));
panda$core$String* $tmp1625 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1626, $tmp1624);
panda$core$String* $tmp1627 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1625, &$s1628);
panda$core$String* $tmp1629 = *(&local90);
panda$core$String* $tmp1630 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1627, $tmp1629);
panda$core$String* $tmp1631 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1630, &$s1632);
*(&local91) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1631));
panda$core$String* $tmp1633 = *(&local91);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1633));
*(&local91) = $tmp1631;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1631));
// unreffing REF($2804:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1630));
// unreffing REF($2803:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1627));
// unreffing REF($2801:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1625));
// unreffing REF($2800:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1624));
// unreffing REF($2799:panda.core.String)
// line 484
org$pandalanguage$pandac$ASTNode* $tmp1634 = *(&local89);
panda$core$Bit $tmp1635 = panda$core$Bit$init$builtin_bit($tmp1634 != NULL);
bool $tmp1636 = $tmp1635.value;
if ($tmp1636) goto block154; else goto block155;
block154:;
// line 485
panda$core$String* $tmp1637 = *(&local91);
panda$core$String* $tmp1638 = panda$core$String$convert$R$panda$core$String($tmp1637);
panda$core$String* $tmp1639 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1638, &$s1640);
org$pandalanguage$pandac$ASTNode* $tmp1641 = *(&local89);
panda$core$String* $tmp1642 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1639, ((panda$core$Object*) $tmp1641));
panda$core$String* $tmp1643 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1642, &$s1644);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1643));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1643));
// unreffing REF($2840:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1642));
// unreffing REF($2839:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1639));
// unreffing REF($2836:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1638));
// unreffing REF($2835:panda.core.String)
panda$core$String* $tmp1645 = *(&local91);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1645));
// unreffing partial
*(&local91) = ((panda$core$String*) NULL);
panda$core$String* $tmp1646 = *(&local90);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1646));
// unreffing yield
*(&local90) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1647 = *(&local89);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1647));
// unreffing returnType
*(&local89) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp1648 = *(&local88);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1648));
// unreffing paramTypes
*(&local88) = ((panda$collections$ImmutableArray*) NULL);
return $tmp1643;
block155:;
// line 487
panda$core$String* $tmp1649 = *(&local91);
panda$core$String* $tmp1650 = panda$core$String$convert$R$panda$core$String($tmp1649);
panda$core$String* $tmp1651 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1650, &$s1652);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1651));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1651));
// unreffing REF($2879:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1650));
// unreffing REF($2878:panda.core.String)
panda$core$String* $tmp1653 = *(&local91);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1653));
// unreffing partial
*(&local91) = ((panda$core$String*) NULL);
panda$core$String* $tmp1654 = *(&local90);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1654));
// unreffing yield
*(&local90) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1655 = *(&local89);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1655));
// unreffing returnType
*(&local89) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp1656 = *(&local88);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1656));
// unreffing paramTypes
*(&local88) = ((panda$collections$ImmutableArray*) NULL);
return $tmp1651;
block145:;
panda$core$Int64 $tmp1657 = (panda$core$Int64) {29};
panda$core$Bit $tmp1658 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp1657);
bool $tmp1659 = $tmp1658.value;
if ($tmp1659) goto block156; else goto block157;
block156:;
// line 490
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1660));
return &$s1661;
block157:;
panda$core$Int64 $tmp1662 = (panda$core$Int64) {30};
panda$core$Bit $tmp1663 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp1662);
bool $tmp1664 = $tmp1663.value;
if ($tmp1664) goto block158; else goto block159;
block158:;
org$pandalanguage$pandac$Position* $tmp1665 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1666 = *$tmp1665;
org$pandalanguage$pandac$ASTNode** $tmp1667 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1668 = *$tmp1667;
*(&local92) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1668));
org$pandalanguage$pandac$ASTNode* $tmp1669 = *(&local92);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1669));
*(&local92) = $tmp1668;
// line 493
org$pandalanguage$pandac$ASTNode* $tmp1670 = *(&local92);
panda$core$String* $tmp1671 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp1670), &$s1672);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1671));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1671));
// unreffing REF($2935:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1673 = *(&local92);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1673));
// unreffing base
*(&local92) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1671;
block159:;
panda$core$Int64 $tmp1674 = (panda$core$Int64) {31};
panda$core$Bit $tmp1675 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp1674);
bool $tmp1676 = $tmp1675.value;
if ($tmp1676) goto block160; else goto block161;
block160:;
org$pandalanguage$pandac$Position* $tmp1677 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1678 = *$tmp1677;
panda$core$String** $tmp1679 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1680 = *$tmp1679;
*(&local93) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1680));
panda$core$String* $tmp1681 = *(&local93);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1681));
*(&local93) = $tmp1680;
// line 496
panda$core$String* $tmp1682 = *(&local93);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1682));
panda$core$String* $tmp1683 = *(&local93);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1683));
// unreffing name
*(&local93) = ((panda$core$String*) NULL);
return $tmp1682;
block161:;
panda$core$Int64 $tmp1684 = (panda$core$Int64) {32};
panda$core$Bit $tmp1685 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp1684);
bool $tmp1686 = $tmp1685.value;
if ($tmp1686) goto block162; else goto block163;
block162:;
org$pandalanguage$pandac$Position* $tmp1687 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1688 = *$tmp1687;
panda$core$String** $tmp1689 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1690 = *$tmp1689;
*(&local94) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1690));
panda$core$String* $tmp1691 = *(&local94);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1691));
*(&local94) = $tmp1690;
org$pandalanguage$pandac$ASTNode** $tmp1692 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1693 = *$tmp1692;
*(&local95) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1693));
org$pandalanguage$pandac$ASTNode* $tmp1694 = *(&local95);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1694));
*(&local95) = $tmp1693;
// line 499
panda$core$String* $tmp1695 = *(&local94);
panda$core$String* $tmp1696 = panda$core$String$convert$R$panda$core$String($tmp1695);
panda$core$String* $tmp1697 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1696, &$s1698);
org$pandalanguage$pandac$ASTNode* $tmp1699 = *(&local95);
panda$core$String* $tmp1700 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1697, ((panda$core$Object*) $tmp1699));
panda$core$String* $tmp1701 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1700, &$s1702);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1701));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1701));
// unreffing REF($3003:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1700));
// unreffing REF($3002:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1697));
// unreffing REF($2999:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1696));
// unreffing REF($2998:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1703 = *(&local95);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1703));
// unreffing type
*(&local95) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1704 = *(&local94);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1704));
// unreffing name
*(&local94) = ((panda$core$String*) NULL);
return $tmp1701;
block163:;
panda$core$Int64 $tmp1705 = (panda$core$Int64) {33};
panda$core$Bit $tmp1706 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp1705);
bool $tmp1707 = $tmp1706.value;
if ($tmp1707) goto block164; else goto block165;
block164:;
org$pandalanguage$pandac$Position* $tmp1708 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1709 = *$tmp1708;
org$pandalanguage$pandac$parser$Token$Kind* $tmp1710 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp1711 = *$tmp1710;
*(&local96) = $tmp1711;
org$pandalanguage$pandac$ASTNode** $tmp1712 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1713 = *$tmp1712;
*(&local97) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1713));
org$pandalanguage$pandac$ASTNode* $tmp1714 = *(&local97);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1714));
*(&local97) = $tmp1713;
// line 502
org$pandalanguage$pandac$parser$Token$Kind $tmp1715 = *(&local96);
panda$core$String* $tmp1716 = org$pandalanguage$pandac$parser$Token$Kind$convert$R$panda$core$String($tmp1715);
panda$core$String* $tmp1717 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1716, &$s1718);
org$pandalanguage$pandac$ASTNode* $tmp1719 = *(&local97);
panda$core$String* $tmp1720 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1717, ((panda$core$Object*) $tmp1719));
panda$core$String* $tmp1721 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1720, &$s1722);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1721));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1721));
// unreffing REF($3054:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1720));
// unreffing REF($3053:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1717));
// unreffing REF($3050:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1716));
// unreffing REF($3049:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1723 = *(&local97);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1723));
// unreffing base
*(&local97) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1721;
block165:;
panda$core$Int64 $tmp1724 = (panda$core$Int64) {34};
panda$core$Bit $tmp1725 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp1724);
bool $tmp1726 = $tmp1725.value;
if ($tmp1726) goto block166; else goto block167;
block166:;
org$pandalanguage$pandac$Position* $tmp1727 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1728 = *$tmp1727;
org$pandalanguage$pandac$ASTNode** $tmp1729 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1730 = *$tmp1729;
*(&local98) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1730));
org$pandalanguage$pandac$ASTNode* $tmp1731 = *(&local98);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1731));
*(&local98) = $tmp1730;
panda$core$Bit* $tmp1732 = (panda$core$Bit*) (param0->$data + 24);
panda$core$Bit $tmp1733 = *$tmp1732;
*(&local99) = $tmp1733;
org$pandalanguage$pandac$ASTNode** $tmp1734 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 25);
org$pandalanguage$pandac$ASTNode* $tmp1735 = *$tmp1734;
*(&local100) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1735));
org$pandalanguage$pandac$ASTNode* $tmp1736 = *(&local100);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1736));
*(&local100) = $tmp1735;
org$pandalanguage$pandac$ASTNode** $tmp1737 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 33);
org$pandalanguage$pandac$ASTNode* $tmp1738 = *$tmp1737;
*(&local101) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1738));
org$pandalanguage$pandac$ASTNode* $tmp1739 = *(&local101);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1739));
*(&local101) = $tmp1738;
// line 505
panda$core$MutableString* $tmp1740 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1740);
*(&local102) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1740));
panda$core$MutableString* $tmp1741 = *(&local102);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1741));
*(&local102) = $tmp1740;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1740));
// unreffing REF($3112:panda.core.MutableString)
// line 506
org$pandalanguage$pandac$ASTNode* $tmp1742 = *(&local98);
panda$core$Bit $tmp1743 = panda$core$Bit$init$builtin_bit($tmp1742 != NULL);
bool $tmp1744 = $tmp1743.value;
if ($tmp1744) goto block168; else goto block169;
block168:;
// line 507
panda$core$MutableString* $tmp1745 = *(&local102);
org$pandalanguage$pandac$ASTNode* $tmp1746 = *(&local98);
panda$core$MutableString$append$panda$core$Object($tmp1745, ((panda$core$Object*) $tmp1746));
goto block169;
block169:;
// line 509
panda$core$Bit $tmp1747 = *(&local99);
bool $tmp1748 = $tmp1747.value;
if ($tmp1748) goto block170; else goto block172;
block170:;
// line 510
panda$core$MutableString* $tmp1749 = *(&local102);
panda$core$MutableString$append$panda$core$String($tmp1749, &$s1750);
goto block171;
block172:;
// line 1
// line 513
panda$core$MutableString* $tmp1751 = *(&local102);
panda$core$MutableString$append$panda$core$String($tmp1751, &$s1752);
goto block171;
block171:;
// line 515
org$pandalanguage$pandac$ASTNode* $tmp1753 = *(&local100);
panda$core$Bit $tmp1754 = panda$core$Bit$init$builtin_bit($tmp1753 != NULL);
bool $tmp1755 = $tmp1754.value;
if ($tmp1755) goto block173; else goto block174;
block173:;
// line 516
panda$core$MutableString* $tmp1756 = *(&local102);
org$pandalanguage$pandac$ASTNode* $tmp1757 = *(&local100);
panda$core$MutableString$append$panda$core$Object($tmp1756, ((panda$core$Object*) $tmp1757));
goto block174;
block174:;
// line 518
org$pandalanguage$pandac$ASTNode* $tmp1758 = *(&local101);
panda$core$Bit $tmp1759 = panda$core$Bit$init$builtin_bit($tmp1758 != NULL);
bool $tmp1760 = $tmp1759.value;
if ($tmp1760) goto block175; else goto block176;
block175:;
// line 519
panda$core$MutableString* $tmp1761 = *(&local102);
org$pandalanguage$pandac$ASTNode* $tmp1762 = *(&local101);
panda$core$String* $tmp1763 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1764, ((panda$core$Object*) $tmp1762));
panda$core$MutableString$append$panda$core$String($tmp1761, $tmp1763);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1763));
// unreffing REF($3171:panda.core.String)
goto block176;
block176:;
// line 521
panda$core$MutableString* $tmp1765 = *(&local102);
panda$core$String* $tmp1766 = panda$core$MutableString$finish$R$panda$core$String($tmp1765);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1766));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1766));
// unreffing REF($3179:panda.core.String)
panda$core$MutableString* $tmp1767 = *(&local102);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1767));
// unreffing result
*(&local102) = ((panda$core$MutableString*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1768 = *(&local101);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1768));
// unreffing step
*(&local101) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1769 = *(&local100);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1769));
// unreffing end
*(&local100) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp1770 = *(&local98);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1770));
// unreffing start
*(&local98) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1766;
block167:;
panda$core$Int64 $tmp1771 = (panda$core$Int64) {35};
panda$core$Bit $tmp1772 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp1771);
bool $tmp1773 = $tmp1772.value;
if ($tmp1773) goto block177; else goto block178;
block177:;
org$pandalanguage$pandac$Position* $tmp1774 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1775 = *$tmp1774;
panda$core$Real64* $tmp1776 = (panda$core$Real64*) (param0->$data + 16);
panda$core$Real64 $tmp1777 = *$tmp1776;
*(&local103) = $tmp1777;
// line 524
panda$core$Real64 $tmp1778 = *(&local103);
panda$core$String* $tmp1779 = panda$core$Real64$convert$R$panda$core$String($tmp1778);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1779));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1779));
// unreffing REF($3217:panda.core.String)
return $tmp1779;
block178:;
panda$core$Int64 $tmp1780 = (panda$core$Int64) {36};
panda$core$Bit $tmp1781 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp1780);
bool $tmp1782 = $tmp1781.value;
if ($tmp1782) goto block179; else goto block180;
block179:;
org$pandalanguage$pandac$Position* $tmp1783 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1784 = *$tmp1783;
panda$core$String** $tmp1785 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1786 = *$tmp1785;
*(&local104) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1786));
panda$core$String* $tmp1787 = *(&local104);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1787));
*(&local104) = $tmp1786;
// line 527
panda$core$String* $tmp1788 = *(&local104);
panda$core$String* $tmp1789 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1790, $tmp1788);
panda$core$String* $tmp1791 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1789, &$s1792);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1791));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1791));
// unreffing REF($3242:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1789));
// unreffing REF($3241:panda.core.String)
panda$core$String* $tmp1793 = *(&local104);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1793));
// unreffing src
*(&local104) = ((panda$core$String*) NULL);
return $tmp1791;
block180:;
panda$core$Int64 $tmp1794 = (panda$core$Int64) {37};
panda$core$Bit $tmp1795 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp1794);
bool $tmp1796 = $tmp1795.value;
if ($tmp1796) goto block181; else goto block182;
block181:;
org$pandalanguage$pandac$Position* $tmp1797 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1798 = *$tmp1797;
org$pandalanguage$pandac$ASTNode** $tmp1799 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp1800 = *$tmp1799;
*(&local105) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1800));
org$pandalanguage$pandac$ASTNode* $tmp1801 = *(&local105);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1801));
*(&local105) = $tmp1800;
// line 530
org$pandalanguage$pandac$ASTNode* $tmp1802 = *(&local105);
panda$core$Bit $tmp1803 = panda$core$Bit$init$builtin_bit($tmp1802 != NULL);
bool $tmp1804 = $tmp1803.value;
if ($tmp1804) goto block183; else goto block184;
block183:;
// line 531
org$pandalanguage$pandac$ASTNode* $tmp1805 = *(&local105);
panda$core$String* $tmp1806 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s1807, ((panda$core$Object*) $tmp1805));
panda$core$String* $tmp1808 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1806, &$s1809);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1808));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1808));
// unreffing REF($3282:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1806));
// unreffing REF($3281:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1810 = *(&local105);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1810));
// unreffing value
*(&local105) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return $tmp1808;
block184:;
// line 533
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1811));
org$pandalanguage$pandac$ASTNode* $tmp1812 = *(&local105);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1812));
// unreffing value
*(&local105) = ((org$pandalanguage$pandac$ASTNode*) NULL);
return &$s1813;
block182:;
panda$core$Int64 $tmp1814 = (panda$core$Int64) {38};
panda$core$Bit $tmp1815 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp1814);
bool $tmp1816 = $tmp1815.value;
if ($tmp1816) goto block185; else goto block186;
block185:;
// line 536
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1817));
return &$s1818;
block186:;
panda$core$Int64 $tmp1819 = (panda$core$Int64) {39};
panda$core$Bit $tmp1820 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp1819);
bool $tmp1821 = $tmp1820.value;
if ($tmp1821) goto block187; else goto block188;
block187:;
org$pandalanguage$pandac$Position* $tmp1822 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1823 = *$tmp1822;
panda$core$String** $tmp1824 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1825 = *$tmp1824;
*(&local106) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1825));
panda$core$String* $tmp1826 = *(&local106);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1826));
*(&local106) = $tmp1825;
// line 539
panda$core$String* $tmp1827 = *(&local106);
panda$core$String* $tmp1828 = panda$core$String$format$panda$core$String$R$panda$core$String($tmp1827, &$s1829);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1828));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1828));
// unreffing REF($3331:panda.core.String)
panda$core$String* $tmp1830 = *(&local106);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1830));
// unreffing str
*(&local106) = ((panda$core$String*) NULL);
return $tmp1828;
block188:;
panda$core$Int64 $tmp1831 = (panda$core$Int64) {40};
panda$core$Bit $tmp1832 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp1831);
bool $tmp1833 = $tmp1832.value;
if ($tmp1833) goto block189; else goto block190;
block189:;
// line 542
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s1834));
return &$s1835;
block190:;
panda$core$Int64 $tmp1836 = (panda$core$Int64) {41};
panda$core$Bit $tmp1837 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp1836);
bool $tmp1838 = $tmp1837.value;
if ($tmp1838) goto block191; else goto block192;
block191:;
org$pandalanguage$pandac$Position* $tmp1839 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1840 = *$tmp1839;
panda$collections$ImmutableArray** $tmp1841 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp1842 = *$tmp1841;
*(&local107) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1842));
panda$collections$ImmutableArray* $tmp1843 = *(&local107);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1843));
*(&local107) = $tmp1842;
// line 545
panda$collections$ImmutableArray* $tmp1844 = *(&local107);
ITable* $tmp1845 = ((panda$collections$CollectionView*) $tmp1844)->$class->itable;
while ($tmp1845->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1845 = $tmp1845->next;
}
$fn1847 $tmp1846 = $tmp1845->methods[1];
panda$core$String* $tmp1848 = $tmp1846(((panda$collections$CollectionView*) $tmp1844));
panda$core$String* $tmp1849 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1850, $tmp1848);
panda$core$String* $tmp1851 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1849, &$s1852);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1851));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1851));
// unreffing REF($3372:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1849));
// unreffing REF($3371:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1848));
// unreffing REF($3370:panda.core.String)
panda$collections$ImmutableArray* $tmp1853 = *(&local107);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1853));
// unreffing arguments
*(&local107) = ((panda$collections$ImmutableArray*) NULL);
return $tmp1851;
block192:;
panda$core$Int64 $tmp1854 = (panda$core$Int64) {42};
panda$core$Bit $tmp1855 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp1854);
bool $tmp1856 = $tmp1855.value;
if ($tmp1856) goto block193; else goto block194;
block193:;
org$pandalanguage$pandac$Position* $tmp1857 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1858 = *$tmp1857;
panda$collections$ImmutableArray** $tmp1859 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp1860 = *$tmp1859;
*(&local108) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1860));
panda$collections$ImmutableArray* $tmp1861 = *(&local108);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1861));
*(&local108) = $tmp1860;
// line 548
panda$collections$ImmutableArray* $tmp1862 = *(&local108);
ITable* $tmp1863 = ((panda$collections$CollectionView*) $tmp1862)->$class->itable;
while ($tmp1863->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1863 = $tmp1863->next;
}
$fn1865 $tmp1864 = $tmp1863->methods[1];
panda$core$String* $tmp1866 = $tmp1864(((panda$collections$CollectionView*) $tmp1862));
panda$core$String* $tmp1867 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1868, $tmp1866);
panda$core$String* $tmp1869 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1867, &$s1870);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1869));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1869));
// unreffing REF($3411:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1867));
// unreffing REF($3410:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1866));
// unreffing REF($3409:panda.core.String)
panda$collections$ImmutableArray* $tmp1871 = *(&local108);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1871));
// unreffing parameters
*(&local108) = ((panda$collections$ImmutableArray*) NULL);
return $tmp1869;
block194:;
panda$core$Int64 $tmp1872 = (panda$core$Int64) {43};
panda$core$Bit $tmp1873 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp1872);
bool $tmp1874 = $tmp1873.value;
if ($tmp1874) goto block195; else goto block196;
block195:;
org$pandalanguage$pandac$Position* $tmp1875 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1876 = *$tmp1875;
panda$core$String** $tmp1877 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1878 = *$tmp1877;
*(&local109) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1878));
panda$core$String* $tmp1879 = *(&local109);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1879));
*(&local109) = $tmp1878;
// line 551
panda$core$String* $tmp1880 = *(&local109);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1880));
panda$core$String* $tmp1881 = *(&local109);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1881));
// unreffing name
*(&local109) = ((panda$core$String*) NULL);
return $tmp1880;
block196:;
panda$core$Int64 $tmp1882 = (panda$core$Int64) {45};
panda$core$Bit $tmp1883 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp1882);
bool $tmp1884 = $tmp1883.value;
if ($tmp1884) goto block197; else goto block198;
block197:;
org$pandalanguage$pandac$Position* $tmp1885 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1886 = *$tmp1885;
panda$core$String** $tmp1887 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1888 = *$tmp1887;
*(&local110) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1888));
panda$core$String* $tmp1889 = *(&local110);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1889));
*(&local110) = $tmp1888;
org$pandalanguage$pandac$ASTNode** $tmp1890 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1891 = *$tmp1890;
*(&local111) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1891));
org$pandalanguage$pandac$ASTNode* $tmp1892 = *(&local111);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1892));
*(&local111) = $tmp1891;
// line 554
org$pandalanguage$pandac$ASTNode* $tmp1893 = *(&local111);
panda$core$Bit $tmp1894 = panda$core$Bit$init$builtin_bit($tmp1893 != NULL);
bool $tmp1895 = $tmp1894.value;
if ($tmp1895) goto block199; else goto block200;
block199:;
// line 555
panda$core$String* $tmp1896 = *(&local110);
panda$core$String* $tmp1897 = panda$core$String$convert$R$panda$core$String($tmp1896);
panda$core$String* $tmp1898 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1897, &$s1899);
org$pandalanguage$pandac$ASTNode* $tmp1900 = *(&local111);
panda$core$String* $tmp1901 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1898, ((panda$core$Object*) $tmp1900));
panda$core$String* $tmp1902 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1901, &$s1903);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1902));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1902));
// unreffing REF($3491:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1901));
// unreffing REF($3490:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1898));
// unreffing REF($3487:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1897));
// unreffing REF($3486:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1904 = *(&local111);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1904));
// unreffing type
*(&local111) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1905 = *(&local110);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1905));
// unreffing name
*(&local110) = ((panda$core$String*) NULL);
return $tmp1902;
block200:;
// line 557
panda$core$String* $tmp1906 = *(&local110);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1906));
org$pandalanguage$pandac$ASTNode* $tmp1907 = *(&local111);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1907));
// unreffing type
*(&local111) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp1908 = *(&local110);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1908));
// unreffing name
*(&local110) = ((panda$core$String*) NULL);
return $tmp1906;
block198:;
panda$core$Int64 $tmp1909 = (panda$core$Int64) {44};
panda$core$Bit $tmp1910 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp1909);
bool $tmp1911 = $tmp1910.value;
if ($tmp1911) goto block201; else goto block202;
block201:;
org$pandalanguage$pandac$Position* $tmp1912 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1913 = *$tmp1912;
panda$collections$ImmutableArray** $tmp1914 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp1915 = *$tmp1914;
*(&local112) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1915));
panda$collections$ImmutableArray* $tmp1916 = *(&local112);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1916));
*(&local112) = $tmp1915;
org$pandalanguage$pandac$ASTNode** $tmp1917 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1918 = *$tmp1917;
*(&local113) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1918));
org$pandalanguage$pandac$ASTNode* $tmp1919 = *(&local113);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1919));
*(&local113) = $tmp1918;
// line 560
panda$collections$ImmutableArray* $tmp1920 = *(&local112);
ITable* $tmp1921 = ((panda$collections$CollectionView*) $tmp1920)->$class->itable;
while ($tmp1921->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1921 = $tmp1921->next;
}
$fn1923 $tmp1922 = $tmp1921->methods[1];
panda$core$String* $tmp1924 = $tmp1922(((panda$collections$CollectionView*) $tmp1920));
panda$core$String* $tmp1925 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1926, $tmp1924);
panda$core$String* $tmp1927 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1925, &$s1928);
org$pandalanguage$pandac$ASTNode* $tmp1929 = *(&local113);
panda$core$String* $tmp1930 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1927, ((panda$core$Object*) $tmp1929));
panda$core$String* $tmp1931 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1930, &$s1932);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1931));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1931));
// unreffing REF($3566:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1930));
// unreffing REF($3565:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1927));
// unreffing REF($3562:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1925));
// unreffing REF($3561:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1924));
// unreffing REF($3560:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1933 = *(&local113);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1933));
// unreffing body
*(&local113) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp1934 = *(&local112);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1934));
// unreffing parameters
*(&local112) = ((panda$collections$ImmutableArray*) NULL);
return $tmp1931;
block202:;
panda$core$Int64 $tmp1935 = (panda$core$Int64) {46};
panda$core$Bit $tmp1936 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp1935);
bool $tmp1937 = $tmp1936.value;
if ($tmp1937) goto block203; else goto block204;
block203:;
org$pandalanguage$pandac$Position* $tmp1938 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1939 = *$tmp1938;
panda$collections$ImmutableArray** $tmp1940 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp1941 = *$tmp1940;
*(&local114) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1941));
panda$collections$ImmutableArray* $tmp1942 = *(&local114);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1942));
*(&local114) = $tmp1941;
org$pandalanguage$pandac$ASTNode** $tmp1943 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp1944 = *$tmp1943;
*(&local115) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1944));
org$pandalanguage$pandac$ASTNode* $tmp1945 = *(&local115);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1945));
*(&local115) = $tmp1944;
// line 563
panda$collections$ImmutableArray* $tmp1946 = *(&local114);
ITable* $tmp1947 = ((panda$collections$CollectionView*) $tmp1946)->$class->itable;
while ($tmp1947->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp1947 = $tmp1947->next;
}
$fn1949 $tmp1948 = $tmp1947->methods[1];
panda$core$String* $tmp1950 = $tmp1948(((panda$collections$CollectionView*) $tmp1946));
panda$core$String* $tmp1951 = panda$core$String$$ADD$panda$core$String$R$panda$core$String(&$s1952, $tmp1950);
panda$core$String* $tmp1953 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1951, &$s1954);
org$pandalanguage$pandac$ASTNode* $tmp1955 = *(&local115);
panda$core$String* $tmp1956 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp1953, ((panda$core$Object*) $tmp1955));
panda$core$String* $tmp1957 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp1956, &$s1958);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1957));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1957));
// unreffing REF($3629:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1956));
// unreffing REF($3628:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1953));
// unreffing REF($3625:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1951));
// unreffing REF($3624:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1950));
// unreffing REF($3623:panda.core.String)
org$pandalanguage$pandac$ASTNode* $tmp1959 = *(&local115);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1959));
// unreffing body
*(&local115) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp1960 = *(&local114);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1960));
// unreffing parameters
*(&local114) = ((panda$collections$ImmutableArray*) NULL);
return $tmp1957;
block204:;
panda$core$Int64 $tmp1961 = (panda$core$Int64) {47};
panda$core$Bit $tmp1962 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp1961);
bool $tmp1963 = $tmp1962.value;
if ($tmp1963) goto block205; else goto block206;
block205:;
org$pandalanguage$pandac$Position* $tmp1964 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1965 = *$tmp1964;
panda$core$String** $tmp1966 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp1967 = *$tmp1966;
*(&local116) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1967));
panda$core$String* $tmp1968 = *(&local116);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1968));
*(&local116) = $tmp1967;
// line 566
panda$core$String* $tmp1969 = *(&local116);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1969));
panda$core$String* $tmp1970 = *(&local116);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1970));
// unreffing name
*(&local116) = ((panda$core$String*) NULL);
return $tmp1969;
block206:;
panda$core$Int64 $tmp1971 = (panda$core$Int64) {48};
panda$core$Bit $tmp1972 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp1971);
bool $tmp1973 = $tmp1972.value;
if ($tmp1973) goto block207; else goto block208;
block207:;
org$pandalanguage$pandac$Position* $tmp1974 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp1975 = *$tmp1974;
org$pandalanguage$pandac$Variable$Kind* $tmp1976 = (org$pandalanguage$pandac$Variable$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$Variable$Kind $tmp1977 = *$tmp1976;
*(&local117) = $tmp1977;
panda$collections$ImmutableArray** $tmp1978 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp1979 = *$tmp1978;
*(&local118) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1979));
panda$collections$ImmutableArray* $tmp1980 = *(&local118);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1980));
*(&local118) = $tmp1979;
// line 569
panda$core$MutableString* $tmp1981 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp1981);
*(&local119) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp1981));
panda$core$MutableString* $tmp1982 = *(&local119);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1982));
*(&local119) = $tmp1981;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp1981));
// unreffing REF($3702:panda.core.MutableString)
// line 570
org$pandalanguage$pandac$Variable$Kind $tmp1983 = *(&local117);
panda$core$Int64 $tmp1984 = $tmp1983.$rawValue;
panda$core$Int64 $tmp1985 = (panda$core$Int64) {0};
panda$core$Bit $tmp1986 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1984, $tmp1985);
bool $tmp1987 = $tmp1986.value;
if ($tmp1987) goto block210; else goto block211;
block210:;
// line 571
panda$core$MutableString* $tmp1988 = *(&local119);
panda$core$MutableString$append$panda$core$String($tmp1988, &$s1989);
goto block209;
block211:;
panda$core$Int64 $tmp1990 = (panda$core$Int64) {1};
panda$core$Bit $tmp1991 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1984, $tmp1990);
bool $tmp1992 = $tmp1991.value;
if ($tmp1992) goto block212; else goto block213;
block212:;
// line 572
panda$core$MutableString* $tmp1993 = *(&local119);
panda$core$MutableString$append$panda$core$String($tmp1993, &$s1994);
goto block209;
block213:;
panda$core$Int64 $tmp1995 = (panda$core$Int64) {2};
panda$core$Bit $tmp1996 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1984, $tmp1995);
bool $tmp1997 = $tmp1996.value;
if ($tmp1997) goto block214; else goto block215;
block214:;
// line 573
panda$core$MutableString* $tmp1998 = *(&local119);
panda$core$MutableString$append$panda$core$String($tmp1998, &$s1999);
goto block209;
block215:;
panda$core$Int64 $tmp2000 = (panda$core$Int64) {3};
panda$core$Bit $tmp2001 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp1984, $tmp2000);
bool $tmp2002 = $tmp2001.value;
if ($tmp2002) goto block216; else goto block209;
block216:;
// line 574
panda$core$MutableString* $tmp2003 = *(&local119);
panda$core$MutableString$append$panda$core$String($tmp2003, &$s2004);
goto block209;
block209:;
// line 576
panda$core$MutableString* $tmp2005 = *(&local119);
panda$collections$ImmutableArray* $tmp2006 = *(&local118);
ITable* $tmp2007 = ((panda$collections$CollectionView*) $tmp2006)->$class->itable;
while ($tmp2007->$class != (panda$core$Class*) &panda$collections$CollectionView$class) {
    $tmp2007 = $tmp2007->next;
}
$fn2009 $tmp2008 = $tmp2007->methods[1];
panda$core$String* $tmp2010 = $tmp2008(((panda$collections$CollectionView*) $tmp2006));
panda$core$MutableString$append$panda$core$String($tmp2005, $tmp2010);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2010));
// unreffing REF($3754:panda.core.String)
// line 577
panda$core$MutableString* $tmp2011 = *(&local119);
panda$core$String* $tmp2012 = panda$core$MutableString$finish$R$panda$core$String($tmp2011);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2012));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2012));
// unreffing REF($3761:panda.core.String)
panda$core$MutableString* $tmp2013 = *(&local119);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2013));
// unreffing result
*(&local119) = ((panda$core$MutableString*) NULL);
panda$collections$ImmutableArray* $tmp2014 = *(&local118);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2014));
// unreffing decls
*(&local118) = ((panda$collections$ImmutableArray*) NULL);
return $tmp2012;
block208:;
panda$core$Int64 $tmp2015 = (panda$core$Int64) {49};
panda$core$Bit $tmp2016 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp2015);
bool $tmp2017 = $tmp2016.value;
if ($tmp2017) goto block217; else goto block218;
block217:;
org$pandalanguage$pandac$Position* $tmp2018 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2019 = *$tmp2018;
panda$collections$ImmutableArray** $tmp2020 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp2021 = *$tmp2020;
*(&local120) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2021));
panda$collections$ImmutableArray* $tmp2022 = *(&local120);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2022));
*(&local120) = $tmp2021;
panda$collections$ImmutableArray** $tmp2023 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp2024 = *$tmp2023;
*(&local121) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2024));
panda$collections$ImmutableArray* $tmp2025 = *(&local121);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2025));
*(&local121) = $tmp2024;
// line 580
panda$core$MutableString* $tmp2026 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init$panda$core$String($tmp2026, &$s2027);
*(&local122) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2026));
panda$core$MutableString* $tmp2028 = *(&local122);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2028));
*(&local122) = $tmp2026;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2026));
// unreffing REF($3803:panda.core.MutableString)
// line 581
*(&local123) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) &$s2029));
panda$core$String* $tmp2030 = *(&local123);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2030));
*(&local123) = &$s2031;
// line 582
panda$collections$ImmutableArray* $tmp2032 = *(&local120);
ITable* $tmp2033 = ((panda$collections$Iterable*) $tmp2032)->$class->itable;
while ($tmp2033->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2033 = $tmp2033->next;
}
$fn2035 $tmp2034 = $tmp2033->methods[0];
panda$collections$Iterator* $tmp2036 = $tmp2034(((panda$collections$Iterable*) $tmp2032));
goto block219;
block219:;
ITable* $tmp2037 = $tmp2036->$class->itable;
while ($tmp2037->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2037 = $tmp2037->next;
}
$fn2039 $tmp2038 = $tmp2037->methods[0];
panda$core$Bit $tmp2040 = $tmp2038($tmp2036);
bool $tmp2041 = $tmp2040.value;
if ($tmp2041) goto block221; else goto block220;
block220:;
*(&local124) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2042 = $tmp2036->$class->itable;
while ($tmp2042->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2042 = $tmp2042->next;
}
$fn2044 $tmp2043 = $tmp2042->methods[1];
panda$core$Object* $tmp2045 = $tmp2043($tmp2036);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2045)));
org$pandalanguage$pandac$ASTNode* $tmp2046 = *(&local124);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2046));
*(&local124) = ((org$pandalanguage$pandac$ASTNode*) $tmp2045);
// line 583
panda$core$MutableString* $tmp2047 = *(&local122);
panda$core$String* $tmp2048 = *(&local123);
panda$core$String* $tmp2049 = panda$core$String$convert$R$panda$core$String($tmp2048);
panda$core$String* $tmp2050 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2049, &$s2051);
org$pandalanguage$pandac$ASTNode* $tmp2052 = *(&local124);
panda$core$String* $tmp2053 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String($tmp2050, ((panda$core$Object*) $tmp2052));
panda$core$String* $tmp2054 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2053, &$s2055);
panda$core$MutableString$append$panda$core$String($tmp2047, $tmp2054);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2054));
// unreffing REF($3855:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2053));
// unreffing REF($3854:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2050));
// unreffing REF($3851:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2049));
// unreffing REF($3850:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2045);
// unreffing REF($3839:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2056 = *(&local124);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2056));
// unreffing t
*(&local124) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block219;
block221:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2036));
// unreffing REF($3828:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 585
panda$core$MutableString* $tmp2057 = *(&local122);
panda$core$MutableString$append$panda$core$String($tmp2057, &$s2058);
// line 586
panda$collections$ImmutableArray* $tmp2059 = *(&local121);
ITable* $tmp2060 = ((panda$collections$Iterable*) $tmp2059)->$class->itable;
while ($tmp2060->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2060 = $tmp2060->next;
}
$fn2062 $tmp2061 = $tmp2060->methods[0];
panda$collections$Iterator* $tmp2063 = $tmp2061(((panda$collections$Iterable*) $tmp2059));
goto block222;
block222:;
ITable* $tmp2064 = $tmp2063->$class->itable;
while ($tmp2064->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2064 = $tmp2064->next;
}
$fn2066 $tmp2065 = $tmp2064->methods[0];
panda$core$Bit $tmp2067 = $tmp2065($tmp2063);
bool $tmp2068 = $tmp2067.value;
if ($tmp2068) goto block224; else goto block223;
block223:;
*(&local125) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2069 = $tmp2063->$class->itable;
while ($tmp2069->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2069 = $tmp2069->next;
}
$fn2071 $tmp2070 = $tmp2069->methods[1];
panda$core$Object* $tmp2072 = $tmp2070($tmp2063);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2072)));
org$pandalanguage$pandac$ASTNode* $tmp2073 = *(&local125);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2073));
*(&local125) = ((org$pandalanguage$pandac$ASTNode*) $tmp2072);
// line 587
panda$core$MutableString* $tmp2074 = *(&local122);
org$pandalanguage$pandac$ASTNode* $tmp2075 = *(&local125);
panda$core$String* $tmp2076 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2077, ((panda$core$Object*) $tmp2075));
panda$core$MutableString$append$panda$core$String($tmp2074, $tmp2076);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2076));
// unreffing REF($3912:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2072);
// unreffing REF($3900:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2078 = *(&local125);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2078));
// unreffing s
*(&local125) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block222;
block224:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2063));
// unreffing REF($3889:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 589
panda$core$MutableString* $tmp2079 = *(&local122);
panda$core$String* $tmp2080 = panda$core$MutableString$finish$R$panda$core$String($tmp2079);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2080));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2080));
// unreffing REF($3931:panda.core.String)
panda$core$String* $tmp2081 = *(&local123);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2081));
// unreffing separator
*(&local123) = ((panda$core$String*) NULL);
panda$core$MutableString* $tmp2082 = *(&local122);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2082));
// unreffing result
*(&local122) = ((panda$core$MutableString*) NULL);
panda$collections$ImmutableArray* $tmp2083 = *(&local121);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2083));
// unreffing statements
*(&local121) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2084 = *(&local120);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2084));
// unreffing tests
*(&local120) = ((panda$collections$ImmutableArray*) NULL);
return $tmp2080;
block218:;
panda$core$Int64 $tmp2085 = (panda$core$Int64) {50};
panda$core$Bit $tmp2086 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp516, $tmp2085);
bool $tmp2087 = $tmp2086.value;
if ($tmp2087) goto block225; else goto block226;
block225:;
org$pandalanguage$pandac$Position* $tmp2088 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2089 = *$tmp2088;
panda$core$String** $tmp2090 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2091 = *$tmp2090;
*(&local126) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2091));
panda$core$String* $tmp2092 = *(&local126);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2092));
*(&local126) = $tmp2091;
org$pandalanguage$pandac$ASTNode** $tmp2093 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2094 = *$tmp2093;
*(&local127) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2094));
org$pandalanguage$pandac$ASTNode* $tmp2095 = *(&local127);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2095));
*(&local127) = $tmp2094;
panda$collections$ImmutableArray** $tmp2096 = (panda$collections$ImmutableArray**) (param0->$data + 32);
panda$collections$ImmutableArray* $tmp2097 = *$tmp2096;
*(&local128) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2097));
panda$collections$ImmutableArray* $tmp2098 = *(&local128);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2098));
*(&local128) = $tmp2097;
// line 592
panda$core$MutableString* $tmp2099 = (panda$core$MutableString*) pandaObjectAlloc(48, (panda$core$Class*) &panda$core$MutableString$class);
panda$core$MutableString$init($tmp2099);
*(&local129) = ((panda$core$MutableString*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2099));
panda$core$MutableString* $tmp2100 = *(&local129);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2100));
*(&local129) = $tmp2099;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2099));
// unreffing REF($3992:panda.core.MutableString)
// line 593
panda$core$String* $tmp2101 = *(&local126);
panda$core$Bit $tmp2102 = panda$core$Bit$init$builtin_bit($tmp2101 != NULL);
bool $tmp2103 = $tmp2102.value;
if ($tmp2103) goto block227; else goto block228;
block227:;
// line 594
panda$core$MutableString* $tmp2104 = *(&local129);
panda$core$String* $tmp2105 = *(&local126);
panda$core$String* $tmp2106 = panda$core$String$convert$R$panda$core$String($tmp2105);
panda$core$String* $tmp2107 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2106, &$s2108);
panda$core$MutableString$append$panda$core$String($tmp2104, $tmp2107);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2107));
// unreffing REF($4015:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2106));
// unreffing REF($4014:panda.core.String)
goto block228;
block228:;
// line 596
panda$core$MutableString* $tmp2109 = *(&local129);
org$pandalanguage$pandac$ASTNode* $tmp2110 = *(&local127);
panda$core$String* $tmp2111 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2112, ((panda$core$Object*) $tmp2110));
panda$core$String* $tmp2113 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2111, &$s2114);
panda$core$MutableString$append$panda$core$String($tmp2109, $tmp2113);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2113));
// unreffing REF($4029:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2111));
// unreffing REF($4028:panda.core.String)
// line 597
panda$collections$ImmutableArray* $tmp2115 = *(&local128);
ITable* $tmp2116 = ((panda$collections$Iterable*) $tmp2115)->$class->itable;
while ($tmp2116->$class != (panda$core$Class*) &panda$collections$Iterable$class) {
    $tmp2116 = $tmp2116->next;
}
$fn2118 $tmp2117 = $tmp2116->methods[0];
panda$collections$Iterator* $tmp2119 = $tmp2117(((panda$collections$Iterable*) $tmp2115));
goto block229;
block229:;
ITable* $tmp2120 = $tmp2119->$class->itable;
while ($tmp2120->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2120 = $tmp2120->next;
}
$fn2122 $tmp2121 = $tmp2120->methods[0];
panda$core$Bit $tmp2123 = $tmp2121($tmp2119);
bool $tmp2124 = $tmp2123.value;
if ($tmp2124) goto block231; else goto block230;
block230:;
*(&local130) = ((org$pandalanguage$pandac$ASTNode*) NULL);
ITable* $tmp2125 = $tmp2119->$class->itable;
while ($tmp2125->$class != (panda$core$Class*) &panda$collections$Iterator$class) {
    $tmp2125 = $tmp2125->next;
}
$fn2127 $tmp2126 = $tmp2125->methods[1];
panda$core$Object* $tmp2128 = $tmp2126($tmp2119);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) ((org$pandalanguage$pandac$ASTNode*) $tmp2128)));
org$pandalanguage$pandac$ASTNode* $tmp2129 = *(&local130);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2129));
*(&local130) = ((org$pandalanguage$pandac$ASTNode*) $tmp2128);
// line 598
panda$core$MutableString* $tmp2130 = *(&local129);
org$pandalanguage$pandac$ASTNode* $tmp2131 = *(&local130);
panda$core$String* $tmp2132 = panda$core$String$$ADD$panda$core$Object$panda$core$String$R$panda$core$String(((panda$core$Object*) $tmp2131), &$s2133);
panda$core$MutableString$append$panda$core$String($tmp2130, $tmp2132);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2132));
// unreffing REF($4065:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q($tmp2128);
// unreffing REF($4053:panda.collections.Iterator.T)
org$pandalanguage$pandac$ASTNode* $tmp2134 = *(&local130);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2134));
// unreffing s
*(&local130) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block229;
block231:;
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2119));
// unreffing REF($4042:panda.collections.Iterator<panda.collections.Iterable.T>)
// line 600
panda$core$MutableString* $tmp2135 = *(&local129);
panda$core$MutableString$append$panda$core$String($tmp2135, &$s2136);
// line 601
panda$core$MutableString* $tmp2137 = *(&local129);
panda$core$String* $tmp2138 = panda$core$MutableString$finish$R$panda$core$String($tmp2137);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2138));
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2138));
// unreffing REF($4087:panda.core.String)
panda$core$MutableString* $tmp2139 = *(&local129);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2139));
// unreffing result
*(&local129) = ((panda$core$MutableString*) NULL);
panda$collections$ImmutableArray* $tmp2140 = *(&local128);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2140));
// unreffing statements
*(&local128) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2141 = *(&local127);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2141));
// unreffing test
*(&local127) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2142 = *(&local126);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2142));
// unreffing label
*(&local126) = ((panda$core$String*) NULL);
return $tmp2138;
block226:;
// line 604
panda$core$Bit $tmp2143 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2144 = $tmp2143.value;
if ($tmp2144) goto block232; else goto block233;
block233:;
panda$core$Int64 $tmp2145 = (panda$core$Int64) {604};
panda$core$Int64* $tmp2146 = &param0->$rawValue;
panda$core$Int64 $tmp2147 = *$tmp2146;
panda$core$Int64$wrapper* $tmp2148;
$tmp2148 = (panda$core$Int64$wrapper*) pandaObjectAlloc(24, (panda$core$Class*) &panda$core$Int64$wrapperclass);
$tmp2148->value = $tmp2147;
panda$core$String* $tmp2149 = panda$core$String$$ADD$panda$core$Object$R$panda$core$String(&$s2150, ((panda$core$Object*) $tmp2148));
panda$core$String* $tmp2151 = panda$core$String$$ADD$panda$core$String$R$panda$core$String($tmp2149, &$s2152);
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2153, $tmp2145, $tmp2151);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2151));
// unreffing REF($4123:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2149));
// unreffing REF($4122:panda.core.String)
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2148));
// unreffing REF($4121:panda.core.Object)
abort(); // unreachable
block232:;
goto block1;
block1:;
panda$core$Bit $tmp2154 = panda$core$Bit$init$builtin_bit(false);
bool $tmp2155 = $tmp2154.value;
if ($tmp2155) goto block234; else goto block235;
block235:;
panda$core$Int64 $tmp2156 = (panda$core$Int64) {249};
panda$core$Panda$assertionFailure$panda$core$String$panda$core$Int64$panda$core$String(&$s2157, $tmp2156, &$s2158);
abort(); // unreachable
block234:;
abort(); // unreachable

}
void org$pandalanguage$pandac$ASTNode$cleanup(org$pandalanguage$pandac$ASTNode* param0) {

org$pandalanguage$pandac$Position local0;
panda$core$String* local1 = NULL;
panda$core$String* local2 = NULL;
org$pandalanguage$pandac$ASTNode* local3 = NULL;
org$pandalanguage$pandac$Position local4;
panda$collections$ImmutableArray* local5 = NULL;
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
panda$collections$ImmutableArray* local19 = NULL;
org$pandalanguage$pandac$Position local20;
panda$core$String* local21 = NULL;
org$pandalanguage$pandac$Position local22;
org$pandalanguage$pandac$ASTNode* local23 = NULL;
panda$collections$ImmutableArray* local24 = NULL;
org$pandalanguage$pandac$Position local25;
org$pandalanguage$pandac$ASTNode* local26 = NULL;
panda$core$String* local27 = NULL;
panda$collections$ImmutableArray* local28 = NULL;
org$pandalanguage$pandac$Position local29;
org$pandalanguage$pandac$ASTNode* local30 = NULL;
org$pandalanguage$pandac$ChoiceCase* local31 = NULL;
panda$core$Int64 local32;
org$pandalanguage$pandac$Position local33;
org$pandalanguage$pandac$ASTNode* local34 = NULL;
panda$collections$ImmutableArray* local35 = NULL;
org$pandalanguage$pandac$ClassDecl$Kind local36;
panda$core$String* local37 = NULL;
panda$collections$ImmutableArray* local38 = NULL;
panda$collections$ImmutableArray* local39 = NULL;
panda$collections$ImmutableArray* local40 = NULL;
org$pandalanguage$pandac$Position local41;
panda$core$String* local42 = NULL;
org$pandalanguage$pandac$Position local43;
org$pandalanguage$pandac$ASTNode* local44 = NULL;
org$pandalanguage$pandac$ASTNode* local45 = NULL;
org$pandalanguage$pandac$Position local46;
panda$core$String* local47 = NULL;
panda$collections$ImmutableArray* local48 = NULL;
org$pandalanguage$pandac$ASTNode* local49 = NULL;
org$pandalanguage$pandac$Position local50;
org$pandalanguage$pandac$ASTNode* local51 = NULL;
panda$core$String* local52 = NULL;
org$pandalanguage$pandac$Position local53;
org$pandalanguage$pandac$ASTNode* local54 = NULL;
panda$collections$ImmutableArray* local55 = NULL;
org$pandalanguage$pandac$ASTNode* local56 = NULL;
panda$collections$ImmutableArray* local57 = NULL;
org$pandalanguage$pandac$Position local58;
panda$core$String* local59 = NULL;
org$pandalanguage$pandac$ASTNode* local60 = NULL;
org$pandalanguage$pandac$ASTNode* local61 = NULL;
panda$collections$ImmutableArray* local62 = NULL;
org$pandalanguage$pandac$Position local63;
panda$core$String* local64 = NULL;
panda$collections$ImmutableArray* local65 = NULL;
org$pandalanguage$pandac$Position local66;
panda$core$String* local67 = NULL;
org$pandalanguage$pandac$Position local68;
org$pandalanguage$pandac$ASTNode* local69 = NULL;
panda$collections$ImmutableArray* local70 = NULL;
org$pandalanguage$pandac$ASTNode* local71 = NULL;
org$pandalanguage$pandac$Position local72;
panda$core$UInt64 local73;
org$pandalanguage$pandac$Position local74;
org$pandalanguage$pandac$IR$Value* local75 = NULL;
org$pandalanguage$pandac$Position local76;
panda$core$String* local77 = NULL;
panda$collections$ImmutableArray* local78 = NULL;
org$pandalanguage$pandac$Position local79;
org$pandalanguage$pandac$ASTNode* local80 = NULL;
panda$collections$ImmutableArray* local81 = NULL;
panda$collections$ImmutableArray* local82 = NULL;
org$pandalanguage$pandac$Position local83;
org$pandalanguage$pandac$ASTNode* local84 = NULL;
panda$collections$ImmutableArray* local85 = NULL;
org$pandalanguage$pandac$MethodDecl$Kind local86;
panda$core$String* local87 = NULL;
panda$collections$ImmutableArray* local88 = NULL;
panda$collections$ImmutableArray* local89 = NULL;
org$pandalanguage$pandac$ASTNode* local90 = NULL;
panda$collections$ImmutableArray* local91 = NULL;
org$pandalanguage$pandac$Position local92;
org$pandalanguage$pandac$parser$Token$Kind local93;
panda$collections$ImmutableArray* local94 = NULL;
org$pandalanguage$pandac$ASTNode* local95 = NULL;
org$pandalanguage$pandac$Position local96;
org$pandalanguage$pandac$Position local97;
org$pandalanguage$pandac$ASTNode* local98 = NULL;
org$pandalanguage$pandac$Position local99;
panda$core$String* local100 = NULL;
org$pandalanguage$pandac$Position local101;
panda$core$String* local102 = NULL;
org$pandalanguage$pandac$ASTNode* local103 = NULL;
org$pandalanguage$pandac$Position local104;
org$pandalanguage$pandac$parser$Token$Kind local105;
org$pandalanguage$pandac$ASTNode* local106 = NULL;
org$pandalanguage$pandac$Position local107;
org$pandalanguage$pandac$ASTNode* local108 = NULL;
panda$core$Bit local109;
org$pandalanguage$pandac$ASTNode* local110 = NULL;
org$pandalanguage$pandac$ASTNode* local111 = NULL;
org$pandalanguage$pandac$Position local112;
panda$core$Real64 local113;
org$pandalanguage$pandac$Position local114;
panda$core$String* local115 = NULL;
org$pandalanguage$pandac$Position local116;
org$pandalanguage$pandac$ASTNode* local117 = NULL;
org$pandalanguage$pandac$Position local118;
org$pandalanguage$pandac$Position local119;
panda$core$String* local120 = NULL;
org$pandalanguage$pandac$Position local121;
org$pandalanguage$pandac$Position local122;
panda$collections$ImmutableArray* local123 = NULL;
org$pandalanguage$pandac$Position local124;
panda$collections$ImmutableArray* local125 = NULL;
org$pandalanguage$pandac$Position local126;
panda$core$String* local127 = NULL;
org$pandalanguage$pandac$Position local128;
panda$collections$ImmutableArray* local129 = NULL;
org$pandalanguage$pandac$ASTNode* local130 = NULL;
org$pandalanguage$pandac$Position local131;
panda$core$String* local132 = NULL;
org$pandalanguage$pandac$ASTNode* local133 = NULL;
org$pandalanguage$pandac$Position local134;
panda$collections$ImmutableArray* local135 = NULL;
org$pandalanguage$pandac$ASTNode* local136 = NULL;
org$pandalanguage$pandac$Position local137;
panda$core$String* local138 = NULL;
org$pandalanguage$pandac$Position local139;
org$pandalanguage$pandac$Variable$Kind local140;
panda$collections$ImmutableArray* local141 = NULL;
org$pandalanguage$pandac$Position local142;
panda$collections$ImmutableArray* local143 = NULL;
panda$collections$ImmutableArray* local144 = NULL;
org$pandalanguage$pandac$Position local145;
panda$core$String* local146 = NULL;
org$pandalanguage$pandac$ASTNode* local147 = NULL;
panda$collections$ImmutableArray* local148 = NULL;
// line 6
panda$core$Int64* $tmp2159 = &param0->$rawValue;
panda$core$Int64 $tmp2160 = *$tmp2159;
panda$core$Int64 $tmp2161 = (panda$core$Int64) {0};
panda$core$Bit $tmp2162 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2161);
bool $tmp2163 = $tmp2162.value;
if ($tmp2163) goto block2; else goto block3;
block2:;
org$pandalanguage$pandac$Position* $tmp2164 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2165 = *$tmp2164;
*(&local0) = $tmp2165;
panda$core$String** $tmp2166 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2167 = *$tmp2166;
*(&local1) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2167));
panda$core$String* $tmp2168 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2168));
*(&local1) = $tmp2167;
panda$core$String** $tmp2169 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp2170 = *$tmp2169;
*(&local2) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2170));
panda$core$String* $tmp2171 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2171));
*(&local2) = $tmp2170;
org$pandalanguage$pandac$ASTNode** $tmp2172 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2173 = *$tmp2172;
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2173));
org$pandalanguage$pandac$ASTNode* $tmp2174 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2174));
*(&local3) = $tmp2173;
// line 1
panda$core$String* $tmp2175 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2175));
// line 1
panda$core$String* $tmp2176 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2176));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2177 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2177));
org$pandalanguage$pandac$ASTNode* $tmp2178 = *(&local3);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2178));
// unreffing _f3
*(&local3) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2179 = *(&local2);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2179));
// unreffing _f2
*(&local2) = ((panda$core$String*) NULL);
panda$core$String* $tmp2180 = *(&local1);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2180));
// unreffing _f1
*(&local1) = ((panda$core$String*) NULL);
goto block1;
block3:;
panda$core$Int64 $tmp2181 = (panda$core$Int64) {1};
panda$core$Bit $tmp2182 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2181);
bool $tmp2183 = $tmp2182.value;
if ($tmp2183) goto block4; else goto block5;
block4:;
org$pandalanguage$pandac$Position* $tmp2184 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2185 = *$tmp2184;
*(&local4) = $tmp2185;
panda$collections$ImmutableArray** $tmp2186 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp2187 = *$tmp2186;
*(&local5) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2187));
panda$collections$ImmutableArray* $tmp2188 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2188));
*(&local5) = $tmp2187;
// line 1
panda$collections$ImmutableArray* $tmp2189 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2189));
panda$collections$ImmutableArray* $tmp2190 = *(&local5);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2190));
// unreffing _f1
*(&local5) = ((panda$collections$ImmutableArray*) NULL);
goto block1;
block5:;
panda$core$Int64 $tmp2191 = (panda$core$Int64) {2};
panda$core$Bit $tmp2192 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2191);
bool $tmp2193 = $tmp2192.value;
if ($tmp2193) goto block6; else goto block7;
block6:;
org$pandalanguage$pandac$Position* $tmp2194 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2195 = *$tmp2194;
*(&local6) = $tmp2195;
org$pandalanguage$pandac$ASTNode** $tmp2196 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2197 = *$tmp2196;
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2197));
org$pandalanguage$pandac$ASTNode* $tmp2198 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2198));
*(&local7) = $tmp2197;
org$pandalanguage$pandac$ASTNode** $tmp2199 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2200 = *$tmp2199;
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2200));
org$pandalanguage$pandac$ASTNode* $tmp2201 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2201));
*(&local8) = $tmp2200;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2202 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2202));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2203 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2203));
org$pandalanguage$pandac$ASTNode* $tmp2204 = *(&local8);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2204));
// unreffing _f2
*(&local8) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2205 = *(&local7);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2205));
// unreffing _f1
*(&local7) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block7:;
panda$core$Int64 $tmp2206 = (panda$core$Int64) {3};
panda$core$Bit $tmp2207 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2206);
bool $tmp2208 = $tmp2207.value;
if ($tmp2208) goto block8; else goto block9;
block8:;
org$pandalanguage$pandac$Position* $tmp2209 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2210 = *$tmp2209;
*(&local9) = $tmp2210;
org$pandalanguage$pandac$ASTNode** $tmp2211 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2212 = *$tmp2211;
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2212));
org$pandalanguage$pandac$ASTNode* $tmp2213 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2213));
*(&local10) = $tmp2212;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2214 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2214));
org$pandalanguage$pandac$ASTNode* $tmp2215 = *(&local10);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2215));
// unreffing _f1
*(&local10) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block9:;
panda$core$Int64 $tmp2216 = (panda$core$Int64) {4};
panda$core$Bit $tmp2217 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2216);
bool $tmp2218 = $tmp2217.value;
if ($tmp2218) goto block10; else goto block11;
block10:;
org$pandalanguage$pandac$Position* $tmp2219 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2220 = *$tmp2219;
*(&local11) = $tmp2220;
goto block1;
block11:;
panda$core$Int64 $tmp2221 = (panda$core$Int64) {5};
panda$core$Bit $tmp2222 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2221);
bool $tmp2223 = $tmp2222.value;
if ($tmp2223) goto block12; else goto block13;
block12:;
org$pandalanguage$pandac$Position* $tmp2224 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2225 = *$tmp2224;
*(&local12) = $tmp2225;
org$pandalanguage$pandac$ASTNode** $tmp2226 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2227 = *$tmp2226;
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2227));
org$pandalanguage$pandac$ASTNode* $tmp2228 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2228));
*(&local13) = $tmp2227;
org$pandalanguage$pandac$parser$Token$Kind* $tmp2229 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 24);
org$pandalanguage$pandac$parser$Token$Kind $tmp2230 = *$tmp2229;
*(&local14) = $tmp2230;
org$pandalanguage$pandac$ASTNode** $tmp2231 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2232 = *$tmp2231;
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2232));
org$pandalanguage$pandac$ASTNode* $tmp2233 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2233));
*(&local15) = $tmp2232;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2234 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2234));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2235 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2235));
org$pandalanguage$pandac$ASTNode* $tmp2236 = *(&local15);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2236));
// unreffing _f3
*(&local15) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2237 = *(&local13);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2237));
// unreffing _f1
*(&local13) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block13:;
panda$core$Int64 $tmp2238 = (panda$core$Int64) {6};
panda$core$Bit $tmp2239 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2238);
bool $tmp2240 = $tmp2239.value;
if ($tmp2240) goto block14; else goto block15;
block14:;
org$pandalanguage$pandac$Position* $tmp2241 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2242 = *$tmp2241;
*(&local16) = $tmp2242;
panda$core$Bit* $tmp2243 = (panda$core$Bit*) (param0->$data + 16);
panda$core$Bit $tmp2244 = *$tmp2243;
*(&local17) = $tmp2244;
goto block1;
block15:;
panda$core$Int64 $tmp2245 = (panda$core$Int64) {7};
panda$core$Bit $tmp2246 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2245);
bool $tmp2247 = $tmp2246.value;
if ($tmp2247) goto block16; else goto block17;
block16:;
org$pandalanguage$pandac$Position* $tmp2248 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2249 = *$tmp2248;
*(&local18) = $tmp2249;
panda$collections$ImmutableArray** $tmp2250 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp2251 = *$tmp2250;
*(&local19) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2251));
panda$collections$ImmutableArray* $tmp2252 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2252));
*(&local19) = $tmp2251;
// line 1
panda$collections$ImmutableArray* $tmp2253 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2253));
panda$collections$ImmutableArray* $tmp2254 = *(&local19);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2254));
// unreffing _f1
*(&local19) = ((panda$collections$ImmutableArray*) NULL);
goto block1;
block17:;
panda$core$Int64 $tmp2255 = (panda$core$Int64) {8};
panda$core$Bit $tmp2256 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2255);
bool $tmp2257 = $tmp2256.value;
if ($tmp2257) goto block18; else goto block19;
block18:;
org$pandalanguage$pandac$Position* $tmp2258 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2259 = *$tmp2258;
*(&local20) = $tmp2259;
panda$core$String** $tmp2260 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2261 = *$tmp2260;
*(&local21) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2261));
panda$core$String* $tmp2262 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2262));
*(&local21) = $tmp2261;
// line 1
panda$core$String* $tmp2263 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2263));
panda$core$String* $tmp2264 = *(&local21);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2264));
// unreffing _f1
*(&local21) = ((panda$core$String*) NULL);
goto block1;
block19:;
panda$core$Int64 $tmp2265 = (panda$core$Int64) {9};
panda$core$Bit $tmp2266 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2265);
bool $tmp2267 = $tmp2266.value;
if ($tmp2267) goto block20; else goto block21;
block20:;
org$pandalanguage$pandac$Position* $tmp2268 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2269 = *$tmp2268;
*(&local22) = $tmp2269;
org$pandalanguage$pandac$ASTNode** $tmp2270 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2271 = *$tmp2270;
*(&local23) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2271));
org$pandalanguage$pandac$ASTNode* $tmp2272 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2272));
*(&local23) = $tmp2271;
panda$collections$ImmutableArray** $tmp2273 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp2274 = *$tmp2273;
*(&local24) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2274));
panda$collections$ImmutableArray* $tmp2275 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2275));
*(&local24) = $tmp2274;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2276 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2276));
// line 1
panda$collections$ImmutableArray* $tmp2277 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2277));
panda$collections$ImmutableArray* $tmp2278 = *(&local24);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2278));
// unreffing _f2
*(&local24) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2279 = *(&local23);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2279));
// unreffing _f1
*(&local23) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block21:;
panda$core$Int64 $tmp2280 = (panda$core$Int64) {10};
panda$core$Bit $tmp2281 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2280);
bool $tmp2282 = $tmp2281.value;
if ($tmp2282) goto block22; else goto block23;
block22:;
org$pandalanguage$pandac$Position* $tmp2283 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2284 = *$tmp2283;
*(&local25) = $tmp2284;
org$pandalanguage$pandac$ASTNode** $tmp2285 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2286 = *$tmp2285;
*(&local26) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2286));
org$pandalanguage$pandac$ASTNode* $tmp2287 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2287));
*(&local26) = $tmp2286;
panda$core$String** $tmp2288 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp2289 = *$tmp2288;
*(&local27) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2289));
panda$core$String* $tmp2290 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2290));
*(&local27) = $tmp2289;
panda$collections$ImmutableArray** $tmp2291 = (panda$collections$ImmutableArray**) (param0->$data + 32);
panda$collections$ImmutableArray* $tmp2292 = *$tmp2291;
*(&local28) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2292));
panda$collections$ImmutableArray* $tmp2293 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2293));
*(&local28) = $tmp2292;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2294 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2294));
// line 1
panda$core$String* $tmp2295 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2295));
// line 1
panda$collections$ImmutableArray* $tmp2296 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2296));
panda$collections$ImmutableArray* $tmp2297 = *(&local28);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2297));
// unreffing _f3
*(&local28) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp2298 = *(&local27);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2298));
// unreffing _f2
*(&local27) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2299 = *(&local26);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2299));
// unreffing _f1
*(&local26) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block23:;
panda$core$Int64 $tmp2300 = (panda$core$Int64) {11};
panda$core$Bit $tmp2301 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2300);
bool $tmp2302 = $tmp2301.value;
if ($tmp2302) goto block24; else goto block25;
block24:;
org$pandalanguage$pandac$Position* $tmp2303 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2304 = *$tmp2303;
*(&local29) = $tmp2304;
org$pandalanguage$pandac$ASTNode** $tmp2305 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2306 = *$tmp2305;
*(&local30) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2306));
org$pandalanguage$pandac$ASTNode* $tmp2307 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2307));
*(&local30) = $tmp2306;
org$pandalanguage$pandac$ChoiceCase** $tmp2308 = (org$pandalanguage$pandac$ChoiceCase**) (param0->$data + 24);
org$pandalanguage$pandac$ChoiceCase* $tmp2309 = *$tmp2308;
*(&local31) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2309));
org$pandalanguage$pandac$ChoiceCase* $tmp2310 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2310));
*(&local31) = $tmp2309;
panda$core$Int64* $tmp2311 = (panda$core$Int64*) (param0->$data + 32);
panda$core$Int64 $tmp2312 = *$tmp2311;
*(&local32) = $tmp2312;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2313 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2313));
// line 1
org$pandalanguage$pandac$ChoiceCase* $tmp2314 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2314));
org$pandalanguage$pandac$ChoiceCase* $tmp2315 = *(&local31);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2315));
// unreffing _f2
*(&local31) = ((org$pandalanguage$pandac$ChoiceCase*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2316 = *(&local30);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2316));
// unreffing _f1
*(&local30) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block25:;
panda$core$Int64 $tmp2317 = (panda$core$Int64) {12};
panda$core$Bit $tmp2318 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2317);
bool $tmp2319 = $tmp2318.value;
if ($tmp2319) goto block26; else goto block27;
block26:;
org$pandalanguage$pandac$Position* $tmp2320 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2321 = *$tmp2320;
*(&local33) = $tmp2321;
org$pandalanguage$pandac$ASTNode** $tmp2322 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2323 = *$tmp2322;
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2323));
org$pandalanguage$pandac$ASTNode* $tmp2324 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2324));
*(&local34) = $tmp2323;
panda$collections$ImmutableArray** $tmp2325 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp2326 = *$tmp2325;
*(&local35) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2326));
panda$collections$ImmutableArray* $tmp2327 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2327));
*(&local35) = $tmp2326;
org$pandalanguage$pandac$ClassDecl$Kind* $tmp2328 = (org$pandalanguage$pandac$ClassDecl$Kind*) (param0->$data + 32);
org$pandalanguage$pandac$ClassDecl$Kind $tmp2329 = *$tmp2328;
*(&local36) = $tmp2329;
panda$core$String** $tmp2330 = (panda$core$String**) (param0->$data + 40);
panda$core$String* $tmp2331 = *$tmp2330;
*(&local37) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2331));
panda$core$String* $tmp2332 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2332));
*(&local37) = $tmp2331;
panda$collections$ImmutableArray** $tmp2333 = (panda$collections$ImmutableArray**) (param0->$data + 48);
panda$collections$ImmutableArray* $tmp2334 = *$tmp2333;
*(&local38) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2334));
panda$collections$ImmutableArray* $tmp2335 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2335));
*(&local38) = $tmp2334;
panda$collections$ImmutableArray** $tmp2336 = (panda$collections$ImmutableArray**) (param0->$data + 56);
panda$collections$ImmutableArray* $tmp2337 = *$tmp2336;
*(&local39) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2337));
panda$collections$ImmutableArray* $tmp2338 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2338));
*(&local39) = $tmp2337;
panda$collections$ImmutableArray** $tmp2339 = (panda$collections$ImmutableArray**) (param0->$data + 64);
panda$collections$ImmutableArray* $tmp2340 = *$tmp2339;
*(&local40) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2340));
panda$collections$ImmutableArray* $tmp2341 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2341));
*(&local40) = $tmp2340;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2342 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2342));
// line 1
panda$collections$ImmutableArray* $tmp2343 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2343));
// line 1
panda$core$String* $tmp2344 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2344));
// line 1
panda$collections$ImmutableArray* $tmp2345 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2345));
// line 1
panda$collections$ImmutableArray* $tmp2346 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2346));
// line 1
panda$collections$ImmutableArray* $tmp2347 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2347));
panda$collections$ImmutableArray* $tmp2348 = *(&local40);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2348));
// unreffing _f7
*(&local40) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2349 = *(&local39);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2349));
// unreffing _f6
*(&local39) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2350 = *(&local38);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2350));
// unreffing _f5
*(&local38) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp2351 = *(&local37);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2351));
// unreffing _f4
*(&local37) = ((panda$core$String*) NULL);
panda$collections$ImmutableArray* $tmp2352 = *(&local35);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2352));
// unreffing _f2
*(&local35) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2353 = *(&local34);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2353));
// unreffing _f1
*(&local34) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block27:;
panda$core$Int64 $tmp2354 = (panda$core$Int64) {13};
panda$core$Bit $tmp2355 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2354);
bool $tmp2356 = $tmp2355.value;
if ($tmp2356) goto block28; else goto block29;
block28:;
org$pandalanguage$pandac$Position* $tmp2357 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2358 = *$tmp2357;
*(&local41) = $tmp2358;
panda$core$String** $tmp2359 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2360 = *$tmp2359;
*(&local42) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2360));
panda$core$String* $tmp2361 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2361));
*(&local42) = $tmp2360;
// line 1
panda$core$String* $tmp2362 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2362));
panda$core$String* $tmp2363 = *(&local42);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2363));
// unreffing _f1
*(&local42) = ((panda$core$String*) NULL);
goto block1;
block29:;
panda$core$Int64 $tmp2364 = (panda$core$Int64) {14};
panda$core$Bit $tmp2365 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2364);
bool $tmp2366 = $tmp2365.value;
if ($tmp2366) goto block30; else goto block31;
block30:;
org$pandalanguage$pandac$Position* $tmp2367 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2368 = *$tmp2367;
*(&local43) = $tmp2368;
org$pandalanguage$pandac$ASTNode** $tmp2369 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2370 = *$tmp2369;
*(&local44) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2370));
org$pandalanguage$pandac$ASTNode* $tmp2371 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2371));
*(&local44) = $tmp2370;
org$pandalanguage$pandac$ASTNode** $tmp2372 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2373 = *$tmp2372;
*(&local45) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2373));
org$pandalanguage$pandac$ASTNode* $tmp2374 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2374));
*(&local45) = $tmp2373;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2375 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2375));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2376 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2376));
org$pandalanguage$pandac$ASTNode* $tmp2377 = *(&local45);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2377));
// unreffing _f2
*(&local45) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2378 = *(&local44);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2378));
// unreffing _f1
*(&local44) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block31:;
panda$core$Int64 $tmp2379 = (panda$core$Int64) {15};
panda$core$Bit $tmp2380 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2379);
bool $tmp2381 = $tmp2380.value;
if ($tmp2381) goto block32; else goto block33;
block32:;
org$pandalanguage$pandac$Position* $tmp2382 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2383 = *$tmp2382;
*(&local46) = $tmp2383;
panda$core$String** $tmp2384 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2385 = *$tmp2384;
*(&local47) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2385));
panda$core$String* $tmp2386 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2386));
*(&local47) = $tmp2385;
panda$collections$ImmutableArray** $tmp2387 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp2388 = *$tmp2387;
*(&local48) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2388));
panda$collections$ImmutableArray* $tmp2389 = *(&local48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2389));
*(&local48) = $tmp2388;
org$pandalanguage$pandac$ASTNode** $tmp2390 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2391 = *$tmp2390;
*(&local49) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2391));
org$pandalanguage$pandac$ASTNode* $tmp2392 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2392));
*(&local49) = $tmp2391;
// line 1
panda$core$String* $tmp2393 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2393));
// line 1
panda$collections$ImmutableArray* $tmp2394 = *(&local48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2394));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2395 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2395));
org$pandalanguage$pandac$ASTNode* $tmp2396 = *(&local49);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2396));
// unreffing _f3
*(&local49) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp2397 = *(&local48);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2397));
// unreffing _f2
*(&local48) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp2398 = *(&local47);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2398));
// unreffing _f1
*(&local47) = ((panda$core$String*) NULL);
goto block1;
block33:;
panda$core$Int64 $tmp2399 = (panda$core$Int64) {16};
panda$core$Bit $tmp2400 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2399);
bool $tmp2401 = $tmp2400.value;
if ($tmp2401) goto block34; else goto block35;
block34:;
org$pandalanguage$pandac$Position* $tmp2402 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2403 = *$tmp2402;
*(&local50) = $tmp2403;
org$pandalanguage$pandac$ASTNode** $tmp2404 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2405 = *$tmp2404;
*(&local51) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2405));
org$pandalanguage$pandac$ASTNode* $tmp2406 = *(&local51);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2406));
*(&local51) = $tmp2405;
panda$core$String** $tmp2407 = (panda$core$String**) (param0->$data + 24);
panda$core$String* $tmp2408 = *$tmp2407;
*(&local52) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2408));
panda$core$String* $tmp2409 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2409));
*(&local52) = $tmp2408;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2410 = *(&local51);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2410));
// line 1
panda$core$String* $tmp2411 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2411));
panda$core$String* $tmp2412 = *(&local52);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2412));
// unreffing _f2
*(&local52) = ((panda$core$String*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2413 = *(&local51);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2413));
// unreffing _f1
*(&local51) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block35:;
panda$core$Int64 $tmp2414 = (panda$core$Int64) {17};
panda$core$Bit $tmp2415 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2414);
bool $tmp2416 = $tmp2415.value;
if ($tmp2416) goto block36; else goto block37;
block36:;
org$pandalanguage$pandac$Position* $tmp2417 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2418 = *$tmp2417;
*(&local53) = $tmp2418;
org$pandalanguage$pandac$ASTNode** $tmp2419 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2420 = *$tmp2419;
*(&local54) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2420));
org$pandalanguage$pandac$ASTNode* $tmp2421 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2421));
*(&local54) = $tmp2420;
panda$collections$ImmutableArray** $tmp2422 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp2423 = *$tmp2422;
*(&local55) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2423));
panda$collections$ImmutableArray* $tmp2424 = *(&local55);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2424));
*(&local55) = $tmp2423;
org$pandalanguage$pandac$ASTNode** $tmp2425 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2426 = *$tmp2425;
*(&local56) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2426));
org$pandalanguage$pandac$ASTNode* $tmp2427 = *(&local56);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2427));
*(&local56) = $tmp2426;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2428 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2428));
// line 1
panda$collections$ImmutableArray* $tmp2429 = *(&local55);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2429));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2430 = *(&local56);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2430));
org$pandalanguage$pandac$ASTNode* $tmp2431 = *(&local56);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2431));
// unreffing _f3
*(&local56) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp2432 = *(&local55);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2432));
// unreffing _f2
*(&local55) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2433 = *(&local54);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2433));
// unreffing _f1
*(&local54) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block37:;
panda$core$Int64 $tmp2434 = (panda$core$Int64) {18};
panda$core$Bit $tmp2435 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2434);
bool $tmp2436 = $tmp2435.value;
if ($tmp2436) goto block38; else goto block39;
block38:;
panda$collections$ImmutableArray** $tmp2437 = (panda$collections$ImmutableArray**) (param0->$data + 0);
panda$collections$ImmutableArray* $tmp2438 = *$tmp2437;
*(&local57) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2438));
panda$collections$ImmutableArray* $tmp2439 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2439));
*(&local57) = $tmp2438;
// line 1
panda$collections$ImmutableArray* $tmp2440 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2440));
panda$collections$ImmutableArray* $tmp2441 = *(&local57);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2441));
// unreffing _f0
*(&local57) = ((panda$collections$ImmutableArray*) NULL);
goto block1;
block39:;
panda$core$Int64 $tmp2442 = (panda$core$Int64) {19};
panda$core$Bit $tmp2443 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2442);
bool $tmp2444 = $tmp2443.value;
if ($tmp2444) goto block40; else goto block41;
block40:;
org$pandalanguage$pandac$Position* $tmp2445 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2446 = *$tmp2445;
*(&local58) = $tmp2446;
panda$core$String** $tmp2447 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2448 = *$tmp2447;
*(&local59) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2448));
panda$core$String* $tmp2449 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2449));
*(&local59) = $tmp2448;
org$pandalanguage$pandac$ASTNode** $tmp2450 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2451 = *$tmp2450;
*(&local60) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2451));
org$pandalanguage$pandac$ASTNode* $tmp2452 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2452));
*(&local60) = $tmp2451;
org$pandalanguage$pandac$ASTNode** $tmp2453 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2454 = *$tmp2453;
*(&local61) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2454));
org$pandalanguage$pandac$ASTNode* $tmp2455 = *(&local61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2455));
*(&local61) = $tmp2454;
panda$collections$ImmutableArray** $tmp2456 = (panda$collections$ImmutableArray**) (param0->$data + 40);
panda$collections$ImmutableArray* $tmp2457 = *$tmp2456;
*(&local62) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2457));
panda$collections$ImmutableArray* $tmp2458 = *(&local62);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2458));
*(&local62) = $tmp2457;
// line 1
panda$core$String* $tmp2459 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2459));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2460 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2460));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2461 = *(&local61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2461));
// line 1
panda$collections$ImmutableArray* $tmp2462 = *(&local62);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2462));
panda$collections$ImmutableArray* $tmp2463 = *(&local62);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2463));
// unreffing _f4
*(&local62) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2464 = *(&local61);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2464));
// unreffing _f3
*(&local61) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2465 = *(&local60);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2465));
// unreffing _f2
*(&local60) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2466 = *(&local59);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2466));
// unreffing _f1
*(&local59) = ((panda$core$String*) NULL);
goto block1;
block41:;
panda$core$Int64 $tmp2467 = (panda$core$Int64) {20};
panda$core$Bit $tmp2468 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2467);
bool $tmp2469 = $tmp2468.value;
if ($tmp2469) goto block42; else goto block43;
block42:;
org$pandalanguage$pandac$Position* $tmp2470 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2471 = *$tmp2470;
*(&local63) = $tmp2471;
panda$core$String** $tmp2472 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2473 = *$tmp2472;
*(&local64) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2473));
panda$core$String* $tmp2474 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2474));
*(&local64) = $tmp2473;
panda$collections$ImmutableArray** $tmp2475 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp2476 = *$tmp2475;
*(&local65) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2476));
panda$collections$ImmutableArray* $tmp2477 = *(&local65);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2477));
*(&local65) = $tmp2476;
// line 1
panda$core$String* $tmp2478 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2478));
// line 1
panda$collections$ImmutableArray* $tmp2479 = *(&local65);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2479));
panda$collections$ImmutableArray* $tmp2480 = *(&local65);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2480));
// unreffing _f2
*(&local65) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp2481 = *(&local64);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2481));
// unreffing _f1
*(&local64) = ((panda$core$String*) NULL);
goto block1;
block43:;
panda$core$Int64 $tmp2482 = (panda$core$Int64) {21};
panda$core$Bit $tmp2483 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2482);
bool $tmp2484 = $tmp2483.value;
if ($tmp2484) goto block44; else goto block45;
block44:;
org$pandalanguage$pandac$Position* $tmp2485 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2486 = *$tmp2485;
*(&local66) = $tmp2486;
panda$core$String** $tmp2487 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2488 = *$tmp2487;
*(&local67) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2488));
panda$core$String* $tmp2489 = *(&local67);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2489));
*(&local67) = $tmp2488;
// line 1
panda$core$String* $tmp2490 = *(&local67);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2490));
panda$core$String* $tmp2491 = *(&local67);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2491));
// unreffing _f1
*(&local67) = ((panda$core$String*) NULL);
goto block1;
block45:;
panda$core$Int64 $tmp2492 = (panda$core$Int64) {22};
panda$core$Bit $tmp2493 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2492);
bool $tmp2494 = $tmp2493.value;
if ($tmp2494) goto block46; else goto block47;
block46:;
org$pandalanguage$pandac$Position* $tmp2495 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2496 = *$tmp2495;
*(&local68) = $tmp2496;
org$pandalanguage$pandac$ASTNode** $tmp2497 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2498 = *$tmp2497;
*(&local69) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2498));
org$pandalanguage$pandac$ASTNode* $tmp2499 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2499));
*(&local69) = $tmp2498;
panda$collections$ImmutableArray** $tmp2500 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp2501 = *$tmp2500;
*(&local70) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2501));
panda$collections$ImmutableArray* $tmp2502 = *(&local70);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2502));
*(&local70) = $tmp2501;
org$pandalanguage$pandac$ASTNode** $tmp2503 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2504 = *$tmp2503;
*(&local71) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2504));
org$pandalanguage$pandac$ASTNode* $tmp2505 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2505));
*(&local71) = $tmp2504;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2506 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2506));
// line 1
panda$collections$ImmutableArray* $tmp2507 = *(&local70);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2507));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2508 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2508));
org$pandalanguage$pandac$ASTNode* $tmp2509 = *(&local71);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2509));
// unreffing _f3
*(&local71) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp2510 = *(&local70);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2510));
// unreffing _f2
*(&local70) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2511 = *(&local69);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2511));
// unreffing _f1
*(&local69) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block47:;
panda$core$Int64 $tmp2512 = (panda$core$Int64) {23};
panda$core$Bit $tmp2513 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2512);
bool $tmp2514 = $tmp2513.value;
if ($tmp2514) goto block48; else goto block49;
block48:;
org$pandalanguage$pandac$Position* $tmp2515 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2516 = *$tmp2515;
*(&local72) = $tmp2516;
panda$core$UInt64* $tmp2517 = (panda$core$UInt64*) (param0->$data + 16);
panda$core$UInt64 $tmp2518 = *$tmp2517;
*(&local73) = $tmp2518;
goto block1;
block49:;
panda$core$Int64 $tmp2519 = (panda$core$Int64) {24};
panda$core$Bit $tmp2520 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2519);
bool $tmp2521 = $tmp2520.value;
if ($tmp2521) goto block50; else goto block51;
block50:;
org$pandalanguage$pandac$Position* $tmp2522 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2523 = *$tmp2522;
*(&local74) = $tmp2523;
org$pandalanguage$pandac$IR$Value** $tmp2524 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
org$pandalanguage$pandac$IR$Value* $tmp2525 = *$tmp2524;
*(&local75) = ((org$pandalanguage$pandac$IR$Value*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2525));
org$pandalanguage$pandac$IR$Value* $tmp2526 = *(&local75);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2526));
*(&local75) = $tmp2525;
// line 1
org$pandalanguage$pandac$IR$Value* $tmp2527 = *(&local75);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2527));
org$pandalanguage$pandac$IR$Value* $tmp2528 = *(&local75);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2528));
// unreffing _f1
*(&local75) = ((org$pandalanguage$pandac$IR$Value*) NULL);
goto block1;
block51:;
panda$core$Int64 $tmp2529 = (panda$core$Int64) {25};
panda$core$Bit $tmp2530 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2529);
bool $tmp2531 = $tmp2530.value;
if ($tmp2531) goto block52; else goto block53;
block52:;
org$pandalanguage$pandac$Position* $tmp2532 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2533 = *$tmp2532;
*(&local76) = $tmp2533;
panda$core$String** $tmp2534 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2535 = *$tmp2534;
*(&local77) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2535));
panda$core$String* $tmp2536 = *(&local77);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2536));
*(&local77) = $tmp2535;
panda$collections$ImmutableArray** $tmp2537 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp2538 = *$tmp2537;
*(&local78) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2538));
panda$collections$ImmutableArray* $tmp2539 = *(&local78);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2539));
*(&local78) = $tmp2538;
// line 1
panda$core$String* $tmp2540 = *(&local77);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2540));
// line 1
panda$collections$ImmutableArray* $tmp2541 = *(&local78);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2541));
panda$collections$ImmutableArray* $tmp2542 = *(&local78);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2542));
// unreffing _f2
*(&local78) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp2543 = *(&local77);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2543));
// unreffing _f1
*(&local77) = ((panda$core$String*) NULL);
goto block1;
block53:;
panda$core$Int64 $tmp2544 = (panda$core$Int64) {26};
panda$core$Bit $tmp2545 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2544);
bool $tmp2546 = $tmp2545.value;
if ($tmp2546) goto block54; else goto block55;
block54:;
org$pandalanguage$pandac$Position* $tmp2547 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2548 = *$tmp2547;
*(&local79) = $tmp2548;
org$pandalanguage$pandac$ASTNode** $tmp2549 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2550 = *$tmp2549;
*(&local80) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2550));
org$pandalanguage$pandac$ASTNode* $tmp2551 = *(&local80);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2551));
*(&local80) = $tmp2550;
panda$collections$ImmutableArray** $tmp2552 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp2553 = *$tmp2552;
*(&local81) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2553));
panda$collections$ImmutableArray* $tmp2554 = *(&local81);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2554));
*(&local81) = $tmp2553;
panda$collections$ImmutableArray** $tmp2555 = (panda$collections$ImmutableArray**) (param0->$data + 32);
panda$collections$ImmutableArray* $tmp2556 = *$tmp2555;
*(&local82) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2556));
panda$collections$ImmutableArray* $tmp2557 = *(&local82);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2557));
*(&local82) = $tmp2556;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2558 = *(&local80);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2558));
// line 1
panda$collections$ImmutableArray* $tmp2559 = *(&local81);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2559));
// line 1
panda$collections$ImmutableArray* $tmp2560 = *(&local82);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2560));
panda$collections$ImmutableArray* $tmp2561 = *(&local82);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2561));
// unreffing _f3
*(&local82) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2562 = *(&local81);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2562));
// unreffing _f2
*(&local81) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2563 = *(&local80);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2563));
// unreffing _f1
*(&local80) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block55:;
panda$core$Int64 $tmp2564 = (panda$core$Int64) {27};
panda$core$Bit $tmp2565 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2564);
bool $tmp2566 = $tmp2565.value;
if ($tmp2566) goto block56; else goto block57;
block56:;
org$pandalanguage$pandac$Position* $tmp2567 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2568 = *$tmp2567;
*(&local83) = $tmp2568;
org$pandalanguage$pandac$ASTNode** $tmp2569 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2570 = *$tmp2569;
*(&local84) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2570));
org$pandalanguage$pandac$ASTNode* $tmp2571 = *(&local84);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2571));
*(&local84) = $tmp2570;
panda$collections$ImmutableArray** $tmp2572 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp2573 = *$tmp2572;
*(&local85) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2573));
panda$collections$ImmutableArray* $tmp2574 = *(&local85);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2574));
*(&local85) = $tmp2573;
org$pandalanguage$pandac$MethodDecl$Kind* $tmp2575 = (org$pandalanguage$pandac$MethodDecl$Kind*) (param0->$data + 32);
org$pandalanguage$pandac$MethodDecl$Kind $tmp2576 = *$tmp2575;
*(&local86) = $tmp2576;
panda$core$String** $tmp2577 = (panda$core$String**) (param0->$data + 40);
panda$core$String* $tmp2578 = *$tmp2577;
*(&local87) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2578));
panda$core$String* $tmp2579 = *(&local87);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2579));
*(&local87) = $tmp2578;
panda$collections$ImmutableArray** $tmp2580 = (panda$collections$ImmutableArray**) (param0->$data + 48);
panda$collections$ImmutableArray* $tmp2581 = *$tmp2580;
*(&local88) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2581));
panda$collections$ImmutableArray* $tmp2582 = *(&local88);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2582));
*(&local88) = $tmp2581;
panda$collections$ImmutableArray** $tmp2583 = (panda$collections$ImmutableArray**) (param0->$data + 56);
panda$collections$ImmutableArray* $tmp2584 = *$tmp2583;
*(&local89) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2584));
panda$collections$ImmutableArray* $tmp2585 = *(&local89);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2585));
*(&local89) = $tmp2584;
org$pandalanguage$pandac$ASTNode** $tmp2586 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 64);
org$pandalanguage$pandac$ASTNode* $tmp2587 = *$tmp2586;
*(&local90) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2587));
org$pandalanguage$pandac$ASTNode* $tmp2588 = *(&local90);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2588));
*(&local90) = $tmp2587;
panda$collections$ImmutableArray** $tmp2589 = (panda$collections$ImmutableArray**) (param0->$data + 72);
panda$collections$ImmutableArray* $tmp2590 = *$tmp2589;
*(&local91) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2590));
panda$collections$ImmutableArray* $tmp2591 = *(&local91);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2591));
*(&local91) = $tmp2590;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2592 = *(&local84);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2592));
// line 1
panda$collections$ImmutableArray* $tmp2593 = *(&local85);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2593));
// line 1
panda$core$String* $tmp2594 = *(&local87);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2594));
// line 1
panda$collections$ImmutableArray* $tmp2595 = *(&local88);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2595));
// line 1
panda$collections$ImmutableArray* $tmp2596 = *(&local89);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2596));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2597 = *(&local90);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2597));
// line 1
panda$collections$ImmutableArray* $tmp2598 = *(&local91);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2598));
panda$collections$ImmutableArray* $tmp2599 = *(&local91);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2599));
// unreffing _f8
*(&local91) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2600 = *(&local90);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2600));
// unreffing _f7
*(&local90) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp2601 = *(&local89);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2601));
// unreffing _f6
*(&local89) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2602 = *(&local88);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2602));
// unreffing _f5
*(&local88) = ((panda$collections$ImmutableArray*) NULL);
panda$core$String* $tmp2603 = *(&local87);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2603));
// unreffing _f4
*(&local87) = ((panda$core$String*) NULL);
panda$collections$ImmutableArray* $tmp2604 = *(&local85);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2604));
// unreffing _f2
*(&local85) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2605 = *(&local84);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2605));
// unreffing _f1
*(&local84) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block57:;
panda$core$Int64 $tmp2606 = (panda$core$Int64) {28};
panda$core$Bit $tmp2607 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2606);
bool $tmp2608 = $tmp2607.value;
if ($tmp2608) goto block58; else goto block59;
block58:;
org$pandalanguage$pandac$Position* $tmp2609 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2610 = *$tmp2609;
*(&local92) = $tmp2610;
org$pandalanguage$pandac$parser$Token$Kind* $tmp2611 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp2612 = *$tmp2611;
*(&local93) = $tmp2612;
panda$collections$ImmutableArray** $tmp2613 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp2614 = *$tmp2613;
*(&local94) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2614));
panda$collections$ImmutableArray* $tmp2615 = *(&local94);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2615));
*(&local94) = $tmp2614;
org$pandalanguage$pandac$ASTNode** $tmp2616 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
org$pandalanguage$pandac$ASTNode* $tmp2617 = *$tmp2616;
*(&local95) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2617));
org$pandalanguage$pandac$ASTNode* $tmp2618 = *(&local95);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2618));
*(&local95) = $tmp2617;
// line 1
panda$collections$ImmutableArray* $tmp2619 = *(&local94);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2619));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2620 = *(&local95);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2620));
org$pandalanguage$pandac$ASTNode* $tmp2621 = *(&local95);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2621));
// unreffing _f3
*(&local95) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp2622 = *(&local94);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2622));
// unreffing _f2
*(&local94) = ((panda$collections$ImmutableArray*) NULL);
goto block1;
block59:;
panda$core$Int64 $tmp2623 = (panda$core$Int64) {29};
panda$core$Bit $tmp2624 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2623);
bool $tmp2625 = $tmp2624.value;
if ($tmp2625) goto block60; else goto block61;
block60:;
org$pandalanguage$pandac$Position* $tmp2626 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2627 = *$tmp2626;
*(&local96) = $tmp2627;
goto block1;
block61:;
panda$core$Int64 $tmp2628 = (panda$core$Int64) {30};
panda$core$Bit $tmp2629 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2628);
bool $tmp2630 = $tmp2629.value;
if ($tmp2630) goto block62; else goto block63;
block62:;
org$pandalanguage$pandac$Position* $tmp2631 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2632 = *$tmp2631;
*(&local97) = $tmp2632;
org$pandalanguage$pandac$ASTNode** $tmp2633 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2634 = *$tmp2633;
*(&local98) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2634));
org$pandalanguage$pandac$ASTNode* $tmp2635 = *(&local98);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2635));
*(&local98) = $tmp2634;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2636 = *(&local98);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2636));
org$pandalanguage$pandac$ASTNode* $tmp2637 = *(&local98);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2637));
// unreffing _f1
*(&local98) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block63:;
panda$core$Int64 $tmp2638 = (panda$core$Int64) {31};
panda$core$Bit $tmp2639 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2638);
bool $tmp2640 = $tmp2639.value;
if ($tmp2640) goto block64; else goto block65;
block64:;
org$pandalanguage$pandac$Position* $tmp2641 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2642 = *$tmp2641;
*(&local99) = $tmp2642;
panda$core$String** $tmp2643 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2644 = *$tmp2643;
*(&local100) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2644));
panda$core$String* $tmp2645 = *(&local100);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2645));
*(&local100) = $tmp2644;
// line 1
panda$core$String* $tmp2646 = *(&local100);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2646));
panda$core$String* $tmp2647 = *(&local100);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2647));
// unreffing _f1
*(&local100) = ((panda$core$String*) NULL);
goto block1;
block65:;
panda$core$Int64 $tmp2648 = (panda$core$Int64) {32};
panda$core$Bit $tmp2649 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2648);
bool $tmp2650 = $tmp2649.value;
if ($tmp2650) goto block66; else goto block67;
block66:;
org$pandalanguage$pandac$Position* $tmp2651 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2652 = *$tmp2651;
*(&local101) = $tmp2652;
panda$core$String** $tmp2653 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2654 = *$tmp2653;
*(&local102) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2654));
panda$core$String* $tmp2655 = *(&local102);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2655));
*(&local102) = $tmp2654;
org$pandalanguage$pandac$ASTNode** $tmp2656 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2657 = *$tmp2656;
*(&local103) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2657));
org$pandalanguage$pandac$ASTNode* $tmp2658 = *(&local103);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2658));
*(&local103) = $tmp2657;
// line 1
panda$core$String* $tmp2659 = *(&local102);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2659));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2660 = *(&local103);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2660));
org$pandalanguage$pandac$ASTNode* $tmp2661 = *(&local103);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2661));
// unreffing _f2
*(&local103) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2662 = *(&local102);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2662));
// unreffing _f1
*(&local102) = ((panda$core$String*) NULL);
goto block1;
block67:;
panda$core$Int64 $tmp2663 = (panda$core$Int64) {33};
panda$core$Bit $tmp2664 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2663);
bool $tmp2665 = $tmp2664.value;
if ($tmp2665) goto block68; else goto block69;
block68:;
org$pandalanguage$pandac$Position* $tmp2666 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2667 = *$tmp2666;
*(&local104) = $tmp2667;
org$pandalanguage$pandac$parser$Token$Kind* $tmp2668 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$parser$Token$Kind $tmp2669 = *$tmp2668;
*(&local105) = $tmp2669;
org$pandalanguage$pandac$ASTNode** $tmp2670 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2671 = *$tmp2670;
*(&local106) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2671));
org$pandalanguage$pandac$ASTNode* $tmp2672 = *(&local106);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2672));
*(&local106) = $tmp2671;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2673 = *(&local106);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2673));
org$pandalanguage$pandac$ASTNode* $tmp2674 = *(&local106);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2674));
// unreffing _f2
*(&local106) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block69:;
panda$core$Int64 $tmp2675 = (panda$core$Int64) {34};
panda$core$Bit $tmp2676 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2675);
bool $tmp2677 = $tmp2676.value;
if ($tmp2677) goto block70; else goto block71;
block70:;
org$pandalanguage$pandac$Position* $tmp2678 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2679 = *$tmp2678;
*(&local107) = $tmp2679;
org$pandalanguage$pandac$ASTNode** $tmp2680 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2681 = *$tmp2680;
*(&local108) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2681));
org$pandalanguage$pandac$ASTNode* $tmp2682 = *(&local108);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2682));
*(&local108) = $tmp2681;
panda$core$Bit* $tmp2683 = (panda$core$Bit*) (param0->$data + 24);
panda$core$Bit $tmp2684 = *$tmp2683;
*(&local109) = $tmp2684;
org$pandalanguage$pandac$ASTNode** $tmp2685 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 25);
org$pandalanguage$pandac$ASTNode* $tmp2686 = *$tmp2685;
*(&local110) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2686));
org$pandalanguage$pandac$ASTNode* $tmp2687 = *(&local110);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2687));
*(&local110) = $tmp2686;
org$pandalanguage$pandac$ASTNode** $tmp2688 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 33);
org$pandalanguage$pandac$ASTNode* $tmp2689 = *$tmp2688;
*(&local111) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2689));
org$pandalanguage$pandac$ASTNode* $tmp2690 = *(&local111);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2690));
*(&local111) = $tmp2689;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2691 = *(&local108);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2691));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2692 = *(&local110);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2692));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2693 = *(&local111);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2693));
org$pandalanguage$pandac$ASTNode* $tmp2694 = *(&local111);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2694));
// unreffing _f4
*(&local111) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2695 = *(&local110);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2695));
// unreffing _f3
*(&local110) = ((org$pandalanguage$pandac$ASTNode*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2696 = *(&local108);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2696));
// unreffing _f1
*(&local108) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block71:;
panda$core$Int64 $tmp2697 = (panda$core$Int64) {35};
panda$core$Bit $tmp2698 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2697);
bool $tmp2699 = $tmp2698.value;
if ($tmp2699) goto block72; else goto block73;
block72:;
org$pandalanguage$pandac$Position* $tmp2700 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2701 = *$tmp2700;
*(&local112) = $tmp2701;
panda$core$Real64* $tmp2702 = (panda$core$Real64*) (param0->$data + 16);
panda$core$Real64 $tmp2703 = *$tmp2702;
*(&local113) = $tmp2703;
goto block1;
block73:;
panda$core$Int64 $tmp2704 = (panda$core$Int64) {36};
panda$core$Bit $tmp2705 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2704);
bool $tmp2706 = $tmp2705.value;
if ($tmp2706) goto block74; else goto block75;
block74:;
org$pandalanguage$pandac$Position* $tmp2707 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2708 = *$tmp2707;
*(&local114) = $tmp2708;
panda$core$String** $tmp2709 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2710 = *$tmp2709;
*(&local115) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2710));
panda$core$String* $tmp2711 = *(&local115);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2711));
*(&local115) = $tmp2710;
// line 1
panda$core$String* $tmp2712 = *(&local115);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2712));
panda$core$String* $tmp2713 = *(&local115);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2713));
// unreffing _f1
*(&local115) = ((panda$core$String*) NULL);
goto block1;
block75:;
panda$core$Int64 $tmp2714 = (panda$core$Int64) {37};
panda$core$Bit $tmp2715 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2714);
bool $tmp2716 = $tmp2715.value;
if ($tmp2716) goto block76; else goto block77;
block76:;
org$pandalanguage$pandac$Position* $tmp2717 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2718 = *$tmp2717;
*(&local116) = $tmp2718;
org$pandalanguage$pandac$ASTNode** $tmp2719 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
org$pandalanguage$pandac$ASTNode* $tmp2720 = *$tmp2719;
*(&local117) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2720));
org$pandalanguage$pandac$ASTNode* $tmp2721 = *(&local117);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2721));
*(&local117) = $tmp2720;
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2722 = *(&local117);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2722));
org$pandalanguage$pandac$ASTNode* $tmp2723 = *(&local117);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2723));
// unreffing _f1
*(&local117) = ((org$pandalanguage$pandac$ASTNode*) NULL);
goto block1;
block77:;
panda$core$Int64 $tmp2724 = (panda$core$Int64) {38};
panda$core$Bit $tmp2725 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2724);
bool $tmp2726 = $tmp2725.value;
if ($tmp2726) goto block78; else goto block79;
block78:;
org$pandalanguage$pandac$Position* $tmp2727 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2728 = *$tmp2727;
*(&local118) = $tmp2728;
goto block1;
block79:;
panda$core$Int64 $tmp2729 = (panda$core$Int64) {39};
panda$core$Bit $tmp2730 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2729);
bool $tmp2731 = $tmp2730.value;
if ($tmp2731) goto block80; else goto block81;
block80:;
org$pandalanguage$pandac$Position* $tmp2732 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2733 = *$tmp2732;
*(&local119) = $tmp2733;
panda$core$String** $tmp2734 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2735 = *$tmp2734;
*(&local120) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2735));
panda$core$String* $tmp2736 = *(&local120);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2736));
*(&local120) = $tmp2735;
// line 1
panda$core$String* $tmp2737 = *(&local120);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2737));
panda$core$String* $tmp2738 = *(&local120);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2738));
// unreffing _f1
*(&local120) = ((panda$core$String*) NULL);
goto block1;
block81:;
panda$core$Int64 $tmp2739 = (panda$core$Int64) {40};
panda$core$Bit $tmp2740 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2739);
bool $tmp2741 = $tmp2740.value;
if ($tmp2741) goto block82; else goto block83;
block82:;
org$pandalanguage$pandac$Position* $tmp2742 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2743 = *$tmp2742;
*(&local121) = $tmp2743;
goto block1;
block83:;
panda$core$Int64 $tmp2744 = (panda$core$Int64) {41};
panda$core$Bit $tmp2745 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2744);
bool $tmp2746 = $tmp2745.value;
if ($tmp2746) goto block84; else goto block85;
block84:;
org$pandalanguage$pandac$Position* $tmp2747 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2748 = *$tmp2747;
*(&local122) = $tmp2748;
panda$collections$ImmutableArray** $tmp2749 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp2750 = *$tmp2749;
*(&local123) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2750));
panda$collections$ImmutableArray* $tmp2751 = *(&local123);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2751));
*(&local123) = $tmp2750;
// line 1
panda$collections$ImmutableArray* $tmp2752 = *(&local123);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2752));
panda$collections$ImmutableArray* $tmp2753 = *(&local123);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2753));
// unreffing _f1
*(&local123) = ((panda$collections$ImmutableArray*) NULL);
goto block1;
block85:;
panda$core$Int64 $tmp2754 = (panda$core$Int64) {42};
panda$core$Bit $tmp2755 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2754);
bool $tmp2756 = $tmp2755.value;
if ($tmp2756) goto block86; else goto block87;
block86:;
org$pandalanguage$pandac$Position* $tmp2757 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2758 = *$tmp2757;
*(&local124) = $tmp2758;
panda$collections$ImmutableArray** $tmp2759 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp2760 = *$tmp2759;
*(&local125) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2760));
panda$collections$ImmutableArray* $tmp2761 = *(&local125);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2761));
*(&local125) = $tmp2760;
// line 1
panda$collections$ImmutableArray* $tmp2762 = *(&local125);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2762));
panda$collections$ImmutableArray* $tmp2763 = *(&local125);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2763));
// unreffing _f1
*(&local125) = ((panda$collections$ImmutableArray*) NULL);
goto block1;
block87:;
panda$core$Int64 $tmp2764 = (panda$core$Int64) {43};
panda$core$Bit $tmp2765 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2764);
bool $tmp2766 = $tmp2765.value;
if ($tmp2766) goto block88; else goto block89;
block88:;
org$pandalanguage$pandac$Position* $tmp2767 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2768 = *$tmp2767;
*(&local126) = $tmp2768;
panda$core$String** $tmp2769 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2770 = *$tmp2769;
*(&local127) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2770));
panda$core$String* $tmp2771 = *(&local127);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2771));
*(&local127) = $tmp2770;
// line 1
panda$core$String* $tmp2772 = *(&local127);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2772));
panda$core$String* $tmp2773 = *(&local127);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2773));
// unreffing _f1
*(&local127) = ((panda$core$String*) NULL);
goto block1;
block89:;
panda$core$Int64 $tmp2774 = (panda$core$Int64) {44};
panda$core$Bit $tmp2775 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2774);
bool $tmp2776 = $tmp2775.value;
if ($tmp2776) goto block90; else goto block91;
block90:;
org$pandalanguage$pandac$Position* $tmp2777 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2778 = *$tmp2777;
*(&local128) = $tmp2778;
panda$collections$ImmutableArray** $tmp2779 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp2780 = *$tmp2779;
*(&local129) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2780));
panda$collections$ImmutableArray* $tmp2781 = *(&local129);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2781));
*(&local129) = $tmp2780;
org$pandalanguage$pandac$ASTNode** $tmp2782 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2783 = *$tmp2782;
*(&local130) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2783));
org$pandalanguage$pandac$ASTNode* $tmp2784 = *(&local130);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2784));
*(&local130) = $tmp2783;
// line 1
panda$collections$ImmutableArray* $tmp2785 = *(&local129);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2785));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2786 = *(&local130);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2786));
org$pandalanguage$pandac$ASTNode* $tmp2787 = *(&local130);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2787));
// unreffing _f2
*(&local130) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp2788 = *(&local129);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2788));
// unreffing _f1
*(&local129) = ((panda$collections$ImmutableArray*) NULL);
goto block1;
block91:;
panda$core$Int64 $tmp2789 = (panda$core$Int64) {45};
panda$core$Bit $tmp2790 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2789);
bool $tmp2791 = $tmp2790.value;
if ($tmp2791) goto block92; else goto block93;
block92:;
org$pandalanguage$pandac$Position* $tmp2792 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2793 = *$tmp2792;
*(&local131) = $tmp2793;
panda$core$String** $tmp2794 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2795 = *$tmp2794;
*(&local132) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2795));
panda$core$String* $tmp2796 = *(&local132);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2796));
*(&local132) = $tmp2795;
org$pandalanguage$pandac$ASTNode** $tmp2797 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2798 = *$tmp2797;
*(&local133) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2798));
org$pandalanguage$pandac$ASTNode* $tmp2799 = *(&local133);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2799));
*(&local133) = $tmp2798;
// line 1
panda$core$String* $tmp2800 = *(&local132);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2800));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2801 = *(&local133);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2801));
org$pandalanguage$pandac$ASTNode* $tmp2802 = *(&local133);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2802));
// unreffing _f2
*(&local133) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2803 = *(&local132);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2803));
// unreffing _f1
*(&local132) = ((panda$core$String*) NULL);
goto block1;
block93:;
panda$core$Int64 $tmp2804 = (panda$core$Int64) {46};
panda$core$Bit $tmp2805 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2804);
bool $tmp2806 = $tmp2805.value;
if ($tmp2806) goto block94; else goto block95;
block94:;
org$pandalanguage$pandac$Position* $tmp2807 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2808 = *$tmp2807;
*(&local134) = $tmp2808;
panda$collections$ImmutableArray** $tmp2809 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp2810 = *$tmp2809;
*(&local135) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2810));
panda$collections$ImmutableArray* $tmp2811 = *(&local135);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2811));
*(&local135) = $tmp2810;
org$pandalanguage$pandac$ASTNode** $tmp2812 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2813 = *$tmp2812;
*(&local136) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2813));
org$pandalanguage$pandac$ASTNode* $tmp2814 = *(&local136);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2814));
*(&local136) = $tmp2813;
// line 1
panda$collections$ImmutableArray* $tmp2815 = *(&local135);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2815));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2816 = *(&local136);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2816));
org$pandalanguage$pandac$ASTNode* $tmp2817 = *(&local136);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2817));
// unreffing _f2
*(&local136) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$collections$ImmutableArray* $tmp2818 = *(&local135);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2818));
// unreffing _f1
*(&local135) = ((panda$collections$ImmutableArray*) NULL);
goto block1;
block95:;
panda$core$Int64 $tmp2819 = (panda$core$Int64) {47};
panda$core$Bit $tmp2820 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2819);
bool $tmp2821 = $tmp2820.value;
if ($tmp2821) goto block96; else goto block97;
block96:;
org$pandalanguage$pandac$Position* $tmp2822 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2823 = *$tmp2822;
*(&local137) = $tmp2823;
panda$core$String** $tmp2824 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2825 = *$tmp2824;
*(&local138) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2825));
panda$core$String* $tmp2826 = *(&local138);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2826));
*(&local138) = $tmp2825;
// line 1
panda$core$String* $tmp2827 = *(&local138);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2827));
panda$core$String* $tmp2828 = *(&local138);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2828));
// unreffing _f1
*(&local138) = ((panda$core$String*) NULL);
goto block1;
block97:;
panda$core$Int64 $tmp2829 = (panda$core$Int64) {48};
panda$core$Bit $tmp2830 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2829);
bool $tmp2831 = $tmp2830.value;
if ($tmp2831) goto block98; else goto block99;
block98:;
org$pandalanguage$pandac$Position* $tmp2832 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2833 = *$tmp2832;
*(&local139) = $tmp2833;
org$pandalanguage$pandac$Variable$Kind* $tmp2834 = (org$pandalanguage$pandac$Variable$Kind*) (param0->$data + 16);
org$pandalanguage$pandac$Variable$Kind $tmp2835 = *$tmp2834;
*(&local140) = $tmp2835;
panda$collections$ImmutableArray** $tmp2836 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp2837 = *$tmp2836;
*(&local141) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2837));
panda$collections$ImmutableArray* $tmp2838 = *(&local141);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2838));
*(&local141) = $tmp2837;
// line 1
panda$collections$ImmutableArray* $tmp2839 = *(&local141);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2839));
panda$collections$ImmutableArray* $tmp2840 = *(&local141);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2840));
// unreffing _f2
*(&local141) = ((panda$collections$ImmutableArray*) NULL);
goto block1;
block99:;
panda$core$Int64 $tmp2841 = (panda$core$Int64) {49};
panda$core$Bit $tmp2842 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2841);
bool $tmp2843 = $tmp2842.value;
if ($tmp2843) goto block100; else goto block101;
block100:;
org$pandalanguage$pandac$Position* $tmp2844 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2845 = *$tmp2844;
*(&local142) = $tmp2845;
panda$collections$ImmutableArray** $tmp2846 = (panda$collections$ImmutableArray**) (param0->$data + 16);
panda$collections$ImmutableArray* $tmp2847 = *$tmp2846;
*(&local143) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2847));
panda$collections$ImmutableArray* $tmp2848 = *(&local143);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2848));
*(&local143) = $tmp2847;
panda$collections$ImmutableArray** $tmp2849 = (panda$collections$ImmutableArray**) (param0->$data + 24);
panda$collections$ImmutableArray* $tmp2850 = *$tmp2849;
*(&local144) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2850));
panda$collections$ImmutableArray* $tmp2851 = *(&local144);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2851));
*(&local144) = $tmp2850;
// line 1
panda$collections$ImmutableArray* $tmp2852 = *(&local143);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2852));
// line 1
panda$collections$ImmutableArray* $tmp2853 = *(&local144);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2853));
panda$collections$ImmutableArray* $tmp2854 = *(&local144);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2854));
// unreffing _f2
*(&local144) = ((panda$collections$ImmutableArray*) NULL);
panda$collections$ImmutableArray* $tmp2855 = *(&local143);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2855));
// unreffing _f1
*(&local143) = ((panda$collections$ImmutableArray*) NULL);
goto block1;
block101:;
panda$core$Int64 $tmp2856 = (panda$core$Int64) {50};
panda$core$Bit $tmp2857 = panda$core$Int64$$EQ$panda$core$Int64$R$panda$core$Bit($tmp2160, $tmp2856);
bool $tmp2858 = $tmp2857.value;
if ($tmp2858) goto block102; else goto block1;
block102:;
org$pandalanguage$pandac$Position* $tmp2859 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
org$pandalanguage$pandac$Position $tmp2860 = *$tmp2859;
*(&local145) = $tmp2860;
panda$core$String** $tmp2861 = (panda$core$String**) (param0->$data + 16);
panda$core$String* $tmp2862 = *$tmp2861;
*(&local146) = ((panda$core$String*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2862));
panda$core$String* $tmp2863 = *(&local146);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2863));
*(&local146) = $tmp2862;
org$pandalanguage$pandac$ASTNode** $tmp2864 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
org$pandalanguage$pandac$ASTNode* $tmp2865 = *$tmp2864;
*(&local147) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2865));
org$pandalanguage$pandac$ASTNode* $tmp2866 = *(&local147);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2866));
*(&local147) = $tmp2865;
panda$collections$ImmutableArray** $tmp2867 = (panda$collections$ImmutableArray**) (param0->$data + 32);
panda$collections$ImmutableArray* $tmp2868 = *$tmp2867;
*(&local148) = ((panda$collections$ImmutableArray*) NULL);
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) $tmp2868));
panda$collections$ImmutableArray* $tmp2869 = *(&local148);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2869));
*(&local148) = $tmp2868;
// line 1
panda$core$String* $tmp2870 = *(&local146);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2870));
// line 1
org$pandalanguage$pandac$ASTNode* $tmp2871 = *(&local147);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2871));
// line 1
panda$collections$ImmutableArray* $tmp2872 = *(&local148);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2872));
panda$collections$ImmutableArray* $tmp2873 = *(&local148);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2873));
// unreffing _f3
*(&local148) = ((panda$collections$ImmutableArray*) NULL);
org$pandalanguage$pandac$ASTNode* $tmp2874 = *(&local147);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2874));
// unreffing _f2
*(&local147) = ((org$pandalanguage$pandac$ASTNode*) NULL);
panda$core$String* $tmp2875 = *(&local146);
panda$core$Panda$unref$panda$core$Object$Q(((panda$core$Object*) $tmp2875));
// unreffing _f1
*(&local146) = ((panda$core$String*) NULL);
goto block1;
block1:;
// line 6
panda$core$Object$cleanup(((panda$core$Object*) param0));
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, panda$core$String* param4, org$pandalanguage$pandac$ASTNode* param5) {

// line 6
panda$core$Int64* $tmp2876 = &param0->$rawValue;
*$tmp2876 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2877 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2877 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp2878 = (panda$core$String**) (param0->$data + 16);
*$tmp2878 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$core$String** $tmp2879 = (panda$core$String**) (param0->$data + 24);
*$tmp2879 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp2880 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
*$tmp2880 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$collections$ImmutableArray* param3) {

// line 6
panda$core$Int64* $tmp2881 = &param0->$rawValue;
*$tmp2881 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2882 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2882 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$collections$ImmutableArray** $tmp2883 = (panda$collections$ImmutableArray**) (param0->$data + 16);
*$tmp2883 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$ASTNode* param4) {

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
org$pandalanguage$pandac$ASTNode** $tmp2887 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp2887 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3) {

// line 6
panda$core$Int64* $tmp2888 = &param0->$rawValue;
*$tmp2888 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2889 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2889 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp2890 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp2890 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2) {

// line 6
panda$core$Int64* $tmp2891 = &param0->$rawValue;
*$tmp2891 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2892 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2892 = param2;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$parser$Token$Kind param4, org$pandalanguage$pandac$ASTNode* param5) {

// line 6
panda$core$Int64* $tmp2893 = &param0->$rawValue;
*$tmp2893 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2894 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2894 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp2895 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp2895 = param3;
// line 6
org$pandalanguage$pandac$parser$Token$Kind* $tmp2896 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 24);
*$tmp2896 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp2897 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
*$tmp2897 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Bit(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$Bit param3) {

// line 6
panda$core$Int64* $tmp2898 = &param0->$rawValue;
*$tmp2898 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2899 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2899 = param2;
// line 6
panda$core$Bit* $tmp2900 = (panda$core$Bit*) (param0->$data + 16);
*$tmp2900 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3) {

// line 6
panda$core$Int64* $tmp2901 = &param0->$rawValue;
*$tmp2901 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2902 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2902 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp2903 = (panda$core$String**) (param0->$data + 16);
*$tmp2903 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, panda$collections$ImmutableArray* param4) {

// line 6
panda$core$Int64* $tmp2904 = &param0->$rawValue;
*$tmp2904 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2905 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2905 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp2906 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp2906 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$collections$ImmutableArray** $tmp2907 = (panda$collections$ImmutableArray**) (param0->$data + 24);
*$tmp2907 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, panda$core$String* param4, panda$collections$ImmutableArray* param5) {

// line 6
panda$core$Int64* $tmp2908 = &param0->$rawValue;
*$tmp2908 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2909 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2909 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp2910 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp2910 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$core$String** $tmp2911 = (panda$core$String**) (param0->$data + 24);
*$tmp2911 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
panda$collections$ImmutableArray** $tmp2912 = (panda$collections$ImmutableArray**) (param0->$data + 32);
*$tmp2912 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ChoiceCase$panda$core$Int64(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, org$pandalanguage$pandac$ChoiceCase* param4, panda$core$Int64 param5) {

// line 6
panda$core$Int64* $tmp2913 = &param0->$rawValue;
*$tmp2913 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2914 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2914 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp2915 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp2915 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ChoiceCase** $tmp2916 = (org$pandalanguage$pandac$ChoiceCase**) (param0->$data + 24);
*$tmp2916 = param4;
// line 6
panda$core$Int64* $tmp2917 = (panda$core$Int64*) (param0->$data + 32);
*$tmp2917 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ClassDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, panda$collections$ImmutableArray* param4, org$pandalanguage$pandac$ClassDecl$Kind param5, panda$core$String* param6, panda$collections$ImmutableArray* param7, panda$collections$ImmutableArray* param8, panda$collections$ImmutableArray* param9) {

// line 6
panda$core$Int64* $tmp2918 = &param0->$rawValue;
*$tmp2918 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2919 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2919 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp2920 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp2920 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$collections$ImmutableArray** $tmp2921 = (panda$collections$ImmutableArray**) (param0->$data + 24);
*$tmp2921 = param4;
// line 6
org$pandalanguage$pandac$ClassDecl$Kind* $tmp2922 = (org$pandalanguage$pandac$ClassDecl$Kind*) (param0->$data + 32);
*$tmp2922 = param5;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param6));
panda$core$String** $tmp2923 = (panda$core$String**) (param0->$data + 40);
*$tmp2923 = param6;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param7));
panda$collections$ImmutableArray** $tmp2924 = (panda$collections$ImmutableArray**) (param0->$data + 48);
*$tmp2924 = param7;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param8));
panda$collections$ImmutableArray** $tmp2925 = (panda$collections$ImmutableArray**) (param0->$data + 56);
*$tmp2925 = param8;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param9));
panda$collections$ImmutableArray** $tmp2926 = (panda$collections$ImmutableArray**) (param0->$data + 64);
*$tmp2926 = param9;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, panda$collections$ImmutableArray* param4, org$pandalanguage$pandac$ASTNode* param5) {

// line 6
panda$core$Int64* $tmp2927 = &param0->$rawValue;
*$tmp2927 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2928 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2928 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp2929 = (panda$core$String**) (param0->$data + 16);
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
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$core$String(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, panda$core$String* param4) {

// line 6
panda$core$Int64* $tmp2932 = &param0->$rawValue;
*$tmp2932 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2933 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2933 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp2934 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp2934 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$core$String** $tmp2935 = (panda$core$String**) (param0->$data + 24);
*$tmp2935 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, panda$collections$ImmutableArray* param4, org$pandalanguage$pandac$ASTNode* param5) {

// line 6
panda$core$Int64* $tmp2936 = &param0->$rawValue;
*$tmp2936 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2937 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2937 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp2938 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp2938 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$collections$ImmutableArray** $tmp2939 = (panda$collections$ImmutableArray**) (param0->$data + 24);
*$tmp2939 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp2940 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
*$tmp2940 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, panda$collections$ImmutableArray* param2) {

// line 6
panda$core$Int64* $tmp2941 = &param0->$rawValue;
*$tmp2941 = param1;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param2));
panda$collections$ImmutableArray** $tmp2942 = (panda$collections$ImmutableArray**) (param0->$data + 0);
*$tmp2942 = param2;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, org$pandalanguage$pandac$ASTNode* param4, org$pandalanguage$pandac$ASTNode* param5, panda$collections$ImmutableArray* param6) {

// line 6
panda$core$Int64* $tmp2943 = &param0->$rawValue;
*$tmp2943 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2944 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2944 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp2945 = (panda$core$String**) (param0->$data + 16);
*$tmp2945 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp2946 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp2946 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp2947 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
*$tmp2947 = param5;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param6));
panda$collections$ImmutableArray** $tmp2948 = (panda$collections$ImmutableArray**) (param0->$data + 40);
*$tmp2948 = param6;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, panda$collections$ImmutableArray* param4) {

// line 6
panda$core$Int64* $tmp2949 = &param0->$rawValue;
*$tmp2949 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2950 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2950 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp2951 = (panda$core$String**) (param0->$data + 16);
*$tmp2951 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$collections$ImmutableArray** $tmp2952 = (panda$collections$ImmutableArray**) (param0->$data + 24);
*$tmp2952 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3) {

// line 6
panda$core$Int64* $tmp2953 = &param0->$rawValue;
*$tmp2953 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2954 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2954 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp2955 = (panda$core$String**) (param0->$data + 16);
*$tmp2955 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, panda$collections$ImmutableArray* param4, org$pandalanguage$pandac$ASTNode* param5) {

// line 6
panda$core$Int64* $tmp2956 = &param0->$rawValue;
*$tmp2956 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2957 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2957 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp2958 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp2958 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$collections$ImmutableArray** $tmp2959 = (panda$collections$ImmutableArray**) (param0->$data + 24);
*$tmp2959 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp2960 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
*$tmp2960 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$UInt64(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$UInt64 param3) {

// line 6
panda$core$Int64* $tmp2961 = &param0->$rawValue;
*$tmp2961 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2962 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2962 = param2;
// line 6
panda$core$UInt64* $tmp2963 = (panda$core$UInt64*) (param0->$data + 16);
*$tmp2963 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$IR$Value(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$IR$Value* param3) {

// line 6
panda$core$Int64* $tmp2964 = &param0->$rawValue;
*$tmp2964 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2965 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2965 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$IR$Value** $tmp2966 = (org$pandalanguage$pandac$IR$Value**) (param0->$data + 16);
*$tmp2966 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, panda$collections$ImmutableArray* param4) {

// line 6
panda$core$Int64* $tmp2967 = &param0->$rawValue;
*$tmp2967 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2968 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2968 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp2969 = (panda$core$String**) (param0->$data + 16);
*$tmp2969 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$collections$ImmutableArray** $tmp2970 = (panda$collections$ImmutableArray**) (param0->$data + 24);
*$tmp2970 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, panda$collections$ImmutableArray* param4, panda$collections$ImmutableArray* param5) {

// line 6
panda$core$Int64* $tmp2971 = &param0->$rawValue;
*$tmp2971 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2972 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2972 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp2973 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp2973 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$collections$ImmutableArray** $tmp2974 = (panda$collections$ImmutableArray**) (param0->$data + 24);
*$tmp2974 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
panda$collections$ImmutableArray** $tmp2975 = (panda$collections$ImmutableArray**) (param0->$data + 32);
*$tmp2975 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$MethodDecl$Kind$panda$core$String$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, panda$collections$ImmutableArray* param4, org$pandalanguage$pandac$MethodDecl$Kind param5, panda$core$String* param6, panda$collections$ImmutableArray* param7, panda$collections$ImmutableArray* param8, org$pandalanguage$pandac$ASTNode* param9, panda$collections$ImmutableArray* param10) {

// line 6
panda$core$Int64* $tmp2976 = &param0->$rawValue;
*$tmp2976 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2977 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2977 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp2978 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp2978 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$collections$ImmutableArray** $tmp2979 = (panda$collections$ImmutableArray**) (param0->$data + 24);
*$tmp2979 = param4;
// line 6
org$pandalanguage$pandac$MethodDecl$Kind* $tmp2980 = (org$pandalanguage$pandac$MethodDecl$Kind*) (param0->$data + 32);
*$tmp2980 = param5;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param6));
panda$core$String** $tmp2981 = (panda$core$String**) (param0->$data + 40);
*$tmp2981 = param6;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param7));
panda$collections$ImmutableArray** $tmp2982 = (panda$collections$ImmutableArray**) (param0->$data + 48);
*$tmp2982 = param7;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param8));
panda$collections$ImmutableArray** $tmp2983 = (panda$collections$ImmutableArray**) (param0->$data + 56);
*$tmp2983 = param8;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param9));
org$pandalanguage$pandac$ASTNode** $tmp2984 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 64);
*$tmp2984 = param9;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param10));
panda$collections$ImmutableArray** $tmp2985 = (panda$collections$ImmutableArray**) (param0->$data + 72);
*$tmp2985 = param10;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$parser$Token$Kind param3, panda$collections$ImmutableArray* param4, org$pandalanguage$pandac$ASTNode* param5) {

// line 6
panda$core$Int64* $tmp2986 = &param0->$rawValue;
*$tmp2986 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2987 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2987 = param2;
// line 6
org$pandalanguage$pandac$parser$Token$Kind* $tmp2988 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
*$tmp2988 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$collections$ImmutableArray** $tmp2989 = (panda$collections$ImmutableArray**) (param0->$data + 24);
*$tmp2989 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp2990 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 32);
*$tmp2990 = param5;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, org$pandalanguage$pandac$ASTNode* param4) {

// line 6
panda$core$Int64* $tmp2991 = &param0->$rawValue;
*$tmp2991 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2992 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2992 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp2993 = (panda$core$String**) (param0->$data + 16);
*$tmp2993 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp2994 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp2994 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$parser$Token$Kind$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$parser$Token$Kind param3, org$pandalanguage$pandac$ASTNode* param4) {

// line 6
panda$core$Int64* $tmp2995 = &param0->$rawValue;
*$tmp2995 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp2996 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp2996 = param2;
// line 6
org$pandalanguage$pandac$parser$Token$Kind* $tmp2997 = (org$pandalanguage$pandac$parser$Token$Kind*) (param0->$data + 16);
*$tmp2997 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp2998 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp2998 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q$panda$core$Bit$org$pandalanguage$pandac$ASTNode$Q$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3, panda$core$Bit param4, org$pandalanguage$pandac$ASTNode* param5, org$pandalanguage$pandac$ASTNode* param6) {

// line 6
panda$core$Int64* $tmp2999 = &param0->$rawValue;
*$tmp2999 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3000 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3000 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3001 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3001 = param3;
// line 6
panda$core$Bit* $tmp3002 = (panda$core$Bit*) (param0->$data + 24);
*$tmp3002 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
org$pandalanguage$pandac$ASTNode** $tmp3003 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 25);
*$tmp3003 = param5;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param6));
org$pandalanguage$pandac$ASTNode** $tmp3004 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 33);
*$tmp3004 = param6;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$Real64(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$Real64 param3) {

// line 6
panda$core$Int64* $tmp3005 = &param0->$rawValue;
*$tmp3005 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3006 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3006 = param2;
// line 6
panda$core$Real64* $tmp3007 = (panda$core$Real64*) (param0->$data + 16);
*$tmp3007 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$ASTNode* param3) {

// line 6
panda$core$Int64* $tmp3008 = &param0->$rawValue;
*$tmp3008 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3009 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3009 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
org$pandalanguage$pandac$ASTNode** $tmp3010 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 16);
*$tmp3010 = param3;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$org$pandalanguage$pandac$ASTNode(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$collections$ImmutableArray* param3, org$pandalanguage$pandac$ASTNode* param4) {

// line 6
panda$core$Int64* $tmp3011 = &param0->$rawValue;
*$tmp3011 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3012 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3012 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$collections$ImmutableArray** $tmp3013 = (panda$collections$ImmutableArray**) (param0->$data + 16);
*$tmp3013 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp3014 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp3014 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$org$pandalanguage$pandac$ASTNode$Q(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, org$pandalanguage$pandac$ASTNode* param4) {

// line 6
panda$core$Int64* $tmp3015 = &param0->$rawValue;
*$tmp3015 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3016 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3016 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp3017 = (panda$core$String**) (param0->$data + 16);
*$tmp3017 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp3018 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp3018 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$org$pandalanguage$pandac$Variable$Kind$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, org$pandalanguage$pandac$Variable$Kind param3, panda$collections$ImmutableArray* param4) {

// line 6
panda$core$Int64* $tmp3019 = &param0->$rawValue;
*$tmp3019 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3020 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3020 = param2;
// line 6
org$pandalanguage$pandac$Variable$Kind* $tmp3021 = (org$pandalanguage$pandac$Variable$Kind*) (param0->$data + 16);
*$tmp3021 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$collections$ImmutableArray** $tmp3022 = (panda$collections$ImmutableArray**) (param0->$data + 24);
*$tmp3022 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$collections$ImmutableArray* param3, panda$collections$ImmutableArray* param4) {

// line 6
panda$core$Int64* $tmp3023 = &param0->$rawValue;
*$tmp3023 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3024 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3024 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$collections$ImmutableArray** $tmp3025 = (panda$collections$ImmutableArray**) (param0->$data + 16);
*$tmp3025 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
panda$collections$ImmutableArray** $tmp3026 = (panda$collections$ImmutableArray**) (param0->$data + 24);
*$tmp3026 = param4;
return;

}
void org$pandalanguage$pandac$ASTNode$init$panda$core$Int64$org$pandalanguage$pandac$Position$panda$core$String$Q$org$pandalanguage$pandac$ASTNode$panda$collections$ImmutableArray$LTorg$pandalanguage$pandac$ASTNode$GT(org$pandalanguage$pandac$ASTNode* param0, panda$core$Int64 param1, org$pandalanguage$pandac$Position param2, panda$core$String* param3, org$pandalanguage$pandac$ASTNode* param4, panda$collections$ImmutableArray* param5) {

// line 6
panda$core$Int64* $tmp3027 = &param0->$rawValue;
*$tmp3027 = param1;
// line 6
org$pandalanguage$pandac$Position* $tmp3028 = (org$pandalanguage$pandac$Position*) (param0->$data + 0);
*$tmp3028 = param2;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param3));
panda$core$String** $tmp3029 = (panda$core$String**) (param0->$data + 16);
*$tmp3029 = param3;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param4));
org$pandalanguage$pandac$ASTNode** $tmp3030 = (org$pandalanguage$pandac$ASTNode**) (param0->$data + 24);
*$tmp3030 = param4;
// line 6
panda$core$Panda$ref$panda$core$Object$Q(((panda$core$Object*) param5));
panda$collections$ImmutableArray** $tmp3031 = (panda$collections$ImmutableArray**) (param0->$data + 32);
*$tmp3031 = param5;
return;

}






